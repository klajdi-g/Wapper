// rea decompile_all
// name: FUN_1002c95b8
// address: 0x1002c95b8
// body: available
// range: 0x1002c95b8-0x1002c98a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002c95b8(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  ResizingMode RVar5;
  ControlSize CVar6;
  undefined7 extraout_var;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  State SVar11;
  Image IVar12;
  Image IVar13;
  undefined7 extraout_var_00;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 *puVar14;
  EdgeInsets capInsets;
  long lVar15;
  long lVar16;
  NSImage *apNStack_80 [4];
  undefined *puVar7;
  
  RVar5 = SwiftUI::Image::ResizingMode::typeMetadataAccessor();
  puVar7 = (undefined *)CONCAT71(extraout_var,RVar5.value);
  lVar16 = *(long *)(puVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar16 + 0x40));
  capInsets.unknown = (undefined *)((long)apNStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar8 = &DAT_10055a6d0;
  FUN_100002f94(&DAT_10055a6d0,&DAT_10042e8a8);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar14 = (undefined8 *)(capInsets.unknown + -extraout_x8_00);
  puVar9 = &DAT_10054e748;
  FUN_100002f94(&DAT_10054e748,&DAT_10041f7f0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = (long)puVar14 - extraout_x8_01;
  lVar10 = 0;
  FUN_1002cb204();
  puVar4 = (undefined8 *)(param_1 + *(int *)(lVar10 + 0x14));
  apNStack_80[3] = (NSImage *)puVar4[1];
  apNStack_80[2] = (NSImage *)*puVar4;
  SVar11.unknown = &DAT_10054eed8;
  FUN_100002f94(&DAT_10054eed8,&DAT_1004249f0);
  SwiftUI::State::get_wrappedValue(SVar11);
  if (apNStack_80[1] == (NSImage *)0x0) {
    (extension_SwiftUI)::SwiftUI::ProgressView::_init();
    iVar2 = *(int *)(puVar9 + 0x24);
    puVar9 = &DAT_10054b210;
    FUN_100002f94(&DAT_10054b210,&DAT_10041c420);
    iVar3 = *(int *)(puVar9 + 0x1c);
    uVar1 = *(undefined4 *)
             PTR___enum_case_for_SwiftUI_ControlSize_mini_SwiftUI_ControlSize_Type___>_SwiftUI_ControlSize_100521ca8
    ;
    CVar6 = SwiftUI::ControlSize::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var_00,CVar6.value) + -8) + 0x68))
              (lVar15 + iVar2 + (long)iVar3,uVar1,CONCAT71(extraout_var_00,CVar6.value));
    puVar9 = &DAT_10042e8b0;
    _swift_getKeyPath();
    *(undefined **)(lVar15 + iVar2) = puVar9;
    FUN_1000087e4(lVar15,puVar14,&DAT_10054e748,&DAT_10041f7f0);
    _swift_storeEnumTagMultiPayload(puVar14,puVar8,1);
    FUN_100002f94(&DAT_100550170,&DAT_10042e8e0);
    FUN_1000b2e98();
    FUN_10007401c();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar14);
    FUN_10002a29c(lVar15,&DAT_10054e748,&DAT_10041f7f0);
  }
  else {
    IVar12 = SwiftUI::Image::init(apNStack_80[1]);
    IVar13.unknown = puVar7;
    (**(code **)(lVar16 + 0x68))
              (capInsets.unknown,
               *(undefined4 *)
                PTR___enum_case_for_SwiftUI_Image_ResizingMode_stretch_SwiftUI_Image_ResizingMode_Type___>_SwiftUI_Image_ResizingMode_1005232f0
              );
    IVar13 = SwiftUI::Image::resizable(capInsets,(ResizingMode)(__int8)IVar12.unknown,IVar13);
    _swift_release(IVar12.unknown);
    (**(code **)(lVar16 + 8))(capInsets.unknown,puVar7);
    *puVar14 = IVar13.unknown;
    puVar14[1] = 0;
    *(undefined2 *)(puVar14 + 2) = 0x101;
    _swift_storeEnumTagMultiPayload(puVar14,puVar8,0);
    FUN_100002f94(&DAT_100550170,&DAT_10042e8e0);
    FUN_1000b2e98();
    FUN_10007401c();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar14);
  }
  return;
}

