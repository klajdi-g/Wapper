// rea decompile_all
// name: FUN_100405300
// address: 0x100405300
// body: available
// range: 0x100405300-0x100405bb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001004055e0) */
/* WARNING: Removing unreachable block (ram,0x00010040551c) */
/* WARNING: Removing unreachable block (ram,0x0001004059c0) */
/* WARNING: Removing unreachable block (ram,0x000100405498) */
/* WARNING: Removing unreachable block (ram,0x00010040558c) */
/* WARNING: Removing unreachable block (ram,0x00010040571c) */
/* WARNING: Removing unreachable block (ram,0x000100405a18) */
/* WARNING: Removing unreachable block (ram,0x00010040579c) */
/* WARNING: Removing unreachable block (ram,0x0001004057f0) */
/* WARNING: Removing unreachable block (ram,0x000100405568) */
/* WARNING: Type propagation algorithm not settling */

void FUN_100405300(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  void *pvVar6;
  void *pvVar7;
  undefined *puVar8;
  char *pcVar9;
  long lVar10;
  void **ppvVar11;
  Date DVar12;
  undefined *puVar13;
  undefined *puVar14;
  char *pcVar15;
  char *pcVar16;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  void *unaff_x21;
  long lVar17;
  long lVar18;
  long lVar19;
  String *pSVar20;
  String SVar21;
  String SStack_b0;
  char *local_a0;
  void *local_98;
  char *local_90;
  void *local_88;
  char *local_80;
  void *local_68;
  undefined1 local_51;
  
  puVar8 = &DAT_10054b950;
  local_90 = (char *)param_1;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar8 + -8) + 0x40));
  lVar19 = (long)&SStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_98 = (void *)lVar19;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar19 = lVar19 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  pcVar9 = &DAT_100561548;
  FUN_100002f94(&DAT_100561548,&DAT_100437ae8);
  lVar17 = *(long *)(pcVar9 + -8);
  local_80 = pcVar9;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar18 = (lVar19 - extraout_x12_00) - extraout_x8_00;
  lVar10 = 0;
  FUN_100407bd0();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  pSVar20 = (String *)(lVar18 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  FUN_100007bd0(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_10040e6bc();
  local_88 = (void *)lVar18;
  Swift::Decoder::_container();
  pcVar16 = local_80;
  pvVar6 = local_88;
  pcVar9 = local_90;
  pvVar7 = local_98;
  if (unaff_x21 == (void *)0x0) {
    local_68._0_1_ = 0;
    local_a0 = (char *)(lVar19 - extraout_x12_00);
    SVar21 = Swift::KeyedDecodingContainer::_decode(&local_68,local_80);
    *pSVar20 = SVar21;
    local_68._0_1_ = 1;
    ppvVar11 = &local_68;
    pcVar15 = pcVar16;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    pSVar20[1].str = (char *)ppvVar11;
    *(char *)&pSVar20[1].bridgeObject = (char)pcVar15;
    local_68._0_1_ = 2;
    ppvVar11 = &local_68;
    pcVar15 = pcVar16;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    pSVar20[2].str = (char *)ppvVar11;
    pSVar20[2].bridgeObject = pcVar15;
    local_68._0_1_ = 3;
    ppvVar11 = &local_68;
    pcVar15 = pcVar16;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    pSVar20[3].str = (char *)ppvVar11;
    pSVar20[3].bridgeObject = pcVar15;
    local_51 = 4;
    SStack_b0.bridgeObject = unaff_x21;
    FUN_10040e6fc();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_68,&DAT_10053f330,&local_51,pcVar16,&DAT_10053f330,ppvVar11);
    if (SStack_b0.bridgeObject == (void *)0x0) {
      *(undefined1 *)&pSVar20[4].str = local_68._0_1_;
      local_68._0_1_ = 5;
      ppvVar11 = &local_68;
      pcVar15 = pcVar16;
      Swift::KeyedDecodingContainer::_decodeIfPresent();
      pSVar20[4].bridgeObject = ppvVar11;
      *(char *)&pSVar20[5].str = (char)pcVar15;
      local_68._0_1_ = 6;
      ppvVar11 = &local_68;
      pcVar15 = pcVar16;
      Swift::KeyedDecodingContainer::_decodeIfPresent();
      pSVar20[5].bridgeObject = ppvVar11;
      *(char *)&pSVar20[6].str = (char)pcVar15;
      local_68._0_1_ = 7;
      ppvVar11 = &local_68;
      pcVar15 = pcVar16;
      Swift::KeyedDecodingContainer::_decodeIfPresent();
      pSVar20[6].bridgeObject = ppvVar11;
      *(char *)&pSVar20[7].str = (char)pcVar15;
      local_68._0_1_ = 8;
      ppvVar11 = &local_68;
      pcVar15 = pcVar16;
      Swift::KeyedDecodingContainer::_decodeIfPresent();
      pSVar20[7].bridgeObject = ppvVar11;
      pSVar20[8].str = pcVar15;
      local_68._0_1_ = 9;
      ppvVar11 = &local_68;
      Swift::KeyedDecodingContainer::_decodeIfPresent();
      pSVar20[8].bridgeObject = ppvVar11;
      pSVar20[9].str = pcVar16;
      local_68._0_1_ = 10;
      ppvVar11 = &local_68;
      pcVar16 = local_80;
      Swift::KeyedDecodingContainer::_decodeIfPresent();
      pSVar20[9].bridgeObject = ppvVar11;
      *(char *)&pSVar20[10].str = (char)pcVar16;
      local_68._0_1_ = 0xb;
      SVar21 = Swift::KeyedDecodingContainer::_decode(&local_68,local_80);
      *(String *)&pSVar20[10].bridgeObject = SVar21;
      local_68._0_1_ = 0xc;
      ppvVar11 = &local_68;
      pcVar16 = local_80;
      Swift::KeyedDecodingContainer::_decodeIfPresent();
      pSVar20[0xb].bridgeObject = ppvVar11;
      pSVar20[0xc].str = pcVar16;
      local_51 = 0xd;
      FUN_10040e73c();
      Swift::KeyedDecodingContainer::_decodeIfPresent
                (&local_68,&DAT_10053f450,&local_51,local_80,&DAT_10053f450,ppvVar11);
      if (SStack_b0.bridgeObject == (void *)0x0) {
        *(undefined1 *)&pSVar20[0xc].bridgeObject = local_68._0_1_;
        DVar12 = Foundation::Date::typeMetadataAccessor();
        local_68._0_1_ = 0xe;
        puVar8 = &DAT_100558e30;
        FUN_1000036d0(&DAT_100558e30,PTR_typeMetadataAccessor_100520b80,
                      PTR_Foundation__Foundation__Date_>Swift__Decodable_100520bb0);
        Swift::KeyedDecodingContainer::_decodeIfPresent
                  (local_a0,DVar12.unknown,&local_68,local_80,DVar12.unknown,puVar8);
        if (SStack_b0.bridgeObject == (void *)0x0) {
          FUN_100007e1c(local_a0,(long)&pSVar20->str + (long)*(int *)(lVar10 + 0x48),&DAT_10054b950,
                        &DAT_10041d870);
          pvVar6 = SStack_b0.bridgeObject;
          local_68._0_1_ = 0xf;
          ppvVar11 = &local_68;
          pcVar16 = local_80;
          Swift::KeyedDecodingContainer::_decodeIfPresent();
          if (SStack_b0.bridgeObject == (void *)0x0) {
            puVar1 = (undefined8 *)((long)&pSVar20->str + (long)*(int *)(lVar10 + 0x4c));
            *puVar1 = ppvVar11;
            puVar1[1] = pcVar16;
            puVar13 = &DAT_100553858;
            FUN_100002f94(&DAT_100553858,&DAT_100429e10);
            local_51 = 0x10;
            puVar14 = &DAT_100558128;
            FUN_100266f2c(&DAT_100558128,
                          PTR___protocol_witness_table_for_Swift_String___Swift_Decodable_in_Swift_100523ac0
                          ,PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100523b58);
            Swift::KeyedDecodingContainer::_decodeIfPresent
                      (&local_68,puVar13,&local_51,local_80,puVar13,puVar14);
            *(ulong *)((long)&pSVar20->str + (long)*(int *)(lVar10 + 0x50)) =
                 CONCAT71(local_68._1_7_,local_68._0_1_);
            local_68._0_1_ = 0x11;
            Swift::KeyedDecodingContainer::_decodeIfPresent
                      (lVar19,DVar12.unknown,&local_68,local_80,DVar12.unknown,puVar8);
            FUN_100007e1c(lVar19,(long)&pSVar20->str + (long)*(int *)(lVar10 + 0x54),&DAT_10054b950,
                          &DAT_10041d870);
            local_68._0_1_ = 0x12;
            Swift::KeyedDecodingContainer::_decodeIfPresent
                      (pvVar7,DVar12.unknown,&local_68,local_80,DVar12.unknown,puVar8);
            if (SStack_b0.bridgeObject == (void *)0x0) {
              (**(code **)(lVar17 + 8))(local_88,local_80);
              FUN_100007e1c(pvVar7,(long)&pSVar20->str + (long)*(int *)(lVar10 + 0x58),
                            &DAT_10054b950,&DAT_10041d870);
              FUN_100029504(pSVar20,pcVar9,FUN_100407bd0);
              FUN_100043f24(param_2);
              FUN_100029548(pSVar20,FUN_100407bd0);
              return;
            }
            (**(code **)(lVar17 + 8))(local_88,local_80);
            bVar3 = true;
            bVar2 = true;
          }
          else {
            (**(code **)(lVar17 + 8))(local_88,local_80);
            bVar3 = false;
            bVar2 = false;
          }
          FUN_100043f24(param_2);
          _swift_bridgeObjectRelease(pSVar20->bridgeObject);
          _swift_bridgeObjectRelease(pSVar20[2].bridgeObject);
          _swift_bridgeObjectRelease(pSVar20[3].bridgeObject);
          _swift_bridgeObjectRelease(pSVar20[8].str);
          _swift_bridgeObjectRelease(pSVar20[9].str);
          _swift_bridgeObjectRelease(pSVar20[0xb].str);
          _swift_bridgeObjectRelease(pSVar20[0xc].str);
          FUN_10002a29c((long)&pSVar20->str + (long)*(int *)(lVar10 + 0x48),&DAT_10054b950,
                        &DAT_10041d870);
          if (pvVar6 == (void *)0x0) {
            _swift_bridgeObjectRelease
                      (*(undefined8 *)((long)&pSVar20->bridgeObject + (long)*(int *)(lVar10 + 0x4c))
                      );
          }
          if (bVar3) {
            _swift_bridgeObjectRelease
                      (*(undefined8 *)((long)&pSVar20->str + (long)*(int *)(lVar10 + 0x50)));
          }
          if (!bVar2) {
            return;
          }
          FUN_10002a29c((long)&pSVar20->str + (long)*(int *)(lVar10 + 0x54),&DAT_10054b950,
                        &DAT_10041d870);
          return;
        }
      }
      (**(code **)(lVar17 + 8))(local_88,local_80);
      bVar4 = true;
      bVar2 = true;
      bVar5 = true;
      bVar3 = true;
    }
    else {
      (**(code **)(lVar17 + 8))(pvVar6,pcVar16);
      bVar4 = false;
      bVar2 = false;
      bVar5 = false;
      bVar3 = false;
    }
    FUN_100043f24(param_2);
    _swift_bridgeObjectRelease(pSVar20->bridgeObject);
    _swift_bridgeObjectRelease(pSVar20[2].bridgeObject);
    _swift_bridgeObjectRelease(pSVar20[3].bridgeObject);
    if (bVar4) {
      _swift_bridgeObjectRelease(pSVar20[8].str);
    }
    if (bVar2) {
      _swift_bridgeObjectRelease(pSVar20[9].str);
    }
    if (bVar5) {
      _swift_bridgeObjectRelease(pSVar20[0xb].str);
    }
    if (bVar3) {
      _swift_bridgeObjectRelease(pSVar20[0xc].str);
    }
  }
  else {
    FUN_100043f24(param_2);
  }
  return;
}

