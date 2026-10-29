// rea decompile_all
// name: FUN_1003bf05c
// address: 0x1003bf05c
// body: available
// range: 0x1003bf05c-0x1003bf1fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003bf05c(Set param_1)

{
  Optional OVar1;
  Set SVar2;
  undefined *puVar3;
  undefined7 extraout_var;
  undefined *puVar4;
  TupleView TVar5;
  VStack VVar6;
  undefined *local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined8 local_50;
  undefined8 uStack_48;
  
  SVar2 = SwiftUI::Axis::Set::get_vertical(param_1);
  uStack_48 = *(undefined8 *)(param_1.unknown + 0x18);
  local_50 = *(undefined8 *)(param_1.unknown + 0x10);
  puVar3 = &DAT_100560238;
  FUN_100002fe4(&DAT_100560238,&DAT_100435d50);
  local_88 = puVar3;
  SwiftUI::ModifiedContent::typeMetadataAccessor();
  SwiftUI::ModifiedContent::typeMetadataAccessor();
  SwiftUI::ModifiedContent::typeMetadataAccessor();
  FUN_100002fe4(&DAT_10054aa20,&DAT_10041bcb0);
  SwiftUI::ModifiedContent::typeMetadataAccessor();
  OVar1 = Swift::Optional::typeMetadataAccessor();
  local_80 = CONCAT71(extraout_var,OVar1.value);
  puVar3 = &DAT_100560240;
  FUN_100002fe4(&DAT_100560240,&DAT_100435d58);
  puVar4 = &DAT_100560248;
  local_78 = puVar3;
  FUN_100002fe4(&DAT_100560248,&DAT_100435d60);
  puVar3 = &DAT_100560250;
  local_70 = puVar4;
  FUN_100002fe4(&DAT_100560250,&DAT_100435d68);
  local_68 = puVar3;
  _swift_getTupleTypeMetadata(0xff,5,&local_88,0,0);
  TVar5 = SwiftUI::TupleView::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0,TVar5.unknown);
  VVar6 = SwiftUI::VStack::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_1005234c0,VVar6.unknown);
  SwiftUI::ScrollView::_init(SVar2,true);
  return;
}

