// rea decompile_all
// name: FUN_10015ccf8
// address: 0x10015ccf8
// body: available
// range: 0x10015ccf8-0x10015cda7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10015cda4 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10015ccf8(Task param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = _TtC7Wallper13LyricsManager::duration;
  lVar4 = *(long *)(unaff_x22 + 0x2b8);
  *(long *)(unaff_x22 + 0x3b0) = _TtC7Wallper13LyricsManager::duration;
  cVar1 = *(char *)(lVar4 + lVar5 + 8);
  if (cVar1 == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x3b8) = 0;
    bVar2 = (extension_Swift)::Swift::Task::_get_isCancelled(param_1);
    if (!bVar2) {
      (extension_Swift)::Swift::Clock::_get_continuous();
      *(undefined8 *)(unaff_x22 + 600) = 100000000000000000;
      *(undefined8 *)(unaff_x22 + 0x260) = 0;
      *(undefined8 *)(unaff_x22 + 0x1f0) = 0;
      *(undefined8 *)(unaff_x22 + 0x1f8) = 0;
      *(undefined1 *)(unaff_x22 + 0x200) = 1;
      pcVar3 = FUN_10015cda8;
      goto LAB_10015cd90;
    }
    lVar5 = *(long *)(unaff_x22 + 0x3b0);
    lVar4 = *(long *)(unaff_x22 + 0x2b8);
    cVar1 = *(char *)(lVar4 + lVar5 + 8);
  }
  *(char *)(unaff_x22 + 0x205) = cVar1;
  *(undefined8 *)(unaff_x22 + 0x3d0) = *(undefined8 *)(lVar4 + lVar5);
  pcVar3 = FUN_10015d0f4;
LAB_10015cd90:
  _swift_task_switch(pcVar3,0,0);
  return;
}

