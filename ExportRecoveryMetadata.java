import com.google.gson.stream.JsonWriter;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.data.Composite;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeComponent;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.Iterator;

public class ExportRecoveryMetadata extends GhidraScript {
    @Override
    public void run() throws Exception {
        Path destination = Path.of(getScriptArgs()[0]);
        try (JsonWriter writer = new JsonWriter(Files.newBufferedWriter(destination, StandardCharsets.UTF_8))) {
            writer.setIndent("  ");
            writer.beginObject();
            writer.name("program").value(currentProgram.getName());
            writer.name("sha256").value(currentProgram.getExecutableSHA256());
            writer.name("functions").beginArray();
            FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
            while (functions.hasNext()) {
                monitor.checkCancelled();
                Function function = functions.next();
                writer.beginObject();
                writer.name("address").value("0x" + function.getEntryPoint().toString());
                writer.name("name").value(function.getName(true));
                writer.name("signature").value(function.getSignature().getPrototypeString());
                writer.name("external").value(function.isExternal());
                writer.name("thunk").value(function.isThunk());
                writer.name("body_bytes").value(function.getBody().getNumAddresses());
                writer.name("calls").beginArray();
                for (Function callee : function.getCalledFunctions(monitor)) {
                    writer.beginObject();
                    writer.name("address").value("0x" + callee.getEntryPoint().toString());
                    writer.name("name").value(callee.getName(true));
                    writer.endObject();
                }
                writer.endArray();
                writer.endObject();
            }
            writer.endArray();
            writer.name("data_types").beginArray();
            Iterator<DataType> types = currentProgram.getDataTypeManager().getAllDataTypes();
            while (types.hasNext()) {
                monitor.checkCancelled();
                DataType type = types.next();
                writer.beginObject();
                writer.name("path").value(type.getPathName());
                writer.name("name").value(type.getName());
                writer.name("length").value(type.getLength());
                if (type instanceof Composite composite) {
                    writer.name("fields").beginArray();
                    for (DataTypeComponent component : composite.getDefinedComponents()) {
                        writer.beginObject();
                        writer.name("name").value(component.getFieldName());
                        writer.name("offset").value(component.getOffset());
                        writer.name("type").value(component.getDataType().getPathName());
                        writer.endObject();
                    }
                    writer.endArray();
                }
                writer.endObject();
            }
            writer.endArray();
            writer.endObject();
        }
        println("Recovery metadata written to " + destination);
    }
}
