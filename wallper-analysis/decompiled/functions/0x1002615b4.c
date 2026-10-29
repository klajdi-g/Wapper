// rea decompile_all
// name: FUN_1002615b4
// address: 0x1002615b4
// body: available
// range: 0x1002615b4-0x10026174b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002615b4(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  long lVar6;
  undefined1 auStack_60 [13];
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar3 = &DAT_100558530;
  FUN_100002f94(&DAT_100558530,&DAT_10042ce20);
  lVar6 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100007bd0(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100268768();
  Swift::Encoder::_container();
  local_51 = 0;
  Foundation::UUID::typeMetadataAccessor();
  FUN_1000036d0(&DAT_100558168,PTR_typeMetadataAccessor_100520bd8,
                PTR_Foundation__Foundation__UUID_>Swift__Encodable_100520be8);
  Swift::KeyedEncodingContainer::_encode();
  if (unaff_x21 == 0) {
    lVar4 = 0;
    FUN_100266c2c();
    puVar1 = (undefined8 *)(unaff_x20 + *(int *)(lVar4 + 0x14));
    uVar5 = *puVar1;
    local_52 = 1;
    Swift::KeyedEncodingContainer::_encode(uVar5,puVar1[1],&local_52,puVar3);
    iVar2 = *(int *)(lVar4 + 0x18);
    local_53 = 2;
    FUN_100266eec();
    Swift::KeyedEncodingContainer::_encode(unaff_x20 + iVar2,&local_53,puVar3,&DAT_100535f00,uVar5);
  }
  (**(code **)(lVar6 + 8))(auStack_60 + -extraout_x8,puVar3);
  return;
}

