// rea decompile_all
// name: FUN_1002c19bc
// address: 0x1002c19bc
// body: available
// range: 0x1002c19bc-0x1002c1d8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002c19bc(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  HierarchicalShapeStyle param_5)

{
  char *pcVar1;
  void *pvVar2;
  byte bVar3;
  char *pcVar4;
  undefined4 uVar5;
  StringInterpolation SVar6;
  undefined *puVar7;
  long lVar8;
  char *pcVar9;
  LocalizedStringKey LVar10;
  Text TVar11;
  Font FVar12;
  Text TVar13;
  HierarchicalShapeStyle HVar14;
  Text TVar15;
  undefined *puVar16;
  void *pvVar17;
  undefined8 uVar18;
  Text TVar19;
  uint uVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined *puVar23;
  ulong uVar24;
  long extraout_x8;
  long extraout_x12;
  undefined *puVar25;
  StringInterpolation stringInterpolation;
  void *pvVar26;
  String SVar27;
  String SVar28;
  undefined8 uStack_a0;
  undefined2 auStack_98 [4];
  undefined auStack_90 [4];
  undefined4 local_8c;
  undefined *local_88;
  undefined *puStack_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  pvVar26 = (void *)0xea00000000006f65;
  SVar6 = SwiftUI::LocalizedStringKey::StringInterpolation::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(SVar6.unknown + -8) + 0x40));
  stringInterpolation.unknown = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar25 = stringInterpolation.unknown + -extraout_x12;
  puVar7 = (undefined *)0x0;
  FUN_100400294();
  local_70 = *(undefined8 *)(param_2 + *(int *)(puVar7 + 0x34));
  uVar22 = ((undefined8 *)(param_2 + *(int *)(puVar7 + 0x34)))[1];
  SVar6.unknown = puVar7;
  uStack_68 = uVar22;
  FUN_100026df4();
  _swift_bridgeObjectRetain(uVar22);
  puVar16 = PTR___type_metadata_for_Swift_String_100523a98;
  puStack_80 = (undefined *)SwiftUI::Text::_init();
  local_8c = SUB84(SVar6.unknown,0);
  lVar8 = 0;
  local_88 = puVar16;
  local_78 = param_5.unknown;
  FUN_1002c3644();
  if (*(char *)(param_2 + *(int *)(lVar8 + 0x14)) == '\x01') {
    SwiftUI::LocalizedStringKey::StringInterpolation::init(5,1);
    pcVar9 = (char *)0x2073696854;
    pvVar17 = (void *)0xe500000000000000;
    stringInterpolation.unknown = puVar25;
  }
  else {
    SwiftUI::LocalizedStringKey::StringInterpolation::init(10,1);
    pcVar9 = (char *)0x657463656e6e6f43;
    pvVar17 = (void *)0xea00000000002064;
  }
  SVar27.bridgeObject = pvVar17;
  SVar27.str = pcVar9;
  SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral(SVar27,SVar6);
  bVar3 = *(byte *)(param_2 + *(int *)(puVar7 + 0x38));
  pcVar9 = (char *)0x4e6b6f6f4263614d;
  if (bVar3 != 6) {
    pvVar26 = (void *)0xe700000000000000;
    pcVar9 = (char *)0x6e776f6e6b6e55;
  }
  pvVar17 = (void *)0xe90000000000006f;
  pcVar1 = (char *)0x696475745363614d;
  if (bVar3 != 4) {
    pvVar17 = (void *)0xe600000000000000;
    pcVar1 = (char *)0x6f725063614d;
  }
  if (bVar3 < 6) {
    pvVar26 = pvVar17;
    pcVar9 = pcVar1;
  }
  pcVar1 = (char *)0x63614d69;
  if (bVar3 != 2) {
    pcVar1 = (char *)0x696e694d63614d;
  }
  pvVar17 = (void *)0xe400000000000000;
  if (bVar3 != 2) {
    pvVar17 = (void *)0xe700000000000000;
  }
  pvVar2 = (void *)0xea00000000007269;
  pcVar4 = (char *)0x416b6f6f4263614d;
  if (bVar3 != 0) {
    pvVar2 = (void *)0xea00000000006f72;
    pcVar4 = (char *)0x506b6f6f4263614d;
  }
  if (bVar3 < 2) {
    pvVar17 = pvVar2;
    pcVar1 = pcVar4;
  }
  if (bVar3 < 4) {
    pvVar26 = pvVar17;
    pcVar9 = pcVar1;
  }
  SVar28.bridgeObject = pvVar26;
  SVar28.str = pcVar9;
  SwiftUI::LocalizedStringKey::StringInterpolation::appendInterpolation(SVar28,SVar6);
  _swift_bridgeObjectRelease(pvVar26);
  uVar18 = 0xe000000000000000;
  SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral
            ((String)(ZEXT816(0xe000000000000000) << 0x40),SVar6);
  uVar20 = (uint)SVar6.unknown;
  LVar10 = SwiftUI::LocalizedStringKey::init(stringInterpolation);
  *(undefined2 *)(puVar25 + -8) = 0x100;
  *(undefined8 *)(puVar25 + -0x10) = 0;
  uVar21 = (ulong)(uVar20 & 1);
  TVar11 = SwiftUI::Text::_init(LVar10);
  FVar12 = SwiftUI::Font::get_subheadline(TVar11.unknown);
  TVar19 = TVar11;
  uVar22 = uVar18;
  uVar24 = uVar21;
  TVar13 = SwiftUI::Text::_font(FVar12.unknown);
  _swift_release(FVar12.unknown);
  FUN_100025b34(TVar11.unknown,uVar18,uVar21);
  _swift_bridgeObjectRelease();
  HVar14 = SwiftUI::HierarchicalShapeStyle::get_secondary(param_5);
  local_70 = CONCAT44(local_70._4_4_,(int)HVar14.unknown);
  FUN_100025b4c();
  TVar11 = TVar13;
  puVar23 = TVar19.unknown;
  uVar18 = uVar22;
  TVar15 = SwiftUI::Text::_foregroundStyle();
  FUN_100025b34(TVar13.unknown,TVar19.unknown,uVar22);
  _swift_bridgeObjectRelease(uVar24);
  puVar25 = local_78;
  puVar7 = puStack_80;
  puVar16 = local_88;
  uVar5 = local_8c;
  *param_1 = puStack_80;
  param_1[1] = local_88;
  *(char *)(param_1 + 2) = (char)local_8c;
  param_1[3] = local_78;
  param_1[4] = TVar15.unknown;
  param_1[5] = TVar11.unknown;
  *(char *)(param_1 + 6) = (char)puVar23;
  param_1[7] = uVar18;
  FUN_100007b14(puStack_80,local_88,local_8c);
  _swift_bridgeObjectRetain(puVar25);
  FUN_100007b14(TVar15.unknown,TVar11.unknown,puVar23);
  _swift_bridgeObjectRetain(uVar18);
  FUN_100025b34(TVar15.unknown,TVar11.unknown,puVar23);
  _swift_bridgeObjectRelease(uVar18);
  FUN_100025b34(puVar7,puVar16,uVar5);
  _swift_bridgeObjectRelease(puVar25);
  return;
}

