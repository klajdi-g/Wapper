// rea decompile_all
// name: FUN_1003973a8
// address: 0x1003973a8
// body: available
// range: 0x1003973a8-0x100397843 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1003973a8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  URL UVar10;
  long lVar11;
  undefined *puVar12;
  Date DVar13;
  undefined8 uVar14;
  UUID UVar15;
  long lVar16;
  code *pcVar17;
  code *pcVar18;
  long lVar19;
  long lVar20;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  uVar14 = puVar2[1];
  uVar8 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar14;
  _swift_bridgeObjectRelease(uVar8);
  lVar9 = 0;
  FUN_10040211c();
  iVar7 = *(int *)(lVar9 + 0x14);
  UVar10 = Foundation::URL::typeMetadataAccessor();
  lVar20 = *(long *)(UVar10.unknown + -8);
  pcVar18 = *(code **)(lVar20 + 0x28);
  (*pcVar18)((long)puVar1 + (long)iVar7,(long)puVar2 + (long)iVar7,UVar10.unknown);
  lVar19 = (long)*(int *)(lVar9 + 0x18);
  pcVar17 = *(code **)(lVar20 + 0x30);
  lVar16 = (long)puVar1 + lVar19;
  (*pcVar17)(lVar16,1,UVar10.unknown);
  lVar11 = (long)puVar2 + lVar19;
  (*pcVar17)(lVar11,1,UVar10.unknown);
  if ((int)lVar16 == 0) {
    if ((int)lVar11 != 0) {
      (**(code **)(lVar20 + 8))((long)puVar1 + lVar19,UVar10.unknown);
      goto LAB_1003974a0;
    }
    (*pcVar18)((long)puVar1 + lVar19,(long)puVar2 + lVar19,UVar10.unknown);
  }
  else if ((int)lVar11 == 0) {
    (**(code **)(lVar20 + 0x20))((long)puVar1 + lVar19,(long)puVar2 + lVar19,UVar10.unknown);
    (**(code **)(lVar20 + 0x38))((long)puVar1 + lVar19,0,1,UVar10.unknown);
  }
  else {
LAB_1003974a0:
    puVar12 = &DAT_100553d90;
    FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
    _memcpy((void *)((long)puVar1 + lVar19),(void *)((long)puVar2 + lVar19),
            *(size_t *)(*(long *)(puVar12 + -8) + 0x40));
  }
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x1c));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x1c));
  uVar14 = puVar4[1];
  uVar8 = puVar3[1];
  *puVar3 = *puVar4;
  puVar3[1] = uVar14;
  _swift_bridgeObjectRelease(uVar8);
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x20)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x20));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x24)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x24));
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x28));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x28));
  *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar4 + 1);
  *puVar3 = *puVar4;
  lVar20 = (long)*(int *)(lVar9 + 0x2c);
  DVar13 = Foundation::Date::typeMetadataAccessor();
  lVar19 = *(long *)(DVar13.unknown + -8);
  pcVar17 = *(code **)(lVar19 + 0x30);
  lVar16 = (long)puVar1 + lVar20;
  (*pcVar17)(lVar16,1,DVar13.unknown);
  lVar11 = (long)puVar2 + lVar20;
  (*pcVar17)(lVar11,1,DVar13.unknown);
  if ((int)lVar16 == 0) {
    if ((int)lVar11 == 0) {
      (**(code **)(lVar19 + 0x28))((long)puVar1 + lVar20,(long)puVar2 + lVar20,DVar13.unknown);
      goto LAB_1003975c8;
    }
    (**(code **)(lVar19 + 8))((long)puVar1 + lVar20,DVar13.unknown);
  }
  else if ((int)lVar11 == 0) {
    (**(code **)(lVar19 + 0x20))((long)puVar1 + lVar20,(long)puVar2 + lVar20,DVar13.unknown);
    (**(code **)(lVar19 + 0x38))((long)puVar1 + lVar20,0,1,DVar13.unknown);
    goto LAB_1003975c8;
  }
  puVar12 = &DAT_10054b950;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  _memcpy((void *)((long)puVar1 + lVar20),(void *)((long)puVar2 + lVar20),
          *(size_t *)(*(long *)(puVar12 + -8) + 0x40));
