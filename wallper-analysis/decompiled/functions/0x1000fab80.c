// rea decompile_all
// name: FUN_1000fab80
// address: 0x1000fab80
// body: available
// range: 0x1000fab80-0x1000faca7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void * FUN_1000fab80(void *param_1,void *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  URL UVar8;
  void *pvVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  
  UVar8 = Foundation::URL::typeMetadataAccessor();
  lVar13 = *(long *)(UVar8.unknown + -8);
  pvVar9 = param_2;
  (**(code **)(lVar13 + 0x30))(param_2,1,UVar8.unknown);
  if ((int)pvVar9 == 0) {
    (**(code **)(lVar13 + 0x10))(param_1,param_2,UVar8.unknown);
    (**(code **)(lVar13 + 0x38))(param_1,0,1,UVar8.unknown);
  }
  else {
    puVar10 = &DAT_100553d90;
    FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
    _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar10 + -8) + 0x40));
  }
  plVar1 = (long *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  plVar2 = (long *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  if (*plVar2 == 0) {
    lVar13 = *plVar2;
    plVar1[1] = plVar2[1];
    *plVar1 = lVar13;
  }
  else {
    lVar13 = plVar2[1];
    *plVar1 = *plVar2;
    plVar1[1] = lVar13;
    _swift_retain();
  }
  iVar6 = *(int *)(param_3 + 0x1c);
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  uVar12 = puVar3[1];
  uVar11 = *puVar3;
  puVar7 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  puVar7[1] = puVar3[1];
  *puVar7 = uVar11;
  puVar4 = (undefined1 *)((long)param_1 + (long)iVar6);
  puVar5 = (undefined1 *)((long)param_2 + (long)iVar6);
  *puVar4 = *puVar5;
  uVar11 = *(undefined8 *)(puVar5 + 8);
  *(undefined8 *)(puVar4 + 8) = uVar11;
  _swift_retain(uVar12);
  _swift_retain(uVar11);
  return param_1;
}

