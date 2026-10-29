// rea decompile_all
// name: FUN_100262090
// address: 0x100262090
// body: available
// range: 0x100262090-0x100262e0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100262858) */
/* WARNING: Removing unreachable block (ram,0x000100262db4) */
/* WARNING: Removing unreachable block (ram,0x0001002627ec) */
/* WARNING: Removing unreachable block (ram,0x000100262510) */
/* WARNING: Removing unreachable block (ram,0x000100262484) */
/* WARNING: Removing unreachable block (ram,0x0001002626d8) */
/* WARNING: Removing unreachable block (ram,0x000100262804) */
/* WARNING: Removing unreachable block (ram,0x0001002628bc) */
/* WARNING: Removing unreachable block (ram,0x0001002628d4) */
/* WARNING: Removing unreachable block (ram,0x000100262a08) */
/* WARNING: Removing unreachable block (ram,0x00010026276c) */
/* WARNING: Removing unreachable block (ram,0x000100262790) */
/* WARNING: Removing unreachable block (ram,0x000100262918) */
/* WARNING: Removing unreachable block (ram,0x000100262934) */
/* WARNING: Removing unreachable block (ram,0x000100262948) */
/* WARNING: Removing unreachable block (ram,0x0001002623b0) */

void FUN_100262090(undefined8 param_1,long param_2)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  Date DVar15;
  UUID UVar16;
  long lVar17;
  undefined *puVar18;
  char *pcVar19;
  undefined *puVar20;
  undefined *puVar21;
  long extraout_x8;
  undefined8 *puVar22;
  long extraout_x8_00;
  code *pcVar23;
  long lVar24;
  long extraout_x8_01;
  long lVar25;
  long extraout_x8_02;
  long lVar26;
  long extraout_x8_03;
  long extraout_x8_04;
  ulong uVar27;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x21;
  code *pcVar28;
  long lVar29;
  undefined8 uVar30;
  String SVar31;
  String SStack_140;
  long local_130;
  long local_128;
  long local_120;
  undefined8 *local_118;
  undefined8 *local_110;
  long local_108;
  undefined8 local_100;
  long local_f8;
  code *local_f0;
  code *local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  undefined *local_c8;
  long local_c0;
  char local_78;
  undefined7 uStack_77;
  char local_70;
  undefined7 uStack_6f;
  undefined *local_58;
  
  lVar13 = 0;
  local_100 = param_1;
  FUN_100266c40();
  local_108 = *(long *)(lVar13 + -8);
  local_d8 = lVar13;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_108 + 0x40));
  puVar22 = (undefined8 *)((long)&SStack_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_110 = puVar22;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar22 = (undefined8 *)((long)puVar22 - extraout_x12);
  puVar14 = &DAT_10054b950;
  local_118 = puVar22;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar14 + -8) + 0x40));
  lVar13 = (long)puVar22 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_f8 = lVar13;
  (*(code *)PTR____chkstk_darwin_100521118)();
  pcVar23 = (code *)(lVar13 - extraout_x12_00);
  local_e8 = pcVar23;
  DVar15 = Foundation::Date::typeMetadataAccessor();
  lVar24 = *(long *)(DVar15.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar24 + 0x40));
  pcVar23 = pcVar23 + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_f0 = pcVar23;
  UVar16 = Foundation::UUID::typeMetadataAccessor();
  lVar25 = *(long *)(UVar16.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar25 + 0x40));
  lVar26 = (long)pcVar23 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  puVar14 = &DAT_1005580f8;
  local_e0 = lVar26;
  FUN_100002f94(&DAT_1005580f8,&DAT_10042c4c8);
  local_d0 = *(long *)(puVar14 + -8);
  local_c8 = puVar14;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_d0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar26 = lVar26 - extraout_x8_03;
  lVar13 = 0;
  FUN_10025ee04();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
  lVar29 = lVar26 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  Foundation::UUID::init();
  iVar4 = *(int *)(lVar13 + 0x18);
  Foundation::Date::init();
  iVar5 = *(int *)(lVar13 + 0x24);
  *(undefined1 *)(lVar29 + iVar5) = 1;
  iVar6 = *(int *)(lVar13 + 0x28);
  *(undefined1 *)(lVar29 + iVar6) = 1;
  iVar7 = *(int *)(lVar13 + 0x2c);
  *(undefined8 *)(lVar29 + iVar7) = 0x1a4;
  iVar8 = *(int *)(lVar13 + 0x30);
  *(undefined8 *)(lVar29 + iVar8) = 0x474;
  iVar9 = *(int *)(lVar13 + 0x34);
  local_c0 = lVar13;
  *(undefined **)(lVar29 + iVar9) = PTR___swiftEmptyArrayStorage_100524190;
  FUN_100007bd0(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_100266c54();
  Swift::Decoder::_container();
  lVar13 = local_d8;
  if (unaff_x21 == 0) {
    local_78 = '\0';
    puVar14 = &DAT_100558108;
    SStack_140.bridgeObject = (void *)(long)iVar9;
    local_130 = (long)iVar8;
    local_128 = (long)iVar7;
    local_120 = (long)iVar6;
    FUN_1000036d0(&DAT_100558108,PTR_typeMetadataAccessor_100520bd8,
                  PTR_Foundation__Foundation__UUID_>Swift__Decodable_100520c00);
    puVar21 = local_c8;
    lVar12 = local_e0;
    Swift::KeyedDecodingContainer::_decode
              (local_e0,UVar16.unknown,&local_78,local_c8,UVar16.unknown,puVar14);
    (**(code **)(lVar25 + 0x28))(lVar29,lVar12,UVar16.unknown);
    local_78 = '\x01';
    SVar31 = Swift::KeyedDecodingContainer::_decode(&local_78,puVar21);
    *(String *)(lVar29 + *(int *)(local_c0 + 0x14)) = SVar31;
    local_78 = '\x02';
    puVar14 = &DAT_100558e30;
    FUN_1000036d0(&DAT_100558e30,PTR_typeMetadataAccessor_100520b80,
                  PTR_Foundation__Foundation__Date_>Swift__Decodable_100520bb0);
    pcVar23 = local_e8;
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (local_e8,DVar15.unknown,&local_78,puVar21,DVar15.unknown,puVar14);
    lVar12 = local_f8;
    local_e0 = unaff_x21;
    FUN_100007e1c(pcVar23,local_f8,&DAT_10054b950,&DAT_10041d870);
    local_e8 = *(code **)(lVar24 + 0x30);
    lVar17 = lVar12;
    (*local_e8)(lVar12,1,DVar15.unknown);
    if ((int)lVar17 == 1) {
      Foundation::Date::init();
      lVar17 = lVar12;
      (*local_e8)(lVar12,1,DVar15.unknown);
      if ((int)lVar17 != 1) {
        FUN_10002a29c(lVar12,&DAT_10054b950,&DAT_10041d870);
      }
    }
    else {
      (**(code **)(lVar24 + 0x20))(local_f0,lVar12,DVar15.unknown);
    }
    (**(code **)(lVar24 + 0x28))(lVar29 + iVar4,local_f0,DVar15.unknown);
    puVar14 = &DAT_100558110;
    FUN_100002f94(&DAT_100558110,&DAT_10042c4d0);
    local_58 = (undefined *)CONCAT71(local_58._1_7_,4);
    puVar18 = &DAT_100558118;
    FUN_100266e20(&DAT_100558118,&DAT_100558120,&TargetProtocolConformanceDescriptor_10042cd50,
                  PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100523b58);
    lVar12 = local_e0;
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_78,puVar14,&local_58,puVar21,puVar14,puVar18);
    if (lVar12 == 0) {
      iVar4 = *(int *)(local_c0 + 0x1c);
      iVar6 = *(int *)(local_c0 + 0x20);
      local_e0 = lVar26;
      if (CONCAT71(uStack_77,local_78) == 0) {
        puVar14 = &DAT_100553858;
        FUN_100002f94(&DAT_100553858,&DAT_100429e10);
        local_58._0_1_ = 10;
        puVar21 = &DAT_100558128;
        FUN_100266f2c(&DAT_100558128,
                      PTR___protocol_witness_table_for_Swift_String___Swift_Decodable_in_Swift_100523ac0
                      ,PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100523b58);
        puVar18 = local_c8;
        Swift::KeyedDecodingContainer::_decodeIfPresent
                  (&local_78,puVar14,&local_58,local_c8,puVar14,puVar21);
        pcVar23 = (code *)PTR___swiftEmptyArrayStorage_100524190;
        if ((code *)CONCAT71(uStack_77,local_78) != (code *)0x0) {
          pcVar23 = (code *)CONCAT71(uStack_77,local_78);
        }
        local_58 = (undefined *)CONCAT71(local_58._1_7_,0xb);
        local_e8 = (code *)(long)iVar6;
        Swift::KeyedDecodingContainer::_decodeIfPresent
                  (&local_78,puVar14,&local_58,puVar18,puVar14,puVar21);
        puVar14 = PTR___swiftEmptyArrayStorage_100524190;
        if ((undefined *)CONCAT71(uStack_77,local_78) != (undefined *)0x0) {
          puVar14 = (undefined *)CONCAT71(uStack_77,local_78);
        }
        local_78 = '\f';
        pcVar19 = &local_78;
        local_f0 = pcVar23;
        Swift::KeyedDecodingContainer::_decodeIfPresent(pcVar19,puVar18);
        pcVar23 = local_e8;
        local_58 = PTR___swiftEmptySetSingleton_1005241a0;
        lVar24 = *(long *)(local_f0 + 0x10);
        local_f8 = CONCAT44(local_f8._4_4_,(int)pcVar19);
        puVar21 = PTR___swiftEmptyArrayStorage_100524190;
        if (lVar24 != 0) {
          pcVar28 = local_f0 + 0x28;
          do {
            uVar30 = *(undefined8 *)(pcVar28 + -8);
            uVar3 = *(undefined8 *)pcVar28;
            _swift_bridgeObjectRetain_n(uVar3,2);
            pcVar19 = &local_78;
            FUN_1001ca054(pcVar19,uVar30,uVar3);
            _swift_bridgeObjectRelease(CONCAT71(uStack_6f,local_70));
            puVar22 = local_118;
            if (((ulong)pcVar19 & 1) == 0) {
              _swift_bridgeObjectRelease(uVar3);
            }
            else {
              (**(code **)(lVar25 + 0x38))
                        ((long)local_118 + (long)*(int *)(lVar13 + 0x18),1,1,UVar16.unknown);
              *puVar22 = uVar30;
              puVar22[1] = uVar3;
              *(undefined1 *)(puVar22 + 2) = 0;
              *(undefined1 *)((long)puVar22 + (long)*(int *)(lVar13 + 0x1c)) = 2;
              puVar18 = puVar21;
              _swift_isUniquelyReferenced_nonNull_native();
              puVar20 = puVar21;
              if (((ulong)puVar18 & 1) == 0) {
                puVar20 = (undefined *)0x0;
                FUN_1001c4b68(0,*(long *)(puVar21 + 0x10) + 1,1,puVar21);
              }
              lVar26 = local_108;
              uVar2 = *(ulong *)(puVar20 + 0x10);
              puVar21 = puVar20;
              if (*(ulong *)(puVar20 + 0x18) >> 1 <= uVar2) {
                puVar21 = (undefined *)(ulong)(1 < *(ulong *)(puVar20 + 0x18));
                FUN_1001c4b68(puVar21,uVar2 + 1,1,puVar20);
              }
              *(ulong *)(puVar21 + 0x10) = uVar2 + 1;
              uVar27 = (ulong)*(byte *)(lVar26 + 0x50);
              FUN_100007e64(local_118,
                            puVar21 + *(long *)(lVar26 + 0x48) * uVar2 +
                                      (uVar27 + 0x20 & (uVar27 ^ 0xffffffffffffffff)),FUN_100266c40)
              ;
            }
            pcVar28 = pcVar28 + 0x10;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
        }
        _swift_bridgeObjectRelease(local_f0);
        lVar24 = *(long *)(puVar14 + 0x10);
        uVar30 = local_100;
        if (lVar24 != 0) {
          puVar22 = (undefined8 *)(puVar14 + 0x28);
          do {
            uVar30 = puVar22[-1];
            uVar3 = *puVar22;
            _swift_bridgeObjectRetain_n(uVar3,2);
            pcVar19 = &local_78;
            FUN_1001ca054(pcVar19,uVar30,uVar3);
            _swift_bridgeObjectRelease(CONCAT71(uStack_6f,local_70));
            puVar11 = local_110;
            if (((ulong)pcVar19 & 1) == 0) {
              _swift_bridgeObjectRelease(uVar3);
              uVar30 = local_100;
            }
            else {
              (**(code **)(lVar25 + 0x38))
                        ((long)local_110 + (long)*(int *)(lVar13 + 0x18),1,1,UVar16.unknown);
              *puVar11 = uVar30;
              puVar11[1] = uVar3;
              *(undefined1 *)(puVar11 + 2) = 1;
              *(undefined1 *)((long)puVar11 + (long)*(int *)(lVar13 + 0x1c)) = 2;
              puVar18 = puVar21;
              _swift_isUniquelyReferenced_nonNull_native();
              puVar20 = puVar21;
              if (((ulong)puVar18 & 1) == 0) {
                puVar20 = (undefined *)0x0;
                FUN_1001c4b68(0,*(long *)(puVar21 + 0x10) + 1,1,puVar21);
              }
              uVar30 = local_100;
              uVar2 = *(ulong *)(puVar20 + 0x10);
              puVar21 = puVar20;
              if (*(ulong *)(puVar20 + 0x18) >> 1 <= uVar2) {
                puVar21 = (undefined *)(ulong)(1 < *(ulong *)(puVar20 + 0x18));
                FUN_1001c4b68(puVar21,uVar2 + 1,1,puVar20);
              }
              *(ulong *)(puVar21 + 0x10) = uVar2 + 1;
              FUN_100007e64(local_110,
                            puVar21 + *(long *)(local_108 + 0x48) * uVar2 +
                                      ((ulong)*(byte *)(local_108 + 0x50) + 0x20 &
                                      ((ulong)*(byte *)(local_108 + 0x50) ^ 0xffffffffffffffff)),
                            FUN_100266c40);
            }
            puVar22 = puVar22 + 2;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
        }
        _swift_bridgeObjectRelease(puVar14);
        _swift_bridgeObjectRelease(local_58);
        (**(code **)(local_d0 + 8))(local_e0,local_c8);
        *(undefined **)(pcVar23 + lVar29) = puVar21;
        *(byte *)(lVar29 + iVar4) = (byte)local_f8 & 1;
      }
      else {
        *(long *)((code *)(long)iVar6 + lVar29) = CONCAT71(uStack_77,local_78);
        local_58._0_1_ = 3;
        FUN_100266c94();
        puVar18 = local_c8;
        puVar21 = &DAT_100535e50;
        Swift::KeyedDecodingContainer::_decodeIfPresent
                  (&local_78,&DAT_100535e50,&local_58,local_c8,&DAT_100535e50,puVar14);
        cVar1 = '\0';
        if (local_78 != '\x04') {
          cVar1 = local_78;
        }
        *(char *)(lVar29 + iVar4) = cVar1;
        local_58._0_1_ = 5;
        FUN_100266cd4();
        Swift::KeyedDecodingContainer::_decodeIfPresent
                  (&local_78,&DAT_100535dc0,&local_58,puVar18,&DAT_100535dc0,puVar21);
        cVar1 = local_78;
        if (local_78 == '\x02') {
          cVar1 = '\x01';
        }
        *(char *)(lVar29 + iVar5) = cVar1;
        local_58._0_1_ = 6;
        puVar14 = &DAT_100535dc0;
        Swift::KeyedDecodingContainer::_decodeIfPresent
                  (&local_78,&DAT_100535dc0,&local_58,puVar18,&DAT_100535dc0,puVar21);
        if (local_78 != '\x02') {
          cVar1 = local_78;
        }
        *(char *)(lVar29 + local_120) = cVar1;
        local_58._0_1_ = 7;
        FUN_100266d14();
        Swift::KeyedDecodingContainer::_decodeIfPresent
                  (&local_78,&DAT_100535f00,&local_58,puVar18,&DAT_100535f00,puVar14);
        uVar30 = 0x1a4;
        if (local_70 != '\x01') {
          uVar30 = CONCAT71(uStack_77,local_78);
        }
        *(undefined8 *)(lVar29 + local_128) = uVar30;
        local_58._0_1_ = 8;
        Swift::KeyedDecodingContainer::_decodeIfPresent
                  (&local_78,&DAT_100535f00,&local_58,puVar18,&DAT_100535f00,puVar14);
        uVar30 = 0x474;
        if (local_70 != '\x01') {
          uVar30 = CONCAT71(uStack_77,local_78);
        }
        *(undefined8 *)(lVar29 + local_130) = uVar30;
        puVar14 = &DAT_100558148;
        FUN_100002f94(&DAT_100558148,&DAT_10042c4d8);
        local_58 = (undefined *)CONCAT71(local_58._1_7_,9);
        puVar21 = &DAT_100558150;
        FUN_100266d54(&DAT_100558150,&DAT_100558158,&TargetProtocolConformanceDescriptor_10042ccb0,
                      PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100523b58);
        Swift::KeyedDecodingContainer::_decodeIfPresent
                  (&local_78,puVar14,&local_58,puVar18,puVar14,puVar21);
        puVar14 = PTR___swiftEmptyArrayStorage_100524190;
        if ((undefined *)CONCAT71(uStack_77,local_78) != (undefined *)0x0) {
          puVar14 = (undefined *)CONCAT71(uStack_77,local_78);
        }
        (**(code **)(local_d0 + 8))(local_e0,local_c8);
        *(undefined **)(lVar29 + (long)SStack_140.bridgeObject) = puVar14;
        uVar30 = local_100;
      }
      FUN_100029504(lVar29,uVar30,FUN_10025ee04);
      FUN_100043f24(param_2);
      FUN_100029548(lVar29,FUN_10025ee04);
      return;
    }
    (**(code **)(local_d0 + 8))(lVar26,puVar21);
    bVar10 = true;
  }
  else {
    bVar10 = false;
  }
  puVar14 = PTR___swiftEmptyArrayStorage_100524190;
  FUN_100043f24(param_2);
  (**(code **)(lVar25 + 8))(lVar29,UVar16.unknown);
  if (bVar10) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar29 + *(int *)(local_c0 + 0x14) + 8));
  }
  (**(code **)(lVar24 + 8))(lVar29 + iVar4,DVar15.unknown);
  _swift_bridgeObjectRelease(puVar14);
  return;
}

