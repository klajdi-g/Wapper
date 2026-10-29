// rea decompile_all
// name: FUN_10013893c
// address: 0x10013893c
// body: available
// range: 0x10013893c-0x100138b17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100138ab0) */
/* WARNING: Removing unreachable block (ram,0x000100138a70) */
/* WARNING: Removing unreachable block (ram,0x000100138ac0) */
/* WARNING: Removing unreachable block (ram,0x000100138ad4) */
/* WARNING: Removing unreachable block (ram,0x000100138a08) */

void FUN_10013893c(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  String SVar7;
  undefined1 auStack_80 [8];
  undefined1 *local_78;
  undefined *local_70;
  char *local_68;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar1 = &DAT_100554488;
  FUN_100002f94(&DAT_100554488,&DAT_100427238);
  lVar6 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100007bd0(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_100138b18();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_51 = 0;
    SVar7 = Swift::KeyedDecodingContainer::_decode(&local_51,puVar1);
    local_68 = SVar7.str;
    local_52 = 1;
    puVar2 = &local_52;
    puVar4 = puVar1;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    local_53 = 2;
    puVar3 = &local_53;
    puVar5 = puVar1;
    local_78 = puVar2;
    local_70 = puVar4;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    (**(code **)(lVar6 + 8))(auStack_80 + -extraout_x8,puVar1);
    FUN_100043f24(param_2);
    *param_1 = local_68;
    param_1[1] = SVar7.bridgeObject;
    param_1[2] = local_78;
    param_1[3] = local_70;
    param_1[4] = puVar3;
    param_1[5] = puVar5;
  }
  else {
    FUN_100043f24(param_2);
  }
  return;
}

