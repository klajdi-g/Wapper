// rea decompile_all
// name: FUN_100159ccc
// address: 0x100159ccc
// body: available
// range: 0x100159ccc-0x100159d87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100159ccc(void)

{
  Date DVar1;
  undefined *puVar2;
  Date DVar3;
  long extraout_x8;
  long lVar4;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
  lVar4 = *(long *)(DVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar4 + 0x40));
  puVar2 = (undefined *)0x0;
  FUN_10015f8e8();
  FUN_1000a1ff8();
  DVar3.unknown = puVar2;
  FUN_100099338(puVar2,&DAT_100577c68);
  Foundation::Date::get_distantPast(DVar3);
  *(undefined8 *)DVar3.unknown = 0;
  (**(code **)(lVar4 + 0x20))
            (DVar3.unknown + *(int *)(puVar2 + 0x14),
             &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),DVar1.unknown);
  *(undefined8 *)(DVar3.unknown + *(int *)(puVar2 + 0x18)) = 0;
  return;
}

