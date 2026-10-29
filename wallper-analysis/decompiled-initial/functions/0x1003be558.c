// rea decompile_all
// name: FUN_1003be558
// address: 0x1003be558
// body: available
// range: 0x1003be558-0x1003bf05b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003bef54 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003be558(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  MainActor *pMVar4;
  undefined1 uVar5;
  bool bVar6;
  Optional OVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  TupleView TVar12;
  VStack VVar13;
  ScrollView SVar14;
  State SVar15;
  code *pcVar16;
  code *pcVar17;
  code *pcVar18;
  MainActor *this;
  MainActor *pMVar19;
  EnvironmentObject<undefined> EVar20;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long lVar21;
  code *pcVar22;
  undefined *puVar23;
  long lVar24;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long lVar25;
  byte bVar26;
  ulong uVar27;
  long lVar28;
  long lVar29;
  code *pcVar30;
  long lVar31;
  ulong uVar32;
  long local_180;
  long local_178;
  long local_170;
  long local_168;
  undefined8 local_160;
  undefined8 local_158;
  State local_150;
  long local_148;
  long local_140;
  undefined8 *local_138;
  code *local_130;
  code *local_128;
  code *local_120;
  undefined *local_118;
  MainActor *local_110;
  long local_108;
  undefined *local_100;
  long local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  long local_e0;
  long local_d8;
  undefined *local_d0;
  long local_c8;
  code *local_c0;
  long local_b8;
  undefined *local_b0;
  undefined *puStack_a8;
  undefined *local_a0;
  undefined *puStack_98;
  undefined *local_90;
  long local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  
  lVar8 = 0;
  local_158 = param_4;
  local_f0 = param_1;
  FUN_1003cff30();
  local_170 = *(long *)(lVar8 + -8);
  local_168 = *(long *)(local_170 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)(local_168 + 0xfU & 0xfffffffffffffff0);
  puVar23 = &DAT_100560258;
  local_110 = (MainActor *)((long)&local_180 - extraout_x8);
  FUN_100002f94(&DAT_100560258,&DAT_100435d70);
  local_100 = puVar23;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar23 + -8) + 0x40));
  lVar21 = ((long)&local_180 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_f8 = lVar21;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar21 = lVar21 - extraout_x12;
  puVar9 = (undefined8 *)0x0;
  local_c8 = lVar21;
  FUN_10040211c();
  lVar29 = puVar9[-1];
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar29 + 0x40));
  lVar21 = lVar21 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_108 = lVar21;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar21 = lVar21 - extraout_x12_00;
  puVar10 = (undefined8 *)&DAT_10054b6b8;
  local_180 = lVar21;
  FUN_100002f94(&DAT_10054b6b8,&DAT_10041ca50);
  local_138 = puVar10;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(puVar10[-1] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar21 = lVar21 - extraout_x8_02;
  puVar23 = &DAT_10054ac40;
  FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar23 + -8) + 0x40));
  pcVar22 = (code *)(lVar21 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  local_120 = pcVar22;
  (*(code *)PTR____chkstk_darwin_100521118)();
  pcVar22 = pcVar22 + -extraout_x12_01;
  local_128 = pcVar22;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar28 = (long)pcVar22 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar31 = lVar28 - extraout_x12_03;
  puVar23 = &DAT_100560238;
  FUN_100002fe4(&DAT_100560238,&DAT_100435d50);
  local_160 = param_3;
  local_90 = puVar23;
  SwiftUI::ModifiedContent::typeMetadataAccessor();
  SwiftUI::ModifiedContent::typeMetadataAccessor();
  SwiftUI::ModifiedContent::typeMetadataAccessor();
  FUN_100002fe4(&DAT_10054aa20,&DAT_10041bcb0);
  SwiftUI::ModifiedContent::typeMetadataAccessor();
  OVar7 = Swift::Optional::typeMetadataAccessor();
  local_88 = CONCAT71((int7)((ulong)puVar23 >> 8),OVar7.value);
  puVar23 = &DAT_100560240;
  FUN_100002fe4(&DAT_100560240,&DAT_100435d58);
  puVar11 = &DAT_100560248;
  local_80 = puVar23;
  FUN_100002fe4(&DAT_100560248,&DAT_100435d60);
  puVar23 = &DAT_100560250;
  local_78 = puVar11;
  FUN_100002fe4(&DAT_100560250,&DAT_100435d68);
  local_70 = puVar23;
  _swift_getTupleTypeMetadata(0xff,5,&local_90,0,0);
  TVar12 = SwiftUI::TupleView::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0,TVar12.unknown);
  VVar13 = SwiftUI::VStack::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_1005234c0,VVar13.unknown);
  SVar14 = SwiftUI::ScrollView::typeMetadataAccessor();
  local_130 = *(code **)(SVar14.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_130 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar25 = lVar31 - extraout_x8_04;
  local_d0 = (undefined *)SwiftUI::ModifiedContent::typeMetadataAccessor();
  local_e0 = *(long *)(local_d0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_e0 + 0x40));
  puVar23 = (undefined *)(lVar25 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0));
  local_118 = puVar23;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar24 = (long)puVar23 - extraout_x12_04;
  local_140 = lVar24;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_d8 = lVar24 - extraout_x12_05;
  FUN_1003bf05c(lVar25,lVar8);
  iVar1 = *(int *)(lVar8 + 0x6c);
  SVar15.unknown = &DAT_1005602d0;
  local_178 = lVar8;
  FUN_100002f94(&DAT_1005602d0,&DAT_100435db8);
  local_150.unknown = SVar15.unknown;
  local_148 = (long)iVar1;
  local_e8 = param_2;
  SwiftUI::State::get_wrappedValue(SVar15);
  (**(code **)(lVar29 + 0x38))(lVar28,1,1,puVar9);
  lVar8 = (long)*(int *)(local_138 + 6);
  FUN_1000087e4(lVar31,lVar21,&DAT_10054ac40,&DAT_10041ce70);
  FUN_1000087e4(lVar28,lVar21 + lVar8,&DAT_10054ac40,&DAT_10041ce70);
  pcVar22 = *(code **)(lVar29 + 0x30);
  lVar24 = lVar21;
  (*pcVar22)(lVar21,1,puVar9);
  if ((int)lVar24 == 1) {
    FUN_10002a29c(lVar28,&DAT_10054ac40,&DAT_10041ce70);
    FUN_10002a29c(lVar31,&DAT_10054ac40,&DAT_10041ce70);
    lVar8 = lVar21 + lVar8;
    (*pcVar22)(lVar8,1,puVar9);
    if ((int)lVar8 == 1) {
      FUN_10002a29c(lVar21,&DAT_10054ac40,&DAT_10041ce70);
      bVar26 = 1;
      goto LAB_1003bec18;
    }
  }
  else {
    FUN_1000087e4(lVar21,local_128,&DAT_10054ac40,&DAT_10041ce70);
    lVar24 = lVar21 + lVar8;
    local_138 = puVar9;
    (*pcVar22)(lVar24,1,puVar9);
    lVar29 = local_180;
    if ((int)lVar24 != 1) {
      FUN_100007e64(lVar21 + lVar8,local_180,FUN_10040211c);
      pcVar17 = local_128;
      pcVar16 = local_128;
      FUN_10040a7a0(local_128,lVar29);
      bVar26 = (byte)pcVar16;
      FUN_100029548(lVar29,FUN_10040211c);
      FUN_10002a29c(lVar28,&DAT_10054ac40,&DAT_10041ce70);
      FUN_10002a29c(lVar31,&DAT_10054ac40,&DAT_10041ce70);
      FUN_100029548(pcVar17,FUN_10040211c);
      FUN_10002a29c(lVar21,&DAT_10054ac40,&DAT_10041ce70);
      puVar9 = local_138;
      goto LAB_1003bec18;
    }
    FUN_10002a29c(lVar28,&DAT_10054ac40,&DAT_10041ce70);
    FUN_10002a29c(lVar31,&DAT_10054ac40,&DAT_10041ce70);
    FUN_100029548(local_128,FUN_10040211c);
    puVar9 = local_138;
  }
  FUN_10002a29c(lVar21,&DAT_10054b6b8,&DAT_10041ca50);
  bVar26 = 0;
