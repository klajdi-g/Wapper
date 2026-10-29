// rea decompile_all
// name: FUN_1003a9184
// address: 0x1003a9184
// body: available
// range: 0x1003a9184-0x1003a94e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003a925c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003a9184(long param_1)

{
  byte bVar1;
  AnyView AVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 auStack_80 [4];
  
  bVar1 = Swift::_stdlib_isOSVersionAtLeast(0xf,0,0);
  if ((bVar1 & 1) == 0) {
    puVar3 = &DAT_10055f970;
    FUN_100002f94(&DAT_10055f970,&DAT_100435270);
    lVar9 = *(long *)(puVar3 + -8);
    (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar7 = (long)auStack_80 - extraout_x8_00;
    SwiftUI::AppStorage::get_projectedValue((AppStorage)*(undefined **)(param_1 + 0x38));
    FUN_100002f94(&DAT_10055f978,&DAT_100435278);
    FUN_1000087a0(&DAT_10055f980,&DAT_10055f978,&DAT_100435278,
                  PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0);
    SwiftUI::TabView::_init();
    puVar4 = &DAT_10055f988;
    FUN_100002f94(&DAT_10055f988,&DAT_100435280);
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar6 = lVar7 - extraout_x8_01;
    (**(code **)(lVar9 + 0x10))(lVar6,lVar7,puVar3);
    _swift_storeEnumTagMultiPayload(lVar6,puVar4,1);
    FUN_1000087a0(&DAT_10055f990,&DAT_10055f970,&DAT_100435270,
                  PTR_SwiftUI__SwiftUI__TabView<undefined,undefined>_>SwiftUI__View_100523610);
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar6);
    (**(code **)(lVar9 + 8))(lVar7,puVar3);
  }
  else {
    puVar3 = &DAT_10055f998;
    FUN_100002f94(&DAT_10055f998,&DAT_100435288);
    lVar7 = *(long *)(*(long *)(puVar3 + -8) + 0x40);
    (*(code *)PTR____chkstk_darwin_100521118)();
    uVar8 = lVar7 + 0xfU & 0xfffffffffffffff0;
    lVar6 = (long)auStack_80 - uVar8;
    FUN_1003ad26c(lVar6);
    (*(code *)PTR____chkstk_darwin_100521118)();
    lVar7 = lVar6;
    FUN_1000087e4(lVar6,lVar6 - uVar8,&DAT_10055f998,&DAT_100435288);
    FUN_1003b1044();
    AVar2 = SwiftUI::AnyView::_init(lVar7,puVar3,lVar7);
    puVar3 = &DAT_10055f988;
    FUN_100002f94(&DAT_10055f988,&DAT_100435280);
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar5 = (undefined8 *)(lVar6 - extraout_x8);
    *puVar5 = AVar2.unknown;
    _swift_storeEnumTagMultiPayload(puVar5);
    FUN_100002f94(&DAT_10055f970,&DAT_100435270);
    FUN_1000087a0(&DAT_10055f990,&DAT_10055f970,&DAT_100435270,
                  PTR_SwiftUI__SwiftUI__TabView<undefined,undefined>_>SwiftUI__View_100523610);
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar5);
    FUN_10002a29c(lVar6,&DAT_10055f998,&DAT_100435288);
  }
  return;
}

