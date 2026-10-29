// rea decompile_all
// name: FUN_1002de42c
// address: 0x1002de42c
// body: available
// range: 0x1002de42c-0x1002de8f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002de42c(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  NSImage *pNVar4;
  undefined1 uVar5;
  ResizingMode RVar6;
  Storage storage;
  RoundedCornerStyle RVar7;
  undefined *puVar8;
  undefined7 extraout_var;
  undefined *puVar10;
  undefined *puVar11;
  State SVar12;
  Image IVar13;
  RoundedRectangle RVar14;
  undefined7 extraout_var_00;
  Color CVar15;
  undefined8 *puVar16;
  LocalizedStringKey LVar17;
  Text TVar18;
  uint uVar20;
  Image IVar21;
  ulong uVar22;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar23;
  long extraout_x12;
  long lVar24;
  long lVar25;
  undefined8 *puVar26;
  Alignment capInsets;
  long lVar27;
  undefined1 auVar28 [16];
  String stringLiteral;
  undefined8 uStack_f0;
  undefined2 auStack_e8 [4];
  undefined8 auStack_e0 [2];
  uint local_cc;
  NSImage *local_c8 [4];
  long local_a8;
  long local_a0;
  NSImage *local_98;
  NSImage *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  byte local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined *puVar9;
  undefined8 uVar19;
  
  puVar8 = &DAT_10055abc0;
  FUN_100002f94(&DAT_10055abc0,&DAT_10042f300);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar27 = -extraout_x8;
  puVar16 = (undefined8 *)((long)auStack_e0 + lVar27);
  RVar6 = SwiftUI::Image::ResizingMode::typeMetadataAccessor();
  puVar9 = (undefined *)CONCAT71(extraout_var,RVar6.value);
  lVar24 = *(long *)(puVar9 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar24 + 0x40));
  capInsets.unknown = (undefined *)((long)puVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  puVar10 = &DAT_10055abc8;
  FUN_100002f94(&DAT_10055abc8,&DAT_10042f308);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar26 = (undefined8 *)(capInsets.unknown + -extraout_x8_01);
  puVar11 = &DAT_10055abd0;
  FUN_100002f94(&DAT_10055abd0,&DAT_10042f310);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar11 + -8) + 0x40));
  lVar25 = (long)puVar26 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar23 = lVar25 - extraout_x12;
  local_90 = *(NSImage **)(param_2 + 0x40);
  uStack_88 = *(undefined8 *)(param_2 + 0x48);
  SVar12.unknown = &DAT_10054eed8;
  local_a0 = lVar23;
  FUN_100002f94(&DAT_10054eed8,&DAT_1004249f0);
  SwiftUI::State::get_wrappedValue(SVar12);
  storage.value = (__int8)puVar16;
  if (local_98 == (NSImage *)0x0) {
    CVar15 = SwiftUI::Color::get_blue((Color)0x0);
    *puVar16 = 0x65626f6c67;
    *(undefined8 *)((long)auStack_e0 + lVar27 + 8) = 0xe500000000000000;
    *(undefined8 *)(&stack0xffffffffffffff30 + lVar27) = 0x4036000000000000;
    *(undefined **)((long)local_c8 + lVar27) = CVar15.unknown;
    _swift_storeEnumTagMultiPayload(puVar16,puVar8,1);
    FUN_1002e179c();
    FUN_1002e18a4();
    lVar27 = local_a0;
    uVar20 = 0;
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init(storage);
  }
  else {
    local_c8[3] = local_98;
    IVar13 = SwiftUI::Image::init(local_98);
    IVar21.unknown = puVar9;
    local_c8[2] = (NSImage *)puVar8;
    (**(code **)(lVar24 + 0x68))
              (capInsets.unknown,
               *(undefined4 *)
                PTR___enum_case_for_SwiftUI_Image_ResizingMode_stretch_SwiftUI_Image_ResizingMode_Type___>_SwiftUI_Image_ResizingMode_1005232f0
              );
    local_c8[1] = (NSImage *)
                  SwiftUI::Image::resizable
                            ((EdgeInsets)capInsets.unknown,(ResizingMode)(__int8)IVar13.unknown,
                             IVar21);
    _swift_release(IVar13.unknown);
    (**(code **)(lVar24 + 8))(capInsets.unknown,puVar9);
    SwiftUI::Alignment::get_center(capInsets);
    SwiftUI::_FrameLayout::_init((Alignment)0x403c000000000000);
    local_c8[0] = local_90;
    uVar5 = (undefined1)uStack_88;
    local_cc = (uint)local_78;
    auStack_e0[1] = uStack_68;
    puVar1 = (undefined8 *)((long)puVar26 + (long)*(int *)(puVar10 + 0x24));
    local_a8 = param_1;
    RVar14 = SwiftUI::RoundedRectangle::typeMetadataAccessor();
    iVar3 = *(int *)(RVar14.unknown + 0x14);
    uVar2 = *(undefined4 *)
             PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100522678
    ;
    RVar7 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var_00,RVar7.value) + -8) + 0x68))
              ((long)puVar1 + (long)iVar3,uVar2,CONCAT71(extraout_var_00,RVar7.value));
    auVar28 = NEON_fmov(0x4010000000000000,8);
    puVar1[1] = auVar28._8_8_;
    *puVar1 = auVar28._0_8_;
    puVar8 = &DAT_10054acd0;
    FUN_100002f94(&DAT_10054acd0,&DAT_100421df0);
    *(undefined2 *)((long)puVar1 + (long)*(int *)(puVar8 + 0x24)) = 0x100;
    pNVar4 = local_c8[0];
    *puVar26 = local_c8[1];
    puVar26[1] = pNVar4;
    *(undefined1 *)(puVar26 + 2) = uVar5;
    puVar26[3] = local_80;
    *(char *)(puVar26 + 4) = (char)local_cc;
    puVar26[5] = local_70;
    param_1 = local_a8;
    puVar26[6] = auStack_e0[1];
    uVar20 = 0;
    FUN_1000087e4(puVar26,puVar16,&DAT_10055abc8,&DAT_10042f308);
    _swift_storeEnumTagMultiPayload(puVar16,local_c8[2],0);
    FUN_1002e179c();
    FUN_1002e18a4();
    lVar27 = local_a0;
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init(storage);
    FUN_10002a29c(puVar26,&DAT_10055abc8);
  }
  stringLiteral.bridgeObject = (void *)0xe700000000000000;
  stringLiteral.str = (char *)0x726573776f7242;
  uVar19 = 0xe700000000000000;
  LVar17 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  *(undefined2 *)(lVar23 + -8) = 0x100;
  *(undefined8 *)(lVar23 + -0x10) = 0;
  uVar22 = (ulong)(uVar20 & 1);
  TVar18 = SwiftUI::Text::_init(LVar17);
  FUN_1000087e4(lVar27,lVar25,&DAT_10055abd0,&DAT_10042f310);
  FUN_1000087e4(lVar25,param_1,&DAT_10055abd0,&DAT_10042f310);
  puVar8 = &DAT_10055abf8;
  FUN_100002f94(&DAT_10055abf8,&DAT_10042f328);
  puVar26 = (undefined8 *)(param_1 + *(int *)(puVar8 + 0x30));
  *puVar26 = TVar18.unknown;
  puVar26[1] = uVar19;
  *(char *)(puVar26 + 2) = (char)uVar22;
  puVar26[3] = puVar16;
  FUN_100007b14(TVar18.unknown,uVar19,uVar22);
  _swift_bridgeObjectRetain(puVar16);
  FUN_10002a29c(lVar27,&DAT_10055abd0,&DAT_10042f310);
  FUN_100025b34(TVar18.unknown,uVar19,uVar22);
  _swift_bridgeObjectRelease(puVar16);
  FUN_10002a29c(lVar25,&DAT_10055abd0,&DAT_10042f310);
  return;
}

