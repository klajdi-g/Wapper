// rea decompile_all
// name: FUN_1000f0268
// address: 0x1000f0268
// body: available
// range: 0x1000f0268-0x1000f0aab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000f0268(undefined8 param_1)

{
  EdgeInsets capInsets;
  NSImage *pNVar1;
  undefined8 uVar2;
  code *pcVar3;
  ResizingMode RVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined7 extraout_var;
  URL UVar9;
  State SVar10;
  Image IVar11;
  Image IVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 *puVar13;
  long extraout_x8_02;
  undefined *puVar14;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  ulong uVar15;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x13;
  long unaff_x20;
  long lVar16;
  CGFloat url;
  ulong uVar17;
  long lVar18;
  long lVar19;
  undefined *apuStack_180 [3];
  long local_168;
  EdgeInsets local_160;
  long local_158;
  undefined *local_150;
  long local_148;
  long local_140;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  undefined *local_118;
  long local_110;
  undefined8 *local_108;
  undefined *local_100;
  undefined8 local_f8;
  NSImage *local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined1 local_b8;
  NSImage *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *local_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 local_78;
  
  puVar6 = &DAT_100552570;
  local_f8 = param_1;
  FUN_100002f94(&DAT_100552570,&DAT_100424a08);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar18 = (long)apuStack_180 - extraout_x8;
  puVar7 = &DAT_100552578;
  FUN_100002f94(&DAT_100552578,&DAT_100424a10);
  local_138 = *(long *)(puVar7 + -8);
  local_100 = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_138 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar7 = &DAT_100552580;
  local_140 = lVar18 - extraout_x8_00;
  FUN_100002f94(&DAT_100552580,&DAT_100424a18);
  local_118 = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar13 = (undefined8 *)((lVar18 - extraout_x8_00) - extraout_x8_01);
  lVar8 = 0;
  local_108 = puVar13;
  FUN_1000fa84c();
  local_130 = *(long *)(lVar8 + -8);
  local_148 = lVar8;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar8 = (long)puVar13 - (extraout_x12 + 0xfU & 0xfffffffffffffff0);
  local_128 = extraout_x12;
  local_120 = lVar8;
  RVar4 = SwiftUI::Image::ResizingMode::typeMetadataAccessor();
  local_150 = (undefined *)CONCAT71(extraout_var,RVar4.value);
  local_158 = *(long *)(local_150 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_158 + 0x40));
  puVar14 = (undefined *)(lVar8 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  puVar7 = &DAT_100552588;
  local_160.unknown = puVar14;
  FUN_100002f94(&DAT_100552588,&DAT_100424a20);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)puVar14 - extraout_x8_03;
  puVar14 = &DAT_100553d90;
  local_110 = lVar8;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar14 + -8) + 0x40));
  url.unknown = (undefined *)(lVar8 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar16 = (long)url.unknown - extraout_x12_00;
  UVar9 = Foundation::URL::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(UVar9.unknown + -8) + 0x40));
  puVar14 = (undefined *)(lVar16 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0));
  FUN_1000087e4();
  lVar8 = lVar16;
  (**(code **)(extraout_x13 + 0x30))(lVar16,1,extraout_x12_01);
  if ((int)lVar8 == 1) {
    FUN_10002a29c(lVar16,&DAT_100553d90,&DAT_10041bf10);
    _swift_storeEnumTagMultiPayload(lVar18,puVar6,1);
    FUN_1000fc694();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar18);
  }
  else {
    UVar9.unknown = puVar14;
    apuStack_180[1] = puVar6;
    apuStack_180[2] = puVar7;
    local_168 = lVar18;
    (**(code **)(extraout_x13 + 0x20))(puVar14,lVar16,extraout_x12_01);
    bVar5 = Foundation::URL::get_isFileURL(UVar9);
    if (bVar5) {
      puVar13 = (undefined8 *)(unaff_x20 + *(int *)(local_148 + 0x18));
      uStack_a8 = puVar13[1];
      local_b0 = (NSImage *)*puVar13;
      SVar10.unknown = &DAT_10054eed8;
      local_140 = extraout_x13;
      local_138 = extraout_x12_01;
      FUN_100002f94(&DAT_10054eed8,&DAT_1004249f0);
      SwiftUI::State::get_wrappedValue(SVar10);
      if (local_f0 == (NSImage *)0x0) {
        local_b8 = 1;
        FUN_100002f94(&DAT_1005525b0,&DAT_100424a30);
        FUN_1000fc7a4();
        (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init
                  ((Storage)((char)&stack0xfffffffffffffff0 + 0x20));
      }
      else {
        IVar11 = SwiftUI::Image::init(local_f0);
        puVar6 = local_150;
        lVar8 = local_158;
        capInsets.unknown = local_160.unknown;
        IVar12.unknown = local_150;
        (**(code **)(local_158 + 0x68))
                  (local_160.unknown,
                   *(undefined4 *)
                    PTR___enum_case_for_SwiftUI_Image_ResizingMode_stretch_SwiftUI_Image_ResizingMode_Type___>_SwiftUI_Image_ResizingMode_1005232f0
                  );
        IVar12 = SwiftUI::Image::resizable(capInsets,(ResizingMode)(__int8)IVar11.unknown,IVar12);
        _swift_release(IVar11.unknown);
        (**(code **)(lVar8 + 8))(capInsets.unknown,puVar6);
        lVar8 = local_120;
        FUN_100029504();
        uVar15 = (ulong)*(byte *)(local_130 + 0x50);
        uVar17 = uVar15 + 0x10 & (uVar15 ^ 0xffffffffffffffff);
        puVar6 = &DAT_10052b360;
        _swift_allocObject(&DAT_10052b360,uVar17 + local_128,uVar15 | 7);
        FUN_100007e64(lVar8,puVar6 + uVar17,FUN_1000fa84c);
        uStack_a8 = 0;
        local_a0 = CONCAT62(local_a0._2_6_,0x101);
        local_98 = thunk_FUN_1000fc9c4;
        uStack_88 = 0;
        uStack_87 = 0;
        uStack_80 = 0;
        uStack_7f = 0;
        local_78 = 0;
        local_b0 = (NSImage *)IVar12;
        local_90 = puVar6;
        FUN_100002f94(&DAT_1005525b0,&DAT_100424a30);
        FUN_1000fc7a4();
        (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init
                  ((Storage)((char)&stack0xfffffffffffffff0 + 0x60));
        uStack_a8 = uStack_e8;
        local_b0 = local_f0;
        local_98 = (code *)uStack_d8;
        local_a0 = uStack_e0;
        uStack_88 = uStack_c8;
        local_90 = (undefined *)local_d0;
        uStack_7f = uStack_bf;
        local_78 = local_b8;
        uStack_87 = uStack_c7;
        uStack_80 = uStack_c0;
      }
      pcVar3 = local_98;
      uVar2 = local_a0;
      pNVar1 = local_b0;
      puVar13 = local_108;
      lVar16 = local_110;
      lVar8 = local_168;
      puVar6 = apuStack_180[1];
      local_108[1] = uStack_a8;
      *puVar13 = pNVar1;
      puVar13[3] = pcVar3;
      puVar13[2] = uVar2;
      puVar7 = local_90;
      puVar13[5] = CONCAT71(uStack_87,uStack_88);
      puVar13[4] = puVar7;
      *(ulong *)((long)puVar13 + 0x31) = CONCAT17(local_78,uStack_7f);
      *(ulong *)((long)puVar13 + 0x29) = CONCAT17(uStack_80,uStack_87);
      _swift_storeEnumTagMultiPayload(puVar13,local_118,0);
      FUN_100002f94(&DAT_1005525a0,&DAT_100424a28);
      FUN_1000fc72c();
      FUN_1000087a0(&DAT_1005525b8,&DAT_100552578,&DAT_100424a10,
                    PTR_SwiftUI__SwiftUI__AsyncImage<undefined>_>SwiftUI__View_100521b88);
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar13);
      lVar18 = local_138;
      lVar19 = local_140;
    }
    else {
      (**(code **)(extraout_x13 + 0x10))(url.unknown,puVar14,extraout_x12_01);
      (**(code **)(extraout_x13 + 0x38))(url.unknown,0,1,extraout_x12_01);
      lVar8 = local_120;
      FUN_100029504();
      uVar15 = (ulong)*(byte *)(local_130 + 0x50);
      uVar17 = uVar15 + 0x10 & (uVar15 ^ 0xffffffffffffffff);
      puVar6 = &DAT_10052b338;
      _swift_allocObject(&DAT_10052b338,uVar17 + local_128,uVar15 | 7);
      FUN_100007e64(lVar8,puVar6 + uVar17,FUN_1000fa84c);
      FUN_100002f94(&DAT_1005525c0,&DAT_100424a40);
      FUN_1000fc868();
      lVar8 = local_140;
      SwiftUI::AsyncImage::_init(url,(Transaction)0x0);
      puVar6 = local_100;
      puVar13 = local_108;
      lVar18 = local_138;
      (**(code **)(local_138 + 0x10))(local_108,lVar8,local_100);
      _swift_storeEnumTagMultiPayload(puVar13,local_118,1);
      FUN_100002f94(&DAT_1005525a0,&DAT_100424a28);
      FUN_1000fc72c();
      FUN_1000087a0(&DAT_1005525b8,&DAT_100552578,&DAT_100424a10,
                    PTR_SwiftUI__SwiftUI__AsyncImage<undefined>_>SwiftUI__View_100521b88);
      lVar16 = local_110;
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar13);
      (**(code **)(lVar18 + 8))(lVar8,puVar6);
      lVar8 = local_168;
      puVar6 = apuStack_180[1];
      lVar18 = extraout_x12_01;
      lVar19 = extraout_x13;
    }
    FUN_1000087e4(lVar16,lVar8,&DAT_100552588,&DAT_100424a20);
    _swift_storeEnumTagMultiPayload(lVar8,puVar6,0);
    FUN_1000fc694();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar8);
    FUN_10002a29c(lVar16,&DAT_100552588,&DAT_100424a20);
    (**(code **)(lVar19 + 8))(puVar14,lVar18);
  }
  return;
}

