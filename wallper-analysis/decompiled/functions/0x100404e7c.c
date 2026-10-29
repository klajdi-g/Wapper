// rea decompile_all
// name: FUN_100404e7c
// address: 0x100404e7c
// body: available
// range: 0x100404e7c-0x1004052ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100404e7c(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  Date DVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar10;
  undefined1 auStack_70 [8];
  long local_68;
  undefined1 local_51;
  
  puVar3 = &DAT_100561568;
  FUN_100002f94(&DAT_100561568,&DAT_100437af0);
  lVar10 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100007bd0(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_10040e6bc();
  Swift::Encoder::_container();
  local_51 = 0;
  Swift::KeyedEncodingContainer::_encode(*unaff_x20,unaff_x20[1],&local_51,puVar3);
  if (unaff_x21 == 0) {
    local_51 = 1;
    Swift::KeyedEncodingContainer::_encodeIfPresent
              (unaff_x20[2],*(undefined1 *)(unaff_x20 + 3),&local_51,puVar3);
    local_51 = 2;
    Swift::KeyedEncodingContainer::_encodeIfPresent(unaff_x20[4],unaff_x20[5],&local_51,puVar3);
    uVar4 = unaff_x20[6];
    local_51 = 3;
    Swift::KeyedEncodingContainer::_encodeIfPresent(uVar4,unaff_x20[7],&local_51,puVar3);
    local_51 = 4;
    FUN_10040e77c();
    Swift::KeyedEncodingContainer::_encodeIfPresent
              (unaff_x20 + 8,&local_51,puVar3,&DAT_10053f330,uVar4);
    local_51 = 5;
    Swift::KeyedEncodingContainer::_encodeIfPresent
              (unaff_x20[9],*(undefined1 *)(unaff_x20 + 10),&local_51,puVar3);
    local_51 = 6;
    Swift::KeyedEncodingContainer::_encodeIfPresent
              (unaff_x20[0xb],*(undefined1 *)(unaff_x20 + 0xc),&local_51,puVar3);
    local_51 = 7;
    Swift::KeyedEncodingContainer::_encodeIfPresent
              (unaff_x20[0xd],*(undefined1 *)(unaff_x20 + 0xe),&local_51,puVar3);
    local_51 = 8;
    Swift::KeyedEncodingContainer::_encodeIfPresent(unaff_x20[0xf],unaff_x20[0x10],&local_51,puVar3)
    ;
    local_51 = 9;
    Swift::KeyedEncodingContainer::_encodeIfPresent
              (unaff_x20[0x11],unaff_x20[0x12],&local_51,puVar3);
    local_51 = 10;
    Swift::KeyedEncodingContainer::_encodeIfPresent
              (unaff_x20[0x13],*(undefined1 *)(unaff_x20 + 0x14),&local_51,puVar3);
    local_51 = 0xb;
    Swift::KeyedEncodingContainer::_encode(unaff_x20[0x15],unaff_x20[0x16],&local_51,puVar3);
    uVar4 = unaff_x20[0x17];
    local_51 = 0xc;
    Swift::KeyedEncodingContainer::_encodeIfPresent(uVar4,unaff_x20[0x18],&local_51,puVar3);
    local_51 = 0xd;
    FUN_10040e7bc();
    Swift::KeyedEncodingContainer::_encodeIfPresent
              (unaff_x20 + 0x19,&local_51,puVar3,&DAT_10053f450,uVar4);
    lVar5 = 0;
    FUN_100407bd0();
    iVar2 = *(int *)(lVar5 + 0x48);
    local_51 = 0xe;
    DVar6 = Foundation::Date::typeMetadataAccessor();
    puVar7 = &DAT_100558e20;
    FUN_1000036d0(&DAT_100558e20,PTR_typeMetadataAccessor_100520b80,
                  PTR_Foundation__Foundation__Date_>Swift__Encodable_100520b90);
    Swift::KeyedEncodingContainer::_encodeIfPresent
              ((long)unaff_x20 + (long)iVar2,&local_51,puVar3,DVar6.unknown,puVar7);
    puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar5 + 0x4c));
    local_51 = 0xf;
    Swift::KeyedEncodingContainer::_encodeIfPresent(*puVar1,puVar1[1],&local_51,puVar3);
    local_68 = (long)*(int *)(lVar5 + 0x50);
    local_51 = 0x10;
    puVar8 = &DAT_100553858;
    FUN_100002f94(&DAT_100553858,&DAT_100429e10);
    puVar9 = &DAT_1005581a8;
    FUN_100266f2c(&DAT_1005581a8,
                  PTR___protocol_witness_table_for_Swift_String___Swift_Encodable_in_Swift_100523aa0
                  ,PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100523b40);
    Swift::KeyedEncodingContainer::_encodeIfPresent
              ((long)unaff_x20 + local_68,&local_51,puVar3,puVar8,puVar9);
    local_51 = 0x11;
    Swift::KeyedEncodingContainer::_encodeIfPresent
              ((long)unaff_x20 + (long)*(int *)(lVar5 + 0x54),&local_51,puVar3,DVar6.unknown,puVar7)
    ;
    local_51 = 0x12;
    Swift::KeyedEncodingContainer::_encodeIfPresent
              ((long)unaff_x20 + (long)*(int *)(lVar5 + 0x58),&local_51,puVar3,DVar6.unknown,puVar7)
    ;
    (**(code **)(lVar10 + 8))(auStack_70 + -extraout_x8,puVar3);
  }
  else {
    (**(code **)(lVar10 + 8))(auStack_70 + -extraout_x8,puVar3);
  }
  return;
}

