// rea decompile_all
// name: FUN_100253398
// address: 0x100253398
// body: available
// range: 0x100253398-0x100253e83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100253398(ulong param_1,char param_2)

{
  ulong *puVar1;
  _CocoaArrayWrapper _Var2;
  byte bVar3;
  bool bVar4;
  code *pcVar5;
  UUID UVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  _ArrayBuffer self;
  UUID UVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ID self_00;
  ID IVar14;
  NSString *pNVar15;
  Dictionary<undefined,undefined> DVar16;
  Dictionary<undefined,undefined> DVar17;
  void *pvVar18;
  ulong uVar19;
  long extraout_x8;
  undefined8 uVar20;
  ulong uVar21;
  long unaff_x20;
  undefined8 *puVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong *puVar27;
  long lVar28;
  void *pvVar29;
  long lVar30;
  long lVar31;
  float fVar32;
  double dVar33;
  String SVar34;
  undefined8 *local_150;
  long local_148;
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 auStack_90 [32];
  
  UVar6 = Foundation::UUID::typeMetadataAccessor();
  lVar31 = *(long *)(UVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar31 + 0x40));
  lVar28 = _TtC7Wallper21VideoWallpaperManager::windows;
  if (param_2 == '\x01') {
    _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::windows,auStack_90,0,0);
    lVar28 = *(long *)(unaff_x20 + lVar28);
    puVar22 = *(undefined8 **)(lVar28 + 0x10);
    puVar10 = (undefined8 *)PTR___swiftEmptyArrayStorage_100524190;
    if (puVar22 != (undefined8 *)0x0) {
      _swift_bridgeObjectRetain(lVar28);
      puVar10 = puVar22;
      FUN_1001c5970(puVar22,0);
      puVar7 = &local_b8;
      thunk_FUN_1001aae44(puVar7,puVar10 + 4,puVar22,lVar28);
      FUN_10002f6ec(local_b8,uStack_b0,local_a8,uStack_a0,local_98);
      if (puVar7 != puVar22) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100253478);
        (*pcVar5)();
      }
    }
  }
  else {
    puVar8 = (undefined *)NSScreen::screens((ID)&_OBJC_CLASS___NSScreen);
    FUN_100044230(0,&DAT_100558e50,&PTR__OBJC_CLASS___NSScreen_10053f9b0);
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    if ((ulong)puVar8 >> 0x3e == 0) {
      uVar25 = *(ulong *)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
      _swift_bridgeObjectRelease(puVar8);
    }
    else {
      _Var2.unknown = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar8) {
        _Var2.unknown = puVar8;
      }
      uVar25 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
      _swift_bridgeObjectRelease(puVar8);
      if ((long)uVar25 < 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100253e60);
        (*pcVar5)();
      }
    }
    if (uVar25 <= param_1) {
      return;
    }
    self.unknown = (undefined *)NSScreen::screens(&_OBJC_CLASS___NSScreen);
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    if (((ulong)self.unknown & 0xc000000000000001) == 0) {
      if (*(ulong *)(((ulong)self.unknown & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100253e74);
        (*pcVar5)();
      }
    }
    else {
      Swift::_ArrayBuffer::__getElementSlowPath(param_1,self);
    }
    _swift_bridgeObjectRelease();
    FUN_100174ed8();
    if (self.unknown == (undefined *)0x0) {
      UVar9 = Foundation::UUID::init();
      SVar34 = Foundation::UUID::get_uuidString(UVar9);
      (**(code **)(lVar31 + 8))
                ((long)&local_150 - (extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar6.unknown);
    }
    else {
      objc_stub::stringValue((ID)self.unknown);
      SVar34 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    }
    lVar28 = _TtC7Wallper21VideoWallpaperManager::windows;
    pvVar29 = SVar34.bridgeObject;
    _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::windows,auStack_90,0,0);
    lVar28 = *(long *)(unaff_x20 + lVar28);
    if (*(long *)(lVar28 + 0x10) == 0) {
      _swift_bridgeObjectRelease(pvVar29);
      return;
    }
    _swift_bridgeObjectRetain(lVar28);
    pvVar18 = pvVar29;
    FUN_10000464c(SVar34.str);
    if (((ulong)pvVar18 & 1) == 0) {
      _swift_bridgeObjectRelease(pvVar29);
      _swift_bridgeObjectRelease(lVar28);
      return;
    }
    _swift_bridgeObjectRelease(lVar28);
    puVar10 = (undefined8 *)&DAT_100549eb0;
    FUN_100002f94(&DAT_100549eb0,&DAT_100426be0);
    _swift_allocObject();
    puVar10[3] = 2;
    puVar10[2] = 1;
    *(String *)(puVar10 + 4) = SVar34;
  }
  lVar31 = _TtC7Wallper21VideoWallpaperManager::holds;
  lVar28 = _TtC7Wallper21VideoWallpaperManager::wantsPlaying;
  uVar25 = puVar10[2];
  _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::wantsPlaying,&local_b8,0,0);
  _swift_beginAccess(unaff_x20 + lVar31,auStack_d0,0,0);
  if (uVar25 == 0) {
    _swift_bridgeObjectRelease(puVar10);
  }
  else {
    uVar26 = 0;
    puVar27 = puVar10 + 5;
    local_150 = puVar10;
    do {
      if ((ulong)local_150[2] <= uVar26) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100253e38);
        (*pcVar5)();
      }
      uVar11 = puVar27[-1];
      uVar12 = *puVar27;
      lVar23 = *(long *)(unaff_x20 + lVar28);
      lVar30 = *(long *)(lVar23 + 0x10);
      _swift_bridgeObjectRetain(uVar12);
      if (lVar30 == 0) {
LAB_100253730:
        uVar24 = *(ulong *)(unaff_x20 + lVar31);
        if (*(long *)(uVar24 + 0x10) == 0) {
LAB_100253818:
          _swift_bridgeObjectRelease(uVar12);
        }
        else {
          _swift_bridgeObjectRetain(uVar24);
          uVar19 = uVar12;
          FUN_10000464c();
          if ((uVar19 & 1) == 0) {
            _swift_bridgeObjectRelease(uVar12);
            uVar12 = uVar24;
            goto LAB_100253818;
          }
          lVar30 = *(long *)(*(long *)(uVar24 + 0x38) + uVar11 * 8);
          _swift_bridgeObjectRetain(lVar30);
          _swift_bridgeObjectRelease(uVar24);
          lVar23 = *(long *)(lVar30 + 0x10);
          _swift_bridgeObjectRelease(uVar12);
          _swift_bridgeObjectRelease(lVar30);
          if (lVar23 != 0) goto LAB_10025378c;
        }
        bVar4 = false;
        goto LAB_10025383c;
      }
      _swift_bridgeObjectRetain(lVar23);
      uVar24 = uVar11;
      uVar19 = uVar12;
      FUN_10000464c();
      if ((uVar19 & 1) == 0) {
        _swift_bridgeObjectRelease(lVar23);
        goto LAB_100253730;
      }
      bVar3 = *(byte *)(*(long *)(lVar23 + 0x38) + uVar24);
      _swift_bridgeObjectRelease(lVar23);
      if ((bVar3 & 1) != 0) goto LAB_100253730;
      _swift_bridgeObjectRelease(uVar12);
