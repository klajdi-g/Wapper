// rea decompile_all
// name: FUN_100111c08
// address: 0x100111c08
// body: available
// range: 0x100111c08-0x100111cd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100111c08(void)

{
  undefined *puVar1;
  TaskPriority TVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  
  puVar1 = &DAT_100561090;
  puVar4 = &DAT_10041c870;
  FUN_100002f94();
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100295970();
  TVar2 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar2.unknown + -8) + 0x38))
            (&stack0xffffffffffffffd0 + -extraout_x8,1,1,TVar2.unknown);
  puVar3 = &DAT_10052c9d0;
  _swift_allocObject(&DAT_10052c9d0,0x40,7);
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x28) = 0;
  *(undefined8 *)(puVar3 + 0x20) = 0;
  *(undefined **)(puVar3 + 0x30) = puVar1;
  *(undefined **)(puVar3 + 0x38) = puVar4;
  FUN_1001b1e74(0,0,&stack0xffffffffffffffd0 + -extraout_x8,&DAT_100425f98,puVar3);
  _swift_release();
  return;
}

