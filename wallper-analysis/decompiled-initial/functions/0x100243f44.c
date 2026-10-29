// rea decompile_all
// name: FUN_100243f44
// address: 0x100243f44
// body: available
// range: 0x100243f44-0x100245343 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100243f44(double param_1,long param_2,long param_3,long param_4,undefined *param_5,
                  code *param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  byte bVar1;
  DispatchTime DVar2;
  DispatchWorkItemFlags DVar3;
  DispatchQoS DVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  Logger LVar8;
  ID IVar9;
  ID IVar10;
  undefined *puVar11;
  OS_dispatch_queue *pOVar12;
  DispatchTime DVar13;
  DispatchQoS DVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  void *pvVar18;
  OS_os_log *pOVar19;
  undefined4 *puVar20;
  undefined *puVar21;
  OS_os_log *pOVar22;
  undefined *puVar23;
  ulong uVar24;
  char *pcVar25;
  long extraout_x8;
  undefined *puVar26;
  long extraout_x8_00;
  long lVar27;
  long extraout_x8_01;
  long extraout_x8_02;
  double dVar28;
  ulong uVar29;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  code *pcVar30;
  long lVar31;
  ulong uVar32;
  ulong uVar33;
  code *pcVar34;
  long lVar35;
  ulong *puVar36;
  code *pcVar37;
  double dVar38;
  String SVar39;
  String SVar40;
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
  undefined auStack_210 [8];
  long local_208;
  undefined *local_200;
  ID local_1f8;
  long local_1f0;
  undefined *local_1e8;
  long local_1e0;
  long local_1d8;
  DispatchTime local_1d0;
  long local_1c8;
  undefined8 local_1c0;
  long local_1b8;
  DispatchTime local_1b0;
  DispatchWorkItemFlags local_1a8;
  DispatchQoS local_1a0;
  long local_198;
  long local_190;
  undefined *local_188;
  undefined *local_180;
  long local_178;
  long local_170;
  undefined *local_168;
  undefined8 local_160;
  undefined *local_158;
  code *local_150;
  code *local_148;
  undefined8 local_140;
  long local_138;
  undefined *local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined *local_118;
  undefined8 local_110;
  undefined *local_108;
  undefined *local_100;
  code *local_f8;
  undefined *puStack_f0;
  code *local_e8;
  undefined *local_e0;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [32];
  
  local_1c0 = param_9;
  local_160 = param_8;
  local_130 = param_5;
  local_158 = (undefined *)Dispatch::DispatchTime::typeMetadataAccessor();
  local_1c8 = *(long *)(local_158 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_1c8 + 0x40));
  puVar26 = auStack_210 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_1d0.unknown = puVar26;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar26 = puVar26 + -extraout_x12;
  local_1b0.unknown = puVar26;
  LVar8 = os::Logger::typeMetadataAccessor();
  lVar35 = *(long *)(LVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar35 + 0x40));
  local_1e8 = puVar26 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar27 = (long)(puVar26 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)) - extraout_x12_00;
  local_1e0 = lVar27;
  local_188 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_198 = *(long *)(local_188 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_198 + 0x40));
  puVar26 = (undefined *)(lVar27 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  local_1a8.unknown = puVar26;
  local_180 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_190 = *(long *)(local_180 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_190 + 0x40));
  puVar26 = puVar26 + -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_1a0.unknown = puVar26;
  local_168 = (undefined *)Foundation::Date::typeMetadataAccessor();
  local_170 = *(long *)(local_168 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_178 = (long)puVar26 - (extraout_x12_01 + 0xfU & 0xfffffffffffffff0);
  local_1d8 = extraout_x12_01;
  _swift_beginAccess(param_2 + 0x10,auStack_a0,0,0);
  lVar31 = *(long *)(param_2 + 0x10);
  lVar27 = lVar31;
  local_1b8 = param_2;
  _swift_bridgeObjectRetain();
  FUN_100258278();
  _swift_bridgeObjectRelease(lVar31);
  lVar31 = lVar27;
  FUN_100232a5c();
  _swift_release(lVar27);
  lVar27 = _TtC7Wallper21VideoWallpaperManager::holds;
  pcVar34 = *(code **)(lVar31 + 0x10);
  if (pcVar34 != (code *)0x0) {
    local_150 = (code *)_TtC7Wallper21VideoWallpaperManager::wantsPlaying;
    local_208 = lVar35;
    local_200 = LVar8.unknown;
    local_148 = param_6;
    local_140 = param_7;
    _swift_beginAccess(param_3 + _TtC7Wallper21VideoWallpaperManager::wantsPlaying,auStack_c0,0,0);
    local_1f0 = lVar27;
    local_138 = param_3;
    _swift_beginAccess(param_3 + lVar27,auStack_d8,0,0);
    pcVar37 = (code *)0x0;
    puVar36 = (ulong *)(lVar31 + 0x28);
    do {
      if (*(code **)(lVar31 + 0x10) <= pcVar37) {
                    /* WARNING: Does not return */
        pcVar34 = (code *)SoftwareBreakpoint(1,0x100244e9c);
        (*pcVar34)();
      }
      uVar29 = puVar36[-1];
      uVar32 = *puVar36;
      _swift_beginAccess(param_4 + 0x10,&local_108,0x20,0);
      lVar27 = *(long *)(param_4 + 0x10);
      lVar35 = *(long *)(lVar27 + 0x10);
      _swift_bridgeObjectRetain(uVar32);
      if (lVar35 == 0) {
LAB_10024425c:
        _swift_endAccess(&local_108);
LAB_100244264:
        _swift_bridgeObjectRelease(uVar32);
      }
      else {
        _swift_bridgeObjectRetain(lVar27);
        uVar33 = uVar29;
        uVar24 = uVar32;
        FUN_10000464c();
        if ((uVar24 & 1) == 0) {
          _swift_bridgeObjectRelease(lVar27);
          goto LAB_10024425c;
        }
        IVar9 = *(ID *)(*(long *)(lVar27 + 0x38) + uVar33 * 8);
        _swift_endAccess(&local_108);
        _swift_bridgeObjectRelease(lVar27);
        IVar9 = objc_stub::contentView(IVar9);
        if ((IVar9 == 0) || (IVar9 = objc_stub::layer(IVar9), IVar9 == 0)) goto LAB_100244264;
        _swift_dynamicCastObjCClass(IVar9,&_OBJC_CLASS___AVPlayerLayer);
        puVar26 = local_130;
        if (IVar9 == 0) {
LAB_100244420:
          _swift_bridgeObjectRelease(uVar32);
        }
        else {
          _swift_beginAccess(local_130 + 0x10,&local_108,0x20,0);
          lVar27 = *(long *)(puVar26 + 0x10);
          if (*(long *)(lVar27 + 0x10) == 0) {
LAB_100244418:
            _swift_endAccess(&local_108);
            goto LAB_100244420;
          }
          _swift_bridgeObjectRetain(lVar27);
          uVar33 = uVar29;
          uVar24 = uVar32;
          FUN_10000464c();
          if ((uVar24 & 1) == 0) {
            _swift_bridgeObjectRelease(lVar27);
            goto LAB_100244418;
          }
          local_1f8 = *(ID *)(*(long *)(lVar27 + 0x38) + uVar33 * 8);
          _swift_endAccess(&local_108);
          _swift_bridgeObjectRelease(lVar27);
          IVar9 = objc_stub::isReadyForDisplay(IVar9);
          if ((IVar9 & 1) == 0) {
LAB_100244588:
            _swift_bridgeObjectRelease(uVar32);
LAB_1002445a0:
            lVar27 = local_178;
            Foundation::Date::init();
            puVar26 = &DAT_100554248;
            FUN_1000036d0(&DAT_100554248,PTR_typeMetadataAccessor_100520b80,
                          PTR_Foundation__Foundation__Date_>Swift__Comparable_100520ba0);
            uVar5 = local_160;
            puVar11 = local_168;
            bVar6 = Swift::Comparable::>__infix(lVar27,local_160,local_168,puVar26);
            lVar35 = local_170;
            (**(code **)(local_170 + 8))(lVar27,puVar11);
            if (!bVar6) {
              _swift_bridgeObjectRelease(lVar31);
              pOVar12 = (OS_dispatch_queue *)0x0;
              FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
              DVar13.unknown = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar12);
              DVar2.unknown = local_1d0.unknown;
              Dispatch::DispatchTime::now(DVar13);
              DVar13.unknown = local_1b0.unknown;
              Dispatch::__infix(DVar2,0.02);
              local_150 = *(code **)(local_1c8 + 8);
              (*local_150)(DVar2.unknown,local_158);
              (**(code **)(lVar35 + 0x10))(lVar27,uVar5,puVar11);
              uVar29 = (ulong)*(byte *)(lVar35 + 0x50);
              uVar32 = uVar29 + 0x48 & (uVar29 ^ 0xffffffffffffffff);
              uVar33 = local_1d8 + uVar32 + 7 & 0xfffffffffffffff8;
              puVar26 = &DAT_100534eb0;
              _swift_allocObject(&DAT_100534eb0,uVar33 + 8,uVar29 | 7);
              puVar16 = local_130;
              uVar5 = local_140;
              lVar31 = local_1b8;
              *(long *)(puVar26 + 0x10) = local_1b8;
              *(long *)(puVar26 + 0x18) = local_138;
              *(long *)(puVar26 + 0x20) = param_4;
              *(undefined **)(puVar26 + 0x28) = local_130;
              *(double *)(puVar26 + 0x30) = param_1;
              *(code **)(puVar26 + 0x38) = local_148;
              *(undefined8 *)(puVar26 + 0x40) = local_140;
              (**(code **)(lVar35 + 0x20))(puVar26 + uVar32,lVar27,puVar11);
              *(undefined8 *)(puVar26 + uVar33) = local_1c0;
              local_e8 = FUN_100259b50;
              local_108 = PTR___NSConcreteStackBlock_100521110;
              local_100 = (undefined *)0x42000000;
              local_f8 = FUN_1000c7e7c;
              puStack_f0 = &DAT_100534ec8;
              local_e0 = puVar26;
              pvVar18 = __Block_copy(&local_108);
              DVar14.unknown = local_e0;
              _swift_retain(lVar31);
              _swift_retain(param_4);
              _swift_retain(puVar16);
              _swift_retain(uVar5);
              _swift_release();
              DVar4.unknown = local_1a0.unknown;
              Dispatch::DispatchQoS::get_unspecified(DVar14);
              local_108 = PTR___swiftEmptyArrayStorage_100524190;
              puVar15 = &DAT_100553db0;
              FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                            PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8
                           );
              puVar26 = &DAT_100561080;
              FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
              puVar16 = puVar26;
              FUN_100077ac0();
              puVar11 = local_188;
              DVar3.unknown = local_1a8.unknown;
              Swift::SetAlgebra::_init
                        (local_1a8.unknown,&local_108,puVar26,puVar16,local_188,puVar15);
              (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter(DVar13,DVar4,DVar3);
              __Block_release(pvVar18);
              (**(code **)(local_198 + 8))(DVar3.unknown,puVar11);
              (**(code **)(local_190 + 8))(DVar4.unknown,local_180);
              puVar11 = local_158;
              pcVar34 = local_150;
              goto LAB_1002452d8;
            }
            pcVar37 = (code *)0x0;
            local_138 = lVar31 + 0x28;
            local_150 = pcVar34 + -1;
            local_130 = PTR___swiftEmptyArrayStorage_100524190;
            goto LAB_100244640;
          }
          lVar27 = *(long *)(local_138 + (long)local_150);
          if (*(long *)(lVar27 + 0x10) == 0) {
LAB_100244444:
            lVar27 = *(long *)(local_138 + local_1f0);
            if (*(long *)(lVar27 + 0x10) != 0) {
              _swift_bridgeObjectRetain(lVar27);
              uVar33 = uVar32;
              FUN_10000464c();
              if ((uVar33 & 1) == 0) {
                _swift_bridgeObjectRelease(lVar27);
              }
              else {
                lVar35 = *(long *)(*(long *)(lVar27 + 0x38) + uVar29 * 8);
                _swift_bridgeObjectRetain(lVar35);
                _swift_bridgeObjectRelease(lVar27);
                lVar27 = *(long *)(lVar35 + 0x10);
                _swift_bridgeObjectRelease(lVar35);
                if (lVar27 != 0) goto LAB_100244498;
              }
            }
            IVar9 = local_1f8;
            IVar10 = objc_stub::timeControlStatus(local_1f8);
            if (IVar10 != 2) goto LAB_100244588;
            objc_stub::currentTime(IVar9,&local_108);
            dVar38 = (extension_in_CoreMedia):__C.CMTime.seconds.getter_:_Swift.Double::_get_seconds
                               ();
            _swift_bridgeObjectRelease(uVar32);
            if (2.0 <= param_1) {
              dVar28 = 0.8;
            }
            else {
              dVar28 = 0.15;
            }
            if (dVar28 <= dVar38) goto LAB_10024426c;
            goto LAB_1002445a0;
          }
          _swift_bridgeObjectRetain(lVar27);
          uVar33 = uVar29;
          uVar24 = uVar32;
          FUN_10000464c();
          if ((uVar24 & 1) == 0) {
            _swift_bridgeObjectRelease(lVar27);
            goto LAB_100244444;
          }
          bVar1 = *(byte *)(*(long *)(lVar27 + 0x38) + uVar33);
          _swift_bridgeObjectRelease(lVar27);
          if ((bVar1 & 1) != 0) goto LAB_100244444;
LAB_100244498:
          _swift_bridgeObjectRelease(uVar32);
        }
      }
LAB_10024426c:
      pcVar37 = pcVar37 + 1;
      puVar36 = puVar36 + 2;
    } while (pcVar34 != pcVar37);
    (*local_148)(lVar31);
  }
  _swift_bridgeObjectRelease(lVar31);
  return;
