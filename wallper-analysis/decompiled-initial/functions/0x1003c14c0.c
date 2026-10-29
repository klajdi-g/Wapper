// rea decompile_all
// name: FUN_1003c14c0
// address: 0x1003c14c0
// body: available
// range: 0x1003c14c0-0x1003c1887 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003c14c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  Material MVar5;
  undefined8 *puVar6;
  EnvironmentObject<undefined> EVar7;
  UnitPoint UVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar9;
  long extraout_x12;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *apuStack_80 [4];
  
  puVar3 = &DAT_1005602a0;
  apuStack_80[3] = (undefined *)param_1;
  FUN_100002f94(&DAT_1005602a0,&DAT_100435d98);
  apuStack_80[2] = puVar3;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)apuStack_80 - extraout_x8;
  puVar3 = &DAT_100560310;
  FUN_100002f94(&DAT_100560310,&DAT_100435df0);
  apuStack_80[1] = puVar3;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar11 - extraout_x8_00;
  puVar3 = &DAT_10054af90;
  FUN_100002f94(&DAT_10054af90,&DAT_100435190);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = lVar10 - extraout_x8_01;
  lVar4 = 0;
  FUN_10040211c();
  lVar12 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar12 + 0x40));
  lVar4 = lVar14 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = lVar4 - extraout_x12;
  MVar5.unknown = (undefined *)0x0;
  FUN_1003cff30(0,param_5,param_6);
  FUN_1003bce9c();
  if (*(long *)(MVar5.unknown + 0x10) == 0) {
    _swift_bridgeObjectRelease();
    SwiftUI::Material::get_ultraThin(MVar5);
    *(undefined2 *)(lVar14 + *(int *)(puVar3 + 0x38)) = 0x100;
    FUN_1000087e4(lVar14,lVar10,&DAT_10054af90,&DAT_100435190);
    _swift_storeEnumTagMultiPayload(lVar10,apuStack_80[1],1);
    FUN_1003e398c();
    FUN_1000087a0(&DAT_100550ea8,&DAT_10054af90,&DAT_100435190,
                  PTR_SwiftUI__SwiftUI___ShapeView<undefined,undefined>_>SwiftUI__View_100521c78);
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar10);
    FUN_10002a29c(lVar14,&DAT_10054af90,&DAT_100435190);
  }
  else {
    uVar9 = (ulong)*(byte *)(lVar12 + 0x50);
    FUN_100029504(MVar5.unknown + (uVar9 + 0x20 & (uVar9 ^ 0xffffffffffffffff)),lVar4,FUN_10040211c)
    ;
    _swift_bridgeObjectRelease(MVar5.unknown);
    FUN_100007e64(lVar4,lVar13,FUN_10040211c);
    FUN_100029504(lVar13,lVar11,FUN_10040211c);
    FUN_100279594(0);
    puVar6 = &DAT_100553dd0;
    FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
    EVar7 = SwiftUI::EnvironmentObject::init();
    lVar4 = 0;
    FUN_1003e3b0c();
    puVar1 = (undefined8 *)(lVar11 + *(int *)(lVar4 + 0x14));
    *puVar1 = EVar7.unknown;
    puVar1[1] = puVar6;
    puVar3 = &DAT_1005602c0;
    FUN_100002f94(&DAT_1005602c0,&DAT_100435da8);
    iVar2 = *(int *)(puVar3 + 0x24);
    *(undefined8 *)(lVar11 + iVar2) = 0x4049000000000000;
    *(undefined1 *)((undefined8 *)(lVar11 + iVar2) + 1) = 0;
    UVar8.unknown = &DAT_1005602b0;
    FUN_100002f94(&DAT_1005602b0,&DAT_100435da0);
    *(undefined8 *)(lVar11 + *(int *)(UVar8.unknown + 0x24)) = 0x3fd999999999999a;
    SwiftUI::UnitPoint::get_center(UVar8);
    puVar6 = (undefined8 *)(lVar11 + *(int *)(apuStack_80[2] + 0x24));
    puVar6[1] = 0x3ff199999999999a;
    *puVar6 = 0x3ff199999999999a;
    puVar6[2] = param_2;
    puVar6[3] = param_3;
    FUN_1000087e4(lVar11,lVar10,&DAT_1005602a0,&DAT_100435d98);
    _swift_storeEnumTagMultiPayload(lVar10,apuStack_80[1],0);
    FUN_1003e398c();
    FUN_1000087a0(&DAT_100550ea8,&DAT_10054af90,&DAT_100435190,
                  PTR_SwiftUI__SwiftUI___ShapeView<undefined,undefined>_>SwiftUI__View_100521c78);
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar10);
    FUN_10002a29c(lVar11,&DAT_1005602a0,&DAT_100435d98);
    FUN_100029548(lVar13,FUN_10040211c);
  }
  return;
}

