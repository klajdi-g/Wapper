// rea decompile_all
// name: FUN_10001c97c
// address: 0x10001c97c
// body: available
// range: 0x10001c97c-0x10001cb77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10001c97c(undefined8 *param_1,CGFloat param_2,undefined8 param_3,undefined8 param_4,
                  Color param_5)

{
  Text TVar1;
  Font FVar2;
  Text TVar3;
  Color CVar4;
  Text TVar5;
  undefined *puVar6;
  undefined *puVar7;
  Text TVar8;
  undefined *puVar9;
  CGFloat CVar10;
  undefined *puVar11;
  String SVar12;
  undefined1 auStack_140 [72];
  String local_f8;
  undefined1 local_e8;
  undefined7 uStack_e7;
  undefined *puStack_e0;
  undefined *local_d8;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined *local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined *local_b0;
  undefined *puStack_a8;
  undefined1 local_a0;
  undefined *local_98;
  undefined *puStack_90;
  undefined1 local_88;
  undefined *local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  local_b0 = param_2.unknown;
  puStack_a8 = (undefined *)param_3;
  FUN_100026df4();
  puVar6 = PTR___type_metadata_for_Swift_String_100523a98;
  local_f8 = (extension_Foundation)::Swift::StringProtocol::get_capitalized();
  TVar1 = SwiftUI::Text::_init();
  SVar12.bridgeObject = (void *)0xe700000000000000;
  SVar12.str = (char *)0x616967726f6547;
  FVar2 = SwiftUI::Font::custom(SVar12,param_2,param_5.unknown);
  TVar8 = TVar1;
  puVar7 = puVar6;
  CVar10.unknown = param_2.unknown;
  TVar3 = SwiftUI::Text::_font(FVar2.unknown);
  _swift_release(FVar2.unknown);
  FUN_100025b34(TVar1.unknown,puVar6,param_2.unknown);
  _swift_bridgeObjectRelease();
  CVar4 = SwiftUI::Color::get_white(param_5);
  local_b0 = CVar4.unknown;
  FUN_100028d58();
  TVar1 = TVar3;
  puVar9 = TVar8.unknown;
  puVar11 = puVar7;
  TVar5 = SwiftUI::Text::_foregroundStyle();
  FUN_100025b34(TVar3.unknown,TVar8.unknown,puVar7);
  _swift_release(CVar4.unknown);
  _swift_bridgeObjectRelease(CVar10.unknown);
  puVar6 = &DAT_10041c558;
  _swift_getKeyPath();
  puVar7 = &DAT_10041bc80;
  _swift_getKeyPath();
  local_e8 = SUB81(puVar9,0);
  uStack_d0 = 1;
  uStack_c0 = 3;
  local_b8 = 0;
  local_88 = 1;
  uStack_78 = 3;
  local_70 = 0;
  puStack_e0 = puVar11;
  local_d8 = puVar6;
  local_c8 = puVar7;
  local_b0 = TVar5.unknown;
  puStack_a8 = TVar1.unknown;
  local_a0 = local_e8;
  local_98 = puVar11;
  puStack_90 = puVar6;
  local_80 = puVar7;
  local_f8.str = (char *)TVar5;
  local_f8.bridgeObject = TVar1.unknown;
  FUN_1000087e4(&local_f8,auStack_140,&DAT_10054b220,&DAT_100422400);
  FUN_10002a29c(&local_b0,&DAT_10054b220,&DAT_100422400);
  param_1[5] = CONCAT71(uStack_cf,uStack_d0);
  param_1[4] = local_d8;
  param_1[7] = uStack_c0;
  param_1[6] = local_c8;
  *(undefined1 *)(param_1 + 8) = local_b8;
  param_1[1] = local_f8.bridgeObject;
  *param_1 = local_f8.str;
  param_1[3] = puStack_e0;
  param_1[2] = CONCAT71(uStack_e7,local_e8);
  return;
}

