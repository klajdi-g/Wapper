// rea decompile_all
// name: FUN_1002391e0
// address: 0x1002391e0
// body: available
// range: 0x1002391e0-0x100239d8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002391e0(void)

{
  _CocoaArrayWrapper _Var1;
  char cVar2;
  String SVar3;
  DispatchWorkItemFlags qos;
  undefined *puVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  ID IVar8;
  NSString *pNVar9;
  _ArrayBuffer _Var10;
  _ArrayBuffer _Var11;
  ID self;
  ID self_00;
  undefined8 uVar12;
  undefined *puVar13;
  DispatchQoS DVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  Logger LVar19;
  OS_os_log *pOVar20;
  OS_os_log *pOVar21;
  undefined4 *puVar22;
  char *pcVar23;
  char *pcVar25;
  void *pvVar26;
  undefined *puVar27;
  long extraout_x8;
  long extraout_x8_00;
  long lVar28;
  long extraout_x8_01;
  ulong uVar29;
  ID IVar30;
  long unaff_x20;
  ulong uVar31;
  long lVar32;
  void *pvVar33;
  ulong uVar34;
  float fVar35;
  double extraout_d0;
  float fVar36;
  String SVar37;
  String SVar38;
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
  DispatchWorkItemFlags local_1c0;
  long local_1b8;
  undefined *local_1b0;
  long local_1a8;
  long local_1a0;
  undefined *local_198;
  long local_190;
  long local_188;
  undefined *local_180;
  ulong local_178;
  ulong local_170;
  ulong *local_168;
  long local_160;
  uint local_154;
  char *local_f8;
  undefined *local_f0;
  code *local_e8;
  undefined *puStack_e0;
  code *local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined *local_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  long lVar18;
  _StringGuts _Var24;
  
  local_180 = (undefined *)os::Logger::typeMetadataAccessor();
  local_188 = *(long *)(local_180 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_188 + 0x40));
  lVar28 = (long)&local_1c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_190 = lVar28;
  local_198 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_1a0 = *(long *)(local_198 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_1a0 + 0x40));
  lVar28 = lVar28 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_1a8 = lVar28;
  local_1b0 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_1b8 = *(long *)(local_1b0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_1b8 + 0x40));
  local_1c0.unknown = (undefined *)(lVar28 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  IVar8 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  NSUserDefaults::doubleForKey_(IVar8,pNVar9);
  lVar28 = _TtC7Wallper21VideoWallpaperManager::players;
  fVar36 = (float)extraout_d0;
  _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::players,auStack_90,0,0);
  lVar28 = *(long *)(unaff_x20 + lVar28);
  uVar29 = 1L << ((ulong)*(byte *)(lVar28 + 0x20) & 0x3f);
  uVar31 = 0xffffffffffffffff;
  if ((*(byte *)(lVar28 + 0x20) & 0x3f) < 6) {
    uVar31 = ~(-1L << (uVar29 & 0x3f));
  }
  uVar31 = uVar31 & *(ulong *)(lVar28 + 0x40);
  _swift_bridgeObjectRetain(lVar28);
  lVar32 = 0;
  while( true ) {
    for (; uVar31 != 0; uVar31 = uVar31 - 1 & uVar31) {
      uVar34 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
      uVar34 = (uVar34 & 0xcccccccccccccccc) >> 2 | (uVar34 & 0x3333333333333333) << 2;
      uVar34 = (uVar34 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar34 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar34 = (uVar34 & 0xff00ff00ff00ff00) >> 8 | (uVar34 & 0xff00ff00ff00ff) << 8;
      uVar34 = (uVar34 & 0xffff0000ffff0000) >> 0x10 | (uVar34 & 0xffff0000ffff) << 0x10;
      IVar8 = *(ID *)(*(long *)(lVar28 + 0x38) + LZCOUNT(uVar34 >> 0x20 | uVar34 << 0x20) * 8 +
                     lVar32 * 0x200);
      objc_stub::setVolume_(IVar8,(ulong)(uint)fVar36);
      objc_stub::setMuted_(IVar8,(ulong)(fVar36 == 0.0));
    }
    bVar6 = SCARRY8(lVar32,1);
    lVar32 = lVar32 + 1;
    if (bVar6) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100239d44);
      (*pcVar5)();
    }
    if ((long)(uVar29 + 0x3f >> 6) <= lVar32) break;
    uVar31 = ((ulong *)(lVar28 + 0x40))[lVar32];
  }
  _swift_release(lVar28);
  lVar28 = _TtC7Wallper21VideoWallpaperManager::silencers;
  _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::silencers,auStack_a8,0,0);
  local_160 = *(long *)(unaff_x20 + lVar28);
  local_168 = (ulong *)(local_160 + 0x40);
  local_178 = -1L << ((ulong)*(byte *)(local_160 + 0x20) & 0x3f);
  uVar31 = 0xffffffffffffffff;
  if (-local_178 < 0x40) {
    uVar31 = ~(-1L << (-local_178 & 0x3f));
  }
  uVar31 = uVar31 & *local_168;
  uVar29 = 0x3f - local_178 >> 6;
  _swift_bridgeObjectRetain_n(local_160,2);
  pvVar33 = (void *)0x0;
  local_154 = (uint)(fVar36 == 0.0);
  local_170 = uVar29;
  pvVar26 = pvVar33;
  _Var24.unknown = (undefined *)local_168;
  lVar28 = local_160;
  uVar7 = (uint)(fVar36 == 0.0);
  do {
    do {
      do {
        while (uVar31 == 0) {
          bVar6 = SCARRY8((long)pvVar33,1);
          pvVar33 = (void *)((long)pvVar33 + 1);
          if (bVar6) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100239d48);
            (*pcVar5)();
          }
          if ((long)uVar29 <= (long)pvVar33) {
            _swift_bridgeObjectRelease(lVar28);
            pcVar25 = (char *)~local_178;
            FUN_10002f6ec(lVar28);
            if (*(float *)(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::lastLoggedVolume) !=
                fVar36) {
              *(float *)(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::lastLoggedVolume) = fVar36
              ;
              local_f8 = (char *)0x0;
              local_f0 = (undefined *)0xe000000000000000;
              Swift::_StringGuts::grow(0x1f,_Var24);
              _swift_bridgeObjectRelease(local_f0);
              local_f8 = (char *)0xd000000000000010;
              local_f0 = (void *)0x80000001004e2a30;
              fVar35 = fVar36 * 100.0;
              if (0x7f7fffff < (uint)ABS(fVar35)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x100239d58);
                (*pcVar5)();
              }
              if (fVar35 <= -9.223373e+18) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x100239d5c);
                (*pcVar5)();
              }
              if (9.223372e+18 <= fVar35) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x100239d60);
                (*pcVar5)();
              }
              local_b8 = (undefined *)(long)fVar35;
              SVar37 = Swift::CustomStringConvertible::get_description();
              SVar38.bridgeObject = pvVar26;
              SVar38.str = pcVar25;
              Swift::String::append(SVar37,SVar38);
              _swift_bridgeObjectRelease(SVar37.bridgeObject);
              SVar37.bridgeObject = (void *)0xea0000000000203a;
              SVar37.str = (char *)0x646574756d282025;
              SVar44.bridgeObject = pvVar26;
              SVar44.str = pcVar25;
              Swift::String::append(SVar37,SVar44);
              pcVar23 = (char *)0x65757274;
              if (fVar36 != 0.0) {
                pcVar23 = (char *)0x65736c6166;
              }
              pvVar33 = (void *)0xe400000000000000;
              if (fVar36 != 0.0) {
                pvVar33 = (void *)0xe500000000000000;
              }
              SVar39.bridgeObject = pvVar33;
              SVar39.str = pcVar23;
              SVar45.bridgeObject = pvVar26;
              SVar45.str = pcVar25;
              Swift::String::append(SVar39,SVar45);
              _swift_bridgeObjectRelease(pvVar33);
              SVar40.bridgeObject = (void *)0xe100000000000000;
              SVar40.str = (char *)0x29;
              uVar12 = 0x29;
              SVar46.bridgeObject = pvVar26;
              SVar46.str = pcVar25;
              Swift::String::append(SVar40,SVar46);
              puVar4 = local_f0;
              SVar3.bridgeObject = local_f0;
              SVar3.str = local_f8;
              local_f8 = (char *)0x5b;
              local_f0 = (undefined *)0xe100000000000000;
              local_b8 = (undefined *)0x4f464e49;
              uStack_b0 = 0xe400000000000000;
              local_c8 = 0x20;
              uStack_c0 = 0xe100000000000000;
              FUN_100026df4();
              pcVar25 = (char *)0x0;
              puVar27 = PTR___type_metadata_for_Swift_String_100523a98;
              SVar37 = (extension_Foundation)::Swift::StringProtocol::_padding
                                 (6,&local_c8,0,PTR___type_metadata_for_Swift_String_100523a98,
                                  PTR___type_metadata_for_Swift_String_100523a98,uVar12,uVar12);
              SVar47.bridgeObject = puVar27;
              SVar47.str = pcVar25;
              Swift::String::append(SVar37,SVar47);
              _swift_bridgeObjectRelease(SVar37.bridgeObject);
              SVar41.bridgeObject = (void *)0xe300000000000000;
              SVar41.str = (char *)0x5b205d;
              SVar48.bridgeObject = puVar27;
              SVar48.str = pcVar25;
              Swift::String::append(SVar41,SVar48);
              SVar42.bridgeObject = (void *)0xe900000000000072;
              SVar42.str = (char *)0x657061706c6c6177;
              SVar49.bridgeObject = puVar27;
              SVar49.str = pcVar25;
              Swift::String::append(SVar42,SVar49);
              SVar43.bridgeObject = (void *)0xe200000000000000;
              SVar43.str = (char *)0x205d;
              SVar50.bridgeObject = puVar27;
              SVar50.str = pcVar25;
              Swift::String::append(SVar43,SVar50);
              SVar51.bridgeObject = puVar27;
              SVar51.str = pcVar25;
              Swift::String::append(SVar3,SVar51);
              puVar27 = local_f0;
              pcVar25 = local_f8;
              if (DAT_100559018 != -1) {
                _swift_once(&DAT_100559018,FUN_1002854a0);
              }
              puVar13 = &DAT_100535400;
              _swift_allocObject(&DAT_100535400,0x30,7);
              *(char **)(puVar13 + 0x10) = pcVar25;
              *(undefined **)(puVar13 + 0x18) = puVar27;
              *(undefined8 *)(puVar13 + 0x20) = 0;
              *(undefined8 *)(puVar13 + 0x28) = 0xe000000000000000;
              local_d8 = thunk_FUN_100099310;
              local_f8 = PTR___NSConcreteStackBlock_100521110;
              local_f0 = (undefined *)0x42000000;
              local_e8 = FUN_1000c7e7c;
              puStack_e0 = &DAT_100535418;
              local_d0 = puVar13;
              pvVar33 = __Block_copy(&local_f8);
              DVar14.unknown = puVar27;
              _swift_bridgeObjectRetain();
              qos.unknown = local_1c0.unknown;
              Dispatch::DispatchQoS::get_unspecified(DVar14);
              local_b8 = PTR___swiftEmptyArrayStorage_100524190;
              puVar15 = &DAT_100553db0;
              FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                            PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8
                           );
              puVar13 = &DAT_100561080;
              FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
              puVar16 = puVar13;
              FUN_100077ac0();
              puVar17 = local_198;
              lVar28 = local_1a8;
              Swift::SetAlgebra::_init(local_1a8,&local_b8,puVar13,puVar16,local_198,puVar15);
              (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
              __Block_release(pvVar33);
              (**(code **)(local_1a0 + 8))(lVar28,puVar17);
              (**(code **)(local_1b8 + 8))(qos.unknown,local_1b0);
              _swift_release(local_d0);
              if (DAT_100559020 != -1) {
                _swift_once(&DAT_100559020,FUN_100285420);
              }
              puVar13 = local_180;
              puVar17 = local_180;
              FUN_100099338(local_180,&DAT_100558f50);
              lVar32 = local_188;
              lVar28 = local_190;
              lVar18 = local_190;
              (**(code **)(local_188 + 0x10))(local_190,puVar17,puVar13);
              uVar7 = (uint)lVar18;
              static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info
                        ();
              LVar19.unknown = puVar27;
              _swift_bridgeObjectRetain();
              pOVar20 = os::Logger::get_logObject(LVar19);
              pOVar21 = pOVar20;
              _os_log_type_enabled(pOVar20,uVar7 & 0xff);
              if ((int)pOVar21 == 0) {
                _swift_bridgeObjectRelease_n(puVar27,2);
              }
              else {
                puVar22 = (undefined4 *)0xc;
                _swift_slowAlloc(0xc,0xffffffffffffffff);
                pcVar23 = (char *)0x20;
                _swift_slowAlloc(0x20,0xffffffffffffffff);
                *puVar22 = 0x8220102;
                local_f8 = pcVar23;
                FUN_10012dbb0(pcVar25,puVar27,&local_f8);
                *(char **)(puVar22 + 1) = pcVar25;
                _swift_bridgeObjectRelease_n(puVar27,2);
                __os_log_impl(0x100000000,pOVar20,uVar7 & 0xff,"%{public}s",puVar22,0xc);
                FUN_100043f24(pcVar23);
                _swift_slowDealloc(pcVar23,0xffffffffffffffff,0xffffffffffffffff);
                _swift_slowDealloc(puVar22,0xffffffffffffffff,0xffffffffffffffff);
              }
              (**(code **)(lVar32 + 8))(lVar28,puVar13);
              _swift_bridgeObjectRelease(puVar4);
            }
            return;
          }
          uVar31 = *(ulong *)((long)_Var24.unknown + pvVar33 * 8);
        }
        uVar34 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
        uVar34 = (uVar34 & 0xcccccccccccccccc) >> 2 | (uVar34 & 0x3333333333333333) << 2;
        uVar34 = (uVar34 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar34 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar34 = (uVar34 & 0xff00ff00ff00ff00) >> 8 | (uVar34 & 0xff00ff00ff00ff) << 8;
        uVar34 = (uVar34 & 0xffff0000ffff0000) >> 0x10 | (uVar34 & 0xffff0000ffff) << 0x10;
        uVar31 = uVar31 - 1 & uVar31;
        lVar32 = *(long *)(*(long *)(lVar28 + 0x38) + LZCOUNT(uVar34 >> 0x20 | uVar34 << 0x20) * 8 +
                          (long)pvVar33 * 0x200);
        cVar2 = *(char *)(lVar32 + 0x10);
        *(char *)(lVar32 + 0x10) = (char)uVar7;
        pvVar26 = pvVar33;
      } while ((fVar36 == 0.0) == (bool)cVar2);
      IVar8 = lVar32 + 0x18;
      _swift_unknownObjectWeakLoadStrong();
    } while (IVar8 == 0);
    _swift_retain(lVar32);
    _Var10.unknown = (undefined *)objc_stub::items(IVar8);
    FUN_100044230(0,&DAT_100557ae0,&PTR__OBJC_CLASS___AVPlayerItem_10053fc08);
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    if ((ulong)_Var10.unknown >> 0x3e == 0) {
      uVar29 = *(ulong *)(((ulong)_Var10.unknown & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var1.unknown = _Var10.unknown & 0xffffffffffffff8;
      if ((undefined *)0x7fffffffffffffff < _Var10.unknown) {
        _Var1.unknown = _Var10.unknown;
      }
      uVar29 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    }
    _swift_retain_n(lVar32,2);
    if (uVar29 != 0) {
      uVar34 = 0;
      do {
        if (((ulong)_Var10.unknown & 0xc000000000000001) == 0) {
          if (*(ulong *)(((ulong)_Var10.unknown & 0xffffffffffffff8) + 0x10) <= uVar34) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100239d50);
            (*pcVar5)();
          }
          IVar8 = *(ID *)(_Var10.unknown + uVar34 * 8 + 0x20);
        }
        else {
          IVar8 = uVar34;
          Swift::_ArrayBuffer::__getElementSlowPath(uVar34,_Var10);
        }
        if (SCARRY8(uVar34,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100239d4c);
          (*pcVar5)();
        }
        uVar34 = uVar34 + 1;
        _Var11.unknown = (undefined *)objc_stub::tracks(IVar8);
        FUN_100044230(0,&DAT_100557ae8,&PTR__OBJC_CLASS___AVPlayerItemTrack_10053fc20);
        (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
        if ((ulong)_Var11.unknown >> 0x3e == 0) {
          IVar8 = *(ID *)(((ulong)_Var11.unknown & 0xffffffffffffff8) + 0x10);
        }
        else {
          _Var1.unknown = _Var11.unknown & 0xffffffffffffff8;
          if ((undefined *)0x7fffffffffffffff < _Var11.unknown) {
            _Var1.unknown = _Var11.unknown;
          }
          IVar8 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
        }
        if (IVar8 != 0) {
          if ((long)IVar8 < 1) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100239d54);
            (*pcVar5)();
          }
          IVar30 = 0;
          do {
            if (((ulong)_Var11.unknown & 0xc000000000000001) == 0) {
              self = *(ID *)(_Var11.unknown + IVar30 * 8 + 0x20);
            }
            else {
              self = IVar30;
              Swift::_ArrayBuffer::__getElementSlowPath(IVar30,_Var11);
            }
            self_00 = objc_stub::assetTrack(self);
            if (self_00 != 0) {
              objc_stub::mediaType(self_00);
              SVar37 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC
                                 ();
              _Var24.unknown = SVar37.bridgeObject;
              SVar38 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC
                                 ();
              if (SVar37 == SVar38) {
                _swift_bridgeObjectRelease(_Var24.unknown);
                _swift_bridgeObjectRelease(SVar38.bridgeObject);
              }
              else {
                bVar6 = Swift::_stringCompareWithSmolCheck
                                  ((_StringGuts)SVar37.str,_Var24,
                                   (_StringComparisonResult)(__int8)SVar38.str);
                _swift_bridgeObjectRelease(_Var24.unknown);
                _swift_bridgeObjectRelease(SVar38.bridgeObject);
                if (!bVar6) goto LAB_10023975c;
              }
              objc_stub::setEnabled_(self,(ulong)((*(byte *)(lVar32 + 0x10) ^ 0xffffffff) & 1));
            }
LAB_10023975c:
            IVar30 = IVar30 + 1;
          } while (IVar8 != IVar30);
        }
        _swift_bridgeObjectRelease(_Var11.unknown);
      } while (uVar34 != uVar29);
    }
    _swift_bridgeObjectRelease(_Var10.unknown);
    _swift_release_n(lVar32,3);
    uVar29 = local_170;
    _Var24.unknown = (undefined *)local_168;
    lVar28 = local_160;
    uVar7 = local_154;
  } while( true );
}

