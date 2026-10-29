// rea decompile_all
// name: FUN_1002b5e7c
// address: 0x1002b5e7c
// body: available
// range: 0x1002b5e7c-0x1002b6ddb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002b6dc8 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001002b6724) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002b6718 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

bool FUN_1002b5e7c(char *param_1,ulong param_2,char *param_3,char *param_4)

{
  uint uVar1;
  undefined1 auVar2 [16];
  long lVar3;
  code *pcVar4;
  bool bVar5;
  undefined *puVar6;
  PublicKey PVar7;
  URL UVar8;
  NSString *pNVar9;
  ID IVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  URLRequest UVar15;
  URLComponents_conflict UVar16;
  UnsafeRawBufferPointer bufferPointer;
  __DataStorage *p_Var17;
  __DataStorage *p_Var18;
  char *pcVar19;
  void *pvVar21;
  undefined *puVar22;
  char *pcVar23;
  char *pcVar24;
  uint uVar25;
  long extraout_x8;
  long extraout_x8_00;
  long lVar26;
  long extraout_x8_01;
  char *pcVar27;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar28;
  long extraout_x8_05;
  long extraout_x8_06;
  long lVar29;
  ulong uVar30;
  void *pvVar31;
  long lVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String separator;
  String SVar37;
  String SVar38;
  String SVar39;
  undefined8 auStack_1c0 [4];
  void *local_1a0;
  void *local_198;
  String local_190;
  char *local_180;
  String local_178;
  void *local_168;
  long local_160;
  undefined *local_158;
  void *local_150;
  char *local_148;
  char *local_140;
  long local_138;
  long local_130;
  long local_128;
  undefined *local_120;
  char *local_118;
  undefined *local_110;
  long local_108;
  ulong local_100;
  char *local_f8;
  char *local_f0;
  char *local_e8;
  long local_e0;
  long local_d8;
  undefined *local_d0;
  long local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  String local_a8;
  undefined *local_90;
  undefined *local_88;
  String local_80;
  long local_70;
  void *pvVar20;
  
  local_70 = *(long *)PTR____stack_chk_guard_100521138;
  local_118 = param_1;
  local_100 = param_2;
  local_110 = (undefined *)CryptoKit::SHA256::typeMetadataAccessor();
  local_138 = *(long *)(local_110 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_138 + 0x40));
  lVar26 = (long)&local_1a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_108 = lVar26;
  local_120 = (undefined *)CryptoKit::SHA256Digest::typeMetadataAccessor();
  local_128 = *(long *)(local_120 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_128 + 0x40));
  lVar26 = lVar26 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_10055a138;
  local_130 = lVar26;
  FUN_100002f94(&DAT_10055a138,&DAT_10042e098);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar27 = (char *)(lVar26 - extraout_x8_01);
  local_f0 = pcVar27;
  PVar7 = CryptoKit::Curve25519::Signing::PublicKey::typeMetadataAccessor();
  pvVar31 = *(void **)(PVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)((long)pvVar31 + 0x40));
  pcVar27 = pcVar27 + -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_10054f970;
  local_f8 = pcVar27;
  FUN_100002f94(&DAT_10054f970,&DAT_100420e28);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar26 = (long)pcVar27 - extraout_x8_03;
  local_d0 = (undefined *)Foundation::URLComponents::typeMetadataAccessor();
  local_d8 = *(long *)(local_d0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_d8 + 0x40));
  lVar28 = lVar26 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100553d90;
  local_e0 = lVar28;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar28 = lVar28 - extraout_x8_05;
  UVar8 = Foundation::URL::typeMetadataAccessor();
  lVar32 = *(long *)(UVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar32 + 0x40));
  lVar29 = lVar28 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0);
  local_c8 = lVar29;
  pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  local_e8 = param_3;
  IVar10 = objc_stub::valueForHTTPHeaderField_((ID)param_3,pNVar9);
  if (IVar10 == 0) {
    bVar5 = true;
    goto LAB_1002b620c;
  }
  local_140 = (char *)PVar7;
  SVar33 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pvVar20 = SVar33.bridgeObject;
  local_148 = param_4;
  Foundation::URLRequest::_get_url((URLRequest)0x0);
  lVar11 = lVar28;
  (**(code **)(lVar32 + 0x30))(lVar28,1,UVar8.unknown);
  lVar3 = local_c8;
  if ((int)lVar11 == 1) {
    _swift_bridgeObjectRelease(pvVar20);
    puVar6 = &DAT_100553d90;
    puVar22 = &DAT_10041bf10;
    lVar26 = lVar28;
LAB_1002b6204:
    FUN_10002a29c(lVar26,puVar6,puVar22);
  }
  else {
    local_150 = pvVar31;
    (**(code **)(lVar32 + 0x20))(local_c8,lVar28,UVar8.unknown);
    Foundation::URLComponents::_init(SUB81(lVar3,0));
    puVar6 = local_d0;
    lVar11 = local_d8;
    lVar12 = lVar26;
    (**(code **)(local_d8 + 0x30))(lVar26,1,local_d0);
    lVar28 = local_e0;
    if ((int)lVar12 == 1) {
      (**(code **)(lVar32 + 8))(lVar3,UVar8.unknown);
      _swift_bridgeObjectRelease(pvVar20);
      puVar6 = &DAT_10054f970;
      puVar22 = &DAT_100420e28;
      goto LAB_1002b6204;
    }
    local_160 = lVar32;
    local_158 = UVar8.unknown;
    (**(code **)(lVar11 + 0x20))(local_e0,lVar26,puVar6);
    pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    pcVar27 = local_e8;
    IVar10 = objc_stub::valueForHTTPHeaderField_((ID)local_e8,pNVar9);
    if (IVar10 == 0) {
      _swift_bridgeObjectRelease(pvVar20);
      (**(code **)(lVar11 + 8))(lVar28,puVar6);
      (**(code **)(local_160 + 8))(local_c8,local_158);
      bVar5 = false;
      goto LAB_1002b620c;
    }
    SVar34 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    IVar10 = objc_stub::valueForHTTPHeaderField_((ID)pcVar27,pNVar9);
    puVar6 = local_158;
    if (IVar10 == 0) {
      _swift_bridgeObjectRelease(SVar34.bridgeObject);
      _swift_bridgeObjectRelease(pvVar20);
      (**(code **)(local_d8 + 8))(lVar28,local_d0);
      (**(code **)(local_160 + 8))(local_c8,puVar6);
      bVar5 = false;
      goto LAB_1002b620c;
    }
    local_168 = SVar34.bridgeObject;
    local_178 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    uVar13 = 0;
    local_80.str = (char *)0x2d;
    local_80.bridgeObject = (void *)0xe100000000000000;
    local_b8 = 0x2b;
    uStack_b0 = 0xe100000000000000;
    local_a8 = SVar33;
    FUN_100026df4();
    puVar22 = PTR___type_metadata_for_Swift_String_100523a98;
    *(undefined8 *)(lVar29 + -0x10) = uVar13;
    *(undefined8 *)(lVar29 + -8) = uVar13;
    *(undefined **)(lVar29 + -0x20) = PTR___type_metadata_for_Swift_String_100523a98;
    *(undefined8 *)(lVar29 + -0x18) = uVar13;
    SVar35 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                       (&local_80,&local_b8,0,0,0,1,PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98);
    _swift_bridgeObjectRelease(pvVar20);
    local_80.bridgeObject = (void *)0xe100000000000000;
    local_80.str = (char *)0x5f;
    local_b8 = 0x2f;
    uStack_b0 = 0xe100000000000000;
    local_a8 = SVar35;
    *(undefined8 *)(lVar29 + -0x10) = uVar13;
    *(undefined8 *)(lVar29 + -8) = uVar13;
    *(undefined **)(lVar29 + -0x20) = puVar22;
    *(undefined8 *)(lVar29 + -0x18) = uVar13;
    pcVar27 = (char *)0x0;
    pvVar31 = (void *)0x0;
    SVar33 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                       (&local_80,&local_b8,0,0,0,1,puVar22,puVar22);
    _swift_bridgeObjectRelease(SVar35.bridgeObject);
    local_a8 = SVar33;
    uVar14 = Swift::String::get_count(SVar33);
    lVar26 = local_c8;
    pcVar19 = local_f0;
    pvVar20 = local_150;
    while ((uVar14 & 3) != 0) {
      SVar33.bridgeObject = (void *)0xe100000000000000;
      SVar33.str = (char *)0x3d;
      SVar35.bridgeObject = pvVar31;
      SVar35.str = pcVar27;
      Swift::String::append(SVar33,SVar35);
      SVar33 = local_a8;
      uVar14 = Swift::String::get_count(local_a8);
    }
    pvVar31 = SVar33.bridgeObject;
    Foundation::Data::_init((NSDataBase64DecodingOptions)SVar33.str);
    _swift_bridgeObjectRelease(pvVar31);
    if ((ulong)SVar33.bridgeObject >> 0x3c < 0xf) {
      local_a8.bridgeObject = (void *)0x80000001004e3e20;
      local_a8.str = (char *)0xd00000000000002b;
      local_80.str = (char *)0x2d;
      local_80.bridgeObject = (void *)0xe100000000000000;
      local_b8 = 0x2b;
      uStack_b0 = 0xe100000000000000;
      local_150 = SVar33.bridgeObject;
      local_f0 = SVar33.str;
      *(undefined8 *)(lVar29 + -0x10) = uVar13;
      *(undefined8 *)(lVar29 + -8) = uVar13;
      *(undefined **)(lVar29 + -0x20) = puVar22;
      *(undefined8 *)(lVar29 + -0x18) = uVar13;
      local_a8 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                           (&local_80,&local_b8,0,0,0,1,puVar22,puVar22);
      pvVar21 = local_a8.bridgeObject;
      local_80.bridgeObject = (void *)0xe100000000000000;
      local_80.str = (char *)0x5f;
      local_b8 = 0x2f;
      uStack_b0 = 0xe100000000000000;
      *(undefined8 *)(lVar29 + -0x10) = uVar13;
      *(undefined8 *)(lVar29 + -8) = uVar13;
      *(undefined **)(lVar29 + -0x20) = puVar22;
      *(undefined8 *)(lVar29 + -0x18) = uVar13;
      pcVar27 = (char *)0x0;
      pvVar31 = (void *)0x0;
      SVar33 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                         (&local_80,&local_b8,0,0,0,1,puVar22,puVar22);
      _swift_bridgeObjectRelease(pvVar21);
      local_a8 = SVar33;
      uVar14 = Swift::String::get_count(SVar33);
      pcVar23 = local_140;
      local_180 = SVar34.str;
      pcVar24 = local_f0;
      while (local_f0 = pcVar24, (uVar14 & 3) != 0) {
        SVar34.bridgeObject = (void *)0xe100000000000000;
        SVar34.str = (char *)0x3d;
        SVar37.bridgeObject = pvVar31;
        SVar37.str = pcVar27;
        Swift::String::append(SVar34,SVar37);
        SVar33 = local_a8;
        uVar14 = Swift::String::get_count(local_a8);
        pcVar24 = local_f0;
      }
      pvVar31 = SVar33.bridgeObject;
      Foundation::Data::_init((NSDataBase64DecodingOptions)SVar33.str);
      _swift_bridgeObjectRelease(pvVar31);
      if ((ulong)SVar33.bridgeObject >> 0x3c < 0xf) {
        local_a8 = SVar33;
        FUN_10011a30c(SVar33.str,SVar33.bridgeObject);
        CryptoKit::Curve25519::Signing::PublicKey::_init
                  (pcVar19,SVar33.str,PTR___type_metadata_for_Foundation_Data_100520ae0,
                   PTR___protocol_witness_table_for_Foundation_Data___Foundation_ContiguousBytes_in_Foundation_100520ad0
                  );
        pcVar24 = pcVar23;
        local_190 = SVar33;
        (**(code **)((long)pvVar20 + 0x38))(pcVar19,0,1);
        UVar15.unknown = local_f8;
        (**(code **)((long)pvVar20 + 0x20))();
        Foundation::URLRequest::_get_httpMethod(UVar15);
        pcVar27 = (char *)0x544547;
        if (pcVar19 != (char *)0x0) {
          pcVar27 = UVar15.unknown;
        }
        UVar16.unknown = (char *)0xe300000000000000;
        if (pcVar19 != (char *)0x0) {
          UVar16.unknown = pcVar19;
        }
        SVar36.bridgeObject = UVar16.unknown;
        SVar36.str = pcVar27;
        SVar33 = Swift::String::uppercased(SVar36);
        local_198 = SVar33.bridgeObject;
        local_148 = SVar33.str;
        _swift_bridgeObjectRelease();
        SVar33 = Foundation::URLComponents::get_percentEncodedPath(UVar16);
        SVar34 = SVar33;
        local_a8 = SVar33;
        Foundation::URLComponents::_get_percentEncodedQuery((URLComponents_conflict)SVar33.str);
        if (SVar34.bridgeObject != (void *)0x0) {
          local_80.bridgeObject = (void *)0xe100000000000000;
          local_80.str = (char *)0x3f;
          SVar38.bridgeObject = pcVar24;
          SVar38.str = pcVar23;
          Swift::String::append(SVar34,SVar38);
          _swift_bridgeObjectRelease(SVar34.bridgeObject);
          pvVar31 = local_80.bridgeObject;
          SVar39.bridgeObject = pcVar24;
          SVar39.str = pcVar23;
          Swift::String::append(local_80,SVar39);
          _swift_bridgeObjectRelease(pvVar31);
          SVar33 = local_a8;
        }
        uVar14 = local_100;
        lVar26 = local_108;
        pcVar27 = (char *)objc_stub::statusCode((ID)local_e8);
        local_a8.str = pcVar27;
        SVar34 = Swift::CustomStringConvertible::get_description();
        local_1a0 = SVar34.bridgeObject;
        local_e8 = SVar34.str;
        FUN_1000036d0(&DAT_1005552d0,PTR_typeMetadataAccessor_100521940,
                      PTR_CryptoKit__CryptoKit__SHA256_>CryptoKit__HashFunction_100521938);
        puVar6 = local_110;
        CryptoKit::HashFunction::init();
        uVar30 = local_100;
        pcVar27 = local_118;
        uVar1 = (uint)(uVar14 >> 0x20);
        uVar25 = uVar1 >> 0x1e;
        if (uVar25 < 2) {
          if (uVar1 >> 0x1e != 0) {
            lVar28 = (long)(int)local_118;
            if ((long)local_118 >> 0x20 < lVar28) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1002b6dd0);
              (*pcVar4)();
            }
            p_Var17 = (__DataStorage *)(local_100 & 0x3fffffffffffffff);
            _swift_retain();
            Foundation::__DataStorage::_get__bytes
                      ((__DataStorage *)(uVar30 & 0x3fffffffffffffff),p_Var17);
            if (p_Var17 == (__DataStorage *)0x0) {
              Foundation::__DataStorage::get__length
                        ((__DataStorage *)(uVar30 & 0x3fffffffffffffff),(__DataStorage *)0x0);
              bufferPointer.unknown = (undefined *)0x0;
              puVar6 = local_110;
              lVar26 = local_108;
            }
            else {
              p_Var18 = (__DataStorage *)
                        Foundation::__DataStorage::get__offset
                                  ((__DataStorage *)(uVar30 & 0x3fffffffffffffff),p_Var17);
              if (SBORROW8(lVar28,(long)p_Var18)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1002b6ddc);
                (*pcVar4)();
              }
              Foundation::__DataStorage::get__length
                        ((__DataStorage *)(uVar30 & 0x3fffffffffffffff),p_Var18);
              bufferPointer.unknown = (undefined *)0x0;
              puVar6 = local_110;
              lVar26 = local_108;
              if (p_Var17 + (lVar28 - (long)p_Var18) != (__DataStorage *)0x0) {
                bufferPointer.unknown = p_Var17 + (lVar28 - (long)p_Var18);
              }
            }
            goto LAB_1002b6acc;
          }
          local_a8.bridgeObject._0_1_ = (char)uVar14;
          local_a8.str = local_118;
          local_a8.bridgeObject._1_1_ = (char)(uVar14 >> 8);
          local_a8.bridgeObject._2_1_ = (char)(uVar14 >> 0x10);
          local_a8.bridgeObject._3_1_ = (char)(uVar14 >> 0x18);
          local_a8.bridgeObject._4_1_ = (char)(uVar14 >> 0x20);
          local_a8.bridgeObject._5_1_ = (char)(uVar14 >> 0x28);
          CryptoKit::HashFunction::update((UnsafeRawBufferPointer)&local_a8);
          uVar30 = uVar14;
        }
        else {
          if (uVar25 == 2) {
            lVar26 = *(long *)(local_118 + 0x10);
            lVar28 = *(long *)(local_118 + 0x18);
            _swift_retain();
            bufferPointer.unknown = (undefined *)(uVar14 & 0x3fffffffffffffff);
            _swift_retain();
            Foundation::__DataStorage::_get__bytes
                      ((__DataStorage *)(uVar14 & 0x3fffffffffffffff),
                       (__DataStorage *)bufferPointer.unknown);
            p_Var17 = (__DataStorage *)0x0;
            if ((__DataStorage *)bufferPointer.unknown != (__DataStorage *)0x0) {
              p_Var17 = (__DataStorage *)
                        Foundation::__DataStorage::get__offset
                                  ((__DataStorage *)(uVar14 & 0x3fffffffffffffff),
                                   (__DataStorage *)bufferPointer.unknown);
              if (SBORROW8(lVar26,(long)p_Var17)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1002b6dd8);
                (*pcVar4)();
              }
              bufferPointer.unknown = bufferPointer.unknown + (lVar26 - (long)p_Var17);
            }
            uVar30 = local_100;
            if (SBORROW8(lVar28,lVar26)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1002b6dd4);
              (*pcVar4)();
            }
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(local_100 & 0x3fffffffffffffff),p_Var17);
            puVar6 = local_110;
            lVar26 = local_108;
          }
          else {
            local_a8._0_14_ = ZEXT814(0) << 0x30;
            auVar2._8_8_ = 0;
            auVar2._0_8_ = local_a8.bridgeObject;
            local_a8 = (String)(auVar2 << 0x40);
            bufferPointer.unknown = (undefined *)&local_a8;
            uVar30 = uVar14;
          }