LAB_1003975c8:
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x30));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x30));
  *puVar3 = *puVar4;
  *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar4 + 1);
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x34));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x34));
  uVar14 = puVar4[1];
  uVar8 = puVar3[1];
  *puVar3 = *puVar4;
  puVar3[1] = uVar14;
  _swift_bridgeObjectRelease(uVar8);
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x38));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x38));
  *puVar3 = *puVar4;
  *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar4 + 1);
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x3c));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x3c));
  uVar14 = puVar4[1];
  uVar8 = puVar3[1];
  *puVar3 = *puVar4;
  puVar3[1] = uVar14;
  _swift_bridgeObjectRelease(uVar8);
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x40)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x40));
  lVar16 = (long)*(int *)(lVar9 + 0x44);
  uVar14 = *(undefined8 *)((long)puVar1 + lVar16);
  *(undefined8 *)((long)puVar1 + lVar16) = *(undefined8 *)((long)puVar2 + lVar16);
  _swift_bridgeObjectRelease(uVar14);
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x48)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x48));
  lVar16 = (long)param_1 + (long)*(int *)(param_3 + 0x18);
  lVar11 = (long)param_2 + (long)*(int *)(param_3 + 0x18);
  UVar15 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar15.unknown + -8) + 0x28))(lVar16,lVar11,UVar15.unknown);
  lVar9 = 0;
  FUN_10025ee04();
  puVar1 = (undefined8 *)(lVar16 + *(int *)(lVar9 + 0x14));
  puVar2 = (undefined8 *)(lVar11 + *(int *)(lVar9 + 0x14));
  uVar14 = puVar2[1];
  uVar8 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar14;
  _swift_bridgeObjectRelease(uVar8);
  (**(code **)(lVar19 + 0x28))
            (lVar16 + *(int *)(lVar9 + 0x18),lVar11 + *(int *)(lVar9 + 0x18),DVar13.unknown);
  *(undefined1 *)(lVar16 + *(int *)(lVar9 + 0x1c)) =
       *(undefined1 *)(lVar11 + *(int *)(lVar9 + 0x1c));
  lVar19 = (long)*(int *)(lVar9 + 0x20);
  uVar14 = *(undefined8 *)(lVar16 + lVar19);
  *(undefined8 *)(lVar16 + lVar19) = *(undefined8 *)(lVar11 + lVar19);
  _swift_bridgeObjectRelease(uVar14);
  *(undefined1 *)(lVar16 + *(int *)(lVar9 + 0x24)) =
       *(undefined1 *)(lVar11 + *(int *)(lVar9 + 0x24));
  *(undefined1 *)(lVar16 + *(int *)(lVar9 + 0x28)) =
       *(undefined1 *)(lVar11 + *(int *)(lVar9 + 0x28));
  *(undefined8 *)(lVar16 + *(int *)(lVar9 + 0x2c)) =
       *(undefined8 *)(lVar11 + *(int *)(lVar9 + 0x2c));
  *(undefined8 *)(lVar16 + *(int *)(lVar9 + 0x30)) =
       *(undefined8 *)(lVar11 + *(int *)(lVar9 + 0x30));
  lVar9 = (long)*(int *)(lVar9 + 0x34);
  uVar14 = *(undefined8 *)(lVar16 + lVar9);
  *(undefined8 *)(lVar16 + lVar9) = *(undefined8 *)(lVar11 + lVar9);
  _swift_bridgeObjectRelease(uVar14);
  iVar7 = *(int *)(param_3 + 0x20);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar7);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar7);
  uVar14 = *puVar1;
  *puVar1 = *puVar2;
  _swift_release(uVar14);
  puVar1[1] = puVar2[1];
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  uVar14 = *puVar1;
  *puVar1 = *puVar2;
  _swift_release(uVar14);
  puVar1[1] = puVar2[1];
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  uVar14 = *puVar1;
  *puVar1 = *puVar2;
  _swift_release(uVar14);
  puVar1[1] = puVar2[1];
  puVar5 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar6 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  *puVar5 = *puVar6;
  uVar14 = *(undefined8 *)(puVar5 + 8);
  *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(puVar6 + 8);
  _swift_release(uVar14);
  puVar5 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  puVar6 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  *puVar5 = *puVar6;
  uVar14 = *(undefined8 *)(puVar5 + 8);
  *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(puVar6 + 8);
  _swift_release(uVar14);
  return param_1;
}

