// rea decompile_all
// name: FUN_10014ecac
// address: 0x10014ecac
// body: available
// range: 0x10014ecac-0x10014ef2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010014ee0c) */
/* WARNING: Removing unreachable block (ram,0x00010014ee10) */
/* WARNING: Removing unreachable block (ram,0x00010014ed84) */

void FUN_10014ecac(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  char **ppcVar2;
  undefined *puVar3;
  long extraout_x8;
  long unaff_x21;
  long lVar4;
  undefined1 auStack_1c0 [8];
  undefined1 auStack_1b8 [88];
  char *local_160;
  void *pvStack_158;
  undefined8 uStack_150;
  char **ppcStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 local_110;
  undefined1 local_101;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  String local_c8;
  undefined1 local_b8;
  undefined1 uStack_b7;
  undefined6 uStack_b6;
  char **ppcStack_b0;
  undefined1 local_a8;
  undefined7 uStack_a7;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  
  puVar1 = &DAT_100554c88;
  FUN_100002f94(&DAT_100554c88,&DAT_100428340);
  lVar4 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100007bd0(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_1001507a0();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_160 = (char *)((ulong)local_160 & 0xffffffffffffff00);
    local_c8 = Swift::KeyedDecodingContainer::_decode(&local_160,puVar1);
    local_160._0_1_ = 1;
    local_b8 = Swift::KeyedDecodingContainer::_decode(&local_160,puVar1);
    local_160._0_1_ = 2;
    uStack_b7 = Swift::KeyedDecodingContainer::_decode(&local_160,puVar1);
    local_160._0_1_ = 3;
    ppcVar2 = &local_160;
    puVar3 = puVar1;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    local_a8 = SUB81(puVar3,0);
    local_101 = 4;
    ppcStack_b0 = ppcVar2;
    FUN_1001501dc();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_100,&DAT_10052e6e0,&local_101,puVar1,&DAT_10052e6e0,ppcVar2);
    (**(code **)(lVar4 + 8))(auStack_1c0 + -extraout_x8,puVar1);
    uStack_98 = uStack_f8;
    uStack_a0 = local_100;
    local_88 = uStack_e8;
    uStack_90 = uStack_f0;
    uStack_80 = local_e0;
    local_78 = local_d8;
    local_110 = local_d8;
    uStack_150 = CONCAT62(uStack_b6,CONCAT11(uStack_b7,local_b8));
    pvStack_158 = local_c8.bridgeObject;
    local_160 = local_c8.str;
    ppcStack_148 = ppcStack_b0;
    local_140 = CONCAT71(uStack_a7,local_a8);
    uStack_138 = local_100;
    uStack_128 = uStack_f0;
    local_130 = uStack_f8;
    uStack_118 = local_e0;
    uStack_120 = uStack_e8;
    FUN_1001507e0(&local_160,auStack_1b8);
    FUN_100043f24(param_2);
    FUN_10015012c(&local_c8);
    param_1[5] = uStack_138;
    param_1[4] = local_140;
    param_1[7] = uStack_128;
    param_1[6] = local_130;
    param_1[9] = uStack_118;
    param_1[8] = uStack_120;
    *(undefined1 *)(param_1 + 10) = local_110;
    param_1[1] = pvStack_158;
    *param_1 = local_160;
    param_1[3] = ppcStack_148;
    param_1[2] = uStack_150;
  }
  else {
    FUN_100043f24(param_2);
  }
  return;
}