LAB_1002b6acc:
          CryptoKit::HashFunction::update(bufferPointer);
          pcVar27 = local_118;
        }
        FUN_100093624(pcVar27,uVar30);
        lVar28 = local_130;
        CryptoKit::HashFunction::_finalize();
        (**(code **)(local_138 + 8))(lVar26,puVar6);
        puVar22 = local_120;
        local_90 = local_120;
        puVar6 = &DAT_10055a140;
        FUN_1000036d0(&DAT_10055a140,PTR_typeMetadataAccessor_1005218f8,
                      PTR_CryptoKit__CryptoKit__SHA256Digest_>Foundation__ContiguousBytes_1005218f0)
        ;
        local_88 = puVar6;
        FUN_1000ccd8c(&local_a8);
        lVar26 = local_128;
        (**(code **)(local_128 + 0x10))();
        FUN_100007bd0(&local_a8,local_90);
        Foundation::ContiguousBytes::_withUnsafeBytes();
        (**(code **)(lVar26 + 8))(lVar28,puVar22);
        FUN_100043f24(&local_a8);
        pcVar27 = local_80.str;
        pvVar31 = local_80.bridgeObject;
        FUN_10011a30c(local_80.str,local_80.bridgeObject);
        FUN_100093624(pcVar27,pvVar31);
        pcVar19 = pcVar27;
        FUN_1002b4ab0(pcVar27,pvVar31);
        local_a8.str = pcVar19;
        FUN_100002f94(&DAT_100553858,&DAT_100429e10);
        FUN_1000087a0(&DAT_1005546b8,&DAT_100553858,&DAT_100429e10,
                      PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100523b48);
        SVar34 = (extension_Swift)::Swift::BidirectionalCollection::_joined
                           ((String)(ZEXT816(0xe000000000000000) << 0x40));
        FUN_100093624(pcVar27,pvVar31);
        _swift_bridgeObjectRelease(pcVar19);
        pcVar27 = &DAT_100549eb0;
        FUN_100002f94(&DAT_100549eb0,&DAT_100426be0);
        _swift_allocObject();
        pcVar27[0x18] = '\f';
        pcVar27[0x19] = '\0';
        pcVar27[0x1a] = '\0';
        pcVar27[0x1b] = '\0';
        pcVar27[0x1c] = '\0';
        pcVar27[0x1d] = '\0';
        pcVar27[0x1e] = '\0';
        pcVar27[0x1f] = '\0';
        pcVar27[0x10] = '\x06';
        pcVar27[0x11] = '\0';
        pcVar27[0x12] = '\0';
        pcVar27[0x13] = '\0';
        pcVar27[0x14] = '\0';
        pcVar27[0x15] = '\0';
        pcVar27[0x16] = '\0';
        pcVar27[0x17] = '\0';
        *(char **)(pcVar27 + 0x20) = local_148;
        *(void **)(pcVar27 + 0x28) = local_198;
        *(String *)(pcVar27 + 0x30) = SVar33;
        *(char **)(pcVar27 + 0x40) = local_e8;
        *(void **)(pcVar27 + 0x48) = local_1a0;
        *(char **)(pcVar27 + 0x50) = local_180;
        *(void **)(pcVar27 + 0x58) = local_168;
        *(char **)(pcVar27 + 0x60) = local_178.str;
        *(void **)(pcVar27 + 0x68) = local_178.bridgeObject;
        *(String *)(pcVar27 + 0x70) = SVar34;
        separator.bridgeObject = (void *)0xe100000000000000;
        separator.str = (char *)0xa;
        local_a8.str = pcVar27;
        SVar33 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator);
        _swift_release(pcVar27);
        pcVar19 = local_f0;
        pvVar31 = local_150;
        local_a8.bridgeObject = local_150;
        local_a8.str = local_f0;
        FUN_100284930();
        local_80 = SVar33;
        FUN_1002b740c();
        pcVar27 = local_f8;
        bVar5 = CryptoKit::Curve25519::Signing::PublicKey::_isValidSignature
                          (&local_a8,&local_80,PTR___type_metadata_for_Foundation_Data_100520ae0,
                           PTR___type_metadata_for_Foundation_Data_100520ae0,SVar33.str,SVar33.str);
        FUN_1000a3004(local_190.str,local_190.bridgeObject);
        FUN_100093624(local_80.str,local_80.bridgeObject);
        (**(code **)((long)pvVar20 + 8))(pcVar27,local_140);
        (**(code **)(local_d8 + 8))(local_e0,local_d0);
        (**(code **)(local_160 + 8))(local_c8,local_158);
        FUN_1000a3004(pcVar19,pvVar31);
        goto LAB_1002b620c;
      }
      _swift_bridgeObjectRelease(local_178.bridgeObject);
      _swift_bridgeObjectRelease(local_168);
      FUN_1000a3004(pcVar24,local_150);
    }
    else {
      _swift_bridgeObjectRelease(local_178.bridgeObject);
      _swift_bridgeObjectRelease(local_168);
    }
    (**(code **)(local_d8 + 8))(local_e0,local_d0);
    (**(code **)(local_160 + 8))(lVar26,puVar6);
  }
  bVar5 = false;
LAB_1002b620c:
  if (*(long *)PTR____stack_chk_guard_100521138 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return bVar5;
}

