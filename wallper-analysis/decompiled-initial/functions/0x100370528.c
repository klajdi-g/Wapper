// rea decompile_all
// name: FUN_100370528
// address: 0x100370528
// body: available
// range: 0x100370528-0x10037098f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100370528(undefined8 param_1)

{
  undefined8 *puVar1;
  StringInterpolation stringInterpolation;
  Locale LVar2;
  LocalizationValue LVar3;
  StringInterpolation SVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  char *pcVar9;
  char *pcVar10;
  void *pvVar11;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar12;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long unaff_x20;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  String SVar21;
  String SVar22;
  String stringLiteral;
  StringInterpolation local_a0;
  ulong local_98;
  uint local_8c;
  undefined *local_88;
  long local_80;
  undefined8 local_78;
  String local_70;
  
  local_78 = param_1;
  LVar2 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar2.unknown + -8) + 0x40));
  lVar5 = (long)&local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_80 = lVar5;
  LVar3 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar3.unknown + -8) + 0x40));
  puVar12 = (undefined *)(lVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  local_88 = puVar12;
  SVar4 = LocalizationValue::StringInterpolation::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(SVar4.unknown + -8) + 0x40));
  puVar12 = puVar12 + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  local_a0.unknown = puVar12;
  FUN_100387eec();
  lVar14 = *(long *)(lVar5 + -8);
  lVar18 = *(long *)(lVar14 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar20 = (long)puVar12 - (lVar18 + 0xfU & 0xfffffffffffffff0);
  puVar12 = &DAT_10055e790;
  FUN_100002f94(&DAT_10055e790,&DAT_100433fc8);
  lVar17 = *(long *)(puVar12 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = lVar20 - extraout_x8_02;
  puVar6 = &DAT_10055e798;
  FUN_100002f94(&DAT_10055e798,&DAT_100433fd0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = lVar19 - extraout_x8_03;
  lVar5 = 0;
  FUN_10025ee04();
  local_98 = *(ulong *)(*(long *)(unaff_x20 + *(int *)(lVar5 + 0x34)) + 0x10);
  local_8c = (uint)(0x17 < local_98);
  FUN_100029504();
  uVar13 = (ulong)*(byte *)(lVar14 + 0x50);
  uVar15 = uVar13 + 0x10 & (uVar13 ^ 0xffffffffffffffff);
  puVar7 = &DAT_10053c2a8;
  _swift_allocObject(&DAT_10053c2a8,uVar15 + lVar18,uVar13 | 7);
  FUN_100007e64(lVar20,puVar7 + uVar15,FUN_100387eec);
  FUN_100002f94(&DAT_10055e7a0,&DAT_100433fd8);
  FUN_10038f3c8();
  SwiftUI::Button::_init();
  FUN_1000087a0(&DAT_10055e800,&DAT_10055e790,&DAT_100433fc8,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
  FUN_10038f698();
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle(lVar16);
  (**(code **)(lVar17 + 8))(lVar19,puVar12);
  puVar12 = &DAT_100433150;
  _swift_getKeyPath();
  puVar7 = &DAT_10053c2d0;
  SVar4.unknown = (undefined *)0x7;
  _swift_allocObject(&DAT_10053c2d0,0x11);
  puVar7[0x10] = (char)local_8c;
  puVar8 = &DAT_10055e810;
  FUN_100002f94(&DAT_10055e810,&DAT_100434020);
  puVar1 = (undefined8 *)(lVar16 + *(int *)(puVar8 + 0x24));
  *puVar1 = puVar12;
  puVar1[1] = thunk_FUN_10006bca0;
  puVar1[2] = puVar7;
  if (local_98 < 0x18) {
    *(undefined8 *)(lVar16 + *(int *)(puVar6 + 0x24)) = 0x3ff0000000000000;
    LVar3.unknown = local_88;
    stringLiteral.bridgeObject = (void *)0x80000001004e6c30;
    stringLiteral.str = (char *)0xd000000000000017;
    LVar2.unknown = (undefined *)LocalizationValue::_init(stringLiteral);
  }
  else {
    *(undefined8 *)(lVar16 + *(int *)(puVar6 + 0x24)) = 0x3fd999999999999a;
    stringInterpolation.unknown = local_a0.unknown;
    LocalizationValue::StringInterpolation::_init(0x20,1);
    SVar21.bridgeObject = (void *)0x80000001004e6c50;
    SVar21.str = (char *)0xd00000000000001a;
    LocalizationValue::StringInterpolation::_appendLiteral(SVar21,SVar4);
    local_70.str = (char *)0x18;
    SVar4.unknown = (undefined *)0xe400000000000000;
    LocalizationValue::StringInterpolation::_appendInterpolation
              (&local_70,0x646c6c25,0xe400000000000000,PTR___type_metadata_for_Swift_Int_100523bd8,
               PTR___protocol_witness_table_for_Swift_Int___Foundation__FormatSpecifiable_in_Foundation_100520e60
              );
    SVar22.bridgeObject = (void *)0xe600000000000000;
    SVar22.str = (char *)0x73656d697420;
    LocalizationValue::StringInterpolation::_appendLiteral(SVar22,SVar4);
    LVar3.unknown = local_88;
    LVar2.unknown = (undefined *)LocalizationValue::_init(stringInterpolation);
  }
  Foundation::Locale::get_current(LVar2);
  local_70 = (extension_Foundation)::Swift::String::_init(LVar3,(Locale)0x0);
  pvVar11 = local_70.bridgeObject;
  pcVar9 = local_70.str;
  FUN_10038f6e8();
  pcVar10 = pcVar9;
  FUN_100026df4();
  (extension_SwiftUI)::SwiftUI::View::_help
            (local_78,&local_70,puVar6,PTR___type_metadata_for_Swift_String_100523a98,pcVar9,pcVar10
            );
  _swift_bridgeObjectRelease(pvVar11);
  FUN_10002a29c(lVar16,&DAT_10055e798,&DAT_100433fd0);
  return;
}

