// rea decompile_all
// name: FUN_1001b74e4
// address: 0x1001b74e4
// body: available
// range: 0x1001b74e4-0x1001b75df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_1001b74e4(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  UUID UVar5;
  long *plVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar4 >> 0x11 & 1) == 0) {
    UVar5 = Foundation::UUID::typeMetadataAccessor();
    lVar9 = *(long *)(UVar5.unknown + -8);
    plVar6 = param_2;
    (**(code **)(lVar9 + 0x30))(param_2,1,UVar5.unknown);
    if ((int)plVar6 == 0) {
      (**(code **)(lVar9 + 0x10))(param_1,param_2,UVar5.unknown);
      (**(code **)(lVar9 + 0x38))(param_1,0,1,UVar5.unknown);
    }
    else {
      puVar7 = &DAT_10054a9c8;
      FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
      _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar7 + -8) + 0x40));
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    _swift_bridgeObjectRetain();
  }
  else {
    lVar9 = *param_2;
    *param_1 = lVar9;
    uVar8 = (ulong)uVar4 & 0xff;
    param_1 = (long *)(lVar9 + (uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}

