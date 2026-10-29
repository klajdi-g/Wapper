// rea decompile_all
// name: FUN_1001373e0
// address: 0x1001373e0
// body: available
// range: 0x1001373e0-0x1001374fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001373e0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long lStack_40;
  long local_38;
  long lStack_30;
  undefined *local_28;
  
  puVar3 = &DAT_1005542e8;
  lVar1 = 0x13f;
  FUN_10002eb90(0x13f,&DAT_1005542e8,PTR___type_metadata_for_Swift_String_100523a98);
  if (puVar3 < (undefined *)0x40) {
    local_60 = *(long *)(lVar1 + -8) + 0x40;
    puVar3 = &DAT_1005542f0;
    lVar1 = 0x13f;
    FUN_100125dbc(0x13f,&DAT_1005542f0,&DAT_100553d90,&DAT_10041bf10);
    if (puVar3 < (undefined *)0x40) {
      local_58 = *(long *)(lVar1 + -8) + 0x40;
      puVar4 = &DAT_10054b878;
      lVar1 = 0x13f;
      FUN_10002eb90(0x13f,&DAT_10054b878,PTR___type_metadata_for_Swift_Bool_100523b70);
      if (puVar4 < (undefined8 *)0x40) {
        lVar1 = *(long *)(lVar1 + -8) + 0x40;
        puVar4 = &DAT_1005542f8;
        lVar2 = 0x13f;
        local_50 = lVar1;
        FUN_100125dbc(0x13f,&DAT_1005542f8,&DAT_100549db0,&DAT_100419ed0);
        if (puVar4 < (undefined8 *)0x40) {
          local_48 = *(long *)(lVar2 + -8) + 0x40;
          local_28 = &DAT_100426ed8;
          lStack_40 = lVar1;
          local_38 = lVar1;
          lStack_30 = local_48;
          _swift_updateClassMetadata2(param_1,0x100,8,&local_60,param_1 + 0x50);
        }
      }
    }
  }
  return;
}

