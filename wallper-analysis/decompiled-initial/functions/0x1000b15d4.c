// rea decompile_all
// name: thunk_FUN_1000b24d4
// address: 0x1000b15d4
// body: available
// range: 0x1000b15d4-0x1000b15d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

long * thunk_FUN_1000b24d4(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  Date DVar6;
  long lVar7;
  code *pcVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  uVar3 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar3 >> 0x11 & 1) == 0) {
    lVar7 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar7;
    param_1[2] = param_2[2];
    lVar12 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = lVar12;
    lVar11 = param_2[6];
    lVar10 = param_2[7];
    param_1[5] = param_2[5];
    param_1[6] = lVar11;
    param_1[7] = lVar10;
    *(char *)(param_1 + 8) = (char)param_2[8];
    lVar10 = 0;
    FUN_10009e280();
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x2c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x2c));
    *puVar1 = *puVar2;
    lVar5 = 0;
    FUN_10015f8e8();
    iVar4 = *(int *)(lVar5 + 0x14);
    DVar6 = Foundation::Date::typeMetadataAccessor();
    pcVar8 = *(code **)(*(long *)(DVar6.unknown + -8) + 0x10);
    _swift_bridgeObjectRetain(lVar7);
    _swift_bridgeObjectRetain(lVar12);
    _swift_bridgeObjectRetain(lVar11);
    (*pcVar8)((long)puVar1 + (long)iVar4,(long)puVar2 + (long)iVar4,DVar6.unknown);
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar5 + 0x18)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar5 + 0x18));
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x30));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x30));
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    *puVar1 = *puVar2;
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  }
  else {
    lVar7 = *param_2;
    *param_1 = lVar7;
    uVar9 = (ulong)uVar3 & 0xff;
    param_1 = (long *)(lVar7 + (uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}

