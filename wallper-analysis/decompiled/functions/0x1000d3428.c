// rea decompile_all
// name: FUN_1000d3428
// address: 0x1000d3428
// body: available
// range: 0x1000d3428-0x1000d3713 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000d35bc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000d3428(undefined8 param_1)

{
  byte bVar1;
  PointerStyle PVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  AnyView AVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined *apuStack_80 [4];
  
  bVar1 = Swift::_stdlib_isOSVersionAtLeast(0xf,0,0);
  if ((bVar1 & 1) == 0) {
    puVar7 = &DAT_100551630;
    FUN_100002f94(&DAT_100551630,&DAT_1004232a8);
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    FUN_1000d7854();
    _swift_storeEnumTagMultiPayload((long)apuStack_80 - extraout_x8_01,puVar7,1);
    FUN_100002f94(&DAT_100551580,&DAT_100423208);
    FUN_1000d7428();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init
              ((Storage)(__int8)((long)apuStack_80 - extraout_x8_01));
  }
  else {
    puVar7 = &DAT_100551638;
    FUN_100002f94(&DAT_100551638,&DAT_1004232b0);
    lVar8 = *(long *)(puVar7 + -8);
    lVar9 = *(long *)(lVar8 + 0x40);
    apuStack_80[1] = (undefined *)param_1;
    (*(code *)PTR____chkstk_darwin_100521118)();
    uVar11 = lVar9 + 0xfU & 0xfffffffffffffff0;
    lVar9 = (long)apuStack_80 - uVar11;
    PVar2.unknown = &DAT_100551640;
    FUN_100002f94(&DAT_100551640,&DAT_1004232b8);
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(*(long *)(PVar2.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    SwiftUI::PointerStyle::get_horizontalText(PVar2);
    PVar2 = SwiftUI::PointerStyle::typeMetadataAccessor();
    (**(code **)(*(long *)(PVar2.unknown + -8) + 0x38))(lVar9 - extraout_x8,0,1,PVar2.unknown);
    puVar3 = &DAT_100551580;
    FUN_100002f94(&DAT_100551580,&DAT_100423208);
    puVar4 = puVar3;
    FUN_1000d7428();
    (extension_SwiftUI)::SwiftUI::View::_pointerStyle();
    FUN_10002a29c(lVar9 - extraout_x8,&DAT_100551640,&DAT_1004232b8);
    (*(code *)PTR____chkstk_darwin_100521118)();
    (**(code **)(lVar8 + 0x10))(lVar9 - uVar11,lVar9,puVar7);
    ppuVar5 = apuStack_80 + 2;
    apuStack_80[2] = puVar3;
    apuStack_80[3] = puVar4;
    _swift_getOpaqueTypeConformance2
              (ppuVar5,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_pointerStyle(SwiftUI_PointerStyle_)__>_some>>_100522f40
               ,1);
    AVar6 = SwiftUI::AnyView::_init(ppuVar5,puVar7,ppuVar5);
    puVar3 = &DAT_100551630;
    FUN_100002f94(&DAT_100551630,&DAT_1004232a8);
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar10 = (undefined8 *)(lVar9 - extraout_x8_00);
    *puVar10 = AVar6.unknown;
    _swift_storeEnumTagMultiPayload(puVar10);
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar10);
    (**(code **)(lVar8 + 8))(lVar9,puVar7);
  }
  return;
}

