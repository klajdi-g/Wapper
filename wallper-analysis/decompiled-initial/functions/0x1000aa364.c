// rea decompile_all
// name: FUN_1000aa364
// address: 0x1000aa364
// body: available
// range: 0x1000aa364-0x1000aa84f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000aa364(Alignment param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  Alignment AVar3;
  Alignment AVar4;
  Alignment AVar5;
  AnyTransition AVar6;
  UnitPoint scale;
  AnyTransition AVar7;
  AnyTransition AVar8;
  Animation AVar9;
  undefined1 *puVar10;
  UnitPoint anchor;
  char *pcVar11;
  char *pcVar12;
  void *extraout_x8;
  undefined8 *unaff_x20;
  String SVar13;
  String SVar14;
  String SVar15;
  undefined1 auStack_1628 [424];
  undefined1 auStack_1480 [400];
  undefined1 auStack_12f0 [296];
  undefined1 auStack_11c8 [296];
  undefined *local_10a0;
  undefined8 local_1098;
  undefined1 auStack_1090 [296];
  undefined *local_f68;
  undefined8 local_f60;
  undefined1 auStack_f58 [296];
  undefined1 auStack_e30 [360];
  undefined1 auStack_cc8 [360];
  undefined8 local_b60;
  undefined8 local_b58;
  undefined1 auStack_b50 [360];
  undefined8 local_9e8;
  undefined8 local_9e0;
  undefined1 auStack_9d8 [376];
  undefined *local_860;
  undefined1 auStack_858 [376];
  undefined *local_6e0;
  undefined *local_6d8;
  undefined1 *local_6d0;
  undefined1 auStack_6c8 [384];
  undefined *local_548;
  undefined1 *local_540;
  undefined1 auStack_538 [384];
  undefined1 auStack_3b8 [400];
  undefined *local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined *local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  (*(code *)PTR____chkstk_darwin_100521118)();
  AVar3 = SwiftUI::Alignment::get_bottomLeading(param_1);
  FUN_1000aa850(&local_210);
  _memcpy(auStack_12f0,&local_210,0x121);
  _memcpy(auStack_11c8,&local_210,0x121);
  FUN_1000087e4(auStack_12f0,auStack_3b8,&DAT_100550100,&DAT_100421948);
  FUN_10002a29c(auStack_11c8,&DAT_100550100,&DAT_100421948);
  _memcpy(auStack_3b8,auStack_12f0,0x121);
  AVar4.unknown = (undefined *)0x0;
  FUN_1000b0fe8();
  AVar5.unknown = *(undefined **)((long)unaff_x20 + (long)*(int *)(AVar4.unknown + 0x18));
  SwiftUI::Alignment::get_center(AVar4);
  local_10a0 = AVar3.unknown;
  local_1098 = param_2;
  _memcpy(auStack_1090,auStack_3b8,0x121);
  SwiftUI::_FrameLayout::_init(AVar5);
  _memcpy(auStack_1628,&local_10a0,0x131);
  local_f68 = AVar3.unknown;
  local_f60 = param_2;
  _memcpy(auStack_f58,auStack_3b8,0x121);
  pcVar11 = "B[\x05";
  pcVar12 = pcVar11;
  FUN_1000087e4(&local_10a0,&local_210,&DAT_100550108);
  FUN_10002a29c(&local_f68,&DAT_100550108);
  local_210 = *unaff_x20;
  local_208 = unaff_x20[1];
  _swift_bridgeObjectRetain();
  SVar13.bridgeObject = (void *)0xe100000000000000;
  SVar13.str = (char *)0x7c;
  SVar14.bridgeObject = pcVar12;
  SVar14.str = pcVar11;
  Swift::String::append(SVar13,SVar14);
  uVar1 = local_208;
  SVar13 = *(String *)(unaff_x20 + 2);
  _swift_bridgeObjectRetain(local_208);
  SVar15.bridgeObject = pcVar12;
  SVar15.str = pcVar11;
  Swift::String::append(SVar13,SVar15);
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = local_208;
  uVar1 = local_210;
  puVar10 = auStack_1628;
  AVar5.unknown = _memcpy(auStack_e30,puVar10,0x168);
  AVar5 = SwiftUI::Alignment::get_center(AVar5);
  _memcpy(auStack_b50,auStack_1628,0x168);
  _swift_bridgeObjectRetain(uVar2);
  AVar7.unknown = &DAT_100550110;
  AVar6.unknown = auStack_e30;
  anchor.unknown = (undefined *)&local_210;
  FUN_1000087e4();
  AVar6 = SwiftUI::AnyTransition::get_opacity(AVar6);
  scale = SwiftUI::UnitPoint::get_center(AVar6.unknown);
  AVar7 = SwiftUI::AnyTransition::scale(scale.unknown,anchor,AVar7);
  AVar8 = SwiftUI::AnyTransition::combined(AVar7,AVar6);
  _swift_release(AVar6.unknown);
  _swift_release(AVar7.unknown);
  _memcpy(auStack_cc8,auStack_1628,0x168);
  local_b60 = uVar1;
  local_b58 = uVar2;
  _memcpy(auStack_3b8,auStack_cc8,0x178);
  local_9e8 = uVar1;
  local_9e0 = uVar2;
  FUN_1000087e4(auStack_cc8,&local_210,&DAT_100550118,&DAT_100421960);
  FUN_10002a29c(auStack_b50,&DAT_100550118,&DAT_100421960);
  _memcpy(auStack_9d8,auStack_3b8,0x178);
  local_860 = AVar8.unknown;
  _memcpy(auStack_858,auStack_3b8,0x178);
  local_6e0 = AVar8.unknown;
  FUN_1000087e4(auStack_9d8,&local_210,&DAT_100550120,&DAT_100421968);
  FUN_10002a29c(auStack_858,&DAT_100550120,&DAT_100421968);
  AVar9.unknown = _memcpy(auStack_3b8,auStack_9d8,0x180);
  AVar9 = SwiftUI::Animation::easeInOut(0.6,AVar9);
  local_6d8 = AVar5.unknown;
  local_6d0 = puVar10;
  _memcpy(auStack_6c8,auStack_3b8,0x180);
  _memcpy(auStack_1480,&local_6d8,400);
  local_548 = AVar5.unknown;
  local_540 = puVar10;
  _memcpy(auStack_538,auStack_3b8,0x180);
  FUN_1000087e4(&local_6d8,&local_210,&DAT_100550128,&DAT_100421970);
  FUN_10002a29c(&local_548,&DAT_100550128,&DAT_100421970);
  FUN_10002a29c(auStack_1628,&DAT_100550110,&DAT_100421958);
  _memcpy(auStack_3b8,auStack_1480,400);
  local_220 = uVar1;
  local_218 = uVar2;
  local_228 = AVar9.unknown;
  _memcpy(&local_210,auStack_1480,400);
  local_78 = uVar1;
  local_70 = uVar2;
  local_80 = AVar9.unknown;
  FUN_1000087e4(auStack_3b8,auStack_1628,&DAT_100550130,&DAT_100421978);
  FUN_10002a29c(&local_210,&DAT_100550130,&DAT_100421978);
  _memcpy(extraout_x8,auStack_3b8,0x1a8);
  return;
}

