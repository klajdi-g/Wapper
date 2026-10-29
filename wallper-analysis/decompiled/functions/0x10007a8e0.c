// rea decompile_all
// name: FUN_10007a8e0
// address: 0x10007a8e0
// body: available
// range: 0x10007a8e0-0x10007aaaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

long * FUN_10007a8e0(undefined8 param_1,long *param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  Date DVar6;
  code *pcVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  
  uVar3 = *(uint *)(*(long *)(param_4 + -8) + 0x50);
  if ((uVar3 >> 0x11 & 1) == 0) {
    lVar11 = param_3[1];
    *param_2 = *param_3;
    param_2[1] = lVar11;
    param_2[2] = param_3[2];
    lVar13 = param_3[3];
    param_2[4] = param_3[4];
    param_2[3] = lVar13;
    lVar10 = param_3[6];
    lVar9 = param_3[7];
    param_2[5] = param_3[5];
    param_2[6] = lVar10;
    param_2[7] = lVar9;
    *(char *)(param_2 + 8) = (char)param_3[8];
    lVar9 = 0;
    FUN_10009e280();
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x2c));
    puVar2 = (undefined8 *)((long)param_3 + (long)*(int *)(lVar9 + 0x2c));
    *puVar1 = *puVar2;
    lVar5 = 0;
    FUN_10015f8e8();
    iVar4 = *(int *)(lVar5 + 0x14);
    DVar6 = Foundation::Date::typeMetadataAccessor();
    pcVar7 = *(code **)(*(long *)(DVar6.unknown + -8) + 0x10);
    _swift_bridgeObjectRetain(lVar11);
    _swift_bridgeObjectRetain(lVar13);
    _swift_bridgeObjectRetain(lVar10);
    (*pcVar7)((long)puVar1 + (long)iVar4,(long)puVar2 + (long)iVar4,DVar6.unknown);
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar5 + 0x18)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar5 + 0x18));
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x30));
    puVar2 = (undefined8 *)((long)param_3 + (long)*(int *)(lVar9 + 0x30));
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    *puVar1 = *puVar2;
    iVar4 = *(int *)(param_4 + 0x18);
    *(undefined2 *)((long)param_2 + (long)*(int *)(param_4 + 0x14)) =
         *(undefined2 *)((long)param_3 + (long)*(int *)(param_4 + 0x14));
    *(undefined1 *)((long)param_2 + (long)iVar4) = *(undefined1 *)((long)param_3 + (long)iVar4);
    iVar4 = *(int *)(param_4 + 0x20);
    *(undefined1 *)((long)param_2 + (long)*(int *)(param_4 + 0x1c)) =
         *(undefined1 *)((long)param_3 + (long)*(int *)(param_4 + 0x1c));
    *(undefined1 *)((long)param_2 + (long)iVar4) = *(undefined1 *)((long)param_3 + (long)iVar4);
    iVar4 = *(int *)(param_4 + 0x28);
    puVar1 = (undefined8 *)((long)param_3 + (long)*(int *)(param_4 + 0x24));
    uVar12 = puVar1[1];
    uVar14 = *puVar1;
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_4 + 0x24));
    puVar2[1] = puVar1[1];
    *puVar2 = uVar14;
    puVar1 = (undefined8 *)((long)param_3 + (long)iVar4);
    lVar11 = puVar1[1];
    param_1 = *puVar1;
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar4);
    puVar2[1] = puVar1[1];
    *puVar2 = param_1;
    _swift_retain(uVar12);
  }
  else {
    lVar11 = *param_3;
    *param_2 = lVar11;
    uVar8 = (ulong)uVar3 & 0xff;
    param_2 = (long *)(lVar11 + (uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff)));
  }
  _swift_retain(param_1,lVar11);
  return param_2;
}

