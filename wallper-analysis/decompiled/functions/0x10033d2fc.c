// rea decompile_all
// name: FUN_10033d2fc
// address: 0x10033d2fc
// body: available
// range: 0x10033d2fc-0x10033d3ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10033d3a0 to 0x1004149e4 _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10033d2fc(undefined8 *param_1,long param_2)

{
  StateObject SVar1;
  undefined *puVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  State local_60;
  long lStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lStack_58 = param_1[1];
  if (lStack_58 != 0) {
    local_38 = param_1[5];
    local_50 = param_1[2];
    local_60.unknown = (undefined *)*param_1;
    uStack_40 = param_1[4];
    local_48 = param_1[3];
    SVar1.unknown = *(undefined **)(param_2 + 0x18);
    FUN_1000447d4(0);
    FUN_1000036d0(&DAT_10054d408,FUN_1000447d4,&TargetProtocolConformanceDescriptor_10041dc44);
    SwiftUI::StateObject::get_wrappedValue(SVar1);
    FUN_10004462c(&local_60);
    _swift_release(SVar1.unknown);
    return;
  }
  lStack_58 = *(undefined8 *)(param_2 + 0x38);
  local_60.unknown = *(undefined **)(param_2 + 0x30);
  local_50 = *(undefined8 *)(param_2 + 0x40);
  local_70 = 0;
  uStack_68 = 0;
  puVar2 = &DAT_10054ab90;
  FUN_100002f94(&DAT_10054ab90,&DAT_10041bdb0);
  SwiftUI::State::set_wrappedValue(&local_60,&local_70,puVar2);
  switchD_10033ccc8::caseD_f0();
  return;
}

