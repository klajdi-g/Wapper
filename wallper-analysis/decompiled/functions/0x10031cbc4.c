// rea decompile_all
// name: FUN_10031cbc4
// address: 0x10031cbc4
// body: available
// range: 0x10031cbc4-0x10031cdf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10031cdf0 to 0x10041481c _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10031cbc4(void)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  URL UVar7;
  Date DVar8;
  long unaff_x20;
  code *pcVar9;
  long lVar10;
  
  puVar4 = &DAT_100554260;
  FUN_100002f94(&DAT_100554260,&DAT_100426eb0);
  bVar2 = *(byte *)(*(long *)(puVar4 + -8) + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x60));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x70));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x78));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x80));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x90));
  _swift_release(*(undefined8 *)(unaff_x20 + 0xa0));
  _swift_release(*(undefined8 *)(unaff_x20 + 0xb0));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0xb8));
  _swift_release(*(undefined8 *)(unaff_x20 + 0xc0));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 200));
  _swift_release(*(undefined8 *)(unaff_x20 + 0xd0));
  _swift_release(*(undefined8 *)(unaff_x20 + 0xe0));
  _swift_release(*(undefined8 *)(unaff_x20 + 0xe8));
  _swift_release(*(undefined8 *)(unaff_x20 + 0xf0));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x100));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x110));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x128));
  lVar1 = unaff_x20 + ((ulong)bVar2 + 0x131 & ((ulong)bVar2 ^ 0xffffffffffffffff));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x18));
  lVar1 = lVar1 + *(int *)(puVar4 + 0x50);
  lVar5 = 0;
  FUN_10040211c();
  lVar6 = lVar1;
  (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar1,1,lVar5);
  if ((int)lVar6 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
    iVar3 = *(int *)(lVar5 + 0x14);
    UVar7 = Foundation::URL::typeMetadataAccessor();
    lVar10 = *(long *)(UVar7.unknown + -8);
    pcVar9 = *(code **)(lVar10 + 8);
    (*pcVar9)(lVar1 + iVar3,UVar7.unknown);
    iVar3 = *(int *)(lVar5 + 0x18);
    lVar6 = lVar1 + iVar3;
    (**(code **)(lVar10 + 0x30))(lVar6,1,UVar7.unknown);
    if ((int)lVar6 == 0) {
      (*pcVar9)(lVar1 + iVar3,UVar7.unknown);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x1c) + 8));
    iVar3 = *(int *)(lVar5 + 0x2c);
    DVar8 = Foundation::Date::typeMetadataAccessor();
    lVar10 = *(long *)(DVar8.unknown + -8);
    lVar6 = lVar1 + iVar3;
    (**(code **)(lVar10 + 0x30))(lVar6,1,DVar8.unknown);
    if ((int)lVar6 == 0) {
      (**(code **)(lVar10 + 8))(lVar1 + iVar3,DVar8.unknown);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x34) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x3c) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x44)));
  }
  _swift_deallocObject();
  return;
}

