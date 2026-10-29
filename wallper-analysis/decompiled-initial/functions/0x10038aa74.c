// rea decompile_all
// name: FUN_10038aa74
// address: 0x10038aa74
// body: available
// range: 0x10038aa74-0x10038ae73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_10038aa74(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  long lVar6;
  URL UVar7;
  long lVar8;
  undefined *puVar9;
  Date DVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  code *pcVar17;
  undefined8 uVar18;
  
  *param_1 = *param_2;
  uVar12 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar12);
  lVar6 = 0;
  FUN_10040211c();
  iVar5 = *(int *)(lVar6 + 0x14);
  UVar7 = Foundation::URL::typeMetadataAccessor();
  lVar15 = *(long *)(UVar7.unknown + -8);
  pcVar16 = *(code **)(lVar15 + 0x18);
  (*pcVar16)((long)param_1 + (long)iVar5,(long)param_2 + (long)iVar5,UVar7.unknown);
  lVar14 = (long)*(int *)(lVar6 + 0x18);
  pcVar17 = *(code **)(lVar15 + 0x30);
  lVar11 = (long)param_1 + lVar14;
  (*pcVar17)(lVar11,1,UVar7.unknown);
  lVar8 = (long)param_2 + lVar14;
  (*pcVar17)(lVar8,1,UVar7.unknown);
  if ((int)lVar11 == 0) {
    if ((int)lVar8 != 0) {
      (**(code **)(lVar15 + 8))((long)param_1 + lVar14,UVar7.unknown);
      goto LAB_10038ab68;
    }
    (*pcVar16)((long)param_1 + lVar14,(long)param_2 + lVar14,UVar7.unknown);
  }
  else if ((int)lVar8 == 0) {
    (**(code **)(lVar15 + 0x10))((long)param_1 + lVar14,(long)param_2 + lVar14,UVar7.unknown);
    (**(code **)(lVar15 + 0x38))((long)param_1 + lVar14,0,1,UVar7.unknown);
  }
  else {
LAB_10038ab68:
    puVar9 = &DAT_100553d90;
    FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
    _memcpy((void *)((long)param_1 + lVar14),(void *)((long)param_2 + lVar14),
            *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x1c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x1c));
  *puVar1 = *puVar2;
  uVar12 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar12);
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x20)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x20));
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar6 + 0x24)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar6 + 0x24));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x28));
  uVar12 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  *puVar1 = uVar12;
  lVar14 = (long)*(int *)(lVar6 + 0x2c);
  DVar10 = Foundation::Date::typeMetadataAccessor();
  lVar15 = *(long *)(DVar10.unknown + -8);
  pcVar16 = *(code **)(lVar15 + 0x30);
  lVar11 = (long)param_1 + lVar14;
  (*pcVar16)(lVar11,1,DVar10.unknown);
  lVar8 = (long)param_2 + lVar14;
  (*pcVar16)(lVar8,1,DVar10.unknown);
  if ((int)lVar11 == 0) {
    if ((int)lVar8 == 0) {
      (**(code **)(lVar15 + 0x18))((long)param_1 + lVar14,(long)param_2 + lVar14,DVar10.unknown);
      goto LAB_10038aca0;
    }
    (**(code **)(lVar15 + 8))((long)param_1 + lVar14,DVar10.unknown);
  }
  else if ((int)lVar8 == 0) {
    (**(code **)(lVar15 + 0x10))((long)param_1 + lVar14,(long)param_2 + lVar14,DVar10.unknown);
    (**(code **)(lVar15 + 0x38))((long)param_1 + lVar14,0,1,DVar10.unknown);
    goto LAB_10038aca0;
  }
  puVar9 = &DAT_10054b950;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  _memcpy((void *)((long)param_1 + lVar14),(void *)((long)param_2 + lVar14),
          *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
LAB_10038aca0:
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x30));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x30));
  uVar12 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  *puVar1 = uVar12;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x34));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x34));
  *puVar1 = *puVar2;
  uVar12 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar12);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x38));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x38));
  uVar12 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  *puVar1 = uVar12;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x3c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x3c));
  *puVar1 = *puVar2;
  uVar12 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar12);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar6 + 0x40)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar6 + 0x40));
  lVar11 = (long)*(int *)(lVar6 + 0x44);
  uVar12 = *(undefined8 *)((long)param_1 + lVar11);
  *(undefined8 *)((long)param_1 + lVar11) = *(undefined8 *)((long)param_2 + lVar11);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar12);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar6 + 0x48)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar6 + 0x48));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  *puVar1 = *puVar2;
  uVar12 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar12);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  uVar13 = puVar1[1];
  uVar12 = puVar2[1];
  uVar18 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar18;
  _swift_retain(uVar12);
  _swift_release(uVar13);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  uVar12 = *puVar1;
  *puVar1 = *puVar2;
  _swift_retain();
  _swift_release(uVar12);
  puVar1[1] = puVar2[1];
  puVar3 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar4 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  *puVar3 = *puVar4;
  uVar12 = *(undefined8 *)(puVar3 + 8);
  *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(puVar4 + 8);
  _swift_retain();
  _swift_release(uVar12);
  return param_1;
}

