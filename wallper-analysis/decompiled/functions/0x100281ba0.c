// rea decompile_all
// name: FUN_100281ba0
// address: 0x100281ba0
// body: available
// range: 0x100281ba0-0x100282947 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100281ba0(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  double *pdVar2;
  ulong uVar3;
  undefined1 uVar4;
  int iVar5;
  long lVar6;
  bool bVar7;
  CharacterSet CVar8;
  URL UVar9;
  _DictionaryStorage *p_Var10;
  char *pcVar11;
  URL UVar12;
  void *pvVar13;
  CharacterSet CVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar15;
  long extraout_x8_02;
  long *plVar16;
  long extraout_x8_03;
  long extraout_x8_04;
  ulong uVar17;
  long lVar18;
  undefined *puVar19;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  code *pcVar20;
  char *pcVar21;
  undefined8 uVar22;
  char *pcVar23;
  undefined8 uVar24;
  long lVar25;
  code *pcVar26;
  String *pSVar27;
  code *pcVar28;
  long lVar29;
  undefined *puVar30;
  code *pcVar31;
  undefined8 *puVar32;
  undefined8 uVar33;
  void *pvVar34;
  long lVar35;
  double dVar36;
  long lVar37;
  String SVar38;
  String SStack_180;
  undefined8 *local_170;
  long local_168;
  long local_160;
  ulong local_158;
  long local_150;
  long local_148;
  long local_140;
  undefined8 uStack_138;
  CharacterSet local_130;
  undefined *local_128;
  long local_120;
  long local_118;
  undefined *local_110;
  String *local_108;
  long local_100;
  long local_f8;
  code *local_f0;
  long local_e8;
  long local_e0;
  char *local_d8;
  long *local_d0;
  long local_c8;
  long local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  String local_a0 [2];
  code *local_80;
  
  puVar19 = &DAT_10054ac40;
  local_158 = param_2;
  FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar19 + -8) + 0x40));
  lVar18 = (long)&SStack_180 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_f8 = lVar18;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = lVar18 - extraout_x12;
  local_100 = lVar18;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = lVar18 - extraout_x12_00;
  local_148 = lVar18;
  local_b0 = (undefined *)Foundation::URL::typeMetadataAccessor();
  local_e0 = *(long *)(local_b0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_e0 + 0x40));
  puVar19 = (undefined *)(lVar18 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  local_110 = puVar19;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar19 = puVar19 + -extraout_x12_01;
  lVar18 = 0;
  local_b8 = puVar19;
  FUN_100282ef4();
  local_160 = *(long *)(lVar18 + -8);
  local_118 = lVar18;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_160 + 0x40));
  lVar15 = (long)puVar19 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar18 = 0;
  local_c0 = lVar15;
  FUN_10040211c();
  lVar25 = *(long *)(lVar18 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar25 + 0x40));
  lVar15 = lVar15 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_150 = lVar15;
  (*(code *)PTR____chkstk_darwin_100521118)();
  plVar16 = (long *)(lVar15 - extraout_x12_02);
  local_d0 = plVar16;
  CVar8 = Foundation::CharacterSet::typeMetadataAccessor();
  local_120 = *(long *)(CVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_120 + 0x40));
  puVar30 = (undefined *)((long)plVar16 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  puVar19 = &DAT_10054a188;
  FUN_100002f94(&DAT_10054a188,&DAT_10042d4a0);
  local_d8 = *(char **)(puVar19 + -8);
  local_a8 = puVar19;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_d8 + 0x40));
  puVar32 = (undefined8 *)(puVar30 + -(extraout_x8_04 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_108 = (String *)((long)puVar32 - extraout_x12_03);
  pvVar34 = *(void **)(param_1 + 0x10);
  pcVar20 = (code *)PTR___swiftEmptyArrayStorage_100524190;
  pvVar13 = pvVar34;
  local_e8 = lVar18;
  local_c8 = lVar25;
  if (pvVar34 != (void *)0x0) {
    local_80 = (code *)PTR___swiftEmptyArrayStorage_100524190;
    local_170 = puVar32;
    local_128 = CVar8.unknown;
    FUN_1001c5f54(0,pvVar34,0);
    puVar19 = (undefined *)
              (param_1 +
              ((ulong)*(byte *)(lVar25 + 0x50) + 0x20 &
              ((ulong)*(byte *)(lVar25 + 0x50) ^ 0xffffffffffffffff)));
    local_140 = *(long *)(lVar25 + 0x48);
    pcVar20 = local_80;
    pSVar27 = local_108;
    SStack_180.bridgeObject = pvVar34;
    local_168 = param_1;
    local_130.unknown = puVar30;
    do {
      CVar8.unknown = local_130.unknown;
      UVar9.unknown = puVar19;
      local_f0 = pcVar20;
      FUN_100029504(puVar19,(undefined1 *)((long)&pSVar27->str + (long)*(int *)(local_a8 + 0x30)),
                    FUN_10040211c);
      local_a0[0] = Foundation::URL::get_lastPathComponent(UVar9);
      pvVar13 = local_a0[0].bridgeObject;
      Foundation::CharacterSet::get_whitespacesAndNewlines((CharacterSet)local_a0[0].str);
      FUN_100026df4();
      SVar38 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(CVar8);
      puVar30 = local_128;
      CVar14.unknown = SVar38.bridgeObject;
      pcVar20 = *(code **)(local_120 + 8);
      (*pcVar20)(CVar8.unknown,local_128);
      _swift_bridgeObjectRelease(pvVar13);
      uVar17 = (ulong)SVar38.str & 0xffffffffffff;
      if (((ulong)CVar14.unknown & 0x2000000000000000) != 0) {
        uVar17 = (ulong)CVar14.unknown >> 0x38 & 0xf;
      }
      if (uVar17 == 0) {
        _swift_bridgeObjectRelease();
        Foundation::CharacterSet::get_whitespacesAndNewlines(CVar14);
        SVar38 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(CVar8);
        (*pcVar20)(CVar8.unknown,puVar30);
      }
      pSVar27 = local_108;
      *local_108 = SVar38;
      local_80 = local_f0;
      uVar17 = *(ulong *)(local_f0 + 0x10);
      if (*(ulong *)(local_f0 + 0x18) >> 1 <= uVar17) {
        FUN_1001c5f54(1 < *(ulong *)(local_f0 + 0x18),uVar17 + 1,1);
      }
      pcVar20 = local_80;
      *(ulong *)(local_80 + 0x10) = uVar17 + 1;
      FUN_100007e1c(pSVar27,local_80 +
                            *(long *)(local_d8 + 0x48) * uVar17 +
                            ((ulong)(byte)local_d8[0x50] + 0x20 &
                            ((ulong)(byte)local_d8[0x50] ^ 0xffffffffffffffff)),&DAT_10054a188,
                    &DAT_10042d4a0);
      puVar19 = puVar19 + local_140;
      pvVar34 = (void *)((long)pvVar34 + -1);
      param_1 = local_168;
      puVar32 = local_170;
      pvVar13 = SStack_180.bridgeObject;
    } while (pvVar34 != (void *)0x0);
  }
  lVar18 = local_c8;
  pcVar21 = *(char **)(pcVar20 + 0x10);
  pcVar23 = PTR___swiftEmptyDictionarySingleton_100524198;
  if (pcVar21 != (char *)0x0) {
    p_Var10 = (_DictionaryStorage *)&DAT_10054a190;
    FUN_100002f94(&DAT_10054a190,&DAT_10041a220);
    Swift::_DictionaryStorage::_allocate(p_Var10,(__int64)pcVar21);
    pcVar23 = pcVar21;
  }
  local_a0[0].str = pcVar23;
  FUN_100281898(pcVar20,1,local_a0);
  _swift_bridgeObjectRelease(pcVar20);
  local_108 = (String *)local_a0[0].str;
  if (pvVar13 == (void *)0x0) {
    pcVar23 = *(char **)(PTR___swiftEmptyArrayStorage_100524190 + 0x10);
    pcVar20 = (code *)0x0;
    pSVar27 = (String *)local_a0[0].str;
    pcVar21 = PTR___swiftEmptyArrayStorage_100524190;
    puVar19 = PTR___swiftEmptyArrayStorage_100524190;
    pcVar11 = PTR___swiftEmptyDictionarySingleton_100524198;
  }
  else {
    local_f0 = (code *)0x0;
    local_a0[0].str = PTR___swiftEmptyArrayStorage_100524190;
    FUN_1001c5f54(0,pvVar13,0);
    uVar17 = (ulong)*(byte *)(lVar18 + 0x50);
    param_1 = param_1 + (uVar17 + 0x20 & (uVar17 ^ 0xffffffffffffffff));
    lVar18 = *(long *)(lVar18 + 0x48);
    pcVar21 = local_a0[0].str;
    do {
      puVar1 = (undefined8 *)((long)puVar32 + (long)*(int *)(local_a8 + 0x30));
      FUN_100029504(param_1,puVar1,FUN_10040211c);
      uVar24 = puVar1[1];
      *puVar32 = *puVar1;
      puVar32[1] = uVar24;
      uVar17 = *(ulong *)(pcVar21 + 0x10);
      uVar3 = *(ulong *)(pcVar21 + 0x18);
      local_a0[0].str = pcVar21;
      _swift_bridgeObjectRetain();
      if (uVar3 >> 1 <= uVar17) {
        FUN_1001c5f54(1 < uVar3,uVar17 + 1,1);
        pcVar21 = local_a0[0].str;
      }
      *(ulong *)(pcVar21 + 0x10) = uVar17 + 1;
      FUN_100007e1c(puVar32,pcVar21 + *(long *)(local_d8 + 0x48) * uVar17 +
                                      ((ulong)(byte)local_d8[0x50] + 0x20 &
                                      ((ulong)(byte)local_d8[0x50] ^ 0xffffffffffffffff)),
                    &DAT_10054a188,&DAT_10042d4a0);
      param_1 = param_1 + lVar18;
      pvVar13 = (void *)((long)pvVar13 + -1);
    } while (pvVar13 != (void *)0x0);
    pcVar23 = *(char **)(pcVar21 + 0x10);
    pcVar20 = local_f0;
    pSVar27 = local_108;
    puVar19 = PTR___swiftEmptyArrayStorage_100524190;
    pcVar11 = PTR___swiftEmptyDictionarySingleton_100524198;
  }
  PTR___swiftEmptyArrayStorage_100524190 = puVar19;
  PTR___swiftEmptyDictionarySingleton_100524198 = pcVar11;
  local_108 = pSVar27;
  if (pcVar23 != (char *)0x0) {
    p_Var10 = (_DictionaryStorage *)&DAT_10054a190;
    FUN_100002f94(&DAT_10054a190,&DAT_10041a220);
    Swift::_DictionaryStorage::_allocate(p_Var10,(__int64)pcVar23);
    pcVar11 = pcVar23;
  }
  local_a0[0].str = pcVar11;
  FUN_100281898(pcVar21,1,local_a0);
  if (pcVar20 != (code *)0x0) {
    _swift_bridgeObjectRelease(pcVar21);
    _swift_release(local_a0[0].str);
                    /* WARNING: Does not return */
    pcVar20 = (code *)SoftwareBreakpoint(1,0x100282948);
    (*pcVar20)();
  }
  _swift_bridgeObjectRelease(pcVar21);
  uVar17 = local_158;
  lVar18 = *(long *)(local_158 + 0x10);
  if (lVar18 == 0) {
    _swift_release();
    _swift_release(pSVar27);
    pcVar20 = (code *)PTR___swiftEmptyArrayStorage_100524190;
  }
  else {
    local_130.unknown = local_a0[0].str;
    local_80 = (code *)puVar19;
    FUN_1001c5c4c(0,lVar18,0);
    lVar15 = uVar17 + ((ulong)*(byte *)(local_160 + 0x50) + 0x20 &
                      ((ulong)*(byte *)(local_160 + 0x50) ^ 0xffffffffffffffff));
    local_120 = *(long *)(local_160 + 0x48);
    uStack_138 = 0xe500000000000000;
    local_140 = 0x6c61636f4c;
    pcVar20 = local_80;
    lVar25 = local_148;
    do {
      lVar29 = local_c0;
      FUN_100029504(lVar15,local_c0,FUN_100282ef4);
      puVar19 = local_b0;
      lVar35 = local_e0;
      pcVar26 = *(code **)(local_e0 + 0x10);
      UVar12.unknown = local_b8;
      (*pcVar26)(local_b8,lVar29,local_b0);
      UVar9.unknown = local_110;
      UVar12 = Foundation::URL::deletingPathExtension(UVar12);
      SVar38 = Foundation::URL::get_lastPathComponent(UVar12);
      local_a8 = SVar38.bridgeObject;
      local_d8 = SVar38.str;
      local_f0 = *(code **)(lVar35 + 8);
      (*local_f0)(UVar9.unknown,puVar19);
      SVar38 = Foundation::URL::get_lastPathComponent(UVar9);
      pSVar27 = local_108;
      pvVar34 = SVar38.bridgeObject;
      if (*(long *)((long)local_108 + 0x10) == 0) {
        bVar7 = true;
        lVar35 = local_e8;
      }
      else {
        _swift_retain(local_108);
        FUN_10000464c(SVar38.str);
        bVar7 = ((ulong)SVar38.bridgeObject & 1) == 0;
        if (!bVar7) {
          FUN_100029504(*(long *)((long)pSVar27 + 0x38) +
                        *(long *)(local_c8 + 0x48) * (long)SVar38.str,local_100,FUN_10040211c);
        }
        lVar35 = local_e8;
        _swift_release(pSVar27);
      }
      _swift_bridgeObjectRelease(pvVar34);
      lVar6 = local_c8;
      lVar29 = local_100;
      pcVar31 = *(code **)(local_c8 + 0x38);
      (*pcVar31)(local_100,bVar7,1,lVar35);
      lVar37 = local_f8;
      FUN_100007e1c(lVar29,local_f8,&DAT_10054ac40,&DAT_10041ce70);
      pcVar28 = *(code **)(lVar6 + 0x30);
      lVar29 = lVar37;
      (*pcVar28)(lVar37,1,lVar35);
      CVar8.unknown = local_130.unknown;
      if ((int)lVar29 == 1) {
        if (*(long *)(local_130.unknown + 0x10) == 0) {
          bVar7 = true;
        }
        else {
          _swift_retain(local_130.unknown);
          pcVar23 = local_d8;
          puVar19 = local_a8;
          FUN_10000464c(local_d8);
          bVar7 = ((ulong)puVar19 & 1) == 0;
          if (!bVar7) {
            FUN_100029504(*(long *)(CVar8.unknown + 0x38) +
                          *(long *)(local_c8 + 0x48) * (long)pcVar23,lVar25,FUN_10040211c);
          }
          lVar37 = local_f8;
          _swift_release(CVar8.unknown);
        }
        (*pcVar31)(lVar25,bVar7,1,lVar35);
        lVar29 = lVar37;
        (*pcVar28)(lVar37,1,lVar35);
        if ((int)lVar29 != 1) {
          FUN_10002a29c(lVar37,&DAT_10054ac40,&DAT_10041ce70);
        }
      }
      else {
        FUN_100007e64(lVar37,lVar25,FUN_10040211c);
        (*pcVar31)(lVar25,0,1,lVar35);
      }
      lVar29 = lVar25;
      (*pcVar28)(lVar25,1,lVar35);
      if ((int)lVar29 == 1) {
        FUN_10002a29c(lVar25,&DAT_10054ac40,&DAT_10041ce70);
        puVar19 = local_b0;
        plVar16 = local_d0;
        (*pcVar26)((long)local_d0 + (long)*(int *)(lVar35 + 0x14),local_b8,local_b0);
        (**(code **)(local_e0 + 0x38))((long)plVar16 + (long)*(int *)(lVar35 + 0x18),1,1,puVar19);
        FUN_1000087e4(local_c0 + *(int *)(local_118 + 0x18),
                      (long)plVar16 + (long)*(int *)(lVar35 + 0x2c),&DAT_10054b950,&DAT_10041d870);
        if (DAT_100557fe0 != -1) {
          _swift_once(&DAT_100557fe0,FUN_10025cd74);
        }
        lVar37 = DAT_100577d70;
        lVar29 = _TtC7Wallper15LocalMediaStore::metadata;
        _swift_beginAccess(DAT_100577d70 + _TtC7Wallper15LocalMediaStore::metadata,local_a0,0x20,0);
        lVar25 = *(long *)(lVar37 + lVar29);
        if (*(long *)(lVar25 + 0x10) == 0) {
LAB_1002826a4:
          _swift_endAccess(local_a0);
          local_128 = (undefined *)0x0;
          uVar17 = 1;
        }
        else {
          _swift_bridgeObjectRetain(lVar25);
          pcVar23 = local_d8;
          puVar19 = local_a8;
          FUN_10000464c();
          if (((ulong)puVar19 & 1) == 0) {
            _swift_bridgeObjectRelease(lVar25);
            goto LAB_1002826a4;
          }
          puVar32 = (undefined8 *)(*(long *)(lVar25 + 0x38) + (long)pcVar23 * 0x20);
          puVar19 = (undefined *)*puVar32;
          local_158 = (ulong)*(byte *)(puVar32 + 1);
          uVar24 = puVar32[2];
          uVar22 = puVar32[3];
          _swift_bridgeObjectRetain(uVar22);
          _swift_endAccess(local_a0);
          _swift_bridgeObjectRelease(lVar25);
          uVar17 = local_158;
          local_128 = puVar19;
          FUN_100163cac(puVar19,local_158,uVar24,uVar22);
        }
        _swift_beginAccess(lVar37 + lVar29,local_a0,0x20,0);
        lVar25 = local_148;
        lVar29 = *(long *)(lVar37 + lVar29);
        if (*(long *)(lVar29 + 0x10) == 0) {
LAB_100282754:
          _swift_endAccess(local_a0);
          uVar24 = 0;
          uVar22 = 0;
        }
        else {
          _swift_bridgeObjectRetain(lVar29);
          pcVar23 = local_d8;
          puVar19 = local_a8;
          FUN_10000464c();
          if (((ulong)puVar19 & 1) == 0) {
            _swift_bridgeObjectRelease(lVar29);
            goto LAB_100282754;
          }
          puVar32 = (undefined8 *)(*(long *)(lVar29 + 0x38) + (long)pcVar23 * 0x20);
          uVar33 = *puVar32;
          uVar4 = *(undefined1 *)(puVar32 + 1);
          uVar24 = puVar32[2];
          uVar22 = puVar32[3];
          _swift_bridgeObjectRetain_n(uVar22,2);
          _swift_endAccess(local_a0);
          _swift_bridgeObjectRelease(lVar29);
          lVar25 = local_148;
          FUN_100163cac(uVar33,uVar4,uVar24,uVar22);
        }
        (*local_f0)(local_b8,local_b0);
        plVar16 = (long *)(local_c0 + *(int *)(local_118 + 0x14));
        lVar29 = plVar16[1];
        lVar37 = *plVar16;
        FUN_100029548(local_c0,FUN_100282ef4);
        puVar19 = local_a8;
        plVar16 = local_d0;
        pdVar2 = (double *)((long)local_d0 + (long)*(int *)(lVar35 + 0x38));
        bVar7 = (char)lVar29 == '\x01';
        dVar36 = 0.0;
        if (!bVar7) {
          dVar36 = (double)lVar37 * 9.5367431640625e-07;
        }
        *pdVar2 = dVar36;
        *(bool *)(pdVar2 + 1) = bVar7;
        *local_d0 = (long)local_d8;
        plVar16[1] = (long)puVar19;
        puVar32 = (undefined8 *)((long)plVar16 + (long)*(int *)(lVar35 + 0x1c));
        puVar32[1] = uStack_138;
        *puVar32 = local_140;
        *(undefined8 *)((long)plVar16 + (long)*(int *)(lVar35 + 0x20)) = 0;
        *(undefined1 *)((long)plVar16 + (long)*(int *)(lVar35 + 0x24)) = 0xe;
        puVar32 = (undefined8 *)((long)plVar16 + (long)*(int *)(lVar35 + 0x28));
        *puVar32 = 0;
        *(undefined1 *)(puVar32 + 1) = 0;
        puVar32 = (undefined8 *)((long)plVar16 + (long)*(int *)(lVar35 + 0x30));
        *puVar32 = local_128;
        *(char *)(puVar32 + 1) = (char)uVar17;
        puVar32 = (undefined8 *)((long)plVar16 + (long)*(int *)(lVar35 + 0x34));
        *puVar32 = uVar24;
        puVar32[1] = uVar22;
        puVar32 = (undefined8 *)((long)plVar16 + (long)*(int *)(lVar35 + 0x3c));
        *puVar32 = 0;
        puVar32[1] = 0;
        *(undefined1 *)((long)plVar16 + (long)*(int *)(lVar35 + 0x40)) = 1;
        *(undefined8 *)((long)plVar16 + (long)*(int *)(lVar35 + 0x44)) = 0;
        *(undefined1 *)((long)plVar16 + (long)*(int *)(lVar35 + 0x48)) = 0;
      }
      else {
        FUN_100029548(local_c0,FUN_100282ef4);
        _swift_bridgeObjectRelease(local_a8);
        lVar29 = local_150;
        FUN_100007e64(lVar25,local_150,FUN_10040211c);
        puVar19 = local_b0;
        lVar37 = local_e0;
        (**(code **)(local_e0 + 0x28))(lVar29 + *(int *)(lVar35 + 0x14),local_b8,local_b0);
        iVar5 = *(int *)(lVar35 + 0x18);
        FUN_10002a29c(lVar29 + iVar5,&DAT_100553d90,&DAT_10041bf10);
        (**(code **)(lVar37 + 0x38))(lVar29 + iVar5,1,1,puVar19);
        *(undefined1 *)(lVar29 + *(int *)(lVar35 + 0x40)) = 1;
        *(undefined1 *)(lVar29 + *(int *)(lVar35 + 0x48)) = 0;
        FUN_100007e64(lVar29,local_d0,FUN_10040211c);
      }
      uVar17 = *(ulong *)(pcVar20 + 0x10);
      local_80 = pcVar20;
      if (*(ulong *)(pcVar20 + 0x18) >> 1 <= uVar17) {
        FUN_1001c5c4c(1 < *(ulong *)(pcVar20 + 0x18),uVar17 + 1,1);
      }
      pcVar20 = local_80;
      *(ulong *)(local_80 + 0x10) = uVar17 + 1;
      FUN_100007e64(local_d0,local_80 +
                             *(long *)(local_c8 + 0x48) * uVar17 +
                             ((ulong)*(byte *)(local_c8 + 0x50) + 0x20 &
                             ((ulong)*(byte *)(local_c8 + 0x50) ^ 0xffffffffffffffff)),FUN_10040211c
                   );
      lVar15 = lVar15 + local_120;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    _swift_release(local_130.unknown);
    _swift_release(local_108);
  }
  return pcVar20;
}

