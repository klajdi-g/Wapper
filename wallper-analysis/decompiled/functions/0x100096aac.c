// rea decompile_all
// name: FUN_100096aac
// address: 0x100096aac
// body: available
// range: 0x100096aac-0x1000970b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_100096aac(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  Date DVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  long lVar13;
  code *pcVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  code *pcVar18;
  
  *param_1 = *param_2;
  uVar16 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar16);
  param_1[2] = param_2[2];
  uVar16 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar16);
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  uVar16 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar16);
  param_1[7] = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  lVar7 = 0;
  FUN_10009e280();
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x2c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x2c));
  *puVar1 = *puVar2;
  lVar8 = 0;
  FUN_10015f8e8();
  iVar6 = *(int *)(lVar8 + 0x14);
  DVar9 = Foundation::Date::typeMetadataAccessor();
  lVar13 = *(long *)(DVar9.unknown + -8);
  pcVar14 = *(code **)(lVar13 + 0x18);
  (*pcVar14)((long)puVar1 + (long)iVar6,(long)puVar2 + (long)iVar6);
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x18)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x18));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x30));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x30));
  uVar5 = *(undefined1 *)(puVar2 + 1);
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = uVar5;
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  puVar3 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  puVar4 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  *puVar3 = *puVar4;
  puVar3[1] = puVar4[1];
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  puVar3 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar4 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  *puVar3 = *puVar4;
  uVar16 = *(undefined8 *)(puVar3 + 8);
  *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(puVar4 + 8);
  _swift_retain();
  _swift_release(uVar16);
  puVar3 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar4 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  *puVar3 = *puVar4;
  uVar16 = *(undefined8 *)(puVar3 + 8);
  *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(puVar4 + 8);
  _swift_retain();
  _swift_release(uVar16);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  *puVar1 = *puVar2;
  uVar16 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_retain();
  _swift_release(uVar16);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  *puVar1 = *puVar2;
  uVar16 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_retain();
  _swift_release(uVar16);
  puVar3 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  puVar4 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  *puVar3 = *puVar4;
  uVar16 = *(undefined8 *)(puVar3 + 8);
  *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(puVar4 + 8);
  _swift_retain();
  _swift_release(uVar16);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  lVar17 = *(long *)(lVar7 + -8);
  pcVar18 = *(code **)(lVar17 + 0x30);
  puVar10 = puVar1;
  (*pcVar18)(puVar1,1,lVar7);
  puVar11 = puVar2;
  (*pcVar18)(puVar2,1,lVar7);
  if ((int)puVar10 == 0) {
    if ((int)puVar11 == 0) {
      *puVar1 = *puVar2;
      uVar16 = puVar1[1];
      puVar1[1] = puVar2[1];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar16);
      puVar1[2] = puVar2[2];
      uVar16 = puVar1[3];
      puVar1[3] = puVar2[3];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar16);
      puVar1[4] = puVar2[4];
      puVar1[5] = puVar2[5];
      uVar16 = puVar1[6];
      puVar1[6] = puVar2[6];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar16);
      puVar1[7] = puVar2[7];
      *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(puVar2 + 8);
      puVar10 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x2c));
      puVar11 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x2c));
      *puVar10 = *puVar11;
      (*pcVar14)((long)puVar10 + (long)*(int *)(lVar8 + 0x14),
                 (long)puVar11 + (long)*(int *)(lVar8 + 0x14),DVar9.unknown);
      *(undefined8 *)((long)puVar10 + (long)*(int *)(lVar8 + 0x18)) =
           *(undefined8 *)((long)puVar11 + (long)*(int *)(lVar8 + 0x18));
      puVar10 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x30));
      puVar11 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x30));
      uVar5 = *(undefined1 *)(puVar11 + 1);
      *puVar10 = *puVar11;
      *(undefined1 *)(puVar10 + 1) = uVar5;
      goto LAB_100096e68;
    }
    FUN_100095498(puVar1);
  }
  else if ((int)puVar11 == 0) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
    uVar16 = puVar2[3];
    puVar1[3] = uVar16;
    puVar1[4] = puVar2[4];
    puVar1[5] = puVar2[5];
    uVar15 = puVar2[6];
    puVar1[6] = uVar15;
    puVar1[7] = puVar2[7];
    *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(puVar2 + 8);
    puVar10 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x2c));
    puVar11 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x2c));
    *puVar10 = *puVar11;
    iVar6 = *(int *)(lVar8 + 0x14);
    pcVar18 = *(code **)(lVar13 + 0x10);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar16);
    _swift_bridgeObjectRetain(uVar15);
    (*pcVar18)((long)puVar10 + (long)iVar6,(long)puVar11 + (long)iVar6,DVar9.unknown);
    *(undefined8 *)((long)puVar10 + (long)*(int *)(lVar8 + 0x18)) =
         *(undefined8 *)((long)puVar11 + (long)*(int *)(lVar8 + 0x18));
    puVar10 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x30));
    puVar11 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x30));
    uVar5 = *(undefined1 *)(puVar11 + 1);
    *puVar10 = *puVar11;
    *(undefined1 *)(puVar10 + 1) = uVar5;
    (**(code **)(lVar17 + 0x38))(puVar1,0,1,lVar7);
    goto LAB_100096e68;
  }
  puVar12 = &DAT_10054c040;
  FUN_100002f94(&DAT_10054c040,&DAT_100420500);
  _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar12 + -8) + 0x40));
LAB_100096e68:
  puVar12 = &DAT_10054efb0;
  FUN_100002f94(&DAT_10054efb0,&DAT_100421520);
  lVar13 = (long)*(int *)(puVar12 + 0x1c);
  uVar16 = *(undefined8 *)((long)puVar1 + lVar13);
  *(undefined8 *)((long)puVar1 + lVar13) = *(undefined8 *)((long)puVar2 + lVar13);
  _swift_retain();
  _swift_release(uVar16);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  *puVar1 = *param_2;
  uVar16 = puVar1[1];
  puVar1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar16);
  puVar1[2] = param_2[2];
  uVar16 = puVar1[3];
  puVar1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar16);
  puVar1[4] = param_2[4];
  puVar1[5] = param_2[5];
  uVar16 = puVar1[6];
  puVar1[6] = param_2[6];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar16);
  puVar1[7] = param_2[7];
  *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(param_2 + 8);
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x2c));
  puVar10 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x2c));
  *puVar2 = *puVar10;
  (*pcVar14)((long)puVar2 + (long)*(int *)(lVar8 + 0x14),
             (long)puVar10 + (long)*(int *)(lVar8 + 0x14),DVar9.unknown);
  *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x18)) =
       *(undefined8 *)((long)puVar10 + (long)*(int *)(lVar8 + 0x18));
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x30));
  puVar10 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x30));
  uVar5 = *(undefined1 *)(puVar10 + 1);
  *puVar2 = *puVar10;
  *(undefined1 *)(puVar2 + 1) = uVar5;
  puVar12 = &DAT_10054efb8;
  FUN_100002f94(&DAT_10054efb8,&DAT_100420510);
  lVar7 = (long)*(int *)(puVar12 + 0x1c);
  uVar16 = *(undefined8 *)((long)puVar1 + lVar7);
  *(undefined8 *)((long)puVar1 + lVar7) = *(undefined8 *)((long)param_2 + lVar7);
  _swift_retain();
  _swift_release(uVar16);
  return param_1;
}