LAB_10025378c:
      uVar26 = uVar26 + 1;
      puVar27 = puVar27 + 2;
    } while (uVar25 != uVar26);
    bVar4 = true;
LAB_10025383c:
    puVar10 = local_150;
    local_148 = _TtC7Wallper21VideoWallpaperManager::players;
    _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::players,auStack_e8,0,0);
    _swift_beginAccess(unaff_x20 + lVar31,auStack_100,0,0);
    uVar26 = 0;
    puVar27 = puVar10 + 5;
    do {
      if ((ulong)puVar10[2] <= uVar26) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100253e28);
        (*pcVar5)();
      }
      uVar11 = puVar27[-1];
      uVar12 = *puVar27;
      _swift_beginAccess(unaff_x20 + lVar28,auStack_118,0x21,0);
      _swift_bridgeObjectRetain(uVar12);
      uVar13 = *(ulong *)(unaff_x20 + lVar28);
      _swift_isUniquelyReferenced_nonNull_native();
      lVar30 = *(long *)(unaff_x20 + lVar28);
      *(undefined8 *)(unaff_x20 + lVar28) = 0x8000000000000000;
      uVar24 = uVar11;
      uVar19 = uVar12;
      FUN_10000464c();
      uVar21 = (ulong)~(uint)uVar19 & 1;
      lVar23 = *(long *)(lVar30 + 0x10) + uVar21;
      if (SCARRY8(*(long *)(lVar30 + 0x10),uVar21)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100253e2c);
        (*pcVar5)();
      }
      if (*(long *)(lVar30 + 0x18) < lVar23) {
        FUN_1001ce204(lVar23,uVar13);
        uVar24 = uVar11;
        uVar13 = uVar12;
        FUN_10000464c();
        if (((uint)uVar19 & 1) != ((uint)uVar13 & 1)) goto LAB_100253e74;
      }
      else if ((uVar13 & 1) == 0) {
        FUN_1001cb420();
        puVar10 = local_150;
      }
      if ((uVar19 & 1) == 0) {
        lVar23 = lVar30 + (uVar24 >> 6) * 8;
        *(ulong *)(lVar23 + 0x40) = *(ulong *)(lVar23 + 0x40) | 1L << (uVar24 & 0x3f);
        puVar1 = (ulong *)(*(long *)(lVar30 + 0x30) + uVar24 * 0x10);
        *puVar1 = uVar11;
        puVar1[1] = uVar12;
        *(bool *)(*(long *)(lVar30 + 0x38) + uVar24) = bVar4;
        if (SCARRY8(*(long *)(lVar30 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100253e30);
          (*pcVar5)();
        }
        *(long *)(lVar30 + 0x10) = *(long *)(lVar30 + 0x10) + 1;
        _swift_bridgeObjectRetain(uVar12);
      }
      else {
        *(bool *)(*(long *)(lVar30 + 0x38) + uVar24) = bVar4;
      }
      *(long *)(unaff_x20 + lVar28) = lVar30;
      _swift_endAccess(auStack_118);
      if (bVar4) {
        _swift_beginAccess(unaff_x20 + lVar31,auStack_118,0x21,0);
        uVar13 = *(ulong *)(unaff_x20 + lVar31);
        _swift_isUniquelyReferenced_nonNull_native();
        lVar30 = *(long *)(unaff_x20 + lVar31);
        *(undefined8 *)(unaff_x20 + lVar31) = 0x8000000000000000;
        uVar24 = uVar11;
        uVar19 = uVar12;
        FUN_10000464c();
        uVar21 = (ulong)~(uint)uVar19 & 1;
        lVar23 = *(long *)(lVar30 + 0x10) + uVar21;
        if (SCARRY8(*(long *)(lVar30 + 0x10),uVar21)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100253e34);
          (*pcVar5)();
        }
        if (*(long *)(lVar30 + 0x18) < lVar23) {
          FUN_1001ce184(lVar23,uVar13);
          uVar24 = uVar11;
          uVar13 = uVar12;
          FUN_10000464c();
          if (((uint)uVar19 & 1) != ((uint)uVar13 & 1)) {
LAB_100253e74:
            Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100253e84);
            (*pcVar5)();
          }
        }
        else if ((uVar13 & 1) == 0) {
          FUN_1001cb3a0();
          puVar10 = local_150;
        }
        if ((uVar19 & 1) == 0) {
          lVar23 = lVar30 + (uVar24 >> 6) * 8;
          *(ulong *)(lVar23 + 0x40) = *(ulong *)(lVar23 + 0x40) | 1L << (uVar24 & 0x3f);
          puVar1 = (ulong *)(*(long *)(lVar30 + 0x30) + uVar24 * 0x10);
          *puVar1 = uVar11;
          puVar1[1] = uVar12;
          *(undefined **)(*(long *)(lVar30 + 0x38) + uVar24 * 8) =
               PTR___swiftEmptySetSingleton_1005241a0;
          if (SCARRY8(*(long *)(lVar30 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100253e3c);
            (*pcVar5)();
          }
          *(long *)(lVar30 + 0x10) = *(long *)(lVar30 + 0x10) + 1;
          _swift_bridgeObjectRetain(uVar12);
        }
        else {
          uVar20 = *(undefined8 *)(*(long *)(lVar30 + 0x38) + uVar24 * 8);
          *(undefined **)(*(long *)(lVar30 + 0x38) + uVar24 * 8) =
               PTR___swiftEmptySetSingleton_1005241a0;
          _swift_bridgeObjectRelease(uVar20);
        }
        *(long *)(unaff_x20 + lVar31) = lVar30;
        _swift_endAccess(auStack_118);
      }
      lVar23 = *(long *)(unaff_x20 + local_148);
      if (*(long *)(lVar23 + 0x10) != 0) {
        _swift_bridgeObjectRetain(lVar23);
        uVar24 = uVar11;
        uVar19 = uVar12;
        FUN_10000464c();
        if ((uVar19 & 1) == 0) {
          _swift_bridgeObjectRelease(lVar23);
        }
        else {
          self_00 = *(ID *)(*(long *)(lVar23 + 0x38) + uVar24 * 8);
          _swift_bridgeObjectRelease(lVar23);
          lVar23 = *(long *)(unaff_x20 + lVar28);
          if (*(long *)(lVar23 + 0x10) == 0) {
LAB_100253bc4:
            lVar23 = *(long *)(unaff_x20 + lVar31);
            if (*(long *)(lVar23 + 0x10) != 0) {
              _swift_bridgeObjectRetain(lVar23);
              uVar24 = uVar11;
              uVar19 = uVar12;
              FUN_10000464c();
              if ((uVar19 & 1) == 0) {
                _swift_bridgeObjectRelease(lVar23);
              }
              else {
                lVar30 = *(long *)(*(long *)(lVar23 + 0x38) + uVar24 * 8);
                _swift_bridgeObjectRetain(lVar30);
                _swift_bridgeObjectRelease(lVar23);
                lVar23 = *(long *)(lVar30 + 0x10);
                _swift_bridgeObjectRelease(lVar30);
                if (lVar23 != 0) goto LAB_100253c1c;
              }
            }
            IVar14 = objc_stub::timeControlStatus(self_00);
            puVar10 = local_150;
            if (IVar14 != 2) {
              IVar14 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
              pNVar15 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
              IVar14 = NSUserDefaults::dictionaryForKey_(IVar14,pNVar15);
              if (IVar14 == 0) {
LAB_100253d18:
                DVar17.unknown = PTR___swiftEmptyArrayStorage_100524190;
                FUN_100005c3c();
              }
              else {
                DVar16 = (extension_Foundation)::Swift::Dictionary::
                         __unconditionallyBridgeFromObjectiveC();
                DVar17 = DVar16;
                FUN_10017dc34();
                _swift_bridgeObjectRelease(DVar16.unknown);
                if (DVar17.unknown == (undefined *)0x0) goto LAB_100253d18;
              }
              puVar10 = local_150;
              if ((*(long *)(DVar17.unknown + 0x10) == 0) ||
                 (uVar24 = uVar12, FUN_10000464c(), (uVar24 & 1) == 0)) {
                _swift_bridgeObjectRelease(DVar17.unknown);
                dVar33 = 1.0;
LAB_100253d78:
                fVar32 = (float)dVar33;
              }
              else {
                dVar33 = *(double *)(*(long *)(DVar17.unknown + 0x38) + uVar11 * 8);
                _swift_bridgeObjectRelease(DVar17.unknown);
                fVar32 = 1.0;
                if (0.0 < dVar33) goto LAB_100253d78;
              }
              objc_stub::playImmediatelyAtRate_(self_00,(ulong)(uint)fVar32);
            }
          }
          else {
            _swift_bridgeObjectRetain(lVar23);
            uVar24 = uVar11;
            uVar19 = uVar12;
            FUN_10000464c();
            if ((uVar19 & 1) == 0) {
              _swift_bridgeObjectRelease(lVar23);
              goto LAB_100253bc4;
            }
            bVar3 = *(byte *)(*(long *)(lVar23 + 0x38) + uVar24);
            _swift_bridgeObjectRelease(lVar23);
            if ((bVar3 & 1) != 0) goto LAB_100253bc4;
LAB_100253c1c:
            IVar14 = objc_stub::timeControlStatus(self_00);
            puVar10 = local_150;
            if (IVar14 != 0) {
              objc_stub::pause(self_00);
              puVar10 = local_150;
            }
          }
        }
      }
      uVar26 = uVar26 + 1;
      _swift_bridgeObjectRelease(uVar12);
      puVar27 = puVar27 + 2;
    } while (uVar25 != uVar26);
    _swift_bridgeObjectRelease(puVar10);
  }
  FUN_10023c3ec();
  FUN_100255818();
  FUN_10023bec0(0,0);
  return;
}

