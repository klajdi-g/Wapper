// rea decompile_all
// name: FUN_1003097ec
// address: 0x1003097ec
// body: available
// range: 0x1003097ec-0x100309beb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1003097ec(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  URL UVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  Date DVar10;
  long lVar11;
  code *pcVar12;
  code *pcVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  
  uVar14 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar14);
  param_1[1] = param_2[1];
  uVar14 = param_1[2];
  param_1[2] = param_2[2];
  _swift_retain();
  _swift_release(uVar14);
  param_1[3] = param_2[3];
  iVar5 = *(int *)(param_3 + 0x18);
  UVar6 = Foundation::URL::typeMetadataAccessor();
  lVar15 = *(long *)(UVar6.unknown + -8);
  pcVar13 = *(code **)(lVar15 + 0x18);
  (*pcVar13)((long)param_1 + (long)iVar5,(long)param_2 + (long)iVar5,UVar6.unknown);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  *puVar1 = *puVar2;
  uVar14 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar14);
  lVar7 = 0;
  FUN_10040211c();
  (*pcVar13)((long)puVar1 + (long)*(int *)(lVar7 + 0x14),(long)puVar2 + (long)*(int *)(lVar7 + 0x14)
             ,UVar6.unknown);
  lVar16 = (long)*(int *)(lVar7 + 0x18);
  pcVar12 = *(code **)(lVar15 + 0x30);
  lVar11 = (long)puVar1 + lVar16;
  (*pcVar12)(lVar11,1,UVar6.unknown);
  lVar8 = (long)puVar2 + lVar16;
  (*pcVar12)(lVar8,1,UVar6.unknown);
  if ((int)lVar11 == 0) {
    if ((int)lVar8 != 0) {
      (**(code **)(lVar15 + 8))((long)puVar1 + lVar16,UVar6.unknown);
      goto LAB_100309948;
    }
    (*pcVar13)((long)puVar1 + lVar16,(long)puVar2 + lVar16,UVar6.unknown);
  }
  else if ((int)lVar8 == 0) {
    (**(code **)(lVar15 + 0x10))((long)puVar1 + lVar16,(long)puVar2 + lVar16,UVar6.unknown);
    (**(code **)(lVar15 + 0x38))((long)puVar1 + lVar16,0,1,UVar6.unknown);
  }
  else {
LAB_100309948:
    puVar9 = &DAT_100553d90;
    FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
    _memcpy((void *)((long)puVar1 + lVar16),(void *)((long)puVar2 + lVar16),
            *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
  }
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x1c));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x1c));
  *puVar3 = *puVar4;
  uVar14 = puVar3[1];
  puVar3[1] = puVar4[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar14);
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x20)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x20));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x24)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x24));
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x28));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x28));
  uVar14 = *puVar4;
  *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar4 + 1);
  *puVar3 = uVar14;
  lVar16 = (long)*(int *)(lVar7 + 0x2c);
  DVar10 = Foundation::Date::typeMetadataAccessor();
  lVar15 = *(long *)(DVar10.unknown + -8);
  pcVar12 = *(code **)(lVar15 + 0x30);
  lVar11 = (long)puVar1 + lVar16;
  (*pcVar12)(lVar11,1,DVar10.unknown);
  lVar8 = (long)puVar2 + lVar16;
  (*pcVar12)(lVar8,1,DVar10.unknown);
  if ((int)lVar11 == 0) {
    if ((int)lVar8 == 0) {
      (**(code **)(lVar15 + 0x18))((long)puVar1 + lVar16,(long)puVar2 + lVar16,DVar10.unknown);
      goto LAB_100309a80;
    }
    (**(code **)(lVar15 + 8))((long)puVar1 + lVar16,DVar10.unknown);
  }
  else if ((int)lVar8 == 0) {
    (**(code **)(lVar15 + 0x10))((long)puVar1 + lVar16,(long)puVar2 + lVar16,DVar10.unknown);
    (**(code **)(lVar15 + 0x38))((long)puVar1 + lVar16,0,1,DVar10.unknown);
    goto LAB_100309a80;
  }
  puVar9 = &DAT_10054b950;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  _memcpy((void *)((long)puVar1 + lVar16),(void *)((long)puVar2 + lVar16),
          *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
LAB_100309a80:
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x30));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x30));
  uVar14 = *puVar4;
  *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar4 + 1);
  *puVar3 = uVar14;
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x34));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x34));
  *puVar3 = *puVar4;
  uVar14 = puVar3[1];
  puVar3[1] = puVar4[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar14);
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x38));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x38));
  uVar14 = *puVar4;
  *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar4 + 1);
  *puVar3 = uVar14;
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x3c));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x3c));
  *puVar3 = *puVar4;
  uVar14 = puVar3[1];
  puVar3[1] = puVar4[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar14);
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x40)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x40));
  lVar11 = (long)*(int *)(lVar7 + 0x44);
  uVar14 = *(undefined8 *)((long)puVar1 + lVar11);
  *(undefined8 *)((long)puVar1 + lVar11) = *(undefined8 *)((long)puVar2 + lVar11);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar14);
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x48)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x48));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  uVar14 = *puVar1;
  *puVar1 = *param_2;
  _swift_retain();
  _swift_release(uVar14);
  uVar14 = puVar1[1];
  puVar1[1] = param_2[1];
  _swift_retain();
  _swift_release(uVar14);
  uVar14 = puVar1[2];
  puVar1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar14);
  return param_1;
}

