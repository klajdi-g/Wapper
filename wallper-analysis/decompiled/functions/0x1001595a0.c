// rea decompile_all
// name: FUN_1001595a0
// address: 0x1001595a0
// body: available
// range: 0x1001595a0-0x1001596f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100159690) */

uint FUN_1001595a0(long param_1)

{
  undefined8 uVar1;
  bool bVar2;
  undefined *puVar3;
  long extraout_x8;
  long unaff_x21;
  uint uVar4;
  long lVar5;
  undefined1 auStack_60 [14];
  undefined1 local_52;
  undefined1 local_51;
  
  puVar3 = &DAT_100555098;
  FUN_100002f94(&DAT_100555098,&DAT_100428b48);
  lVar5 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  FUN_100007bd0(param_1,uVar1);
  FUN_1001596f8();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_51 = 0;
    bVar2 = Swift::KeyedDecodingContainer::_decode(&local_51,puVar3);
    uVar4 = (uint)bVar2;
    local_52 = 1;
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_52,puVar3);
    (**(code **)(lVar5 + 8))(auStack_60 + -extraout_x8,puVar3);
    FUN_100043f24(param_1);
  }
  else {
    uVar4 = (uint)uVar1;
    FUN_100043f24(param_1);
  }
  return uVar4 & 1;
}

