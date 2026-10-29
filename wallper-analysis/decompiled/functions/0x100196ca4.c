// rea decompile_all
// name: FUN_100196ca4
// address: 0x100196ca4
// body: available
// range: 0x100196ca4-0x100197a47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100196ca4(void)

{
  DispatchWorkItemFlags qos;
  undefined8 uVar1;
  _StringGuts _Var2;
  double *pdVar3;
  long lVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  undefined *puVar8;
  DispatchQoS DVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  Logger LVar12;
  OS_os_log *pOVar13;
  OS_os_log *pOVar14;
  undefined4 *puVar15;
  undefined *puVar16;
  Date DVar17;
  undefined *puVar18;
  Task TVar19;
  code *pcVar20;
  char *pcVar21;
  void *pvVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  char *pcVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  _StringGuts _Var29;
  long *plVar30;
  long lVar31;
  Published *pPVar32;
  undefined *puVar33;
  char *pcVar34;
  long unaff_x22;
  undefined8 uVar35;
  double *pdVar36;
  long lVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  long lVar41;
  undefined8 uVar42;
  long lVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  String SVar49;
  String SVar50;
  String SVar51;
  String SVar52;
  String SVar53;
  String SVar54;
  String SVar55;
  String SVar56;
  String SVar57;
  String SVar58;
  String SVar59;
  String SVar60;
  String SVar61;
  String SVar62;
  String SVar63;
  String SVar64;
  String SVar65;
  String SVar66;
  String SVar67;
  String SVar68;
  String SVar69;
  String SVar70;
  char *local_90;
  undefined *local_88;
  
  uVar28 = *(undefined8 *)(unaff_x22 + 0xd8);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x198));
  puVar33 = &DAT_100429b50;
  _swift_getKeyPath(&DAT_100429b50);
  puVar8 = &DAT_100429b78;
  _swift_getKeyPath(&DAT_100429b78);
  Combine::Published::_get_subscript(unaff_x22 + 0x1ea,uVar28,puVar33,puVar8);
  _swift_release(puVar8);
  _swift_release(puVar33);
  if ((*(byte *)(unaff_x22 + 0x1ea) & 1) == 0) {
    puVar11 = (undefined8 *)(unaff_x22 + 0x1d0);
    puVar10 = (undefined8 *)(unaff_x22 + 0x1c8);
  }
  else {
    uVar28 = *(undefined8 *)(unaff_x22 + 0xd8);
    puVar33 = &DAT_100429d78;
    _swift_getKeyPath(&DAT_100429d78);
    puVar8 = &DAT_100429da0;
    _swift_getKeyPath(&DAT_100429da0);
    Combine::Published::_get_subscript(unaff_x22 + 0x98,uVar28,puVar33,puVar8);
    _swift_release(puVar8);
    _swift_release(puVar33);
    _Var29.unknown = *(undefined **)(unaff_x22 + 0xa0);
    if (_Var29.unknown != (undefined *)0x0) {
      if ((_Var29.unknown == *(undefined **)(unaff_x22 + 0x1b8)) &&
         (*(undefined **)(unaff_x22 + 0x98) == *(undefined **)(unaff_x22 + 0x1b0))) {
        _swift_bridgeObjectRelease(_Var29.unknown);
      }
      else {
        bVar6 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)*(undefined **)(unaff_x22 + 0x98),_Var29,
                           (_StringComparisonResult)(__int8)*(undefined **)(unaff_x22 + 0x1b0));
        _swift_bridgeObjectRelease(_Var29.unknown);
        if (!bVar6) goto LAB_1001972d8;
      }
      uVar28 = *(undefined8 *)(unaff_x22 + 0x150);
      uVar25 = *(undefined8 *)(unaff_x22 + 0x148);
      FUN_100029504(*(undefined8 *)(unaff_x22 + 0x158),uVar28,FUN_1001b08d4);
      _swift_getEnumCaseMultiPayload(uVar28,uVar25);
      if ((int)uVar28 == 1) {
        plVar30 = *(long **)(unaff_x22 + 0x150);
        _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x1b8));
        pcVar26 = *(char **)(unaff_x22 + 0x1c8);
        if (*plVar30 == -0x6cf) {
          pcVar34 = *(char **)(unaff_x22 + 0x1c0);
          pvVar22 = (void *)0x0;
          _swift_beginAccess(*(long *)(unaff_x22 + 0xd8) + *(long *)(unaff_x22 + 0x1d8),
                             unaff_x22 + 0x70,0x21);
          _swift_bridgeObjectRetain(pcVar26);
          _Var29.unknown = pcVar34;
          pcVar21 = pcVar26;
          FUN_1001ca054(&local_90);
          _swift_endAccess(unaff_x22 + 0x70);
          _swift_bridgeObjectRelease(local_88);
          local_90 = (char *)0x0;
          local_88 = (void *)0xe000000000000000;
          Swift::_StringGuts::grow(0x57,_Var29);
          SVar51.bridgeObject = (void *)0xec000000203a676e;
          SVar51.str = (char *)0x6979616c50776f4e;
          SVar59.bridgeObject = pvVar22;
          SVar59.str = pcVar21;
          Swift::String::append(SVar51,SVar59);
          SVar49.bridgeObject = pcVar26;
          SVar49.str = pcVar34;
          SVar60.bridgeObject = pvVar22;
          SVar60.str = pcVar21;
          Swift::String::append(SVar49,SVar60);
          uVar28 = 0x1000000000000049;
          SVar50.bridgeObject = (void *)0x80000001004e0520;
          SVar50.str = (char *)0x1000000000000049;
          SVar61.bridgeObject = pvVar22;
          SVar61.str = pcVar21;
          Swift::String::append(SVar50,SVar61);
          puVar33 = local_88;
          SVar57.bridgeObject = local_88;
          SVar57.str = local_90;
          local_90 = (char *)0x5b;
          local_88 = (undefined *)0xe100000000000000;
          *(undefined8 *)(unaff_x22 + 0xa8) = 0x4e524157;
          *(undefined8 *)(unaff_x22 + 0xb0) = 0xe400000000000000;
          *(undefined8 *)(unaff_x22 + 0xb8) = 0x20;
          *(undefined8 *)(unaff_x22 + 0xc0) = 0xe100000000000000;
          FUN_100026df4();
          pcVar21 = (char *)0x0;
          puVar16 = PTR___type_metadata_for_Swift_String_100523a98;
          SVar51 = (extension_Foundation)::Swift::StringProtocol::_padding
                             (6,unaff_x22 + 0xb8,0,PTR___type_metadata_for_Swift_String_100523a98,
                              PTR___type_metadata_for_Swift_String_100523a98,uVar28,uVar28);
          SVar62.bridgeObject = puVar16;
          SVar62.str = pcVar21;
          Swift::String::append(SVar51,SVar62);
          _swift_bridgeObjectRelease(SVar51.bridgeObject);
          SVar52.bridgeObject = (void *)0xe300000000000000;
          SVar52.str = (char *)0x5b205d;
          SVar63.bridgeObject = puVar16;
          SVar63.str = pcVar21;
          Swift::String::append(SVar52,SVar63);
          SVar53.bridgeObject = (void *)0xe500000000000000;
          SVar53.str = (char *)0x616964656d;
          SVar64.bridgeObject = puVar16;
          SVar64.str = pcVar21;
          Swift::String::append(SVar53,SVar64);
          SVar54.bridgeObject = (void *)0xe200000000000000;
          SVar54.str = (char *)0x205d;
          SVar65.bridgeObject = puVar16;
          SVar65.str = pcVar21;
          Swift::String::append(SVar54,SVar65);
          SVar66.bridgeObject = puVar16;
          SVar66.str = pcVar21;
          Swift::String::append(SVar57,SVar66);
          puVar8 = local_88;
          pcVar26 = local_90;
          local_90 = (char *)0x282020;
          local_88 = (undefined *)0xe300000000000000;
          SVar55.bridgeObject = (void *)0xec00000029286b63;
          SVar55.str = (char *)0x6f6c436b63656863;
          SVar67.bridgeObject = puVar16;
          SVar67.str = pcVar21;
          Swift::String::append(SVar55,SVar67);
          SVar56.bridgeObject = (void *)0xe100000000000000;
          SVar56.str = (char *)0x3a;
          SVar68.bridgeObject = puVar16;
          SVar68.str = pcVar21;
          Swift::String::append(SVar56,SVar68);
          *(undefined8 *)(unaff_x22 + 200) = 0x1f2;
          SVar57 = Swift::CustomStringConvertible::get_description();
          SVar69.bridgeObject = puVar16;
          SVar69.str = pcVar21;
          Swift::String::append(SVar57,SVar69);
          _swift_bridgeObjectRelease(SVar57.bridgeObject);
          SVar58.bridgeObject = (void *)0xe100000000000000;
          SVar58.str = (char *)0x29;
          SVar70.bridgeObject = puVar16;
          SVar70.str = pcVar21;
          Swift::String::append(SVar58,SVar70);
          puVar16 = local_88;
          pcVar21 = local_90;
          if (DAT_100559018 != -1) {
            _swift_once(&DAT_100559018,FUN_1002854a0);
          }
          lVar41 = *(long *)(unaff_x22 + 0x138);
          qos.unknown = *(undefined **)(unaff_x22 + 0x140);
          uVar28 = *(undefined8 *)(unaff_x22 + 0x128);
          uVar27 = *(undefined8 *)(unaff_x22 + 0x130);
          uVar25 = *(undefined8 *)(unaff_x22 + 0x118);
          lVar43 = *(long *)(unaff_x22 + 0x120);
          puVar18 = &DAT_100530c78;
          _swift_allocObject(&DAT_100530c78,0x30,7);
          *(char **)(puVar18 + 0x10) = pcVar26;
          *(undefined **)(puVar18 + 0x18) = puVar8;
          *(char **)(puVar18 + 0x20) = pcVar21;
          *(undefined **)(puVar18 + 0x28) = puVar16;
          *(code **)(unaff_x22 + 0x30) = thunk_FUN_100099310;
          *(undefined **)(unaff_x22 + 0x38) = puVar18;
          *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_100521110;
          *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
          *(code **)(unaff_x22 + 0x20) = FUN_1000c7e7c;
          *(undefined **)(unaff_x22 + 0x28) = &DAT_100530c90;
          pvVar22 = __Block_copy((void *)(unaff_x22 + 0x10));
          DVar9.unknown = puVar8;
          _swift_bridgeObjectRetain();
          Dispatch::DispatchQoS::get_unspecified(DVar9);
          *(undefined **)(unaff_x22 + 0xd0) = PTR___swiftEmptyArrayStorage_100524190;
          puVar10 = &DAT_100553db0;
          FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                        PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
          puVar16 = &DAT_100561080;
          FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
          puVar11 = &DAT_100553dc0;
          FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                        PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
          Swift::SetAlgebra::_init(uVar28,unaff_x22 + 0xd0,puVar16,puVar11,uVar25,puVar10);
          (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
          __Block_release(pvVar22);
          (**(code **)(lVar43 + 8))(uVar28,uVar25);
          (**(code **)(lVar41 + 8))(qos.unknown,uVar27);
          _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
          if (DAT_100559020 != -1) {
            _swift_once(&DAT_100559020,FUN_100285420);
          }
          lVar41 = *(long *)(unaff_x22 + 0x108);
          uVar28 = *(undefined8 *)(unaff_x22 + 0x110);
          uVar27 = *(undefined8 *)(unaff_x22 + 0x100);
          uVar25 = uVar27;
          FUN_100099338(uVar27,&DAT_100558f50);
          (**(code **)(lVar41 + 0x10))(uVar28,uVar25,uVar27);
          uVar7 = (uint)uVar28;
          static_(extension_in_os):__C.os_log_type_t.default.getter_:___C.os_log_type_t::
          _get_default();
          LVar12.unknown = puVar8;
          _swift_bridgeObjectRetain();
          pOVar13 = os::Logger::get_logObject(LVar12);
          pOVar14 = pOVar13;
          _os_log_type_enabled(pOVar13,uVar7 & 0xff);
          uVar28 = *(undefined8 *)(unaff_x22 + 0x1c8);
          uVar25 = *(undefined8 *)(unaff_x22 + 0x1d0);
          lVar41 = *(long *)(unaff_x22 + 0x108);
          uVar27 = *(undefined8 *)(unaff_x22 + 0x110);
          uVar39 = *(undefined8 *)(unaff_x22 + 0x100);
          if ((int)pOVar14 == 0) {
            _swift_bridgeObjectRelease_n(puVar8,2);
            (**(code **)(lVar41 + 8))(uVar27,uVar39);
            _swift_bridgeObjectRelease(puVar33);
            _swift_bridgeObjectRelease(uVar25);
          }
          else {
            puVar15 = (undefined4 *)0xc;
            _swift_slowAlloc(0xc,0xffffffffffffffff);
            pcVar21 = (char *)0x20;
            _swift_slowAlloc(0x20,0xffffffffffffffff);
            *puVar15 = 0x8220102;
            local_90 = pcVar21;
            FUN_10012dbb0(pcVar26,puVar8,&local_90);
            *(char **)(puVar15 + 1) = pcVar26;
            _swift_bridgeObjectRelease_n(puVar8,2);
            __os_log_impl(0x100000000,pOVar13,uVar7 & 0xff,"%{public}s",puVar15,0xc);
            FUN_100043f24(pcVar21);
            _swift_slowDealloc(pcVar21,0xffffffffffffffff,0xffffffffffffffff);
            _swift_slowDealloc(puVar15,0xffffffffffffffff,0xffffffffffffffff);
            (**(code **)(lVar41 + 8))(uVar27,uVar39);
            _swift_bridgeObjectRelease(puVar33);
            _swift_bridgeObjectRelease(uVar25);
          }
          _swift_bridgeObjectRelease(uVar28);
          uVar28 = *(undefined8 *)(unaff_x22 + 400);
          uVar25 = *(undefined8 *)(unaff_x22 + 0x158);
        }
        else {
          uVar28 = *(undefined8 *)(unaff_x22 + 400);
          uVar25 = *(undefined8 *)(unaff_x22 + 0x158);
          _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x1d0));
          _swift_bridgeObjectRelease(pcVar26);
        }
        FUN_100029548(uVar25,FUN_1001b08d4);
        pcVar20 = FUN_10015f8e8;
        goto LAB_100197324;
      }
      pcVar26 = *(char **)(unaff_x22 + 0xf8);
      FUN_100007e64(*(undefined8 *)(unaff_x22 + 0x150),pcVar26,FUN_1001b08c0);
      if (*pcVar26 == '\x01') {
        puVar33 = *(undefined **)(unaff_x22 + 0x1b8);
        _Var29.unknown = *(undefined **)(*(long *)(unaff_x22 + 0xf8) + 0x10);
        _Var2.unknown = *(undefined **)(*(long *)(unaff_x22 + 0xf8) + 0x18);
        if ((_Var29.unknown != *(undefined **)(unaff_x22 + 0x1b0)) || (puVar33 != _Var2.unknown)) {
          bVar6 = Swift::_stringCompareWithSmolCheck
                            (_Var29,_Var2,
                             (_StringComparisonResult)(__int8)*(undefined **)(unaff_x22 + 0x1b0));
          _swift_bridgeObjectRelease(puVar33);
          if (bVar6) goto LAB_100197488;
          goto LAB_100197980;
        }
        _swift_bridgeObjectRelease(puVar33);
LAB_100197488:
        pdVar36 = *(double **)(unaff_x22 + 0x188);
        pdVar3 = *(double **)(unaff_x22 + 400);
        uVar28 = *(undefined8 *)(unaff_x22 + 0xd8);
        puVar33 = &DAT_10042a1c8;
        _swift_getKeyPath(&DAT_10042a1c8);
        puVar8 = &DAT_10042a1f0;
        _swift_getKeyPath();
        DVar17.unknown = puVar8;
        Combine::Published::_get_subscript(pdVar36,uVar28,puVar33);
        _swift_release(puVar8);
        _swift_release(puVar33);
        if (*pdVar3 == *pdVar36) {
          lVar41 = *(long *)(unaff_x22 + 0x160);
          bVar6 = Foundation::Date::___infix
                            ((undefined *)
                             (*(long *)(unaff_x22 + 400) + (long)*(int *)(lVar41 + 0x14)),
                             (undefined *)
                             (*(long *)(unaff_x22 + 0x188) + (long)*(int *)(lVar41 + 0x14)),DVar17);
          if (bVar6) {
            lVar43 = *(long *)(unaff_x22 + 0x160);
            dVar44 = *(double *)(*(long *)(unaff_x22 + 400) + (long)*(int *)(lVar43 + 0x18));
            dVar45 = *(double *)(*(long *)(unaff_x22 + 0x188) + (long)*(int *)(lVar43 + 0x18));
            FUN_100029548(*(long *)(unaff_x22 + 0x188),FUN_10015f8e8);
            if (dVar44 == dVar45) {
              lVar31 = *(long *)(unaff_x22 + 0x180);
              lVar4 = *(long *)(unaff_x22 + 0xf8);
              uVar28 = *(undefined8 *)(unaff_x22 + 0xd8);
              lVar37 = (long)*(int *)(*(long *)(unaff_x22 + 0xf0) + 0x1c);
              puVar33 = &DAT_10042a1c8;
              _swift_getKeyPath(&DAT_10042a1c8);
              puVar8 = &DAT_10042a1f0;
              _swift_getKeyPath();
              DVar17.unknown = puVar8;
              Combine::Published::_get_subscript(lVar31,uVar28,puVar33);
              _swift_release(puVar8);
              _swift_release(puVar33);
              bVar6 = Foundation::Date::>_infix
                                ((undefined *)(lVar4 + lVar37),
                                 (undefined *)(lVar31 + *(int *)(lVar41 + 0x14)),DVar17);
              FUN_100029548(lVar31,FUN_10015f8e8);
              if (!bVar6) goto LAB_100197980;
              pdVar36 = *(double **)(unaff_x22 + 0x178);
              lVar31 = *(long *)(unaff_x22 + 0x180);
              uVar28 = *(undefined8 *)(unaff_x22 + 0xd8);
              dVar45 = *(double *)(*(long *)(unaff_x22 + 0xf8) + 8);
              puVar33 = &DAT_10042a1c8;
              _swift_getKeyPath();
              puVar8 = &DAT_10042a1f0;
              puVar16 = puVar8;
              _swift_getKeyPath(&DAT_10042a1f0);
              DVar17.unknown = puVar33;
              Combine::Published::_get_subscript(pdVar36,uVar28,puVar33,puVar16);
              _swift_release(puVar16);
              _swift_release(puVar33);
              dVar46 = *pdVar36;
              dVar44 = Foundation::Date::timeIntervalSince
                                 ((undefined *)((long)pdVar36 + (long)*(int *)(lVar41 + 0x14)),
                                  DVar17);
              dVar47 = *(double *)((long)pdVar36 + (long)*(int *)(lVar43 + 0x18));
              FUN_100029548(pdVar36,FUN_10015f8e8);
              puVar33 = &DAT_10042a1c8;
              _swift_getKeyPath(&DAT_10042a1c8);
              _swift_getKeyPath(&DAT_10042a1f0);
              Combine::Published::_get_subscript(lVar31,uVar28,puVar33,puVar8);
              _swift_release(puVar8);
              _swift_release(puVar33);
              dVar48 = *(double *)(lVar31 + *(int *)(lVar43 + 0x18));
              FUN_100029548(lVar31,FUN_10015f8e8);
              if (0.0 < dVar48) {
                if (dVar44 < 0.0) {
                  dVar44 = 0.0;
                }
                if (ABS(dVar45 - (dVar46 + dVar44 * dVar47)) <= 0.3) {
                  uVar25 = *(undefined8 *)(unaff_x22 + 0x1c8);
                  uVar27 = *(undefined8 *)(unaff_x22 + 400);
                  uVar39 = *(undefined8 *)(unaff_x22 + 0x158);
                  uVar28 = *(undefined8 *)(unaff_x22 + 0xf8);
                  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x1d0));
                  _swift_bridgeObjectRelease(uVar25);
                  FUN_100029548(uVar39,FUN_1001b08d4);
                  FUN_100029548(uVar27,FUN_10015f8e8);
                  pcVar20 = FUN_1001b08c0;
                  goto LAB_100197324;
                }
              }
              pdVar36 = *(double **)(unaff_x22 + 0x180);
              lVar31 = *(long *)(unaff_x22 + 0x168);
              uVar28 = *(undefined8 *)(unaff_x22 + 0x170);
              uVar25 = *(undefined8 *)(unaff_x22 + 0x160);
              uVar27 = *(undefined8 *)(unaff_x22 + 0xe8);
              pPVar32 = *(Published **)(unaff_x22 + 0xd8);
              iVar5 = *(int *)(lVar41 + 0x14);
              DVar17 = Foundation::Date::typeMetadataAccessor();
              (**(code **)(*(long *)(DVar17.unknown + -8) + 0x10))
                        ((long)pdVar36 + (long)iVar5,lVar4 + lVar37,DVar17.unknown);
              *pdVar36 = dVar45;
              *(undefined8 *)((long)pdVar36 + (long)*(int *)(lVar43 + 0x18)) = 0x3ff0000000000000;
              puVar33 = &DAT_10042a1c8;
              puVar16 = puVar33;
              _swift_getKeyPath(&DAT_10042a1c8);
              puVar8 = &DAT_10042a1f0;
              puVar18 = puVar8;
              _swift_getKeyPath(&DAT_10042a1f0);
              FUN_100029504(pdVar36,uVar28,FUN_10015f8e8);
              _swift_retain(pPVar32);
              Combine::Published::_set_subscript(pPVar32,uVar28,pPVar32,puVar16,puVar18);
              FUN_100029548(pdVar36,FUN_10015f8e8);
              _swift_getKeyPath(&DAT_10042a1c8);
              _swift_getKeyPath(&DAT_10042a1f0);
              Combine::Published::_get_subscript(uVar27,pPVar32,puVar33,puVar8);
              _swift_release(puVar8);
              _swift_release(puVar33);
              (**(code **)(lVar31 + 0x38))(uVar27,0,1,uVar25);
              lVar41 = _TtC7Wallper17NowPlayingManager::mrPlayingAnchor;
              _swift_beginAccess((long)&pPVar32->unknown +
                                 _TtC7Wallper17NowPlayingManager::mrPlayingAnchor,unaff_x22 + 0x58,
                                 0x21,0);
              FUN_1001b08f0(uVar27,(long)&pPVar32->unknown + lVar41,&DAT_1005564b8,&DAT_10042a1c0);
              _swift_endAccess(unaff_x22 + 0x58);
              puVar33 = *(undefined **)
                         ((long)&pPVar32->unknown + _TtC7Wallper17NowPlayingManager::mrPauseTask);
              if (puVar33 != (undefined *)0x0) {
                TVar19.unknown = puVar33;
                _swift_retain();
                Swift::Task::cancel(TVar19);
                _swift_release(puVar33);
              }
              uVar28 = *(undefined8 *)(unaff_x22 + 0xd8);
              puVar33 = &DAT_100429b98;
              _swift_getKeyPath(&DAT_100429b98);
              puVar8 = &DAT_100429bc0;
              _swift_getKeyPath(&DAT_100429bc0);
              Combine::Published::_get_subscript(unaff_x22 + 0x1eb,uVar28,puVar33,puVar8);
              _swift_release(puVar8);
              _swift_release(puVar33);
              pPVar32 = *(Published **)(unaff_x22 + 0x1c8);
              uVar28 = *(undefined8 *)(unaff_x22 + 0x1d0);
              if ((*(byte *)(unaff_x22 + 0x1eb) & 1) == 0) {
                uVar25 = *(undefined8 *)(unaff_x22 + 0xd8);
                puVar33 = &DAT_100429b98;
                _swift_getKeyPath(&DAT_100429b98);
                puVar8 = &DAT_100429bc0;
                _swift_getKeyPath(&DAT_100429bc0);
                *(undefined1 *)(unaff_x22 + 0x1ec) = 1;
                _swift_retain(uVar25);
                Combine::Published::_set_subscript(pPVar32,unaff_x22 + 0x1ec,uVar25,puVar33,puVar8);
              }
            }
            else {
LAB_100197980:
              pPVar32 = *(Published **)(unaff_x22 + 0x1c8);
              uVar28 = *(undefined8 *)(unaff_x22 + 0x1d0);
            }
            _swift_bridgeObjectRelease(uVar28);
            goto LAB_10019798c;
          }
        }
        uVar28 = *(undefined8 *)(unaff_x22 + 0x1c8);
        uVar25 = *(undefined8 *)(unaff_x22 + 0x188);
        _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x1d0));
        _swift_bridgeObjectRelease(uVar28);
        FUN_100029548(uVar25,FUN_10015f8e8);
      }
      else {
        uVar28 = *(undefined8 *)(unaff_x22 + 0x1c8);
        pPVar32 = *(Published **)(unaff_x22 + 0x1b8);
        _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x1d0));
        _swift_bridgeObjectRelease(uVar28);
