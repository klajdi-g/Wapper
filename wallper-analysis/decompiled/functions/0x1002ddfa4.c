// rea decompile_all
// name: FUN_1002ddfa4
// address: 0x1002ddfa4
// body: available
// range: 0x1002ddfa4-0x1002de42b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002ddfa4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  ResizingMode RVar5;
  Storage storage;
  RoundedCornerStyle RVar6;
  undefined *puVar7;
  undefined7 extraout_var;
  undefined *puVar9;
  undefined *puVar10;
  NSImage *nsImage;
  Image IVar11;
  RoundedRectangle RVar12;
  undefined7 extraout_var_00;
  Color CVar13;
  undefined8 *puVar14;
  Text TVar15;
  Image IVar16;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  Alignment capInsets;
  long lVar17;
  long lVar18;
  _ConditionalContent<undefined,undefined> _Var19;
  long lVar20;
  undefined1 auVar21 [16];
  long alStack_f0 [2];
  uint local_dc;
  long local_d8;
  NSImage *local_d0 [3];
  long local_b8;
  long local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  byte local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined *puVar8;
  
  puVar7 = &DAT_10055abc0;
  local_b0 = param_1;
  FUN_100002f94(&DAT_10055abc0,&DAT_10042f300);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = -extraout_x8;
  puVar14 = (undefined8 *)((long)alStack_f0 + lVar20);
  RVar5 = SwiftUI::Image::ResizingMode::typeMetadataAccessor();
  puVar8 = (undefined *)CONCAT71(extraout_var,RVar5.value);
  lVar17 = *(long *)(puVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar17 + 0x40));
  capInsets.unknown = (undefined *)((long)puVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  puVar9 = &DAT_10055abc8;
  FUN_100002f94(&DAT_10055abc8,&DAT_10042f308);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  _Var19.unknown = capInsets.unknown + -extraout_x8_01;
  puVar10 = &DAT_10055abd0;
  FUN_100002f94(&DAT_10055abd0,&DAT_10042f310);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar10 + -8) + 0x40));
  lVar18 = (long)_Var19.unknown - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_a8 = lVar18 - extraout_x12;
  nsImage = *(NSImage **)(param_3 + 0x28);
  storage.value = (__int8)puVar14;
  if (nsImage == (NSImage *)0x0) {
    CVar13 = SwiftUI::Color::get_blue((Color)0x0);
    *puVar14 = 0x6f6e2e636973756d;
    *(undefined8 *)((long)alStack_f0 + lVar20 + 8) = 0xea00000000006574;
    *(undefined8 *)(&stack0xffffffffffffff20 + lVar20) = 0x4036000000000000;
    *(undefined **)((long)&local_d8 + lVar20) = CVar13.unknown;
    _swift_storeEnumTagMultiPayload(puVar14,puVar7,1);
    FUN_1002e179c();
    FUN_1002e18a4();
    lVar20 = local_a8;
    _Var19 = (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init(storage);
  }
  else {
    local_d0[2] = nsImage;
    IVar11 = SwiftUI::Image::init(nsImage);
    IVar16.unknown = puVar8;
    local_b8 = param_3;
    (**(code **)(lVar17 + 0x68))
              (capInsets.unknown,
               *(undefined4 *)
                PTR___enum_case_for_SwiftUI_Image_ResizingMode_stretch_SwiftUI_Image_ResizingMode_Type___>_SwiftUI_Image_ResizingMode_1005232f0
              );
    local_d0[1] = (NSImage *)
                  SwiftUI::Image::resizable
                            ((EdgeInsets)capInsets.unknown,(ResizingMode)(__int8)IVar11.unknown,
                             IVar16);
    _swift_release(IVar11.unknown);
    (**(code **)(lVar17 + 8))(capInsets.unknown,puVar8);
    SwiftUI::Alignment::get_center(capInsets);
    SwiftUI::_FrameLayout::_init((Alignment)0x403c000000000000);
    local_d8 = local_90;
    local_dc = (uint)local_88;
    alStack_f0[1] = uStack_68;
    puVar1 = (undefined8 *)((long)_Var19.unknown + (long)*(int *)(puVar9 + 0x24));
    local_d0[0] = (NSImage *)puVar7;
    RVar12 = SwiftUI::RoundedRectangle::typeMetadataAccessor();
    iVar4 = *(int *)(RVar12.unknown + 0x14);
    uVar3 = *(undefined4 *)
             PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100522678
    ;
    RVar6 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var_00,RVar6.value) + -8) + 0x68))
              ((long)puVar1 + (long)iVar4,uVar3,CONCAT71(extraout_var_00,RVar6.value));
    auVar21 = NEON_fmov(0x4010000000000000,8);
    puVar1[1] = auVar21._8_8_;
    *puVar1 = auVar21._0_8_;
    puVar7 = &DAT_10054acd0;
    FUN_100002f94(&DAT_10054acd0,&DAT_100421df0);
    *(undefined2 *)((long)puVar1 + (long)*(int *)(puVar7 + 0x24)) = 0x100;
    lVar20 = local_d8;
    *(NSImage **)_Var19.unknown = local_d0[1];
    *(long *)((long)_Var19.unknown + 8) = lVar20;
    *(char *)((long)_Var19.unknown + 0x10) = (char)local_dc;
    *(undefined8 *)((long)_Var19.unknown + 0x18) = local_80;
    *(undefined1 *)((long)_Var19.unknown + 0x20) = local_78;
    *(undefined8 *)((long)_Var19.unknown + 0x28) = local_70;
    *(long *)((long)_Var19.unknown + 0x30) = alStack_f0[1];
    FUN_1000087e4(_Var19.unknown,puVar14,&DAT_10055abc8,&DAT_10042f308);
    _swift_storeEnumTagMultiPayload(puVar14,local_d0[0],0);
    FUN_1002e179c();
    FUN_1002e18a4();
    lVar20 = local_a8;
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init(storage);
    param_3 = local_b8;
    FUN_10002a29c(_Var19.unknown,&DAT_10055abc8,&DAT_10042f308);
  }
  local_a0 = *(undefined8 *)(param_3 + 0x10);
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  uStack_98 = uVar2;
  FUN_100026df4();
  _swift_bridgeObjectRetain(uVar2);
  puVar9 = PTR___type_metadata_for_Swift_String_100523a98;
  TVar15 = SwiftUI::Text::_init();
  FUN_1000087e4(lVar20,lVar18,&DAT_10055abd0,&DAT_10042f310);
  lVar17 = local_b0;
  FUN_1000087e4(lVar18,local_b0,&DAT_10055abd0,&DAT_10042f310);
  puVar7 = &DAT_10055abf8;
  FUN_100002f94(&DAT_10055abf8,&DAT_10042f328);
  puVar1 = (undefined8 *)(lVar17 + *(int *)(puVar7 + 0x30));
  *puVar1 = TVar15.unknown;
  puVar1[1] = puVar9;
  *(char *)(puVar1 + 2) = (char)_Var19.unknown;
  puVar1[3] = puVar14;
  FUN_100007b14(TVar15.unknown,puVar9,_Var19.unknown);
  _swift_bridgeObjectRetain(puVar14);
  FUN_10002a29c(lVar20,&DAT_10055abd0,&DAT_10042f310);
  FUN_100025b34(TVar15.unknown,puVar9,_Var19.unknown);
  _swift_bridgeObjectRelease(puVar14);
  FUN_10002a29c(lVar18,&DAT_10055abd0,&DAT_10042f310);
  return;
}

