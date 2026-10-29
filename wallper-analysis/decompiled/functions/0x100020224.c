// rea decompile_all
// name: FUN_100020224
// address: 0x100020224
// body: available
// range: 0x100020224-0x1000207e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100020224(undefined8 *param_1,CGFloat param_2)

{
  int iVar1;
  Design DVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  EnvironmentObject<undefined> EVar6;
  undefined8 *puVar7;
  EnvironmentObject<undefined> EVar8;
  EnvironmentObject<undefined> EVar9;
  undefined7 extraout_var;
  ulong uVar10;
  Color CVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar12;
  long extraout_x12;
  long extraout_x12_00;
  Color CVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  String systemName;
  undefined *local_1a0;
  undefined *local_198;
  undefined *local_190;
  long local_188;
  ulong local_180;
  undefined8 *local_178;
  undefined1 auStack_170 [64];
  undefined *local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_ff;
  undefined *local_f0;
  undefined *puStack_e8;
  undefined *local_e0;
  undefined *puStack_d8;
  undefined8 *local_d0;
  undefined1 uStack_c8;
  undefined7 local_c7;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined *local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  
  lVar3 = 0;
  local_178 = param_1;
  FUN_10025ee04();
  lVar16 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar16 + 0x40));
  lVar14 = (long)&local_1a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_10054b728;
  local_188 = lVar14;
  FUN_100002f94(&DAT_10054b728,&DAT_10041cbf0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  CVar13.unknown = (undefined *)(lVar14 - extraout_x8_00);
  puVar5 = &DAT_10054ac38;
  FUN_100002f94(&DAT_10054ac38,&DAT_10041e8e0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  uVar12 = (long)CVar13.unknown - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_180 = uVar12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar15 = uVar12 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = lVar15 - extraout_x12_00;
  puVar5 = &DAT_10054a828;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_10001ef3c();
  if (((ulong)puVar5 & 1) != 0) {
    FUN_1001b7378(0);
    puVar4 = &DAT_100553df0;
    FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
    EVar6 = SwiftUI::EnvironmentObject::init();
    FUN_100279594(0);
    puVar7 = &DAT_100553dd0;
    FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
    EVar8 = SwiftUI::EnvironmentObject::init();
    FUN_100226ac0(0);
    puVar5 = &DAT_10054aa48;
    FUN_1000036d0(&DAT_10054aa48,FUN_100226ac0,&TargetProtocolConformanceDescriptor_10042b420);
    EVar9 = SwiftUI::EnvironmentObject::init();
    local_f0 = (undefined *)0x403a000000000000;
    uStack_c8 = SUB81(EVar9.unknown,0);
    local_c7 = (undefined7)((ulong)EVar9.unknown >> 8);
    uStack_c0 = SUB81(puVar5,0);
    uStack_bf = (undefined7)((ulong)puVar5 >> 8);
    uStack_b8 = 0;
    puStack_e8 = EVar6.unknown;
    local_e0 = puVar4;
    puStack_d8 = EVar8.unknown;
    local_d0 = puVar7;
    goto LAB_100020718;
  }
  systemName.bridgeObject = (void *)0xef7473696c2e6574;
  systemName.str = (char *)0x6f6e2e636973756d;
  local_190 = (undefined *)SwiftUI::Image::init(systemName);
  SwiftUI::Font::Weight::get_semibold((Weight)local_190);
  DVar2 = SwiftUI::Font::Design::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,DVar2.value) + -8) + 0x38))
            (lVar14 - extraout_x8_02,1,1,CONCAT71(extraout_var,DVar2.value));
  local_198 = (undefined *)SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c(lVar14 - extraout_x8_02,&DAT_10054a828,&DAT_10041e3c0);
  puVar5 = &DAT_10041bb78;
  _swift_getKeyPath();
  local_1a0 = puVar5;
  FUN_10001ed5c(lVar14);
  (**(code **)(lVar16 + 0x38))(lVar15,1,1,lVar3);
  iVar1 = *(int *)(puVar4 + 0x30);
  FUN_1000087e4(lVar14,CVar13.unknown,&DAT_10054ac38,&DAT_10041e8e0);
  FUN_1000087e4(lVar15,CVar13.unknown + iVar1,&DAT_10054ac38,&DAT_10041e8e0);
  pcVar17 = *(code **)(lVar16 + 0x30);
  puVar4 = CVar13.unknown;
  (*pcVar17)(CVar13.unknown,1,lVar3);
  uVar12 = local_180;
  if ((int)puVar4 == 1) {
    FUN_10002a29c(lVar15,&DAT_10054ac38,&DAT_10041e8e0);
    FUN_10002a29c(lVar14,&DAT_10054ac38,&DAT_10041e8e0);
    puVar4 = CVar13.unknown + iVar1;
    (*pcVar17)(puVar4,1,lVar3);
    if ((int)puVar4 != 1) {
LAB_100020624:
      FUN_10002a29c(CVar13.unknown,&DAT_10054b728,&DAT_10041cbf0);
      goto LAB_100020640;
    }
    FUN_10002a29c(CVar13.unknown,&DAT_10054ac38,&DAT_10041e8e0);
LAB_1000206d8:
    CVar11 = SwiftUI::Color::get_white(CVar13);
    CVar13 = SwiftUI::Color::opacity(0.8,CVar11);
    _swift_release(CVar11.unknown);
  }
  else {
    FUN_1000087e4(CVar13.unknown,local_180,&DAT_10054ac38,&DAT_10041e8e0);
    puVar4 = CVar13.unknown + iVar1;
    (*pcVar17)(puVar4,1,lVar3);
    lVar3 = local_188;
    if ((int)puVar4 == 1) {
      FUN_10002a29c(lVar15,&DAT_10054ac38,&DAT_10041e8e0);
      FUN_10002a29c(lVar14,&DAT_10054ac38,&DAT_10041e8e0);
      FUN_100029548(uVar12,FUN_10025ee04);
      goto LAB_100020624;
    }
    FUN_100007e64(CVar13.unknown + iVar1,local_188,FUN_10025ee04);
    uVar10 = uVar12;
    FUN_100265c18(uVar12,lVar3);
    FUN_100029548(lVar3,FUN_10025ee04);
    FUN_10002a29c(lVar15,&DAT_10054ac38,&DAT_10041e8e0);
    FUN_10002a29c(lVar14,&DAT_10054ac38,&DAT_10041e8e0);
    FUN_100029548(uVar12,FUN_10025ee04);
    FUN_10002a29c(CVar13.unknown,&DAT_10054ac38,&DAT_10041e8e0);
    if ((uVar10 & 1) != 0) goto LAB_1000206d8;
LAB_100020640:
    CVar13 = SwiftUI::Color::get_white(CVar13);
  }
  local_f0 = local_190;
  puStack_e8 = local_1a0;
  local_e0 = local_198;
  uStack_b8 = 1;
  puStack_d8 = CVar13.unknown;
