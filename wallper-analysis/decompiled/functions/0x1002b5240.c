// rea decompile_all
// name: FUN_1002b5240
// address: 0x1002b5240
// body: available
// range: 0x1002b5240-0x1002b5e7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002b5e78 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002b5bf8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1002b5240(undefined8 param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  void *pvVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 *puVar4;
  code *pcVar5;
  undefined *puVar6;
  URLComponents_conflict UVar7;
  URL UVar8;
  URL UVar9;
  URLRequest UVar10;
  URLComponents_conflict UVar11;
  Date DVar12;
  UnsafeRawBufferPointer UVar13;
  __DataStorage *p_Var14;
  __DataStorage *p_Var15;
  char *pcVar16;
  char *pcVar17;
  undefined1 *puVar18;
  char *pcVar19;
  void *pvVar20;
  uint uVar21;
  long extraout_x8;
  long extraout_x8_00;
  long lVar22;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  undefined *puVar23;
  long extraout_x8_06;
  long extraout_x8_07;
  ulong uVar24;
  long lVar25;
  undefined *puVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  double dVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String separator;
  String SVar35;
  String SVar36;
  String SVar37;
  undefined1 auStack_1b0 [8];
  void *local_1a8;
  char *local_1a0;
  void *local_198;
  char *local_190;
  void *local_188;
  undefined *local_180;
  void *local_178;
  char *local_170;
  long local_168;
  long local_160;
  long local_158;
  undefined *local_150;
  undefined *local_148;
  undefined *local_140;
  long local_138;
  long local_130;
  long local_128;
  undefined *local_120;
  undefined1 *local_118;
  long local_110;
  undefined *local_108;
  long local_100;
  long local_f8;
  undefined *local_f0;
  undefined *local_e8;
  char *local_e0;
  char *local_d8;
  long local_d0;
  undefined8 local_c8;
  String local_b8;
  undefined *local_a0;
  undefined *local_98;
  char *local_90;
  void *pvStack_88;
  long local_80;
  
  local_80 = *(long *)PTR____stack_chk_guard_100521138;
  local_108 = (undefined *)CryptoKit::SymmetricKey::typeMetadataAccessor();
  local_110 = *(long *)(local_108 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_110 + 0x40));
  puVar6 = &DAT_10055a150;
  local_118 = auStack_1b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_100002f94(&DAT_10055a150,&DAT_10042e0a0);
  local_f8 = *(long *)(puVar6 + -8);
  local_f0 = puVar6;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_f8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar22 = (long)(auStack_1b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  local_100 = lVar22;
  local_e8 = (undefined *)CryptoKit::SHA256::typeMetadataAccessor();
  local_138 = *(long *)(local_e8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_138 + 0x40));
  lVar22 = lVar22 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_d0 = lVar22;
  local_120 = (undefined *)CryptoKit::SHA256Digest::typeMetadataAccessor();
  local_128 = *(long *)(local_120 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_128 + 0x40));
  lVar22 = lVar22 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_130 = lVar22;
  local_d8 = (char *)Foundation::Date::typeMetadataAccessor();
  local_e0 = *(char **)(local_d8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_e0 + 0x40));
  lVar22 = lVar22 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_10054f970;
  FUN_100002f94(&DAT_10054f970,&DAT_100420e28);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar26 = (undefined *)(lVar22 - extraout_x8_04);
  UVar7 = Foundation::URLComponents::typeMetadataAccessor();
  lVar29 = *(long *)(UVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar29 + 0x40));
  puVar23 = puVar26 + -(extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar30 = (long)puVar23 - extraout_x8_06;
  UVar8 = Foundation::URL::typeMetadataAccessor();
  lVar25 = *(long *)(UVar8.unknown + -8);
  UVar9 = UVar8;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar25 + 0x40));
  lVar28 = lVar30 - (extraout_x8_07 + 0xfU & 0xfffffffffffffff0);
  local_c8 = param_1;
  Foundation::URLRequest::_get_url((URLRequest)UVar9.unknown);
  lVar27 = lVar30;
  (**(code **)(lVar25 + 0x30))(lVar30,1,UVar8.unknown);
  if ((int)lVar27 == 1) {
    FUN_10002a29c(lVar30,&DAT_100553d90,&DAT_10041bf10);
    goto LAB_1002b5e08;
  }
  (**(code **)(lVar25 + 0x20))(lVar28,lVar30,UVar8.unknown);
  Foundation::URLComponents::_init(SUB81(lVar28,0));
  puVar6 = puVar26;
  (**(code **)(lVar29 + 0x30))(puVar26,1,UVar7.unknown);
  if ((int)puVar6 == 1) {
    (**(code **)(lVar25 + 8))(lVar28,UVar8.unknown);
    FUN_10002a29c(puVar26,&DAT_10054f970,&DAT_100420e28);
    goto LAB_1002b5e08;
  }
  UVar10.unknown = puVar23;
  local_158 = lVar29;
  local_150 = UVar8.unknown;
  local_148 = UVar7.unknown;
  (**(code **)(lVar29 + 0x20))();
  Foundation::URLRequest::_get_httpMethod(UVar10);
  pcVar17 = (char *)0x544547;
  if (puVar26 != (undefined *)0x0) {
    pcVar17 = UVar10.unknown;
  }
  UVar11.unknown = (undefined *)0xe300000000000000;
  if (puVar26 != (undefined *)0x0) {
    UVar11.unknown = puVar26;
  }
  SVar33.bridgeObject = UVar11.unknown;
  SVar33.str = pcVar17;
  SVar32 = Swift::String::uppercased(SVar33);
  _swift_bridgeObjectRelease();
  SVar33 = Foundation::URLComponents::get_percentEncodedPath(UVar11);
  SVar34 = SVar33;
  local_b8 = SVar33;
  Foundation::URLComponents::_get_percentEncodedQuery((URLComponents_conflict)SVar33.str);
  if (SVar34.bridgeObject != (void *)0x0) {
    local_90 = (char *)0x3f;
    pvStack_88 = (void *)0xe100000000000000;
    SVar36.bridgeObject = param_4;
    SVar36.str = UVar7.unknown;
    Swift::String::append(SVar34,SVar36);
    _swift_bridgeObjectRelease(SVar34.bridgeObject);
    pvVar20 = pvStack_88;
    SVar34.bridgeObject = pvStack_88;
    SVar34.str = local_90;
    SVar37.bridgeObject = param_4;
    SVar37.str = UVar7.unknown;
    Swift::String::append(SVar34,SVar37);
    _swift_bridgeObjectRelease(pvVar20);
    SVar33 = local_b8;
  }
  DVar12 = Foundation::Date::init();
  dVar31 = Foundation::Date::get_timeIntervalSince1970(DVar12);
  (**(code **)(local_e0 + 8))(lVar22,local_d8);
  if (0x7fefffffffffffff < (ulong)ABS(dVar31)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1002b5e48);
    (*pcVar5)();
  }
  if (dVar31 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1002b5e4c);
    (*pcVar5)();
  }
  if (9.223372036854776e+18 <= dVar31) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1002b5e50);
    (*pcVar5)();
  }
  local_b8.str = (char *)(long)dVar31;
  local_1a8 = SVar33.bridgeObject;
  local_1a0 = SVar33.str;
  local_198 = SVar32.bridgeObject;
  local_190 = SVar32.str;
  SVar33 = Swift::CustomStringConvertible::get_description();
  pvVar20 = SVar33.bridgeObject;
  local_e0 = SVar33.str;
  FUN_1002b5118();
  SVar32.bridgeObject = SVar33.bridgeObject;
  UVar10.unknown = SVar33.str;
  Foundation::URLRequest::_get_httpBody(UVar10);
  uVar24 = (ulong)SVar33.bridgeObject >> 0x3c;
  pcVar17 = (char *)0x0;
  if (uVar24 < 0xf) {
    pcVar17 = SVar33.str;
  }
  pvVar1 = (void *)0xc000000000000000;
  if (uVar24 < 0xf) {
    pvVar1 = SVar33.bridgeObject;
  }
  puVar6 = &DAT_1005552d0;
  FUN_1000036d0(&DAT_1005552d0,PTR_typeMetadataAccessor_100521940,
                PTR_CryptoKit__CryptoKit__SHA256_>CryptoKit__HashFunction_100521938);
  puVar26 = local_e8;
  local_140 = puVar6;
  CryptoKit::HashFunction::init();
  uVar2 = (uint)((ulong)pvVar1 >> 0x20);
  uVar21 = uVar2 >> 0x1e;
  local_188 = pvVar20;
  local_180 = puVar23;
  local_178 = pvVar1;
  local_170 = pcVar17;
  local_168 = lVar25;
  local_160 = lVar28;
  local_d8 = UVar10.unknown;
  if (uVar21 < 2) {
    if (uVar2 >> 0x1e == 0) {
      local_b8.bridgeObject._0_1_ = (char)pvVar1;
      local_b8.str = pcVar17;
      local_b8.bridgeObject._1_1_ = (char)((ulong)pvVar1 >> 8);
      local_b8.bridgeObject._2_1_ = (char)((ulong)pvVar1 >> 0x10);
      local_b8.bridgeObject._3_1_ = (char)((ulong)pvVar1 >> 0x18);
      local_b8.bridgeObject._4_1_ = (char)((ulong)pvVar1 >> 0x20);
      local_b8.bridgeObject._5_1_ = (char)((ulong)pvVar1 >> 0x28);
      UVar13.unknown = (undefined *)&local_b8;
      goto LAB_1002b58d0;
    }
    lVar27 = (long)(int)pcVar17;
    if ((long)pcVar17 >> 0x20 < lVar27) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1002b5e6c);
      (*pcVar5)();
    }
    p_Var14 = (__DataStorage *)((ulong)pvVar1 & 0x3fffffffffffffff);
    _swift_retain();
    Foundation::__DataStorage::_get__bytes
              ((__DataStorage *)((ulong)pvVar1 & 0x3fffffffffffffff),p_Var14);
    if (p_Var14 == (__DataStorage *)0x0) {
      Foundation::__DataStorage::get__length
                ((__DataStorage *)((ulong)pvVar1 & 0x3fffffffffffffff),(__DataStorage *)0x0);
      UVar13.unknown = (undefined *)0x0;
    }
    else {
      p_Var15 = (__DataStorage *)
                Foundation::__DataStorage::get__offset
                          ((__DataStorage *)((ulong)pvVar1 & 0x3fffffffffffffff),p_Var14);
      if (SBORROW8(lVar27,(long)p_Var15)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1002b5e78);
        (*pcVar5)();
      }
      Foundation::__DataStorage::get__length
                ((__DataStorage *)((ulong)pvVar1 & 0x3fffffffffffffff),p_Var15);
      UVar13.unknown = (undefined *)0x0;
      if (p_Var14 + (lVar27 - (long)p_Var15) != (__DataStorage *)0x0) {
        UVar13.unknown = p_Var14 + (lVar27 - (long)p_Var15);
      }
    }
    lVar22 = local_d0;
    lVar27 = local_130;
    CryptoKit::HashFunction::update(UVar13);
    FUN_100093624(pcVar17,pvVar1);
  }
  else {
    if (uVar21 == 2) {
      lVar27 = *(long *)(pcVar17 + 0x10);
      lVar22 = *(long *)(pcVar17 + 0x18);
      _swift_retain(pcVar17);
      UVar13.unknown = (undefined *)((ulong)pvVar1 & 0x3fffffffffffffff);
      _swift_retain();
      Foundation::__DataStorage::_get__bytes
                ((__DataStorage *)((ulong)pvVar1 & 0x3fffffffffffffff),
                 (__DataStorage *)UVar13.unknown);
      p_Var14 = (__DataStorage *)0x0;
      if ((__DataStorage *)UVar13.unknown != (__DataStorage *)0x0) {
        p_Var14 = (__DataStorage *)
                  Foundation::__DataStorage::get__offset
                            ((__DataStorage *)((ulong)pvVar1 & 0x3fffffffffffffff),
                             (__DataStorage *)UVar13.unknown);
        if (SBORROW8(lVar27,(long)p_Var14)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1002b5e74);
          (*pcVar5)();
        }
        UVar13.unknown = UVar13.unknown + (lVar27 - (long)p_Var14);
      }
      if (SBORROW8(lVar22,lVar27)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1002b5e70);
        (*pcVar5)();
      }
      Foundation::__DataStorage::get__length
                ((__DataStorage *)((ulong)pvVar1 & 0x3fffffffffffffff),p_Var14);
    }
    else {
      local_b8._0_14_ = ZEXT814(0) << 0x30;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_b8.bridgeObject;
      local_b8 = (String)(auVar3 << 0x40);
      UVar13.unknown = (undefined *)&local_b8;
    }
