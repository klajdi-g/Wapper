// rea decompile_all
// name: FUN_1002d2a48
// address: 0x1002d2a48
// body: available
// range: 0x1002d2a48-0x1002d2e1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002d2be8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1002d2a48(undefined8 *param_1,long param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  Color CVar6;
  LocalizedStringKey LVar7;
  Text TVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  Binding<bool> isOn;
  uint uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long lVar12;
  long extraout_x12;
  code *pcVar13;
  String stringLiteral;
  String stringLiteral_00;
  undefined8 uStack_1f0;
  undefined2 auStack_1e8 [4];
  undefined1 auStack_1e0 [8];
  undefined *local_1d8;
  uint local_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  long local_1b8;
  undefined *local_1b0;
  undefined8 local_1a8;
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
  
  puVar5 = &DAT_10054b1e0;
  local_1b8 = param_2;
  FUN_100002f94(&DAT_10054b1e0,&DAT_10041c400);
  local_190 = *(long *)(puVar5 + -8);
  local_198 = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_190 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  CVar6.unknown = &DAT_10054b1e8;
  FUN_100002f94(&DAT_10054b1e8,&DAT_10042e650);
  local_178 = *(long *)(CVar6.unknown + -8);
  local_188 = CVar6.unknown;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_178 + 0x40));
  lVar12 = (long)(auStack_1e0 + -extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_1a0 = lVar12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = lVar12 - extraout_x12;
  local_1a8 = 0x80000001004e4910;
  local_180 = lVar12;
  local_1b0 = (undefined *)SwiftUI::Color::get_teal(CVar6);
  uVar9 = 0x80000001004dbd50;
  stringLiteral.bridgeObject = (void *)0x80000001004dbd50;
  stringLiteral.str = (char *)0xd000000000000022;
  LVar7 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  *(undefined2 *)(lVar12 + -8) = 0x100;
  *(undefined8 *)(lVar12 + -0x10) = 0;
  local_1cc = param_4 & 1;
  TVar8 = SwiftUI::Text::_init(LVar7);
  uVar10 = 0x80000001004e4930;
  stringLiteral_00.bridgeObject = (void *)0x80000001004e4930;
  stringLiteral_00.str = (char *)0xd000000000000077;
  local_1d8 = TVar8.unknown;
  local_1c8 = uVar9;
  uStack_1c0 = param_5;
  uVar11 = local_1cc;
  LVar7 = SwiftUI::LocalizedStringKey::init(stringLiteral_00);
  local_f0 = (undefined *)((ulong)local_f0 & 0xffffffffffffff00);
  SwiftUI::State::init(&local_90,LVar7.unknown,PTR___type_metadata_for_Swift_Bool_100523b70);
  local_f0 = (undefined *)0x0;
  puVar5 = &DAT_100552970;
  FUN_100002f94(&DAT_100552970,&DAT_10042f240);
  SwiftUI::State::init(&uStack_80,puVar5,puVar5);
  local_a0 = CONCAT71(local_a0._1_7_,(char)uVar11) & 0xffffffffffffff01;
  uStack_c8 = uStack_88;
  local_d0 = local_90;
  uStack_b8 = uStack_78;
  uStack_c0 = uStack_80;
  uStack_e0 = local_a0;
  isOn.unknown = (undefined *)0xe000000000000000;
  local_f0 = LVar7.unknown;
  uStack_e8 = uVar10;
  uStack_d8 = param_5;
  local_b0 = LVar7.unknown;
  uStack_a8 = uVar10;
  local_98 = param_5;
  LVar7 = SwiftUI::LocalizedStringKey::init((String)(ZEXT816(0xe000000000000000) << 0x40));
  SwiftUI::AppStorage::get_projectedValue((AppStorage)*(undefined **)(local_1b8 + 0x48));
  (extension_SwiftUI)::SwiftUI::Toggle::_init(LVar7,isOn);
  FUN_1000087a0(&DAT_10054b200,&DAT_10054b1e0,&DAT_10041c400,
                PTR_SwiftUI__SwiftUI__Toggle<undefined>_>SwiftUI__View_1005234a0);
  lVar4 = local_180;
  puVar5 = local_198;
  (extension_SwiftUI)::SwiftUI::View::_labelsHidden();
  (**(code **)(local_190 + 8))(auStack_1e0 + -extraout_x8,puVar5);
  puVar3 = local_188;
  lVar12 = local_1a0;
  uStack_128 = uStack_e8;
  local_130 = local_f0;
  uStack_118 = uStack_d8;
  uStack_120 = uStack_e0;
  uStack_108 = uStack_c8;
  local_110 = local_d0;
  uStack_f8 = uStack_b8;
  uStack_100 = uStack_c0;
  pcVar13 = *(code **)(local_178 + 0x10);
  (*pcVar13)(local_1a0,lVar4,local_188);
  uVar2 = local_1a8;
  puVar1 = local_1b0;
  uVar10 = uStack_1c0;
  uVar9 = local_1c8;
  uVar11 = local_1cc;
  *param_1 = 0xd000000000000011;
  param_1[1] = local_1a8;
  param_1[2] = 0x4036000000000000;
  param_1[3] = local_1b0;
  param_1[4] = TVar8.unknown;
  param_1[5] = local_1c8;
  *(char *)(param_1 + 6) = (char)local_1cc;
  param_1[7] = uStack_1c0;
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
  puVar5 = &DAT_10055a8b8;
  FUN_100002f94(&DAT_10055a8b8,&DAT_10042f270);
  (*pcVar13)((long)param_1 + (long)*(int *)(puVar5 + 0x60),lVar12,puVar3);
  _swift_bridgeObjectRetain(uVar2);
  _swift_retain(puVar1);
  puVar5 = local_1d8;
  FUN_100007b14(local_1d8,uVar9,uVar11);
  _swift_bridgeObjectRetain(uVar10);
  FUN_100100eac(&local_b0,auStack_170);
  pcVar13 = *(code **)(local_178 + 8);
  (*pcVar13)(local_180,puVar3);
  (*pcVar13)(lVar12,puVar3);
  FUN_1002cab64(&local_130);
  FUN_100025b34(puVar5,uVar9,uVar11);
  _swift_release(puVar1);
  _swift_bridgeObjectRelease(uVar2);
  _swift_bridgeObjectRelease(uVar10);
  return;
}

