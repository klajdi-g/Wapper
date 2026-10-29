// rea decompile_all
// name: FUN_1000db9d4
// address: 0x1000db9d4
// body: available
// range: 0x1000db9d4-0x1000dbaff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000db9d4(void)

{
  ulong uVar1;
  CharacterSet CVar2;
  CharacterSet CVar3;
  void *pvVar4;
  long extraout_x8;
  long unaff_x20;
  CharacterSet in;
  long lVar5;
  String SVar6;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  CVar2 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar5 = *(long *)(CVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar5 + 0x40));
  in.unknown = (undefined *)((long)&local_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x30);
  local_70 = *(undefined8 *)(unaff_x20 + 0x28);
  local_60 = *(undefined8 *)(unaff_x20 + 0x38);
  CVar3.unknown = &DAT_10054dd08;
  FUN_100002f94(&DAT_10054dd08,&DAT_10041ea50);
  SwiftUI::State::get_wrappedValue((State)CVar3.unknown);
  local_70 = local_80;
  uStack_68 = uStack_78;
  Foundation::CharacterSet::get_whitespacesAndNewlines(CVar3);
  FUN_100026df4();
  SVar6 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
  pvVar4 = SVar6.bridgeObject;
  (**(code **)(lVar5 + 8))(in.unknown,CVar2.unknown);
  _swift_bridgeObjectRelease(uStack_78);
  uVar1 = (ulong)SVar6.str & 0xffffffffffff;
  if (((ulong)pvVar4 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)pvVar4 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    _swift_bridgeObjectRelease(pvVar4);
  }
  else {
    (**(code **)(unaff_x20 + 0xa8))(SVar6.str,pvVar4);
    _swift_bridgeObjectRelease(pvVar4);
    FUN_1000da864();
  }
  return;
}

