// rea decompile_all
// name: thunk_FUN_100093784
// address: 0x10009370c
// body: available
// range: 0x10009370c-0x10009370f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void thunk_FUN_100093784(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  Date DVar6;
  long unaff_x20;
  ulong uVar7;
  
  lVar4 = 0;
  FUN_10007b2b8();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  lVar1 = unaff_x20 + (uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x30));
  lVar5 = 0;
  FUN_10009e280();
  iVar2 = *(int *)(lVar5 + 0x2c);
  lVar5 = 0;
  FUN_10015f8e8();
  iVar3 = *(int *)(lVar5 + 0x14);
  DVar6 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar6.unknown + -8) + 8))(lVar1 + (long)iVar2 + (long)iVar3,DVar6.unknown);
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x24) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x28) + 8));
  _swift_deallocObject();
  return;
}

