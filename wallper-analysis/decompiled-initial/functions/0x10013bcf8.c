// rea decompile_all
// name: FUN_10013bcf8
// address: 0x10013bcf8
// body: available
// range: 0x10013bcf8-0x10013bebb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010013bdf8) */

void FUN_10013bcf8(long param_1)

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
  
  puVar1 = &DAT_1005546f0;
  FUN_100002f94(&DAT_1005546f0,&DAT_1004276c0);
  lVar3 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100007bd0(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_10013ded8();
  Swift::Encoder::_container();
  local_51 = 0;
  Swift::KeyedEncodingContainer::_encode(*unaff_x20,unaff_x20[1],&local_51,puVar1);
  if (unaff_x21 == 0) {
    uVar2 = unaff_x20[2];
    local_52 = 1;
    Swift::KeyedEncodingContainer::_encode(uVar2,unaff_x20[3],&local_52,puVar1);
    local_53 = *(undefined1 *)(unaff_x20 + 4);
    local_54 = 2;
    FUN_10013df18();
    Swift::KeyedEncodingContainer::_encode(&local_53,&local_54,puVar1,&DAT_10053f0f0,uVar2);
    local_55 = 3;
    Swift::KeyedEncodingContainer::_encode(unaff_x20[5],unaff_x20[6],&local_55,puVar1);
    local_56 = 4;
    Swift::KeyedEncodingContainer::_encode(unaff_x20[7],unaff_x20[8],&local_56,puVar1);
    (**(code **)(lVar3 + 8))(auStack_60 + -extraout_x8,puVar1);
  }
  else {
    (**(code **)(lVar3 + 8))(auStack_60 + -extraout_x8,puVar1);
  }
  return;
}

