// rea decompile_all
// name: FUN_1003edd04
// address: 0x1003edd04
// body: available
// range: 0x1003edd04-0x1003ee073 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003ee070 to 0x10041481c _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003edd04(void)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  URL UVar7;
  Date DVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  ulong uVar13;
  long unaff_x20;
  ulong uVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  code *pcVar18;
  
  lVar5 = 0;
  FUN_1003e4bc8();
  lVar11 = *(long *)(lVar5 + -8);
  uVar13 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar14 = uVar13 + 0x20 & (uVar13 ^ 0xffffffffffffffff);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = unaff_x20 + uVar14;
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
  lVar6 = 0;
  FUN_10040211c();
  iVar4 = *(int *)(lVar6 + 0x14);
  UVar7 = Foundation::URL::typeMetadataAccessor();
  lVar16 = *(long *)(UVar7.unknown + -8);
  pcVar12 = *(code **)(lVar16 + 8);
  (*pcVar12)(lVar1 + iVar4,UVar7.unknown);
  iVar4 = *(int *)(lVar6 + 0x18);
  pcVar18 = *(code **)(lVar16 + 0x30);
  lVar16 = lVar1 + iVar4;
  (*pcVar18)(lVar16,1,UVar7.unknown);
  if ((int)lVar16 == 0) {
    (*pcVar12)(lVar1 + iVar4,UVar7.unknown);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar6 + 0x1c) + 8));
  iVar4 = *(int *)(lVar6 + 0x2c);
  DVar8 = Foundation::Date::typeMetadataAccessor();
  lVar15 = *(long *)(DVar8.unknown + -8);
  pcVar17 = *(code **)(lVar15 + 0x30);
  lVar16 = lVar1 + iVar4;
  (*pcVar17)(lVar16,1,DVar8.unknown);
  if ((int)lVar16 == 0) {
    (**(code **)(lVar15 + 8))(lVar1 + iVar4,DVar8.unknown);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar6 + 0x34) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar6 + 0x3c) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar6 + 0x44)));
  puVar2 = (undefined8 *)(lVar1 + *(int *)(lVar5 + 0x18));
  _swift_release(*puVar2);
  _swift_release(puVar2[1]);
  puVar9 = &DAT_100560758;
  FUN_100002f94(&DAT_100560758,&DAT_100436160);
  lVar16 = (long)puVar2 + (long)*(int *)(puVar9 + 0x20);
  lVar10 = lVar16;
  (**(code **)(*(long *)(lVar6 + -8) + 0x30))(lVar16,1,lVar6);
  if ((int)lVar10 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar16 + 8));
    (*pcVar12)(lVar16 + *(int *)(lVar6 + 0x14),UVar7.unknown);
    iVar4 = *(int *)(lVar6 + 0x18);
    lVar10 = lVar16 + iVar4;
    (*pcVar18)(lVar10,1,UVar7.unknown);
    if ((int)lVar10 == 0) {
      (*pcVar12)(lVar16 + iVar4,UVar7.unknown);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar16 + *(int *)(lVar6 + 0x1c) + 8));
    iVar4 = *(int *)(lVar6 + 0x2c);
    lVar10 = lVar16 + iVar4;
    (*pcVar17)(lVar10,1,DVar8.unknown);
    if ((int)lVar10 == 0) {
      (**(code **)(lVar15 + 8))(lVar16 + iVar4,DVar8.unknown);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar16 + *(int *)(lVar6 + 0x34) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar16 + *(int *)(lVar6 + 0x3c) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar16 + *(int *)(lVar6 + 0x44)));
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x24) + 8));
  plVar3 = (long *)(lVar1 + *(int *)(lVar5 + 0x28));
  if (*plVar3 != 0) {
    _swift_release(plVar3[1]);
  }
  plVar3 = (long *)(lVar1 + *(int *)(lVar5 + 0x2c));
  if (*plVar3 != 0) {
    _swift_release(plVar3[1]);
  }
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x30)));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x34) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x38) + 8));
  lVar16 = lVar1 + *(int *)(lVar5 + 0x3c);
  lVar6 = lVar16;
  (*pcVar18)(lVar16,1,UVar7.unknown);
  if ((int)lVar6 == 0) {
    (*pcVar12)(lVar16,UVar7.unknown);
  }
  lVar6 = *(long *)(lVar11 + 0x40);
  puVar9 = &DAT_100560760;
  FUN_100002f94(&DAT_100560760,&DAT_100436168);
  _swift_release(*(undefined8 *)(lVar16 + *(int *)(puVar9 + 0x1c)));
  lVar16 = lVar1 + *(int *)(lVar5 + 0x40);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar16 + 8));
  _swift_release(*(undefined8 *)(lVar16 + 0x10));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x44) + 8));
  lVar1 = lVar1 + *(int *)(lVar5 + 0x48);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
  _swift_release(*(undefined8 *)(lVar1 + 0x10));
  _swift_deallocObject(unaff_x20,lVar6 + uVar14,uVar13 | 7);
  return;
}

