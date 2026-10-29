// rea decompile_all
// name: FUN_10014fa58
// address: 0x10014fa58
// body: available
// range: 0x10014fa58-0x10014fc1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010014fbbc) */
/* WARNING: Removing unreachable block (ram,0x00010014fb28) */

void FUN_10014fa58(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long unaff_x21;
  long lVar8;
  undefined1 auStack_70 [8];
  undefined1 *local_68;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar1 = &DAT_100554c98;
  FUN_100002f94(&DAT_100554c98,&DAT_100428348);
  lVar8 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100007bd0(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_100150814();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_51 = 0;
    puVar2 = &local_51;
    puVar5 = puVar1;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    local_52 = 1;
    puVar3 = &local_52;
    puVar6 = puVar1;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    local_53 = 2;
    puVar4 = &local_53;
    puVar7 = puVar1;
    local_68 = puVar3;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    (**(code **)(lVar8 + 8))(auStack_70 + -extraout_x8,puVar1);
    FUN_100043f24(param_2);
    *param_1 = puVar2;
    param_1[1] = puVar5;
    param_1[2] = local_68;
    *(char *)(param_1 + 3) = (char)puVar6;
    param_1[4] = puVar4;
    param_1[5] = puVar7;
  }
  else {
    FUN_100043f24(param_2);
  }
  return;
}

