// rea decompile_all
// name: FUN_1002d2274
// address: 0x1002d2274
// body: available
// range: 0x1002d2274-0x1002d2737 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002d2480 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1002d2274(undefined8 *param_1,long param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  byte bVar6;
  undefined *puVar7;
  LocalizedStringKey LVar8;
  Text TVar9;
  Color CVar10;
  undefined *puVar11;
  undefined8 uVar12;
  Text TVar13;
  Binding<bool> isOn;
  undefined1 uVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  long extraout_x8;
  long extraout_x8_00;
  long lVar18;
  long extraout_x12;
  String stringLiteral;
  String stringLiteral_00;
  undefined8 uStack_1e0;
  undefined2 auStack_1d8 [4];
  AppStorage aAStack_1d0 [2];
  undefined4 local_1bc;
  undefined *local_1b8;
  undefined *puStack_1b0;
  ulong local_1a8;
  long local_1a0;
  long local_198;
  undefined *local_190;
  undefined *local_188;
  long local_180;
  undefined *local_178;
  undefined1 auStack_170 [64];
  undefined *local_130;
  undefined8 uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *local_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *local_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  ulong local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar7 = &DAT_10054b1e0;
  FUN_100002f94(&DAT_10054b1e0,&DAT_10041c400);
  local_198 = *(long *)(puVar7 + -8);
  local_190 = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_198 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  CVar10.unknown = &DAT_10055a8a8;
  FUN_100002f94(&DAT_10055a8a8,&DAT_10042ea38);
  local_188 = CVar10.unknown;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(CVar10.unknown + -8) + 0x40));
  lVar18 = ((long)aAStack_1d0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_180 = lVar18;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = lVar18 - extraout_x12;
  local_178 = (undefined *)SwiftUI::Color::get_purple(CVar10);
  uVar12 = 0x80000001004e45e0;
  stringLiteral.bridgeObject = (void *)0x80000001004e45e0;
  stringLiteral.str = &DAT_d000000000000028;
  LVar8 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  *(undefined2 *)(lVar18 + -8) = 0x100;
  *(undefined8 *)(lVar18 + -0x10) = 0;
  uVar15 = (ulong)(param_4 & 1);
  TVar9 = SwiftUI::Text::_init(LVar8);
  CVar10.unknown = *(undefined **)(param_2 + 0x38);
  aAStack_1d0[1].unknown = CVar10.unknown;
  local_1a0 = param_2;
  SwiftUI::AppStorage::get_wrappedValue((AppStorage)CVar10.unknown);
  if ((byte)local_b0 == '\x01') {
    CVar10 = SwiftUI::Color::get_primary(CVar10);
  }
  else {
    CVar10 = SwiftUI::Color::get_secondary(CVar10);
  }
  local_b0 = CVar10.unknown;
  FUN_100028d58();
  TVar13 = TVar9;
  uVar16 = uVar12;
  uVar17 = uVar15;
  puStack_1b0 = (undefined *)SwiftUI::Text::_foregroundStyle();
  local_1bc = (undefined4)uVar16;
  local_1b8 = TVar13.unknown;
  local_1a8 = uVar17;
  FUN_100025b34(TVar9.unknown,uVar12);
  uVar14 = (undefined1)uVar15;
  _swift_release(CVar10.unknown);
  _swift_bridgeObjectRelease(param_5);
  uVar12 = 0x80000001004e4610;
  stringLiteral_00.bridgeObject = (void *)0x80000001004e4610;
  stringLiteral_00.str = (char *)0xd00000000000004f;
  LVar8 = SwiftUI::LocalizedStringKey::init(stringLiteral_00);
  local_f0 = (undefined *)((ulong)local_f0 & 0xffffffffffffff00);
  SwiftUI::State::init(&local_90,LVar8.unknown,PTR___type_metadata_for_Swift_Bool_100523b70);
  local_f0 = (undefined *)0x0;
  puVar7 = &DAT_100552970;
  FUN_100002f94(&DAT_100552970,&DAT_10042f240);
  SwiftUI::State::init(&uStack_80,puVar7,puVar7);
  local_a0 = CONCAT71(local_a0._1_7_,uVar14) & 0xffffffffffffff01;
  uStack_c8 = uStack_88;
  local_d0 = local_90;
  uStack_b8 = uStack_78;
  uStack_c0 = uStack_80;
  uStack_e0 = local_a0;
  isOn.unknown = (undefined *)0xe000000000000000;
  local_f0 = LVar8.unknown;
  uStack_e8 = uVar12;
  uStack_d8 = uVar17;
  local_b0 = LVar8.unknown;
  uStack_a8 = uVar12;
  local_98 = uVar17;
  LVar8 = SwiftUI::LocalizedStringKey::init((String)(ZEXT816(0xe000000000000000) << 0x40));
  SwiftUI::AppStorage::get_projectedValue((AppStorage)*(undefined **)(local_1a0 + 0x40));
  (extension_SwiftUI)::SwiftUI::Toggle::_init(LVar8,isOn);
  FUN_1000087a0(&DAT_10054b200,&DAT_10054b1e0,&DAT_10041c400,
                PTR_SwiftUI__SwiftUI__Toggle<undefined>_>SwiftUI__View_1005234a0);
  puVar7 = local_190;
  (extension_SwiftUI)::SwiftUI::View::_labelsHidden();
  (**(code **)(local_198 + 8))((long)aAStack_1d0 - extraout_x8,puVar7);
  SwiftUI::AppStorage::get_wrappedValue(aAStack_1d0[1]);
  bVar6 = (byte)local_b0;
  puVar7 = &DAT_10042ea40;
  _swift_getKeyPath();
  puVar11 = &DAT_1005385a8;
  _swift_allocObject(&DAT_1005385a8,0x11,7);
  puVar11[0x10] = (bVar6 ^ 0xff) & 1;
  puVar1 = (undefined8 *)(lVar18 + *(int *)(local_188 + 0x24));
  *puVar1 = puVar7;
  puVar1[1] = FUN_10006bca0;
  puVar1[2] = puVar11;
  lVar4 = local_180;
  uStack_128 = uStack_e8;
  local_130 = local_f0;
  uStack_118 = uStack_d8;
  uStack_120 = uStack_e0;
  uStack_108 = uStack_c8;
  local_110 = local_d0;
  uStack_f8 = uStack_b8;
  uStack_100 = uStack_c0;
  FUN_1000087e4(lVar18,local_180,&DAT_10055a8a8,&DAT_10042ea38);
  puVar5 = local_178;
  uVar15 = local_1a8;
  puVar3 = puStack_1b0;
  puVar11 = local_1b8;
  uVar2 = local_1bc;
  *param_1 = 0x656c6666756873;
  param_1[1] = 0xe700000000000000;
  param_1[2] = 0x4036000000000000;
  param_1[3] = local_178;
  param_1[4] = puStack_1b0;
  param_1[5] = local_1b8;
  *(char *)(param_1 + 6) = (char)local_1bc;
  param_1[7] = local_1a8;
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
  puVar7 = &DAT_10055a8b0;
  FUN_100002f94(&DAT_10055a8b0,&DAT_10042ea70);
  FUN_1000087e4(lVar4,(long)param_1 + (long)*(int *)(puVar7 + 0x60),&DAT_10055a8a8,&DAT_10042ea38);
  _swift_bridgeObjectRetain(0xe700000000000000);
  _swift_retain(puVar5);
  FUN_100007b14(puVar3,puVar11,uVar2);
  _swift_bridgeObjectRetain(uVar15);
  FUN_100100eac(&local_b0,auStack_170);
  FUN_10002a29c(lVar18,&DAT_10055a8a8,&DAT_10042ea38);
  FUN_10002a29c(lVar4,&DAT_10055a8a8,&DAT_10042ea38);
  FUN_1002cab64(&local_130);
  FUN_100025b34(puVar3,puVar11,uVar2);
  _swift_release(puVar5);
  _swift_bridgeObjectRelease(0xe700000000000000);
  _swift_bridgeObjectRelease(uVar15);
  return;
}

