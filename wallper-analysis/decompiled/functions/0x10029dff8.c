// rea decompile_all
// name: FUN_10029dff8
// address: 0x10029dff8
// body: available
// range: 0x10029dff8-0x10029ee3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10029ee3c to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010029e29c) */
/* WARNING: Removing unreachable block (ram,0x00010029ead0) */
/* WARNING: Removing unreachable block (ram,0x00010029ead4) */
/* WARNING: Removing unreachable block (ram,0x00010029eaec) */

void FUN_10029dff8(void)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  byte bVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  ID self;
  undefined *puVar19;
  NSURL *pNVar20;
  NSArray *pNVar21;
  ID IVar22;
  Set<NSURLResourceKey> forKeys;
  URLResourceValues UVar23;
  URL UVar24;
  undefined *puVar25;
  Substring SVar26;
  ID IVar27;
  UnsafeBufferPointer<__int8> UVar28;
  undefined *puVar29;
  _StringGuts _Var30;
  Index IVar31;
  char *pcVar32;
  char *pcVar33;
  char *pcVar34;
  URLResourceValues UVar35;
  code *pcVar36;
  code *pcVar37;
  long lVar38;
  long lVar39;
  code *pcVar40;
  long lVar41;
  long lVar42;
  undefined8 uVar43;
  uint uVar44;
  long lVar45;
  long lVar46;
  _StringObject _Var47;
  long lVar48;
  undefined8 uVar49;
  undefined *puVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  code *pcVar53;
  long unaff_x22;
  Index after;
  Range<Index> RVar54;
  long lVar55;
  ulong uVar56;
  void *pvVar57;
  long lVar58;
  ulong uVar59;
  String SVar60;
  Character CVar61;
  String SVar62;
  String SVar63;
  String SVar64;
  undefined *local_f8;
  undefined *local_78 [2];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100521138;
  self = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  puVar19 = &DAT_10054d058;
  FUN_100002f94(&DAT_10054d058,&DAT_10042d4b0);
  _swift_allocObject();
  *(undefined8 *)(puVar19 + 0x18) = 4;
  *(undefined8 *)(puVar19 + 0x10) = 2;
  uVar49 = *(undefined8 *)PTR__NSURLContentModificationDateKey_100521598;
  *(undefined8 *)(puVar19 + 0x20) = *(undefined8 *)PTR__NSURLFileSizeKey_1005215a0;
  *(undefined8 *)(puVar19 + 0x28) = uVar49;
  if (DAT_100559be8 != -1) {
    _swift_once(&DAT_100559be8,FUN_10029d568);
  }
  puVar50 = *(undefined **)(unaff_x22 + 0xf0);
  uVar49 = *(undefined8 *)(unaff_x22 + 200);
  lVar38 = *(long *)(unaff_x22 + 0xd0);
  uVar52 = uVar49;
  FUN_100099338(uVar49,&DAT_100559bf0);
  pcVar36 = *(code **)(lVar38 + 0x10);
  UVar24.unknown = puVar50;
  (*pcVar36)(puVar50,uVar52,uVar49);
  pNVar20 = Foundation::URL::_bridgeToObjectiveC(UVar24);
  pcVar37 = *(code **)(lVar38 + 8);
  (*pcVar37)(puVar50,uVar49);
  FUN_100008040(0);
  pNVar21 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  *(undefined8 *)(unaff_x22 + 0x30) = 0;
  IVar22 = NSFileManager::contentsOfDirectoryAtURL_includingPropertiesForKeys_options_error_
                     (self,pNVar20,pNVar21,0,unaff_x22 + 0x30);
  uVar49 = *(undefined8 *)(unaff_x22 + 0x30);
  if (IVar22 == 0) {
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_release(puVar19);
    _swift_errorRelease(uVar49);
  }
  else {
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    lVar38 = *(long *)(IVar22 + 0x10);
    if (lVar38 == 0) {
      local_f8 = PTR___swiftEmptyArrayStorage_100524190;
    }
    else {
      lVar55 = 0;
      lVar45 = *(long *)(unaff_x22 + 0xd0);
      bVar13 = *(byte *)(lVar45 + 0x50);
      lVar46 = *(long *)(unaff_x22 + 0xa0);
      local_f8 = PTR___swiftEmptyArrayStorage_100524190;
      lVar42 = *(long *)(unaff_x22 + 0x50);
      lVar58 = *(long *)(unaff_x22 + 0x58);
      lVar39 = *(long *)(lVar45 + 0x48);
      do {
        uVar49 = *(undefined8 *)(unaff_x22 + 0xe0);
        UVar24.unknown = *(undefined **)(unaff_x22 + 0xe8);
        uVar52 = *(undefined8 *)(unaff_x22 + 200);
        (*pcVar36)(UVar24.unknown,
                   IVar22 + ((ulong)bVar13 + 0x20 & ((ulong)bVar13 ^ 0xffffffffffffffff)) +
                   lVar55 * lVar39,uVar52);
        pcVar40 = *(code **)(lVar45 + 0x20);
        (*pcVar40)(uVar49,UVar24.unknown,uVar52);
        forKeys.unknown = puVar19;
        _swift_retain();
        FUN_10020ca90();
        _swift_release(puVar19);
        Foundation::URL::_resourceValues(forKeys,UVar24);
        uVar52 = *(undefined8 *)(unaff_x22 + 0xf0);
        UVar24.unknown = *(undefined **)(unaff_x22 + 0xc0);
        uVar49 = *(undefined8 *)(unaff_x22 + 200);
        _swift_bridgeObjectRelease(forKeys.unknown);
        UVar23 = Foundation::URLResourceValues::typeMetadataAccessor();
        lVar41 = *(long *)(UVar23.unknown + -8);
        pcVar32 = (char *)0x1;
        UVar35 = UVar23;
        (**(code **)(lVar41 + 0x38))(UVar24.unknown,0);
        UVar24 = Foundation::URL::deletingPathExtension(UVar24);
        SVar60 = Foundation::URL::get_lastPathComponent(UVar24);
        UVar24.unknown = SVar60.bridgeObject;
        pcVar34 = SVar60.str;
        (*pcVar37)(uVar52,uVar49);
        SVar64.bridgeObject = UVar35.unknown;
        SVar64.str = pcVar32;
        uVar56 = (ulong)pcVar34 & 0xffffffffffff;
        if (((ulong)UVar24.unknown & 0x2000000000000000) != 0) {
          uVar56 = (ulong)UVar24.unknown >> 0x38 & 0xf;
        }
        puVar50 = PTR___swiftEmptyArrayStorage_100524190;
        if (uVar56 != 0) {
          uVar44 = SVar60.str._4_4_ >> 0x1b & 1;
          if (((ulong)UVar24.unknown & 0x1000000000000000) == 0) {
            uVar44 = 1;
          }
          uVar59 = 7;
          if (uVar44 == 0) {
            uVar59 = 0xb;
          }
          pcVar32 = (char *)(uVar59 | uVar56 << 0x10);
          uVar56 = uVar56 * 4;
          _swift_bridgeObjectRetain(UVar24.unknown);
          uVar59 = 0;
          after.unknown = (undefined *)0xf;
          RVar54.unknown = after.unknown;
          puVar50 = PTR___swiftEmptyArrayStorage_100524190;
LAB_10029e3a8:
          do {
            CVar61 = Swift::String::get_subscript(after,SVar60);
            _Var30.unknown = CVar61.bridgeObject;
            pcVar33 = UVar24.unknown;
            if ((CVar61.str == (undefined *)0x40) &&
               (_Var30.unknown == (undefined *)0xe100000000000000)) {
              _swift_bridgeObjectRelease(0xe100000000000000);
            }
            else {
              UVar35.unknown = (undefined *)0xe100000000000000;
              bVar18 = Swift::_stringCompareWithSmolCheck
                                 ((_StringGuts)CVar61.str,_Var30,(_StringComparisonResult)0x40);
              _swift_bridgeObjectRelease(_Var30.unknown);
              if (!bVar18) {
                after = Swift::String::index(after,SVar60);
                uVar59 = (ulong)after.unknown >> 0xe;
                if (uVar59 == uVar56) {
                  if ((ulong)RVar54.unknown >> 0xe != uVar56) {
                    if (uVar56 < (ulong)RVar54.unknown >> 0xe) {
                    /* WARNING: Does not return */
                      pcVar36 = (code *)SoftwareBreakpoint(1,0x10029ee24);
                      (*pcVar36)();
                    }
                    SVar63.bridgeObject = pcVar34;
                    SVar63.str = pcVar32;
                    SVar62 = SVar60;
                    SVar26 = Swift::String::get_subscript(RVar54,SVar63);
                    SVar64 = SVar62;
                    _swift_bridgeObjectRelease(UVar24.unknown);
                    puVar25 = puVar50;
                    _swift_isUniquelyReferenced_nonNull_native();
                    puVar29 = puVar50;
                    if (((ulong)puVar25 & 1) == 0) {
                      puVar29 = (undefined *)0x0;
                      pcVar34 = (char *)0x1;
                      FUN_1001c4368(0,*(long *)(puVar50 + 0x10) + 1);
                      SVar64.bridgeObject = puVar50;
                      SVar64.str = pcVar34;
                    }
                    uVar56 = *(ulong *)(puVar29 + 0x10);
                    puVar50 = puVar29;
                    if (*(ulong *)(puVar29 + 0x18) >> 1 <= uVar56) {
                      puVar50 = (undefined *)(ulong)(1 < *(ulong *)(puVar29 + 0x18));
                      pcVar34 = (char *)0x1;
                      FUN_1001c4368(puVar50,uVar56 + 1);
                      SVar64.bridgeObject = puVar29;
                      SVar64.str = pcVar34;
                    }
                    *(ulong *)(puVar50 + 0x10) = uVar56 + 1;
                    *(undefined **)(puVar50 + uVar56 * 0x20 + 0x20) = SVar26.unknown;
                    *(char **)(puVar50 + uVar56 * 0x20 + 0x28) = pcVar32;
                    *(String *)(puVar50 + uVar56 * 0x20 + 0x30) = SVar62;
                    goto LAB_10029e548;
                  }
                  break;
                }
                goto LAB_10029e3a8;
              }
            }
            if ((ulong)RVar54.unknown >> 0xe != uVar59) {
              if (uVar59 < (ulong)RVar54.unknown >> 0xe) {
                    /* WARNING: Does not return */
                pcVar36 = (code *)SoftwareBreakpoint(1,0x10029ee20);
                (*pcVar36)();
              }
              SVar62.bridgeObject = pcVar34;
              SVar62.str = after.unknown;
              IVar31.unknown = after.unknown;
              SVar64 = SVar60;
              SVar26 = Swift::String::get_subscript(RVar54,SVar62);
              UVar35.unknown = SVar64.bridgeObject;
              puVar25 = puVar50;
              _swift_isUniquelyReferenced_nonNull_native();
              puVar29 = puVar50;
              if (((ulong)puVar25 & 1) == 0) {
                puVar29 = (undefined *)0x0;
                FUN_1001c4368(0,*(long *)(puVar50 + 0x10) + 1,1);
                UVar35.unknown = puVar50;
              }
              uVar59 = *(ulong *)(puVar29 + 0x10);
              puVar50 = puVar29;
              if (*(ulong *)(puVar29 + 0x18) >> 1 <= uVar59) {
                puVar50 = (undefined *)(ulong)(1 < *(ulong *)(puVar29 + 0x18));
                FUN_1001c4368(puVar50,uVar59 + 1,1);
                UVar35.unknown = puVar29;
              }
              *(ulong *)(puVar50 + 0x10) = uVar59 + 1;
              *(undefined **)(puVar50 + uVar59 * 0x20 + 0x20) = SVar26.unknown;
              *(undefined **)(puVar50 + uVar59 * 0x20 + 0x28) = IVar31.unknown;
              *(String *)(puVar50 + uVar59 * 0x20 + 0x30) = SVar64;
            }
            after = Swift::String::index(after,SVar60);
            uVar59 = (ulong)after.unknown >> 0xe;
            RVar54.unknown = after.unknown;
          } while (uVar59 != uVar56);
          _swift_bridgeObjectRelease(UVar24.unknown);
          SVar64.bridgeObject = UVar35.unknown;
          SVar64.str = pcVar33;
        }
LAB_10029e548:
        if (*(long *)(puVar50 + 0x10) == 0) {
          _swift_bridgeObjectRelease(puVar50);
          uVar56 = 0xe000000000000000;
          SVar26 = Swift::Substring::init((String)(ZEXT816(0xe000000000000000) << 0x40));
        }
        else {
          puVar2 = (undefined8 *)(puVar50 + *(long *)(puVar50 + 0x10) * 0x20);
          SVar26.unknown = (undefined *)*puVar2;
          uVar56 = puVar2[1];
          SVar64 = *(String *)(puVar2 + 2);
          _swift_bridgeObjectRetain(puVar2[3]);
          _swift_bridgeObjectRelease(puVar50);
        }
        pvVar57 = SVar64.bridgeObject;
        _Var47.unknown = SVar64.str;
        if ((uVar56 ^ (ulong)SVar26.unknown) >> 0xe == 0) {
          _swift_bridgeObjectRelease(pvVar57);
LAB_10029e8c0:
          _swift_bridgeObjectRelease();
LAB_10029e8d0:
          pNVar20 = Foundation::URL::_bridgeToObjectiveC(UVar24);
          *(undefined8 *)(unaff_x22 + 0x38) = 0;
          IVar27 = NSFileManager::removeItemAtURL_error_(self,pNVar20,unaff_x22 + 0x38);
          uVar49 = *(undefined8 *)(unaff_x22 + 0x38);
          if ((int)IVar27 == 0) {
            Foundation::__convertNSErrorToError();
            _swift_willThrow(0);
            _swift_errorRelease(uVar49);
          }
        }
        else {
          if (((ulong)pvVar57 >> 0x3c & 1) == 0) {
            if (((ulong)pvVar57 >> 0x3d & 1) == 0) {
              if (((ulong)_Var47.unknown >> 0x3c & 1) == 0) {
                UVar28 = Swift::_StringObject::get_sharedUTF8(_Var47);
              }
              else {
                UVar28.unknown = (undefined *)(((ulong)pvVar57 & 0xfffffffffffffff) + 0x20);
              }
            }
            else {
              *(undefined **)(unaff_x22 + 0x20) = _Var47.unknown;
              *(ulong *)(unaff_x22 + 0x28) = (ulong)pvVar57 & 0xffffffffffffff;
              UVar28.unknown = (undefined *)(unaff_x22 + 0x20);
            }
            FUN_10029c130(UVar28.unknown,SVar26.unknown,uVar56,_Var47.unknown,pvVar57);
            uVar44 = (uint)SVar26.unknown;
            SVar26.unknown = UVar28.unknown;
          }
          else {
            FUN_10029b6a4(SVar26.unknown,uVar56,_Var47.unknown,pvVar57,10);
            uVar44 = (uint)uVar56;
          }
          _swift_bridgeObjectRelease(pvVar57);
          if (((uVar44 & 0xff) == 1) ||
             (FUN_10021668c(SVar26.unknown,*(undefined8 *)(unaff_x22 + 0x48)),
             ((ulong)SVar26.unknown & 1) == 0)) goto LAB_10029e8c0;
          *(String *)(unaff_x22 + 0x10) = SVar60;
          FUN_100026df4();
          bVar18 = (extension_Foundation)::Swift::StringProtocol::_contains
                             (&DAT_10042ddb8,PTR___type_metadata_for_Swift_String_100523a98,
                              PTR___type_metadata_for_Swift_String_100523a98,SVar26.unknown,
                              SVar26.unknown);
          _swift_bridgeObjectRelease();
          if (!bVar18) goto LAB_10029e8d0;
          uVar49 = *(undefined8 *)(unaff_x22 + 0xc0);
          UVar35.unknown = *(undefined **)(unaff_x22 + 0xb8);
          (*pcVar36)(*(undefined8 *)(unaff_x22 + 0xd8),*(undefined8 *)(unaff_x22 + 0xe0),
                     *(undefined8 *)(unaff_x22 + 200));
          FUN_1000087e4(uVar49,UVar35.unknown,&DAT_100558c70,&DAT_10042d4a8);
          pcVar53 = *(code **)(lVar41 + 0x30);
          uVar44 = 1;
          (*pcVar53)(UVar35.unknown,1,UVar23.unknown);
          uVar49 = *(undefined8 *)(unaff_x22 + 0xb8);
          if ((int)UVar35.unknown == 1) {
            FUN_10002a29c(uVar49,&DAT_100558c70,&DAT_10042d4a8);
            puVar50 = (undefined *)0x0;
          }
          else {
            Foundation::URLResourceValues::_get_fileSize(UVar35);
            (**(code **)(lVar41 + 8))(uVar49,UVar23.unknown);
            puVar50 = (undefined *)0x0;
            if ((uVar44 & 0xff) != 1) {
              puVar50 = UVar35.unknown;
            }
          }
          UVar35.unknown = *(undefined **)(unaff_x22 + 0xb0);
          FUN_1000087e4(*(undefined8 *)(unaff_x22 + 0xc0),UVar35.unknown,&DAT_100558c70,
                        &DAT_10042d4a8);
          (*pcVar53)(UVar35.unknown,1,UVar23.unknown);
          uVar49 = *(undefined8 *)(unaff_x22 + 0xb0);
          if ((int)UVar35.unknown == 1) {
            uVar52 = *(undefined8 *)(unaff_x22 + 0x90);
            uVar51 = *(undefined8 *)(unaff_x22 + 0x98);
            FUN_10002a29c(uVar49,&DAT_100558c70,&DAT_10042d4a8);
            (**(code **)(lVar46 + 0x38))(uVar52,1,1,uVar51);
          }
          else {
            Foundation::URLResourceValues::_get_contentModificationDate(UVar35);
            (**(code **)(lVar41 + 8))(uVar49,UVar23.unknown);
          }
          uVar49 = *(undefined8 *)(unaff_x22 + 0x98);
          uVar52 = *(undefined8 *)(unaff_x22 + 0x88);
          FUN_100007e1c(*(undefined8 *)(unaff_x22 + 0x90),uVar52,&DAT_10054b950,&DAT_10041d870);
          pcVar53 = *(code **)(lVar46 + 0x30);
          (*pcVar53)(uVar52,1,uVar49);
          uVar51 = *(undefined8 *)(unaff_x22 + 0x98);
          uVar49 = *(undefined8 *)(unaff_x22 + 0x88);
          if ((int)uVar52 == 1) {
            Foundation::Date::get_distantPast((Date)*(undefined **)(unaff_x22 + 0xa8));
            (*pcVar53)(uVar49,1,uVar51);
            if ((int)uVar49 != 1) {
              FUN_10002a29c(*(undefined8 *)(unaff_x22 + 0x88),&DAT_10054b950,&DAT_10041d870);
            }
          }
          else {
            (**(code **)(lVar46 + 0x20))(*(undefined **)(unaff_x22 + 0xa8),uVar49,uVar51);
          }
          uVar52 = *(undefined8 *)(unaff_x22 + 0xa8);
          uVar49 = *(undefined8 *)(unaff_x22 + 0x98);
          lVar41 = *(long *)(unaff_x22 + 0x80);
          iVar14 = *(int *)(lVar42 + 0x30);
          iVar15 = *(int *)(lVar42 + 0x40);
          (*pcVar40)(lVar41,*(undefined8 *)(unaff_x22 + 0xd8),*(undefined8 *)(unaff_x22 + 200));
          *(undefined **)(lVar41 + iVar14) = puVar50;
          (**(code **)(lVar46 + 0x20))(lVar41 + iVar15,uVar52,uVar49);
          puVar50 = local_f8;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((ulong)puVar50 & 1) == 0) {
            plVar1 = (long *)(local_f8 + 0x10);
            local_f8 = (undefined *)0x0;
            FUN_1001c5268(0,*plVar1 + 1,1);
          }
          uVar56 = *(ulong *)(local_f8 + 0x10);
          if (*(ulong *)(local_f8 + 0x18) >> 1 <= uVar56) {
            local_f8 = (undefined *)(ulong)(1 < *(ulong *)(local_f8 + 0x18));
            FUN_1001c5268(local_f8,uVar56 + 1,1);
          }
          uVar49 = *(undefined8 *)(unaff_x22 + 0x80);
          *(ulong *)(local_f8 + 0x10) = uVar56 + 1;
          uVar59 = (ulong)*(byte *)(lVar58 + 0x50);
          FUN_100007e1c(uVar49,local_f8 +
                               *(long *)(lVar58 + 0x48) * uVar56 +
                               (uVar59 + 0x20 & (uVar59 ^ 0xffffffffffffffff)),&DAT_1005569c8,
                        &DAT_10042aac8);
        }
        lVar55 = lVar55 + 1;
        uVar52 = *(undefined8 *)(unaff_x22 + 0xe0);
        uVar49 = *(undefined8 *)(unaff_x22 + 200);
        FUN_10002a29c(*(undefined8 *)(unaff_x22 + 0xc0),&DAT_100558c70,&DAT_10042d4a8);
        (*pcVar37)(uVar52,uVar49);
      } while (lVar55 != lVar38);
    }
    _swift_bridgeObjectRelease(IVar22);
    _swift_release(puVar19);
    lVar38 = *(long *)(local_f8 + 0x10);
    if (lVar38 == 0) {
      lVar55 = 0;
    }
    else {
      lVar55 = 0;
      lVar42 = *(long *)(unaff_x22 + 0x78);
      iVar14 = *(int *)(*(long *)(unaff_x22 + 0x50) + 0x30);
      uVar56 = (ulong)*(byte *)(*(long *)(unaff_x22 + 0x58) + 0x50);
      puVar19 = local_f8 + (uVar56 + 0x20 & (uVar56 ^ 0xffffffffffffffff));
      lVar58 = *(long *)(*(long *)(unaff_x22 + 0x58) + 0x48);
      do {
        uVar49 = *(undefined8 *)(unaff_x22 + 0x78);
        FUN_1000087e4(puVar19,uVar49,&DAT_1005569c8,&DAT_10042aac8);
        lVar39 = *(long *)(lVar42 + iVar14);
        FUN_10002a29c(uVar49,&DAT_1005569c8,&DAT_10042aac8);
        bVar18 = SCARRY8(lVar55,lVar39);
        lVar55 = lVar55 + lVar39;
        if (bVar18) {
                    /* WARNING: Does not return */
          pcVar36 = (code *)SoftwareBreakpoint(1,0x10029ee1c);
          (*pcVar36)();
        }
        puVar19 = puVar19 + lVar58;
        lVar38 = lVar38 + -1;
      } while (lVar38 != 0);
    }
    local_78[0] = local_f8;
    _swift_bridgeObjectRetain();
    FUN_10029ca10(local_78);
    puVar19 = local_78[0];
    lVar38 = *(long *)(local_78[0] + 0x10);
    if (lVar38 != 0) {
      lVar58 = *(long *)(unaff_x22 + 0xd0);
      lVar46 = *(long *)(unaff_x22 + 0xa0);
      lVar45 = *(long *)(unaff_x22 + 0x70);
      lVar42 = *(long *)(unaff_x22 + 0x50);
      iVar14 = *(int *)(lVar42 + 0x30);
      iVar15 = *(int *)(lVar42 + 0x40);
      uVar56 = (ulong)*(byte *)(*(long *)(unaff_x22 + 0x58) + 0x50);
      puVar50 = local_78[0] + (uVar56 + 0x20 & (uVar56 ^ 0xffffffffffffffff));
      lVar39 = *(long *)(*(long *)(unaff_x22 + 0x58) + 0x48);
      do {
        uVar51 = *(undefined8 *)(unaff_x22 + 200);
        uVar52 = *(undefined8 *)(unaff_x22 + 0x98);
        lVar41 = *(long *)(unaff_x22 + 0x68);
        uVar49 = *(undefined8 *)(unaff_x22 + 0x70);
        FUN_1000087e4(puVar50,uVar49,&DAT_1005569c8,&DAT_10042aac8);
        lVar48 = *(long *)(lVar45 + iVar14);
        iVar16 = *(int *)(lVar42 + 0x30);
        iVar17 = *(int *)(lVar42 + 0x40);
        (**(code **)(lVar58 + 0x20))(lVar41,uVar49,uVar51);
        *(long *)(lVar41 + iVar16) = lVar48;
        (**(code **)(lVar46 + 0x20))(lVar41 + iVar17,lVar45 + iVar15,uVar52);
        if (lVar55 < 0xc0000001) {
          FUN_10002a29c(*(undefined8 *)(unaff_x22 + 0x68),&DAT_1005569c8,&DAT_10042aac8);
        }
        else {
          uVar52 = *(undefined8 *)(unaff_x22 + 200);
          uVar49 = *(undefined8 *)(unaff_x22 + 0x98);
          lVar41 = *(long *)(unaff_x22 + 0x60);
          UVar24.unknown = *(undefined **)(unaff_x22 + 0x68);
          FUN_1000087e4(UVar24.unknown,lVar41,&DAT_1005569c8,&DAT_10042aac8);
          iVar16 = *(int *)(lVar42 + 0x40);
          pNVar20 = Foundation::URL::_bridgeToObjectiveC(UVar24);
          (**(code **)(lVar46 + 8))(lVar41 + iVar16,uVar49);
          (*pcVar37)(lVar41,uVar52);
          *(undefined8 *)(unaff_x22 + 0x40) = 0;
          IVar22 = NSFileManager::removeItemAtURL_error_(self,pNVar20,unaff_x22 + 0x40);
          uVar49 = *(undefined8 *)(unaff_x22 + 0x40);
          if ((int)IVar22 == 0) {
            Foundation::__convertNSErrorToError();
            _swift_willThrow(0);
            _swift_errorRelease(uVar49);
          }
          FUN_10002a29c(*(undefined8 *)(unaff_x22 + 0x68),&DAT_1005569c8,&DAT_10042aac8);
          bVar18 = SBORROW8(lVar55,lVar48);
          lVar55 = lVar55 - lVar48;
          if (bVar18) {
                    /* WARNING: Does not return */
            pcVar36 = (code *)SoftwareBreakpoint(1,0x10029ed20);
            (*pcVar36)();
          }
        }
        puVar50 = puVar50 + lVar39;
        lVar38 = lVar38 + -1;
      } while (lVar38 != 0);
    }
    _swift_bridgeObjectRelease(local_f8);
    _swift_release(puVar19);
  }
  uVar49 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar52 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar51 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar43 = *(undefined8 *)(unaff_x22 + 0x60);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xf0));
  _swift_task_dealloc(uVar49);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar52);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar51);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar43);
  if (*(long *)PTR____stack_chk_guard_100521138 == local_68) {
                    /* WARNING: Could not recover jumptable at 0x00010029ee14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

