// rea decompile_all
// name: FUN_1003ecf6c
// address: 0x1003ecf6c
// body: available
// range: 0x1003ecf6c-0x1003ed2a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003ecf6c(void)

{
  Optional OVar1;
  undefined *puVar2;
  undefined7 extraout_var;
  undefined *puVar3;
  TupleView TVar4;
  VStack VVar5;
  ModifiedContent MVar6;
  ZStack ZVar7;
  ModifiedContent MVar8;
  ModifiedContent MVar9;
  ModifiedContent MVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *local_c8;
  undefined *puStack_c0;
  undefined *local_b8;
  undefined *puStack_b0;
  undefined *local_a8;
  undefined *puStack_a0;
  undefined *local_98;
  undefined *puStack_90;
  undefined *local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  
  puVar2 = &DAT_100560238;
  FUN_100002fe4(&DAT_100560238,&DAT_100435d50);
  local_88 = puVar2;
  SwiftUI::ModifiedContent::typeMetadataAccessor();
  SwiftUI::ModifiedContent::typeMetadataAccessor();
  SwiftUI::ModifiedContent::typeMetadataAccessor();
  FUN_100002fe4(&DAT_10054aa20,&DAT_10041bcb0);
  SwiftUI::ModifiedContent::typeMetadataAccessor();
  OVar1 = Swift::Optional::typeMetadataAccessor();
  local_80 = CONCAT71(extraout_var,OVar1.value);
  puVar2 = &DAT_100560240;
  FUN_100002fe4(&DAT_100560240,&DAT_100435d58);
  puVar3 = &DAT_100560248;
  local_78 = puVar2;
  FUN_100002fe4(&DAT_100560248,&DAT_100435d60);
  puVar2 = &DAT_100560250;
  local_70 = puVar3;
  FUN_100002fe4(&DAT_100560250,&DAT_100435d68);
  local_68 = puVar2;
  _swift_getTupleTypeMetadata(0xff,5,&local_88,0,0);
  TVar4 = SwiftUI::TupleView::typeMetadataAccessor();
  puVar3 = PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0;
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0,TVar4.unknown);
  VVar5 = SwiftUI::VStack::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_1005234c0,VVar5.unknown);
  SwiftUI::ScrollView::typeMetadataAccessor();
  MVar6 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  puVar2 = &DAT_100560258;
  FUN_100002fe4(&DAT_100560258,&DAT_100435d70);
  _swift_getTupleTypeMetadata2(0xff,MVar6.unknown,puVar2,0,0);
  TVar4 = SwiftUI::TupleView::typeMetadataAccessor();
  _swift_getWitnessTable(puVar3,TVar4.unknown);
  ZVar7 = SwiftUI::ZStack::typeMetadataAccessor();
  FUN_100002fe4(&DAT_100560260,&DAT_100435d78);
  MVar6 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  FUN_100002fe4(&DAT_100560268,&DAT_100435d80);
  MVar8 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  MVar9 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  MVar10 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  puVar11 = PTR_SwiftUI__SwiftUI__ZStack<undefined>_>SwiftUI__View_1005234e0;
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__ZStack<undefined>_>SwiftUI__View_1005234e0,ZVar7.unknown);
  puVar13 = PTR_SwiftUI__SwiftUI___BackgroundModifier<undefined>_>SwiftUI__ViewModifier_100522800;
  puVar2 = &DAT_1005602e0;
  FUN_1000087a0(&DAT_1005602e0,&DAT_100560260,&DAT_100435d78,
                PTR_SwiftUI__SwiftUI___BackgroundModifier<undefined>_>SwiftUI__ViewModifier_100522800
               );
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
  puVar12 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
  local_98 = puVar11;
  puStack_90 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
             MVar6.unknown,&local_98);
  puVar2 = &DAT_1005602f8;
  FUN_1000087a0(&DAT_1005602f8,&DAT_100560268,&DAT_100435d80,puVar13);
  puVar13 = puVar3;
  local_a8 = puVar12;
  puStack_a0 = puVar2;
  _swift_getWitnessTable(puVar3,MVar8.unknown,&local_a8);
  puVar2 = 
  PTR___protocol_witness_table_for_SwiftUI__AppearanceActionModifier___SwiftUI_ViewModifier_in_SwiftUI_100522b30
  ;
  puStack_b0 = 
  PTR___protocol_witness_table_for_SwiftUI__AppearanceActionModifier___SwiftUI_ViewModifier_in_SwiftUI_100522b30
  ;
  puVar11 = puVar3;
  local_b8 = puVar13;
  _swift_getWitnessTable(puVar3,MVar9.unknown,&local_b8);
  puStack_c0 = puVar2;
  local_c8 = puVar11;
  _swift_getWitnessTable(puVar3,MVar10.unknown,&local_c8);
  return;
}

