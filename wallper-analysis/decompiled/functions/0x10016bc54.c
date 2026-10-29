// rea decompile_all
// name: FUN_10016bc54
// address: 0x10016bc54
// body: available
// range: 0x10016bc54-0x10016c27b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010016c148) */
/* WARNING: Removing unreachable block (ram,0x00010016c068) */
/* WARNING: Removing unreachable block (ram,0x00010016bed0) */
/* WARNING: Removing unreachable block (ram,0x00010016bff4) */
/* WARNING: Removing unreachable block (ram,0x00010016bf2c) */
/* WARNING: Removing unreachable block (ram,0x00010016bd98) */
/* WARNING: Removing unreachable block (ram,0x00010016bde4) */
/* WARNING: Removing unreachable block (ram,0x00010016be9c) */
/* WARNING: Removing unreachable block (ram,0x00010016bea8) */
/* WARNING: Removing unreachable block (ram,0x00010016bf64) */
/* WARNING: Removing unreachable block (ram,0x00010016c000) */
/* WARNING: Removing unreachable block (ram,0x00010016bebc) */
/* WARNING: Removing unreachable block (ram,0x00010016bee8) */
/* WARNING: Removing unreachable block (ram,0x00010016bef4) */
/* WARNING: Removing unreachable block (ram,0x00010016bed4) */
/* WARNING: Removing unreachable block (ram,0x00010016bee0) */
/* WARNING: Removing unreachable block (ram,0x00010016c0f8) */
/* WARNING: Removing unreachable block (ram,0x00010016c080) */
/* WARNING: Removing unreachable block (ram,0x00010016c0bc) */
/* WARNING: Removing unreachable block (ram,0x00010016c0ac) */
/* WARNING: Removing unreachable block (ram,0x00010016c0b8) */
/* WARNING: Removing unreachable block (ram,0x00010016c0c0) */
/* WARNING: Removing unreachable block (ram,0x00010016befc) */
/* WARNING: Removing unreachable block (ram,0x00010016bd28) */

