// rea decompile_all
// name: FUN_1003a00d0
// address: 0x1003a00d0
// body: available
// range: 0x1003a00d0-0x1003a046f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003a00d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  UnitPoint UVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  Material MVar11;
  undefined *local_80 [4];
  
  puVar3 = &DAT_10055dec8;
  local_80[3] = (undefined *)param_1;
  FUN_100002f94(&DAT_10055dec8,&DAT_100433780);
  local_80[2] = puVar3;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)local_80 - extraout_x8;
  puVar3 = &DAT_10055f340;
  FUN_100002f94(&DAT_10055f340,&DAT_100434b18);
  local_80[0] = puVar3;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = lVar8 - extraout_x8_00;
  puVar3 = &DAT_10054af90;
  FUN_100002f94(&DAT_10054af90,&DAT_100435190);
  local_80[1] = puVar3;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar6 - extraout_x8_01;
  puVar3 = &DAT_10054ac40;
  FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  MVar11.unknown = (undefined *)(lVar10 - extraout_x8_02);
  lVar4 = 0;
  FUN_10040211c();
  lVar7 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar7 + 0x40));
  lVar9 = (long)MVar11.unknown - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  FUN_1000087e4(param_4,MVar11.unknown,&DAT_10054ac40,&DAT_10041ce70);
  puVar3 = MVar11.unknown;
  (**(code **)(lVar7 + 0x30))(MVar11.unknown,1,lVar4);
  if ((int)puVar3 == 1) {
    FUN_10002a29c(MVar11.unknown,&DAT_10054ac40,&DAT_10041ce70);
    SwiftUI::Material::get_ultraThin(MVar11);
    *(undefined2 *)(lVar10 + *(int *)(local_80[1] + 0x38)) = 0x100;
    FUN_1000087e4(lVar10,lVar6,&DAT_10054af90,&DAT_100435190);
    _swift_storeEnumTagMultiPayload(lVar6,local_80[0],1);
    FUN_1003a6454();
    FUN_1000087a0(&DAT_100550ea8,&DAT_10054af90,&DAT_100435190,
                  PTR_SwiftUI__SwiftUI___ShapeView<undefined,undefined>_>SwiftUI__View_100521c78);
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar6);
    FUN_10002a29c(lVar10,&DAT_10054af90,&DAT_100435190);
  }
  else {
    FUN_100007e64(MVar11.unknown,lVar9,FUN_10040211c);
    FUN_100029504(lVar9,lVar8,FUN_10040211c);
    puVar3 = &DAT_10055deb8;
    FUN_100002f94(&DAT_10055deb8,&DAT_100433770);
    iVar2 = *(int *)(puVar3 + 0x24);
    *(undefined8 *)(lVar8 + iVar2) = 0x4049000000000000;
    *(undefined1 *)((undefined8 *)(lVar8 + iVar2) + 1) = 0;
    UVar5.unknown = &DAT_10055dec0;
    FUN_100002f94(&DAT_10055dec0,&DAT_100433778);
    *(undefined8 *)(lVar8 + *(int *)(UVar5.unknown + 0x24)) = 0x3fd999999999999a;
    SwiftUI::UnitPoint::get_center(UVar5);
    puVar1 = (undefined8 *)(lVar8 + *(int *)(local_80[2] + 0x24));
    puVar1[1] = 0x3ff199999999999a;
    *puVar1 = 0x3ff199999999999a;
    puVar1[2] = param_2;
    puVar1[3] = param_3;
    FUN_1000087e4(lVar8,lVar6,&DAT_10055dec8,&DAT_100433780);
    _swift_storeEnumTagMultiPayload(lVar6,local_80[0],0);
    FUN_1003a6454();
    FUN_1000087a0(&DAT_100550ea8,&DAT_10054af90,&DAT_100435190,
                  PTR_SwiftUI__SwiftUI___ShapeView<undefined,undefined>_>SwiftUI__View_100521c78);
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar6);
    FUN_10002a29c(lVar8,&DAT_10055dec8,&DAT_100433780);
    FUN_100029548(lVar9,FUN_10040211c);
  }
  return;
}

