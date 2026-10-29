// rea decompile_all
// name: FUN_10005783c
// address: 0x10005783c
// body: available
// range: 0x10005783c-0x100057be7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10005783c(undefined8 *param_1,CGFloat param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6)

{
  byte bVar1;
  Design DVar2;
  undefined *puVar3;
  long lVar4;
  Text TVar5;
  undefined7 extraout_var;
  Font FVar6;
  Text TVar7;
  Text TVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar12;
  long lVar13;
  long lVar14;
  Color CVar15;
  undefined *local_1b0;
  undefined *local_1a8;
  undefined8 *local_1a0;
  undefined1 auStack_198 [56];
  undefined *local_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined *local_140;
  undefined7 uStack_138;
  undefined4 uStack_131;
  undefined *local_120;
  undefined *puStack_118;
  undefined1 local_110;
  undefined7 uStack_10f;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined7 local_f8;
  undefined1 uStack_f1;
  undefined2 uStack_f0;
  undefined1 uStack_ee;
  undefined *local_e8;
  undefined *puStack_e0;
  undefined1 local_d8;
  undefined *local_d0;
  undefined *puStack_c8;
  undefined8 local_c0;
  undefined2 local_b8;
  undefined1 local_b6;
  undefined *local_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *local_90;
  undefined7 uStack_88;
  undefined4 uStack_81;
  
  puVar3 = &DAT_10054a828;
  local_1b0 = param_5;
  local_1a0 = param_1;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)&local_1b0 - extraout_x8;
  puVar3 = &DAT_10054b0b0;
  puVar10 = &DAT_10041c2b0;
  FUN_100002f94(&DAT_10054b0b0,&DAT_10041c2b0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  CVar15.unknown = (undefined *)(lVar13 - extraout_x8_00);
  lVar4 = 0;
  FUN_100170d98();
  lVar12 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar12 + 0x40));
  lVar14 = (long)CVar15.unknown - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  FUN_1000087e4(param_3,CVar15.unknown,&DAT_10054b0b0,&DAT_10041c2b0);
  puVar3 = CVar15.unknown;
  (**(code **)(lVar12 + 0x30))(CVar15.unknown,1,lVar4);
  if ((int)puVar3 == 1) {
    FUN_10002a29c(CVar15.unknown,&DAT_10054b0b0,&DAT_10041c2b0);
    local_1a8 = (undefined *)0x0;
  }
  else {
    FUN_100007e64(CVar15.unknown,lVar14,FUN_100170d98);
    bVar1 = *(byte *)(lVar14 + *(int *)(lVar4 + 0x28));
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        CVar15 = SwiftUI::Color::get_secondary(CVar15);
      }
      else {
        CVar15 = SwiftUI::Color::get_green(CVar15);
      }
    }
    else if (bVar1 == 2) {
      CVar15 = SwiftUI::Color::get_yellow(CVar15);
    }
    else {
      CVar15 = SwiftUI::Color::get_red(CVar15);
    }
    FUN_100029548(lVar14,FUN_100170d98);
    local_1a8 = CVar15.unknown;
    _swift_retain();
  }
  local_b0 = local_1b0;
  puStack_a8 = (undefined *)param_6;
  FUN_100026df4();
  _swift_bridgeObjectRetain(param_6);
  puVar3 = PTR___type_metadata_for_Swift_String_100523a98;
  TVar5 = SwiftUI::Text::_init();
  SwiftUI::Font::Weight::get_bold((Weight)TVar5.unknown);
  DVar2 = SwiftUI::Font::Design::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,DVar2.value) + -8) + 0x38))
            (lVar13,1,1,CONCAT71(extraout_var,DVar2.value));
  FVar6 = SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c(lVar13,&DAT_10054a828,&DAT_10041e3c0);
  TVar8 = TVar5;
  puVar9 = puVar3;
  puVar11 = CVar15.unknown;
  TVar7 = SwiftUI::Text::_font(FVar6.unknown);
  _swift_release(FVar6.unknown);
  FUN_100025b34(TVar5.unknown,puVar3,CVar15.unknown);
  _swift_bridgeObjectRelease(puVar10);
  puVar3 = &DAT_10041e3c8;
  _swift_getKeyPath();
  local_110 = SUB81(puVar9,0);
  local_f8 = 1;
  uStack_f1 = 0;
  uStack_f0 = 0x100;
  uStack_ee = 0;
  local_c0 = 1;
  local_b8 = 0x100;
  local_b6 = 0;
  local_120 = TVar7.unknown;
  puStack_118 = TVar8.unknown;
  puStack_108 = puVar11;
  puStack_100 = puVar3;
  local_e8 = TVar7.unknown;
  puStack_e0 = TVar8.unknown;
  local_d8 = local_110;
  local_d0 = puVar11;
  puStack_c8 = puVar3;
  FUN_1000087e4(&local_120,&local_b0,&DAT_10054bbe0,&DAT_10041d2e0);
  FUN_10002a29c(&local_e8,&DAT_10054bbe0,&DAT_10041d2e0);
  puVar3 = local_1a8;
  uStack_150 = CONCAT71(uStack_10f,local_110);
  puStack_158 = puStack_118;
  local_160 = local_120;
  puStack_148 = puStack_108;
  uStack_138 = local_f8;
  local_140 = puStack_100;
  uStack_131 = CONCAT13(uStack_ee,CONCAT21(uStack_f0,uStack_f1));
  puStack_a8 = puStack_118;
  local_b0 = local_120;
  puStack_98 = puStack_108;
  uStack_88 = local_f8;
  local_90 = puStack_100;
  uStack_a0 = uStack_150;
  uStack_81 = uStack_131;
  _swift_retain(local_1a8);
  FUN_1000087e4(&local_b0,auStack_198,&DAT_10054bbe0,&DAT_10041d2e0);
  _swift_release(puVar3);
  *local_1a0 = puVar3;
  local_1a0[2] = puStack_a8;
  local_1a0[1] = local_b0;
  local_1a0[4] = puStack_98;
  local_1a0[3] = uStack_a0;
  local_1a0[6] = CONCAT17((undefined1)uStack_81,uStack_88);
  local_1a0[5] = local_90;
  *(undefined4 *)((long)local_1a0 + 0x37) = uStack_81;
  FUN_10002a29c(&local_160,&DAT_10054bbe0,&DAT_10041d2e0);
  _swift_release(puVar3);
  return;
}

