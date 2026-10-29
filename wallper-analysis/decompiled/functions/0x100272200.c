// rea decompile_all
// name: FUN_100272200
// address: 0x100272200
// body: available
// range: 0x100272200-0x10027314b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100272200(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ID self;
  DispatchWorkItemFlags qos;
  undefined1 uVar3;
  undefined7 uVar4;
  undefined7 uVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  Published *pPVar9;
  undefined8 uVar10;
  Published *pPVar11;
  long lVar12;
  undefined *puVar13;
  void *aBlock;
  DispatchQoS DVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  Logger LVar17;
  OS_os_log *pOVar18;
  OS_os_log *pOVar19;
  undefined4 *puVar20;
  undefined8 uVar21;
  _StringGuts _Var22;
  char *pcVar23;
  char *pcVar24;
  long extraout_x8;
  long lVar25;
  long extraout_x8_00;
  long lVar26;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined *puVar27;
  long lVar28;
  long extraout_x8_03;
  ulong uVar29;
  undefined *puVar30;
  long lVar31;
  byte *pbVar32;
  ulong uVar33;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  undefined1 uVar34;
  ulong uVar35;
  ulong uVar36;
  undefined8 *puVar37;
  undefined8 *puVar38;
  undefined8 *puVar39;
  long lVar40;
  String SVar41;
  String SVar42;
  String SVar43;
  String SVar44;
  String SVar45;
  String SVar46;
  String SVar47;
  String SVar48;
  String SVar49;
  String SVar50;
  String SVar51;
  String SVar52;
  String SVar53;
  String SVar54;
  String SVar55;
  byte abStack_190 [8];
  DispatchWorkItemFlags local_188;
  long local_180;
  undefined *local_178;
  long local_170;
  long local_168;
  undefined *local_160;
  long local_158;
  long local_150;
  undefined *local_148;
  Published local_d0;
  undefined *local_c8;
  code *local_c0;
  undefined *puStack_b8;
  code *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  undefined8 uStack_88;
  long local_80 [4];
  
  puVar27 = &DAT_100558c60;
  FUN_100002f94(&DAT_100558c60,&DAT_10042d450);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar27 + -8) + 0x40));
  pbVar32 = abStack_190 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar25 = (long)pbVar32 - extraout_x12;
  local_148 = (undefined *)os::Logger::typeMetadataAccessor();
  local_150 = *(long *)(local_148 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_150 + 0x40));
  lVar26 = lVar25 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_158 = lVar26;
  local_160 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_168 = *(long *)(local_160 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_168 + 0x40));
  lVar26 = lVar26 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_170 = lVar26;
  local_178 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_180 = *(long *)(local_178 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_180 + 0x40));
  puVar27 = (undefined *)(lVar26 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  lVar26 = 0;
  local_188.unknown = puVar27;
  FUN_10040211c();
  lVar28 = *(long *)(lVar26 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar28 + 0x40));
  puVar39 = (undefined8 *)(puVar27 + -(extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar37 = (undefined8 *)((long)puVar39 - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar38 = (undefined8 *)((long)puVar37 - extraout_x12_01);
  (*(code *)PTR____chkstk_darwin_100521118)();
  pPVar9 = (Published *)&DAT_10042d458;
  _swift_getKeyPath(&DAT_10042d458);
  puVar27 = &DAT_10042d480;
  _swift_getKeyPath(&DAT_10042d480);
  local_d0.unknown._0_1_ = (undefined1)param_2;
  uVar34 = local_d0.unknown._0_1_;
  local_d0.unknown._1_7_ = (undefined7)((ulong)param_2 >> 8);
  uVar4 = local_d0.unknown._1_7_;
  _swift_retain(param_1);
  _swift_bridgeObjectRetain(param_2);
  Combine::Published::_set_subscript(pPVar9,&local_d0,param_1,pPVar9,puVar27);
  pPVar9 = (Published *)&DAT_10042d3b8;
  _swift_getKeyPath(&DAT_10042d3b8);
  puVar27 = &DAT_10042d3e0;
  _swift_getKeyPath(&DAT_10042d3e0);
  local_d0.unknown._0_1_ = (undefined1)param_3;
  local_d0.unknown._1_7_ = (undefined7)((ulong)param_3 >> 8);
  _swift_retain(param_1);
  _swift_bridgeObjectRetain(param_3);
  Combine::Published::_set_subscript(pPVar9,&local_d0,param_1,pPVar9,puVar27);
  local_d0.unknown._0_1_ = uVar34;
  local_d0.unknown._1_7_ = uVar4;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_3);
  FUN_10012f3c8();
  uVar5 = local_d0.unknown._1_7_;
  uVar3 = local_d0.unknown._0_1_;
  pPVar9 = (Published *)&DAT_10042d1d8;
  _swift_getKeyPath(&DAT_10042d1d8);
  puVar27 = &DAT_10042d200;
  _swift_getKeyPath(&DAT_10042d200);
  local_d0.unknown._0_1_ = uVar3;
  local_d0.unknown._1_7_ = uVar5;
  _swift_retain(param_1);
  Combine::Published::_set_subscript(pPVar9,&local_d0,param_1,pPVar9,puVar27);
  puVar15 = (undefined8 *)(param_1 + _TtC7Wallper17VideoLibraryStore::lookupCache);
  uVar10 = *puVar15;
  uVar21 = puVar15[1];
  *puVar15 = 0;
  puVar15[1] = 0;
  FUN_10027f5e8(uVar10,uVar21);
  local_d0.unknown._0_1_ = uVar34;
  local_d0.unknown._1_7_ = uVar4;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_3);
  FUN_10012f3c8();
  uVar10 = CONCAT71(local_d0.unknown._1_7_,local_d0.unknown._0_1_);
  uVar21 = uVar10;
  FUN_100281ba0(uVar10,param_4);
  _swift_bridgeObjectRelease(uVar10);
  pPVar9 = (Published *)&DAT_10042d220;
  _swift_getKeyPath(&DAT_10042d220);
  puVar27 = &DAT_10042d248;
  _swift_getKeyPath(&DAT_10042d248);
  local_d0.unknown._0_1_ = (undefined1)uVar21;
  local_d0.unknown._1_7_ = (undefined7)((ulong)uVar21 >> 8);
  _swift_retain(param_1);
  Combine::Published::_set_subscript(pPVar9,&local_d0,param_1,pPVar9,puVar27);
  uVar10 = *(undefined8 *)(param_1 + _TtC7Wallper17VideoLibraryStore::downloadedIDCache);
  *(undefined8 *)(param_1 + _TtC7Wallper17VideoLibraryStore::downloadedIDCache) = 0;
  _swift_bridgeObjectRelease(uVar10);
  local_d0.unknown._0_1_ = uVar34;
  local_d0.unknown._1_7_ = uVar4;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_3);
  FUN_10012f3c8();
  uVar10 = CONCAT71(local_d0.unknown._1_7_,local_d0.unknown._0_1_);
  uVar21 = uVar10;
  FUN_1002816b4();
  _swift_bridgeObjectRelease(uVar10);
  if (DAT_100558868 != -1) {
    _swift_once(&DAT_100558868,FUN_100268a88);
  }
  self = DAT_100558858;
  objc_stub::lock(DAT_100558858);
  if (DAT_100558860 != -1) {
    _swift_once(&DAT_100558860,FUN_100268ab0);
  }
  uVar10 = DAT_100558850;
  DAT_100558850 = uVar21;
  _swift_bridgeObjectRetain(uVar21);
  _swift_bridgeObjectRelease(uVar10);
  objc_stub::unlock(self);
  _swift_bridgeObjectRelease(uVar21);
  puVar27 = &DAT_10042d220;
  _swift_getKeyPath(&DAT_10042d220);
  puVar30 = &DAT_10042d248;
  _swift_getKeyPath(&DAT_10042d248);
  Combine::Published::_get_subscript(&local_d0,param_1,puVar27,puVar30);
  _swift_release(puVar27);
  _swift_release(puVar30);
  lVar1 = CONCAT71(local_d0.unknown._1_7_,local_d0.unknown._0_1_);
  uVar35 = *(ulong *)(lVar1 + 0x10);
  if (uVar35 != 0) {
    uVar33 = 0;
    uVar29 = (ulong)*(byte *)(lVar28 + 0x50) + 0x20 &
             ((ulong)*(byte *)(lVar28 + 0x50) ^ 0xffffffffffffffff);
    do {
      if (*(ulong *)(lVar1 + 0x10) <= uVar33) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1002730ec);
        (*pcVar6)();
      }
      lVar40 = *(long *)(lVar28 + 0x48);
      FUN_100029504(lVar1 + uVar29 + lVar40 * uVar33,(long)puVar38 - extraout_x12_02,FUN_10040211c);
      FUN_100007e64((long)puVar38 - extraout_x12_02,puVar38,FUN_10040211c);
      if ((*(byte *)((long)puVar38 + (long)*(int *)(lVar26 + 0x40)) & 1) != 0) {
        puVar27 = &DAT_10042d3b8;
        _swift_getKeyPath(&DAT_10042d3b8);
        puVar30 = &DAT_10042d3e0;
        _swift_getKeyPath(&DAT_10042d3e0);
        Combine::Published::_get_subscript(&local_d0,param_1,puVar27,puVar30);
        _swift_release(puVar27);
        _swift_release(puVar30);
        pPVar9 = (Published *)CONCAT71(local_d0.unknown._1_7_,local_d0.unknown._0_1_);
        puVar30 = pPVar9[2].unknown;
        lVar12 = (long)&pPVar9->unknown + uVar29;
        puVar27 = (undefined *)0xffffffffffffffff;
        do {
          if ((long)puVar27 - (long)puVar30 == -1) {
            _swift_bridgeObjectRelease(pPVar9);
            puVar27 = &DAT_10042d3b8;
            _swift_getKeyPath(&DAT_10042d3b8);
            puVar30 = &DAT_10042d3e0;
            _swift_getKeyPath(&DAT_10042d3e0);
            pPVar11 = &local_d0;
            Combine::Published::_modify_subscript(pPVar9,pPVar11,param_1,puVar27,puVar30);
            FUN_100029504(puVar38,lVar25,FUN_10040211c);
            FUN_100287364(0,0,lVar25);
            (*(code *)pPVar11)(&local_d0,0);
            _swift_release(puVar27);
            _swift_release(puVar30);
            goto LAB_1002728e4;
          }
          puVar27 = puVar27 + 1;
          if (pPVar9[2].unknown <= puVar27) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1002730e4);
            (*pcVar6)();
          }
          FUN_100029504(lVar12,puVar37,FUN_10040211c);
          if ((undefined *)*puVar37 == (undefined *)*puVar38 &&
              (undefined *)puVar37[1] == (undefined *)puVar38[1]) {
            FUN_100029548(puVar37,FUN_10040211c);
            break;
          }
          lVar12 = lVar12 + lVar40;
          bVar7 = Swift::_stringCompareWithSmolCheck
                            ((undefined *)*puVar37,(undefined *)puVar37[1],
                             (_StringComparisonResult)(__int8)(undefined *)*puVar38);
          FUN_100029548(puVar37,FUN_10040211c);
        } while (!bVar7);
        _swift_bridgeObjectRelease(pPVar9);
