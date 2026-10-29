// rea decompile_all
// name: FUN_10009e434
// address: 0x10009e434
// body: available
// range: 0x10009e434-0x10009e5a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10009e434(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  long extraout_x8;
  long unaff_x21;
  long lVar3;
  undefined8 local_70;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  
  puVar2 = &DAT_10054f840;
  local_70 = param_5;
  FUN_100002f94(&DAT_10054f840,&DAT_100420da8);
  lVar3 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100007bd0(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_1000a1e28();
  Swift::Encoder::_container();
  local_61 = 0;
  Swift::KeyedEncodingContainer::_encode(param_3,&local_61,puVar2);
  uVar1 = local_70;
  if (unaff_x21 == 0) {
    local_62 = 1;
    Swift::KeyedEncodingContainer::_encode(param_1,&local_62,puVar2);
    local_63 = 2;
    Swift::KeyedEncodingContainer::_encode(param_4,uVar1,&local_63,puVar2);
    (**(code **)(lVar3 + 8))((long)&local_70 - extraout_x8,puVar2);
  }
  else {
    (**(code **)(lVar3 + 8))((long)&local_70 - extraout_x8,puVar2);
  }
  return;
}

