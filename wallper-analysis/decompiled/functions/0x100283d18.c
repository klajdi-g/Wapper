// rea decompile_all
// name: FUN_100283d18
// address: 0x100283d18
// body: available
// range: 0x100283d18-0x100283e37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_100283d18(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  URL UVar5;
  Date DVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  uVar4 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar4 >> 0x11 & 1) == 0) {
    UVar5 = Foundation::URL::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar5.unknown + -8) + 0x10))(param_1,param_2,UVar5.unknown);
    lVar3 = (long)*(int *)(param_3 + 0x18);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    *puVar1 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    DVar6 = Foundation::Date::typeMetadataAccessor();
    lVar10 = *(long *)(DVar6.unknown + -8);
    lVar8 = (long)param_2 + lVar3;
    (**(code **)(lVar10 + 0x30))(lVar8,1,DVar6.unknown);
    if ((int)lVar8 == 0) {
      (**(code **)(lVar10 + 0x10))((long)param_1 + lVar3,(long)param_2 + lVar3,DVar6.unknown);
      (**(code **)(lVar10 + 0x38))((long)param_1 + lVar3,0,1,DVar6.unknown);
    }
    else {
      puVar7 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)param_1 + lVar3),(void *)((long)param_2 + lVar3),
              *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
    }
  }
  else {
    lVar8 = *param_2;
    *param_1 = lVar8;
    uVar9 = (ulong)uVar4 & 0xff;
    param_1 = (long *)(lVar8 + (uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}

