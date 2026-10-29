// rea decompile_all
// name: FUN_10030afb8
// address: 0x10030afb8
// body: available
// range: 0x10030afb8-0x10030b10b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void * FUN_10030afb8(void *param_1,void *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  URL UVar5;
  void *pvVar6;
  void *pvVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  code *pcVar11;
  
  UVar5 = Foundation::URL::typeMetadataAccessor();
  lVar10 = *(long *)(UVar5.unknown + -8);
  pcVar11 = *(code **)(lVar10 + 0x30);
  pvVar6 = param_1;
  (*pcVar11)(param_1,1,UVar5.unknown);
  pvVar7 = param_2;
  (*pcVar11)(param_2,1,UVar5.unknown);
  if ((int)pvVar6 == 0) {
    if ((int)pvVar7 == 0) {
      (**(code **)(lVar10 + 0x28))(param_1,param_2,UVar5.unknown);
      goto LAB_10030b088;
    }
    (**(code **)(lVar10 + 8))(param_1,UVar5.unknown);
  }
  else if ((int)pvVar7 == 0) {
    (**(code **)(lVar10 + 0x20))(param_1,param_2,UVar5.unknown);
    (**(code **)(lVar10 + 0x38))(param_1,0,1,UVar5.unknown);
    goto LAB_10030b088;
  }
  puVar8 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
LAB_10030b088:
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  *puVar1 = *puVar2;
  uVar9 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_release(uVar9);
  puVar3 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  puVar4 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  *puVar3 = *puVar4;
  uVar9 = *(undefined8 *)(puVar3 + 8);
  *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(puVar4 + 8);
  _swift_release(uVar9);
  return param_1;
}

