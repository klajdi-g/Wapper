// rea decompile_all
// name: FUN_1000ef4c4
// address: 0x1000ef4c4
// body: available
// range: 0x1000ef4c4-0x1000ef8ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000ef588 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000ef4c4(undefined8 *param_1,CGFloat param_2,ulong *param_3,long param_4,
                  undefined8 param_5,Color param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  Design DVar4;
  undefined *puVar5;
  long lVar6;
  Text TVar7;
  Font FVar8;
  Text TVar9;
  Color CVar10;
  Color CVar11;
  State SVar12;
  State SVar13;
  Animation AVar14;
  Animation AVar15;
  Text TVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  long extraout_x8;
  long lVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined *local_2a0;
  ulong local_298;
  long local_290;
  long lStack_288;
  undefined8 *local_280;
  undefined1 auStack_278 [88];
  undefined *local_220;
  undefined *puStack_218;
  undefined1 local_210;
  undefined7 uStack_20f;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined *local_1d8;
  undefined *puStack_1d0;
  undefined1 local_1c8;
  undefined *local_1c0;
  undefined *puStack_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined *local_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined *local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined *puStack_148;
  undefined *local_140;
  undefined *local_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined *local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined *puStack_e8;
  undefined *local_e0;
  undefined *local_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  
  puVar5 = &DAT_10054a828;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar21 = *param_3;
  lVar6 = 0;
  FUN_1000f834c();
  if ((long)uVar21 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1000ef8fc);
    (*pcVar3)();
  }
  lVar20 = *(long *)(param_4 + *(int *)(lVar6 + 0x24));
  if (uVar21 < *(ulong *)(lVar20 + 0x10)) {
    lVar20 = lVar20 + uVar21 * 0x10;
    local_130 = *(undefined **)(lVar20 + 0x20);
    uVar2 = *(undefined8 *)(lVar20 + 0x28);
    local_290 = lVar6;
    lStack_288 = param_4;
    puStack_128 = (undefined *)uVar2;
    FUN_100026df4();
    _swift_bridgeObjectRetain(uVar2);
    puVar5 = PTR___type_metadata_for_Swift_String_100523a98;
    TVar7 = SwiftUI::Text::_init(lVar6,PTR___type_metadata_for_Swift_String_100523a98,lVar6);
    SwiftUI::Font::Weight::get_regular((Weight)TVar7.unknown);
    DVar4 = SwiftUI::Font::Design::typeMetadataAccessor();
    lVar20 = CONCAT71((int7)((ulong)TVar7.unknown >> 8),DVar4.value);
    (**(code **)(*(long *)(lVar20 + -8) + 0x38))((long)&local_2a0 - extraout_x8,1,1,lVar20);
    FVar8 = SwiftUI::Font::_system(param_2,(Font)0x0);
    local_280 = param_1;
    FUN_10002a29c((long)&local_2a0 - extraout_x8,&DAT_10054a828,&DAT_10041e3c0);
    TVar16 = TVar7;
    puVar17 = puVar5;
    lVar20 = lVar6;
    TVar9 = SwiftUI::Text::_font(FVar8.unknown);
    local_298 = uVar21;
    _swift_release(FVar8.unknown);
    FUN_100025b34(TVar7.unknown,puVar5,lVar6);
    _swift_bridgeObjectRelease();
    CVar10 = SwiftUI::Color::get_white(param_6);
    CVar11 = SwiftUI::Color::opacity(0.82,CVar10);
    _swift_release(CVar10.unknown);
    local_130 = CVar11.unknown;
    FUN_100028d58();
    TVar7 = TVar9;
    puVar18 = TVar16.unknown;
    puVar19 = puVar17;
    local_2a0 = (undefined *)SwiftUI::Text::_foregroundStyle();
    FUN_100025b34(TVar9.unknown,TVar16.unknown,puVar17);
    _swift_release(CVar11.unknown);
    _swift_bridgeObjectRelease(lVar20);
    puVar5 = &DAT_1004244f8;
    _swift_getKeyPath();
    puVar1 = (undefined8 *)(lStack_288 + *(int *)(local_290 + 0x40));
    puVar17 = (undefined *)*puVar1;
    uVar2 = puVar1[1];
    SVar12.unknown = &DAT_10054ba40;
    local_130 = puVar17;
    puStack_128 = (undefined *)uVar2;
    FUN_100002f94(&DAT_10054ba40,&DAT_100423be0);
    SwiftUI::State::get_wrappedValue(SVar12);
    uVar22 = 0x3ff0000000000000;
    if ((long)local_190 < 2) {
      uVar22 = 0;
    }
    SVar13.unknown = SVar12.unknown;
    local_130 = puVar17;
    puStack_128 = (undefined *)uVar2;
    SwiftUI::State::get_wrappedValue(SVar12);
    local_1e0 = 0;
    if ((long)local_190 < 2) {
      local_1e0 = 0x4020000000000000;
    }
    AVar14 = SwiftUI::Animation::easeOut(0.28,SVar13.unknown);
    AVar15 = SwiftUI::Animation::delay((double)local_298 * 0.03,AVar14);
    _swift_release(AVar14.unknown);
    local_130 = puVar17;
    puStack_128 = (undefined *)uVar2;
    SwiftUI::State::get_wrappedValue(SVar12);
    puVar17 = local_190;
    local_220 = local_2a0;
    local_210 = SUB81(puVar18,0);
    local_1f8 = 0x4008000000000000;
    uStack_1e8 = 0;
    uStack_c0 = CONCAT71(uStack_20f,local_210);
    uStack_a8 = 0x4008000000000000;
    uStack_98 = 0;
    local_d0 = local_2a0;
    local_1d8 = local_2a0;
    local_1b0 = 0x4008000000000000;
    local_1a0 = 0;
    puStack_218 = TVar7.unknown;
    puStack_208 = puVar19;
    puStack_200 = puVar5;
    local_1f0 = uVar22;
    puStack_1d0 = TVar7.unknown;
    local_1c8 = local_210;
    local_1c0 = puVar19;
    puStack_1b8 = puVar5;
    local_1a8 = uVar22;
    local_198 = local_1e0;
    puStack_c8 = TVar7.unknown;
    puStack_b8 = puVar19;
    local_b0 = puVar5;
    uStack_a0 = uVar22;
    local_90 = local_1e0;
    FUN_1000087e4(&local_220,&local_130,&DAT_100552188,&DAT_100424470);
    FUN_10002a29c(&local_1d8,&DAT_100552188,&DAT_100424470);
    uStack_168 = uStack_a8;
    local_170 = local_b0;
    uStack_158 = uStack_98;
    uStack_160 = uStack_a0;
    puStack_188 = puStack_c8;
    local_190 = local_d0;
    puStack_178 = puStack_b8;
    uStack_180 = uStack_c0;
    local_150 = local_90;
    local_140 = puVar17;
    uStack_108 = uStack_a8;
    local_110 = local_b0;
    uStack_f8 = uStack_98;
    uStack_100 = uStack_a0;
    puStack_128 = puStack_c8;
    local_130 = local_d0;
    puStack_118 = puStack_b8;
    uStack_120 = uStack_c0;
    local_f0 = local_90;
    local_e0 = puVar17;
    puStack_148 = AVar15.unknown;
    puStack_e8 = AVar15.unknown;
    FUN_1000087e4(&local_190,auStack_278,&DAT_100552170,&DAT_100424468);
    FUN_10002a29c(&local_130,&DAT_100552170,&DAT_100424468);
    local_280[5] = uStack_168;
    local_280[4] = local_170;
    local_280[7] = uStack_158;
    local_280[6] = uStack_160;
    local_280[9] = puStack_148;
    local_280[8] = local_150;
    local_280[10] = local_140;
    local_280[1] = puStack_188;
    *local_280 = local_190;
    local_280[3] = puStack_178;
    local_280[2] = uStack_180;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1000ef900);
  (*pcVar3)();
}

