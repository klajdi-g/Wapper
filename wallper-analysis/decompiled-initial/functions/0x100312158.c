// rea decompile_all
// name: FUN_100312158
// address: 0x100312158
// body: available
// range: 0x100312158-0x10031252b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100312158(undefined *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  State SVar7;
  undefined8 *puVar8;
  EnvironmentObject<undefined> EVar9;
  UnitPoint UVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar11;
  long extraout_x12;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined *local_80 [4];
  
  puVar3 = &DAT_10055bd90;
  local_80[0] = param_1;
  FUN_100002f94(&DAT_10055bd90,&DAT_100430b68);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)local_80 - extraout_x8;
  puVar4 = &DAT_10055bd98;
  FUN_100002f94(&DAT_10055bd98,&DAT_100430b70);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = lVar13 - extraout_x8_00;
  puVar5 = &DAT_10054af90;
  FUN_100002f94(&DAT_10054af90,&DAT_100435190);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = lVar12 - extraout_x8_01;
  lVar6 = 0;
  FUN_10040211c();
  lVar6 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar6 + 0x40));
  lVar16 = lVar15 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = lVar16 - extraout_x12;
  local_80[3] = *(undefined **)(param_4 + 0xb0);
  uVar17 = *(undefined8 *)(param_4 + 0xa8);
  SVar7.unknown = &DAT_10055bd50;
  local_80[2] = (undefined *)uVar17;
  FUN_100002f94(&DAT_10055bd50,&DAT_100430ab8);
  SwiftUI::State::get_wrappedValue(SVar7);
  if (*(long *)(local_80[1] + 0x10) == 0) {
    _swift_bridgeObjectRelease();
    SwiftUI::Material::get_ultraThin((Material)local_80[1]);
    *(undefined2 *)(lVar15 + *(int *)(puVar5 + 0x38)) = 0x100;
    FUN_1000087e4(lVar15,lVar12,&DAT_10054af90,&DAT_100435190);
    _swift_storeEnumTagMultiPayload(lVar12,puVar4,1);
    FUN_10031bb24();
    FUN_1000087a0(&DAT_100550ea8,&DAT_10054af90,&DAT_100435190,
                  PTR_SwiftUI__SwiftUI___ShapeView<undefined,undefined>_>SwiftUI__View_100521c78);
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar12);
    FUN_10002a29c(lVar15,&DAT_10054af90,&DAT_100435190);
  }
  else {
    uVar11 = (ulong)*(byte *)(lVar6 + 0x50);
    FUN_100029504(local_80[1] + (uVar11 + 0x20 & (uVar11 ^ 0xffffffffffffffff)),lVar16,FUN_10040211c
                 );
    _swift_bridgeObjectRelease(local_80[1]);
    FUN_100007e64(lVar16,lVar14,FUN_10040211c);
    FUN_100029504(lVar14,lVar13,FUN_10040211c);
    FUN_100279594(0);
    puVar8 = &DAT_100553dd0;
    FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
    EVar9 = SwiftUI::EnvironmentObject::init();
    lVar6 = 0;
    FUN_10031bb10();
    puVar1 = (undefined8 *)(lVar13 + *(int *)(lVar6 + 0x14));
    *puVar1 = EVar9.unknown;
    puVar1[1] = puVar8;
    puVar5 = &DAT_10055bda0;
    FUN_100002f94(&DAT_10055bda0,&DAT_100430b80);
    iVar2 = *(int *)(puVar5 + 0x24);
    *(undefined8 *)(lVar13 + iVar2) = 0x4049000000000000;
    *(undefined1 *)((undefined8 *)(lVar13 + iVar2) + 1) = 0;
    UVar10.unknown = &DAT_10055bda8;
    FUN_100002f94(&DAT_10055bda8,&DAT_100430b88);
    *(undefined8 *)(lVar13 + *(int *)(UVar10.unknown + 0x24)) = 0x3fd999999999999a;
    SwiftUI::UnitPoint::get_center(UVar10);
    puVar8 = (undefined8 *)(lVar13 + *(int *)(puVar3 + 0x24));
    puVar8[1] = 0x3ff199999999999a;
    *puVar8 = 0x3ff199999999999a;
    puVar8[2] = uVar17;
    puVar8[3] = param_3;
    FUN_1000087e4(lVar13,lVar12,&DAT_10055bd90,&DAT_100430b68);
    _swift_storeEnumTagMultiPayload(lVar12,puVar4,0);
    FUN_10031bb24();
    FUN_1000087a0(&DAT_100550ea8,&DAT_10054af90,&DAT_100435190,
                  PTR_SwiftUI__SwiftUI___ShapeView<undefined,undefined>_>SwiftUI__View_100521c78);
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar12);
    FUN_10002a29c(lVar13,&DAT_10055bd90,&DAT_100430b68);
    FUN_10002f1dc(lVar14);
  }
  return;
}

