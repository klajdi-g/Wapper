// rea decompile_all
// name: FUN_10030ac84
// address: 0x10030ac84
// body: available
// range: 0x10030ac84-0x10030ad7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void * FUN_10030ac84(void *param_1,void *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  URL UVar6;
  void *pvVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  
  UVar6 = Foundation::URL::typeMetadataAccessor();
  lVar11 = *(long *)(UVar6.unknown + -8);
  pvVar7 = param_2;
  (**(code **)(lVar11 + 0x30))(param_2,1,UVar6.unknown);
  if ((int)pvVar7 == 0) {
    (**(code **)(lVar11 + 0x10))(param_1,param_2,UVar6.unknown);
    (**(code **)(lVar11 + 0x38))(param_1,0,1,UVar6.unknown);
  }
  else {
    puVar8 = &DAT_100553d90;
    FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
    _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
  }
  iVar4 = *(int *)(param_3 + 0x18);
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  uVar10 = puVar1[1];
  uVar9 = *puVar1;
  puVar5 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar5[1] = puVar1[1];
  *puVar5 = uVar9;
  puVar2 = (undefined1 *)((long)param_1 + (long)iVar4);
  puVar3 = (undefined1 *)((long)param_2 + (long)iVar4);
  *puVar2 = *puVar3;
  uVar9 = *(undefined8 *)(puVar3 + 8);
  *(undefined8 *)(puVar2 + 8) = uVar9;
  _swift_retain(uVar10);
  _swift_retain(uVar9);
  return param_1;
}

