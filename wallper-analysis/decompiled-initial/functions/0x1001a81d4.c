// rea decompile_all
// name: FUN_1001a81d4
// address: 0x1001a81d4
// body: available
// range: 0x1001a81d4-0x1001a854f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001a81d4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long local_1f0;
  undefined *puStack_1e8;
  undefined *local_1e0;
  long local_1d8;
  long local_1d0;
  long lStack_1c8;
  long local_1c0;
  long local_1b8;
  long local_1b0;
  long local_1a8;
  long lStack_1a0;
  long local_198;
  long local_190;
  long lStack_188;
  long local_180;
  long local_178;
  undefined *puStack_170;
  undefined *local_168;
  long local_160;
  long local_158;
  undefined *puStack_150;
  undefined *local_148;
  undefined *puStack_140;
  undefined *local_138;
  long local_130;
  undefined *puStack_128;
  undefined *local_120;
  undefined *puStack_118;
  undefined *local_110;
  undefined *puStack_108;
  undefined *local_100;
  undefined *puStack_f8;
  undefined *local_f0;
  undefined *puStack_e8;
  undefined *local_e0;
  undefined *puStack_d8;
  undefined *local_d0;
  undefined *puStack_c8;
  undefined *local_c0;
  undefined *puStack_b8;
  undefined *local_b0;
  undefined *puStack_a8;
  long local_a0;
  undefined *puStack_98;
  undefined *local_90;
  undefined *puStack_88;
  undefined *local_80;
  long lStack_78;
  undefined *local_70;
  undefined *puStack_68;
  undefined *local_60;
  undefined *puStack_58;
  
  puVar5 = &DAT_10054b878;
  lVar2 = 0x13f;
  FUN_10002eb90(0x13f,&DAT_10054b878,PTR___type_metadata_for_Swift_Bool_100523b70);
  puVar1 = PTR___value_witness_table_for_Builtin_BridgeObject_100523960;
  if (puVar5 < (undefined8 *)0x40) {
    lVar2 = *(long *)(lVar2 + -8) + 0x40;
    puStack_1e8 = PTR___value_witness_table_for_Builtin_BridgeObject_100523960 + 0x40;
    local_1e0 = &DAT_100429978;
    puVar5 = &DAT_100558980;
    lVar3 = 0x13f;
    local_1f0 = lVar2;
    FUN_100125dbc(0x13f,&DAT_100558980,&DAT_100553ba8,&DAT_100426bc0);
    if (puVar5 < (undefined8 *)0x40) {
      local_1d8 = *(long *)(lVar3 + -8) + 0x40;
      puVar5 = &DAT_100555b38;
      lVar3 = 0x13f;
      FUN_100125dbc(0x13f,&DAT_100555b38,&DAT_100555b40,&DAT_100429998);
      if (puVar5 < (undefined8 *)0x40) {
        local_1d0 = *(long *)(lVar3 + -8) + 0x40;
        puVar6 = &DAT_100555b48;
        lVar3 = 0x13f;
        lStack_1c8 = lVar2;
        local_1c0 = lVar2;
        FUN_100125dbc(0x13f,&DAT_100555b48,&DAT_10054bd30,&DAT_10041d460);
        if (puVar6 < (undefined *)0x40) {
          local_1b8 = *(long *)(lVar3 + -8) + 0x40;
          puVar5 = &DAT_100558990;
          lVar3 = 0x13f;
          FUN_10002eb90(0x13f,&DAT_100558990,PTR___type_metadata_for_Swift_Int_100523bd8);
          if (puVar5 < (undefined8 *)0x40) {
            local_1b0 = *(long *)(lVar3 + -8) + 0x40;
            puVar5 = &DAT_1005542f8;
            lVar3 = 0x13f;
            FUN_100125dbc(0x13f,&DAT_1005542f8,&DAT_100549db0,&DAT_100419ed0);
            if (puVar5 < (undefined8 *)0x40) {
              lVar3 = *(long *)(lVar3 + -8) + 0x40;
              puVar6 = &DAT_100555b50;
              lVar4 = 0x13f;
              local_1a8 = lVar3;
              lStack_1a0 = lVar3;
              local_198 = lVar3;
              FUN_10002eb90(0x13f,&DAT_100555b50,&DAT_100530410);
              if (puVar6 < (undefined *)0x40) {
                local_190 = *(long *)(lVar4 + -8) + 0x40;
                puVar6 = &DAT_100555b58;
                lVar4 = 0x13f;
                lStack_188 = lVar2;
                FUN_100125dbc(0x13f,&DAT_100555b58,&DAT_1005553f0,&DAT_1004299a0);
                if (puVar6 < (undefined *)0x40) {
                  local_180 = *(long *)(lVar4 + -8) + 0x40;
                  puVar6 = &DAT_100555b60;
                  lVar2 = 0x13f;
                  FUN_1001a8550(0x13f,&DAT_100555b60,FUN_10015f8e8,
                                PTR_typeMetadataAccessor_1005214d0);
                  if (puVar6 < (undefined *)0x40) {
                    local_178 = *(long *)(lVar2 + -8) + 0x40;
                    puStack_170 = &DAT_100429978;
                    local_168 = &DAT_100429978;
                    puVar6 = &DAT_100555b68;
                    lVar2 = 0x13f;
                    FUN_100125dbc(0x13f,&DAT_100555b68,&DAT_100555b70,&DAT_1004299a8);
                    if (puVar6 < (undefined *)0x40) {
                      local_160 = *(long *)(lVar2 + -8) + 0x40;
                      puVar6 = &DAT_100555b78;
                      lVar2 = 0x13f;
                      FUN_100125dbc(0x13f,&DAT_100555b78,&DAT_100555b80,&DAT_1004299b0);
                      if (puVar6 < (undefined *)0x40) {
                        local_158 = *(long *)(lVar2 + -8) + 0x40;
                        puVar6 = puVar1 + 0x40;
                        local_148 = &DAT_1004299b8;
                        local_138 = &DAT_1004299b8;
                        puVar5 = &DAT_10054ea28;
                        lVar2 = 0x13f;
                        puStack_150 = puVar6;
                        puStack_140 = puVar6;
                        FUN_1001a8550(0x13f,&DAT_10054ea28,PTR_typeMetadataAccessor_100520a18,
                                      PTR_typeMetadataAccessor_100523c48);
                        if (puVar5 < (undefined8 *)0x40) {
                          local_130 = *(long *)(lVar2 + -8) + 0x40;
                          puStack_128 = &DAT_1004299b8;
                          puStack_118 = &DAT_1004299d0;
                          local_110 = &DAT_1004299d0;
                          puStack_108 = &DAT_1004299b8;
                          local_100 = PTR___value_witness_table_for_Builtin_Int64_100523970 + 0x40;
                          puStack_f8 = &DAT_1004299b8;
                          local_f0 = &DAT_1004299b8;
                          puStack_e8 = &DAT_1004299d0;
                          local_e0 = &DAT_1004299d0;
                          puStack_c8 = &DAT_100429978;
                          local_c0 = &DAT_1004299b8;
                          puStack_b8 = &DAT_100429978;
                          local_b0 = &DAT_1004299d0;
                          puStack_a8 = &DAT_1004299d0;
                          puVar7 = &DAT_100555b88;
                          lVar2 = 0x13f;
                          local_120 = puVar6;
                          puStack_d8 = puVar6;
                          local_d0 = puVar6;
                          FUN_1001a8550(0x13f,&DAT_100555b88,FUN_10015f8e8,
                                        PTR_typeMetadataAccessor_100523c48);
                          if (puVar7 < (undefined *)0x40) {
                            local_a0 = *(long *)(lVar2 + -8) + 0x40;
                            puStack_98 = &DAT_100429978;
                            puStack_88 = puVar1 + 0x40;
                            local_90 = &DAT_1004299d0;
                            local_80 = &DAT_100429978;
                            puStack_68 = &DAT_1004299e8;
                            local_60 = &DAT_1004299e8;
                            puStack_58 = &DAT_100429978;
                            lStack_78 = lVar3;
                            local_70 = puStack_88;
                            _swift_updateClassMetadata2
                                      (param_1,0x100,0x34,&local_1f0,param_1 + 0x50);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}

