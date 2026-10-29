// rea decompile_all
// name: FUN_100280fec
// address: 0x100280fec
// body: available
// range: 0x100280fec-0x1002816b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100280fec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  long lVar8;
  bool bVar9;
  undefined *puVar10;
  CharacterSet CVar11;
  long lVar12;
  CharacterSet CVar13;
  URL UVar14;
  CharacterSet CVar15;
  undefined8 uVar16;
  void *pvVar17;
  void *pvVar18;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  code *pcVar23;
  undefined *puVar24;
  undefined8 uVar25;
  long lVar26;
  undefined8 uVar27;
  undefined8 *puVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  undefined *apuStack_120 [5];
  long lStack_f8;
  long local_f0 [5];
  undefined *apuStack_c8 [2];
  long local_b8;
  CharacterSet local_b0;
  undefined *local_a8 [4];
  long local_88;
  undefined1 local_80 [16];
  undefined *local_70;
  undefined8 uStack_68;
  
  puVar10 = &DAT_100553d90;
  apuStack_120[1] = (undefined *)param_3;
  apuStack_c8[1] = (undefined *)param_2;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_b8 = (long)apuStack_120 - extraout_x8;
  apuStack_c8[0] = (undefined *)Foundation::URL::typeMetadataAccessor();
  local_f0[4] = *(long *)(apuStack_c8[0] + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_f0[4] + 0x40));
  lVar26 = ((long)apuStack_120 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  CVar11 = Foundation::CharacterSet::typeMetadataAccessor();
  local_f0[3] = *(long *)(CVar11.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_f0[3] + 0x40));
  puVar24 = (undefined *)(lVar26 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  lVar12 = 0;
  FUN_100407bd0();
  lVar22 = *(long *)(lVar12 + -8);
  local_f0[2] = lVar12;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar22 + 0x40));
  puVar28 = (undefined8 *)(puVar24 + -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  lVar12 = 0;
  FUN_10040211c();
  local_f0[0] = *(long *)(lVar12 + -8);
  local_f0[1] = lVar12;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_f0[0] + 0x40));
  apuStack_120[3] = (undefined *)((long)puVar28 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  local_88 = *(long *)(param_1 + 0x10);
  puVar10 = PTR___swiftEmptyArrayStorage_100524190;
  if (local_88 != 0) {
    local_70 = PTR___swiftEmptyArrayStorage_100524190;
    FUN_1001c5c4c(0,local_88,0);
    CVar13.unknown =
         (undefined *)
         (param_1 +
         ((ulong)*(byte *)(lVar22 + 0x50) + 0x20 &
         ((ulong)*(byte *)(lVar22 + 0x50) ^ 0xffffffffffffffff)));
    apuStack_120[2] = *(undefined **)(lVar22 + 0x48);
    puVar19 = PTR___type_metadata_for_Swift_String_100523a98;
    puVar10 = local_70;
    apuStack_120[4] = CVar11.unknown;
    lStack_f8 = lVar26;
    local_b0.unknown = puVar24;
    do {
      CVar11.unknown = local_b0.unknown;
      lVar12 = lStack_f8;
      puVar24 = apuStack_120[4];
      local_a8[2] = CVar13.unknown;
      local_a8[3] = puVar10;
      FUN_100029504(puVar19,CVar13.unknown,puVar28,FUN_100407bd0);
      local_80 = *(undefined1 (*) [16])(puVar28 + 0x15);
      Foundation::CharacterSet::get_whitespacesAndNewlines(CVar13);
      FUN_100026df4();
      SVar29 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(CVar11);
      pcVar23 = *(code **)(local_f0[3] + 8);
      (*pcVar23)(CVar11.unknown,puVar24);
      SVar30 = Swift::String::lowercased(SVar29);
      UVar14.unknown = SVar30.str;
      SVar31.bridgeObject = (void *)0xe400000000000000;
      SVar31.str = (char *)0x34706d2e;
      bVar9 = Swift::String::hasSuffix(SVar31,SVar30);
      _swift_bridgeObjectRelease(SVar30.bridgeObject);
      if (!bVar9) {
        SVar30 = Swift::String::lowercased(SVar29);
        pvVar17 = SVar30.bridgeObject;
        SVar32.bridgeObject = (void *)0xe400000000000000;
        SVar32.str = (char *)0x766f6d2e;
        bVar9 = Swift::String::hasSuffix(SVar32,SVar30);
        _swift_bridgeObjectRelease(pvVar17);
        UVar14.unknown = SVar30.str;
        if (!bVar9) {
          local_80 = (undefined1  [16])SVar29;
          _swift_bridgeObjectRetain(SVar29.bridgeObject);
          UVar14.unknown = SVar30.str;
          SVar33.bridgeObject = (void *)0xe400000000000000;
          SVar33.str = (char *)0x34706d2e;
          Swift::String::append(SVar33,SVar30);
          _swift_bridgeObjectRelease(SVar29.bridgeObject);
          SVar29 = (String)local_80;
        }
      }
      Foundation::URL::appendingPathComponent(SVar29,UVar14);
      _swift_bridgeObjectRelease(SVar29.bridgeObject);
      CVar11.unknown = (undefined *)puVar28[0x18];
      if (CVar11.unknown == (undefined *)0x0) {
        uVar21 = 1;
      }
      else {
        local_80._8_8_ = CVar11.unknown;
        local_80._0_8_ = (char *)puVar28[0x17];
        CVar15.unknown = CVar11.unknown;
        _swift_bridgeObjectRetain();
        CVar13.unknown = local_b0.unknown;
        Foundation::CharacterSet::get_whitespacesAndNewlines(CVar15);
        SVar29 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(CVar13);
        pvVar17 = SVar29.bridgeObject;
        (*pcVar23)(CVar13.unknown,puVar24);
        _swift_bridgeObjectRelease();
        uVar2 = (ulong)SVar29.str & 0xffffffffffff;
        if (((ulong)pvVar17 & 0x2000000000000000) != 0) {
          uVar2 = (ulong)pvVar17 >> 0x38 & 0xf;
        }
        if (uVar2 == 0) {
          uVar21 = 1;
        }
        else {
          local_80 = (undefined1  [16])SVar29;
          Foundation::CharacterSet::get_whitespacesAndNewlines(CVar11);
          SVar29 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(CVar13);
          (*pcVar23)(CVar13.unknown,puVar24);
          SVar30 = Swift::String::lowercased(SVar29);
          UVar14.unknown = SVar30.str;
          SVar34.bridgeObject = (void *)0xe400000000000000;
          SVar34.str = (char *)0x676e702e;
          bVar9 = Swift::String::hasSuffix(SVar34,SVar30);
          _swift_bridgeObjectRelease(SVar30.bridgeObject);
          if (bVar9) {
LAB_1002813fc:
            _swift_bridgeObjectRelease(pvVar17);
          }
          else {
            SVar30 = Swift::String::lowercased(SVar29);
            UVar14.unknown = SVar30.str;
            SVar35.bridgeObject = (void *)0xe400000000000000;
            SVar35.str = (char *)0x67706a2e;
            bVar9 = Swift::String::hasSuffix(SVar35,SVar30);
            _swift_bridgeObjectRelease(SVar30.bridgeObject);
            if (bVar9) goto LAB_1002813fc;
            SVar30 = Swift::String::lowercased(SVar29);
            pvVar18 = SVar30.bridgeObject;
            SVar36.bridgeObject = (void *)0xe500000000000000;
            SVar36.str = (char *)0x6765706a2e;
            bVar9 = Swift::String::hasSuffix(SVar36,SVar30);
            _swift_bridgeObjectRelease(pvVar18);
            UVar14.unknown = SVar30.str;
            if (bVar9) goto LAB_1002813fc;
            local_80 = (undefined1  [16])SVar29;
            _swift_bridgeObjectRetain(SVar29.bridgeObject);
            UVar14.unknown = SVar30.str;
            SVar37.bridgeObject = (void *)0xe400000000000000;
            SVar37.str = (char *)0x676e702e;
            Swift::String::append(SVar37,SVar30);
            _swift_bridgeObjectRelease(SVar29.bridgeObject);
            _swift_bridgeObjectRelease(pvVar17);
            SVar29 = (String)local_80;
          }
          pvVar17 = SVar29.bridgeObject;
          Foundation::URL::appendingPathComponent(SVar29,UVar14);
          uVar21 = 0;
        }
        _swift_bridgeObjectRelease(pvVar17);
      }
      lVar8 = local_b8;
      puVar10 = apuStack_c8[0];
      lVar26 = local_f0[4];
      (**(code **)(local_f0[4] + 0x38))(local_b8,uVar21,1,apuStack_c8[0]);
      lVar22 = local_f0[1];
      puVar24 = apuStack_120[3];
      local_a8[1] = (undefined *)*puVar28;
      local_a8[0] = (undefined *)puVar28[1];
      (**(code **)(lVar26 + 0x20))
                ((long)apuStack_120[3] + (long)*(int *)(local_f0[1] + 0x14),lVar12,puVar10);
      FUN_100007e1c(lVar8,(long)puVar24 + (long)*(int *)(lVar22 + 0x18),&DAT_100553d90,
                    &DAT_10041bf10);
      lVar12 = local_f0[2];
      uVar25 = puVar28[6];
      uVar3 = puVar28[7];
      uVar21 = 0;
      if (*(char *)(puVar28 + 0xe) != '\x01') {
        uVar21 = puVar28[0xd];
      }
      uVar4 = *(undefined1 *)(puVar28 + 8);
      uVar27 = puVar28[2];
      uVar5 = *(undefined1 *)(puVar28 + 3);
      FUN_1000087e4((long)puVar28 + (long)*(int *)(local_f0[2] + 0x54),
                    (long)puVar24 + (long)*(int *)(lVar22 + 0x2c),&DAT_10054b950,&DAT_10041d870);
      puVar10 = local_a8[0];
      uVar20 = puVar28[0xb];
      uVar6 = *(undefined1 *)(puVar28 + 0xc);
      uVar16 = *(undefined8 *)((long)puVar28 + (long)*(int *)(lVar12 + 0x50));
      *(undefined **)puVar24 = local_a8[1];
      *(undefined **)((long)puVar24 + 8) = puVar10;
      puVar1 = (undefined8 *)((long)puVar24 + (long)*(int *)(lVar22 + 0x1c));
      *puVar1 = uVar25;
      puVar1[1] = uVar3;
      *(undefined8 *)((long)puVar24 + (long)*(int *)(lVar22 + 0x20)) = uVar21;
      uVar7 = *(undefined1 *)(puVar28 + 0x14);
      *(undefined1 *)((long)puVar24 + (long)*(int *)(lVar22 + 0x24)) = uVar4;
      puVar1 = (undefined8 *)((long)puVar24 + (long)*(int *)(lVar22 + 0x28));
      *puVar1 = uVar27;
      *(undefined1 *)(puVar1 + 1) = uVar5;
      puVar1 = (undefined8 *)((long)puVar24 + (long)*(int *)(lVar22 + 0x30));
      *puVar1 = uVar20;
      *(undefined1 *)(puVar1 + 1) = uVar6;
      uVar25 = puVar28[0x10];
      uVar21 = puVar28[0xf];
      puVar1 = (undefined8 *)((long)puVar24 + (long)*(int *)(lVar22 + 0x34));
      puVar1[1] = puVar28[0x10];
      *puVar1 = uVar21;
      puVar1 = (undefined8 *)((long)puVar24 + (long)*(int *)(lVar22 + 0x38));
      uVar21 = puVar28[0x12];
      *puVar1 = puVar28[0x13];
      *(undefined1 *)(puVar1 + 1) = uVar7;
      uVar20 = puVar28[0x11];
      puVar1 = (undefined8 *)((long)puVar24 + (long)*(int *)(lVar22 + 0x3c));
      puVar1[1] = puVar28[0x12];
      *puVar1 = uVar20;
      *(undefined1 *)((long)puVar24 + (long)*(int *)(lVar22 + 0x40)) = 0;
      *(undefined8 *)((long)puVar24 + (long)*(int *)(lVar22 + 0x44)) = uVar16;
      *(undefined1 *)((long)puVar24 + (long)*(int *)(lVar22 + 0x48)) = 0;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(puVar10);
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar25);
      _swift_bridgeObjectRetain(uVar21);
      FUN_100029548(puVar28,FUN_100407bd0);
      local_70 = local_a8[3];
      uVar2 = *(ulong *)(local_a8[3] + 0x10);
      if (*(ulong *)(local_a8[3] + 0x18) >> 1 <= uVar2) {
        FUN_1001c5c4c(1 < *(ulong *)(local_a8[3] + 0x18),uVar2 + 1,1);
      }
      puVar10 = local_70;
      *(ulong *)(local_70 + 0x10) = uVar2 + 1;
      FUN_100007e64(puVar24,local_70 +
                            *(long *)(local_f0[0] + 0x48) * uVar2 +
                            ((ulong)*(byte *)(local_f0[0] + 0x50) + 0x20 &
                            ((ulong)*(byte *)(local_f0[0] + 0x50) ^ 0xffffffffffffffff)),
                    FUN_10040211c);
      CVar13.unknown = local_a8[2] + apuStack_120[2];
      local_88 = local_88 + -1;
      puVar19 = apuStack_120[2];
    } while (local_88 != 0);
  }
  return puVar10;
}

