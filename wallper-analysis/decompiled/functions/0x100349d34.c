// rea decompile_all
// name: FUN_100349d34
// address: 0x100349d34
// body: available
// range: 0x100349d34-0x10034a137 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100349d34(long param_1,KeyboardShortcut param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  KeyboardShortcut KVar5;
  Locale LVar6;
  LocalizationValue LVar7;
  undefined *puVar8;
  KeyboardShortcut KVar9;
  undefined *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar11;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  LocalizationValue localized;
  KeyboardShortcut KVar12;
  long lVar13;
  code *pcVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  String stringLiteral;
  String SVar18;
  undefined1 auStack_160 [8];
  long local_158;
  long local_150;
  long local_148;
  long local_140;
  long local_138;
  String local_130;
  undefined8 local_120;
  undefined8 local_118;
  undefined2 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  String local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined2 local_80;
  code *local_78;
  undefined *puStack_70;
  
  local_138 = param_1;
  KVar5 = SwiftUI::KeyboardShortcut::typeMetadataAccessor();
  lVar13 = *(long *)(KVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar13 + 0x40));
  KVar12.unknown = auStack_160 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  LVar6 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar6.unknown + -8) + 0x40));
  LVar7 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar7.unknown + -8) + 0x40));
  localized.unknown =
       KVar12.unknown +
       (-(extraout_x8_01 + 0xfU & 0xfffffffffffffff0) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0)
       );
  puVar8 = &DAT_10055d5d0;
  FUN_100002f94(&DAT_10055d5d0,&DAT_100432c58);
  local_148 = *(long *)(puVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_148 + 0x40));
  lVar11 = (long)localized.unknown - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_140 = lVar11;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar11 = lVar11 - extraout_x12;
  local_150 = lVar11;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar11 = lVar11 - extraout_x12_00;
  local_158 = lVar11;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar11 = lVar11 - extraout_x12_01;
  SVar18.bridgeObject = (void *)0xe600000000000000;
  SVar18.str = (char *)0x6c65636e6143;
  LVar7 = LocalizationValue::_init(SVar18);
  Foundation::Locale::get_current((Locale)LVar7.unknown);
  local_130 = (extension_Foundation)::Swift::String::_init(localized,(Locale)0x0);
  local_118 = 0;
  local_120 = 0;
  local_110 = 0x101;
  KVar9.unknown = *(undefined **)((long)param_2.unknown + 0x28);
  uStack_100 = *(undefined8 *)((long)param_2.unknown + 0x28);
  local_108 = *(undefined8 *)((long)param_2.unknown + 0x20);
  _swift_retain();
  SwiftUI::KeyboardShortcut::get_cancelAction(KVar9);
  FUN_10034b9d4();
  (extension_SwiftUI)::SwiftUI::View::_keyboardShortcut(KVar12);
  pcVar14 = *(code **)(lVar13 + 8);
  (*pcVar14)(KVar12.unknown,KVar5.unknown);
  FUN_10034ba14(&local_130);
  stringLiteral.bridgeObject = (void *)0xe600000000000000;
  stringLiteral.str = (char *)0x657461657243;
  LVar7 = LocalizationValue::_init(stringLiteral);
  Foundation::Locale::get_current((Locale)LVar7.unknown);
  SVar18 = (extension_Foundation)::Swift::String::_init(localized,(Locale)0x0);
  puVar10 = &DAT_10053b998;
  _swift_allocObject(&DAT_10053b998,0x99,7);
  uVar15 = *(undefined8 *)((long)param_2.unknown + 0x60);
  uVar17 = *(undefined8 *)((long)param_2.unknown + 0x78);
  uVar16 = *(undefined8 *)((long)param_2.unknown + 0x70);
  *(undefined8 *)(puVar10 + 0x78) = *(undefined8 *)((long)param_2.unknown + 0x68);
  *(undefined8 *)(puVar10 + 0x70) = uVar15;
  *(undefined8 *)(puVar10 + 0x88) = uVar17;
  *(undefined8 *)(puVar10 + 0x80) = uVar16;
  uVar15 = *(undefined8 *)((long)param_2.unknown + 0x79);
  *(undefined8 *)(puVar10 + 0x91) = *(undefined8 *)((long)param_2.unknown + 0x81);
  *(undefined8 *)(puVar10 + 0x89) = uVar15;
  uVar15 = *(undefined8 *)((long)param_2.unknown + 0x20);
  uVar17 = *(undefined8 *)((long)param_2.unknown + 0x38);
  uVar16 = *(undefined8 *)((long)param_2.unknown + 0x30);
  *(undefined8 *)(puVar10 + 0x38) = *(undefined8 *)((long)param_2.unknown + 0x28);
  *(undefined8 *)(puVar10 + 0x30) = uVar15;
  *(undefined8 *)(puVar10 + 0x48) = uVar17;
  *(undefined8 *)(puVar10 + 0x40) = uVar16;
  uVar17 = *(undefined8 *)((long)param_2.unknown + 0x40);
  uVar16 = *(undefined8 *)((long)param_2.unknown + 0x58);
  uVar15 = *(undefined8 *)((long)param_2.unknown + 0x50);
  *(undefined8 *)(puVar10 + 0x58) = *(undefined8 *)((long)param_2.unknown + 0x48);
  *(undefined8 *)(puVar10 + 0x50) = uVar17;
  *(undefined8 *)(puVar10 + 0x68) = uVar16;
  *(undefined8 *)(puVar10 + 0x60) = uVar15;
  uVar17 = *(undefined8 *)param_2.unknown;
  uVar16 = *(undefined8 *)((long)param_2.unknown + 0x18);
  uVar15 = *(undefined8 *)((long)param_2.unknown + 0x10);
  *(undefined8 *)(puVar10 + 0x18) = *(undefined8 *)((long)param_2.unknown + 8);
  *(undefined8 *)(puVar10 + 0x10) = uVar17;
  *(undefined8 *)(puVar10 + 0x28) = uVar16;
  *(undefined8 *)(puVar10 + 0x20) = uVar15;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0x100;
  local_78 = FUN_10034ba48;
  local_a0 = SVar18;
  puStack_70 = puVar10;
  FUN_10034b584(param_2.unknown,&local_130);
  SwiftUI::KeyboardShortcut::get_defaultAction(param_2);
  lVar13 = local_158;
  (extension_SwiftUI)::SwiftUI::View::_keyboardShortcut(KVar12);
  (*pcVar14)(KVar12.unknown,KVar5.unknown);
  FUN_10034ba14(&local_a0);
  lVar2 = local_148;
  lVar1 = local_150;
  pcVar14 = *(code **)(local_148 + 0x10);
  (*pcVar14)(local_150,lVar11,puVar8);
  lVar3 = local_140;
  (*pcVar14)(local_140,lVar13,puVar8);
  lVar4 = local_138;
  (*pcVar14)(local_138,lVar1,puVar8);
  puVar10 = &DAT_10055d5e0;
  FUN_100002f94(&DAT_10055d5e0,&DAT_100432c60);
  (*pcVar14)(lVar4 + *(int *)(puVar10 + 0x30),lVar3,puVar8);
  pcVar14 = *(code **)(lVar2 + 8);
  (*pcVar14)(lVar13,puVar8);
  (*pcVar14)(lVar11,puVar8);
  (*pcVar14)(lVar3,puVar8);
  (*pcVar14)(lVar1,puVar8);
  return;
}

