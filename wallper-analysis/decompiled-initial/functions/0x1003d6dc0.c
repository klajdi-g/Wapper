// rea decompile_all
// name: FUN_1003d6dc0
// address: 0x1003d6dc0
// body: available
// range: 0x1003d6dc0-0x1003d76c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003d6dc0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  ResizingMode RVar3;
  Design DVar4;
  long lVar5;
  undefined *puVar6;
  undefined7 extraout_var;
  URL UVar8;
  URL nsImage;
  Image IVar9;
  Image IVar10;
  Color CVar11;
  undefined7 extraout_var_00;
  Font FVar12;
  Alignment AVar13;
  Color CVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 *puVar15;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long lVar16;
  long extraout_x8_06;
  ulong uVar17;
  long extraout_x12;
  long extraout_x12_00;
  long lVar18;
  CGFloat CVar19;
  Color CVar20;
  ulong uVar21;
  long lVar22;
  EdgeInsets capInsets;
  String systemName;
  undefined *local_1b0;
  long local_1a8 [2];
  undefined8 *local_198;
  long local_190;
  long local_188;
  long local_180;
  long local_178;
  long local_170;
  NSImage *local_168;
  long local_160;
  undefined *local_158;
  undefined *local_150;
  undefined8 *local_148;
  undefined *local_140;
  undefined8 local_138;
  undefined *local_130;
  undefined1 auStack_128 [64];
  undefined *local_e8;
  undefined2 uStack_e0;
  undefined6 uStack_de;
  undefined *local_d8;
  undefined *puStack_d0;
  undefined *local_c8;
  undefined *puStack_c0;
  undefined *local_b8;
  undefined *puStack_b0;
  undefined *local_a8;
  undefined2 local_a0;
  undefined *local_98;
  undefined *puStack_90;
  undefined *local_88;
  undefined *puStack_80;
  undefined *local_78;
  undefined *puStack_70;
  undefined *puVar7;
  
  lVar5 = 0;
  local_138 = param_1;
  FUN_1003e4bc8();
  local_170 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar5 = (long)&local_1b0 - (extraout_x12 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100560b38;
  local_178 = lVar5;
  local_168 = (NSImage *)extraout_x12;
  FUN_100002f94(&DAT_100560b38,&DAT_100436810);
  local_180 = *(long *)(puVar6 + -8);
  local_150 = puVar6;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_180 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar5 = lVar5 - extraout_x8;
  puVar6 = &DAT_10054a828;
  local_188 = lVar5;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = lVar5 - extraout_x8_00;
  puVar6 = &DAT_100560b40;
  local_190 = lVar5;
  FUN_100002f94(&DAT_100560b40,&DAT_100436818);
  local_140 = puVar6;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar15 = (undefined8 *)(lVar5 - extraout_x8_01);
  puVar6 = &DAT_100560b48;
  local_148 = puVar15;
  FUN_100002f94(&DAT_100560b48,&DAT_100436820);
  local_158 = puVar6;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar15 = (undefined8 *)((long)puVar15 - extraout_x8_02);
  puVar6 = &DAT_100560b50;
  FUN_100002f94(&DAT_100560b50,&DAT_100436828);
  local_130 = puVar6;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_160 = (long)puVar15 - extraout_x8_03;
  RVar3 = SwiftUI::Image::ResizingMode::typeMetadataAccessor();
  puVar7 = (undefined *)CONCAT71(extraout_var,RVar3.value);
  lVar22 = *(long *)(puVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar22 + 0x40));
  capInsets.unknown =
       (undefined *)
       (((long)puVar15 - extraout_x8_03) - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0));
  puVar6 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  CVar19.unknown = capInsets.unknown + -(extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  CVar20.unknown = CVar19.unknown + -extraout_x12_00;
  UVar8 = Foundation::URL::typeMetadataAccessor();
  lVar16 = *(long *)(UVar8.unknown + -8);
  nsImage = UVar8;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar16 + 0x40));
  lVar18 = (long)CVar20.unknown - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0);
  FUN_1003d69c4();
  lVar1 = local_170;
  lVar5 = local_178;
  if ((NSImage *)nsImage.unknown == (NSImage *)0x0) {
    local_198 = puVar15;
    FUN_1003d6b90(CVar20.unknown);
    puVar6 = CVar20.unknown;
    (**(code **)(lVar16 + 0x30))(CVar20.unknown,1,UVar8.unknown);
    if ((int)puVar6 == 1) {
      FUN_10002a29c(CVar20.unknown,&DAT_100553d90,&DAT_10041bf10);
      CVar20 = SwiftUI::Color::get_white(CVar20);
      CVar19.unknown = (undefined *)0x3fb47ae147ae147b;
      CVar11 = SwiftUI::Color::opacity(0.08,CVar20);
      _swift_release(CVar20.unknown);
      systemName.bridgeObject = (void *)0xe500000000000000;
      systemName.str = (char *)0x6f746f6870;
      IVar10 = SwiftUI::Image::init(systemName);
      SwiftUI::Font::Weight::get_medium((Weight)IVar10.unknown);
      DVar4 = SwiftUI::Font::Design::typeMetadataAccessor();
      lVar5 = local_190;
      (**(code **)(*(long *)(CONCAT71(extraout_var_00,DVar4.value) + -8) + 0x38))
                (local_190,1,1,CONCAT71(extraout_var_00,DVar4.value));
      FVar12 = SwiftUI::Font::_system(CVar19,(Font)0x0);
      puVar6 = &DAT_10054a828;
      FUN_10002a29c(lVar5,&DAT_10054a828,&DAT_10041e3c0);
      CVar20.unknown = &DAT_100435fb0;
      _swift_getKeyPath();
      AVar13.unknown = (undefined *)SwiftUI::Color::get_white(CVar20);
      CVar14 = SwiftUI::Color::opacity(0.3,(Color)AVar13.unknown);
      _swift_release();
      local_b8 = (undefined *)SwiftUI::Alignment::get_center(AVar13);
      uStack_e0 = 0x100;
      local_a0 = 0x100;
      local_e8 = CVar11.unknown;
      local_d8 = IVar10.unknown;
      puStack_d0 = CVar20.unknown;
      local_c8 = FVar12.unknown;
      puStack_c0 = CVar14.unknown;
      puStack_b0 = puVar6;
      local_a8 = CVar11.unknown;
      local_98 = IVar10.unknown;
      puStack_90 = CVar20.unknown;
      local_88 = FVar12.unknown;
      puStack_80 = CVar14.unknown;
      local_78 = local_b8;
      puStack_70 = puVar6;
      FUN_1000087e4(&local_e8,auStack_128,&DAT_10054e548,&DAT_10041f4a0);
      FUN_10002a29c(&local_a8,&DAT_10054e548,&DAT_10041f4a0);
      puVar2 = puStack_d0;
      puVar7 = local_d8;
      puVar6 = local_e8;
      puVar15 = local_148;
      local_148[1] = CONCAT62(uStack_de,uStack_e0);
      *puVar15 = puVar6;
      puVar15[3] = puVar2;
      puVar15[2] = puVar7;
      puVar2 = puStack_b0;
      puVar7 = local_b8;
      puVar6 = local_c8;
      puVar15[5] = puStack_c0;
      puVar15[4] = puVar6;
      puVar15[7] = puVar2;
      puVar15[6] = puVar7;
      _swift_storeEnumTagMultiPayload(puVar15,local_140,1);
      FUN_100002f94(&DAT_10054e548,&DAT_10041f4a0);
      FUN_1003eebe0();
      FUN_10006c2c8();
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar15);
    }
    else {
      local_1b0 = UVar8.unknown;
      local_1a8[0] = lVar16;
      local_1a8[1] = lVar18;
      (**(code **)(lVar16 + 0x20))(lVar18,CVar20.unknown,UVar8.unknown);
      (**(code **)(lVar16 + 0x10))(CVar19.unknown,lVar18,UVar8.unknown);
      (**(code **)(lVar16 + 0x38))(CVar19.unknown,0,1,UVar8.unknown);
      FUN_100029504(param_2,lVar5,FUN_1003e4bc8);
      uVar17 = (ulong)*(byte *)(lVar1 + 0x50);
      uVar21 = uVar17 + 0x10 & (uVar17 ^ 0xffffffffffffffff);
      puVar6 = &DAT_10053e090;
      _swift_allocObject(&DAT_10053e090,uVar21 + (long)local_168,uVar17 | 7);
      FUN_100007e64(lVar5,puVar6 + uVar21,FUN_1003e4bc8);
      FUN_100002f94(&DAT_100560b68,&DAT_100436830);
      FUN_1003eecc4();
      lVar5 = local_188;
      SwiftUI::AsyncImage::_init(CVar19,(Transaction)0x0);
      puVar6 = local_150;
      lVar1 = local_180;
      puVar15 = local_198;
      (**(code **)(local_180 + 0x10))(local_198,lVar5,local_150);
      _swift_storeEnumTagMultiPayload(puVar15,local_158,1);
      FUN_100002f94(&DAT_100550170,&DAT_10042e8e0);
      FUN_1000b2e98();
      FUN_1000087a0(&DAT_100560b60,&DAT_100560b38,&DAT_100436810,
                    PTR_SwiftUI__SwiftUI__AsyncImage<undefined>_>SwiftUI__View_100521b88);
      lVar16 = local_160;
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar15);
      puVar15 = local_148;
      FUN_1000087e4(lVar16,local_148,&DAT_100560b50,&DAT_100436828);
      _swift_storeEnumTagMultiPayload(puVar15,local_140,0);
      FUN_100002f94(&DAT_10054e548,&DAT_10041f4a0);
      FUN_1003eebe0();
      FUN_10006c2c8();
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar15);
      FUN_10002a29c(lVar16,&DAT_100560b50,&DAT_100436828);
      (**(code **)(lVar1 + 8))(lVar5,puVar6);
      (**(code **)(local_1a8[0] + 8))(local_1a8[1],local_1b0);
    }
  }
  else {
    local_168 = (NSImage *)nsImage.unknown;
    IVar9 = SwiftUI::Image::init(nsImage.unknown);
    IVar10.unknown = puVar7;
    (**(code **)(lVar22 + 0x68))
              (capInsets.unknown,
               *(undefined4 *)
                PTR___enum_case_for_SwiftUI_Image_ResizingMode_stretch_SwiftUI_Image_ResizingMode_Type___>_SwiftUI_Image_ResizingMode_1005232f0
              );
    IVar10 = SwiftUI::Image::resizable(capInsets,(ResizingMode)(__int8)IVar9.unknown,IVar10);
    _swift_release(IVar9.unknown);
    (**(code **)(lVar22 + 8))(capInsets.unknown,puVar7);
    *puVar15 = IVar10.unknown;
    puVar15[1] = 0;
    *(undefined2 *)(puVar15 + 2) = 0x101;
    _swift_storeEnumTagMultiPayload(puVar15,local_158,0);
    _swift_retain(IVar10.unknown);
    FUN_100002f94(&DAT_100550170,&DAT_10042e8e0);
    FUN_1000b2e98();
    FUN_1000087a0(&DAT_100560b60,&DAT_100560b38,&DAT_100436810,
                  PTR_SwiftUI__SwiftUI__AsyncImage<undefined>_>SwiftUI__View_100521b88);
    lVar5 = local_160;
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar15);
    puVar15 = local_148;
    FUN_1000087e4(lVar5,local_148,&DAT_100560b50,&DAT_100436828);
    _swift_storeEnumTagMultiPayload(puVar15,local_140,0);
    FUN_100002f94(&DAT_10054e548,&DAT_10041f4a0);
    FUN_1003eebe0();
    FUN_10006c2c8();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar15);
    _swift_release(IVar10.unknown);
    FUN_10002a29c(lVar5,&DAT_100560b50,&DAT_100436828);
  }
  return;
}

