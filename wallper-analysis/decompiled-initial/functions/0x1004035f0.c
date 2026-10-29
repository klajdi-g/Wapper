// rea decompile_all
// name: FUN_1004035f0
// address: 0x1004035f0
// body: available
// range: 0x1004035f0-0x1004043ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100404104) */
/* WARNING: Removing unreachable block (ram,0x000100403be0) */
/* WARNING: Removing unreachable block (ram,0x0001004039ac) */
/* WARNING: Removing unreachable block (ram,0x0001004038f4) */
/* WARNING: Removing unreachable block (ram,0x000100403894) */
/* WARNING: Removing unreachable block (ram,0x000100403950) */
/* WARNING: Removing unreachable block (ram,0x000100403a0c) */
/* WARNING: Removing unreachable block (ram,0x00010040382c) */
/* WARNING: Removing unreachable block (ram,0x000100403c84) */
/* WARNING: Removing unreachable block (ram,0x000100403bf0) */
/* WARNING: Removing unreachable block (ram,0x000100403c74) */
/* WARNING: Removing unreachable block (ram,0x000100403e5c) */
/* WARNING: Removing unreachable block (ram,0x000100404008) */
/* WARNING: Removing unreachable block (ram,0x000100403c00) */
/* WARNING: Type propagation algorithm not settling */

