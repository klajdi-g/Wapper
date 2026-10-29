// rea decompile_all
// name: FUN_1003b1b70
// address: 0x1003b1b70
// body: available
// range: 0x1003b1b70-0x1003b1eb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003b1c88 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003b1b70(void)

{
  undefined *puVar1;
  byte bVar2;
  AnyView AVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  bVar2 = Swift::_stdlib_isOSVersionAtLeast(0xf,0,0);
  if ((bVar2 & 1) == 0) {
    puVar4 = &DAT_10055fb78;
    FUN_100002f94(&DAT_10055fb78,&DAT_100435560);
    lVar10 = *(long *)(puVar4 + -8);
    (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar6 = &stack0xffffffffffffffa0 + -extraout_x8_00;
    FUN_100002f94(&DAT_10055fb80,&DAT_100435568);
    FUN_1003b22c4();
    (extension_SwiftUI)::SwiftUI::TabView::_init();
    puVar5 = &DAT_10055fb90;
    FUN_100002f94(&DAT_10055fb90,&DAT_100435570);
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar8 = (long)puVar6 - extraout_x8_01;
    (**(code **)(lVar10 + 0x10))(lVar8,puVar6,puVar4);
    _swift_storeEnumTagMultiPayload(lVar8,puVar5,1);
    FUN_1000087a0(&DAT_10055fb98,&DAT_10055fb78,&DAT_100435560,
                  PTR_SwiftUI__SwiftUI__TabView<undefined,undefined>_>SwiftUI__View_100523610);
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar8);
    (**(code **)(lVar10 + 8))(puVar6,puVar4);
  }
  else {
    puVar4 = &DAT_10055fba0;
    FUN_100002f94(&DAT_10055fba0,&DAT_100435578);
    lVar10 = *(long *)(puVar4 + -8);
    lVar8 = *(long *)(lVar10 + 0x40);
    (*(code *)PTR____chkstk_darwin_100521118)();
    uVar9 = lVar8 + 0xfU & 0xfffffffffffffff0;
    puVar6 = &stack0xffffffffffffffa0 + -uVar9;
    FUN_100002f94(&DAT_10055fba8,&DAT_100435580);
    FUN_1003b23a4();
    SwiftUI::TabView::_init();
    (*(code *)PTR____chkstk_darwin_100521118)();
    (**(code **)(lVar10 + 0x10))((long)puVar6 - uVar9,puVar6,puVar4);
    puVar1 = PTR_SwiftUI__SwiftUI__TabView<undefined,undefined>_>SwiftUI__View_100523610;
    puVar5 = &DAT_10055fbc8;
    FUN_1000087a0(&DAT_10055fbc8,&DAT_10055fba0,&DAT_100435578,
                  PTR_SwiftUI__SwiftUI__TabView<undefined,undefined>_>SwiftUI__View_100523610);
    AVar3 = SwiftUI::AnyView::_init(puVar5,puVar4,puVar5);
    puVar5 = &DAT_10055fb90;
    FUN_100002f94(&DAT_10055fb90,&DAT_100435570);
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar7 = (undefined8 *)(puVar6 + -extraout_x8);
    *puVar7 = AVar3.unknown;
    _swift_storeEnumTagMultiPayload(puVar7);
    FUN_100002f94(&DAT_10055fb78,&DAT_100435560);
    FUN_1000087a0(&DAT_10055fb98,&DAT_10055fb78,&DAT_100435560,puVar1);
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar7);
    (**(code **)(lVar10 + 8))(puVar6,puVar4);
  }
  return;
}

