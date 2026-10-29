// rea decompile_all
// name: FUN_100398d4c
// address: 0x100398d4c
// body: available
// range: 0x100398d4c-0x10039906b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100399068 to 0x10041481c _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100398d4c(void)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  UUID UVar5;
  long lVar6;
  Date DVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  URL UVar11;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  code *pcVar16;
  long unaff_x20;
  long lVar17;
  code *pcVar18;
  ulong uVar19;
  code *pcVar20;
  
  lVar4 = 0;
  FUN_10038f3a0();
  lVar13 = *(long *)(lVar4 + -8);
  uVar19 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar14 = uVar19 + 0x10 & (uVar19 ^ 0xffffffffffffffff);
  lVar1 = unaff_x20 + uVar14;
  UVar5 = Foundation::UUID::typeMetadataAccessor();
  pcVar18 = *(code **)(*(long *)(UVar5.unknown + -8) + 8);
  (*pcVar18)(lVar1,UVar5.unknown);
  lVar6 = 0;
  FUN_10025ee04();
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar6 + 0x14) + 8));
  iVar3 = *(int *)(lVar6 + 0x18);
  DVar7 = Foundation::Date::typeMetadataAccessor();
  lVar15 = *(long *)(DVar7.unknown + -8);
  pcVar16 = *(code **)(lVar15 + 8);
  (*pcVar16)(lVar1 + iVar3,DVar7.unknown);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar6 + 0x20)));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar6 + 0x34)));
  lVar6 = lVar1 + *(int *)(lVar4 + 0x14);
  lVar8 = 0;
  FUN_1001d537c();
  lVar9 = lVar6;
  _swift_getEnumCaseMultiPayload(lVar6,lVar8);
  if ((int)lVar9 == 1) {
    (*pcVar18)(lVar6,UVar5.unknown);
  }
  lVar9 = 0;
  FUN_1001d59ac();
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + *(int *)(lVar9 + 0x14) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + *(int *)(lVar9 + 0x18) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + *(int *)(lVar9 + 0x24)));
  lVar6 = lVar1 + *(int *)(lVar4 + 0x18);
  lVar10 = 0;
  FUN_10040211c();
  lVar9 = lVar6;
  (**(code **)(*(long *)(lVar10 + -8) + 0x30))(lVar6,1,lVar10);
  if ((int)lVar9 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 8));
    iVar3 = *(int *)(lVar10 + 0x14);
    UVar11 = Foundation::URL::typeMetadataAccessor();
    lVar17 = *(long *)(UVar11.unknown + -8);
    pcVar20 = *(code **)(lVar17 + 8);
    (*pcVar20)(lVar6 + iVar3,UVar11.unknown);
    iVar3 = *(int *)(lVar10 + 0x18);
    lVar9 = lVar6 + iVar3;
    (**(code **)(lVar17 + 0x30))(lVar9,1,UVar11.unknown);
    if ((int)lVar9 == 0) {
      (*pcVar20)(lVar6 + iVar3,UVar11.unknown);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + *(int *)(lVar10 + 0x1c) + 8));
    iVar3 = *(int *)(lVar10 + 0x2c);
    lVar9 = lVar6 + iVar3;
    (**(code **)(lVar15 + 0x30))(lVar9,1,DVar7.unknown);
    if ((int)lVar9 == 0) {
      (*pcVar16)(lVar6 + iVar3,DVar7.unknown);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + *(int *)(lVar10 + 0x34) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + *(int *)(lVar10 + 0x3c) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + *(int *)(lVar10 + 0x44)));
  }
  puVar2 = (undefined8 *)(lVar1 + *(int *)(lVar4 + 0x24));
  _swift_release(*puVar2);
  _swift_release(puVar2[1]);
  puVar12 = &DAT_10055eb98;
  FUN_100002f94(&DAT_10055eb98,&DAT_1004343f8);
  lVar9 = (long)*(int *)(puVar12 + 0x20);
  lVar6 = (long)puVar2 + lVar9;
  (**(code **)(*(long *)(lVar8 + -8) + 0x30))(lVar6,1,lVar8);
  if ((int)lVar6 == 0) {
    lVar6 = (long)puVar2 + lVar9;
    _swift_getEnumCaseMultiPayload(lVar6,lVar8);
    if ((int)lVar6 == 1) {
      (*pcVar18)((long)puVar2 + lVar9,UVar5.unknown);
    }
  }
  lVar6 = *(long *)(lVar13 + 0x40);
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x28) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x2c)));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x30)));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x34) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x38) + 8));
  _swift_deallocObject(unaff_x20,lVar6 + uVar14,uVar19 | 7);
  return;
}

