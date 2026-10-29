// rea decompile_all
// name: FUN_100325028
// address: 0x100325028
// body: available
// range: 0x100325028-0x10032589f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010032546c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100325028(undefined8 param_1,undefined *param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  StateObject SVar11;
  Alignment AVar12;
  EnvironmentObject<undefined> EVar13;
  AnyTransition AVar14;
  Color CVar15;
  Color CVar16;
  undefined *puVar17;
  TargetProtocolConformanceDescriptor *pTVar18;
  void *pvVar19;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar20;
  long lVar21;
  ulong uVar22;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  String SVar26;
  String SVar27;
  long alStack_1e0 [6];
  long lStack_1b0;
  undefined8 *local_1a8 [2];
  long local_198;
  undefined *local_190;
  long local_188 [3];
  undefined *local_170 [2];
  long local_160 [10];
  undefined *local_110;
  undefined8 uStack_108;
  undefined *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined2 uStack_d0;
  undefined6 uStack_ce;
  undefined *local_c8;
  long lStack_c0;
  long local_b8;
  undefined *puStack_b0;
  undefined *local_a8;
  long lStack_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  
  puVar8 = &DAT_10055c800;
  local_160[2] = param_1;
  FUN_100002f94(&DAT_10055c800,&DAT_1004317a0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_170[1] = (undefined *)SwiftUI::OpacityTransition::typeMetadataAccessor();
  local_188[2] = *(long *)(local_170[1] + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_188[2] + 0x40));
  lVar20 = ((long)&lStack_1b0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_188[0] = lVar20;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar20 = lVar20 - extraout_x12;
  puVar9 = &DAT_10055c808;
  local_188[1] = lVar20;
  FUN_100002f94(&DAT_10055c808,&DAT_1004317a8);
  local_170[0] = puVar9;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar9 + -8) + 0x40));
  lVar20 = lVar20 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_160[1] = lVar20;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar20 = lVar20 - extraout_x12_00;
  puVar9 = &DAT_10055c810;
  FUN_100002f94(&DAT_10055c810,&DAT_1004317b0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar9 + -8) + 0x40));
  lVar21 = lVar20 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_160[0] = lVar21;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar24 = (undefined8 *)(lVar21 - extraout_x12_01);
  puVar10 = &DAT_10055c818;
  puVar17 = &DAT_1004317b8;
  FUN_100002f94();
  CVar15.unknown = puVar10;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar25 = (undefined8 *)((long)puVar24 - extraout_x8_03);
  lVar21 = *(long *)(param_2 + 0x10);
  if (lVar21 == 0) {
    CVar15 = SwiftUI::Color::get_black(CVar15);
    CVar16 = SwiftUI::Color::get_white(CVar15);
    local_e8 = (undefined *)SwiftUI::Alignment::get_center(CVar16.unknown);
    uStack_108 = CONCAT62(uStack_108._2_6_,0x100);
    uStack_f0 = 0x4000000000000000;
    local_f8 = 0x402a000000000000;
    uStack_d0 = 0x100;
    local_b8 = 0x4000000000000000;
    lStack_c0 = 0x402a000000000000;
    local_110 = CVar15.unknown;
    local_100 = CVar16.unknown;
    local_e0 = puVar17;
    local_d8 = CVar15.unknown;
    local_c8 = CVar16.unknown;
    puStack_b0 = local_e8;
    local_a8 = puVar17;
    FUN_1000087e4(&local_110,local_160 + 3,&DAT_100553710,&DAT_1004317f0);
    FUN_10002a29c(&local_d8,&DAT_100553710,&DAT_1004317f0);
    uVar3 = local_f8;
    puVar9 = local_100;
    puVar8 = local_110;
    puVar25[1] = uStack_108;
    *puVar25 = puVar8;
    puVar25[3] = uVar3;
    puVar25[2] = puVar9;
    uVar3 = uStack_f0;
    puVar25[5] = local_e8;
    puVar25[4] = uVar3;
    puVar25[6] = local_e0;
    _swift_storeEnumTagMultiPayload(puVar25,puVar10,0);
    FUN_100002f94(&DAT_100553710,&DAT_1004317f0);
    FUN_100122654();
    FUN_1000087a0(&DAT_10055c850,&DAT_10055c800,&DAT_1004317a0,
                  PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0);
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar25);
  }
  else {
    SVar11.unknown = *(undefined **)(param_3 + 0x10);
    local_1a8[0] = (undefined8 *)puVar10;
    local_1a8[1] = puVar25;
    local_198 = (long)&lStack_1b0 - extraout_x8;
    local_190 = puVar8;
    FUN_10002ea18(0);
    FUN_1000036d0(&DAT_10055c5e8,FUN_10002ea18,&TargetProtocolConformanceDescriptor_10041cd50);
    SwiftUI::StateObject::get_wrappedValue(SVar11);
    puVar8 = &DAT_1004313c8;
    _swift_getKeyPath();
    puVar10 = &DAT_1004313f0;
    _swift_getKeyPath(&DAT_1004313f0);
    puVar17 = puVar8;
    Combine::Published::_get_subscript(&local_d8,SVar11.unknown,puVar8,puVar10);
    _swift_release(puVar8);
    _swift_release(puVar10);
    _swift_release();
    puVar8 = (undefined *)(lVar21 + -1);
    if ((long)local_d8 <= lVar21 + -1) {
      puVar8 = local_d8;
    }
    puVar10 = (undefined *)0x0;
    if (-1 < (long)local_d8) {
      puVar10 = puVar8;
    }
    AVar12 = SwiftUI::Alignment::get_center(SVar11.unknown);
    *puVar24 = AVar12.unknown;
    puVar24[1] = puVar17;
    puVar8 = &DAT_10055c820;
    FUN_100002f94(&DAT_10055c820,&DAT_1004317c0);
    AVar12.unknown = param_2;
    puVar17 = puVar10;
    FUN_1003258a0((long)puVar24 + (long)*(int *)(puVar8 + 0x2c),param_2,puVar10,param_3);
    AVar12 = SwiftUI::Alignment::get_center(AVar12);
    puVar25[-2] = AVar12.unknown;
    puVar25[-1] = puVar17;
    *(undefined1 *)(puVar25 + -3) = 1;
    puVar25[-4] = 0;
    *(undefined1 *)(puVar25 + -5) = 1;
    puVar25[-6] = 0;
    pvVar19 = (void *)0x1;
    SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
    puVar8 = &DAT_10055c828;
    FUN_100002f94(&DAT_10055c828,&DAT_1004317c8);
    plVar1 = (long *)((long)puVar24 + (long)*(int *)(puVar8 + 0x24));
    plVar1[9] = lStack_90;
    plVar1[8] = local_98;
    plVar1[0xb] = lStack_80;
    plVar1[10] = local_88;
    plVar1[0xd] = lStack_70;
    plVar1[0xc] = local_78;
    plVar1[1] = CONCAT62(uStack_ce,uStack_d0);
    *plVar1 = (long)local_d8;
    plVar1[3] = lStack_c0;
    plVar1[2] = (long)local_c8;
    plVar1[5] = (long)puStack_b0;
    plVar1[4] = local_b8;
    plVar1[7] = lStack_a0;
    plVar1[6] = (long)local_a8;
    *(undefined2 *)((long)puVar24 + (long)*(int *)(puVar9 + 0x24)) = 0;
    if (lVar21 <= (long)puVar10) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1003258a0);
      (*pcVar7)();
    }
    lVar21 = 0;
    FUN_10040211c();
    uVar22 = (ulong)*(byte *)(*(long *)(lVar21 + -8) + 0x50);
    puVar23 = (undefined8 *)
              (param_2 +
              *(long *)(*(long *)(lVar21 + -8) + 0x48) * (long)puVar10 +
              (uVar22 + 0x20 & (uVar22 ^ 0xffffffffffffffff)));
    FUN_10002f154(puVar23,lVar20);
    FUN_100279594(0);
    puVar25 = &DAT_100553dd0;
    pTVar18 = &TargetProtocolConformanceDescriptor_10042d178;
    FUN_1000036d0(&DAT_100553dd0,FUN_100279594);
    EVar13 = SwiftUI::EnvironmentObject::init();
    lVar21 = 0;
    FUN_100030a44();
    puVar8 = PTR___type_metadata_for_Swift_Bool_100523b70;
    puVar2 = (undefined8 *)(lVar20 + *(int *)(lVar21 + 0x14));
    *puVar2 = EVar13.unknown;
    puVar2[1] = puVar25;
    local_110 = (undefined *)((ulong)local_110 & 0xffffffffffffff00);
    SwiftUI::State::init
              (lVar20 + *(int *)(lVar21 + 0x18),lVar21,PTR___type_metadata_for_Swift_Bool_100523b70)
    ;
    local_110 = (undefined *)0x0;
    SwiftUI::State::init
              (lVar20 + *(int *)(lVar21 + 0x1c),lVar21,PTR___type_metadata_for_Swift_Int_100523bd8);
    local_110 = (undefined *)((ulong)local_110 & 0xffffffffffffff00);
    SwiftUI::State::init(lVar20 + *(int *)(lVar21 + 0x20),lVar21,puVar8);
    local_110 = (undefined *)((ulong)local_110 & 0xffffffffffffff00);
    SwiftUI::State::init(lVar20 + *(int *)(lVar21 + 0x24),lVar21,puVar8);
    local_110 = (undefined *)*puVar23;
    uVar3 = puVar23[1];
    uStack_108 = uVar3;
    _swift_bridgeObjectRetain_n(uVar3,2);
    SVar26.bridgeObject = (void *)0xe800000000000000;
    SVar26.str = (char *)0x79616c7265766f5f;
    SVar27.bridgeObject = pvVar19;
    SVar27.str = (char *)pTVar18;
    Swift::String::append(SVar26,SVar27);
    _swift_bridgeObjectRelease(uVar3);
    uVar3 = uStack_108;
    puVar9 = local_110;
    puVar8 = &DAT_10055c830;
    FUN_100002f94(&DAT_10055c830,&DAT_1004317d0);
    iVar4 = *(int *)(puVar8 + 0x34);
    *(undefined8 *)(lVar20 + iVar4) = puVar9;
    ((undefined8 *)(lVar20 + iVar4))[1] = uVar3;
    lVar21 = local_188[1];
    SwiftUI::OpacityTransition::init();
    puVar9 = local_170[1];
    lVar5 = local_188[2];
    (**(code **)(local_188[2] + 0x10))(local_188[0],lVar21,local_170[1]);
    puVar8 = &DAT_10054ae80;
    FUN_1000036d0(&DAT_10054ae80,PTR_typeMetadataAccessor_1005225d8,
                  PTR_SwiftUI__SwiftUI__OpacityTransition_>SwiftUI__Transition_1005225c8);
    AVar14 = SwiftUI::AnyTransition::_init(puVar8,puVar9,puVar8);
    (**(code **)(lVar5 + 8))(lVar21,puVar9);
    puVar8 = &DAT_10055c838;
    FUN_100002f94(&DAT_10055c838,&DAT_1004317d8);
    *(undefined **)(lVar20 + *(int *)(puVar8 + 0x24)) = AVar14.unknown;
    puVar8 = &DAT_10055c840;
    FUN_100002f94(&DAT_10055c840,&DAT_1004317e0);
    *(undefined1 *)(lVar20 + *(int *)(puVar8 + 0x24)) = 1;
    *(undefined8 *)(lVar20 + *(int *)(local_170[0] + 0x24)) = 0x4000000000000000;
    lVar5 = local_160[0];
    FUN_1000087e4(puVar24,local_160[0],&DAT_10055c810,&DAT_1004317b0);
    lVar6 = local_160[1];
    FUN_1000087e4(lVar20,local_160[1],&DAT_10055c808,&DAT_1004317a8);
    lVar21 = local_198;
    FUN_1000087e4(lVar5,local_198,&DAT_10055c810,&DAT_1004317b0);
    puVar8 = &DAT_10055c848;
    FUN_100002f94(&DAT_10055c848,&DAT_1004317e8);
    FUN_1000087e4(lVar6,lVar21 + *(int *)(puVar8 + 0x30),&DAT_10055c808,&DAT_1004317a8);
    FUN_10002a29c(lVar6,&DAT_10055c808,&DAT_1004317a8);
    FUN_10002a29c(lVar5,&DAT_10055c810,&DAT_1004317b0);
    puVar25 = local_1a8[1];
    FUN_1000087e4(lVar21,local_1a8[1],&DAT_10055c800,&DAT_1004317a0);
    _swift_storeEnumTagMultiPayload(puVar25,local_1a8[0],1);
    FUN_100002f94(&DAT_100553710,&DAT_1004317f0);
    FUN_100122654();
    FUN_1000087a0(&DAT_10055c850,&DAT_10055c800,&DAT_1004317a0,
                  PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0);
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar25);
    FUN_10002a29c(lVar20,&DAT_10055c808,&DAT_1004317a8);
    FUN_10002a29c(puVar24,&DAT_10055c810,&DAT_1004317b0);
    FUN_10002a29c(lVar21,&DAT_10055c800,&DAT_1004317a0);
  }
  return;
}

