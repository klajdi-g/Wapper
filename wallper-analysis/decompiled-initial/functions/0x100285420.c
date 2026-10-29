// rea decompile_all
// name: FUN_100285420
// address: 0x100285420
// body: available
// range: 0x100285420-0x10028548b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100285420(void)

{
  Logger LVar1;
  String subsystem;
  String category;
  
  LVar1 = os::Logger::typeMetadataAccessor();
  FUN_1000a1ff8(LVar1.unknown,&DAT_100558f50);
  FUN_100099338(LVar1.unknown,&DAT_100558f50);
  subsystem.bridgeObject = (void *)0x80000001004e3410;
  subsystem.str = (char *)0xd000000000000010;
  category.bridgeObject = (void *)0xe300000000000000;
  category.str = (char *)0x707061;
  os::Logger::init(subsystem,category);
  return;
}

