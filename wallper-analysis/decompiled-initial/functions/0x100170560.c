// rea decompile_all
// name: FUN_100170560
// address: 0x100170560
// body: available
// range: 0x100170560-0x1001706b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_100170560(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  URL UVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  
  uVar4 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar4 >> 0x11 & 1) == 0) {
    lVar7 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar7;
    *(char *)(param_1 + 2) = (char)param_2[2];
    lVar1 = param_2[4];
    param_1[3] = param_2[3];
    param_1[4] = lVar1;
    lVar2 = param_2[6];
    param_1[5] = param_2[5];
    param_1[6] = lVar2;
    param_1[7] = param_2[7];
    lVar9 = (long)*(int *)(param_3 + 0x24);
    UVar5 = Foundation::URL::typeMetadataAccessor();
    lVar10 = *(long *)(UVar5.unknown + -8);
    pcVar11 = *(code **)(lVar10 + 0x30);
    _swift_bridgeObjectRetain(lVar7);
    _swift_bridgeObjectRetain(lVar1);
    _swift_bridgeObjectRetain(lVar2);
    lVar7 = (long)param_2 + lVar9;
    (*pcVar11)(lVar7,1,UVar5.unknown);
    if ((int)lVar7 == 0) {
      (**(code **)(lVar10 + 0x10))((long)param_1 + lVar9,(long)param_2 + lVar9,UVar5.unknown);
      (**(code **)(lVar10 + 0x38))((long)param_1 + lVar9,0,1,UVar5.unknown);
    }
    else {
      puVar6 = &DAT_100553d90;
      FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
      _memcpy((void *)((long)param_1 + lVar9),(void *)((long)param_2 + lVar9),
              *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
    }
    iVar3 = *(int *)(param_3 + 0x2c);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x28)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
    *(undefined1 *)((long)param_1 + (long)iVar3) = *(undefined1 *)((long)param_2 + (long)iVar3);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x30)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  }
  else {
    lVar7 = *param_2;
    *param_1 = lVar7;
    uVar8 = (ulong)uVar4 & 0xff;
    param_1 = (long *)(lVar7 + (uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}

