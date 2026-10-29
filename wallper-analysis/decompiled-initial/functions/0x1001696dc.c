// rea decompile_all
// name: FUN_1001696dc
// address: 0x1001696dc
// body: available
// range: 0x1001696dc-0x10016974b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001696dc(undefined8 *param_1)

{
  long unaff_x21;
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  FUN_10016bc54(&local_110);
  if (unaff_x21 == 0) {
    param_1[0x19] = uStack_48;
    param_1[0x18] = local_50;
    param_1[0x1b] = uStack_38;
    param_1[0x1a] = uStack_40;
    param_1[0x1d] = uStack_28;
    param_1[0x1c] = local_30;
    param_1[0x11] = uStack_88;
    param_1[0x10] = local_90;
    param_1[0x13] = uStack_78;
    param_1[0x12] = uStack_80;
    param_1[0x15] = uStack_68;
    param_1[0x14] = local_70;
    param_1[0x17] = uStack_58;
    param_1[0x16] = uStack_60;
    param_1[9] = uStack_c8;
    param_1[8] = local_d0;
    param_1[0xb] = uStack_b8;
    param_1[10] = uStack_c0;
    param_1[0xd] = uStack_a8;
    param_1[0xc] = local_b0;
    param_1[0xf] = uStack_98;
    param_1[0xe] = uStack_a0;
    param_1[1] = uStack_108;
    *param_1 = local_110;
    param_1[3] = uStack_f8;
    param_1[2] = uStack_100;
    param_1[5] = uStack_e8;
    param_1[4] = local_f0;
    param_1[7] = uStack_d8;
    param_1[6] = uStack_e0;
  }
  return;
}

