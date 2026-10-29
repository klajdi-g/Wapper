// rea decompile_all
// name: FUN_1001ec05c
// address: 0x1001ec05c
// body: available
// range: 0x1001ec05c-0x1001ec16b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001ec05c(void)

{
  code *pcVar1;
  undefined *puVar2;
  long extraout_x8;
  long unaff_x20;
  long lVar3;
  long lVar4;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  puVar2 = &DAT_100556a40;
  FUN_100002f94(&DAT_100556a40,&DAT_10042abc0);
  lVar3 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(unaff_x20 + 0x78,auStack_58,0,0);
  lVar4 = *(long *)(unaff_x20 + 0x78);
  if (*(long *)(lVar4 + 0x10) == 0) {
    if (SCARRY8(*(long *)(unaff_x20 + 0x70),1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1001ec16c);
      (*pcVar1)();
    }
    *(long *)(unaff_x20 + 0x70) = *(long *)(unaff_x20 + 0x70) + 1;
  }
  else {
    _swift_beginAccess(unaff_x20 + 0x78,auStack_70,0x21,0);
    (**(code **)(lVar3 + 0x10))
              (auStack_70 + -extraout_x8,
               lVar4 + ((ulong)*(byte *)(lVar3 + 0x50) + 0x20 &
                       ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff)),puVar2);
    FUN_1002886e8(0,1);
    _swift_endAccess(auStack_70);
    Swift::CheckedContinuation::resume();
    (**(code **)(lVar3 + 8))(auStack_70 + -extraout_x8,puVar2);
  }
  return;
}

