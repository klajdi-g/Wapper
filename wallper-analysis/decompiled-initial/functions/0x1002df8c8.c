// rea decompile_all
// name: FUN_1002df8c8
// address: 0x1002df8c8
// body: available
// range: 0x1002df8c8-0x1002dfac3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002df8c8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,byte param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  Color CVar3;
  LocalizedStringKey LVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar7;
  long lVar8;
  code *pcVar9;
  String stringLiteral;
  String stringLiteral_00;
  undefined1 auStack_80 [8];
  long local_78;
  undefined8 local_70;
  undefined *local_68;
  
  puVar2 = &DAT_10054def0;
  FUN_100002f94(&DAT_10054def0,&DAT_100422df0);
  lVar8 = *(long *)(puVar2 + -8);
  CVar3.unknown = puVar2;
  local_78 = lVar8;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar8 + 0x40));
  puVar7 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  CVar3 = SwiftUI::Color::get_orange(CVar3);
  uVar6 = 0x80000001004e4f90;
  stringLiteral.bridgeObject = (void *)0x80000001004e4f90;
  stringLiteral.str = (char *)0xd00000000000002e;
  local_68 = (undefined *)SwiftUI::LocalizedStringKey::init(stringLiteral);
  stringLiteral_00.bridgeObject = (void *)0xed000073676e6974;
  stringLiteral_00.str = (char *)0x746553206e65704f;
  local_70 = param_5;
  LVar4 = SwiftUI::LocalizedStringKey::init(stringLiteral_00);
  (extension_SwiftUI)::SwiftUI::Button::_init(LVar4);
  pcVar9 = *(code **)(lVar8 + 0x10);
  (*pcVar9)(puVar7,(long)puVar7 - extraout_x12,puVar2);
  uVar1 = local_70;
  *param_1 = 0xd00000000000001b;
  param_1[1] = 0x80000001004e4f70;
  param_1[2] = CVar3.unknown;
  param_1[3] = local_68;
  param_1[4] = uVar6;
  *(byte *)(param_1 + 5) = param_4 & 1;
  param_1[6] = local_70;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 1;
  puVar5 = &DAT_10055a8a0;
  FUN_100002f94(&DAT_10055a8a0,&DAT_10042f570);
  (*pcVar9)((long)param_1 + (long)*(int *)(puVar5 + 0x40),puVar7,puVar2);
  pcVar9 = *(code **)(local_78 + 8);
  _swift_bridgeObjectRetain(0x80000001004e4f70);
  _swift_retain(CVar3.unknown);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar1);
  (*pcVar9)((long)puVar7 - extraout_x12,puVar2);
  (*pcVar9)(puVar7,puVar2);
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(uVar6);
  _swift_release(CVar3.unknown);
  _swift_bridgeObjectRelease(0x80000001004e4f70);
  return;
}

