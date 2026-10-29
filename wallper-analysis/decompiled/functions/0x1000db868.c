// rea decompile_all
// name: FUN_1000db868
// address: 0x1000db868
// body: available
// range: 0x1000db868-0x1000db9d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000db868(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  CharacterSet CVar2;
  CharacterSet CVar3;
  Animation AVar4;
  void *pvVar5;
  long extraout_x8;
  long lVar6;
  String SVar7;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  undefined1 local_48;
  char local_41;
  
  CVar2 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar6 = *(long *)(CVar2.unknown + -8);
  CVar3 = CVar2;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar6 + 0x40));
  local_60 = *param_1;
  uStack_58 = param_1[1];
  Foundation::CharacterSet::get_whitespacesAndNewlines(CVar3);
  FUN_100026df4();
  SVar7 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters
                    ((CharacterSet)(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)));
  pvVar5 = SVar7.bridgeObject;
  (**(code **)(lVar6 + 8))(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),CVar2.unknown);
  _swift_bridgeObjectRelease(pvVar5);
  uVar1 = (ulong)SVar7.str & 0xffffffffffff;
  if (((ulong)pvVar5 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)pvVar5 >> 0x38 & 0xf;
  }
  uStack_58 = *(undefined8 *)(param_2 + 0x48);
  local_60 = *(undefined8 *)(param_2 + 0x40);
  AVar4.unknown = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue((State)AVar4.unknown);
  if ((uVar1 != 0) != (bool)local_41) {
    AVar4 = SwiftUI::Animation::spring(0.4,0.9,0.0,AVar4);
    local_50 = param_2;
    local_48 = uVar1 != 0;
    SwiftUI::_withAnimation();
    _swift_release(AVar4.unknown);
  }
  return;
}

