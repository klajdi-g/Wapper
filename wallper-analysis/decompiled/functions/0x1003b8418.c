// rea decompile_all
// name: FUN_1003b8418
// address: 0x1003b8418
// body: available
// range: 0x1003b8418-0x1003b8ab3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003b8418(undefined8 *param_1,long param_2)

{
  EdgeInsets capInsets;
  long lVar1;
  ResizingMode RVar2;
  bool bVar3;
  undefined *puVar4;
  undefined7 extraout_var;
  URL UVar5;
  Color CVar6;
  Color CVar7;
  Color CVar8;
  UnitPoint UVar9;
  Gradient gradient;
  URL UVar10;
  long lVar11;
  State SVar12;
  Image IVar13;
  Image IVar14;
  UnitPoint startPoint;
  UnitPoint endPoint;
  undefined2 uVar15;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *puVar16;
  long extraout_x8_01;
  undefined *puVar17;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x12;
  long extraout_x12_00;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  CGFloat url;
  undefined *local_120;
  EdgeInsets local_118;
  long local_110;
  undefined *puStack_108;
  long local_100;
  long local_f8;
  undefined *local_f0;
  undefined8 *local_e8;
  undefined *local_e0;
  long local_d8;
  undefined8 *local_d0;
  NSImage *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  
  puVar4 = &DAT_10055ff58;
  local_d8 = param_2;
  local_d0 = param_1;
  FUN_100002f94(&DAT_10055ff58,&DAT_100435a10);
  local_f8 = *(long *)(puVar4 + -8);
  local_e0 = puVar4;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_f8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_10055ff60;
  local_100 = (long)&local_120 - extraout_x8;
  FUN_100002f94(&DAT_10055ff60,&DAT_100435a18);
  local_f0 = puVar4;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar16 = (undefined8 *)(((long)&local_120 - extraout_x8) - extraout_x8_00);
  local_e8 = puVar16;
  RVar2 = SwiftUI::Image::ResizingMode::typeMetadataAccessor();
  puStack_108 = (undefined *)CONCAT71(extraout_var,RVar2.value);
  local_110 = *(long *)(puStack_108 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_110 + 0x40));
  puVar17 = (undefined *)((long)puVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  puVar4 = &DAT_100553d90;
  local_118.unknown = puVar17;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  url.unknown = puVar17 + -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = (long)url.unknown - extraout_x12;
  UVar5 = Foundation::URL::typeMetadataAccessor();
  lVar22 = *(long *)(UVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar22 + 0x40));
  puVar17 = (undefined *)(lVar18 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  puVar4 = &DAT_10055ff68;
  FUN_100002f94(&DAT_10055ff68,&DAT_100435a20);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar20 = (long)puVar17 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar21 = lVar20 - extraout_x12_00;
  CVar6.unknown = &DAT_10054af98;
  FUN_100002f94(&DAT_10054af98,&DAT_10041c1a0);
  startPoint.unknown = (undefined *)0x30;
  endPoint.unknown = (undefined *)0x7;
  _swift_allocObject();
  *(undefined8 *)(CVar6.unknown + 0x18) = 4;
  *(undefined8 *)(CVar6.unknown + 0x10) = 2;
  CVar7 = SwiftUI::Color::get_white(CVar6);
  CVar8 = SwiftUI::Color::opacity(0.18,CVar7);
  _swift_release();
  *(undefined **)(CVar6.unknown + 0x20) = CVar8.unknown;
  UVar9.unknown = (undefined *)SwiftUI::Color::get_white(CVar7);
  CVar8 = SwiftUI::Color::opacity(0.05,(Color)UVar9.unknown);
  lVar1 = local_d8;
  _swift_release();
  *(undefined **)(CVar6.unknown + 0x28) = CVar8.unknown;
  UVar9 = SwiftUI::UnitPoint::get_topLeading(UVar9);
  SwiftUI::UnitPoint::get_bottomTrailing(UVar9);
  gradient = SwiftUI::Gradient::init();
  SwiftUI::LinearGradient::init(gradient,startPoint,endPoint);
  FUN_1000087e4(lVar1,lVar18,&DAT_100553d90,&DAT_10041bf10);
  lVar11 = lVar18;
  (**(code **)(lVar22 + 0x30))(lVar18,1,UVar5.unknown);
  if ((int)lVar11 == 1) {
    FUN_10002a29c(lVar18,&DAT_100553d90,&DAT_10041bf10);
    uVar19 = 1;
  }
  else {
    UVar10.unknown = puVar17;
    (**(code **)(lVar22 + 0x20))(puVar17,lVar18,UVar5.unknown);
    bVar3 = Foundation::URL::get_isFileURL(UVar10);
    local_120 = puVar17;
    if (bVar3) {
      lVar11 = 0;
      FUN_1003ba110();
      puVar16 = (undefined8 *)(lVar1 + *(int *)(lVar11 + 0x14));
      uStack_b8 = puVar16[1];
      local_c0 = *puVar16;
      SVar12.unknown = &DAT_10054eed8;
      FUN_100002f94(&DAT_10054eed8,&DAT_1004249f0);
      SwiftUI::State::get_wrappedValue(SVar12);
      if (local_c8 == (NSImage *)0x0) {
        IVar14.unknown = (undefined *)0x0;
        uVar15 = 0;
      }
      else {
        IVar13 = SwiftUI::Image::init(local_c8);
        puVar4 = puStack_108;
        lVar1 = local_110;
        capInsets.unknown = local_118.unknown;
        IVar14.unknown = puStack_108;
        (**(code **)(local_110 + 0x68))
                  (local_118.unknown,
                   *(undefined4 *)
                    PTR___enum_case_for_SwiftUI_Image_ResizingMode_stretch_SwiftUI_Image_ResizingMode_Type___>_SwiftUI_Image_ResizingMode_1005232f0
                  );
        IVar14 = SwiftUI::Image::resizable(capInsets,(ResizingMode)(__int8)IVar13.unknown,IVar14);
        _swift_release(IVar13.unknown);
        (**(code **)(lVar1 + 8))(capInsets.unknown,puVar4);
        _swift_retain(IVar14.unknown);
        uVar15 = 0x101;
      }
      puVar16 = local_e8;
      puVar4 = local_f0;
      *local_e8 = IVar14.unknown;
      puVar16[1] = 0;
      *(undefined2 *)(puVar16 + 2) = uVar15;
      _swift_storeEnumTagMultiPayload(puVar16,puVar4,0);
      FUN_100002f94(&DAT_10055ffb0,&DAT_100435a58);
      FUN_1003bade4();
      FUN_1000087a0(&DAT_10055ffc0,&DAT_10055ff58,&DAT_100435a10,
                    PTR_SwiftUI__SwiftUI__AsyncImage<undefined>_>SwiftUI__View_100521b88);
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar16);
      _swift_release(IVar14.unknown);
    }
    else {
      (**(code **)(lVar22 + 0x10))(url.unknown,puVar17,UVar5.unknown);
      (**(code **)(lVar22 + 0x38))(url.unknown,0,1,UVar5.unknown);
      FUN_100002f94(&DAT_10055ff80,&DAT_100435a38);
      FUN_1003bac8c();
      lVar1 = local_100;
      SwiftUI::AsyncImage::_init(url,(Transaction)0x0);
      puVar4 = local_e0;
      puVar16 = local_e8;
      lVar11 = local_f8;
      (**(code **)(local_f8 + 0x10))(local_e8,lVar1,local_e0);
      _swift_storeEnumTagMultiPayload(puVar16,local_f0,1);
      FUN_100002f94(&DAT_10055ffb0,&DAT_100435a58);
      FUN_1003bade4();
      FUN_1000087a0(&DAT_10055ffc0,&DAT_10055ff58,&DAT_100435a10,
                    PTR_SwiftUI__SwiftUI__AsyncImage<undefined>_>SwiftUI__View_100521b88);
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar16);
      (**(code **)(lVar11 + 8))(lVar1,puVar4);
    }
    (**(code **)(lVar22 + 8))(local_120,UVar5.unknown);
    uVar19 = 0;
  }
  puVar4 = &DAT_10055ff70;
  FUN_100002f94(&DAT_10055ff70,&DAT_100435a28);
  (**(code **)(*(long *)(puVar4 + -8) + 0x38))(lVar21,uVar19,1,puVar4);
  FUN_1000087e4(lVar21,lVar20,&DAT_10055ff68,&DAT_100435a20);
  puVar16 = local_d0;
  *local_d0 = local_b0;
  local_d0[4] = uStack_90;
  local_d0[3] = local_98;
  local_d0[2] = uStack_a0;
  local_d0[1] = local_a8;
  puVar4 = &DAT_10055ff78;
  FUN_100002f94(&DAT_10055ff78,&DAT_100435a30);
  FUN_1000087e4(lVar20,(long)puVar16 + (long)*(int *)(puVar4 + 0x30),&DAT_10055ff68,&DAT_100435a20);
  _swift_bridgeObjectRetain(local_b0);
  FUN_10002a29c(lVar21,&DAT_10055ff68,&DAT_100435a20);
  FUN_10002a29c(lVar20,&DAT_10055ff68,&DAT_100435a20);
  _swift_bridgeObjectRelease(local_b0);
  return;
}