LAB_1002728e4:
        puVar27 = &DAT_10042d1d8;
        _swift_getKeyPath(&DAT_10042d1d8);
        puVar30 = &DAT_10042d200;
        _swift_getKeyPath(&DAT_10042d200);
        Combine::Published::_get_subscript(&local_d0,param_1,puVar27,puVar30);
        _swift_release(puVar27);
        _swift_release(puVar30);
        lVar2 = CONCAT71(local_d0.unknown._1_7_,local_d0.unknown._0_1_);
        lVar31 = *(long *)(lVar2 + 0x10);
        lVar12 = lVar2 + uVar29;
        uVar36 = 0xffffffffffffffff;
        do {
          if (uVar36 - lVar31 == -1) {
            _swift_bridgeObjectRelease(lVar2);
            puVar27 = &DAT_10042d1d8;
            _swift_getKeyPath(&DAT_10042d1d8);
            puVar30 = &DAT_10042d200;
            _swift_getKeyPath(&DAT_10042d200);
            Combine::Published::_get_subscript(&local_d0,param_1,puVar27,puVar30);
            _swift_release(puVar27);
            _swift_release(puVar30);
            FUN_100029504(puVar38,pbVar32,FUN_10040211c);
            uVar4 = local_d0.unknown._1_7_;
            uVar34 = local_d0.unknown._0_1_;
            lVar40 = CONCAT71(local_d0.unknown._1_7_,local_d0.unknown._0_1_);
            uVar36 = *(ulong *)(lVar40 + 0x10);
            lVar12 = lVar40;
            _swift_isUniquelyReferenced_nonNull_native();
            local_d0.unknown._0_1_ = uVar34;
            local_d0.unknown._1_7_ = uVar4;
            if (((int)lVar12 == 0) || (*(ulong *)(lVar40 + 0x18) >> 1 <= uVar36)) {
              FUN_1001c4344();
              local_d0.unknown._0_1_ = (undefined1)lVar12;
              local_d0.unknown._1_7_ = (undefined7)((ulong)lVar12 >> 8);
              lVar40 = lVar12;
            }
            FUN_1002874cc(0,0,1,pbVar32);
            puVar27 = &DAT_10042d1d8;
            _swift_getKeyPath(&DAT_10042d1d8);
            puVar30 = &DAT_10042d200;
            _swift_getKeyPath(&DAT_10042d200);
            local_80[0] = lVar40;
            _swift_retain(param_1);
            Combine::Published::_set_subscript(&local_d0,local_80,param_1,puVar27,puVar30);
            uVar10 = *puVar15;
            uVar21 = puVar15[1];
            *puVar15 = 0;
            puVar15[1] = 0;
            FUN_10027f5e8(uVar10,uVar21);
            goto LAB_100272704;
          }
          uVar36 = uVar36 + 1;
          if (*(ulong *)(lVar2 + 0x10) <= uVar36) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1002730e8);
            (*pcVar6)();
          }
          FUN_100029504(lVar12,puVar39,FUN_10040211c);
          if ((undefined *)*puVar39 == (undefined *)*puVar38 &&
              (undefined *)puVar39[1] == (undefined *)puVar38[1]) {
            FUN_100029548(puVar39,FUN_10040211c);
            _swift_bridgeObjectRelease(lVar2);
            goto LAB_100272704;
          }
          lVar12 = lVar12 + lVar40;
          bVar7 = Swift::_stringCompareWithSmolCheck
                            ((undefined *)*puVar39,(undefined *)puVar39[1],
                             (_StringComparisonResult)(__int8)(undefined *)*puVar38);
          FUN_100029548(puVar39,FUN_10040211c);
        } while (!bVar7);
        _swift_bridgeObjectRelease(lVar2);
      }
