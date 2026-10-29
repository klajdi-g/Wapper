// rea decompile_all
// name: FUN_1003f42cc
// address: 0x1003f42cc
// body: available
// range: 0x1003f42cc-0x1003f436f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1003f42cc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _TtC7Wallper11AppDelegate::___lazy_storage___shuffleManager;
  lVar2 = *(long *)(unaff_x20 + _TtC7Wallper11AppDelegate::___lazy_storage___shuffleManager);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar2 = *(long *)(unaff_x20 + _TtC7Wallper11AppDelegate::videoLibrary);
    FUN_100226ac0();
    _swift_allocObject();
    lVar3 = lVar2;
    _swift_retain();
    FUN_100229d28();
    _swift_release(lVar2);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    _swift_retain(lVar3);
    _swift_release(uVar4);
    lVar2 = 0;
  }
  _swift_retain(lVar2);
  return lVar3;
}