LAB_1002b58d0:
    lVar22 = local_d0;
    CryptoKit::HashFunction::update(UVar13);
    FUN_100093624(pcVar17,pvVar1);
    lVar27 = local_130;
  }
  pcVar19 = local_e0;
  puVar23 = local_120;
  lVar28 = local_128;
  lVar25 = local_138;
  CryptoKit::HashFunction::_finalize();
  (**(code **)(lVar25 + 8))(lVar22,puVar26);
  local_a0 = puVar23;
  puVar6 = &DAT_10055a140;
  FUN_1000036d0(&DAT_10055a140,PTR_typeMetadataAccessor_1005218f8,
                PTR_CryptoKit__CryptoKit__SHA256Digest_>Foundation__ContiguousBytes_1005218f0);
  local_98 = puVar6;
  FUN_1000ccd8c(&local_b8);
  (**(code **)(lVar28 + 0x10))();
  FUN_100007bd0(&local_b8,local_a0);
  Foundation::ContiguousBytes::_withUnsafeBytes();
  (**(code **)(lVar28 + 8))(lVar27,puVar23);
  FUN_100043f24(&local_b8);
  pvVar20 = pvStack_88;
  pcVar17 = local_90;
  FUN_10011a30c(local_90,pvStack_88);
  FUN_100093624(pcVar17,pvVar20);
  pcVar16 = pcVar17;
  FUN_1002b4ab0(pcVar17,pvVar20);
  local_d0 = 0;
  local_b8.str = pcVar16;
  FUN_100002f94(&DAT_100553858,&DAT_100429e10);
  FUN_1000087a0(&DAT_1005546b8,&DAT_100553858,&DAT_100429e10,
                PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100523b48);
  SVar33 = (extension_Swift)::Swift::BidirectionalCollection::_joined
                     ((String)(ZEXT816(0xe000000000000000) << 0x40));
  FUN_100093624(pcVar17,pvVar20);
  _swift_bridgeObjectRelease(pcVar16);
  pcVar17 = &DAT_100549eb0;
  FUN_100002f94(&DAT_100549eb0,&DAT_100426be0);
  _swift_allocObject();
  pvVar20 = local_188;
  pcVar17[0x18] = '\n';
  pcVar17[0x19] = '\0';
  pcVar17[0x1a] = '\0';
  pcVar17[0x1b] = '\0';
  pcVar17[0x1c] = '\0';
  pcVar17[0x1d] = '\0';
  pcVar17[0x1e] = '\0';
  pcVar17[0x1f] = '\0';
  pcVar17[0x10] = '\x05';
  pcVar17[0x11] = '\0';
  pcVar17[0x12] = '\0';
  pcVar17[0x13] = '\0';
  pcVar17[0x14] = '\0';
  pcVar17[0x15] = '\0';
  pcVar17[0x16] = '\0';
  pcVar17[0x17] = '\0';
  *(char **)(pcVar17 + 0x20) = local_190;
  *(void **)(pcVar17 + 0x28) = local_198;
  *(char **)(pcVar17 + 0x30) = local_1a0;
  *(void **)(pcVar17 + 0x38) = local_1a8;
  *(char **)(pcVar17 + 0x40) = pcVar19;
  *(void **)(pcVar17 + 0x48) = local_188;
  *(char **)(pcVar17 + 0x50) = local_d8;
  *(void **)(pcVar17 + 0x58) = SVar32.bridgeObject;
  *(String *)(pcVar17 + 0x60) = SVar33;
  local_b8.str = pcVar17;
  _swift_bridgeObjectRetain(local_188);
  _swift_bridgeObjectRetain(SVar32.bridgeObject);
  separator.bridgeObject = (void *)0xe100000000000000;
  separator.str = (char *)0xa;
  SVar33 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator);
  _swift_release(pcVar17);
  FUN_100284930();
  local_b8 = SVar33;
  if (DAT_10055a158 != -1) {
    _swift_once(&DAT_10055a158,FUN_1002b4fc8);
  }
  puVar6 = local_108;
  puVar23 = local_108;
  FUN_100099338(local_108,&DAT_10055a160);
  lVar27 = local_110;
  puVar4 = local_118;
  puVar18 = local_118;
  (**(code **)(local_110 + 0x10))(local_118,puVar23,puVar6);
  FUN_1002b740c();
  lVar22 = local_100;
  CryptoKit::HMAC::_authenticationCode
            (local_100,puVar18,puVar4,puVar26,PTR___type_metadata_for_Foundation_Data_100520ae0,
             local_140,puVar18);
  (**(code **)(lVar27 + 8))(puVar4,puVar6);
  FUN_100093624(local_b8.str,local_b8.bridgeObject);
  puVar26 = local_f0;
  local_a0 = local_f0;
  puVar6 = &DAT_10055a178;
  FUN_1000087a0(&DAT_10055a178,&DAT_10055a150,&DAT_10042e0a0,
                PTR_CryptoKit__CryptoKit__HashedAuthenticationCode<undefined>_>Foundation__ContiguousBytes_100521928
               );
  local_98 = puVar6;
  FUN_1000ccd8c(&local_b8);
  lVar27 = local_f8;
  (**(code **)(local_f8 + 0x10))();
  FUN_100007bd0(&local_b8,local_a0);
  Foundation::ContiguousBytes::_withUnsafeBytes();
  (**(code **)(lVar27 + 8))(lVar22,puVar26);
  FUN_100043f24(&local_b8);
  pvVar1 = pvStack_88;
  pcVar17 = local_90;
  FUN_10011a30c(local_90,pvStack_88);
  FUN_100093624(pcVar17,pvVar1);
  pcVar19 = pcVar17;
  FUN_1002b4ab0(pcVar17,pvVar1);
  local_b8.str = pcVar19;
  SVar33 = (extension_Swift)::Swift::BidirectionalCollection::_joined
                     ((String)(ZEXT816(0xe000000000000000) << 0x40));
  FUN_100093624(pcVar17,pvVar1);
  _swift_bridgeObjectRelease(pcVar19);
  SVar35.bridgeObject = pvVar20;
  SVar35.str = local_e0;
  Foundation::URLRequest::_setValue(SVar35,(URLRequest)0x69542d7165522d58);
  _swift_bridgeObjectRelease(pvVar20);
  SVar32.str = local_d8;
  Foundation::URLRequest::_setValue(SVar32,(URLRequest)0x6f4e2d7165522d58);
  _swift_bridgeObjectRelease(SVar32.bridgeObject);
  Foundation::URLRequest::_setValue(SVar33,(URLRequest)0x69532d7165522d58);
  FUN_100093624(local_170,local_178);
  _swift_bridgeObjectRelease(SVar33.bridgeObject);
  (**(code **)(local_158 + 8))(local_180,local_148);
  (**(code **)(local_168 + 8))(local_160,local_150);
LAB_1002b5e08:
  if (*(long *)PTR____stack_chk_guard_100521138 != local_80) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