LAB_10019798c:
        _swift_bridgeObjectRelease(pPVar32);
      }
      uVar25 = *(undefined8 *)(unaff_x22 + 400);
      uVar28 = *(undefined8 *)(unaff_x22 + 0xf8);
      FUN_100029548(*(undefined8 *)(unaff_x22 + 0x158),FUN_1001b08d4);
      FUN_100029548(uVar25,FUN_10015f8e8);
      pcVar20 = FUN_1001b08c0;
      goto LAB_100197324;
    }
LAB_1001972d8:
    puVar10 = (undefined8 *)(unaff_x22 + 0x1d0);
    puVar11 = (undefined8 *)(unaff_x22 + 0x1c8);
  }
  uVar27 = *puVar10;
  uVar25 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar28 = *(undefined8 *)(unaff_x22 + 400);
  uVar39 = *(undefined8 *)(unaff_x22 + 0x158);
  _swift_bridgeObjectRelease(*puVar11);
  _swift_bridgeObjectRelease(uVar27);
  _swift_bridgeObjectRelease(uVar25);
  FUN_100029548(uVar39,FUN_1001b08d4);
  pcVar20 = FUN_10015f8e8;
LAB_100197324:
  FUN_100029548(uVar28,pcVar20);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar39 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar35 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar38 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar40 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar42 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar24 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar23 = *(undefined8 *)(unaff_x22 + 0xe8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 400));
  _swift_task_dealloc(uVar28);
  _swift_task_dealloc(uVar39);
  _swift_task_dealloc(uVar25);
  _swift_task_dealloc(uVar35);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar27);
  _swift_task_dealloc(uVar38);
  _swift_task_dealloc(uVar40);
  _swift_task_dealloc(uVar42);
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar23);
                    /* WARNING: Could not recover jumptable at 0x0001001973d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

