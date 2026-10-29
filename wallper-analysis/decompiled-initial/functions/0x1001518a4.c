// rea decompile_all
// name: FUN_1001518a4
// address: 0x1001518a4
// body: available
// range: 0x1001518a4-0x1001519a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_1001518a4(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  Date DVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    lVar4 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar4;
    *(char *)(param_1 + 2) = (char)param_2[2];
    lVar6 = (long)*(int *)(param_3 + 0x18);
    DVar2 = Foundation::Date::typeMetadataAccessor();
    lVar7 = *(long *)(DVar2.unknown + -8);
    pcVar8 = *(code **)(lVar7 + 0x30);
    _swift_bridgeObjectRetain(lVar4);
    lVar4 = (long)param_2 + lVar6;
    (*pcVar8)(lVar4,1,DVar2.unknown);
    if ((int)lVar4 == 0) {
      (**(code **)(lVar7 + 0x10))((long)param_1 + lVar6,(long)param_2 + lVar6,DVar2.unknown);
      (**(code **)(lVar7 + 0x38))((long)param_1 + lVar6,0,1,DVar2.unknown);
    }
    else {
      puVar3 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)param_1 + lVar6),(void *)((long)param_2 + lVar6),
              *(size_t *)(*(long *)(puVar3 + -8) + 0x40));
    }
  }
  else {
    lVar4 = *param_2;
    *param_1 = lVar4;
    uVar5 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar4 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}

