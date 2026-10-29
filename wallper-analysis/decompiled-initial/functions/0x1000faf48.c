// rea decompile_all
// name: FUN_1000faf48
// address: 0x1000faf48
// body: available
// range: 0x1000faf48-0x1000fb0eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void * FUN_1000faf48(void *param_1,void *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  URL UVar7;
  void *pvVar8;
  void *pvVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  
  UVar7 = Foundation::URL::typeMetadataAccessor();
  lVar14 = *(long *)(UVar7.unknown + -8);
  pcVar15 = *(code **)(lVar14 + 0x30);
  pvVar8 = param_1;
  (*pcVar15)(param_1,1,UVar7.unknown);
  pvVar9 = param_2;
  (*pcVar15)(param_2,1,UVar7.unknown);
  if ((int)pvVar8 == 0) {
    if ((int)pvVar9 != 0) {
      (**(code **)(lVar14 + 8))(param_1,UVar7.unknown);
      goto LAB_1000faff0;
    }
    (**(code **)(lVar14 + 0x28))(param_1,param_2,UVar7.unknown);
  }
  else if ((int)pvVar9 == 0) {
    (**(code **)(lVar14 + 0x20))(param_1,param_2,UVar7.unknown);
    (**(code **)(lVar14 + 0x38))(param_1,0,1,UVar7.unknown);
  }
  else {
LAB_1000faff0:
    puVar10 = &DAT_100553d90;
    FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
    _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar10 + -8) + 0x40));
  }
  plVar1 = (long *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  plVar2 = (long *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  lVar14 = *plVar2;
  if (*plVar1 == 0) {
    if (lVar14 != 0) {
      lVar11 = plVar2[1];
      *plVar1 = lVar14;
      plVar1[1] = lVar11;
      goto LAB_1000fb068;
    }
  }
  else {
    if (lVar14 != 0) {
      lVar13 = plVar2[1];
      lVar11 = plVar1[1];
      *plVar1 = lVar14;
      plVar1[1] = lVar13;
      _swift_release(lVar11);
      goto LAB_1000fb068;
    }
    _swift_release(plVar1[1]);
  }
  lVar14 = *plVar2;
  plVar1[1] = plVar2[1];
  *plVar1 = lVar14;
LAB_1000fb068:
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  *puVar3 = *puVar4;
  uVar12 = puVar3[1];
  puVar3[1] = puVar4[1];
  _swift_release(uVar12);
  puVar5 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar6 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  *puVar5 = *puVar6;
  uVar12 = *(undefined8 *)(puVar5 + 8);
  *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(puVar6 + 8);
  _swift_release(uVar12);
  return param_1;
}

