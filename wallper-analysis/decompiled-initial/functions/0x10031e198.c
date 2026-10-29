// rea decompile_all
// name: FUN_10031e198
// address: 0x10031e198
// body: available
// range: 0x10031e198-0x10031e51f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_10031e198(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  undefined8 *puVar9;
  URL UVar10;
  undefined *puVar11;
  Date DVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  code *pcVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  
  uVar7 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar7 >> 0x11 & 1) == 0) {
    lVar15 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar15;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    lVar8 = 0;
    FUN_10040211c();
    lVar19 = *(long *)(lVar8 + -8);
    pcVar16 = *(code **)(lVar19 + 0x30);
    _swift_bridgeObjectRetain(lVar15);
    puVar9 = puVar2;
    (*pcVar16)(puVar2,1,lVar8);
    if ((int)puVar9 == 0) {
      uVar21 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar21;
      iVar6 = *(int *)(lVar8 + 0x14);
      UVar10 = Foundation::URL::typeMetadataAccessor();
      lVar20 = *(long *)(UVar10.unknown + -8);
      pcVar16 = *(code **)(lVar20 + 0x10);
      _swift_bridgeObjectRetain(uVar21);
      (*pcVar16)((long)puVar1 + (long)iVar6,(long)puVar2 + (long)iVar6,UVar10.unknown);
      lVar17 = (long)*(int *)(lVar8 + 0x18);
      lVar15 = (long)puVar2 + lVar17;
      (**(code **)(lVar20 + 0x30))(lVar15,1,UVar10.unknown);
      if ((int)lVar15 == 0) {
        (*pcVar16)((long)puVar1 + lVar17,(long)puVar2 + lVar17,UVar10.unknown);
        (**(code **)(lVar20 + 0x38))((long)puVar1 + lVar17,0,1,UVar10.unknown);
      }
      else {
        puVar11 = &DAT_100553d90;
        FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
        _memcpy((void *)((long)puVar1 + lVar17),(void *)((long)puVar2 + lVar17),
                *(size_t *)(*(long *)(puVar11 + -8) + 0x40));
      }
      puVar9 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x1c));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x1c));
      uVar21 = puVar3[1];
      *puVar9 = *puVar3;
      puVar9[1] = uVar21;
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x20)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x20));
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x24)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x24));
      puVar9 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x28));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x28));
      *(undefined1 *)(puVar9 + 1) = *(undefined1 *)(puVar3 + 1);
      *puVar9 = *puVar3;
      lVar20 = (long)*(int *)(lVar8 + 0x2c);
      DVar12 = Foundation::Date::typeMetadataAccessor();
      lVar17 = *(long *)(DVar12.unknown + -8);
      pcVar16 = *(code **)(lVar17 + 0x30);
      _swift_bridgeObjectRetain(uVar21);
      lVar15 = (long)puVar2 + lVar20;
      (*pcVar16)(lVar15,1,DVar12.unknown);
      if ((int)lVar15 == 0) {
        (**(code **)(lVar17 + 0x10))((long)puVar1 + lVar20,(long)puVar2 + lVar20,DVar12.unknown);
        (**(code **)(lVar17 + 0x38))((long)puVar1 + lVar20,0,1,DVar12.unknown);
      }
      else {
        puVar11 = &DAT_10054b950;
        FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
        _memcpy((void *)((long)puVar1 + lVar20),(void *)((long)puVar2 + lVar20),
                *(size_t *)(*(long *)(puVar11 + -8) + 0x40));
      }
      puVar9 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x30));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x30));
      *puVar9 = *puVar3;
      *(undefined1 *)(puVar9 + 1) = *(undefined1 *)(puVar3 + 1);
      puVar9 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x34));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x34));
      uVar21 = puVar3[1];
      *puVar9 = *puVar3;
      puVar9[1] = uVar21;
      puVar9 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x38));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x38));
      *puVar9 = *puVar3;
      *(undefined1 *)(puVar9 + 1) = *(undefined1 *)(puVar3 + 1);
      puVar9 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x3c));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x3c));
      uVar21 = puVar3[1];
      *puVar9 = *puVar3;
      puVar9[1] = uVar21;
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x40)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x40));
      uVar18 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x44));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x44)) = uVar18;
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x48)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x48));
      pcVar16 = *(code **)(lVar19 + 0x38);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar21);
      _swift_bridgeObjectRetain(uVar18);
      (*pcVar16)(puVar1,0,1,lVar8);
    }
    else {
      puVar11 = &DAT_10054ac40;
      FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
      _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar11 + -8) + 0x40));
    }
    iVar6 = *(int *)(param_3 + 0x1c);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
    puVar1 = (undefined8 *)((long)param_2 + (long)iVar6);
    uVar13 = puVar1[1];
    uVar21 = *puVar1;
    puVar2 = (undefined8 *)((long)param_1 + (long)iVar6);
    puVar2[1] = puVar1[1];
    *puVar2 = uVar21;
    iVar6 = *(int *)(param_3 + 0x24);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
    uVar21 = *puVar2;
    uVar18 = puVar2[1];
    *puVar1 = uVar21;
    puVar1[1] = uVar18;
    puVar4 = (undefined1 *)((long)param_1 + (long)iVar6);
    puVar5 = (undefined1 *)((long)param_2 + (long)iVar6);
    *puVar4 = *puVar5;
    lVar15 = *(long *)(puVar5 + 8);
    *(long *)(puVar4 + 8) = lVar15;
    _swift_retain(uVar13);
    _swift_retain(uVar21);
  }
  else {
    lVar15 = *param_2;
    *param_1 = lVar15;
    uVar14 = (ulong)uVar7 & 0xff;
    param_1 = (long *)(lVar15 + (uVar14 + 0x10 & (uVar14 ^ 0xffffffffffffffff)));
  }
  _swift_retain(lVar15);
  return param_1;
}

