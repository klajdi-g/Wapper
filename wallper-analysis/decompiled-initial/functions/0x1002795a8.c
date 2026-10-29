// rea decompile_all
// name: FUN_1002795a8
// address: 0x1002795a8
// body: available
// range: 0x1002795a8-0x100279743 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002795a8(long param_1)

{
  long lVar1;
  URL UVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long local_98;
  long lStack_90;
  long local_88;
  undefined *puStack_80;
  undefined *local_78;
  long local_70;
  long local_68;
  long local_60;
  long lStack_58;
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  long local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  puVar3 = &DAT_10054b870;
  lVar1 = 0x13f;
  FUN_100125dbc(0x13f,&DAT_10054b870,&DAT_100558960,&DAT_10042b290);
  if (puVar3 < (undefined8 *)0x40) {
    local_c0 = *(long *)(lVar1 + -8) + 0x40;
    puVar3 = &DAT_10054b878;
    lVar1 = 0x13f;
    lStack_b8 = local_c0;
    local_b0 = local_c0;
    lStack_a8 = local_c0;
    local_a0 = local_c0;
    FUN_10002eb90(0x13f,&DAT_10054b878,PTR___type_metadata_for_Swift_Bool_100523b70);
    if (puVar3 < (undefined8 *)0x40) {
      local_98 = *(long *)(lVar1 + -8) + 0x40;
      puStack_80 = &DAT_10042d0e0;
      local_78 = &DAT_10042d0e0;
      puVar4 = &DAT_100558970;
      lVar1 = 0x13f;
      lStack_90 = local_98;
      local_88 = local_98;
      FUN_100125dbc(0x13f,&DAT_100558970,&DAT_100558978,&DAT_10042d0f8);
      if (puVar4 < (undefined *)0x40) {
        local_70 = *(long *)(lVar1 + -8) + 0x40;
        puVar3 = &DAT_100558980;
        lVar1 = 0x13f;
        FUN_100125dbc(0x13f,&DAT_100558980,&DAT_100553ba8,&DAT_100426bc0);
        if (puVar3 < (undefined8 *)0x40) {
          local_68 = *(long *)(lVar1 + -8) + 0x40;
          puVar3 = &DAT_100558990;
          lVar1 = 0x13f;
          FUN_10002eb90(0x13f,&DAT_100558990,PTR___type_metadata_for_Swift_Int_100523bd8);
          if (puVar3 < (undefined8 *)0x40) {
            local_60 = *(long *)(lVar1 + -8) + 0x40;
            local_50 = PTR___value_witness_table_for_Builtin_BridgeObject_100523960 + 0x40;
            lStack_58 = local_60;
            puStack_48 = local_50;
            local_40 = local_50;
            UVar2 = Foundation::URL::typeMetadataAccessor();
            if (puVar3 < (undefined8 *)0x40) {
              local_38 = *(long *)(UVar2.unknown + -8) + 0x40;
              puStack_30 = &DAT_10042d108;
              local_28 = &DAT_10042d120;
              _swift_updateClassMetadata2(param_1,0x100,0x14,&local_c0,param_1 + 0x50);
            }
          }
        }
      }
    }
  }
  return;
}

