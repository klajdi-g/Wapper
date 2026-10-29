// rea decompile_all
// name: FUN_10013dcd8
// address: 0x10013dcd8
// body: available
// range: 0x10013dcd8-0x10013de0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10013dcd8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  long unaff_x21;
  long lVar4;
  undefined1 auStack_60 [8];
  long local_58;
  
  puVar1 = &DAT_1005546d0;
  FUN_100002f94(&DAT_1005546d0,&DAT_1004276b8);
  lVar4 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = param_1;
  FUN_100007bd0(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_10013de10();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    puVar3 = &DAT_1005545e8;
    FUN_100002f94(&DAT_1005545e8,&DAT_100427498);
    FUN_10013de50();
    Swift::KeyedDecodingContainer::_decode(&local_58,puVar3);
    (**(code **)(lVar4 + 8))(auStack_60 + -extraout_x8,puVar1);
    FUN_100043f24(param_1);
  }
  else {
    FUN_100043f24(param_1);
    local_58 = lVar2;
  }
  return local_58;
}

