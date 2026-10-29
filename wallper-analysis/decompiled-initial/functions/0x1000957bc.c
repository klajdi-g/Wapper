// rea decompile_all
// name: FUN_1000957bc
// address: 0x1000957bc
// body: available
// range: 0x1000957bc-0x100095ccf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_1000957bc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  Date DVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  code *pcVar17;
  undefined8 uVar18;
  
  uVar10 = param_2[1];
  uVar6 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar10;
  _swift_bridgeObjectRelease(uVar6);
  uVar10 = param_2[3];
  uVar6 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar10;
  _swift_bridgeObjectRelease(uVar6);
  param_1[4] = param_2[4];
  uVar10 = param_2[6];
  uVar6 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar10;
  _swift_bridgeObjectRelease(uVar6);
  param_1[7] = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  lVar7 = 0;
  FUN_10009e280();
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x2c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x2c));
  *puVar1 = *puVar2;
  lVar8 = 0;
  FUN_10015f8e8();
  iVar5 = *(int *)(lVar8 + 0x14);
  DVar9 = Foundation::Date::typeMetadataAccessor();
  lVar14 = *(long *)(DVar9.unknown + -8);
  pcVar15 = *(code **)(lVar14 + 0x28);
  (*pcVar15)((long)puVar1 + (long)iVar5,(long)puVar2 + (long)iVar5);
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x18)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x18));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x30));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x30));
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  *puVar1 = *puVar2;
  iVar5 = *(int *)(param_3 + 0x18);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  puVar3 = (undefined1 *)((long)param_1 + (long)iVar5);
  puVar4 = (undefined1 *)((long)param_2 + (long)iVar5);
  *puVar3 = *puVar4;
  puVar3[1] = puVar4[1];
  iVar5 = *(int *)(param_3 + 0x20);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  *(undefined1 *)((long)param_1 + (long)iVar5) = *(undefined1 *)((long)param_2 + (long)iVar5);
  puVar3 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar4 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  *puVar3 = *puVar4;
  uVar10 = *(undefined8 *)(puVar3 + 8);
  *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(puVar4 + 8);
  _swift_release(uVar10);
  puVar3 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar4 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  *puVar3 = *puVar4;
  uVar10 = *(undefined8 *)(puVar3 + 8);
  *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(puVar4 + 8);
  _swift_release(uVar10);
  puVar3 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar4 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  *puVar3 = *puVar4;
  uVar10 = *(undefined8 *)(puVar3 + 8);
  *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(puVar4 + 8);
  _swift_release(uVar10);
  puVar3 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  puVar4 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  *puVar3 = *puVar4;
  uVar10 = *(undefined8 *)(puVar3 + 8);
  *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(puVar4 + 8);
  _swift_release(uVar10);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  *puVar1 = *puVar2;
  uVar10 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_release(uVar10);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  *puVar1 = *puVar2;
  uVar10 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_release(uVar10);
  puVar3 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c));
  puVar4 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  *puVar3 = *puVar4;
  uVar10 = *(undefined8 *)(puVar3 + 8);
  *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(puVar4 + 8);
  _swift_release(uVar10);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x40));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x40));
  lVar16 = *(long *)(lVar7 + -8);
  pcVar17 = *(code **)(lVar16 + 0x30);
  puVar11 = puVar1;
  (*pcVar17)(puVar1,1,lVar7);
  puVar12 = puVar2;
  (*pcVar17)(puVar2,1,lVar7);
  if ((int)puVar11 == 0) {
    if ((int)puVar12 == 0) {
      uVar10 = puVar2[1];
      uVar6 = puVar1[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar10;
      _swift_bridgeObjectRelease(uVar6);
      uVar10 = puVar2[3];
      uVar6 = puVar1[3];
      puVar1[2] = puVar2[2];
      puVar1[3] = uVar10;
      _swift_bridgeObjectRelease(uVar6);
      puVar1[4] = puVar2[4];
      uVar10 = puVar2[6];
      uVar6 = puVar1[6];
      puVar1[5] = puVar2[5];
      puVar1[6] = uVar10;
      _swift_bridgeObjectRelease(uVar6);
      puVar1[7] = puVar2[7];
      *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(puVar2 + 8);
      puVar11 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x2c));
      puVar12 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x2c));
      *puVar11 = *puVar12;
      (*pcVar15)((long)puVar11 + (long)*(int *)(lVar8 + 0x14),
                 (long)puVar12 + (long)*(int *)(lVar8 + 0x14),DVar9.unknown);
      *(undefined8 *)((long)puVar11 + (long)*(int *)(lVar8 + 0x18)) =
           *(undefined8 *)((long)puVar12 + (long)*(int *)(lVar8 + 0x18));
      puVar11 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x30));
      puVar12 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x30));
      *(undefined1 *)(puVar11 + 1) = *(undefined1 *)(puVar12 + 1);
      *puVar11 = *puVar12;
      goto LAB_100095b04;
    }
    FUN_100095498(puVar1);
  }
  else if ((int)puVar12 == 0) {
    uVar10 = *puVar2;
    uVar18 = puVar2[3];
    uVar6 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar10;
    puVar1[3] = uVar18;
    puVar1[2] = uVar6;
    uVar10 = puVar2[4];
    uVar18 = puVar2[7];
    uVar6 = puVar2[6];
    puVar1[5] = puVar2[5];
    puVar1[4] = uVar10;
    puVar1[7] = uVar18;
    puVar1[6] = uVar6;
    *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(puVar2 + 8);
    puVar11 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x2c));
    puVar12 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x2c));
    *puVar11 = *puVar12;
    (**(code **)(lVar14 + 0x20))
              ((long)puVar11 + (long)*(int *)(lVar8 + 0x14),
               (long)puVar12 + (long)*(int *)(lVar8 + 0x14),DVar9.unknown);
    *(undefined8 *)((long)puVar11 + (long)*(int *)(lVar8 + 0x18)) =
         *(undefined8 *)((long)puVar12 + (long)*(int *)(lVar8 + 0x18));
    puVar11 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x30));
    puVar12 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x30));
    *(undefined1 *)(puVar11 + 1) = *(undefined1 *)(puVar12 + 1);
    *puVar11 = *puVar12;
    (**(code **)(lVar16 + 0x38))(puVar1,0,1,lVar7);
    goto LAB_100095b04;
  }
  puVar13 = &DAT_10054c040;
  FUN_100002f94(&DAT_10054c040,&DAT_100420500);
  _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar13 + -8) + 0x40));
