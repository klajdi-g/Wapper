// rea decompile_all
// name: FUN_100262e0c
// address: 0x100262e0c
// body: available
// range: 0x100262e0c-0x100263837 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100263764) */
/* WARNING: Removing unreachable block (ram,0x000100263278) */
/* WARNING: Removing unreachable block (ram,0x0001002637c0) */
/* WARNING: Removing unreachable block (ram,0x0001002637d4) */
/* WARNING: Removing unreachable block (ram,0x000100262fc8) */

void FUN_100262e0c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  bool bVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  Date DVar12;
  long lVar13;
  undefined *puVar14;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar15;
  undefined *puVar16;
  ulong uVar17;
  long extraout_x12;
  long extraout_x12_00;
  ulong uVar18;
  long unaff_x20;
  long unaff_x21;
  undefined8 *puVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  undefined8 uStack_c0;
  uint local_b4;
  undefined *local_b0;
  long local_a8;
  long local_a0;
  undefined *local_98;
  ulong local_90;
  undefined8 *local_88;
  long local_80;
  undefined *local_78;
  undefined1 local_61;
  undefined *local_58;
  
  lVar9 = 0;
  FUN_100266c40();
  local_80 = *(long *)(lVar9 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_80 + 0x40));
  puVar10 = (undefined *)((long)&uStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_78 = puVar10;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar19 = (undefined8 *)(puVar10 + -extraout_x12);
  (*(code *)PTR____chkstk_darwin_100521118)();
  uVar18 = (long)puVar19 - extraout_x12_00;
  puVar10 = &DAT_100558160;
  FUN_100002f94(&DAT_100558160,&DAT_10042c4e0);
  lVar21 = *(long *)(puVar10 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar21 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = uVar18 - extraout_x8_00;
  FUN_100007bd0(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100266c54();
  Swift::Encoder::_container();
  local_58 = (undefined *)((ulong)local_58 & 0xffffffffffffff00);
  Foundation::UUID::typeMetadataAccessor();
  FUN_1000036d0(&DAT_100558168,PTR_typeMetadataAccessor_100520bd8,
                PTR_Foundation__Foundation__UUID_>Swift__Encodable_100520be8);
  Swift::KeyedEncodingContainer::_encode();
  if (unaff_x21 == 0) {
    lVar11 = 0;
    local_90 = uVar18;
    local_88 = puVar19;
    FUN_10025ee04();
    puVar19 = (undefined8 *)(unaff_x20 + *(int *)(lVar11 + 0x14));
    local_58._0_1_ = 1;
    Swift::KeyedEncodingContainer::_encode(*puVar19,puVar19[1],&local_58,puVar10);
    iVar4 = *(int *)(lVar11 + 0x18);
    local_58._0_1_ = 2;
    local_98 = puVar10;
    DVar12 = Foundation::Date::typeMetadataAccessor();
    puVar10 = &DAT_100558e20;
    FUN_1000036d0(&DAT_100558e20,PTR_typeMetadataAccessor_100520b80,
                  PTR_Foundation__Foundation__Date_>Swift__Encodable_100520b90);
    puVar7 = local_98;
    lVar20 = unaff_x20 + iVar4;
    Swift::KeyedEncodingContainer::_encode(lVar20,&local_58,local_98,DVar12.unknown,puVar10);
    iVar4 = *(int *)(lVar11 + 0x1c);
    local_58._0_1_ = 3;
    FUN_100266de0();
    Swift::KeyedEncodingContainer::_encode(unaff_x20 + iVar4,&local_58,puVar7,&DAT_100535e50,lVar20)
    ;
    iVar5 = *(int *)(lVar11 + 0x20);
    local_58._0_1_ = 4;
    puVar10 = &DAT_100558110;
    FUN_100002f94(&DAT_100558110,&DAT_10042c4d0);
    puVar16 = &DAT_100558178;
    FUN_100266e20(&DAT_100558178,&DAT_100558180,&TargetProtocolConformanceDescriptor_10042cc60,
                  PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100523b40);
    lVar20 = unaff_x20 + iVar5;
    Swift::KeyedEncodingContainer::_encode(lVar20,&local_58,puVar7,puVar10,puVar16);
    iVar6 = *(int *)(lVar11 + 0x24);
    local_58._0_1_ = 5;
    local_a0 = (long)iVar5;
    FUN_100266eac();
    Swift::KeyedEncodingContainer::_encode(unaff_x20 + iVar6,&local_58,puVar7,&DAT_100535dc0,lVar20)
    ;
    local_58._0_1_ = 6;
    lVar13 = unaff_x20 + *(int *)(lVar11 + 0x28);
    Swift::KeyedEncodingContainer::_encode(lVar13,&local_58,puVar7,&DAT_100535dc0,lVar20);
    iVar5 = *(int *)(lVar11 + 0x2c);
    local_58._0_1_ = 7;
    FUN_100266eec();
    Swift::KeyedEncodingContainer::_encode(unaff_x20 + iVar5,&local_58,puVar7,&DAT_100535f00,lVar13)
    ;
    local_58._0_1_ = 8;
    Swift::KeyedEncodingContainer::_encode
              (unaff_x20 + *(int *)(lVar11 + 0x30),&local_58,puVar7,&DAT_100535f00,lVar13);
    iVar5 = *(int *)(lVar11 + 0x34);
    local_58 = (undefined *)CONCAT71(local_58._1_7_,9);
    puVar10 = &DAT_100558148;
    FUN_100002f94(&DAT_100558148,&DAT_10042c4d8);
    puVar16 = &DAT_100558198;
    FUN_100266d54(&DAT_100558198,&DAT_1005581a0,&TargetProtocolConformanceDescriptor_10042cbe8,
                  PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100523b40);
    puVar14 = (undefined *)(unaff_x20 + iVar5);
    Swift::KeyedEncodingContainer::_encode(puVar14,&local_58,puVar7,puVar10,puVar16);
    lVar20 = local_80;
    uVar18 = local_90;
    local_b4 = (uint)*(byte *)(unaff_x20 + iVar4);
    local_a8 = lVar9;
    if (local_b4 == 1) {
      local_a0 = *(long *)(unaff_x20 + local_a0);
      puVar16 = *(undefined **)(local_a0 + 0x10);
      puVar10 = PTR___swiftEmptyArrayStorage_100524190;
      local_b0 = puVar16;
      if (puVar16 != (undefined *)0x0) {
        uVar22 = 0;
        do {
          if (*(ulong *)(local_a0 + 0x10) <= uVar22) {
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x100263834);
            (*pcVar15)();
          }
          uVar17 = (ulong)*(byte *)(lVar20 + 0x50);
          uVar17 = uVar17 + 0x20 & (uVar17 ^ 0xffffffffffffffff);
          lVar9 = *(long *)(lVar20 + 0x48);
          FUN_100029504(local_a0 + uVar17 + lVar9 * uVar22,uVar18,FUN_100266c40);
          if (*(char *)(uVar18 + 0x10) == '\x01') {
            puVar14 = puVar10;
            _swift_isUniquelyReferenced_nonNull_native();
            local_58 = puVar10;
            if (((ulong)puVar14 & 1) == 0) {
              FUN_1001c5d34(0,*(long *)(puVar10 + 0x10) + 1,1);
              puVar16 = local_b0;
            }
            uVar1 = *(ulong *)(local_58 + 0x10);
            if (*(ulong *)(local_58 + 0x18) >> 1 <= uVar1) {
              FUN_1001c5d34(1 < *(ulong *)(local_58 + 0x18),uVar1 + 1,1);
              puVar16 = local_b0;
            }
            puVar10 = local_58;
            *(ulong *)(local_58 + 0x10) = uVar1 + 1;
            FUN_100007e64(uVar18,local_58 + uVar1 * lVar9 + uVar17,FUN_100266c40);
          }
          else {
            FUN_100029548(uVar18,FUN_100266c40);
          }
          uVar22 = uVar22 + 1;
        } while (puVar16 != (undefined *)uVar22);
      }
      lVar9 = *(long *)(puVar10 + 0x10);
      if (lVar9 == 0) {
        _swift_release(puVar10);
        local_b0 = PTR___swiftEmptyArrayStorage_100524190;
      }
      else {
        local_58 = PTR___swiftEmptyArrayStorage_100524190;
        FUN_1001c5bc4(0,lVar9,0);
        puVar16 = puVar10 + ((ulong)*(byte *)(local_80 + 0x50) + 0x20 &
                            ((ulong)*(byte *)(local_80 + 0x50) ^ 0xffffffffffffffff));
        local_90 = *(long *)(local_80 + 0x48);
        puVar19 = local_88;
        do {
          puVar14 = local_58;
          FUN_100029504(puVar16,puVar19,FUN_100266c40);
          uVar2 = *puVar19;
          uVar3 = puVar19[1];
          _swift_bridgeObjectRetain(uVar3);
          FUN_100029548(puVar19,FUN_100266c40);
          uVar18 = *(ulong *)(puVar14 + 0x10);
          local_58 = puVar14;
          if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar18) {
            FUN_1001c5bc4(1 < *(ulong *)(puVar14 + 0x18),uVar18 + 1,1);
            puVar19 = local_88;
          }
          *(ulong *)(local_58 + 0x10) = uVar18 + 1;
          *(undefined8 *)(local_58 + uVar18 * 0x10 + 0x20) = uVar2;
          *(undefined8 *)(local_58 + uVar18 * 0x10 + 0x28) = uVar3;
          puVar16 = puVar16 + local_90;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        local_b0 = local_58;
        _swift_release(puVar10);
      }
      lVar9 = local_80;
      local_90 = *(ulong *)(local_a0 + 0x10);
      puVar10 = PTR___swiftEmptyArrayStorage_100524190;
      if (local_90 != 0) {
        uVar18 = 0;
        puVar16 = local_78;
        do {
          if (*(ulong *)(local_a0 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x100263838);
            (*pcVar15)();
          }
          uVar22 = (ulong)*(byte *)(lVar9 + 0x50);
          uVar22 = uVar22 + 0x20 & (uVar22 ^ 0xffffffffffffffff);
          lVar20 = *(long *)(lVar9 + 0x48);
          FUN_100029504(local_a0 + uVar22 + lVar20 * uVar18,puVar16,FUN_100266c40);
          if (puVar16[0x10] == '\x01') {
            FUN_100029548(puVar16,FUN_100266c40);
          }
          else {
            puVar14 = puVar10;
            _swift_isUniquelyReferenced_nonNull_native();
            local_58 = puVar10;
            if (((ulong)puVar14 & 1) == 0) {
              FUN_1001c5d34(0,*(long *)(puVar10 + 0x10) + 1,1);
              puVar16 = local_78;
            }
            uVar17 = *(ulong *)(local_58 + 0x10);
            if (*(ulong *)(local_58 + 0x18) >> 1 <= uVar17) {
              FUN_1001c5d34(1 < *(ulong *)(local_58 + 0x18),uVar17 + 1,1);
              puVar16 = local_78;
            }
            puVar10 = local_58;
            *(ulong *)(local_58 + 0x10) = uVar17 + 1;
            FUN_100007e64(puVar16,local_58 + uVar17 * lVar20 + uVar22,FUN_100266c40);
          }
          uVar18 = uVar18 + 1;
        } while (local_90 != uVar18);
      }
      lVar9 = *(long *)(puVar10 + 0x10);
      local_78 = puVar10;
      if (lVar9 == 0) {
        _swift_release(puVar10);
        puVar14 = PTR___swiftEmptyArrayStorage_100524190;
      }
      else {
        local_58 = PTR___swiftEmptyArrayStorage_100524190;
        FUN_1001c5bc4(0,lVar9,0);
        puVar10 = local_78 +
                  ((ulong)*(byte *)(local_80 + 0x50) + 0x20 &
                  ((ulong)*(byte *)(local_80 + 0x50) ^ 0xffffffffffffffff));
        lVar20 = *(long *)(local_80 + 0x48);
        puVar19 = local_88;
        do {
          puVar16 = local_58;
          FUN_100029504(puVar10,puVar19,FUN_100266c40);
          uVar2 = *puVar19;
          uVar3 = puVar19[1];
          _swift_bridgeObjectRetain(uVar3);
          FUN_100029548(puVar19,FUN_100266c40);
          uVar18 = *(ulong *)(puVar16 + 0x10);
          local_58 = puVar16;
          if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar18) {
            FUN_1001c5bc4(1 < *(ulong *)(puVar16 + 0x18),uVar18 + 1,1);
            puVar19 = local_88;
          }
          puVar14 = local_58;
          *(ulong *)(local_58 + 0x10) = uVar18 + 1;
          *(undefined8 *)(local_58 + uVar18 * 0x10 + 0x20) = uVar2;
          *(undefined8 *)(local_58 + uVar18 * 0x10 + 0x28) = uVar3;
          puVar10 = puVar10 + lVar20;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        _swift_release(local_78);
      }
    }
    else {
      FUN_10025f200();
      local_b0 = PTR___swiftEmptyArrayStorage_100524190;
    }
    local_61 = 10;
    puVar10 = &DAT_100553858;
    local_58 = puVar14;
    FUN_100002f94(&DAT_100553858,&DAT_100429e10);
    puVar16 = &DAT_1005581a8;
    FUN_100266f2c(&DAT_1005581a8,
                  PTR___protocol_witness_table_for_Swift_String___Swift_Encodable_in_Swift_100523aa0
                  ,PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100523b40);
    Swift::KeyedEncodingContainer::_encode(&local_58,&local_61,local_98,puVar10,puVar16);
    _swift_bridgeObjectRelease(puVar14);
    local_58 = local_b0;
    local_61 = 0xb;
    Swift::KeyedEncodingContainer::_encode(&local_58,&local_61,local_98,puVar10,puVar16);
    bVar8 = local_b4 == 1;
    _swift_bridgeObjectRelease(local_b0);
    puVar10 = local_98;
    lVar9 = local_a8;
    local_58 = (undefined *)CONCAT71(local_58._1_7_,0xc);
    Swift::KeyedEncodingContainer::_encode(bVar8,&local_58,local_98);
    pcVar15 = *(code **)(lVar21 + 8);
  }
  else {
    pcVar15 = *(code **)(lVar21 + 8);
  }
  (*pcVar15)(lVar9,puVar10);
  return;
}

