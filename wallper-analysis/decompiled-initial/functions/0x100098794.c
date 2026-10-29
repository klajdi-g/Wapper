// rea decompile_all
// name: thunk_FUN_1000987ac
// address: 0x100098794
// body: available
// range: 0x100098794-0x100098797 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void thunk_FUN_1000987ac(void)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  Date DVar8;
  undefined *puVar9;
  long unaff_x20;
  code *pcVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  
  lVar5 = 0;
  FUN_100097a30();
  lVar13 = *(long *)(lVar5 + -8);
  uVar11 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar12 = uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff);
  lVar1 = unaff_x20 + uVar12;
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
  pcVar10 = *(code **)(*(long *)(DVar8.unknown + -8) + 8);
  (*pcVar10)(lVar1 + (long)iVar3 + (long)iVar4,DVar8.unknown);
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x20) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x24) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x28) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x2c) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x30) + 8));
  lVar2 = lVar1 + *(int *)(lVar5 + 0x34);
  lVar14 = lVar2;
  (**(code **)(*(long *)(lVar6 + -8) + 0x30))(lVar2,1,lVar6);
  if ((int)lVar14 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x18));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x30));
    (*pcVar10)(lVar2 + (long)*(int *)(lVar6 + 0x2c) + (long)*(int *)(lVar7 + 0x14),DVar8.unknown);
  }
  lVar14 = *(long *)(lVar13 + 0x40);
  puVar9 = &DAT_10054efb0;
  FUN_100002f94(&DAT_10054efb0,&DAT_100421520);
  _swift_release(*(undefined8 *)(lVar2 + *(int *)(puVar9 + 0x1c)));
  lVar1 = lVar1 + *(int *)(lVar5 + 0x38);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x30));
  (*pcVar10)(lVar1 + (long)*(int *)(lVar6 + 0x2c) + (long)*(int *)(lVar7 + 0x14),DVar8.unknown);
  puVar9 = &DAT_10054efb8;
  FUN_100002f94(&DAT_10054efb8,&DAT_100420510);
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(puVar9 + 0x1c)));
  _swift_deallocObject(unaff_x20,lVar14 + uVar12,uVar11 | 7);
  return;
}

