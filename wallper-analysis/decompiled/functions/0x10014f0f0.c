// rea decompile_all
// name: FUN_10014f0f0
// address: 0x10014f0f0
// body: available
// range: 0x10014f0f0-0x10014f30b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010014f27c) */
/* WARNING: Removing unreachable block (ram,0x00010014f290) */
/* WARNING: Removing unreachable block (ram,0x00010014f1c0) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010014f254 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10014f0f0(String *param_1,long param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long unaff_x21;
  long lVar3;
  String SVar4;
  String SVar5;
  undefined1 auStack_80 [8];
  undefined4 local_78;
  uint local_74;
  char *local_70;
  void *local_68;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  byte local_52 [2];
  
  puVar1 = &DAT_100554c10;
  FUN_100002f94(&DAT_100554c10,&DAT_100427f40);
  lVar3 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100007bd0(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_10014f30c();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_52[1] = 0;
    SVar4 = Swift::KeyedDecodingContainer::_decode(local_52 + 1,puVar1);
    local_53 = 1;
    SVar5 = SVar4;
    FUN_10014f34c();
    Swift::KeyedDecodingContainer::_decode
              (local_52,&DAT_10053f180,&local_53,puVar1,&DAT_10053f180,SVar5.str);
    local_54 = 2;
    local_68 = (void *)Swift::KeyedDecodingContainer::_decode(SVar5.str,puVar1);
    local_55 = 3;
    local_70 = (char *)Swift::KeyedDecodingContainer::_decode(local_68,puVar1);
    local_74 = (uint)local_52[0];
    local_56 = 4;
    puVar2 = &local_56;
    Swift::KeyedDecodingContainer::_decodeIfPresent(puVar2,puVar1);
    local_78 = SUB84(puVar2,0);
    (**(code **)(lVar3 + 8))(auStack_80 + -extraout_x8,puVar1);
    FUN_100043f24(param_2);
    *param_1 = SVar4;
    *(char *)&param_1[1].str = (char)local_74;
    param_1[1].bridgeObject = local_68;
    param_1[2].str = local_70;
    *(char *)&param_1[2].bridgeObject = (char)local_78;
  }
  else {
    FUN_100043f24(param_2);
  }
  return;
}

