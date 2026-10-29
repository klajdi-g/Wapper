// rea decompile_all
// name: FUN_1003859c4
// address: 0x1003859c4
// body: available
// range: 0x1003859c4-0x100385d27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_1003859c4(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *pvVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  UUID UVar11;
  undefined *puVar12;
  DismissAction DVar13;
  long lVar14;
  void *pvVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  code *pcVar21;
  undefined8 uVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  uVar9 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar9 >> 0x11 & 1) == 0) {
    UVar11 = Foundation::UUID::typeMetadataAccessor();
    pcVar21 = *(code **)(*(long *)(UVar11.unknown + -8) + 0x10);
    (*pcVar21)(param_1,param_2,UVar11.unknown);
    iVar8 = *(int *)(param_3 + 0x18);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    uVar7 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar7;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar8);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar8);
    uVar7 = *puVar2;
    uVar17 = puVar2[1];
    *puVar1 = uVar7;
    puVar1[1] = uVar17;
    lVar23 = (long)*(int *)(param_3 + 0x20);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    uVar17 = *puVar2;
    uVar18 = puVar2[1];
    *puVar1 = uVar17;
    puVar1[1] = uVar18;
    _swift_retain();
    _swift_retain(uVar7);
    _swift_retain(uVar17);
    puVar12 = &DAT_10055c948;
    FUN_100002f94(&DAT_10055c948,&DAT_100435240);
    lVar14 = (long)param_2 + lVar23;
    _swift_getEnumCaseMultiPayload(lVar14,puVar12);
    bVar10 = (int)lVar14 != 1;
    if (bVar10) {
      *(undefined8 *)((long)param_1 + lVar23) = *(undefined8 *)((long)param_2 + lVar23);
      _swift_retain();
    }
    else {
      DVar13 = SwiftUI::DismissAction::typeMetadataAccessor();
      (**(code **)(*(long *)(DVar13.unknown + -8) + 0x10))
                ((long)param_1 + lVar23,(long)param_2 + lVar23,DVar13.unknown);
    }
    _swift_storeEnumTagMultiPayload((long)param_1 + lVar23,puVar12,!bVar10);
    pvVar3 = (void *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
    pvVar4 = (void *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
    lVar14 = 0;
    FUN_1001d537c();
    lVar23 = *(long *)(lVar14 + -8);
    pvVar15 = pvVar4;
    (**(code **)(lVar23 + 0x30))(pvVar4,1,lVar14);
    if ((int)pvVar15 == 0) {
      pvVar15 = pvVar4;
      _swift_getEnumCaseMultiPayload(pvVar4,lVar14);
      if ((int)pvVar15 == 1) {
        (*pcVar21)(pvVar3,pvVar4,UVar11.unknown);
        _swift_storeEnumTagMultiPayload(pvVar3,lVar14,1);
      }
      else {
        _memcpy(pvVar3,pvVar4,*(size_t *)(lVar23 + 0x40));
      }
      (**(code **)(lVar23 + 0x38))(pvVar3,0,1,lVar14);
    }
    else {
      puVar12 = &DAT_100550ec0;
      FUN_100002f94(&DAT_100550ec0,&DAT_100422eb0);
      _memcpy(pvVar3,pvVar4,*(size_t *)(*(long *)(puVar12 + -8) + 0x40));
    }
    puVar12 = &DAT_10055dca8;
    FUN_100002f94(&DAT_10055dca8,&DAT_1004334a8);
    *(undefined8 *)((long)pvVar3 + (long)*(int *)(puVar12 + 0x1c)) =
         *(undefined8 *)((long)pvVar4 + (long)*(int *)(puVar12 + 0x1c));
    iVar8 = *(int *)(param_3 + 0x2c);
    puVar5 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
    puVar6 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
    *puVar5 = *puVar6;
    uVar17 = *(undefined8 *)(puVar6 + 8);
    *(undefined8 *)(puVar5 + 8) = uVar17;
    puVar5 = (undefined1 *)((long)param_1 + (long)iVar8);
    puVar6 = (undefined1 *)((long)param_2 + (long)iVar8);
    *puVar5 = *puVar6;
    uVar18 = *(undefined8 *)(puVar6 + 8);
    *(undefined8 *)(puVar5 + 8) = uVar18;
    iVar8 = *(int *)(param_3 + 0x34);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
    *puVar1 = *puVar2;
    uVar19 = puVar2[2];
    uVar25 = puVar2[1];
    puVar1[2] = puVar2[2];
    puVar1[1] = uVar25;
    puVar5 = (undefined1 *)((long)param_1 + (long)iVar8);
    puVar6 = (undefined1 *)((long)param_2 + (long)iVar8);
    *puVar5 = *puVar6;
    uVar20 = *(undefined8 *)(puVar6 + 8);
    *(undefined8 *)(puVar5 + 8) = uVar20;
    iVar8 = *(int *)(param_3 + 0x3c);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
    *puVar1 = *puVar2;
    uVar22 = puVar2[2];
    uVar26 = puVar2[1];
    puVar1[2] = puVar2[2];
    puVar1[1] = uVar26;
    puVar5 = (undefined1 *)((long)param_1 + (long)iVar8);
    puVar6 = (undefined1 *)((long)param_2 + (long)iVar8);
    *puVar5 = *puVar6;
    uVar24 = *(undefined8 *)(puVar6 + 8);
    *(undefined8 *)(puVar5 + 8) = uVar24;
    iVar8 = *(int *)(param_3 + 0x44);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x40));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x40));
    uVar7 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar7;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar8);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar8);
    lVar14 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = lVar14;
    _swift_retain();
    _swift_retain(uVar17);
    _swift_retain(uVar18);
    _swift_bridgeObjectRetain(uVar25);
    _swift_retain(uVar19);
    _swift_retain(uVar20);
    _swift_bridgeObjectRetain(uVar26);
    _swift_retain(uVar22);
    _swift_retain(uVar24);
    _swift_retain(uVar7);
  }
  else {
    lVar14 = *param_2;
    *param_1 = lVar14;
    uVar16 = (ulong)uVar9 & 0xff;
    param_1 = (long *)(lVar14 + (uVar16 + 0x10 & (uVar16 ^ 0xffffffffffffffff)));
  }
  _swift_retain(lVar14);
  return param_1;
}

