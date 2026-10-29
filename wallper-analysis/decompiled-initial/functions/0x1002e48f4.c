// rea decompile_all
// name: FUN_1002e48f4
// address: 0x1002e48f4
// body: available
// range: 0x1002e48f4-0x1002e4caf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002e4a78 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1002e48f4(undefined8 *param_1,long param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  Color CVar5;
  LocalizedStringKey LVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  Binding<bool> isOn;
  uint uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long lVar11;
  long extraout_x12;
  code *pcVar12;
  String stringLiteral;
  String stringLiteral_00;
  undefined8 uStack_1e0;
  undefined2 auStack_1d8 [4];
  undefined1 auStack_1d0 [8];
  undefined8 local_1c8;
  uint local_1bc;
  undefined *local_1b8;
  undefined8 uStack_1b0;
  long local_1a8;
  long local_1a0;
  undefined *local_198;
  long local_190;
  undefined *local_188;
  long local_180;
  long local_178;
  undefined1 auStack_170 [64];
  undefined *local_130;
  undefined8 uStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *local_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *local_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar4 = &DAT_10054b1e0;
  local_1a8 = param_2;
  FUN_100002f94(&DAT_10054b1e0,&DAT_10041c400);
  local_190 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_190 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  CVar5.unknown = &DAT_10054b1e8;
  FUN_100002f94(&DAT_10054b1e8,&DAT_10042e650);
  local_178 = *(long *)(CVar5.unknown + -8);
  local_188 = CVar5.unknown;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_178 + 0x40));
  lVar11 = (long)(auStack_1d0 + -extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_1a0 = lVar11;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar11 = lVar11 - extraout_x12;
  local_180 = lVar11;
  local_198 = (undefined *)SwiftUI::Color::get_orange(CVar5);
  uVar8 = 0x80000001004e56c0;
  stringLiteral.bridgeObject = (void *)0x80000001004e56c0;
  stringLiteral.str = (char *)0xd000000000000014;
  LVar6 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  *(undefined2 *)(lVar11 + -8) = 0x100;
  *(undefined8 *)(lVar11 + -0x10) = 0;
  local_1bc = param_4 & 1;
  local_1b8 = (undefined *)SwiftUI::Text::_init(LVar6);
  uVar9 = 0x80000001004e56e0;
  stringLiteral_00.bridgeObject = (void *)0x80000001004e56e0;
  stringLiteral_00.str = (char *)0xd000000000000060;
  local_1c8 = uVar8;
  uStack_1b0 = param_5;
  uVar10 = local_1bc;
  LVar6 = SwiftUI::LocalizedStringKey::init(stringLiteral_00);
  local_f0 = (undefined *)((ulong)local_f0 & 0xffffffffffffff00);
  SwiftUI::State::init(&local_90,LVar6.unknown,PTR___type_metadata_for_Swift_Bool_100523b70);
  local_f0 = (undefined *)0x0;
  puVar7 = &DAT_100552970;
  FUN_100002f94(&DAT_100552970,&DAT_10042f240);
  SwiftUI::State::init(&uStack_80,puVar7,puVar7);
  local_a0 = CONCAT71(local_a0._1_7_,(char)uVar10) & 0xffffffffffffff01;
  uStack_c8 = uStack_88;
  local_d0 = local_90;
  uStack_b8 = uStack_78;
  uStack_c0 = uStack_80;
  uStack_e0 = local_a0;
  isOn.unknown = (undefined *)0xe000000000000000;
  local_f0 = LVar6.unknown;
  uStack_e8 = uVar9;
  uStack_d8 = param_5;
  local_b0 = LVar6.unknown;
  uStack_a8 = uVar9;
  local_98 = param_5;
  LVar6 = SwiftUI::LocalizedStringKey::init((String)(ZEXT816(0xe000000000000000) << 0x40));
  SwiftUI::AppStorage::get_projectedValue((AppStorage)*(undefined **)(local_1a8 + 0x28));
  (extension_SwiftUI)::SwiftUI::Toggle::_init(LVar6,isOn);
  FUN_1000087a0(&DAT_10054b200,&DAT_10054b1e0,&DAT_10041c400,
                PTR_SwiftUI__SwiftUI__Toggle<undefined>_>SwiftUI__View_1005234a0);
  lVar3 = local_180;
  (extension_SwiftUI)::SwiftUI::View::_labelsHidden();
  (**(code **)(local_190 + 8))(auStack_1d0 + -extraout_x8,puVar4);
  puVar2 = local_188;
  lVar11 = local_1a0;
  uStack_128 = uStack_e8;
  local_130 = local_f0;
  uStack_118 = uStack_d8;
  uStack_120 = uStack_e0;
  uStack_108 = uStack_c8;
  local_110 = local_d0;
  uStack_f8 = uStack_b8;
  uStack_100 = uStack_c0;
  pcVar12 = *(code **)(local_178 + 0x10);
  (*pcVar12)(local_1a0,lVar3,local_188);
  puVar1 = local_198;
  uVar9 = uStack_1b0;
  puVar7 = local_1b8;
  uVar10 = local_1bc;
  uVar8 = local_1c8;
  *param_1 = 0x757063;
  param_1[1] = 0xe300000000000000;
  param_1[2] = 0x4036000000000000;
  param_1[3] = local_198;
  param_1[4] = local_1b8;
  param_1[5] = local_1c8;
  *(char *)(param_1 + 6) = (char)local_1bc;
  param_1[7] = uStack_1b0;
  uStack_a8 = uStack_e8;
  local_b0 = local_f0;
  local_98 = uStack_d8;
  local_a0 = uStack_e0;
  uStack_88 = uStack_c8;
  local_90 = local_d0;
  uStack_78 = uStack_b8;
  uStack_80 = uStack_c0;
  param_1[9] = uStack_e8;
  param_1[8] = local_f0;
  param_1[0xb] = uStack_d8;
  param_1[10] = uStack_e0;
  param_1[0xd] = uStack_c8;
  param_1[0xc] = local_d0;
  param_1[0xf] = uStack_b8;
  param_1[0xe] = uStack_c0;
  param_1[0x10] = 0x4020000000000000;
  *(undefined1 *)(param_1 + 0x11) = 0;
  puVar4 = &DAT_10055a8b8;
  FUN_100002f94(&DAT_10055a8b8,&DAT_10042f270);
  (*pcVar12)((long)param_1 + (long)*(int *)(puVar4 + 0x60),lVar11,puVar2);
  _swift_bridgeObjectRetain(0xe300000000000000);
  _swift_retain(puVar1);
  FUN_100007b14(puVar7,uVar8,uVar10);
  _swift_bridgeObjectRetain(uVar9);
  FUN_100100eac(&local_b0,auStack_170);
  pcVar12 = *(code **)(local_178 + 8);
  (*pcVar12)(local_180,puVar2);
  (*pcVar12)(lVar11,puVar2);
  FUN_1002cab64(&local_130);
  FUN_100025b34(puVar7,uVar8,uVar10);
  _swift_release(puVar1);
  _swift_bridgeObjectRelease(0xe300000000000000);
  _swift_bridgeObjectRelease(uVar9);
  return;
}

