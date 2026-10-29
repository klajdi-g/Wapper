// rea decompile_all
// name: FUN_1001329a0
// address: 0x1001329a0
// body: available
// range: 0x1001329a0-0x100132b23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001329a0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  URL UVar4;
  undefined *puVar5;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar6;
  undefined1 auStack_60 [13];
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar2 = &DAT_1005544a0;
  FUN_100002f94(&DAT_1005544a0,&DAT_100427248);
  lVar6 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100007bd0(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1001387a4();
  Swift::Encoder::_container();
  local_51 = 0;
  Swift::KeyedEncodingContainer::_encode(*unaff_x20,unaff_x20[1],&local_51,puVar2);
  if (unaff_x21 == 0) {
    lVar3 = 0;
    FUN_100137890();
    iVar1 = *(int *)(lVar3 + 0x14);
    local_52 = 1;
    UVar4 = Foundation::URL::typeMetadataAccessor();
    puVar5 = &DAT_1005544a8;
    FUN_1000036d0(&DAT_1005544a8,PTR_typeMetadataAccessor_100520a18,
                  PTR_Foundation__Foundation__URL_>Swift__Encodable_100520a28);
    Swift::KeyedEncodingContainer::_encode
              ((long)unaff_x20 + (long)iVar1,&local_52,puVar2,UVar4.unknown,puVar5);
    local_53 = 2;
    Swift::KeyedEncodingContainer::_encode
              (*(undefined1 *)((long)unaff_x20 + (long)*(int *)(lVar3 + 0x18)),&local_53,puVar2);
  }
  (**(code **)(lVar6 + 8))(auStack_60 + -extraout_x8,puVar2);
  return;
}