LAB_1003bec18:
  lVar24 = local_c8;
  puVar11 = PTR_SwiftUI__SwiftUI__ScrollView<undefined>_>SwiftUI__View_100521c28;
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__ScrollView<undefined>_>SwiftUI__View_100521c28,SVar14.unknown);
  lVar8 = local_140;
  (extension_SwiftUI)::SwiftUI::View::_allowsHitTesting((bool)(bVar26 & 1));
  (**(code **)(local_130 + 8))(lVar25,SVar14.unknown);
  puVar23 = local_d0;
  puStack_98 = 
  PTR___protocol_witness_table_for_SwiftUI__AllowsHitTestingModifier___SwiftUI_ViewModifier_in_SwiftUI_100522b18
  ;
  pcVar17 = (code *)
            PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
  local_a0 = puVar11;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
             local_d0,&local_a0);
  thunk_FUN_1000bdaa4(local_d8,lVar8,puVar23,pcVar17);
  pcVar30 = *(code **)(local_e0 + 8);
  (*pcVar30)(lVar8,puVar23);
  uVar2 = local_e8;
  pcVar16 = local_120;
  SwiftUI::State::get_wrappedValue(local_150);
  pcVar18 = pcVar16;
  (*pcVar22)(pcVar16,1,puVar9);
  lVar8 = local_108;
  bVar6 = (int)pcVar18 != 1;
  if (bVar6) {
    FUN_100007e64(pcVar16,local_108,FUN_10040211c);
    FUN_100029504(lVar8,lVar24,FUN_10040211c);
    lVar24 = local_170;
    lVar8 = local_178;
    local_130 = *(code **)(local_170 + 0x10);
    (*local_130)(local_110,uVar2,local_178);
    this = Swift::MainActor::typeMetadataAccessor();
    puVar23 = PTR_typeMetadataAccessor_1005246d8;
    pMVar19 = Swift::MainActor::get_shared(this,this);
    puVar10 = &DAT_100558b80;
    local_120 = pcVar30;
    FUN_1000036d0(&DAT_100558b80,puVar23,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
    lVar21 = local_168;
    uVar32 = (ulong)*(byte *)(lVar24 + 0x50);
    uVar27 = uVar32 + 0x30 & (uVar32 ^ 0xffffffffffffffff);
    puVar23 = &DAT_10053db08;
    local_138 = puVar10;
    _swift_allocObject(&DAT_10053db08,uVar27 + local_168,uVar32 | 7);
    pMVar4 = local_110;
    uVar3 = local_158;
    uVar2 = local_160;
    *(MainActor **)(puVar23 + 0x10) = pMVar19;
    *(undefined8 **)(puVar23 + 0x18) = puVar10;
    *(undefined8 *)(puVar23 + 0x20) = local_160;
    *(undefined8 *)(puVar23 + 0x28) = local_158;
    pcVar22 = *(code **)(lVar24 + 0x20);
    local_128 = pcVar17;
    (*pcVar22)(puVar23 + uVar27,local_110,lVar8);
    pMVar19 = pMVar4;
    (*local_130)(pMVar4,local_e8,lVar8);
    pMVar19 = Swift::MainActor::get_shared(this,pMVar19);
    puVar23 = &DAT_10053db30;
    _swift_allocObject(&DAT_10053db30,uVar27 + lVar21,uVar32 | 7);
    pcVar30 = local_120;
    *(MainActor **)(puVar23 + 0x10) = pMVar19;
    *(undefined8 **)(puVar23 + 0x18) = local_138;
    *(undefined8 *)(puVar23 + 0x20) = uVar2;
    *(undefined8 *)(puVar23 + 0x28) = uVar3;
    (*pcVar22)(puVar23 + uVar27,pMVar4,lVar8);
    puVar23 = PTR___type_metadata_for_Swift_Bool_100523b70;
    SwiftUI::Binding::init();
    lVar8 = local_88;
    puVar11 = local_90;
    uVar5 = local_80._0_1_;
    FUN_100279594(0);
    puVar10 = &DAT_100553dd0;
    FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
    EVar20 = SwiftUI::EnvironmentObject::init();
    lVar21 = 0;
    FUN_1003e437c();
    lVar24 = local_c8;
    pcVar17 = local_128;
    puVar9 = (undefined8 *)(local_c8 + *(int *)(lVar21 + 0x14));
    *puVar9 = puVar11;
    puVar9[1] = lVar8;
    *(undefined1 *)(puVar9 + 2) = uVar5;
    puVar9 = (undefined8 *)(local_c8 + *(int *)(lVar21 + 0x18));
    *puVar9 = EVar20.unknown;
    puVar9[1] = puVar10;
    local_b0 = (undefined *)((ulong)local_b0 & 0xffffffffffffff00);
    SwiftUI::State::init(local_c8 + *(int *)(lVar21 + 0x1c),lVar21,puVar23);
    FUN_100029548(local_108,FUN_10040211c);
    pcVar22 = *(code **)(*(long *)(lVar21 + -8) + 0x38);
  }
  else {
    FUN_10002a29c(pcVar16,&DAT_10054ac40,&DAT_10041ce70);
    lVar21 = 0;
    FUN_1003e437c();
    pcVar22 = *(code **)(*(long *)(lVar21 + -8) + 0x38);
  }
  (*pcVar22)(lVar24,!bVar6,1,lVar21);
  puVar11 = local_d0;
  lVar21 = local_d8;
  puVar23 = local_118;
  (**(code **)(local_e0 + 0x10))(local_118,local_d8,local_d0);
  lVar8 = local_f8;
  local_90 = puVar23;
  lVar25 = lVar24;
  FUN_1000087e4(lVar24,local_f8,&DAT_100560258,&DAT_100435d70);
  local_88 = lVar8;
  local_b0 = puVar11;
  puStack_a8 = local_100;
  local_c0 = pcVar17;
  FUN_1003e4390();
  local_b8 = lVar25;
  FUN_1003bb3f8(local_f0,&local_90,2,&local_b0,&local_c0);
  FUN_10002a29c(lVar24,&DAT_100560258,&DAT_100435d70);
  (*pcVar30)(lVar21,puVar11);
  FUN_10002a29c(lVar8,&DAT_100560258,&DAT_100435d70);
  (*pcVar30)(puVar23,puVar11);
  return;
}

