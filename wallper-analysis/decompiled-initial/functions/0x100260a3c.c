// rea decompile_all
// name: FUN_100260a3c
// address: 0x100260a3c
// body: available
// range: 0x100260a3c-0x100260c07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100260a3c(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  UUID UVar5;
  undefined *puVar6;
  long lVar7;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar8;
  undefined1 auStack_60 [12];
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar2 = &DAT_100558518;
  FUN_100002f94(&DAT_100558518,&DAT_10042ce18);
  lVar8 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100007bd0(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100268628();
  Swift::Encoder::_container();
  uVar3 = *unaff_x20;
  local_51 = 0;
  Swift::KeyedEncodingContainer::_encode(uVar3,unaff_x20[1],&local_51,puVar2);
  if (unaff_x21 == 0) {
    local_52 = 1;
    FUN_1002687a8();
    Swift::KeyedEncodingContainer::_encodeIfPresent
              (unaff_x20 + 2,&local_52,puVar2,&DAT_100535ee0,uVar3);
    lVar4 = 0;
    FUN_100266c40();
    iVar1 = *(int *)(lVar4 + 0x18);
    local_53 = 2;
    UVar5 = Foundation::UUID::typeMetadataAccessor();
    puVar6 = &DAT_100558168;
    FUN_1000036d0(&DAT_100558168,PTR_typeMetadataAccessor_100520bd8,
                  PTR_Foundation__Foundation__UUID_>Swift__Encodable_100520be8);
    lVar7 = (long)unaff_x20 + (long)iVar1;
    Swift::KeyedEncodingContainer::_encodeIfPresent(lVar7,&local_53,puVar2,UVar5.unknown,puVar6);
    iVar1 = *(int *)(lVar4 + 0x1c);
    local_54 = 3;
    FUN_1002687e8();
    Swift::KeyedEncodingContainer::_encodeIfPresent
              ((long)unaff_x20 + (long)iVar1,&local_54,puVar2,&DAT_100535d30,lVar7);
  }
  (**(code **)(lVar8 + 8))(auStack_60 + -extraout_x8,puVar2);
  return;
}

