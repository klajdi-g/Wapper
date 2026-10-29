// rea decompile_all
// name: FUN_100099808
// address: 0x100099808
// body: available
// range: 0x100099808-0x100099a5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100099a5c to 0x10041481c _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100099808(void)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  Date DVar8;
  long lVar9;
  undefined *puVar10;
  long unaff_x20;
  ulong uVar11;
  code *pcVar12;
  
  lVar5 = 0;
  FUN_100095ec0();
  uVar11 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x50));
  }
  lVar1 = unaff_x20 + (uVar11 + 0x58 & (uVar11 ^ 0xffffffffffffffff));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x30));
  lVar6 = 0;
  FUN_10009e280();
  iVar3 = *(int *)(lVar6 + 0x2c);
  lVar7 = 0;
  FUN_10015f8e8();
  iVar4 = *(int *)(lVar7 + 0x14);
  DVar8 = Foundation::Date::typeMetadataAccessor();
  pcVar12 = *(code **)(*(long *)(DVar8.unknown + -8) + 8);
  (*pcVar12)(lVar1 + (long)iVar3 + (long)iVar4,DVar8.unknown);
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x24) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x28) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x2c) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x30) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x34) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x38) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x3c) + 8));
  lVar2 = lVar1 + *(int *)(lVar5 + 0x40);
  lVar9 = lVar2;
  (**(code **)(*(long *)(lVar6 + -8) + 0x30))(lVar2,1,lVar6);
  if ((int)lVar9 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x18));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x30));
    (*pcVar12)(lVar2 + (long)*(int *)(lVar6 + 0x2c) + (long)*(int *)(lVar7 + 0x14),DVar8.unknown);
  }
  puVar10 = &DAT_10054efb0;
  FUN_100002f94(&DAT_10054efb0,&DAT_100421520);
  _swift_release(*(undefined8 *)(lVar2 + *(int *)(puVar10 + 0x1c)));
  lVar1 = lVar1 + *(int *)(lVar5 + 0x44);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x30));
  (*pcVar12)(lVar1 + (long)*(int *)(lVar6 + 0x2c) + (long)*(int *)(lVar7 + 0x14),DVar8.unknown);
  puVar10 = &DAT_10054efb8;
  FUN_100002f94(&DAT_10054efb8,&DAT_100420510);
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(puVar10 + 0x1c)));
  _swift_deallocObject();
  return;
}

