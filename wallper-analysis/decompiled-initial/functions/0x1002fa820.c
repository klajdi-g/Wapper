// rea decompile_all
// name: FUN_1002fa820
// address: 0x1002fa820
// body: available
// range: 0x1002fa820-0x1002fa983 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

long * FUN_1002fa820(undefined8 param_1,long *param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  URL UVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  code *pcVar12;
  
  uVar5 = *(uint *)(*(long *)(param_4 + -8) + 0x50);
  if ((uVar5 >> 0x11 & 1) == 0) {
    lVar10 = param_3[1];
    *param_2 = *param_3;
    param_2[1] = lVar10;
    lVar3 = param_3[3];
    param_2[2] = param_3[2];
    param_2[3] = lVar3;
    lVar7 = 0;
    FUN_1002f58e8();
    iVar6 = *(int *)(lVar7 + 0x18);
    UVar8 = Foundation::URL::typeMetadataAccessor();
    pcVar12 = *(code **)(*(long *)(UVar8.unknown + -8) + 0x10);
    _swift_bridgeObjectRetain(lVar10);
    _swift_bridgeObjectRetain(lVar3);
    (*pcVar12)((long)param_2 + (long)iVar6,(long)param_3 + (long)iVar6,UVar8.unknown);
    (*pcVar12)((long)param_2 + (long)*(int *)(lVar7 + 0x1c),
               (long)param_3 + (long)*(int *)(lVar7 + 0x1c),UVar8.unknown);
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x20));
    puVar2 = (undefined8 *)((long)param_3 + (long)*(int *)(lVar7 + 0x20));
    uVar4 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar4;
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x24));
    puVar2 = (undefined8 *)((long)param_3 + (long)*(int *)(lVar7 + 0x24));
    uVar4 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar4;
    *(undefined1 *)((long)param_2 + (long)*(int *)(lVar7 + 0x28)) =
         *(undefined1 *)((long)param_3 + (long)*(int *)(lVar7 + 0x28));
    iVar6 = *(int *)(param_4 + 0x18);
    puVar1 = (undefined8 *)((long)param_3 + (long)*(int *)(param_4 + 0x14));
    uVar11 = *puVar1;
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_4 + 0x14));
    puVar2[1] = puVar1[1];
    *puVar2 = uVar11;
    uVar11 = puVar1[1];
    puVar1 = (undefined8 *)((long)param_3 + (long)iVar6);
    lVar10 = puVar1[1];
    param_1 = *puVar1;
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar6);
    puVar2[1] = puVar1[1];
    *puVar2 = param_1;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar4);
    _swift_retain(uVar11);
  }
  else {
    lVar10 = *param_3;
    *param_2 = lVar10;
    uVar9 = (ulong)uVar5 & 0xff;
    param_2 = (long *)(lVar10 + (uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff)));
  }
  _swift_retain(param_1,lVar10);
  return param_2;
}

