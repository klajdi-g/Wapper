// rea decompile_all
// name: FUN_1002f2560
// address: 0x1002f2560
// body: available
// range: 0x1002f2560-0x1002f394f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001002f3940) */

void FUN_1002f2560(long param_1,undefined8 *param_2,long param_3,long param_4,char *param_5,
                  long param_6)

{
  _StringGuts _Var1;
  char *pcVar2;
  _StringGuts _Var3;
  byte bVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  bool bVar9;
  long lVar10;
  Hasher into;
  ulong uVar11;
  String *pSVar12;
  undefined *puVar13;
  ID IVar14;
  void *pvVar15;
  undefined *puVar16;
  undefined *puVar17;
  _DictionaryStorage *this;
  long lVar18;
  URL UVar19;
  String **ppSVar20;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 *puVar21;
  long extraout_x8_02;
  String *pSVar22;
  long extraout_x8_03;
  ulong uVar23;
  long lVar24;
  long *plVar25;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  void *extraout_x14;
  String *pSVar26;
  code *pcVar27;
  String *capacity;
  undefined8 uVar28;
  char *pcVar29;
  char *pcVar30;
  code *pcVar31;
  long lVar32;
  long lVar33;
  String SVar34;
  String SVar35;
  String local_200;
  undefined8 *local_1f0;
  long *local_1e8;
  long local_1e0;
  long local_1d8;
  String *local_1d0;
  undefined8 *local_1c8;
  long local_1c0;
  long local_1b8;
  long local_1b0;
  undefined *local_1a8;
  String *local_1a0;
  long local_198;
  long local_190;
  long local_188;
  long local_180;
  undefined8 local_178;
  long local_170;
  void *local_168;
  char *local_160;
  long local_158;
  long local_150;
  void *local_148;
  String *local_140;
  long local_138;
  undefined *local_130;
  long local_128;
  String *local_120;
  long local_118;
  undefined8 *local_110;
  long local_108;
  long local_100;
  long local_f8;
  undefined *local_f0;
  long local_e8;
  long local_e0;
  String *local_d8 [3];
  String *local_c0;
  String local_b0 [5];
  
  lVar10 = 0;
  local_1f0 = param_2;
  local_190 = param_6;
  local_160 = param_5;
  local_158 = param_4;
  local_150 = param_3;
  FUN_10040211c();
  local_f8 = *(long *)(lVar10 + -8);
  local_118 = lVar10;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_f8 + 0x40));
  lVar24 = (long)&local_200 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar13 = &DAT_10054ac40;
  local_1e0 = lVar24;
  FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar13 + -8) + 0x40));
  lVar24 = lVar24 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_1b0 = lVar24;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar24 = lVar24 - extraout_x12;
  lVar10 = 0;
  local_198 = lVar24;
  FUN_1002f58e8();
  local_1c0 = *(long *)(lVar10 + -8);
  local_1b8 = lVar10;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_1c0 + 0x40));
  puVar21 = (undefined8 *)(lVar24 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  puVar13 = &DAT_10054a188;
  local_1c8 = puVar21;
  FUN_100002f94(&DAT_10054a188,&DAT_10042d4a0);
  local_138 = *(long *)(puVar13 + -8);
  local_130 = puVar13;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_138 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  pSVar22 = (String *)((long)puVar21 - extraout_x8_02);
  puVar13 = &DAT_100556a80;
  local_120 = pSVar22;
  FUN_100002f94(&DAT_100556a80,&DAT_10042ac10);
  local_1a8 = puVar13;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar13 + -8) + 0x40));
  lVar10 = (long)pSVar22 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  local_e8 = lVar10;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = lVar10 - extraout_x12_00;
  local_100 = lVar10;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = lVar10 - extraout_x12_01;
  local_108 = lVar10;
  (*(code *)PTR____chkstk_darwin_100521118)();
  plVar25 = (long *)(lVar10 - extraout_x12_02);
  local_1e8 = plVar25;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar21 = (undefined8 *)((long)plVar25 - extraout_x12_03);
  local_110 = puVar21;
  (*(code *)PTR____chkstk_darwin_100521118)();
  pSVar22 = (String *)((long)puVar21 - extraout_x12_04);
  local_1a0 = pSVar22;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = (long)pSVar22 - extraout_x12_05;
  local_f0 = (undefined *)lVar10;
  (*(code *)PTR____chkstk_darwin_100521118)();
  pSVar22 = (String *)(lVar10 - extraout_x12_06);
  lVar10 = *(long *)(param_1 + 0x10);
  local_170 = param_1;
  local_168 = extraout_x14;
  local_e0 = lVar10;
  if (lVar10 == 0) {
    local_140 = (String *)PTR___swiftEmptyArrayStorage_100524190;
  }
  else {
    lVar24 = 0;
    local_148 = (void *)((ulong)*(byte *)((long)extraout_x14 + 0x50) + 0x20 &
                        ((ulong)*(byte *)((long)extraout_x14 + 0x50) ^ 0xffffffffffffffff));
    local_140 = (String *)PTR___swiftEmptyArrayStorage_100524190;
    lVar33 = *(long *)((long)extraout_x14 + 0x48);
    local_128 = param_1 + (long)local_148;
    do {
      FUN_1000087e4(local_128 + lVar33 * lVar24,pSVar22,&DAT_100556a80,&DAT_10042ac10);
      pcVar29 = pSVar22->str;
      puVar13 = pSVar22->bridgeObject;
      SVar34 = *pSVar22;
      if (DAT_100558868 != -1) {
        _swift_once(&DAT_100558868,FUN_100268a88);
      }
      IVar14 = DAT_100558858;
      objc_stub::lock(DAT_100558858);
      if (DAT_100558860 != -1) {
        _swift_once(&DAT_100558860,FUN_100268ab0);
      }
      lVar32 = DAT_100558850;
      if (*(long *)(DAT_100558850 + 0x10) != 0) {
        Swift::Hasher::init(*(__int64 *)(DAT_100558850 + 0x28));
        _swift_bridgeObjectRetain(lVar32);
        into.unknown = (undefined *)local_b0;
        Swift::String::hash(into,SVar34);
        uVar11 = Swift::Hasher::_finalize(into);
        uVar23 = -1L << ((ulong)*(byte *)(lVar32 + 0x20) & 0x3f);
        uVar11 = uVar11 & (uVar23 ^ 0xffffffffffffffff);
        if ((*(ulong *)(lVar32 + 0x38 + (uVar11 >> 6) * 8) >> (uVar11 & 0x3f) & 1) != 0) {
          do {
            puVar21 = (undefined8 *)(*(long *)(lVar32 + 0x30) + uVar11 * 0x10);
            _Var1.unknown = (undefined *)*puVar21;
            _Var3.unknown = (undefined *)puVar21[1];
            if ((_Var1.unknown == pcVar29 && _Var3.unknown == puVar13) ||
               (bVar9 = Swift::_stringCompareWithSmolCheck
                                  (_Var1,_Var3,(_StringComparisonResult)(__int8)pcVar29), bVar9)) {
              _swift_bridgeObjectRelease(lVar32);
              objc_stub::unlock(IVar14);
              pSVar26 = local_140;
              pSVar12 = local_140;
              _swift_isUniquelyReferenced_nonNull_native();
              local_d8[0] = pSVar26;
              if (((ulong)pSVar12 & 1) == 0) {
                FUN_1001c6004(0,pSVar26[1].str + 1,1);
              }
              pcVar29 = local_d8[0][1].str;
              if ((char *)((ulong)local_d8[0][1].bridgeObject >> 1) <= pcVar29) {
                FUN_1001c6004((void *)0x1 < local_d8[0][1].bridgeObject,pcVar29 + 1,1);
              }
              local_d8[0][1].str = pcVar29 + 1;
              local_140 = local_d8[0];
              FUN_100007e1c(pSVar22,(char *)((long)&local_d8[0]->str + (long)local_148) +
                                    (long)pcVar29 * lVar33,&DAT_100556a80,&DAT_10042ac10);
              lVar10 = local_e0;
              goto LAB_1002f28d8;
            }
            uVar11 = uVar11 + 1 & ~uVar23;
          } while ((*(ulong *)(lVar32 + 0x38 + (uVar11 >> 6) * 8) >> (uVar11 & 0x3f) & 1) != 0);
        }
        _swift_bridgeObjectRelease(lVar32);
        lVar10 = local_e0;
      }
      objc_stub::unlock(IVar14);
      FUN_10002a29c(pSVar22,&DAT_100556a80,&DAT_10042ac10);
LAB_1002f28d8:
      lVar24 = lVar24 + 1;
    } while (lVar24 != lVar10);
  }
  pcVar29 = local_140[1].str;
  if (pcVar29 == (char *)0x0) {
    lVar10 = 0;
  }
  else {
    lVar10 = 0;
    iVar5 = *(int *)(local_1a8 + 0x40);
    pcVar30 = (char *)((long)&local_140->str +
                      ((ulong)*(byte *)((long)local_168 + 0x50) + 0x20 &
                      ((ulong)*(byte *)((long)local_168 + 0x50) ^ 0xffffffffffffffff)));
    lVar24 = *(long *)((long)local_168 + 0x48);
    do {
      puVar13 = local_f0;
      FUN_1000087e4(pcVar30,local_f0,&DAT_100556a80,&DAT_10042ac10);
      lVar33 = *(long *)((long)puVar13 + (long)iVar5);
      FUN_10002a29c(puVar13,&DAT_100556a80,&DAT_10042ac10);
      bVar9 = SCARRY8(lVar10,lVar33);
      lVar10 = lVar10 + lVar33;
      if (bVar9) {
                    /* WARNING: Does not return */
        pcVar31 = (code *)SoftwareBreakpoint(1,0x1002f38dc);
        (*pcVar31)();
      }
      pcVar30 = pcVar30 + lVar24;
      pcVar29 = pcVar29 + -1;
    } while (pcVar29 != (char *)0x0);
  }
  _swift_release(local_140);
  if (SCARRY8(lVar10,local_150)) {
                    /* WARNING: Does not return */
    pcVar31 = (code *)SoftwareBreakpoint(1,0x1002f38e4);
    (*pcVar31)();
  }
  lVar24 = lVar10 + local_150 + local_158;
  if (SCARRY8(lVar10 + local_150,local_158)) {
                    /* WARNING: Does not return */
    pcVar31 = (code *)SoftwareBreakpoint(1,0x1002f38e8);
    (*pcVar31)();
  }
  pcVar29 = local_160 + lVar24;
  if (SCARRY8(lVar24,(long)local_160)) {
                    /* WARNING: Does not return */
    pcVar31 = (code *)SoftwareBreakpoint(1,0x1002f38ec);
    (*pcVar31)();
  }
  puVar13 = &_OBJC_CLASS___NSByteCountFormatter;
  _objc_allocWithZone();
  IVar14 = objc_stub::init((ID)puVar13);
  objc_stub::setAllowedUnits_(IVar14,0xe);
  objc_stub::setCountStyle_(IVar14,0);
  objc_stub::stringFromByteCount_(IVar14,pcVar29);
  SVar34 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pvVar15 = (void *)0x0;
  FUN_1002f58d4();
  iVar5 = *(int *)((long)pvVar15 + 0x1c);
  puVar13 = &DAT_10054dd08;
  local_b0[0] = SVar34;
  FUN_100002f94(&DAT_10054dd08,&DAT_10041ea50);
  puVar21 = local_1f0;
  SwiftUI::State::set_wrappedValue((State *)((long)local_1f0 + (long)iVar5),local_b0,puVar13);
  puVar16 = &_OBJC_CLASS___NSByteCountFormatter;
  _objc_allocWithZone();
  IVar14 = objc_stub::init((ID)puVar16);
  objc_stub::setAllowedUnits_(IVar14,0xe);
  objc_stub::setCountStyle_(IVar14,0);
  objc_stub::stringFromByteCount_(IVar14,lVar10);
  local_b0[0] = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  SwiftUI::State::set_wrappedValue
            ((State *)((long)puVar21 + (long)*(int *)((long)pvVar15 + 0x20)),local_b0,puVar13);
  puVar16 = &_OBJC_CLASS___NSByteCountFormatter;
  _objc_allocWithZone();
  IVar14 = objc_stub::init((ID)puVar16);
  objc_stub::setAllowedUnits_(IVar14,0xe);
  objc_stub::setCountStyle_(IVar14,0);
  lVar33 = local_150;
  objc_stub::stringFromByteCount_(IVar14,local_150);
  local_b0[0] = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  SwiftUI::State::set_wrappedValue
            ((State *)((long)puVar21 + (long)*(int *)((long)pvVar15 + 0x24)),local_b0,puVar13);
  puVar16 = &_OBJC_CLASS___NSByteCountFormatter;
  _objc_allocWithZone();
  IVar14 = objc_stub::init((ID)puVar16);
  objc_stub::setAllowedUnits_(IVar14,0xe);
  objc_stub::setCountStyle_(IVar14,0);
  lVar24 = local_158;
  objc_stub::stringFromByteCount_(IVar14,local_158);
  local_b0[0] = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  SwiftUI::State::set_wrappedValue
            ((State *)((long)puVar21 + (long)*(int *)((long)pvVar15 + 0x28)),local_b0,puVar13);
  pcVar29 = local_160;
  puVar16 = &_OBJC_CLASS___NSByteCountFormatter;
  _objc_allocWithZone();
  IVar14 = objc_stub::init((ID)puVar16);
  objc_stub::setAllowedUnits_(IVar14,0xe);
  objc_stub::setCountStyle_(IVar14,0);
  objc_stub::stringFromByteCount_(IVar14,pcVar29);
  local_b0[0] = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  SwiftUI::State::set_wrappedValue
            ((State *)((long)puVar21 + (long)*(int *)((long)pvVar15 + 0x2c)),local_b0,puVar13);
  lVar10 = lVar33 + lVar24;
  if (SCARRY8(lVar33,lVar24)) {
                    /* WARNING: Does not return */
    pcVar31 = (code *)SoftwareBreakpoint(1,0x1002f38f0);
    (*pcVar31)();
  }
  if (SCARRY8(lVar10,(long)pcVar29)) {
                    /* WARNING: Does not return */
    pcVar31 = (code *)SoftwareBreakpoint(1,0x1002f38f4);
    (*pcVar31)();
  }
  iVar5 = *(int *)((long)pvVar15 + 0x30);
  local_b0[0].str = pcVar29 + lVar10;
  puVar13 = &DAT_10054ba40;
  FUN_100002f94(&DAT_10054ba40,&DAT_100423be0);
  puVar21 = local_1f0;
  SwiftUI::State::set_wrappedValue((State *)((long)local_1f0 + (long)iVar5),local_b0,puVar13);
  lVar10 = local_190;
  _swift_beginAccess(local_190 + 0x10,local_b0,0,0);
  local_d8[0] = *(String **)(lVar10 + 0x10);
  iVar5 = *(int *)((long)pvVar15 + 0x44);
  _swift_bridgeObjectRetain();
  puVar13 = &DAT_10055b228;
  FUN_100002f94(&DAT_10055b228,&DAT_10042fa80);
  SwiftUI::State::set_wrappedValue((State *)((long)puVar21 + (long)iVar5),local_d8,puVar13);
  puVar13 = (undefined *)*puVar21;
  if (puVar13 == (undefined *)0x0) {
    FUN_100279594(0);
    FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
    SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
    pcVar31 = (code *)SoftwareBreakpoint(1,0x1002f3940);
    (*pcVar31)();
  }
  puVar16 = &DAT_10042fa88;
  local_200.bridgeObject = pvVar15;
  _swift_getKeyPath(&DAT_10042fa88);
  puVar17 = &DAT_10042fab0;
  _swift_getKeyPath(&DAT_10042fab0);
  _swift_retain(puVar13);
  Combine::Published::_get_subscript(local_d8);
  _swift_release(puVar16);
  _swift_release(puVar17);
  local_f0 = puVar13;
  _swift_release(puVar13);
  pSVar22 = local_d8[0];
  pcVar29 = local_d8[0][1].str;
  if (pcVar29 == (char *)0x0) {
    _swift_bridgeObjectRelease(local_d8[0]);
    pSVar26 = (String *)PTR___swiftEmptyArrayStorage_100524190;
  }
  else {
    local_d8[0] = (String *)PTR___swiftEmptyArrayStorage_100524190;
    FUN_1001c5f54(0,pcVar29,0);
    pcVar30 = (char *)0x0;
    bVar4 = *(byte *)(local_f8 + 0x50);
    pSVar26 = local_d8[0];
    pSVar12 = local_120;
    do {
      if (pSVar22[1].str <= pcVar30) {
                    /* WARNING: Does not return */
        pcVar31 = (code *)SoftwareBreakpoint(1,0x1002f38e0);
        (*pcVar31)();
      }
      pSVar12 = (String *)((long)&pSVar12->str + (long)*(int *)(local_130 + 0x30));
      FUN_100029504((undefined *)
                    ((long)&pSVar22->str +
                    *(long *)(local_f8 + 0x48) * (long)pcVar30 +
                    ((ulong)bVar4 + 0x20 & ((ulong)bVar4 ^ 0xffffffffffffffff))),pSVar12,
                    FUN_10040211c);
      UVar19.unknown = local_f0;
      _swift_retain();
      SVar34 = Foundation::URL::get_lastPathComponent(UVar19);
      pvVar15 = SVar34.bridgeObject;
      uVar11 = (ulong)SVar34.str & 0xffffffffffff;
      if (((ulong)pvVar15 & 0x2000000000000000) != 0) {
        uVar11 = (ulong)pvVar15 >> 0x38 & 0xf;
      }
      if (uVar11 == 0) {
        _swift_bridgeObjectRelease(pvVar15);
        SVar34 = *pSVar12;
        _swift_bridgeObjectRetain(pSVar12->bridgeObject);
      }
      pvVar15 = SVar34.bridgeObject;
      FUN_10027f304();
      _swift_release(local_f0);
      _swift_bridgeObjectRelease(pvVar15);
      SVar35 = Swift::String::lowercased(SVar34);
      _swift_bridgeObjectRelease(SVar34.bridgeObject);
      pSVar12 = local_120;
      *local_120 = SVar35;
      pcVar2 = pSVar26[1].str;
      local_d8[0] = pSVar26;
      if ((char *)((ulong)pSVar26[1].bridgeObject >> 1) <= pcVar2) {
        FUN_1001c5f54((void *)0x1 < pSVar26[1].bridgeObject,pcVar2 + 1,1);
        pSVar12 = local_120;
      }
      pSVar26 = local_d8[0];
      pcVar30 = pcVar30 + 1;
      local_d8[0][1].str = pcVar2 + 1;
      FUN_100007e1c(pSVar12,(undefined *)
                            ((long)&local_d8[0]->str +
                            *(long *)(local_138 + 0x48) * (long)pcVar2 +
                            ((ulong)*(byte *)(local_138 + 0x50) + 0x20 &
                            ((ulong)*(byte *)(local_138 + 0x50) ^ 0xffffffffffffffff))),
                    &DAT_10054a188,&DAT_10042d4a0);
    } while (pcVar29 != pcVar30);
    _swift_bridgeObjectRelease(pSVar22);
  }
  lVar10 = local_e0;
  lVar24 = local_198;
  pSVar22 = local_1a0;
  capacity = (String *)pSVar26[1].str;
  pSVar12 = (String *)PTR___swiftEmptyDictionarySingleton_100524198;
  if (capacity != (String *)0x0) {
    this = (_DictionaryStorage *)&DAT_10054a190;
    FUN_100002f94(&DAT_10054a190,&DAT_10041a220);
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    pSVar12 = capacity;
  }
  pcVar29 = (char *)0x0;
  local_d8[0] = pSVar12;
  FUN_1002f9e14(pSVar26,1,local_d8);
  _swift_bridgeObjectRelease(pSVar26);
  pSVar26 = local_d8[0];
  if (lVar10 == 0) {
    _swift_release(local_d8[0]);
    pSVar26 = (String *)PTR___swiftEmptyArrayStorage_100524190;
  }
  else {
    local_200.str = (char *)0x0;
    local_c0 = (String *)PTR___swiftEmptyArrayStorage_100524190;
    FUN_1001c5fc8(0,lVar10,0);
    lVar33 = local_170 +
             ((ulong)*(byte *)((long)local_168 + 0x50) + 0x20 &
             ((ulong)*(byte *)((long)local_168 + 0x50) ^ 0xffffffffffffffff));
    local_1d8 = *(long *)((long)local_168 + 0x48);
    local_1d0 = pSVar26;
    pSVar26 = local_c0;
    do {
      pSVar12 = local_1d0;
      local_128 = lVar33;
      local_120 = pSVar26;
      FUN_1000087e4(lVar33,pSVar22,&DAT_100556a80,&DAT_10042ac10);
      puVar21 = local_110;
      FUN_1000087e4(pSVar22,local_110,&DAT_100556a80,&DAT_10042ac10);
      local_130 = (undefined *)*puVar21;
      local_138 = puVar21[1];
      local_140 = (String *)pSVar22->str;
      local_148 = pSVar22->bridgeObject;
      SVar34 = Swift::String::lowercased(*pSVar22);
      pvVar15 = SVar34.bridgeObject;
      local_e0 = lVar10;
      if (pSVar12[1].str == (char *)0x0) {
        bVar9 = true;
      }
      else {
        _swift_bridgeObjectRetain(pSVar12);
        FUN_10000464c(SVar34.str);
        bVar9 = ((ulong)SVar34.bridgeObject & 1) == 0;
        if (!bVar9) {
          FUN_100029504((void *)((long)pSVar12[3].bridgeObject +
                                *(long *)(local_f8 + 0x48) * (long)SVar34.str),lVar24,FUN_10040211c)
          ;
        }
        _swift_release(pSVar12);
      }
      lVar32 = local_f8;
      lVar10 = local_118;
      (**(code **)(local_f8 + 0x38))(lVar24,bVar9,1,local_118);
      _swift_bridgeObjectRelease(pvVar15);
      lVar33 = local_1b0;
      FUN_1000087e4(lVar24,local_1b0,&DAT_10054ac40,&DAT_10041ce70);
      lVar18 = lVar33;
      (**(code **)(lVar32 + 0x30))(lVar33,1,lVar10);
      lVar10 = local_1e0;
      if ((int)lVar18 == 1) {
        FUN_10002a29c(lVar24,&DAT_10054ac40,&DAT_10041ce70);
        plVar25 = local_1e8;
        FUN_1000087e4(pSVar22,local_1e8,&DAT_100556a80,&DAT_10042ac10);
        puVar13 = local_1a8;
        local_150 = *plVar25;
        local_158 = plVar25[1];
        iVar5 = *(int *)(local_1a8 + 0x30);
        iVar6 = *(int *)(local_1a8 + 0x50);
        UVar19 = Foundation::URL::typeMetadataAccessor();
        pcVar31 = *(code **)(*(long *)(UVar19.unknown + -8) + 8);
        (*pcVar31)((long)plVar25 + (long)iVar6,UVar19.unknown);
        (*pcVar31)((long)plVar25 + (long)iVar5,UVar19.unknown);
      }
      else {
        lVar32 = local_1e0;
        FUN_100007e64(lVar33,local_1e0,FUN_10040211c);
        puVar13 = local_f0;
        _swift_retain(local_f0);
        lVar33 = lVar10;
        FUN_10026a7c8();
        local_158 = lVar32;
        local_150 = lVar33;
        _swift_release(puVar13);
        FUN_100029548(lVar10,FUN_10040211c);
        FUN_10002a29c(lVar24,&DAT_10054ac40,&DAT_10041ce70);
        puVar13 = local_1a8;
      }
      lVar10 = local_108;
      FUN_1000087e4(pSVar22,local_108,&DAT_100556a80,&DAT_10042ac10);
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar10 + 8));
      lVar10 = local_100;
      FUN_1000087e4(pSVar22,local_100,&DAT_100556a80,&DAT_10042ac10);
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar10 + 8));
      uVar28 = *(undefined8 *)((long)&pSVar22->str + (long)*(int *)(puVar13 + 0x40));
      puVar16 = &_OBJC_CLASS___NSByteCountFormatter;
      _objc_allocWithZone();
      IVar14 = objc_stub::init((ID)puVar16);
      objc_stub::setAllowedUnits_(IVar14,0xe);
      objc_stub::setCountStyle_(IVar14,0);
      objc_stub::stringFromByteCount_(IVar14,uVar28);
      SVar34 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      lVar10 = local_e8;
      local_168 = SVar34.bridgeObject;
      local_160 = SVar34.str;
      FUN_1000087e4(pSVar22,local_e8,&DAT_100556a80,&DAT_10042ac10);
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar10 + 8));
      lVar10 = local_190;
      iVar5 = *(int *)(puVar13 + 0x30);
      ppSVar20 = local_d8;
      _swift_beginAccess(local_190 + 0x10,ppSVar20,0x20,0);
      lVar10 = *(long *)(lVar10 + 0x10);
      if (*(long *)(lVar10 + 0x10) == 0) {
LAB_1002f3550:
        _swift_endAccess(local_d8);
        local_170 = -0x1d00000000000000;
        local_178 = 0x412f4e;
      }
      else {
        _swift_bridgeObjectRetain(lVar10);
        lVar24 = local_e8 + iVar5;
        FUN_1000048c0();
        if (((ulong)ppSVar20 & 1) == 0) {
          _swift_bridgeObjectRelease(lVar10);
          goto LAB_1002f3550;
        }
        puVar21 = (undefined8 *)(*(long *)(lVar10 + 0x38) + lVar24 * 0x10);
        local_178 = *puVar21;
        local_170 = puVar21[1];
        _swift_bridgeObjectRetain();
        _swift_endAccess(local_d8);
        _swift_bridgeObjectRelease(lVar10);
      }
      lVar10 = (long)*(int *)(puVar13 + 0x30);
      lVar24 = (long)*(int *)(puVar13 + 0x50);
      UVar19 = Foundation::URL::typeMetadataAccessor();
      lVar33 = local_e8;
      lVar32 = *(long *)(UVar19.unknown + -8);
      pcVar31 = *(code **)(lVar32 + 8);
      (*pcVar31)(local_e8 + lVar24,UVar19.unknown);
      (*pcVar31)(lVar33 + iVar5,UVar19.unknown);
      if (DAT_100558868 != -1) {
        _swift_once(&DAT_100558868,FUN_100268a88);
      }
      IVar14 = DAT_100558858;
      local_180 = (long)local_110 + lVar10;
      local_188 = (long)local_110 + lVar24;
      lVar33 = local_108 + lVar10;
      lVar18 = local_108 + lVar24;
      lVar10 = local_100 + lVar10;
      lVar24 = local_100 + lVar24;
      objc_stub::lock(DAT_100558858);
      if (DAT_100558860 != -1) {
        _swift_once(&DAT_100558860,FUN_100268ab0);
      }
      lVar7 = DAT_100558850;
      _swift_bridgeObjectRetain(DAT_100558850);
      pSVar22 = local_140;
      FUN_1002165a4(local_140,local_148,lVar7);
      _swift_bridgeObjectRelease(lVar7);
      objc_stub::unlock(IVar14);
      lVar7 = local_138;
      puVar8 = local_1c8;
      *local_1c8 = local_130;
      puVar8[1] = lVar7;
      lVar7 = local_158;
      puVar8[2] = local_150;
      puVar8[3] = lVar7;
      lVar7 = local_1b8;
      pcVar27 = *(code **)(lVar32 + 0x20);
      (*pcVar27)((long)puVar8 + (long)*(int *)(local_1b8 + 0x18),lVar18,UVar19.unknown);
      (*pcVar27)((long)puVar8 + (long)*(int *)(lVar7 + 0x1c),lVar10,UVar19.unknown);
      puVar21 = (undefined8 *)((long)puVar8 + (long)*(int *)(lVar7 + 0x20));
      *puVar21 = local_160;
      puVar21[1] = local_168;
      puVar21 = (undefined8 *)((long)puVar8 + (long)*(int *)(lVar7 + 0x24));
      *puVar21 = local_178;
      puVar21[1] = local_170;
      *(byte *)((long)puVar8 + (long)*(int *)(lVar7 + 0x28)) = ((byte)pSVar22 ^ 0xff) & 1;
      (*pcVar31)(lVar24,UVar19.unknown);
      (*pcVar31)(lVar33,UVar19.unknown);
      (*pcVar31)(local_188,UVar19.unknown);
      (*pcVar31)(local_180,UVar19.unknown);
      pSVar22 = local_1a0;
      FUN_10002a29c(local_1a0,&DAT_100556a80,&DAT_10042ac10);
      local_c0 = local_120;
      pcVar29 = local_120[1].str;
      if ((char *)((ulong)local_120[1].bridgeObject >> 1) <= pcVar29) {
        FUN_1001c5fc8((void *)0x1 < local_120[1].bridgeObject,pcVar29 + 1,1);
      }
      pSVar26 = local_c0;
      local_c0[1].str = pcVar29 + 1;
      FUN_100007e64(puVar8,(undefined *)
                           ((long)&local_c0->str +
                           *(long *)(local_1c0 + 0x48) * (long)pcVar29 +
                           ((ulong)*(byte *)(local_1c0 + 0x50) + 0x20 &
                           ((ulong)*(byte *)(local_1c0 + 0x50) ^ 0xffffffffffffffff))),FUN_1002f58e8
                   );
      lVar33 = local_128 + local_1d8;
      lVar10 = local_e0 + -1;
      lVar24 = local_198;
    } while (lVar10 != 0);
    _swift_release(local_1d0);
    pcVar29 = local_200.str;
  }
  local_d8[0] = pSVar26;
  _swift_bridgeObjectRetain(pSVar26);
  FUN_1002ea4d4(local_d8);
  pvVar15 = local_200.bridgeObject;
  if (pcVar29 != (char *)0x0) {
    _swift_release(local_d8[0]);
                    /* WARNING: Does not return */
    pcVar31 = (code *)SoftwareBreakpoint(1,0x1002f3950);
    (*pcVar31)();
  }
  _swift_bridgeObjectRelease(pSVar26);
  iVar5 = *(int *)((long)pvVar15 + 0x34);
  puVar13 = &DAT_10055b220;
  FUN_100002f94(&DAT_10055b220,&DAT_10042fa78);
  SwiftUI::State::set_wrappedValue((State *)((long)local_1f0 + (long)iVar5),local_d8,puVar13);
  return;
}