LAB_100095b04:
  puVar13 = &DAT_10054efb0;
  FUN_100002f94(&DAT_10054efb0,&DAT_100421520);
  lVar14 = (long)*(int *)(puVar13 + 0x1c);
  uVar10 = *(undefined8 *)((long)puVar1 + lVar14);
  *(undefined8 *)((long)puVar1 + lVar14) = *(undefined8 *)((long)puVar2 + lVar14);
  _swift_release(uVar10);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x44));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x44));
  uVar10 = param_2[1];
  uVar6 = puVar1[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar10;
  _swift_bridgeObjectRelease(uVar6);
  uVar10 = param_2[3];
  uVar6 = puVar1[3];
  puVar1[2] = param_2[2];
  puVar1[3] = uVar10;
  _swift_bridgeObjectRelease(uVar6);
  puVar1[4] = param_2[4];
  uVar10 = param_2[6];
  uVar6 = puVar1[6];
  puVar1[5] = param_2[5];
  puVar1[6] = uVar10;
  _swift_bridgeObjectRelease(uVar6);
  puVar1[7] = param_2[7];
  *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(param_2 + 8);
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x2c));
  puVar11 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x2c));
  *puVar2 = *puVar11;
  (*pcVar15)((long)puVar2 + (long)*(int *)(lVar8 + 0x14),
             (long)puVar11 + (long)*(int *)(lVar8 + 0x14),DVar9.unknown);
  *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x18)) =
       *(undefined8 *)((long)puVar11 + (long)*(int *)(lVar8 + 0x18));
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x30));
  puVar11 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x30));
  *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar11 + 1);
  *puVar2 = *puVar11;
  puVar13 = &DAT_10054efb8;
  FUN_100002f94(&DAT_10054efb8,&DAT_100420510);
  lVar7 = (long)*(int *)(puVar13 + 0x1c);
  uVar10 = *(undefined8 *)((long)puVar1 + lVar7);
  *(undefined8 *)((long)puVar1 + lVar7) = *(undefined8 *)((long)param_2 + lVar7);
  _swift_release(uVar10);
  return param_1;
}

