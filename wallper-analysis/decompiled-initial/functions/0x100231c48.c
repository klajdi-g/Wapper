// rea decompile_all
// name: FUN_100231c48
// address: 0x100231c48
// body: available
// range: 0x100231c48-0x100231dcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100231d88) */
/* WARNING: Removing unreachable block (ram,0x000100231d10) */

char * FUN_100231c48(long param_1)

{
  undefined *puVar1;
  char *pcVar2;
  long extraout_x8;
  long unaff_x21;
  long lVar3;
  String SVar4;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar1 = &DAT_100557828;
  FUN_100002f94(&DAT_100557828,&DAT_10042bb68);
  lVar3 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar2 = *(char **)(param_1 + 0x20);
  FUN_100007bd0(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100231dd0();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_51 = 0;
    SVar4 = Swift::KeyedDecodingContainer::_decode(&local_51,puVar1);
    pcVar2 = SVar4.str;
    local_52 = 1;
    Swift::KeyedDecodingContainer::_decode(&local_52,puVar1);
    (**(code **)(lVar3 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,puVar1);
    FUN_100043f24(param_1);
  }
  else {
    FUN_100043f24(param_1);
  }
  return pcVar2;
}

