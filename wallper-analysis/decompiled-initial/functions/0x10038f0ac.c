// rea decompile_all
// name: thunk_FUN_10038f18c
// address: 0x10038f0ac
// body: available
// range: 0x10038f0ac-0x10038f0af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_10038f18c(void)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  UUID UVar5;
  long lVar6;
  Date DVar7;
  long lVar8;
  undefined *puVar9;
  long unaff_x20;
  code *pcVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  code *pcVar15;
  
  lVar4 = 0;
  FUN_100387eec();
  lVar14 = *(long *)(lVar4 + -8);
  uVar12 = (ulong)*(byte *)(lVar14 + 0x50);
  uVar13 = uVar12 + 0x10 & (uVar12 ^ 0xffffffffffffffff);
  lVar1 = unaff_x20 + uVar13;
  UVar5 = Foundation::UUID::typeMetadataAccessor();
  pcVar15 = *(code **)(*(long *)(UVar5.unknown + -8) + 8);
  (*pcVar15)(lVar1,UVar5.unknown);
  lVar6 = 0;
  FUN_10025ee04();
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar6 + 0x14) + 8));
  iVar3 = *(int *)(lVar6 + 0x18);
  DVar7 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar7.unknown + -8) + 8))(lVar1 + iVar3,DVar7.unknown);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar6 + 0x20)));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar6 + 0x34)));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x14)));
  iVar3 = *(int *)(lVar4 + 0x18);
  lVar8 = 0;
  FUN_1001d537c();
  lVar6 = lVar1 + iVar3;
  _swift_getEnumCaseMultiPayload(lVar6,lVar8);
  if ((int)lVar6 == 1) {
    (*pcVar15)(lVar1 + iVar3,UVar5.unknown);
  }
  lVar11 = (long)*(int *)(lVar4 + 0x1c);
  pcVar10 = *(code **)(*(long *)(lVar8 + -8) + 0x30);
  lVar6 = lVar1 + lVar11;
  (*pcVar10)(lVar6,1,lVar8);
  if ((int)lVar6 == 0) {
    lVar6 = lVar1 + lVar11;
    _swift_getEnumCaseMultiPayload(lVar6,lVar8);
    if ((int)lVar6 == 1) {
      (*pcVar15)(lVar1 + lVar11,UVar5.unknown);
    }
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x20)));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x24) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x28)));
  lVar6 = lVar1 + *(int *)(lVar4 + 0x2c);
  lVar11 = lVar6;
  (*pcVar10)(lVar6,1,lVar8);
  if (((int)lVar11 == 0) &&
     (lVar11 = lVar6, _swift_getEnumCaseMultiPayload(lVar6,lVar8), (int)lVar11 == 1)) {
    (*pcVar15)(lVar6,UVar5.unknown);
  }
  lVar8 = *(long *)(lVar14 + 0x40);
  puVar9 = &DAT_10055dca8;
  FUN_100002f94(&DAT_10055dca8,&DAT_1004334a8);
  _swift_release(*(undefined8 *)(lVar6 + *(int *)(puVar9 + 0x1c)));
  puVar2 = (undefined8 *)(lVar1 + *(int *)(lVar4 + 0x30));
  _swift_bridgeObjectRelease(*puVar2);
  _swift_release(puVar2[1]);
  _swift_deallocObject(unaff_x20,lVar8 + uVar13,uVar12 | 7);
  return;
}

