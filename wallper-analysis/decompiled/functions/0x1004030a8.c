// rea decompile_all
// name: FUN_1004030a8
// address: 0x1004030a8
// body: available
// range: 0x1004030a8-0x1004035ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004030a8(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  Date DVar7;
  undefined *puVar8;
  undefined *puVar9;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar10;
  undefined1 auStack_70 [8];
  long local_68;
  undefined1 local_51;
  
  puVar3 = &DAT_1005613c0;
  FUN_100002f94(&DAT_1005613c0,&DAT_100437240);
  lVar10 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100007bd0(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100407b10();
  Swift::Encoder::_container();
  local_51 = 0;
  Swift::KeyedEncodingContainer::_encode(*unaff_x20,unaff_x20[1],&local_51,puVar3);
  if (unaff_x21 == 0) {
    local_51 = 1;
    Swift::KeyedEncodingContainer::_encode(unaff_x20[2],unaff_x20[3],&local_51,puVar3);
    local_51 = 2;
    Swift::KeyedEncodingContainer::_encodeIfPresent(unaff_x20[4],unaff_x20[5],&local_51,puVar3);
    local_51 = 3;
    Swift::KeyedEncodingContainer::_encodeIfPresent(unaff_x20[6],unaff_x20[7],&local_51,puVar3);
    local_51 = 4;
    Swift::KeyedEncodingContainer::_encodeIfPresent(unaff_x20[8],unaff_x20[9],&local_51,puVar3);
    local_51 = 5;
    Swift::KeyedEncodingContainer::_encodeIfPresent(unaff_x20[10],unaff_x20[0xb],&local_51,puVar3);
    lVar4 = 0;
    FUN_100400294();
    iVar2 = *(int *)(lVar4 + 0x28);
    local_51 = 6;
    uVar5 = 0;
    FUN_1003fdce0(0);
    puVar6 = &DAT_1005613c8;
    FUN_1000036d0(&DAT_1005613c8,FUN_1003fdce0,&TargetProtocolConformanceDescriptor_100437138);
    Swift::KeyedEncodingContainer::_encodeIfPresent
              ((long)unaff_x20 + (long)iVar2,&local_51,puVar3,uVar5,puVar6);
    local_51 = 7;
    Swift::KeyedEncodingContainer::_encode
              (*(undefined1 *)((long)unaff_x20 + (long)*(int *)(lVar4 + 0x2c)),&local_51,puVar3);
    iVar2 = *(int *)(lVar4 + 0x30);
    local_51 = 8;
    DVar7 = Foundation::Date::typeMetadataAccessor();
    puVar6 = &DAT_100558e20;
    FUN_1000036d0(&DAT_100558e20,PTR_typeMetadataAccessor_100520b80,
                  PTR_Foundation__Foundation__Date_>Swift__Encodable_100520b90);
    Swift::KeyedEncodingContainer::_encodeIfPresent
              ((long)unaff_x20 + (long)iVar2,&local_51,puVar3,DVar7.unknown,puVar6);
    puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar4 + 0x34));
    uVar5 = *puVar1;
    local_51 = 9;
    Swift::KeyedEncodingContainer::_encode(uVar5,puVar1[1],&local_51,puVar3);
    iVar2 = *(int *)(lVar4 + 0x38);
    local_51 = 10;
    FUN_10013df18();
    Swift::KeyedEncodingContainer::_encode
              ((long)unaff_x20 + (long)iVar2,&local_51,puVar3,&DAT_10053f0f0,uVar5);
    puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar4 + 0x3c));
    local_51 = 0xb;
    Swift::KeyedEncodingContainer::_encode(*puVar1,puVar1[1],&local_51,puVar3);
    puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar4 + 0x40));
    uVar5 = *puVar1;
    local_51 = 0xc;
    Swift::KeyedEncodingContainer::_encodeIfPresent(uVar5,puVar1[1],&local_51,puVar3);
    iVar2 = *(int *)(lVar4 + 0x44);
    local_51 = 0xd;
    FUN_100407be4();
    Swift::KeyedEncodingContainer::_encodeIfPresent
              ((long)unaff_x20 + (long)iVar2,&local_51,puVar3,&DAT_10053f060,uVar5);
    local_68 = (long)*(int *)(lVar4 + 0x48);
    local_51 = 0xe;
    puVar8 = &DAT_100558c48;
    FUN_100002f94(&DAT_100558c48,&DAT_10042d448);
    puVar9 = &DAT_100558e10;
    FUN_100407c24(&DAT_100558e10,&DAT_100558e18,&TargetProtocolConformanceDescriptor_100437958,
                  PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100523b40);
    Swift::KeyedEncodingContainer::_encodeIfPresent
              ((long)unaff_x20 + local_68,&local_51,puVar3,puVar8,puVar9);
    local_51 = 0xf;
    Swift::KeyedEncodingContainer::_encodeIfPresent
              (*(undefined1 *)((long)unaff_x20 + (long)*(int *)(lVar4 + 0x4c)),&local_51,puVar3);
    local_51 = 0x10;
    Swift::KeyedEncodingContainer::_encodeIfPresent
              ((long)unaff_x20 + (long)*(int *)(lVar4 + 0x50),&local_51,puVar3,DVar7.unknown,puVar6)
    ;
    local_51 = 0x11;
    Swift::KeyedEncodingContainer::_encodeIfPresent
              ((long)unaff_x20 + (long)*(int *)(lVar4 + 0x54),&local_51,puVar3,DVar7.unknown,puVar6)
    ;
    local_51 = 0x12;
    Swift::KeyedEncodingContainer::_encodeIfPresent
              ((long)unaff_x20 + (long)*(int *)(lVar4 + 0x58),&local_51,puVar3,DVar7.unknown,puVar6)
    ;
    local_51 = 0x13;
    Swift::KeyedEncodingContainer::_encodeIfPresent
              ((long)unaff_x20 + (long)*(int *)(lVar4 + 0x5c),&local_51,puVar3,DVar7.unknown,puVar6)
    ;
    local_51 = 0x14;
    Swift::KeyedEncodingContainer::_encodeIfPresent
              ((long)unaff_x20 + (long)*(int *)(lVar4 + 0x60),&local_51,puVar3,DVar7.unknown,puVar6)
    ;
    (**(code **)(lVar10 + 8))(auStack_70 + -extraout_x8,puVar3);
  }
  else {
    (**(code **)(lVar10 + 8))(auStack_70 + -extraout_x8,puVar3);
  }
  return;
}

