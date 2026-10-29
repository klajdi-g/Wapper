// rea decompile_all
// name: FUN_1001f06e8
// address: 0x1001f06e8
// body: available
// range: 0x1001f06e8-0x1001f07cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001f06e8(void)

{
  code *pcVar1;
  undefined *puVar2;
  UUID UVar3;
  UUID UVar4;
  undefined1 *puVar5;
  long extraout_x8;
  undefined1 *puVar6;
  long lVar7;
  
  puVar2 = &DAT_10054a9c8;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &stack0xffffffffffffffd0 + -extraout_x8;
  UVar3 = Foundation::UUID::typeMetadataAccessor();
  FUN_1000a1ff8(UVar3.unknown,&DAT_100577d00);
  UVar4 = UVar3;
  FUN_100099338(UVar3.unknown,&DAT_100577d00);
  Foundation::UUID::_init();
  lVar7 = *(long *)(UVar3.unknown + -8);
  puVar5 = puVar6;
  (**(code **)(lVar7 + 0x30))(puVar6,1,UVar3.unknown);
  if ((int)puVar5 != 1) {
    (**(code **)(lVar7 + 0x20))(UVar4.unknown,puVar6,UVar3.unknown);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1001f07cc);
  (*pcVar1)();
}

