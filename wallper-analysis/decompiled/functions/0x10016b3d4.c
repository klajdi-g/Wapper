// rea decompile_all
// name: FUN_10016b3d4
// address: 0x10016b3d4
// body: available
// range: 0x10016b3d4-0x10016b653 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010016b56c) */
/* WARNING: Removing unreachable block (ram,0x00010016b4c8) */

void FUN_10016b3d4(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  KeyedDecodingContainer<undefined> KVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long unaff_x21;
  long lVar4;
  undefined1 auStack_460 [8];
  undefined1 auStack_458 [248];
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined1 local_270;
  undefined1 local_262;
  undefined1 local_261;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  
  puVar1 = &DAT_100555690;
  FUN_100002f94(&DAT_100555690,&DAT_100429250);
  lVar4 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100007bd0(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_10016b654();
  KVar2 = Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_261 = 0;
    FUN_10016b694();
    Swift::KeyedDecodingContainer::_decode
              (&local_260,&DAT_10052fa38,&local_261,puVar1,&DAT_10052fa38,KVar2.unknown);
    uStack_a8 = uStack_198;
    local_b0 = local_1a0;
    uStack_98 = uStack_188;
    uStack_a0 = uStack_190;
    uStack_88 = uStack_178;
    local_90 = local_180;
    uStack_e8 = uStack_1d8;
    local_f0 = local_1e0;
    uStack_d8 = uStack_1c8;
    uStack_e0 = uStack_1d0;
    uStack_c8 = uStack_1b8;
    local_d0 = local_1c0;
    uStack_b8 = uStack_1a8;
    uStack_c0 = uStack_1b0;
    uStack_128 = uStack_218;
    local_130 = local_220;
    uStack_118 = uStack_208;
    uStack_120 = uStack_210;
    uStack_108 = uStack_1f8;
    local_110 = local_200;
    uStack_f8 = uStack_1e8;
    uStack_100 = uStack_1f0;
    uStack_168 = uStack_258;
    local_170 = local_260;
    uStack_158 = uStack_248;
    uStack_160 = uStack_250;
    uStack_148 = uStack_238;
    local_150 = local_240;
    uStack_138 = uStack_228;
    uStack_140 = uStack_230;
    local_262 = 1;
    puVar3 = &local_262;
    Swift::KeyedDecodingContainer::_decodeIfPresent(puVar3,puVar1);
    (**(code **)(lVar4 + 8))(auStack_460 + -extraout_x8,puVar1);
    local_270 = SUB81(puVar3,0);
    uStack_298 = uStack_a8;
    local_2a0 = local_b0;
    uStack_288 = uStack_98;
    uStack_290 = uStack_a0;
    uStack_278 = uStack_88;
    local_280 = local_90;
    uStack_2d8 = uStack_e8;
    local_2e0 = local_f0;
    uStack_2c8 = uStack_d8;
    uStack_2d0 = uStack_e0;
    uStack_2b8 = uStack_c8;
    local_2c0 = local_d0;
    uStack_2a8 = uStack_b8;
    uStack_2b0 = uStack_c0;
    uStack_318 = uStack_128;
    local_320 = local_130;
    uStack_308 = uStack_118;
    uStack_310 = uStack_120;
    uStack_2f8 = uStack_108;
    local_300 = local_110;
    uStack_2e8 = uStack_f8;
    uStack_2f0 = uStack_100;
    uStack_358 = uStack_168;
    local_360 = local_170;
    uStack_348 = uStack_158;
    uStack_350 = uStack_160;
    uStack_338 = uStack_148;
    local_340 = local_150;
    uStack_328 = uStack_138;
    uStack_330 = uStack_140;
    local_80 = local_270;
    FUN_10016b6d4(&local_360,auStack_458);
    FUN_100043f24(param_2);
    FUN_10016b708(&local_170);
    param_1[0x19] = uStack_298;
    param_1[0x18] = local_2a0;
    param_1[0x1b] = uStack_288;
    param_1[0x1a] = uStack_290;
    param_1[0x1d] = uStack_278;
    param_1[0x1c] = local_280;
    *(undefined1 *)(param_1 + 0x1e) = local_270;
    param_1[0x11] = uStack_2d8;
    param_1[0x10] = local_2e0;
    param_1[0x13] = uStack_2c8;
    param_1[0x12] = uStack_2d0;
    param_1[0x15] = uStack_2b8;
    param_1[0x14] = local_2c0;
    param_1[0x17] = uStack_2a8;
    param_1[0x16] = uStack_2b0;
    param_1[9] = uStack_318;
    param_1[8] = local_320;
    param_1[0xb] = uStack_308;
    param_1[10] = uStack_310;
    param_1[0xd] = uStack_2f8;
    param_1[0xc] = local_300;
    param_1[0xf] = uStack_2e8;
    param_1[0xe] = uStack_2f0;
    param_1[1] = uStack_358;
    *param_1 = local_360;
    param_1[3] = uStack_348;
    param_1[2] = uStack_350;
    param_1[5] = uStack_338;
    param_1[4] = local_340;
    param_1[7] = uStack_328;
    param_1[6] = uStack_330;
  }
  else {
    FUN_100043f24(param_2);
  }
  return;
}

