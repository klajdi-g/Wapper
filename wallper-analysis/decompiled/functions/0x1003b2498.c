// rea decompile_all
// name: FUN_1003b2498
// address: 0x1003b2498
// body: available
// range: 0x1003b2498-0x1003b297f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003b2600 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined * FUN_1003b2498(void)

{
  undefined *puVar1;
  long lVar2;
  Locale LVar3;
  LocalizationValue LVar4;
  undefined *puVar5;
  AnyView AVar6;
  undefined *puVar7;
  EnvironmentObject<undefined> EVar8;
  State<undefined> SVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  LocalizationValue localized;
  String SVar10;
  String stringLiteral;
  String SVar11;
  String stringLiteral_00;
  undefined1 auStack_1a0 [8];
  long local_198;
  undefined *local_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *local_148;
  undefined *puStack_140;
  undefined *local_138;
  undefined *puStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  
  lVar2 = 0;
  FUN_1002f58d4();
  local_198 = lVar2;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  LVar3 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar3.unknown + -8) + 0x40));
  LVar4 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar4.unknown + -8) + 0x40));
  localized.unknown =
       auStack_1a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0) +
       (-(extraout_x8_01 + 0xfU & 0xfffffffffffffff0) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0)
       );
  puVar5 = &DAT_10055fbe8;
  FUN_100002f94(&DAT_10055fbe8,&DAT_100435598);
  _swift_allocObject();
  *(undefined8 *)(puVar5 + 0x18) = 10;
  *(undefined8 *)(puVar5 + 0x10) = 5;
  SVar11.bridgeObject = (void *)0xe700000000000000;
  SVar11.str = (char *)0x6c6172656e6547;
  LVar4 = LocalizationValue::_init(SVar11);
  Foundation::Locale::get_current((Locale)LVar4.unknown);
  SVar10 = (extension_Foundation)::Swift::String::_init(localized,(Locale)0x0);
  SVar11 = SVar10;
  FUN_1002d5a64(&local_148);
  FUN_1003b29d0();
  AVar6 = SwiftUI::AnyView::_init(SVar11.str,&DAT_100538298,SVar11.str);
  *(undefined8 *)(puVar5 + 0x20) = 0x6c6172656e6567;
  *(undefined8 *)(puVar5 + 0x28) = 0xe700000000000000;
  *(String *)(puVar5 + 0x30) = SVar10;
  *(undefined8 *)(puVar5 + 0x40) = 0x7061687372616567;
  *(undefined8 *)(puVar5 + 0x48) = 0xe900000000000065;
  *(undefined **)(puVar5 + 0x50) = AVar6.unknown;
  SVar10.bridgeObject = (void *)0xe900000000000072;
  SVar10.str = (char *)0x657061706c6c6157;
  LVar4 = LocalizationValue::_init(SVar10);
  Foundation::Locale::get_current((Locale)LVar4.unknown);
  SVar10 = (extension_Foundation)::Swift::String::_init(localized,(Locale)0x0);
  SVar11 = SVar10;
  FUN_1002e91dc(&local_148);
  FUN_1003b2a10();
  AVar6 = SwiftUI::AnyView::_init(SVar11.str,&DAT_100538ee8,SVar11.str);
  *(undefined8 *)(puVar5 + 0x58) = 0x657061706c6c6177;
  *(undefined8 *)(puVar5 + 0x60) = 0xe900000000000072;
  *(String *)(puVar5 + 0x68) = SVar10;
  *(undefined8 *)(puVar5 + 0x78) = 0xd000000000000019;
  *(undefined8 *)(puVar5 + 0x80) = 0x80000001004e6e70;
  *(undefined **)(puVar5 + 0x88) = AVar6.unknown;
  FUN_1002e0ca4(&local_148);
  FUN_1003b2a50();
  AVar6 = SwiftUI::AnyView::_init(AVar6.unknown,&DAT_100538c18,AVar6.unknown);
  *(undefined8 *)(puVar5 + 0x90) = 0x616964656d;
  *(undefined8 *)(puVar5 + 0x98) = 0xe500000000000000;
  *(undefined8 *)(puVar5 + 0xa0) = 0x795320616964654d;
  *(undefined8 *)(puVar5 + 0xa8) = 0xea0000000000636e;
  *(undefined8 *)(puVar5 + 0xb0) = 0x6d726f6665766177;
  *(undefined8 *)(puVar5 + 0xb8) = 0xe800000000000000;
  *(undefined **)(puVar5 + 0xc0) = AVar6.unknown;
  stringLiteral.bridgeObject = (void *)0xe700000000000000;
  stringLiteral.str = (char *)0x656761726f7453;
  LVar4 = LocalizationValue::_init(stringLiteral);
  Foundation::Locale::get_current((Locale)LVar4.unknown);
  SVar11 = (extension_Foundation)::Swift::String::_init(localized,(Locale)0x0);
  FUN_1002f3950(auStack_1a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar7 = &DAT_10055fc08;
  FUN_1000036d0(&DAT_10055fc08,FUN_1002f58d4,&TargetProtocolConformanceDescriptor_10042f998);
  AVar6 = SwiftUI::AnyView::_init(puVar7,local_198,puVar7);
  *(undefined8 *)(puVar5 + 200) = 0x656761726f7473;
  *(undefined8 *)(puVar5 + 0xd0) = 0xe700000000000000;
  *(String *)(puVar5 + 0xd8) = SVar11;
  *(undefined8 *)(puVar5 + 0xe8) = 0x6c616e7265746e69;
  *(undefined8 *)(puVar5 + 0xf0) = 0xed00006576697264;
  *(undefined **)(puVar5 + 0xf8) = AVar6.unknown;
  stringLiteral_00.bridgeObject = (void *)0xe700000000000000;
  stringLiteral_00.str = (char *)0x746e756f636341;
  LVar4 = LocalizationValue::_init(stringLiteral_00);
  Foundation::Locale::get_current((Locale)LVar4.unknown);
  SVar11 = (extension_Foundation)::Swift::String::_init(localized,(Locale)0x0);
  FUN_10014e37c(0);
  puVar7 = &DAT_100553148;
  FUN_1000036d0(&DAT_100553148,FUN_10014e37c,&TargetProtocolConformanceDescriptor_100427f04);
  local_148 = (undefined *)SwiftUI::EnvironmentObject::init();
  puStack_140 = puVar7;
  FUN_10013b98c(0);
  puVar7 = &DAT_100553150;
  FUN_1000036d0(&DAT_100553150,FUN_10013b98c,&TargetProtocolConformanceDescriptor_1004274b8);
  EVar8 = SwiftUI::EnvironmentObject::init();
  puVar1 = PTR___type_metadata_for_Swift_Bool_100523b70;
  local_190 = (undefined *)((ulong)local_190 & 0xffffffffffffff00);
  local_138 = EVar8.unknown;
  puStack_130 = puVar7;
  SwiftUI::State::init(&local_128,EVar8.unknown,PTR___type_metadata_for_Swift_Bool_100523b70);
  local_190 = (undefined *)((ulong)local_190 & 0xffffffffffffff00);
  SVar9 = SwiftUI::State::init(&local_118,EVar8.unknown,puVar1);
  puStack_188 = puStack_140;
  local_190 = local_148;
  puStack_178 = puStack_130;
  puStack_180 = local_138;
  uStack_168 = uStack_120;
  local_170 = local_128;
  uStack_158 = uStack_110;
  uStack_160 = local_118;
  FUN_1003b2a90();
  AVar6 = SwiftUI::AnyView::_init(SVar9.unknown,&DAT_1005388d0,SVar9.unknown);
  *(undefined8 *)(puVar5 + 0x100) = 0x746e756f636361;
  *(undefined8 *)(puVar5 + 0x108) = 0xe700000000000000;
  *(String *)(puVar5 + 0x110) = SVar11;
  *(undefined8 *)(puVar5 + 0x120) = 0xd000000000000012;
  *(undefined8 *)(puVar5 + 0x128) = 0x80000001004e6e90;
  *(undefined **)(puVar5 + 0x130) = AVar6.unknown;
  return puVar5;
}

