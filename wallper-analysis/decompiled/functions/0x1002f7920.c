// rea decompile_all
// name: FUN_1002f7920
// address: 0x1002f7920
// body: available
// range: 0x1002f7920-0x1002f7ebb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1002f7920(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  URL UVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  code *pcVar13;
  code *pcVar14;
  long lVar15;
  
  uVar12 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar12);
  param_1[1] = param_2[1];
  iVar5 = *(int *)(param_3 + 0x14);
  UVar6 = Foundation::URL::typeMetadataAccessor();
  lVar11 = *(long *)(UVar6.unknown + -8);
  pcVar13 = *(code **)(lVar11 + 0x18);
  (*pcVar13)((long)param_1 + (long)iVar5,(long)param_2 + (long)iVar5,UVar6.unknown);
  (*pcVar13)((long)param_1 + (long)*(int *)(param_3 + 0x18),
             (long)param_2 + (long)*(int *)(param_3 + 0x18),UVar6.unknown);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  *puVar1 = *puVar2;
  uVar12 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar12);
  uVar12 = puVar1[2];
  puVar1[2] = puVar2[2];
  _swift_retain();
  _swift_release(uVar12);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  *puVar1 = *puVar2;
  uVar12 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar12);
  uVar12 = puVar1[2];
  puVar1[2] = puVar2[2];
  _swift_retain();
  _swift_release(uVar12);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  *puVar1 = *puVar2;
  uVar12 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar12);
  uVar12 = puVar1[2];
  puVar1[2] = puVar2[2];
  _swift_retain();
  _swift_release(uVar12);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  *puVar1 = *puVar2;
  uVar12 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar12);
  uVar12 = puVar1[2];
  puVar1[2] = puVar2[2];
  _swift_retain();
  _swift_release(uVar12);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  *puVar1 = *puVar2;
  uVar12 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar12);
  uVar12 = puVar1[2];
  puVar1[2] = puVar2[2];
  _swift_retain();
  _swift_release(uVar12);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  *puVar1 = *puVar2;
  uVar12 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_retain();
  _swift_release(uVar12);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  uVar12 = *puVar1;
  *puVar1 = *puVar2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar12);
  uVar12 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_retain();
  _swift_release(uVar12);
  puVar3 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
  puVar4 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  *puVar3 = *puVar4;
  uVar12 = *(undefined8 *)(puVar3 + 8);
  *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(puVar4 + 8);
  _swift_retain();
  _swift_release(uVar12);
  puVar3 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c));
  puVar4 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  *puVar3 = *puVar4;
  uVar12 = *(undefined8 *)(puVar3 + 8);
  *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(puVar4 + 8);
  _swift_retain();
  _swift_release(uVar12);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x40));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x40));
  lVar7 = 0;
  FUN_1002f58e8();
  lVar15 = *(long *)(lVar7 + -8);
  pcVar14 = *(code **)(lVar15 + 0x30);
  puVar8 = puVar1;
  (*pcVar14)(puVar1,1,lVar7);
  puVar9 = puVar2;
  (*pcVar14)(puVar2,1,lVar7);
  if ((int)puVar8 == 0) {
    if ((int)puVar9 == 0) {
      *puVar1 = *puVar2;
      uVar12 = puVar1[1];
      puVar1[1] = puVar2[1];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar12);
      puVar1[2] = puVar2[2];
      uVar12 = puVar1[3];
      puVar1[3] = puVar2[3];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar12);
      (*pcVar13)((long)puVar1 + (long)*(int *)(lVar7 + 0x18),
                 (long)puVar2 + (long)*(int *)(lVar7 + 0x18),UVar6.unknown);
      (*pcVar13)((long)puVar1 + (long)*(int *)(lVar7 + 0x1c),
                 (long)puVar2 + (long)*(int *)(lVar7 + 0x1c),UVar6.unknown);
      puVar8 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x20));
      puVar9 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x20));
      *puVar8 = *puVar9;
      uVar12 = puVar8[1];
      puVar8[1] = puVar9[1];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar12);
      puVar8 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x24));
      puVar9 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x24));
      *puVar8 = *puVar9;
      uVar12 = puVar8[1];
      puVar8[1] = puVar9[1];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar12);
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x28)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x28));
      goto LAB_1002f7d20;
    }
    FUN_100029548(puVar1,FUN_1002f58e8);
  }
  else if ((int)puVar9 == 0) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
    uVar12 = puVar2[3];
    puVar1[3] = uVar12;
    iVar5 = *(int *)(lVar7 + 0x18);
    pcVar13 = *(code **)(lVar11 + 0x10);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar12);
    (*pcVar13)((long)puVar1 + (long)iVar5,(long)puVar2 + (long)iVar5,UVar6.unknown);
    (*pcVar13)((long)puVar1 + (long)*(int *)(lVar7 + 0x1c),
               (long)puVar2 + (long)*(int *)(lVar7 + 0x1c),UVar6.unknown);
    puVar8 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x20));
    puVar9 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x20));
    *puVar8 = *puVar9;
    puVar8[1] = puVar9[1];
    puVar8 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x24));
    puVar9 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x24));
    *puVar8 = *puVar9;
    uVar12 = puVar9[1];
    puVar8[1] = uVar12;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x28)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x28));
    pcVar13 = *(code **)(lVar15 + 0x38);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar12);
    (*pcVar13)(puVar1,0,1,lVar7);
    goto LAB_1002f7d20;
  }
  puVar10 = &DAT_10055b030;
  FUN_100002f94(&DAT_10055b030,&DAT_10042f8c0);
  _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar10 + -8) + 0x40));
LAB_1002f7d20:
  puVar10 = &DAT_10055b0f0;
  FUN_100002f94(&DAT_10055b0f0,&DAT_10042f918);
  lVar7 = (long)*(int *)(puVar10 + 0x1c);
  uVar12 = *(undefined8 *)((long)puVar1 + lVar7);
  *(undefined8 *)((long)puVar1 + lVar7) = *(undefined8 *)((long)puVar2 + lVar7);
  _swift_retain();
  _swift_release(uVar12);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x44));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x44));
  uVar12 = *puVar1;
  *puVar1 = *puVar2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar12);
  uVar12 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_retain();
  _swift_release(uVar12);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x48));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x48));
  uVar12 = *puVar1;
  *puVar1 = *param_2;
  _swift_retain();
  _swift_release(uVar12);
  uVar12 = puVar1[1];
  puVar1[1] = param_2[1];
  _swift_retain();
  _swift_release(uVar12);
  return param_1;
}

