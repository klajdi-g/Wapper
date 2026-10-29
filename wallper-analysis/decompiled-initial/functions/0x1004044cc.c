// rea decompile_all
// name: FUN_1004044cc
// address: 0x1004044cc
// body: available
// range: 0x1004044cc-0x10040477b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100404698) */

void FUN_1004044cc(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  Date DVar4;
  undefined *puVar5;
  long lVar6;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar7;
  undefined1 auStack_70 [15];
  undefined1 local_61;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar2 = &DAT_1005613f0;
  FUN_100002f94(&DAT_1005613f0,&DAT_100437258);
  lVar7 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100007bd0(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_10040c680();
  Swift::Encoder::_container();
  local_51 = 0;
  Swift::KeyedEncodingContainer::_encode(*unaff_x20,unaff_x20[1],&local_51,puVar2);
  if (unaff_x21 == 0) {
    local_52 = 1;
    Swift::KeyedEncodingContainer::_encode(unaff_x20[2],unaff_x20[3],&local_52,puVar2);
    local_53 = 2;
    Swift::KeyedEncodingContainer::_encode(unaff_x20[4],&local_53,puVar2);
    local_54 = 3;
    Swift::KeyedEncodingContainer::_encode(unaff_x20[5],&local_54,puVar2);
    lVar3 = 0;
    FUN_1003fdce0();
    iVar1 = *(int *)(lVar3 + 0x20);
    local_55 = 4;
    DVar4 = Foundation::Date::typeMetadataAccessor();
    puVar5 = &DAT_100558e20;
    FUN_1000036d0(&DAT_100558e20,PTR_typeMetadataAccessor_100520b80,
                  PTR_Foundation__Foundation__Date_>Swift__Encodable_100520b90);
    lVar6 = (long)unaff_x20 + (long)iVar1;
    Swift::KeyedEncodingContainer::_encodeIfPresent(lVar6,&local_55,puVar2,DVar4.unknown,puVar5);
    iVar1 = *(int *)(lVar3 + 0x24);
    local_56 = 5;
    FUN_10014f38c();
    Swift::KeyedEncodingContainer::_encode
              ((long)unaff_x20 + (long)iVar1,&local_56,puVar2,&DAT_10053f180,lVar6);
    local_57 = 6;
    Swift::KeyedEncodingContainer::_encode
              (*(undefined1 *)((long)unaff_x20 + (long)*(int *)(lVar3 + 0x28)),&local_57,puVar2);
    local_58 = 7;
    Swift::KeyedEncodingContainer::_encodeIfPresent
              ((long)unaff_x20 + (long)*(int *)(lVar3 + 0x2c),&local_58,puVar2,DVar4.unknown,puVar5)
    ;
    local_61 = 8;
    Swift::KeyedEncodingContainer::_encodeIfPresent
              ((long)unaff_x20 + (long)*(int *)(lVar3 + 0x30),&local_61,puVar2,DVar4.unknown,puVar5)
    ;
    (**(code **)(lVar7 + 8))(auStack_70 + -extraout_x8,puVar2);
  }
  else {
    (**(code **)(lVar7 + 8))(auStack_70 + -extraout_x8,puVar2);
  }
  return;
}

