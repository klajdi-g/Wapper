// rea decompile_all
// name: FUN_1003c1888
// address: 0x1003c1888
// body: available
// range: 0x1003c1888-0x1003c1acb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003c1888(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  Optional OVar1;
  undefined *puVar2;
  undefined7 extraout_var;
  undefined *puVar3;
  TupleView TVar4;
  VStack VVar5;
  VStack VVar6;
  HorizontalAlignment alignment;
  long extraout_x8;
  long extraout_x12;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  
  puVar2 = &DAT_100560238;
  FUN_100002fe4(&DAT_100560238,&DAT_100435d50);
  local_90 = puVar2;
  SwiftUI::ModifiedContent::typeMetadataAccessor();
  SwiftUI::ModifiedContent::typeMetadataAccessor();
  SwiftUI::ModifiedContent::typeMetadataAccessor();
  FUN_100002fe4(&DAT_10054aa20,&DAT_10041bcb0);
  SwiftUI::ModifiedContent::typeMetadataAccessor();
  OVar1 = Swift::Optional::typeMetadataAccessor();
  local_88 = CONCAT71(extraout_var,OVar1.value);
  puVar2 = &DAT_100560240;
  FUN_100002fe4(&DAT_100560240,&DAT_100435d58);
  puVar3 = &DAT_100560248;
  local_80 = puVar2;
  FUN_100002fe4(&DAT_100560248,&DAT_100435d60);
  puVar2 = &DAT_100560250;
  local_78 = puVar3;
  FUN_100002fe4(&DAT_100560250,&DAT_100435d68);
  local_70 = puVar2;
  _swift_getTupleTypeMetadata(0xff,5,&local_90,0,0);
  TVar4 = SwiftUI::TupleView::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0,TVar4.unknown);
  VVar5 = SwiftUI::VStack::typeMetadataAccessor();
  lVar10 = *(long *)(VVar5.unknown + -8);
  VVar6 = VVar5;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar10 + 0x40));
  lVar8 = (long)&local_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar9 = lVar8 - extraout_x12;
  alignment = SwiftUI::HorizontalAlignment::get_leading(VVar6.unknown);
  local_80 = (undefined *)param_3;
  local_78 = (undefined *)param_4;
  local_70 = (undefined *)param_2;
  SwiftUI::VStack::_init(alignment);
  puVar2 = PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_1005234c0;
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_1005234c0,VVar5.unknown);
  thunk_FUN_1000bdaa4(lVar9,lVar8,VVar5.unknown,puVar2);
  pcVar7 = *(code **)(lVar10 + 8);
  (*pcVar7)(lVar8,VVar5.unknown);
  thunk_FUN_1000bdaa4(param_1,lVar9,VVar5.unknown,puVar2);
  (*pcVar7)(lVar9,VVar5.unknown);
  return;
}