void FUN_10016bc54(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 ****ppppuVar2;
  undefined8 ****ppppuVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long unaff_x21;
  long lVar7;
  undefined *local_370;
  undefined *local_368;
  undefined *local_360;
  undefined *local_358;
  undefined *local_350;
  undefined *local_348;
  undefined1 auStack_340 [240];
  undefined8 ***local_250;
  undefined *puStack_248;
  undefined8 ***pppuStack_240;
  undefined *puStack_238;
  undefined8 ***local_230;
  undefined *puStack_228;
  undefined8 ***pppuStack_220;
  long lStack_218;
  undefined8 ***local_210;
  long lStack_208;
  undefined8 ***pppuStack_200;
  long lStack_1f8;
  undefined8 ***local_1f0;
  long lStack_1e8;
  undefined8 ***pppuStack_1e0;
  undefined *puStack_1d8;
  undefined8 ***local_1d0;
  long lStack_1c8;
  undefined8 ***pppuStack_1c0;
  long lStack_1b8;
  undefined8 ***local_1b0;
  long lStack_1a8;
  undefined8 ***pppuStack_1a0;
  long lStack_198;
  undefined8 ***local_190;
  undefined *puStack_188;
  undefined8 ***pppuStack_180;
  undefined *puStack_178;
  undefined1 *local_170;
  undefined *puStack_168;
  undefined8 ***local_158;
  undefined *puStack_150;
  undefined8 ***local_148;
  undefined *puStack_140;
  undefined8 ***local_138;
  undefined *puStack_130;
  undefined8 ***local_128;
  undefined1 uStack_120;
  undefined7 uStack_11f;
  undefined8 ***local_118;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  undefined8 ***local_108;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  undefined8 ***local_f8;
  undefined1 uStack_f0;
  undefined7 uStack_ef;
  undefined8 ***local_e8;
  undefined *puStack_e0;
  undefined8 ***local_d8;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined8 ***local_c8;
  undefined1 uStack_c0;
  undefined1 uStack_bf;
  undefined6 uStack_be;
  undefined8 ***local_b8;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined8 ***local_a8;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined8 ***local_98;
  undefined *puStack_90;
  undefined8 ***local_88;
  undefined *puStack_80;
  undefined1 *local_78;
  undefined *puStack_70;
  undefined1 local_51;
  
  puVar1 = &DAT_1005556a8;
  FUN_100002f94(&DAT_1005556a8,&DAT_100429258);
  lVar7 = *(long *)(puVar1 + -8);
  local_348 = puVar1;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100007bd0(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_10016c27c();
  Swift::Decoder::_container();
  puVar1 = local_348;
  if (unaff_x21 == 0) {
    local_250 = (undefined8 ***)((ulong)local_250 & 0xffffffffffffff00);
    ppppuVar2 = &local_250;
    puVar5 = local_348;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    local_250._0_1_ = 1;
    ppppuVar3 = &local_250;
    puVar6 = puVar1;
    local_350 = puVar5;
    local_158 = ppppuVar2;
    puStack_150 = puVar5;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    local_250._0_1_ = 2;
    ppppuVar2 = &local_250;
    puVar5 = puVar1;
    local_360 = puVar6;
    local_148 = ppppuVar3;
    puStack_140 = puVar6;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    local_250._0_1_ = 3;
    ppppuVar3 = &local_250;
    puVar6 = puVar1;
    local_368 = puVar5;
    local_138 = ppppuVar2;
    puStack_130 = puVar5;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    uStack_120 = SUB81(puVar6,0);
    local_250._0_1_ = 4;
    ppppuVar2 = &local_250;
    puVar5 = puVar1;
    local_128 = ppppuVar3;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    uStack_110 = SUB81(puVar5,0);
    local_250._0_1_ = 5;
    ppppuVar3 = &local_250;
    puVar5 = puVar1;
    local_118 = ppppuVar2;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    uStack_100 = SUB81(puVar5,0);
    local_250._0_1_ = 6;
    ppppuVar2 = &local_250;
    puVar5 = puVar1;
    local_108 = ppppuVar3;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    uStack_f0 = SUB81(puVar5,0);
    local_250._0_1_ = 7;
    ppppuVar3 = &local_250;
    puVar5 = puVar1;
    local_f8 = ppppuVar2;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    local_250._0_1_ = 8;
    ppppuVar2 = &local_250;
    puVar6 = puVar1;
    local_358 = puVar5;
    local_e8 = ppppuVar3;
    puStack_e0 = puVar5;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    uStack_d0 = SUB81(puVar6,0);
    local_250._0_1_ = 9;
    ppppuVar3 = &local_250;
    local_d8 = ppppuVar2;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    uStack_c0 = SUB81(puVar1,0);
    local_250._0_1_ = 10;
    ppppuVar2 = &local_250;
    local_c8 = ppppuVar3;
    Swift::KeyedDecodingContainer::_decodeIfPresent(ppppuVar2,local_348);
    uStack_bf = SUB81(ppppuVar2,0);
    local_250._0_1_ = 0xb;
    ppppuVar2 = &local_250;
    puVar1 = local_348;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    uStack_b0 = SUB81(puVar1,0);
    local_250._0_1_ = 0xc;
    ppppuVar3 = &local_250;
    puVar1 = local_348;
    local_b8 = ppppuVar2;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    uStack_a0 = SUB81(puVar1,0);
    local_250._0_1_ = 0xd;
    ppppuVar2 = &local_250;
    puVar1 = local_348;
    local_a8 = ppppuVar3;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    local_250._0_1_ = 0xe;
    ppppuVar3 = &local_250;
    puVar5 = local_348;
    local_98 = ppppuVar2;
    puStack_90 = puVar1;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    local_51 = 0xf;
    puVar4 = &local_51;
    puVar1 = local_348;
    local_88 = ppppuVar3;
    puStack_80 = puVar5;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    local_370 = puVar1;
    (**(code **)(lVar7 + 8))((long)&local_370 - extraout_x8,local_348);
    puStack_70 = local_370;
    puStack_188 = puStack_90;
    local_190 = local_98;
    puStack_178 = puStack_80;
    pppuStack_180 = local_88;
    lStack_1c8 = CONCAT71(uStack_cf,uStack_d0);
    lStack_1b8 = CONCAT62(uStack_be,CONCAT11(uStack_bf,uStack_c0));
    local_1d0 = local_d8;
    pppuStack_1c0 = local_c8;
    lStack_198 = CONCAT71(uStack_9f,uStack_a0);
    lStack_1a8 = CONCAT71(uStack_af,uStack_b0);
    local_1b0 = local_b8;
    pppuStack_1a0 = local_a8;
    lStack_208 = CONCAT71(uStack_10f,uStack_110);
    lStack_1f8 = CONCAT71(uStack_ff,uStack_100);
    local_210 = local_118;
    pppuStack_200 = local_108;
    lStack_1e8 = CONCAT71(uStack_ef,uStack_f0);
    local_1f0 = local_f8;
    puStack_1d8 = puStack_e0;
    pppuStack_1e0 = local_e8;
    puStack_248 = puStack_150;
    local_250 = local_158;
    puStack_238 = puStack_140;
    pppuStack_240 = local_148;
    lStack_218 = CONCAT71(uStack_11f,uStack_120);
    puStack_228 = puStack_130;
    local_230 = local_138;
    pppuStack_220 = local_128;
    puStack_168 = local_370;
    local_170 = puVar4;
    local_78 = puVar4;
    FUN_10016c2bc(&local_250,auStack_340);
    FUN_100043f24(param_2);
    FUN_10016a69c(&local_158);
    param_1[0x19] = (long)puStack_188;
    param_1[0x18] = (long)local_190;
    param_1[0x1b] = (long)puStack_178;
    param_1[0x1a] = (long)pppuStack_180;
    param_1[0x1d] = (long)puStack_168;
    param_1[0x1c] = (long)local_170;
    param_1[0x11] = lStack_1c8;
    param_1[0x10] = (long)local_1d0;
    param_1[0x13] = lStack_1b8;
    param_1[0x12] = (long)pppuStack_1c0;
    param_1[0x15] = lStack_1a8;
    param_1[0x14] = (long)local_1b0;
    param_1[0x17] = lStack_198;
    param_1[0x16] = (long)pppuStack_1a0;
    param_1[9] = lStack_208;
    param_1[8] = (long)local_210;
    param_1[0xb] = lStack_1f8;
    param_1[10] = (long)pppuStack_200;
    param_1[0xd] = lStack_1e8;
    param_1[0xc] = (long)local_1f0;
    param_1[0xf] = (long)puStack_1d8;
    param_1[0xe] = (long)pppuStack_1e0;
    param_1[1] = (long)puStack_248;
    *param_1 = (long)local_250;
    param_1[3] = (long)puStack_238;
    param_1[2] = (long)pppuStack_240;
    param_1[5] = (long)puStack_228;
    param_1[4] = (long)local_230;
    param_1[7] = lStack_218;
    param_1[6] = (long)pppuStack_220;
  }
  else {
    FUN_100043f24(param_2);
  }
  return;
}