LAB_100244640:
  puVar36 = (ulong *)(local_138 + (long)pcVar37 * 0x10);
  pcVar30 = pcVar37;
LAB_100244648:
  if (*(code **)(lVar31 + 0x10) <= pcVar30) {
                    /* WARNING: Does not return */
    pcVar34 = (code *)SoftwareBreakpoint(1,0x1002452e4);
    (*pcVar34)();
  }
  uVar29 = puVar36[-1];
  uVar32 = *puVar36;
  _swift_beginAccess(param_4 + 0x10,&local_108,0x20,0);
  lVar27 = *(long *)(param_4 + 0x10);
  lVar35 = *(long *)(lVar27 + 0x10);
  _swift_bridgeObjectRetain(uVar32);
  if (lVar35 == 0) {
LAB_100244734:
    _swift_endAccess(&local_108);
LAB_10024473c:
    _swift_bridgeObjectRelease(uVar32);
LAB_100244744:
    pcVar30 = pcVar30 + 1;
    puVar36 = puVar36 + 2;
    if (pcVar34 == pcVar30) goto LAB_100244ab4;
    goto LAB_100244648;
  }
  _swift_bridgeObjectRetain(lVar27);
  uVar33 = uVar29;
  uVar24 = uVar32;
  FUN_10000464c();
  if ((uVar24 & 1) == 0) {
    _swift_bridgeObjectRelease(lVar27);
    goto LAB_100244734;
  }
  IVar9 = *(ID *)(*(long *)(lVar27 + 0x38) + uVar33 * 8);
  _swift_endAccess(&local_108);
  _swift_bridgeObjectRelease(lVar27);
  IVar9 = objc_stub::contentView(IVar9);
  if ((IVar9 == 0) || (IVar9 = objc_stub::layer(IVar9), IVar9 == 0)) goto LAB_10024473c;
  _swift_dynamicCastObjCClass(IVar9,&_OBJC_CLASS___AVPlayerLayer);
  if (IVar9 == 0) {
    _swift_bridgeObjectRelease(uVar32);
    goto LAB_100244744;
  }
  IVar9 = objc_stub::isReadyForDisplay(IVar9);
  puVar26 = local_130;
  if ((IVar9 & 1) == 0) goto LAB_10024473c;
  puVar11 = local_130;
  _swift_isUniquelyReferenced_nonNull_native();
  local_118 = puVar26;
  if (((ulong)puVar11 & 1) == 0) {
    FUN_1001c5bc4(0,*(long *)(puVar26 + 0x10) + 1,1);
  }
  uVar33 = *(ulong *)(local_118 + 0x10);
  if (*(ulong *)(local_118 + 0x18) >> 1 <= uVar33) {
    FUN_1001c5bc4(1 < *(ulong *)(local_118 + 0x18),uVar33 + 1,1);
  }
  pcVar37 = pcVar30 + 1;
  *(ulong *)(local_118 + 0x10) = uVar33 + 1;
  *(ulong *)(local_118 + uVar33 * 0x10 + 0x20) = uVar29;
  *(ulong *)(local_118 + uVar33 * 0x10 + 0x28) = uVar32;
  local_130 = local_118;
  if (local_150 == pcVar30) {
LAB_100244ab4:
    _swift_bridgeObjectRelease(lVar31);
    puVar26 = local_130;
    if (*(long *)(local_130 + 0x10) == 0) {
      _swift_release(local_130);
      local_108 = (undefined *)0x5b;
      local_100 = (undefined *)0xe100000000000000;
      local_118 = (undefined *)0x4e524157;
      local_110 = 0xe400000000000000;
      local_128 = 0x20;
      local_120 = 0xe100000000000000;
      FUN_100026df4();
      pcVar25 = (char *)0x0;
      puVar11 = PTR___type_metadata_for_Swift_String_100523a98;
      SVar39 = (extension_Foundation)::Swift::StringProtocol::_padding
                         (6,&local_128,0,PTR___type_metadata_for_Swift_String_100523a98,
                          PTR___type_metadata_for_Swift_String_100523a98,puVar26,puVar26);
      SVar62.bridgeObject = puVar11;
      SVar62.str = pcVar25;
      Swift::String::append(SVar39,SVar62);
      _swift_bridgeObjectRelease(SVar39.bridgeObject);
      SVar39.bridgeObject = (void *)0xe300000000000000;
      SVar39.str = (char *)0x5b205d;
      SVar63.bridgeObject = puVar11;
      SVar63.str = pcVar25;
      Swift::String::append(SVar39,SVar63);
      SVar47.bridgeObject = (void *)0xe900000000000072;
      SVar47.str = (char *)0x657061706c6c6177;
      SVar64.bridgeObject = puVar11;
      SVar64.str = pcVar25;
      Swift::String::append(SVar47,SVar64);
      SVar48.bridgeObject = (void *)0xe200000000000000;
      SVar48.str = (char *)0x205d;
      SVar65.bridgeObject = puVar11;
      SVar65.str = pcVar25;
      Swift::String::append(SVar48,SVar65);
      SVar49.bridgeObject = (void *)0x80000001004e2900;
      SVar49.str = (char *)0x100000000000004b;
      SVar66.bridgeObject = puVar11;
      SVar66.str = pcVar25;
      Swift::String::append(SVar49,SVar66);
      puVar16 = local_100;
      puVar26 = local_108;
      local_108 = (undefined *)0x282020;
      local_100 = (undefined *)0xe300000000000000;
      SVar50.bridgeObject = (void *)0xe600000000000000;
      SVar50.str = (char *)0x29286c6c6f70;
      SVar67.bridgeObject = puVar11;
      SVar67.str = pcVar25;
      Swift::String::append(SVar50,SVar67);
      SVar51.bridgeObject = (void *)0xe100000000000000;
      SVar51.str = (char *)0x3a;
      SVar68.bridgeObject = puVar11;
      SVar68.str = pcVar25;
      Swift::String::append(SVar51,SVar68);
      local_118 = (undefined *)0x364;
      SVar39 = Swift::CustomStringConvertible::get_description();
      SVar69.bridgeObject = puVar11;
      SVar69.str = pcVar25;
      Swift::String::append(SVar39,SVar69);
      _swift_bridgeObjectRelease(SVar39.bridgeObject);
      SVar52.bridgeObject = (void *)0xe100000000000000;
      SVar52.str = (char *)0x29;
      SVar70.bridgeObject = puVar11;
      SVar70.str = pcVar25;
      Swift::String::append(SVar52,SVar70);
      puVar23 = local_100;
      puVar11 = local_108;
      if (DAT_100559018 != -1) {
        _swift_once(&DAT_100559018,FUN_1002854a0);
      }
      puVar21 = &DAT_100534f50;
      _swift_allocObject(&DAT_100534f50,0x30,7);
      *(undefined **)(puVar21 + 0x10) = puVar26;
      *(undefined **)(puVar21 + 0x18) = puVar16;
      *(undefined **)(puVar21 + 0x20) = puVar11;
      *(undefined **)(puVar21 + 0x28) = puVar23;
      local_e8 = thunk_FUN_100099310;
      local_108 = PTR___NSConcreteStackBlock_100521110;
      local_100 = (undefined *)0x42000000;
      local_f8 = FUN_1000c7e7c;
      puStack_f0 = &DAT_100534f68;
      local_e0 = puVar21;
      pvVar18 = __Block_copy(&local_108);
      DVar14.unknown = puVar16;
      _swift_bridgeObjectRetain();
      DVar4.unknown = local_1a0.unknown;
      Dispatch::DispatchQoS::get_unspecified(DVar14);
      local_118 = PTR___swiftEmptyArrayStorage_100524190;
      puVar15 = &DAT_100553db0;
      FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
      puVar11 = &DAT_100561080;
      FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
      puVar21 = puVar11;
      FUN_100077ac0();
      puVar23 = local_188;
      DVar3.unknown = local_1a8.unknown;
      Swift::SetAlgebra::_init(local_1a8.unknown,&local_118,puVar11,puVar21,local_188,puVar15);
      (extension_Dispatch)::__C::OS_dispatch_queue::_async
                ((DispatchQoS)0x0,(DispatchWorkItemFlags)DVar4.unknown);
      __Block_release(pvVar18);
      (**(code **)(local_198 + 8))(DVar3.unknown,puVar23);
      (**(code **)(local_190 + 8))(DVar4.unknown,local_180);
      _swift_release(local_e0);
      if (DAT_100559020 != -1) {
        _swift_once(&DAT_100559020,FUN_100285420);
      }
      puVar11 = local_200;
      puVar23 = local_200;
      FUN_100099338(local_200,&DAT_100558f50);
      DVar13.unknown = local_1e8;
      lVar27 = local_208;
      puVar21 = local_1e8;
      (**(code **)(local_208 + 0x10))(local_1e8,puVar23,puVar11);
      uVar7 = (uint)puVar21;
      static_(extension_in_os):__C.os_log_type_t.default.getter_:___C.os_log_type_t::_get_default();
      LVar8.unknown = puVar16;
      _swift_bridgeObjectRetain();
      pOVar19 = os::Logger::get_logObject(LVar8);
      pOVar22 = pOVar19;
      _os_log_type_enabled(pOVar19,uVar7 & 0xff);
      if ((int)pOVar22 == 0) {
        _swift_bridgeObjectRelease_n(puVar16,2);
      }
      else {
        puVar20 = (undefined4 *)0xc;
        _swift_slowAlloc(0xc,0xffffffffffffffff);
        puVar23 = (undefined *)0x20;
        _swift_slowAlloc(0x20,0xffffffffffffffff);
        *puVar20 = 0x8220102;
        local_108 = puVar23;
        FUN_10012dbb0(puVar26,puVar16,&local_108);
        *(undefined **)(puVar20 + 1) = puVar26;
        _swift_bridgeObjectRelease_n(puVar16,2);
        __os_log_impl(0x100000000,pOVar19,uVar7 & 0xff,"%{public}s",puVar20,0xc);
        FUN_100043f24(puVar23);
        _swift_slowDealloc(puVar23,0xffffffffffffffff,0xffffffffffffffff);
        _swift_slowDealloc(puVar20,0xffffffffffffffff,0xffffffffffffffff);
      }
      pcVar34 = *(code **)(lVar27 + 8);
LAB_1002452d8:
      (*pcVar34)(DVar13.unknown,puVar11);
    }
    else {
      local_108 = (undefined *)0x5b;
      local_100 = (undefined *)0xe100000000000000;
      local_118 = (undefined *)0x4e524157;
      local_110 = 0xe400000000000000;
      local_128 = 0x20;
      local_120 = 0xe100000000000000;
      FUN_100026df4();
      pcVar25 = (char *)0x0;
      puVar16 = PTR___type_metadata_for_Swift_String_100523a98;
      SVar39 = (extension_Foundation)::Swift::StringProtocol::_padding
                         (6,&local_128,0,PTR___type_metadata_for_Swift_String_100523a98,
                          PTR___type_metadata_for_Swift_String_100523a98,lVar31,lVar31);
      SVar53.bridgeObject = puVar16;
      SVar53.str = pcVar25;
      Swift::String::append(SVar39,SVar53);
      _swift_bridgeObjectRelease(SVar39.bridgeObject);
      SVar40.bridgeObject = (void *)0xe300000000000000;
      SVar40.str = (char *)0x5b205d;
      SVar54.bridgeObject = puVar16;
      SVar54.str = pcVar25;
      Swift::String::append(SVar40,SVar54);
      SVar41.bridgeObject = (void *)0xe900000000000072;
      SVar41.str = (char *)0x657061706c6c6177;
      SVar55.bridgeObject = puVar16;
      SVar55.str = pcVar25;
      Swift::String::append(SVar41,SVar55);
      SVar42.bridgeObject = (void *)0xe200000000000000;
      SVar42.str = (char *)0x205d;
      SVar56.bridgeObject = puVar16;
      SVar56.str = pcVar25;
      Swift::String::append(SVar42,SVar56);
      SVar43.bridgeObject = (void *)0x80000001004e28c0;
      SVar43.str = (char *)0xd00000000000003b;
      SVar57.bridgeObject = puVar16;
      SVar57.str = pcVar25;
      Swift::String::append(SVar43,SVar57);
      puVar23 = local_100;
      puVar11 = local_108;
      local_108 = (undefined *)0x282020;
      local_100 = (undefined *)0xe300000000000000;
      SVar44.bridgeObject = (void *)0xe600000000000000;
      SVar44.str = (char *)0x29286c6c6f70;
      SVar58.bridgeObject = puVar16;
      SVar58.str = pcVar25;
      Swift::String::append(SVar44,SVar58);
      SVar45.bridgeObject = (void *)0xe100000000000000;
      SVar45.str = (char *)0x3a;
      SVar59.bridgeObject = puVar16;
      SVar59.str = pcVar25;
      Swift::String::append(SVar45,SVar59);
      local_118 = (undefined *)0x367;
      SVar39 = Swift::CustomStringConvertible::get_description();
      SVar60.bridgeObject = puVar16;
      SVar60.str = pcVar25;
      Swift::String::append(SVar39,SVar60);
      _swift_bridgeObjectRelease(SVar39.bridgeObject);
      SVar46.bridgeObject = (void *)0xe100000000000000;
      SVar46.str = (char *)0x29;
      SVar61.bridgeObject = puVar16;
      SVar61.str = pcVar25;
      Swift::String::append(SVar46,SVar61);
      puVar21 = local_100;
      puVar16 = local_108;
      if (DAT_100559018 != -1) {
        _swift_once(&DAT_100559018,FUN_1002854a0);
      }
      puVar17 = &DAT_100534f00;
      _swift_allocObject(&DAT_100534f00,0x30,7);
      *(undefined **)(puVar17 + 0x10) = puVar11;
      *(undefined **)(puVar17 + 0x18) = puVar23;
      *(undefined **)(puVar17 + 0x20) = puVar16;
      *(undefined **)(puVar17 + 0x28) = puVar21;
      local_e8 = thunk_FUN_100099310;
      local_108 = PTR___NSConcreteStackBlock_100521110;
      local_100 = (undefined *)0x42000000;
      local_f8 = FUN_1000c7e7c;
      puStack_f0 = &DAT_100534f18;
      local_e0 = puVar17;
      pvVar18 = __Block_copy(&local_108);
      DVar14.unknown = puVar23;
      _swift_bridgeObjectRetain();
      DVar4.unknown = local_1a0.unknown;
      Dispatch::DispatchQoS::get_unspecified(DVar14);
      local_118 = PTR___swiftEmptyArrayStorage_100524190;
      puVar15 = &DAT_100553db0;
      FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
      puVar16 = &DAT_100561080;
      FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
      puVar17 = puVar16;
      FUN_100077ac0();
      puVar21 = local_188;
      DVar3.unknown = local_1a8.unknown;
      Swift::SetAlgebra::_init(local_1a8.unknown,&local_118,puVar16,puVar17,local_188,puVar15);
      (extension_Dispatch)::__C::OS_dispatch_queue::_async
                ((DispatchQoS)0x0,(DispatchWorkItemFlags)DVar4.unknown);
      __Block_release(pvVar18);
      (**(code **)(local_198 + 8))(DVar3.unknown,puVar21);
      (**(code **)(local_190 + 8))(DVar4.unknown,local_180);
      _swift_release(local_e0);
      if (DAT_100559020 != -1) {
        _swift_once(&DAT_100559020,FUN_100285420);
      }
      puVar16 = local_200;
      puVar21 = local_200;
      FUN_100099338(local_200,&DAT_100558f50);
      lVar31 = local_1e0;
      lVar27 = local_208;
      lVar35 = local_1e0;
      (**(code **)(local_208 + 0x10))(local_1e0,puVar21,puVar16);
      uVar7 = (uint)lVar35;
      static_(extension_in_os):__C.os_log_type_t.default.getter_:___C.os_log_type_t::_get_default();
      LVar8.unknown = puVar23;
      _swift_bridgeObjectRetain();
      pOVar19 = os::Logger::get_logObject(LVar8);
      pOVar22 = pOVar19;
      _os_log_type_enabled(pOVar19,uVar7 & 0xff);
      if ((int)pOVar22 == 0) {
        _swift_bridgeObjectRelease_n(puVar23,2);
      }
      else {
        puVar20 = (undefined4 *)0xc;
        _swift_slowAlloc(0xc,0xffffffffffffffff);
        puVar21 = (undefined *)0x20;
        _swift_slowAlloc(0x20,0xffffffffffffffff);
        *puVar20 = 0x8220102;
        local_108 = puVar21;
        FUN_10012dbb0(puVar11,puVar23,&local_108);
        *(undefined **)(puVar20 + 1) = puVar11;
        _swift_bridgeObjectRelease_n(puVar23,2);
        __os_log_impl(0x100000000,pOVar19,uVar7 & 0xff,"%{public}s",puVar20,0xc);
        FUN_100043f24(puVar21);
        _swift_slowDealloc(puVar21,0xffffffffffffffff,0xffffffffffffffff);
        _swift_slowDealloc(puVar20,0xffffffffffffffff,0xffffffffffffffff);
      }
      (**(code **)(lVar27 + 8))(lVar31,puVar16);
      (*local_148)(puVar26);
      _swift_release(puVar26);
    }
    return;
  }
  goto LAB_100244640;
}

