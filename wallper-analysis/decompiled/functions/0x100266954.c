// rea decompile_all
// name: FUN_100266954
// address: 0x100266954
// body: available
// range: 0x100266954-0x100266c2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100266954(void)

{
  long lVar1;
  Locale LVar2;
  LocalizationValue LVar3;
  undefined *puVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar6;
  LocalizationValue localized;
  ulong uVar7;
  long lVar8;
  String SVar9;
  String stringLiteral;
  String stringLiteral_00;
  String stringLiteral_01;
  
  LVar2 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar2.unknown + -8) + 0x40));
  LVar3 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar3.unknown + -8) + 0x40));
  localized.unknown =
       &stack0xffffffffffffffa0 +
       (-(extraout_x8_00 + 0xfU & 0xfffffffffffffff0) - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar4 = &DAT_100556868;
  FUN_100002f94(&DAT_100556868,&DAT_10042a720);
  lVar5 = 0;
  FUN_100266c2c();
  lVar8 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
  uVar6 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar6 + 0x20 & (uVar6 ^ 0xffffffffffffffff);
  _swift_allocObject(puVar4,uVar7 + lVar8 * 4,uVar6 | 7);
  *(undefined8 *)(puVar4 + 0x18) = 8;
  *(undefined8 *)(puVar4 + 0x10) = 4;
  SVar9.bridgeObject = (void *)0xe700000000000000;
  SVar9.str = (char *)0x676e696e726f4d;
  LVar3 = LocalizationValue::_init(SVar9);
  Foundation::Locale::get_current((Locale)LVar3.unknown);
  SVar9 = (extension_Foundation)::Swift::String::_init(localized,(Locale)0x0);
  Foundation::UUID::init();
  *(String *)(puVar4 + (long)*(int *)(lVar5 + 0x14) + uVar7) = SVar9;
  *(undefined8 *)(puVar4 + (long)*(int *)(lVar5 + 0x18) + uVar7) = 0x1a4;
  stringLiteral.bridgeObject = (void *)0xe90000000000006e;
  stringLiteral.str = (char *)0x6f6f6e7265746641;
  LVar3 = LocalizationValue::_init(stringLiteral);
  Foundation::Locale::get_current((Locale)LVar3.unknown);
  SVar9 = (extension_Foundation)::Swift::String::_init(localized,(Locale)0x0);
  Foundation::UUID::init();
  *(String *)(puVar4 + (long)*(int *)(lVar5 + 0x14) + lVar8 + uVar7) = SVar9;
  *(undefined8 *)(puVar4 + (long)*(int *)(lVar5 + 0x18) + lVar8 + uVar7) = 0x2d0;
  lVar1 = lVar8 * 2 + uVar7;
  stringLiteral_00.bridgeObject = (void *)0xe700000000000000;
  stringLiteral_00.str = (char *)0x676e696e657645;
  LVar3 = LocalizationValue::_init(stringLiteral_00);
  Foundation::Locale::get_current((Locale)LVar3.unknown);
  SVar9 = (extension_Foundation)::Swift::String::_init(localized,(Locale)0x0);
  Foundation::UUID::init();
  *(String *)(puVar4 + *(int *)(lVar5 + 0x14) + lVar1) = SVar9;
  *(undefined8 *)(puVar4 + *(int *)(lVar5 + 0x18) + lVar1) = 0x438;
  lVar1 = lVar8 * 3 + uVar7;
  stringLiteral_01.bridgeObject = (void *)0xe500000000000000;
  stringLiteral_01.str = (char *)0x746867694e;
  LVar3 = LocalizationValue::_init(stringLiteral_01);
  Foundation::Locale::get_current((Locale)LVar3.unknown);
  SVar9 = (extension_Foundation)::Swift::String::_init(localized,(Locale)0x0);
  Foundation::UUID::init();
  *(String *)(puVar4 + *(int *)(lVar5 + 0x14) + lVar1) = SVar9;
  *(undefined8 *)(puVar4 + *(int *)(lVar5 + 0x18) + lVar1) = 0x528;
  return puVar4;
}

