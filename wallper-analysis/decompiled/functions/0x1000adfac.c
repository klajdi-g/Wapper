// rea decompile_all
// name: FUN_1000adfac
// address: 0x1000adfac
// body: available
// range: 0x1000adfac-0x1000ae4bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000adfac(undefined8 param_1,NSImage *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ResizingMode RVar2;
  Design DVar3;
  undefined7 extraout_var;
  undefined *puVar5;
  undefined *puVar6;
  Image IVar7;
  Image IVar8;
  Color CVar9;
  Color CVar10;
  undefined7 extraout_var_00;
  Font FVar11;
  Color CVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  CGFloat size;
  long extraout_x12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  EdgeInsets capInsets;
  long lVar18;
  String systemName;
  undefined *apuStack_90 [4];
  undefined *puVar4;
  
  apuStack_90[1] = (undefined *)param_3;
  apuStack_90[3] = (undefined *)param_1;
  RVar2 = SwiftUI::Image::ResizingMode::typeMetadataAccessor();
  puVar4 = (undefined *)CONCAT71(extraout_var,RVar2.value);
  lVar18 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar18 + 0x40));
  capInsets.unknown = (undefined *)((long)apuStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar5 = &DAT_1005505a8;
  FUN_100002f94(&DAT_1005505a8,&DAT_100421e00);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar14 = (undefined8 *)(capInsets.unknown + -extraout_x8_00);
  puVar6 = &DAT_1005505b0;
  FUN_100002f94(&DAT_1005505b0,&DAT_100421e08);
  apuStack_90[2] = puVar6;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = (long)puVar14 - extraout_x8_01;
  puVar6 = &DAT_10054a828;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = lVar15 - extraout_x8_02;
  puVar6 = &DAT_10054a8b8;
  FUN_100002f94(&DAT_10054a8b8,&DAT_10041fc00);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar17 = lVar13 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar16 = lVar17 - extraout_x12;
  if (param_2 == (NSImage *)0x0) {
    CVar9 = SwiftUI::Color::get_white((Color)0x0);
    CVar10 = SwiftUI::Color::opacity(0.08,CVar9);
    _swift_release(CVar9.unknown);
    FUN_100029504(apuStack_90[1],lVar16,PTR_typeMetadataAccessor_1005223a8);
    *(undefined **)(lVar16 + *(int *)(puVar6 + 0x34)) = CVar10.unknown;
    *(undefined2 *)(lVar16 + *(int *)(puVar6 + 0x38)) = 0x100;
    systemName.bridgeObject = (void *)0xea00000000006574;
    systemName.str = (char *)0x6f6e2e636973756d;
    apuStack_90[1] = (undefined *)SwiftUI::Image::init(systemName);
    size.unknown = (undefined *)0x3fd3333333333333;
    SwiftUI::Font::Weight::get_medium((Weight)apuStack_90[1]);
    DVar3 = SwiftUI::Font::Design::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var_00,DVar3.value) + -8) + 0x38))
              (lVar13,1,1,CONCAT71(extraout_var_00,DVar3.value));
    FVar11 = SwiftUI::Font::_system(size,(Font)0x0);
    FUN_10002a29c(lVar13,&DAT_10054a828,&DAT_10041e3c0);
    CVar9.unknown = &DAT_100421ab8;
    _swift_getKeyPath();
    CVar10 = SwiftUI::Color::get_white(CVar9);
    CVar12 = SwiftUI::Color::opacity(0.6,CVar10);
    _swift_release(CVar10.unknown);
    FUN_1000087e4(lVar16,lVar17,&DAT_10054a8b8,&DAT_10041fc00);
    FUN_1000087e4(lVar17,lVar15,&DAT_10054a8b8,&DAT_10041fc00);
    puVar6 = &DAT_1005505b8;
    FUN_100002f94(&DAT_1005505b8,&DAT_100421e18);
    puVar1 = (undefined8 *)(lVar15 + *(int *)(puVar6 + 0x30));
    *puVar1 = apuStack_90[1];
    puVar1[1] = CVar9.unknown;
    puVar1[2] = FVar11.unknown;
    puVar1[3] = CVar12.unknown;
    _swift_retain();
    _swift_retain(CVar9.unknown);
    _swift_retain(FVar11.unknown);
    _swift_retain(CVar12.unknown);
    FUN_10002a29c(lVar17,&DAT_10054a8b8,&DAT_10041fc00);
    FUN_1000087e4(lVar15,puVar14,&DAT_1005505b0,&DAT_100421e08);
    _swift_storeEnumTagMultiPayload(puVar14,puVar5,1);
    FUN_100002f94(&DAT_100550170,&DAT_10042e8e0);
    FUN_1000b2e98();
    FUN_1000087a0(&DAT_1005505c0,&DAT_1005505b0,&DAT_100421e08,
                  PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0);
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar14);
    _swift_release(CVar12.unknown);
    _swift_release(FVar11.unknown);
    _swift_release(CVar9.unknown);
    _swift_release(apuStack_90[1]);
    FUN_10002a29c(lVar16,&DAT_10054a8b8,&DAT_10041fc00);
    FUN_10002a29c(lVar15,&DAT_1005505b0,&DAT_100421e08);
  }
  else {
    IVar7 = SwiftUI::Image::init(param_2);
    IVar8.unknown = puVar4;
    (**(code **)(lVar18 + 0x68))
              (capInsets.unknown,
               *(undefined4 *)
                PTR___enum_case_for_SwiftUI_Image_ResizingMode_stretch_SwiftUI_Image_ResizingMode_Type___>_SwiftUI_Image_ResizingMode_1005232f0
              );
    IVar8 = SwiftUI::Image::resizable(capInsets,(ResizingMode)(__int8)IVar7.unknown,IVar8);
    _swift_release(IVar7.unknown);
    (**(code **)(lVar18 + 8))(capInsets.unknown,puVar4);
    *puVar14 = IVar8.unknown;
    puVar14[1] = 0;
    *(undefined2 *)(puVar14 + 2) = 0x101;
    _swift_storeEnumTagMultiPayload(puVar14,puVar5,0);
    FUN_100002f94(&DAT_100550170,&DAT_10042e8e0);
    FUN_1000b2e98();
    FUN_1000087a0(&DAT_1005505c0,&DAT_1005505b0,&DAT_100421e08,
                  PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0);
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar14);
  }
  return;
}

