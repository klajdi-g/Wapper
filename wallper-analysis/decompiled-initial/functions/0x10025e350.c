// rea decompile_all
// name: FUN_10025e350
// address: 0x10025e350
// body: available
// range: 0x10025e350-0x10025e4b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010025e444) */

undefined1 * FUN_10025e350(long param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long unaff_x21;
  long lVar3;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar1 = &DAT_100557fa8;
  FUN_100002f94(&DAT_100557fa8,&DAT_10042c228);
  lVar3 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = *(undefined1 **)(param_1 + 0x18);
  FUN_100007bd0(param_1,puVar2);
  FUN_10025e4b4();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_51 = 0;
    puVar2 = &local_51;
    Swift::KeyedDecodingContainer::_decodeIfPresent(puVar2,puVar1);
    local_52 = 1;
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_52,puVar1);
    (**(code **)(lVar3 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,puVar1);
    FUN_100043f24(param_1);
  }
  else {
    FUN_100043f24(param_1);
  }
  return puVar2;
}

