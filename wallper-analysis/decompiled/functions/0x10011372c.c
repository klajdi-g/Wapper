// rea decompile_all
// name: FUN_10011372c
// address: 0x10011372c
// body: available
// range: 0x10011372c-0x1001138bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 * FUN_10011372c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  URL UVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  undefined8 uVar16;
  
  uVar5 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  lVar13 = (long)*(int *)(param_3 + 0x14);
  UVar8 = Foundation::URL::typeMetadataAccessor();
  lVar14 = *(long *)(UVar8.unknown + -8);
  pcVar15 = *(code **)(lVar14 + 0x30);
  _swift_bridgeObjectRetain(uVar5);
  lVar9 = (long)param_2 + lVar13;
  (*pcVar15)(lVar9,1,UVar8.unknown);
  if ((int)lVar9 == 0) {
    (**(code **)(lVar14 + 0x10))((long)param_1 + lVar13,(long)param_2 + lVar13,UVar8.unknown);
    (**(code **)(lVar14 + 0x38))((long)param_1 + lVar13,0,1,UVar8.unknown);
  }
  else {
    puVar10 = &DAT_100553d90;
    FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
    _memcpy((void *)((long)param_1 + lVar13),(void *)((long)param_2 + lVar13),
            *(size_t *)(*(long *)(puVar10 + -8) + 0x40));
  }
  iVar7 = *(int *)(param_3 + 0x1c);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar7);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar7);
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  iVar7 = *(int *)(param_3 + 0x24);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  puVar1 = (undefined8 *)((long)param_2 + (long)iVar7);
  uVar11 = puVar1[1];
  uVar16 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)iVar7);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar16;
  iVar7 = *(int *)(param_3 + 0x2c);
  puVar3 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar4 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  *puVar3 = *puVar4;
  uVar12 = *(undefined8 *)(puVar4 + 8);
  *(undefined8 *)(puVar3 + 8) = uVar12;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar7);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar7);
  uVar5 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar5;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  uVar6 = param_2[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar6;
  _swift_retain();
  _swift_retain(uVar16,uVar11);
  _swift_retain(uVar12);
  _swift_retain(uVar5);
  _swift_retain(uVar6);
  return param_1;
}

