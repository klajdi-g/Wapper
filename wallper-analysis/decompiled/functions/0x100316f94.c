// rea decompile_all
// name: FUN_100316f94
// address: 0x100316f94
// body: available
// range: 0x100316f94-0x1003170ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100316f94(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  Text TVar2;
  State SVar3;
  Image IVar4;
  undefined *puVar5;
  String systemName;
  byte local_61;
  
  uVar1 = param_2;
  FUN_100402c10();
  FUN_100026df4();
  puVar5 = PTR___type_metadata_for_Swift_String_100523a98;
  TVar2 = SwiftUI::Text::_init();
  SVar3.unknown = &DAT_10055bd28;
  FUN_100002f94(&DAT_10055bd28,&DAT_100430a48);
  SwiftUI::State::get_wrappedValue(SVar3);
  if ((uint)local_61 == ((uint)param_2 & 0xff)) {
    systemName.bridgeObject = (void *)0xe90000000000006b;
    systemName.str = (char *)0x72616d6b63656863;
    IVar4 = SwiftUI::Image::init(systemName);
    _swift_retain();
  }
  else {
    IVar4.unknown = (undefined *)0x0;
  }
  FUN_100007b14(TVar2.unknown,puVar5,uVar1);
  *param_1 = TVar2.unknown;
  param_1[1] = puVar5;
  *(char *)(param_1 + 2) = (char)uVar1;
  param_1[3] = param_5;
  param_1[4] = IVar4.unknown;
  _swift_bridgeObjectRetain(param_5);
  _swift_release(IVar4.unknown);
  FUN_100025b34(TVar2.unknown,puVar5,uVar1);
  _swift_bridgeObjectRelease(param_5);
  return;
}

