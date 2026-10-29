// rea decompile_all
// name: FUN_1002f7554
// address: 0x1002f7554
// body: available
// range: 0x1002f7554-0x1002f791f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1002f7554(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  URL UVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  code *pcVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  code *pcVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  
  uVar20 = *param_2;
  uVar14 = param_2[1];
  *param_1 = uVar20;
  param_1[1] = uVar14;
  iVar9 = *(int *)(param_3 + 0x14);
  UVar10 = Foundation::URL::typeMetadataAccessor();
  pcVar22 = *(code **)(*(long *)(UVar10.unknown + -8) + 0x10);
  _swift_retain(uVar20);
  (*pcVar22)((long)param_1 + (long)iVar9,(long)param_2 + (long)iVar9,UVar10.unknown);
  (*pcVar22)((long)param_1 + (long)*(int *)(param_3 + 0x18),
             (long)param_2 + (long)*(int *)(param_3 + 0x18),UVar10.unknown);
  iVar9 = *(int *)(param_3 + 0x20);
  puVar12 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  *puVar12 = *puVar1;
  uVar26 = puVar1[1];
  puVar12[2] = puVar1[2];
  puVar12[1] = uVar26;
  puVar12 = (undefined8 *)((long)param_1 + (long)iVar9);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar9);
  *puVar12 = *puVar2;
  uVar27 = puVar2[1];
  puVar12[2] = puVar2[2];
  puVar12[1] = uVar27;
  iVar9 = *(int *)(param_3 + 0x28);
  puVar12 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  *puVar12 = *puVar3;
  uVar28 = puVar3[1];
  puVar12[2] = puVar3[2];
  puVar12[1] = uVar28;
  puVar12 = (undefined8 *)((long)param_1 + (long)iVar9);
  puVar4 = (undefined8 *)((long)param_2 + (long)iVar9);
  *puVar12 = *puVar4;
  uVar29 = puVar4[1];
  puVar12[2] = puVar4[2];
  puVar12[1] = uVar29;
  iVar9 = *(int *)(param_3 + 0x30);
  puVar12 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar5 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  *puVar12 = *puVar5;
  uVar30 = puVar5[1];
  puVar12[2] = puVar5[2];
  puVar12[1] = uVar30;
  puVar12 = (undefined8 *)((long)param_1 + (long)iVar9);
  puVar6 = (undefined8 *)((long)param_2 + (long)iVar9);
  uVar20 = puVar6[1];
  *puVar12 = *puVar6;
  puVar12[1] = uVar20;
  iVar9 = *(int *)(param_3 + 0x38);
  puVar12 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  uVar31 = *puVar12;
  puVar6 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34));
  puVar6[1] = puVar12[1];
  *puVar6 = uVar31;
  puVar7 = (undefined1 *)((long)param_1 + (long)iVar9);
  puVar8 = (undefined1 *)((long)param_2 + (long)iVar9);
  *puVar7 = *puVar8;
  uVar19 = *(undefined8 *)(puVar8 + 8);
  *(undefined8 *)(puVar7 + 8) = uVar19;
  iVar9 = *(int *)(param_3 + 0x40);
  puVar7 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c));
  puVar8 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  *puVar7 = *puVar8;
  uVar21 = puVar1[2];
  uVar23 = puVar2[2];
  uVar24 = puVar3[2];
  uVar18 = puVar4[2];
  uVar14 = puVar5[2];
  uVar25 = *(undefined8 *)(puVar8 + 8);
  *(undefined8 *)(puVar7 + 8) = uVar25;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar9);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar9);
  uVar15 = puVar12[1];
  lVar11 = 0;
  FUN_1002f58e8();
  lVar16 = *(long *)(lVar11 + -8);
  pcVar17 = *(code **)(lVar16 + 0x30);
  _swift_bridgeObjectRetain(uVar26);
  _swift_retain(uVar21);
  _swift_bridgeObjectRetain(uVar27);
  _swift_retain(uVar23);
  _swift_bridgeObjectRetain(uVar28);
  _swift_retain(uVar24);
  _swift_bridgeObjectRetain(uVar29);
  _swift_retain(uVar18);
  _swift_bridgeObjectRetain(uVar30);
  _swift_retain(uVar14);
  _swift_retain(uVar20);
  _swift_bridgeObjectRetain(uVar31);
  _swift_retain(uVar15);
  _swift_retain(uVar19);
  _swift_retain(uVar25);
  puVar12 = puVar2;
  (*pcVar17)(puVar2,1,lVar11);
  if ((int)puVar12 == 0) {
    uVar20 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar20;
    uVar20 = puVar2[3];
    puVar1[2] = puVar2[2];
    puVar1[3] = uVar20;
    iVar9 = *(int *)(lVar11 + 0x18);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar20);
    (*pcVar22)((long)puVar1 + (long)iVar9,(long)puVar2 + (long)iVar9,UVar10.unknown);
    (*pcVar22)((long)puVar1 + (long)*(int *)(lVar11 + 0x1c),
               (long)puVar2 + (long)*(int *)(lVar11 + 0x1c),UVar10.unknown);
    puVar12 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x20));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x20));
    uVar20 = puVar3[1];
    *puVar12 = *puVar3;
    puVar12[1] = uVar20;
    puVar12 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x24));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x24));
    uVar20 = puVar3[1];
    *puVar12 = *puVar3;
    puVar12[1] = uVar20;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x28)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x28));
    pcVar17 = *(code **)(lVar16 + 0x38);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar20);
    (*pcVar17)(puVar1,0,1,lVar11);
  }
  else {
    puVar13 = &DAT_10055b030;
    FUN_100002f94(&DAT_10055b030,&DAT_10042f8c0);
    _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar13 + -8) + 0x40));
  }
  puVar13 = &DAT_10055b0f0;
  FUN_100002f94(&DAT_10055b0f0,&DAT_10042f918);
  *(undefined8 *)((long)puVar1 + (long)*(int *)(puVar13 + 0x1c)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(puVar13 + 0x1c));
  iVar9 = *(int *)(param_3 + 0x48);
  puVar12 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x44));
  uVar15 = *puVar12;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x44));
  puVar1[1] = puVar12[1];
  *puVar1 = uVar15;
  uVar14 = puVar12[1];
  param_2 = (undefined8 *)((long)param_2 + (long)iVar9);
  uVar20 = param_2[1];
  uVar18 = *param_2;
  puVar12 = (undefined8 *)((long)param_1 + (long)iVar9);
  puVar12[1] = param_2[1];
  *puVar12 = uVar18;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar15);
  _swift_retain(uVar14);
  _swift_retain(uVar18);
  _swift_retain(uVar20);
  return param_1;
}

