// rea decompile_all
// name: FUN_1002f80f0
// address: 0x1002f80f0
// body: available
// range: 0x1002f80f0-0x1002f851b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1002f80f0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined8 uVar6;
  URL UVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  long lVar13;
  code *pcVar14;
  code *pcVar15;
  long lVar16;
  undefined8 uVar17;
  
  uVar6 = *param_1;
  *param_1 = *param_2;
  _swift_release(uVar6);
  param_1[1] = param_2[1];
  iVar5 = *(int *)(param_3 + 0x14);
  UVar7 = Foundation::URL::typeMetadataAccessor();
  lVar13 = *(long *)(UVar7.unknown + -8);
  pcVar14 = *(code **)(lVar13 + 0x28);
  (*pcVar14)((long)param_1 + (long)iVar5,(long)param_2 + (long)iVar5,UVar7.unknown);
  (*pcVar14)((long)param_1 + (long)*(int *)(param_3 + 0x18),
             (long)param_2 + (long)*(int *)(param_3 + 0x18),UVar7.unknown);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  uVar6 = puVar2[1];
  uVar8 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar6;
  _swift_bridgeObjectRelease(uVar8);
  uVar6 = puVar1[2];
  puVar1[2] = puVar2[2];
  _swift_release(uVar6);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  uVar6 = puVar2[1];
  uVar8 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar6;
  _swift_bridgeObjectRelease(uVar8);
  uVar6 = puVar1[2];
  puVar1[2] = puVar2[2];
  _swift_release(uVar6);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  uVar6 = puVar2[1];
  uVar8 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar6;
  _swift_bridgeObjectRelease(uVar8);
  uVar6 = puVar1[2];
  puVar1[2] = puVar2[2];
  _swift_release(uVar6);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  uVar6 = puVar2[1];
  uVar8 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar6;
  _swift_bridgeObjectRelease(uVar8);
  uVar6 = puVar1[2];
  puVar1[2] = puVar2[2];
  _swift_release(uVar6);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  uVar6 = puVar2[1];
  uVar8 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar6;
  _swift_bridgeObjectRelease(uVar8);
  uVar6 = puVar1[2];
  puVar1[2] = puVar2[2];
  _swift_release(uVar6);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  uVar8 = puVar1[1];
  uVar6 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar6;
  _swift_release(uVar8);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  uVar6 = *puVar1;
  *puVar1 = *puVar2;
  _swift_bridgeObjectRelease(uVar6);
  uVar6 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_release(uVar6);
  puVar3 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
  puVar4 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  *puVar3 = *puVar4;
  uVar6 = *(undefined8 *)(puVar3 + 8);
  *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(puVar4 + 8);
  _swift_release(uVar6);
  puVar3 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c));
  puVar4 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  *puVar3 = *puVar4;
  uVar6 = *(undefined8 *)(puVar3 + 8);
  *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(puVar4 + 8);
  _swift_release(uVar6);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x40));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x40));
  lVar9 = 0;
  FUN_1002f58e8();
  lVar16 = *(long *)(lVar9 + -8);
  pcVar15 = *(code **)(lVar16 + 0x30);
  puVar10 = puVar1;
  (*pcVar15)(puVar1,1,lVar9);
  puVar11 = puVar2;
  (*pcVar15)(puVar2,1,lVar9);
  if ((int)puVar10 == 0) {
    if ((int)puVar11 == 0) {
      uVar6 = puVar2[1];
      uVar8 = puVar1[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar6;
      _swift_bridgeObjectRelease(uVar8);
      uVar6 = puVar2[3];
      uVar8 = puVar1[3];
      puVar1[2] = puVar2[2];
      puVar1[3] = uVar6;
      _swift_bridgeObjectRelease(uVar8);
      (*pcVar14)((long)puVar1 + (long)*(int *)(lVar9 + 0x18),
                 (long)puVar2 + (long)*(int *)(lVar9 + 0x18),UVar7.unknown);
      (*pcVar14)((long)puVar1 + (long)*(int *)(lVar9 + 0x1c),
                 (long)puVar2 + (long)*(int *)(lVar9 + 0x1c),UVar7.unknown);
      puVar10 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x20));
      puVar11 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x20));
      uVar6 = puVar11[1];
      uVar8 = puVar10[1];
      *puVar10 = *puVar11;
      puVar10[1] = uVar6;
      _swift_bridgeObjectRelease(uVar8);
      puVar10 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x24));
      puVar11 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x24));
      uVar6 = puVar11[1];
      uVar8 = puVar10[1];
      *puVar10 = *puVar11;
      puVar10[1] = uVar6;
      _swift_bridgeObjectRelease(uVar8);
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x28)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x28));
      goto LAB_1002f83e8;
    }
    FUN_100029548(puVar1,FUN_1002f58e8);
  }
  else if ((int)puVar11 == 0) {
    uVar6 = *puVar2;
    uVar17 = puVar2[3];
    uVar8 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar6;
    puVar1[3] = uVar17;
    puVar1[2] = uVar8;
    pcVar14 = *(code **)(lVar13 + 0x20);
    (*pcVar14)((long)puVar1 + (long)*(int *)(lVar9 + 0x18),
               (long)puVar2 + (long)*(int *)(lVar9 + 0x18),UVar7.unknown);
    (*pcVar14)((long)puVar1 + (long)*(int *)(lVar9 + 0x1c),
               (long)puVar2 + (long)*(int *)(lVar9 + 0x1c),UVar7.unknown);
    puVar10 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x20));
    uVar6 = *puVar10;
    puVar11 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x20));
    puVar11[1] = puVar10[1];
    *puVar11 = uVar6;
    puVar10 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x24));
    uVar6 = *puVar10;
    puVar11 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x24));
    puVar11[1] = puVar10[1];
    *puVar11 = uVar6;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x28)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x28));
    (**(code **)(lVar16 + 0x38))(puVar1,0,1,lVar9);
    goto LAB_1002f83e8;
  }
  puVar12 = &DAT_10055b030;
  FUN_100002f94(&DAT_10055b030,&DAT_10042f8c0);
  _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar12 + -8) + 0x40));
LAB_1002f83e8:
  puVar12 = &DAT_10055b0f0;
  FUN_100002f94(&DAT_10055b0f0,&DAT_10042f918);
  lVar9 = (long)*(int *)(puVar12 + 0x1c);
  uVar6 = *(undefined8 *)((long)puVar1 + lVar9);
  *(undefined8 *)((long)puVar1 + lVar9) = *(undefined8 *)((long)puVar2 + lVar9);
  _swift_release(uVar6);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x44));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x44));
  uVar6 = *puVar1;
  *puVar1 = *puVar2;
  _swift_bridgeObjectRelease(uVar6);
  uVar6 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_release(uVar6);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x48));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x48));
  uVar6 = *puVar1;
  *puVar1 = *param_2;
  _swift_release(uVar6);
  uVar6 = puVar1[1];
  puVar1[1] = param_2[1];
  _swift_release(uVar6);
  return param_1;
}