LAB_100272704:
      uVar33 = uVar33 + 1;
      FUN_100029548(puVar38,FUN_10040211c);
    } while (uVar33 != uVar35);
  }
  _swift_bridgeObjectRelease(lVar1);
  lVar26 = _TtC7Wallper17VideoLibraryStore::titleCache;
  uVar34 = 1;
  _swift_beginAccess(param_1 + _TtC7Wallper17VideoLibraryStore::titleCache,local_80,1,0);
  uVar10 = *(undefined8 *)(param_1 + lVar26);
  *(undefined **)(param_1 + lVar26) = PTR___swiftEmptyDictionarySingleton_100524198;
  _swift_bridgeObjectRelease(uVar10);
  puVar27 = &DAT_10042d400;
  _swift_getKeyPath(&DAT_10042d400);
  puVar30 = &DAT_10042d428;
  _swift_getKeyPath(&DAT_10042d428);
  local_d0.unknown._0_1_ = 1;
  _swift_retain(param_1);
  Combine::Published::_set_subscript((Published *)0x1,&local_d0,param_1,puVar27,puVar30);
  _swift_getKeyPath(&DAT_10042d370);
  puVar27 = &DAT_10042d398;
  _swift_getKeyPath();
  local_d0.unknown._0_1_ = uVar34;
  _swift_retain(param_1);
  _Var22.unknown = param_1;
  Combine::Published::_set_subscript();
  param_1[_TtC7Wallper17VideoLibraryStore::isLoadingRemote] = 0;
  FUN_100270b2c();
  local_d0.unknown._0_1_ = 0;
  local_d0.unknown._1_7_ = 0;
  local_c8 = (undefined *)0xe000000000000000;
  Swift::_StringGuts::grow(0x2f,_Var22);
  _swift_bridgeObjectRelease(local_c8);
  local_d0.unknown._0_1_ = 0x1c;
  local_d0.unknown._1_7_ = 0x10000000000000;
  local_c8 = (void *)0x80000001004e3040;
  puVar30 = &DAT_10042d1d8;
  _swift_getKeyPath(&DAT_10042d1d8);
  pcVar24 = &DAT_10042d200;
  _swift_getKeyPath();
  pcVar23 = pcVar24;
  Combine::Published::_get_subscript(&local_90,param_1,puVar30);
  _swift_release(puVar30);
  _swift_release(pcVar24);
  puVar30 = *(undefined **)(local_90 + 0x10);
  _swift_bridgeObjectRelease();
  local_90 = puVar30;
  SVar41 = Swift::CustomStringConvertible::get_description();
  SVar47.bridgeObject = puVar27;
  SVar47.str = pcVar23;
  Swift::String::append(SVar41,SVar47);
  _swift_bridgeObjectRelease(SVar41.bridgeObject);
  SVar43.bridgeObject = (void *)0xe800000000000000;
  SVar43.str = (char *)0x202c6c61746f7420;
  SVar48.bridgeObject = puVar27;
  SVar48.str = pcVar23;
  Swift::String::append(SVar43,SVar48);
  puVar30 = &DAT_10042d220;
  _swift_getKeyPath(&DAT_10042d220);
  pcVar24 = &DAT_10042d248;
  _swift_getKeyPath();
  pcVar23 = pcVar24;
  Combine::Published::_get_subscript(&local_90,param_1,puVar30);
  _swift_release(puVar30);
  _swift_release(pcVar24);
  puVar30 = *(undefined **)(local_90 + 0x10);
  _swift_bridgeObjectRelease();
  local_90 = puVar30;
  SVar41 = Swift::CustomStringConvertible::get_description();
  SVar49.bridgeObject = puVar27;
  SVar49.str = pcVar23;
  Swift::String::append(SVar41,SVar49);
  _swift_bridgeObjectRelease(SVar41.bridgeObject);
  uVar10 = 0x64656863616320;
  SVar42.bridgeObject = (void *)0xe700000000000000;
  SVar42.str = (char *)0x64656863616320;
  SVar50.bridgeObject = puVar27;
  SVar50.str = pcVar23;
  Swift::String::append(SVar42,SVar50);
  puVar27 = local_c8;
  SVar41.str._1_7_ = local_d0.unknown._1_7_;
  SVar41.str._0_1_ = local_d0.unknown._0_1_;
  SVar41.bridgeObject = local_c8;
  local_d0.unknown._0_1_ = 0x5b;
  local_d0.unknown._1_7_ = 0;
  local_c8 = (undefined *)0xe100000000000000;
  local_90 = (undefined *)0x4f464e49;
  uStack_88 = 0xe400000000000000;
  local_a0 = 0x20;
  uStack_98 = 0xe100000000000000;
  FUN_100026df4();
  pcVar24 = (char *)0x0;
  puVar30 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar43 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,&local_a0,0,PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,uVar10,uVar10);
  SVar51.bridgeObject = puVar30;
  SVar51.str = pcVar24;
  Swift::String::append(SVar43,SVar51);
  _swift_bridgeObjectRelease(SVar43.bridgeObject);
  SVar44.bridgeObject = (void *)0xe300000000000000;
  SVar44.str = (char *)0x5b205d;
  SVar52.bridgeObject = puVar30;
  SVar52.str = pcVar24;
  Swift::String::append(SVar44,SVar52);
  SVar45.bridgeObject = (void *)0xe300000000000000;
  SVar45.str = (char *)0x707061;
  SVar53.bridgeObject = puVar30;
  SVar53.str = pcVar24;
  Swift::String::append(SVar45,SVar53);
  SVar46.bridgeObject = (void *)0xe200000000000000;
  SVar46.str = (char *)0x205d;
  SVar54.bridgeObject = puVar30;
  SVar54.str = pcVar24;
  Swift::String::append(SVar46,SVar54);
  SVar55.bridgeObject = puVar30;
  SVar55.str = pcVar24;
  Swift::String::append(SVar41,SVar55);
  puVar30 = local_c8;
  uVar10 = CONCAT71(local_d0.unknown._1_7_,local_d0.unknown._0_1_);
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  puVar13 = &DAT_100536430;
  _swift_allocObject(&DAT_100536430,0x30,7);
  *(undefined8 *)(puVar13 + 0x10) = uVar10;
  *(undefined **)(puVar13 + 0x18) = puVar30;
  *(undefined8 *)(puVar13 + 0x20) = 0;
  *(undefined8 *)(puVar13 + 0x28) = 0xe000000000000000;
  local_b0 = thunk_FUN_100099310;
  local_d0.unknown._0_1_ = SUB81(PTR___NSConcreteStackBlock_100521110,0);
  local_d0.unknown._1_7_ = (undefined7)((ulong)PTR___NSConcreteStackBlock_100521110 >> 8);
  local_c8 = (undefined *)0x42000000;
  local_c0 = FUN_1000c7e7c;
  puStack_b8 = &DAT_100536448;
  local_a8 = puVar13;
  aBlock = __Block_copy(&local_d0);
  DVar14.unknown = puVar30;
  _swift_bridgeObjectRetain();
  qos.unknown = local_188.unknown;
  Dispatch::DispatchQoS::get_unspecified(DVar14);
  local_90 = PTR___swiftEmptyArrayStorage_100524190;
  puVar15 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar13 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar37 = &DAT_100553dc0;
  FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
  puVar16 = local_160;
  lVar26 = local_170;
  Swift::SetAlgebra::_init(local_170,&local_90,puVar13,puVar37,local_160,puVar15);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(aBlock);
  (**(code **)(local_168 + 8))(lVar26,puVar16);
  (**(code **)(local_180 + 8))(qos.unknown,local_178);
  _swift_release(local_a8);
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  puVar13 = local_148;
  puVar16 = local_148;
  FUN_100099338(local_148,&DAT_100558f50);
  lVar25 = local_150;
  lVar26 = local_158;
  lVar28 = local_158;
  (**(code **)(local_150 + 0x10))(local_158,puVar16,puVar13);
  uVar8 = (uint)lVar28;
  static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
  LVar17.unknown = puVar30;
  _swift_bridgeObjectRetain();
  pOVar18 = os::Logger::get_logObject(LVar17);
  pOVar19 = pOVar18;
  _os_log_type_enabled(pOVar18,uVar8 & 0xff);
  if ((int)pOVar19 == 0) {
    _swift_bridgeObjectRelease_n(puVar30,2);
  }
  else {
    puVar20 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    uVar21 = 0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    local_d0.unknown._0_1_ = (undefined1)uVar21;
    local_d0.unknown._1_7_ = (undefined7)((ulong)uVar21 >> 8);
    *puVar20 = 0x8220102;
    FUN_10012dbb0(uVar10,puVar30,&local_d0);
    *(undefined8 *)(puVar20 + 1) = uVar10;
    _swift_bridgeObjectRelease_n(puVar30,2);
    __os_log_impl(0x100000000,pOVar18,uVar8 & 0xff,"%{public}s",puVar20,0xc);
    FUN_100043f24(uVar21);
    _swift_slowDealloc(uVar21,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar20,0xffffffffffffffff,0xffffffffffffffff);
  }
  (**(code **)(lVar25 + 8))(lVar26,puVar13);
  _swift_bridgeObjectRelease(puVar27);
  return;
}

