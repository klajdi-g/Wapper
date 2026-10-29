// rea decompile_all
// name: FUN_1003c7948
// address: 0x1003c7948
// body: available
// range: 0x1003c7948-0x1003c7fa7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003c7c70 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003c7948(undefined8 param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  URL UVar11;
  Color CVar12;
  Color CVar13;
  AnyView AVar14;
  StrokeStyle SVar15;
  Alignment AVar16;
  undefined *puVar17;
  undefined8 uVar18;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  code *pcVar19;
  long unaff_x20;
  undefined8 *puVar20;
  long lVar21;
  undefined8 *puVar22;
  undefined *puVar23;
  double dVar24;
  undefined8 uStack_260;
  undefined *local_258 [16];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined *puStack_1b0;
  undefined2 local_1a8;
  undefined6 uStack_1a6;
  undefined *puStack_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 local_100;
  undefined *puStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined8 uStack_90;
  undefined *local_88;
  undefined2 local_80;
  
  puVar7 = &DAT_10055c450;
  FUN_100002f94(&DAT_10055c450,&DAT_1004310d0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar20 = (undefined8 *)((long)&uStack_260 + -extraout_x8);
  puVar8 = &DAT_10054ac40;
  FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar21 = (long)puVar20 - extraout_x8_00;
  puVar8 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar23 = (undefined *)(lVar21 - extraout_x8_01);
  puVar8 = &DAT_10055c458;
  puVar17 = &DAT_1004310d8;
  FUN_100002f94();
  CVar12.unknown = puVar8;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar22 = (undefined8 *)(puVar23 + -extraout_x8_02);
  FUN_1003c6df4();
  if (puVar17 == (undefined *)0x0) {
    CVar12 = SwiftUI::Color::get_white(CVar12);
    lVar21 = 0;
    FUN_1003e5970();
    dVar24 = 0.2;
    if (*(char *)(unaff_x20 + *(int *)(lVar21 + 0x18)) == '\0') {
      dVar24 = 0.1;
    }
    CVar13 = SwiftUI::Color::opacity(dVar24,CVar12);
    _swift_release(CVar12.unknown);
    *puVar20 = CVar13.unknown;
    *(undefined2 *)((long)local_258 + -extraout_x8) = 0x100;
    _swift_storeEnumTagMultiPayload(puVar20,puVar7,1);
    FUN_100002f94(&DAT_10054b7c8,&DAT_1004310e0);
    FUN_10032046c();
    FUN_1000087a0(&DAT_10054b7c0,&DAT_10054b7c8,&DAT_1004310e0,
                  PTR_SwiftUI__SwiftUI___ShapeView<undefined,undefined>_>SwiftUI__View_100521c78);
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar20);
  }
  else {
    lVar9 = 0;
    local_258[0] = CVar12.unknown;
    local_258[2] = puVar8;
    local_258[3] = puVar7;
    local_258[4] = (undefined *)param_1;
    FUN_1003e5970();
    local_258[1] = (undefined *)lVar9;
    FUN_1000087e4(unaff_x20 + *(int *)(lVar9 + 0x14),lVar21,&DAT_10054ac40,&DAT_10041ce70);
    lVar10 = 0;
    FUN_10040211c();
    lVar9 = lVar21;
    (**(code **)(*(long *)(lVar10 + -8) + 0x30))(lVar21,1,lVar10);
    bVar6 = (int)lVar9 != 1;
    if (bVar6) {
      iVar2 = *(int *)(lVar10 + 0x14);
      UVar11 = Foundation::URL::typeMetadataAccessor();
      lVar9 = *(long *)(UVar11.unknown + -8);
      (**(code **)(lVar9 + 0x10))(puVar23,lVar21 + iVar2,UVar11.unknown);
      FUN_100029548(lVar21,FUN_10040211c);
      pcVar19 = *(code **)(lVar9 + 0x38);
    }
    else {
      FUN_10002a29c(lVar21,&DAT_10054ac40,&DAT_10041ce70);
      UVar11 = Foundation::URL::typeMetadataAccessor();
      pcVar19 = *(code **)(*(long *)(UVar11.unknown + -8) + 0x38);
    }
    (*pcVar19)(puVar23,!bVar6,1,UVar11.unknown);
    lVar21 = 0;
    FUN_100113f00();
    iVar2 = *(int *)(lVar21 + 0x24);
    local_e0 = 0;
    puVar7 = &DAT_10054bd30;
    FUN_100002f94(&DAT_10054bd30,&DAT_10041d460);
    SwiftUI::State::init((long)puVar22 + (long)iVar2,puVar7,puVar7);
    local_e0 = CONCAT71(local_e0._1_7_,1);
    SwiftUI::State::init
              ((long)puVar22 + (long)*(int *)(lVar21 + 0x28),puVar7,
               PTR___type_metadata_for_Swift_Bool_100523b70);
    puVar8 = PTR___type_metadata_for_Swift_Int_100523bd8;
    local_e0 = 0;
    SwiftUI::State::init
              ((long)puVar22 + (long)*(int *)(lVar21 + 0x2c),puVar7,
               PTR___type_metadata_for_Swift_Int_100523bd8);
    local_e0 = 0;
    SwiftUI::State::init((long)puVar22 + (long)*(int *)(lVar21 + 0x30),puVar7,puVar8);
    *puVar22 = local_258[0];
    puVar22[1] = puVar17;
    CVar12.unknown = puVar23;
    FUN_1000087e4(puVar23,(long)puVar22 + (long)*(int *)(lVar21 + 0x14),&DAT_100553d90,
                  &DAT_10041bf10);
    *(undefined1 *)((long)puVar22 + (long)*(int *)(lVar21 + 0x18)) = 1;
    puVar1 = (undefined8 *)((long)puVar22 + (long)*(int *)(lVar21 + 0x1c));
    *puVar1 = 0x40;
    *(undefined1 *)(puVar1 + 1) = 0;
    CVar12 = SwiftUI::Color::get_white(CVar12);
    dVar24 = 0.2;
    if (*(char *)(unaff_x20 + *(int *)((long)local_258[1] + 0x18)) == '\0') {
      dVar24 = 0.1;
    }
    CVar13 = SwiftUI::Color::opacity(dVar24,CVar12);
    _swift_release(CVar12.unknown);
    local_80 = 0x100;
    puVar7 = &DAT_10054b7c8;
    local_88 = CVar13.unknown;
    FUN_100002f94(&DAT_10054b7c8,&DAT_1004310e0);
    puVar8 = &DAT_10054b7c0;
    local_258[1] = puVar7;
    FUN_1000087a0(&DAT_10054b7c0,&DAT_10054b7c8,&DAT_1004310e0,
                  PTR_SwiftUI__SwiftUI___ShapeView<undefined,undefined>_>SwiftUI__View_100521c78);
    AVar14 = SwiftUI::AnyView::_init(puVar8,puVar7,puVar8);
    FUN_10002a29c(puVar23,&DAT_100553d90,&DAT_10041bf10);
    *(undefined **)((long)puVar22 + (long)*(int *)(lVar21 + 0x20)) = AVar14.unknown;
    CVar12.unknown = &DAT_10055c470;
    FUN_100002f94(&DAT_10055c470,&DAT_1004368c0);
    *(undefined2 *)((long)puVar22 + (long)*(int *)(CVar12.unknown + 0x24)) = 0x100;
    CVar12 = SwiftUI::Color::get_white(CVar12);
    CVar13 = SwiftUI::Color::opacity(0.2,CVar12);
    _swift_release(CVar12.unknown);
    uVar18 = 0;
    SVar15 = SwiftUI::StrokeStyle::init
                       (&local_1d8,0x3fe0000000000000,0x4024000000000000,0,CVar13.unknown,0,
                        PTR___swiftEmptyArrayStorage_100524190);
    puStack_1a0 = (undefined *)SwiftUI::Alignment::get_center(SVar15.unknown);
    local_1a8 = 0x100;
    puStack_1b0 = CVar13.unknown;
    local_198 = uVar18;
    AVar16 = SwiftUI::Alignment::get_center((Alignment)puStack_1a0);
    puVar7 = puStack_1a0;
    uVar3 = CONCAT62(uStack_1a6,local_1a8);
    puStack_168 = puStack_1b0;
    local_170 = local_1b8;
    puStack_158 = puStack_1a0;
    local_150 = local_198;
    uStack_188 = uStack_1d0;
    local_190 = local_1d8;
    uStack_178 = uStack_1c0;
    uStack_180 = local_1c8;
    puStack_b8 = puStack_1b0;
    local_c0 = local_1b8;
    puStack_a8 = puStack_1a0;
    local_a0 = local_198;
    uStack_d8 = uStack_1d0;
    local_e0 = local_1d8;
    uStack_c8 = uStack_1c0;
    uStack_d0 = local_1c8;
    puStack_118 = puStack_1b0;
    local_120 = local_1b8;
    puStack_108 = puStack_1a0;
    uStack_138 = uStack_1d0;
    local_140 = local_1d8;
    uStack_128 = uStack_1c0;
    uStack_130 = local_1c8;
    local_100 = local_198;
    puVar1 = (undefined8 *)((long)puVar22 + (long)*(int *)(local_258[2] + 0x24));
    uStack_160 = uVar3;
    uStack_110 = uVar3;
    puStack_f8 = AVar16.unknown;
    local_f0 = uVar18;
    uStack_b0 = uVar3;
    puVar1[5] = puStack_1b0;
    puVar1[4] = local_1b8;
    puVar1[7] = puVar7;
    puVar1[6] = uVar3;
    uVar3 = local_100;
    puVar1[9] = puStack_f8;
    puVar1[8] = uVar3;
    puVar1[10] = uVar18;
    uVar5 = uStack_128;
    uVar4 = uStack_130;
    uVar3 = local_140;
    puVar1[1] = uStack_138;
    *puVar1 = uVar3;
    puVar1[3] = uVar5;
    puVar1[2] = uVar4;
    local_98 = AVar16.unknown;
    uStack_90 = uVar18;
    FUN_1000087e4(&local_190,local_258 + 5,&DAT_10054a798,&DAT_10041f480);
    FUN_1000087e4(&local_140,local_258 + 5,&DAT_10054a788,&DAT_100425370);
    FUN_10002a29c(&local_e0,&DAT_10054a788,&DAT_100425370);
    FUN_10002a29c(&local_1d8,&DAT_10054a798,&DAT_10041f480);
    FUN_1000087e4(puVar22,puVar20,&DAT_10055c458,&DAT_1004310d8);
    _swift_storeEnumTagMultiPayload(puVar20,local_258[3],0);
    FUN_10032046c();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar20);
    FUN_10002a29c(puVar22,&DAT_10055c458,&DAT_1004310d8);
  }
  return;
}