void FUN_1004035f0(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  bool bVar3;
  void *pvVar4;
  char *pcVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  Date DVar10;
  char *pcVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar12;
  ulong uVar13;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long unaff_x21;
  long lVar14;
  String *pSVar15;
  long lVar16;
  long lVar17;
  String SVar18;
  String SStack_e0;
  String local_d0;
  char *local_c0;
  void *local_b8;
  char *local_b0;
  void *local_a8;
  char *local_a0;
  void *local_98;
  char *local_90;
  void *local_88;
  undefined *local_80;
  char local_68;
  undefined7 uStack_67;
  undefined1 local_51;
  
  puVar7 = &DAT_10054b950;
  local_98 = (void *)param_1;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar7 + -8) + 0x40));
  lVar12 = (long)&SStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_a0 = (char *)lVar12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = lVar12 - extraout_x12;
  local_a8 = (void *)lVar12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = lVar12 - extraout_x12_00;
  local_b0 = (char *)lVar12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = lVar12 - extraout_x12_01;
  local_b8 = (void *)lVar12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  uVar13 = lVar12 - extraout_x12_02;
  local_90 = (char *)uVar13;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = uVar13 - extraout_x12_03;
  puVar7 = &DAT_10055a2a8;
  FUN_100002f94(&DAT_10055a2a8,&DAT_10042e0d8);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = lVar14 - extraout_x8_00;
  puVar7 = &DAT_100561398;
  FUN_100002f94(&DAT_100561398,&DAT_100437238);
  lVar16 = *(long *)(puVar7 + -8);
  local_80 = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = 0;
  FUN_100400294();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
  pSVar15 = (String *)((lVar17 - extraout_x8_01) - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  FUN_100007bd0(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_100407b10();
  local_88 = (void *)(lVar17 - extraout_x8_01);
  Swift::Decoder::_container();
  puVar7 = local_80;
  pvVar4 = local_88;
  pcVar5 = local_90;
  if (unaff_x21 != 0) {
    FUN_100043f24(param_2);
    return;
  }
  local_68 = '\0';
  local_c0 = (char *)lVar12;
  SVar18 = Swift::KeyedDecodingContainer::_decode(&local_68,local_80);
  *pSVar15 = SVar18;
  local_68 = '\x01';
  SVar18 = Swift::KeyedDecodingContainer::_decode(&local_68,puVar7);
  pSVar15[1] = SVar18;
  local_68 = '\x02';
  pcVar11 = &local_68;
  puVar9 = puVar7;
  Swift::KeyedDecodingContainer::_decodeIfPresent();
  pSVar15[2].str = pcVar11;
  pSVar15[2].bridgeObject = puVar9;
  local_68 = '\x03';
  pcVar11 = &local_68;
  puVar9 = puVar7;
  Swift::KeyedDecodingContainer::_decodeIfPresent();
  pSVar15[3].str = pcVar11;
  pSVar15[3].bridgeObject = puVar9;
  local_68 = '\x04';
  pcVar11 = &local_68;
  puVar9 = puVar7;
  Swift::KeyedDecodingContainer::_decodeIfPresent();
  pSVar15[4].str = pcVar11;
  pSVar15[4].bridgeObject = puVar9;
  local_68 = '\x05';
  pcVar11 = &local_68;
  puVar9 = puVar7;
  Swift::KeyedDecodingContainer::_decodeIfPresent();
  pSVar15[5].str = pcVar11;
  pSVar15[5].bridgeObject = puVar9;
  puVar8 = (undefined *)0x0;
  local_d0.bridgeObject = (void *)unaff_x21;
  FUN_1003fdce0();
  local_68 = '\x06';
  puVar9 = &DAT_1005613a8;
  local_d0.str = puVar8;
  FUN_1000036d0(&DAT_1005613a8,FUN_1003fdce0,&TargetProtocolConformanceDescriptor_100437160);
  Swift::KeyedDecodingContainer::_decodeIfPresent
            (lVar17,local_d0.str,&local_68,puVar7,local_d0.str,puVar9);
  pcVar11 = local_c0;
  if (local_d0.bridgeObject == (void *)0x0) {
    FUN_100007e1c(lVar17,(long)&pSVar15->str + (long)*(int *)((long)local_c0 + 0x28),&DAT_10055a2a8,
                  &DAT_10042e0d8);
    local_68 = '\a';
    bVar6 = Swift::KeyedDecodingContainer::_decode(&local_68,puVar7);
    if (local_d0.bridgeObject == (void *)0x0) {
      *(bool *)((long)&pSVar15->str + (long)*(int *)((long)pcVar11 + 0x2c)) = bVar6;
      DVar10 = Foundation::Date::typeMetadataAccessor();
      local_68 = '\b';
      puVar9 = &DAT_100558e30;
      FUN_1000036d0(&DAT_100558e30,PTR_typeMetadataAccessor_100520b80,
                    PTR_Foundation__Foundation__Date_>Swift__Decodable_100520bb0);
      SStack_e0.bridgeObject = (void *)DVar10;
      local_d0.str = puVar9;
      Swift::KeyedDecodingContainer::_decodeIfPresent
                (lVar14,DVar10.unknown,&local_68,puVar7,DVar10.unknown);
      if (local_d0.bridgeObject == (void *)0x0) {
        FUN_100007e1c(lVar14,(long)&pSVar15->str + (long)*(int *)((long)local_c0 + 0x30),
                      &DAT_10054b950,&DAT_10041d870);
        local_68 = '\t';
        SVar18 = Swift::KeyedDecodingContainer::_decode(&local_68,puVar7);
        pcVar11 = SVar18.str;
        if (local_d0.bridgeObject == (void *)0x0) {
          *(String *)((long)&pSVar15->str + (long)*(int *)((long)local_c0 + 0x34)) = SVar18;
          local_51 = 10;
          FUN_100407b50();
          Swift::KeyedDecodingContainer::_decode
                    (&local_68,&DAT_10053f0f0,&local_51,local_80,&DAT_10053f0f0,pcVar11);
          if (local_d0.bridgeObject == (void *)0x0) {
            *(char *)((long)&pSVar15->str + (long)*(int *)((long)local_c0 + 0x38)) = local_68;
            local_68 = '\v';
            SVar18 = Swift::KeyedDecodingContainer::_decode(&local_68,local_80);
            *(String *)((long)&pSVar15->str + (long)*(int *)((long)local_c0 + 0x3c)) = SVar18;
            local_68 = '\f';
            pcVar11 = &local_68;
            puVar7 = local_80;
            Swift::KeyedDecodingContainer::_decodeIfPresent();
            puVar1 = (undefined8 *)((long)&pSVar15->str + (long)*(int *)((long)local_c0 + 0x40));
            *puVar1 = pcVar11;
            puVar1[1] = puVar7;
            local_51 = 0xd;
            FUN_100407b90();
            Swift::KeyedDecodingContainer::_decodeIfPresent
                      (&local_68,&DAT_10053f060,&local_51,local_80,&DAT_10053f060,pcVar11);
            if (local_d0.bridgeObject == (void *)0x0) {
              *(char *)((long)&pSVar15->str + (long)*(int *)((long)local_c0 + 0x44)) = local_68;
              puVar7 = &DAT_100558c48;
              FUN_100002f94(&DAT_100558c48,&DAT_10042d448);
              local_51 = 0xe;
              puVar9 = &DAT_100558c50;
              FUN_100407c24(&DAT_100558c50,&DAT_100558c58,
                            &TargetProtocolConformanceDescriptor_1004379d0,
                            PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100523b58);
              Swift::KeyedDecodingContainer::_decodeIfPresent
                        (&local_68,puVar7,&local_51,local_80,puVar7,puVar9);
              if (local_d0.bridgeObject == (void *)0x0) {
                *(ulong *)((long)&pSVar15->str + (long)*(int *)((long)local_c0 + 0x48)) =
                     CONCAT71(uStack_67,local_68);
                local_68 = '\x0f';
                pcVar11 = &local_68;
                Swift::KeyedDecodingContainer::_decodeIfPresent(pcVar11,local_80);
                *(char *)((long)&pSVar15->str + (long)*(int *)((long)local_c0 + 0x4c)) =
                     (char)pcVar11;
                local_68 = '\x10';
                Swift::KeyedDecodingContainer::_decodeIfPresent
                          (pcVar5,SStack_e0.bridgeObject,&local_68,local_80,SStack_e0.bridgeObject,
                           local_d0.str);
                FUN_100007e1c(pcVar5,(long)&pSVar15->str + (long)*(int *)((long)local_c0 + 0x50),
                              &DAT_10054b950,&DAT_10041d870);
                pvVar4 = local_d0.bridgeObject;
                local_68 = '\x11';
                Swift::KeyedDecodingContainer::_decodeIfPresent
                          (local_b8,SStack_e0.bridgeObject,&local_68,local_80,SStack_e0.bridgeObject
                           ,local_d0.str);
                if (local_d0.bridgeObject == (void *)0x0) {
                  FUN_100007e1c(local_b8,(long)&pSVar15->str + (long)*(int *)((long)local_c0 + 0x54)
                                ,&DAT_10054b950,&DAT_10041d870);
                  local_68 = '\x12';
                  Swift::KeyedDecodingContainer::_decodeIfPresent
                            (local_b0,SStack_e0.bridgeObject,&local_68,local_80,
                             SStack_e0.bridgeObject,local_d0.str);
                  FUN_100007e1c(local_b0,(long)&pSVar15->str + (long)*(int *)((long)local_c0 + 0x58)
                                ,&DAT_10054b950,&DAT_10041d870);
                  local_68 = '\x13';
                  Swift::KeyedDecodingContainer::_decodeIfPresent
                            (local_a8,SStack_e0.bridgeObject,&local_68,local_80,
                             SStack_e0.bridgeObject,local_d0.str);
                  if (local_d0.bridgeObject == (void *)0x0) {
                    FUN_100007e1c(local_a8,(long)&pSVar15->str +
                                           (long)*(int *)((long)local_c0 + 0x5c),&DAT_10054b950,
                                  &DAT_10041d870);
                    local_68 = '\x14';
                    Swift::KeyedDecodingContainer::_decodeIfPresent
                              (local_a0,SStack_e0.bridgeObject,&local_68,local_80,
                               SStack_e0.bridgeObject,local_d0.str);
                    if (local_d0.bridgeObject == (void *)0x0) {
                      (**(code **)(lVar16 + 8))(local_88,local_80);
                      FUN_100007e1c(local_a0,(long)&pSVar15->str +
                                             (long)*(int *)((long)local_c0 + 0x60),&DAT_10054b950,
                                    &DAT_10041d870);
                      FUN_100029504(pSVar15,local_98,FUN_100400294);
                      FUN_100043f24(param_2);
                      FUN_100029548(pSVar15,FUN_100400294);
                      return;
                    }
                    (**(code **)(lVar16 + 8))(local_88,local_80);
                    bVar2 = true;
                    bVar6 = true;
                  }
                  else {
                    (**(code **)(lVar16 + 8))(local_88,local_80);
                    bVar6 = false;
                    bVar2 = true;
                  }
                }
                else {
                  (**(code **)(lVar16 + 8))(local_88,local_80);
                  bVar2 = false;
                  bVar6 = false;
                }
                FUN_100043f24(param_2);
                _swift_bridgeObjectRelease(pSVar15->bridgeObject);
                _swift_bridgeObjectRelease(pSVar15[1].bridgeObject);
                _swift_bridgeObjectRelease(pSVar15[2].bridgeObject);
                _swift_bridgeObjectRelease(pSVar15[3].bridgeObject);
                _swift_bridgeObjectRelease(pSVar15[4].bridgeObject);
                _swift_bridgeObjectRelease(pSVar15[5].bridgeObject);
                pcVar5 = local_c0;
                FUN_10002a29c((long)&pSVar15->str + (long)*(int *)((long)local_c0 + 0x28),
                              &DAT_10055a2a8,&DAT_10042e0d8);
                FUN_10002a29c((long)&pSVar15->str + (long)*(int *)((long)pcVar5 + 0x30),
                              &DAT_10054b950,&DAT_10041d870);
                _swift_bridgeObjectRelease
                          (*(undefined8 *)
                            ((long)&pSVar15->bridgeObject + (long)*(int *)((long)pcVar5 + 0x34)));
                _swift_bridgeObjectRelease
                          (*(undefined8 *)
                            ((long)&pSVar15->bridgeObject + (long)*(int *)((long)pcVar5 + 0x3c)));
                _swift_bridgeObjectRelease
                          (*(undefined8 *)
                            ((long)&pSVar15->bridgeObject + (long)*(int *)((long)pcVar5 + 0x40)));
                _swift_bridgeObjectRelease
                          (*(undefined8 *)
                            ((long)&pSVar15->str + (long)*(int *)((long)pcVar5 + 0x48)));
                FUN_10002a29c((long)&pSVar15->str + (long)*(int *)((long)pcVar5 + 0x50),
                              &DAT_10054b950,&DAT_10041d870);
                if (pvVar4 == (void *)0x0) {
                  FUN_10002a29c((long)&pSVar15->str + (long)*(int *)((long)local_c0 + 0x54),
                                &DAT_10054b950,&DAT_10041d870);
                }
                if (bVar2) {
                  FUN_10002a29c((long)&pSVar15->str + (long)*(int *)((long)local_c0 + 0x58),
                                &DAT_10054b950,&DAT_10041d870);
                }
                if (!bVar6) {
                  return;
                }
                FUN_10002a29c((long)&pSVar15->str + (long)*(int *)((long)local_c0 + 0x5c),
                              &DAT_10054b950,&DAT_10041d870);
                return;
              }
            }
            (**(code **)(lVar16 + 8))(local_88,local_80);
            local_80 = (undefined *)((ulong)local_80 & 0xffffffff00000000);
            bVar2 = true;
            bVar6 = true;
            bVar3 = true;
            local_90 = (char *)CONCAT44(local_90._4_4_,1);
            local_88 = (void *)CONCAT44(local_88._4_4_,1);
          }
          else {
            (**(code **)(lVar16 + 8))(local_88,local_80);
            local_90 = (char *)((ulong)local_90 & 0xffffffff00000000);
            local_88 = (void *)((ulong)local_88 & 0xffffffff00000000);
            local_80 = (undefined *)((ulong)local_80 & 0xffffffff00000000);
            bVar2 = true;
            bVar6 = true;
            bVar3 = true;
          }
        }
        else {
          (**(code **)(lVar16 + 8))(local_88,local_80);
          bVar3 = false;
          local_90 = (char *)((ulong)local_90 & 0xffffffff00000000);
          local_88 = (void *)((ulong)local_88 & 0xffffffff00000000);
          local_80 = (undefined *)((ulong)local_80 & 0xffffffff00000000);
          bVar2 = true;
          bVar6 = true;
        }
        goto LAB_100403bc4;
      }
    }
    (**(code **)(lVar16 + 8))(pvVar4,puVar7);
    bVar6 = false;
    bVar3 = false;
    local_90 = (char *)((ulong)local_90 & 0xffffffff00000000);
    local_88 = (void *)((ulong)local_88 & 0xffffffff00000000);
    local_80 = (undefined *)((ulong)local_80 & 0xffffffff00000000);
    bVar2 = true;
  }
  else {
    (**(code **)(lVar16 + 8))(pvVar4,puVar7);
    bVar2 = false;
    bVar6 = false;
    bVar3 = false;
    local_90 = (char *)((ulong)local_90 & 0xffffffff00000000);
    local_88 = (void *)((ulong)local_88 & 0xffffffff00000000);
    local_80 = (undefined *)((ulong)local_80 & 0xffffffff00000000);
  }
LAB_100403bc4:
  FUN_100043f24(param_2);
  _swift_bridgeObjectRelease(pSVar15->bridgeObject);
  _swift_bridgeObjectRelease(pSVar15[1].bridgeObject);
  _swift_bridgeObjectRelease(pSVar15[2].bridgeObject);
  _swift_bridgeObjectRelease(pSVar15[3].bridgeObject);
  _swift_bridgeObjectRelease(pSVar15[4].bridgeObject);
  _swift_bridgeObjectRelease(pSVar15[5].bridgeObject);
  pcVar5 = local_c0;
  if (bVar2) {
    FUN_10002a29c((long)&pSVar15->str + (long)*(int *)((long)local_c0 + 0x28),&DAT_10055a2a8,
                  &DAT_10042e0d8);
    if (!bVar6) goto LAB_100403c28;
LAB_100403c9c:
    FUN_10002a29c((long)&pSVar15->str + (long)*(int *)((long)pcVar5 + 0x30),&DAT_10054b950,
                  &DAT_10041d870);
    if (!bVar3) goto LAB_100403cbc;
LAB_100403c2c:
    _swift_bridgeObjectRelease
              (*(undefined8 *)((long)&pSVar15->bridgeObject + (long)*(int *)((long)pcVar5 + 0x34)));
    if (((ulong)local_90 & 1) == 0) goto LAB_100403c44;
LAB_100403cc4:
    _swift_bridgeObjectRelease
              (*(undefined8 *)((long)&pSVar15->bridgeObject + (long)*(int *)((long)pcVar5 + 0x3c)));
    if (((ulong)local_88 & 1) != 0) {
LAB_100403c4c:
      _swift_bridgeObjectRelease
                (*(undefined8 *)((long)&pSVar15->bridgeObject + (long)*(int *)((long)pcVar5 + 0x40))
                );
      if (((ulong)local_80 & 1) == 0) {
        return;
      }
      goto LAB_100403ce4;
    }
  }
  else {
    if (bVar6) goto LAB_100403c9c;
LAB_100403c28:
    if (bVar3) goto LAB_100403c2c;
LAB_100403cbc:
    if ((int)local_90 != 0) goto LAB_100403cc4;
LAB_100403c44:
    if ((int)local_88 != 0) goto LAB_100403c4c;
  }
  if ((int)local_80 == 0) {
    return;
  }
LAB_100403ce4:
  _swift_bridgeObjectRelease
            (*(undefined8 *)((long)&pSVar15->str + (long)*(int *)((long)pcVar5 + 0x48)));
  return;
}

