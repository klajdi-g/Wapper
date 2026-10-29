// rea decompile_all
// name: FUN_100096684
// address: 0x100096684
// body: available
// range: 0x100096684-0x100096aab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 * FUN_100096684(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  Date DVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  long lVar14;
  code *pcVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  code *pcVar18;
  
  uVar7 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar7;
  param_1[2] = param_2[2];
  uVar17 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar17;
  uVar6 = param_2[6];
  uVar16 = param_2[7];
  param_1[5] = param_2[5];
  param_1[6] = uVar6;
  param_1[7] = uVar16;
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  lVar9 = 0;
  FUN_10009e280();
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x2c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x2c));
  *puVar1 = *puVar2;
  lVar10 = 0;
  FUN_10015f8e8();
  iVar8 = *(int *)(lVar10 + 0x14);
  DVar11 = Foundation::Date::typeMetadataAccessor();
  pcVar18 = *(code **)(*(long *)(DVar11.unknown + -8) + 0x10);
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar17);
  _swift_bridgeObjectRetain(uVar6);
  (*pcVar18)((long)puVar1 + (long)iVar8,(long)puVar2 + (long)iVar8,DVar11.unknown);
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x18)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x18));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x30));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x30));
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  *puVar1 = *puVar2;
  iVar8 = *(int *)(param_3 + 0x18);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  *(undefined2 *)((long)param_1 + (long)iVar8) = *(undefined2 *)((long)param_2 + (long)iVar8);
  iVar8 = *(int *)(param_3 + 0x20);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  puVar3 = (undefined1 *)((long)param_1 + (long)iVar8);
  puVar4 = (undefined1 *)((long)param_2 + (long)iVar8);
  *puVar3 = *puVar4;
  *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(puVar4 + 8);
  iVar8 = *(int *)(param_3 + 0x28);
  puVar3 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar4 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  *puVar3 = *puVar4;
  uVar16 = *(undefined8 *)(puVar4 + 8);
  *(undefined8 *)(puVar3 + 8) = uVar16;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar8);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar8);
  uVar6 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar6;
  iVar8 = *(int *)(param_3 + 0x30);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  uVar7 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar7;
  puVar3 = (undefined1 *)((long)param_1 + (long)iVar8);
  puVar4 = (undefined1 *)((long)param_2 + (long)iVar8);
  *puVar3 = *puVar4;
  uVar17 = *(undefined8 *)(puVar4 + 8);
  *(undefined8 *)(puVar3 + 8) = uVar17;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  lVar14 = *(long *)(lVar9 + -8);
  pcVar15 = *(code **)(lVar14 + 0x30);
  _swift_retain();
  _swift_retain(uVar16);
  _swift_retain(uVar6);
  _swift_retain(uVar7);
  _swift_retain(uVar17);
  puVar12 = puVar2;
  (*pcVar15)(puVar2,1,lVar9);
  if ((int)puVar12 == 0) {
    uVar6 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar6;
    puVar1[2] = puVar2[2];
    uVar16 = puVar2[3];
    puVar1[4] = puVar2[4];
    puVar1[3] = uVar16;
    uVar6 = puVar2[6];
    uVar7 = puVar2[7];
    puVar1[5] = puVar2[5];
    puVar1[6] = uVar6;
    puVar1[7] = uVar7;
    *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(puVar2 + 8);
    puVar12 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x2c));
    puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x2c));
    *puVar12 = *puVar5;
    iVar8 = *(int *)(lVar10 + 0x14);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar16);
    _swift_bridgeObjectRetain(uVar6);
    (*pcVar18)((long)puVar12 + (long)iVar8,(long)puVar5 + (long)iVar8,DVar11.unknown);
    *(undefined8 *)((long)puVar12 + (long)*(int *)(lVar10 + 0x18)) =
         *(undefined8 *)((long)puVar5 + (long)*(int *)(lVar10 + 0x18));
    puVar12 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x30));
    puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x30));
    *(undefined1 *)(puVar12 + 1) = *(undefined1 *)(puVar5 + 1);
    *puVar12 = *puVar5;
    (**(code **)(lVar14 + 0x38))(puVar1,0,1,lVar9);
  }
  else {
    puVar13 = &DAT_10054c040;
    FUN_100002f94(&DAT_10054c040,&DAT_100420500);
    _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar13 + -8) + 0x40));
  }
  puVar13 = &DAT_10054efb0;
  FUN_100002f94(&DAT_10054efb0,&DAT_100421520);
  *(undefined8 *)((long)puVar1 + (long)*(int *)(puVar13 + 0x1c)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(puVar13 + 0x1c));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  uVar7 = param_2[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar7;
  puVar1[2] = param_2[2];
  uVar17 = param_2[3];
  puVar1[4] = param_2[4];
  puVar1[3] = uVar17;
  uVar6 = param_2[6];
  uVar16 = param_2[7];
  puVar1[5] = param_2[5];
  puVar1[6] = uVar6;
  puVar1[7] = uVar16;
  *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(param_2 + 8);
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x2c));
  puVar12 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x2c));
  *puVar2 = *puVar12;
  iVar8 = *(int *)(lVar10 + 0x14);
  _swift_retain();
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar17);
  _swift_bridgeObjectRetain(uVar6);
  (*pcVar18)((long)puVar2 + (long)iVar8,(long)puVar12 + (long)iVar8,DVar11.unknown);
  *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x18)) =
       *(undefined8 *)((long)puVar12 + (long)*(int *)(lVar10 + 0x18));
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x30));
  puVar12 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x30));
  *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar12 + 1);
  *puVar2 = *puVar12;
  puVar13 = &DAT_10054efb8;
  FUN_100002f94(&DAT_10054efb8,&DAT_100420510);
  *(undefined8 *)((long)puVar1 + (long)*(int *)(puVar13 + 0x1c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(puVar13 + 0x1c));
  _swift_retain();
  return param_1;
}

