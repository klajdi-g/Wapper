// rea decompile_all
// name: FUN_1000c1010
// address: 0x1000c1010
// body: available
// range: 0x1000c1010-0x1000c1833 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000c14a0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000c1010(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  URL UVar10;
  Alignment AVar11;
  AnyView AVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x12;
  undefined8 *extraout_x12_00;
  long lVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  URL UVar17;
  long lVar18;
  String *pSVar19;
  Alignment AVar20;
  long lVar21;
  undefined *puVar22;
  String SVar23;
  String SStack_180;
  long local_170;
  undefined *local_168 [6];
  undefined8 local_138;
  undefined *local_130;
  long lStack_128;
  undefined *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *local_e8;
  undefined *puStack_e0;
  undefined *local_d8;
  undefined1 uStack_d0;
  undefined1 uStack_cf;
  undefined6 uStack_ce;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined1 uStack_90;
  undefined1 uStack_8f;
  undefined6 uStack_8e;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar22 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar22 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_168[1] = (undefined *)((long)&SStack_180 - extraout_x8);
  local_168[0] = (undefined *)Foundation::URL::typeMetadataAccessor();
  local_170 = *(long *)(local_168[0] + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_170 + 0x40));
  UVar17.unknown =
       (undefined *)((long)&SStack_180 - extraout_x8) +
       -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = (long)UVar17.unknown - extraout_x12;
  puVar22 = &DAT_10054bd38;
  FUN_100002f94(&DAT_10054bd38,&DAT_100422740);
  local_168[5] = puVar22;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar22 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pSVar19 = (String *)(lVar13 - extraout_x8_01);
  puVar22 = &DAT_100550b70;
  FUN_100002f94(&DAT_100550b70,&DAT_100422748);
  local_168[3] = puVar22;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar22 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar22 = &DAT_10054ac40;
  local_168[4] = (undefined *)((long)pSVar19 - extraout_x8_02);
  FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar22 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  AVar20.unknown = (undefined *)((long)((long)pSVar19 - extraout_x8_02) - extraout_x8_03);
  lVar8 = 0;
  FUN_10040211c();
  lVar15 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar15 + 0x40));
  puVar22 = AVar20.unknown + -(extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  lVar14 = *(long *)(param_2 + 8);
  if (lVar14 == 0) {
    FUN_1001b7378(0);
    FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
    SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x1000c17a0);
    (*pcVar16)();
  }
  lVar21 = extraout_x12_00[5];
  local_138 = param_1;
  if (lVar21 == 0) {
    FUN_100226ac0(0);
    FUN_1000036d0(&DAT_10054aa48,FUN_100226ac0,&TargetProtocolConformanceDescriptor_10042b420);
  }
  else {
    lVar18 = extraout_x12_00[3];
    if (lVar18 != 0) {
      local_168[2] = (undefined *)extraout_x12_00;
      _swift_retain(lVar14);
      _swift_retain(lVar21);
      _swift_retain(lVar18);
      FUN_1001b2798(AVar20.unknown,lVar21,lVar18);
      _swift_release(lVar14);
      _swift_release(lVar21);
      _swift_release(lVar18);
      puVar9 = AVar20.unknown;
      (**(code **)(lVar15 + 0x30))(AVar20.unknown,1,lVar8);
      if ((int)puVar9 == 1) {
        puVar22 = &DAT_10054ac40;
        FUN_10002a29c(AVar20.unknown,&DAT_10054ac40,&DAT_10041ce70);
        AVar20 = SwiftUI::Alignment::get_center(AVar20);
        FUN_1000c1834(&local_a8,local_168[2]);
        uStack_78 = local_88;
        puVar9 = local_98;
        uStack_c0 = CONCAT62(uStack_8e,CONCAT11(uStack_8f,uStack_90));
        local_d8 = local_a8;
        uStack_d0 = (undefined1)local_a0;
        uStack_cf = local_a0._1_1_;
        local_c8 = local_98;
        local_b8 = local_88;
        uStack_b0 = local_80;
        local_98 = local_a8;
        uStack_90 = (undefined1)local_a0;
        uStack_8f = local_a0._1_1_;
        local_88 = puVar9;
        local_70 = local_80;
        local_e8 = AVar20.unknown;
        puStack_e0 = puVar22;
        local_a8 = AVar20.unknown;
        local_a0 = puVar22;
        FUN_1000087e4(&local_e8,&local_130,&DAT_100550b78,&DAT_100422758);
        FUN_10002a29c(&local_a8,&DAT_100550b78,&DAT_100422758);
        puVar5 = local_d8;
        puVar9 = local_e8;
        puVar22 = local_168[4];
        uVar3 = CONCAT11(uStack_cf,uStack_d0);
        *(undefined **)((long)local_168[4] + 8) = puStack_e0;
        *(undefined **)puVar22 = puVar9;
        *(ulong *)((long)puVar22 + 0x18) = CONCAT62(uStack_ce,uVar3);
        *(undefined **)((long)puVar22 + 0x10) = puVar5;
        uVar7 = uStack_b0;
        uVar6 = local_b8;
        uVar4 = local_c8;
        *(undefined8 *)((long)puVar22 + 0x28) = uStack_c0;
        *(undefined8 *)((long)puVar22 + 0x20) = uVar4;
        *(undefined8 *)((long)puVar22 + 0x38) = uVar7;
        *(undefined8 *)((long)puVar22 + 0x30) = uVar6;
        _swift_storeEnumTagMultiPayload(puVar22,local_168[3],1);
        FUN_100002f94(&DAT_100550b78,&DAT_100422758);
        FUN_1000c418c();
        FUN_1000087a0(&DAT_100550b88,&DAT_100550b78,&DAT_100422758,
                      PTR_SwiftUI__SwiftUI__ZStack<undefined>_>SwiftUI__View_1005234e0);
        (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar22);
      }
      else {
        UVar10.unknown = puVar22;
        FUN_100007e64(AVar20.unknown,puVar22,FUN_10040211c);
        SStack_180.bridgeObject = puVar22;
        FUN_10026ac6c();
        Foundation::URL::_init();
        _swift_bridgeObjectRelease();
        Foundation::URL::deletingPathExtension(UVar10);
        puVar9 = local_168[0];
        lVar14 = local_170;
        pcVar16 = *(code **)(local_170 + 8);
        (*pcVar16)(UVar17.unknown,local_168[0]);
        SVar23 = Foundation::URL::get_lastPathComponent(UVar17);
        (*pcVar16)(lVar13,puVar9);
        AVar20.unknown = local_168[1];
        (**(code **)(lVar14 + 0x10))(local_168[1],puVar22 + *(int *)(lVar8 + 0x14),puVar9);
        (**(code **)(lVar14 + 0x38))(AVar20.unknown,0,1,puVar9);
        lVar8 = 0;
        FUN_100113f00();
        iVar2 = *(int *)(lVar8 + 0x24);
        local_a8 = (undefined *)0x0;
        puVar22 = &DAT_10054bd30;
        FUN_100002f94(&DAT_10054bd30,&DAT_10041d460);
        SwiftUI::State::init((long)&pSVar19->str + (long)iVar2,puVar22,puVar22);
        local_a8 = (undefined *)CONCAT71(local_a8._1_7_,1);
        SwiftUI::State::init
                  ((long)&pSVar19->str + (long)*(int *)(lVar8 + 0x28),puVar22,
                   PTR___type_metadata_for_Swift_Bool_100523b70);
        puVar9 = PTR___type_metadata_for_Swift_Int_100523bd8;
        local_a8 = (undefined *)0x0;
        SwiftUI::State::init
                  ((long)&pSVar19->str + (long)*(int *)(lVar8 + 0x2c),puVar22,
                   PTR___type_metadata_for_Swift_Int_100523bd8);
        local_a8 = (undefined *)0x0;
        SwiftUI::State::init((long)&pSVar19->str + (long)*(int *)(lVar8 + 0x30),puVar22,puVar9);
        *pSVar19 = SVar23;
        lVar14 = (long)&pSVar19->str + (long)*(int *)(lVar8 + 0x14);
        AVar11.unknown = AVar20.unknown;
        FUN_1000087e4(AVar20.unknown,lVar14,&DAT_100553d90,&DAT_10041bf10);
        *(undefined1 *)((long)&pSVar19->str + (long)*(int *)(lVar8 + 0x18)) = 1;
        puVar1 = (undefined8 *)((long)&pSVar19->str + (long)*(int *)(lVar8 + 0x1c));
        *puVar1 = 0x280;
        *(undefined1 *)(puVar1 + 1) = 0;
        AVar11 = SwiftUI::Alignment::get_center(AVar11);
        FUN_1000c1834(&local_a8,local_168[2]);
        uStack_78 = local_88;
        puVar22 = local_98;
        uStack_c0 = CONCAT62(uStack_8e,CONCAT11(uStack_8f,uStack_90));
        local_d8 = local_a8;
        uStack_d0 = (undefined1)local_a0;
        uStack_cf = local_a0._1_1_;
        local_c8 = local_98;
        local_b8 = local_88;
        uStack_b0 = local_80;
        local_98 = local_a8;
        uStack_90 = (undefined1)local_a0;
        uStack_8f = local_a0._1_1_;
        local_88 = puVar22;
        local_70 = local_80;
        puVar22 = &DAT_100550b78;
        local_e8 = AVar11.unknown;
        puStack_e0 = (undefined *)lVar14;
        local_a8 = AVar11.unknown;
        local_a0 = (undefined *)lVar14;
        FUN_1000087e4(&local_e8,&local_130,&DAT_100550b78,&DAT_100422758);
        FUN_10002a29c(&local_a8,&DAT_100550b78,&DAT_100422758);
        uStack_118 = CONCAT62(uStack_ce,CONCAT11(uStack_cf,uStack_d0));
        lStack_128 = (long)puStack_e0;
        local_130 = local_e8;
        local_120 = local_d8;
        uStack_108 = uStack_c0;
        local_110 = local_c8;
        uStack_f8 = uStack_b0;
        uStack_100 = local_b8;
        FUN_100002f94(&DAT_100550b78,&DAT_100422758);
        puVar9 = &DAT_100550b88;
        FUN_1000087a0(&DAT_100550b88,&DAT_100550b78,&DAT_100422758,
                      PTR_SwiftUI__SwiftUI__ZStack<undefined>_>SwiftUI__View_1005234e0);
        AVar12 = SwiftUI::AnyView::_init(puVar9,puVar22,puVar9);
        FUN_10002a29c(AVar20.unknown,&DAT_100553d90,&DAT_10041bf10);
        *(undefined **)((long)&pSVar19->str + (long)*(int *)(lVar8 + 0x20)) = AVar12.unknown;
                    /* WARNING: Load size is inaccurate */
        AVar11.unknown = *local_168[2];
        SwiftUI::Alignment::get_center(AVar20);
        SwiftUI::_FrameLayout::_init(AVar11);
        uVar4 = uStack_118;
        puVar9 = local_120;
        puVar22 = local_130;
        puVar1 = (undefined8 *)((long)&pSVar19->str + (long)*(int *)(local_168[5] + 0x24));
        puVar1[1] = lStack_128;
        *puVar1 = puVar22;
        puVar1[3] = uVar4;
        puVar1[2] = puVar9;
        uVar4 = local_110;
        puVar1[5] = uStack_108;
        puVar1[4] = uVar4;
        puVar22 = local_168[4];
        FUN_1000087e4(pSVar19,local_168[4],&DAT_10054bd38,&DAT_100422740);
        _swift_storeEnumTagMultiPayload(puVar22,local_168[3],0);
        FUN_1000c418c();
        (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar22);
        FUN_10002a29c(pSVar19,&DAT_10054bd38,&DAT_100422740);
        FUN_100029548(SStack_180.bridgeObject,FUN_10040211c);
      }
      return;
    }
    FUN_100279594(0);
    FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
    _swift_retain(lVar14);
    lVar14 = lVar21;
  }
  _swift_retain(lVar14);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar16 = (code *)SoftwareBreakpoint(1,0x1000c1834);
  (*pcVar16)();
}

