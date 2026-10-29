// rea decompile_all
// name: FUN_1000fa994
// address: 0x1000fa994
// body: available
// range: 0x1000fa994-0x1000faae3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

long * FUN_1000fa994(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  URL UVar8;
  long *plVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  
  uVar6 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar6 >> 0x11 & 1) == 0) {
    UVar8 = Foundation::URL::typeMetadataAccessor();
    lVar13 = *(long *)(UVar8.unknown + -8);
    plVar9 = param_2;
    (**(code **)(lVar13 + 0x30))(param_2,1,UVar8.unknown);
    if ((int)plVar9 == 0) {
      (**(code **)(lVar13 + 0x10))(param_1,param_2,UVar8.unknown);
      (**(code **)(lVar13 + 0x38))(param_1,0,1,UVar8.unknown);
    }
    else {
      puVar10 = &DAT_100553d90;
      FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
      _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar10 + -8) + 0x40));
    }
    plVar9 = (long *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    plVar1 = (long *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    if (*plVar1 == 0) {
      lVar13 = *plVar1;
      plVar9[1] = plVar1[1];
      *plVar9 = lVar13;
    }
    else {
      lVar13 = plVar1[1];
      *plVar9 = *plVar1;
      plVar9[1] = lVar13;
      _swift_retain();
    }
    iVar5 = *(int *)(param_3 + 0x1c);
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
    uVar12 = puVar2[1];
    uVar14 = *puVar2;
    puVar7 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
    puVar7[1] = puVar2[1];
    *puVar7 = uVar14;
    puVar3 = (undefined1 *)((long)param_1 + (long)iVar5);
    puVar4 = (undefined1 *)((long)param_2 + (long)iVar5);
    *puVar3 = *puVar4;
    lVar13 = *(long *)(puVar4 + 8);
    *(long *)(puVar3 + 8) = lVar13;
    _swift_retain(uVar12);
  }
  else {
    lVar13 = *param_2;
    *param_1 = lVar13;
    uVar11 = (ulong)uVar6 & 0xff;
    param_1 = (long *)(lVar13 + (uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff)));
  }
  _swift_retain(lVar13);
  return param_1;
}

