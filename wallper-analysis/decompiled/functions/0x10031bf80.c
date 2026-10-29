// rea decompile_all
// name: FUN_10031bf80
// address: 0x10031bf80
// body: available
// range: 0x10031bf80-0x10031c187 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10031c184 to 0x10041481c _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10031bf80(void)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  URL UVar5;
  long lVar6;
  Date DVar7;
  long unaff_x20;
  ulong uVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  
  lVar4 = 0;
  FUN_10040211c();
  lVar9 = *(long *)(lVar4 + -8);
  uVar8 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar8 = uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff);
  lVar1 = unaff_x20 + uVar8;
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
  iVar3 = *(int *)(lVar4 + 0x14);
  UVar5 = Foundation::URL::typeMetadataAccessor();
  lVar11 = *(long *)(UVar5.unknown + -8);
  pcVar10 = *(code **)(lVar11 + 8);
  (*pcVar10)(lVar1 + iVar3,UVar5.unknown);
  iVar3 = *(int *)(lVar4 + 0x18);
  lVar6 = lVar1 + iVar3;
  (**(code **)(lVar11 + 0x30))(lVar6,1,UVar5.unknown);
  if ((int)lVar6 == 0) {
    (*pcVar10)(lVar1 + iVar3,UVar5.unknown);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x1c) + 8));
  iVar3 = *(int *)(lVar4 + 0x2c);
  DVar7 = Foundation::Date::typeMetadataAccessor();
  lVar11 = *(long *)(DVar7.unknown + -8);
  lVar6 = lVar1 + iVar3;
  (**(code **)(lVar11 + 0x30))(lVar6,1,DVar7.unknown);
  if ((int)lVar6 == 0) {
    (**(code **)(lVar11 + 8))(lVar1 + iVar3,DVar7.unknown);
  }
  uVar8 = uVar8 + *(long *)(lVar9 + 0x40) + 7 & 0xfffffffffffffff8;
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x34) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x3c) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x44)));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + uVar8 + 8));
  puVar2 = (undefined8 *)(unaff_x20 + uVar8 + 0x10);
  _swift_release(*puVar2);
  _swift_bridgeObjectRelease(puVar2[3]);
  _swift_release(puVar2[4]);
  _swift_release(puVar2[6]);
  _swift_release(puVar2[8]);
  _swift_release(puVar2[10]);
  _swift_release(puVar2[0xc]);
  _swift_bridgeObjectRelease(puVar2[0xd]);
  _swift_release(puVar2[0xe]);
  _swift_release(puVar2[0x10]);
  _swift_release(puVar2[0x12]);
  _swift_release(puVar2[0x14]);
  _swift_bridgeObjectRelease(puVar2[0x15]);
  _swift_release(puVar2[0x16]);
  _swift_bridgeObjectRelease(puVar2[0x17]);
  _swift_release(puVar2[0x18]);
  _swift_release(puVar2[0x1a]);
  _swift_release(puVar2[0x1b]);
  _swift_release(puVar2[0x1c]);
  _swift_release(puVar2[0x1e]);
  _swift_release(puVar2[0x20]);
  _swift_release(puVar2[0x23]);
  _swift_deallocObject();
  return;
}

