// rea decompile_all
// name: FUN_100091acc
// address: 0x100091acc
// body: available
// range: 0x100091acc-0x100091c27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

long FUN_100091acc(ulong param_1)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_48 [24];
  
  bVar2 = (param_1 & 1) == 0;
  lVar4 = 0x6c2d64726f636572;
  if (bVar2) {
    lVar4 = 0x64726f636572;
  }
  uVar6 = 0xec00000065677261;
  if (bVar2) {
    uVar6 = 0xe600000000000000;
  }
  if (DAT_10054ed30 != -1) {
    _swift_once(&DAT_10054ed30,FUN_1000787bc);
  }
  _swift_beginAccess(&DAT_10054ed38,auStack_48,0x20,0);
  lVar1 = DAT_10054ed38;
  if (*(long *)(DAT_10054ed38 + 0x10) != 0) {
    _swift_bridgeObjectRetain(DAT_10054ed38);
    lVar3 = lVar4;
    uVar5 = uVar6;
    FUN_10000464c();
    if ((uVar5 & 1) != 0) {
      lVar3 = *(long *)(*(long *)(lVar1 + 0x38) + lVar3 * 8);
      _swift_endAccess(auStack_48);
      _swift_bridgeObjectRelease(lVar1);
      FUN_1000911d0(lVar4,uVar6);
      _swift_bridgeObjectRelease(uVar6);
      return lVar3;
    }
    _swift_bridgeObjectRelease(lVar1);
  }
  _swift_endAccess(auStack_48);
  lVar4 = 0x898;
  if ((param_1 & 1) == 0) {
    lVar4 = 0x578;
  }
  FUN_100091718();
  if (lVar4 == 0) {
    _swift_bridgeObjectRelease(uVar6);
    lVar4 = 0;
  }
  else {
    FUN_1000913ac();
    _swift_bridgeObjectRelease(uVar6);
  }
  return lVar4;
}

