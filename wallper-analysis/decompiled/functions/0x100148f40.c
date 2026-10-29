// rea decompile_all
// name: FUN_100148f40
// address: 0x100148f40
// body: available
// range: 0x100148f40-0x1001490e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100148f40(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar3;
  undefined1 auStack_60 [10];
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar1 = &DAT_100554c28;
  FUN_100002f94(&DAT_100554c28,&DAT_100427f48);
  lVar3 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100007bd0(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_10014f30c();
  Swift::Encoder::_container();
  uVar2 = *unaff_x20;
  local_51 = 0;
  Swift::KeyedEncodingContainer::_encode(uVar2,unaff_x20[1],&local_51,puVar1);
  if (unaff_x21 == 0) {
    local_52 = *(undefined1 *)(unaff_x20 + 2);
    local_53 = 1;
    FUN_10014f38c();
    Swift::KeyedEncodingContainer::_encode(&local_52,&local_53,puVar1,&DAT_10053f180,uVar2);
    local_54 = 2;
    Swift::KeyedEncodingContainer::_encode(unaff_x20[3],&local_54,puVar1);
    local_55 = 3;
    Swift::KeyedEncodingContainer::_encode(unaff_x20[4],&local_55,puVar1);
    local_56 = 4;
    Swift::KeyedEncodingContainer::_encodeIfPresent(*(undefined1 *)(unaff_x20 + 5),&local_56,puVar1)
    ;
  }
  (**(code **)(lVar3 + 8))(auStack_60 + -extraout_x8,puVar1);
  return;
}