LAB_100020718:
  FUN_100002f94(&DAT_10054b280,&DAT_10041c5b0);
  FUN_10002b47c();
  FUN_1000297fc();
  (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)&local_f0);
  uStack_128 = uStack_a8;
  local_130 = local_b0;
  uStack_118 = uStack_98;
  uStack_120 = uStack_a0;
  local_110 = local_90;
  uStack_ff = uStack_7f;
  local_178[1] = uStack_a8;
  *local_178 = local_b0;
  local_178[3] = uStack_98;
  local_178[2] = uStack_a0;
  local_178[5] = CONCAT71(uStack_87,uStack_88);
  local_178[4] = local_90;
  *(undefined8 *)((long)local_178 + 0x31) = uStack_7f;
  *(ulong *)((long)local_178 + 0x29) = CONCAT17(uStack_80,uStack_87);
  puStack_d8 = (undefined *)uStack_98;
  local_e0 = (undefined *)uStack_a0;
  local_d0 = (undefined8 *)local_90;
  puStack_e8 = (undefined *)uStack_a8;
  local_f0 = local_b0;
  uStack_bf = (undefined7)uStack_7f;
  uStack_b8 = (undefined1)((ulong)uStack_7f >> 0x38);
  FUN_1000087e4(&local_130,auStack_170,&DAT_10054b718,&DAT_10041cbe8);
  FUN_10002a29c(&local_f0,&DAT_10054b718,&DAT_10041cbe8);
  return;
}

