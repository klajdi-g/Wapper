// rea decompile_all
// name: FUN_10023b5ec
// address: 0x10023b5ec
// body: available
// range: 0x10023b5ec-0x10023be1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_10023b5ec(ulong param_1,long param_2)

{
  String *pSVar1;
  undefined8 *puVar2;
  long *plVar3;
  _StringGuts _Var4;
  _StringGuts _Var5;
  byte bVar6;
  String SVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  long lVar14;
  long *plVar15;
  Hasher HVar16;
  ulong uVar17;
  code *pcVar18;
  undefined *puVar19;
  undefined *puVar20;
  ulong uVar21;
  ID self;
  ID IVar22;
  NSString *pNVar23;
  Dictionary<undefined,undefined> DVar24;
  Dictionary<undefined,undefined> DVar25;
  Hasher HVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  long unaff_x20;
  long lVar31;
  undefined *puVar32;
  long lVar33;
  undefined *puVar34;
  ulong *puVar35;
  float fVar36;
  double dVar37;
  code *local_130;
  long local_f8 [4];
  long local_d8 [9];
  undefined1 auStack_90 [32];
  
  lVar8 = _TtC7Wallper21VideoWallpaperManager::holds;
  _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::holds,auStack_90,0,0);
  lVar14 = *(long *)(unaff_x20 + lVar8);
  _swift_bridgeObjectRetain();
  thunk_FUN_1001f0148();
  local_d8[0] = lVar14;
  _swift_bridgeObjectRetain(param_2);
  FUN_100232e08();
  lVar9 = local_d8[0];
  lVar14 = 0;
  puVar35 = (ulong *)(local_d8[0] + 0x38);
  local_130 = (code *)0x0;
  uVar28 = 1L << ((ulong)*(byte *)(local_d8[0] + 0x20) & 0x3f);
  uVar30 = 0xffffffffffffffff;
  if ((*(byte *)(local_d8[0] + 0x20) & 0x3f) < 6) {
    uVar30 = ~(-1L << (uVar28 & 0x3f));
  }
  uVar30 = uVar30 & *puVar35;
  puVar20 = PTR___swiftEmptyArrayStorage_100524190;
joined_r0x00010023b6c8:
  do {
    if (uVar30 != 0) {
      uVar17 = (uVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar30 & 0x5555555555555555) << 1;
      uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
      uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
      uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
      pSVar1 = (String *)
               (*(long *)(lVar9 + 0x30) + LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) * 0x10 +
               lVar14 * 0x400);
      plVar3 = (long *)pSVar1->str;
      puVar32 = pSVar1->bridgeObject;
      SVar7 = *pSVar1;
      lVar31 = *(long *)(unaff_x20 + lVar8);
      lVar33 = *(long *)(lVar31 + 0x10);
      _swift_bridgeObjectRetain_n(lVar31,2);
      _swift_bridgeObjectRetain(puVar32);
      puVar34 = PTR___swiftEmptySetSingleton_1005241a0;
      if ((lVar33 != 0) &&
         (plVar15 = plVar3, puVar19 = puVar32, FUN_10000464c(),
         puVar34 = PTR___swiftEmptySetSingleton_1005241a0, ((ulong)puVar19 & 1) != 0)) {
        puVar34 = *(undefined **)(*(long *)(lVar31 + 0x38) + (long)plVar15 * 8);
        _swift_bridgeObjectRetain(puVar34);
      }
      uVar30 = uVar30 - 1 & uVar30;
      HVar26.unknown = (undefined *)0x2;
      _swift_bridgeObjectRelease_n(lVar31);
      if (*(long *)(puVar34 + 0x10) != 0) {
        Swift::Hasher::init(*(__int64 *)(puVar34 + 0x28));
        HVar16.unknown = (undefined *)(param_1 & 0xff);
        Swift::Hasher::_combine((__uint64)HVar16.unknown,HVar26);
        uVar17 = Swift::Hasher::_finalize(HVar16);
        uVar29 = -1L << ((ulong)(byte)puVar34[0x20] & 0x3f);
        uVar17 = uVar17 & (uVar29 ^ 0xffffffffffffffff);
        if ((*(ulong *)(puVar34 + (uVar17 >> 6) * 8 + 0x38) >> (uVar17 & 0x3f) & 1) != 0) {
          do {
            if ((uint)*(byte *)(*(long *)(puVar34 + 0x30) + uVar17) == ((uint)param_1 & 0xff)) {
              _swift_bridgeObjectRelease(puVar34);
              if (*(long *)(param_2 + 0x10) == 0) goto LAB_10023b960;
              bVar11 = true;
              goto LAB_10023b818;
            }
            uVar17 = uVar17 + 1 & ~uVar29;
          } while ((*(ulong *)(puVar34 + (uVar17 >> 6) * 8 + 0x38) >> (uVar17 & 0x3f) & 1) != 0);
        }
      }
      _swift_bridgeObjectRelease(puVar34);
      if (*(long *)(param_2 + 0x10) != 0) {
        bVar11 = false;
LAB_10023b818:
        Swift::Hasher::init(*(__int64 *)(param_2 + 0x28));
        HVar26.unknown = (undefined *)local_d8;
        Swift::String::hash(HVar26,SVar7);
        uVar17 = Swift::Hasher::_finalize(HVar26);
        uVar29 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
        uVar17 = uVar17 & (uVar29 ^ 0xffffffffffffffff);
        if ((*(ulong *)(param_2 + 0x38 + (uVar17 >> 6) * 8) >> (uVar17 & 0x3f) & 1) != 0) {
          do {
            puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar17 * 0x10);
            _Var4.unknown = (undefined *)*puVar2;
            _Var5.unknown = (undefined *)puVar2[1];
            if (((long *)_Var4.unknown == plVar3 && _Var5.unknown == puVar32) ||
               (bVar12 = Swift::_stringCompareWithSmolCheck
                                   (_Var4,_Var5,(_StringComparisonResult)(__int8)plVar3), bVar12)) {
              if (bVar11) goto LAB_10023b6bc;
              _swift_beginAccess(unaff_x20 + lVar8,local_d8,0x21,0);
              FUN_10002f6dc(local_130,0);
              uVar13 = (uint)*(undefined8 *)(unaff_x20 + lVar8);
              _swift_isUniquelyReferenced_nonNull_native();
              lVar33 = *(long *)(unaff_x20 + lVar8);
              *(undefined8 *)(unaff_x20 + lVar8) = 0x8000000000000000;
              puVar34 = puVar32;
              local_f8[0] = lVar33;
              FUN_10000464c(plVar3);
              uVar17 = (ulong)~(uint)puVar34 & 1;
              lVar31 = *(long *)(lVar33 + 0x10) + uVar17;
              if (SCARRY8(*(long *)(lVar33 + 0x10),uVar17)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x10023be0c);
                (*pcVar10)();
              }
              if (*(long *)(lVar33 + 0x18) < lVar31) {
                FUN_1001ce184(lVar31,uVar13);
                lVar33 = local_f8[0];
                puVar19 = puVar32;
                FUN_10000464c(plVar3);
                if (((uint)puVar34 & 1) != ((uint)puVar19 & 1)) {
                  Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x10023be1c);
                  (*pcVar10)();
                }
              }
              else if ((uVar13 & 1) == 0) {
                FUN_1001cb3a0();
                puVar34 = (undefined *)((ulong)puVar34 & 0xffffffff);
                lVar33 = local_f8[0];
              }
              *(long *)(unaff_x20 + lVar8) = lVar33;
              if (((ulong)puVar34 & 1) == 0) {
                thunk_FUN_1002a7954();
                _swift_bridgeObjectRetain(puVar32);
              }
              FUN_1001ca26c(*(undefined8 *)(lVar33 + 0x38),local_f8,param_1);
              _swift_endAccess(local_d8);
              local_130 = FUN_10023afd8;
              goto LAB_10023ba24;
            }
            uVar17 = uVar17 + 1 & ~uVar29;
          } while ((*(ulong *)(param_2 + 0x38 + (uVar17 >> 6) * 8) >> (uVar17 & 0x3f) & 1) != 0);
        }
        if (bVar11) {
LAB_10023b960:
          pcVar10 = (code *)local_d8;
          FUN_10023317c();
          pcVar18 = (code *)local_f8;
          plVar15 = plVar3;
          FUN_10023be1c(pcVar18,plVar3,puVar32);
          if (*plVar15 != 0) {
            FUN_1002274b0(param_1);
          }
          (*pcVar18)(local_f8,0);
          (*pcVar10)(local_d8,0);
LAB_10023ba24:
          puVar34 = puVar20;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar19 = puVar20;
          if (((ulong)puVar34 & 1) == 0) {
            puVar19 = (undefined *)0x0;
            FUN_1001c432c(0,*(long *)(puVar20 + 0x10) + 1,1,puVar20);
          }
          uVar17 = *(ulong *)(puVar19 + 0x10);
          puVar20 = puVar19;
          if (*(ulong *)(puVar19 + 0x18) >> 1 <= uVar17) {
            puVar20 = (undefined *)(ulong)(1 < *(ulong *)(puVar19 + 0x18));
            FUN_1001c432c(puVar20,uVar17 + 1,1,puVar19);
          }
          *(ulong *)(puVar20 + 0x10) = uVar17 + 1;
          *(long **)(puVar20 + uVar17 * 0x10 + 0x20) = plVar3;
          *(undefined **)(puVar20 + uVar17 * 0x10 + 0x28) = puVar32;
          goto joined_r0x00010023b6c8;
        }
      }
LAB_10023b6bc:
      _swift_bridgeObjectRelease(puVar32);
      goto joined_r0x00010023b6c8;
    }
    bVar11 = SCARRY8(lVar14,1);
    lVar14 = lVar14 + 1;
    if (bVar11) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x10023be04);
      (*pcVar10)();
    }
    if ((long)(uVar28 + 0x3f >> 6) <= lVar14) break;
    uVar30 = puVar35[lVar14];
  } while( true );
  _swift_release(lVar9);
  lVar9 = _TtC7Wallper21VideoWallpaperManager::players;
  lVar14 = _TtC7Wallper21VideoWallpaperManager::wantsPlaying;
  uVar30 = *(ulong *)(puVar20 + 0x10);
  if (uVar30 != 0) {
    _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::players,local_d8,0,0);
    _swift_beginAccess(unaff_x20 + lVar14,local_f8,0,0);
    uVar28 = 0;
    puVar35 = (ulong *)(puVar20 + 0x28);
    do {
      if (*(ulong *)(puVar20 + 0x10) <= uVar28) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x10023be08);
        (*pcVar10)();
      }
      lVar31 = *(long *)(unaff_x20 + lVar9);
      if (*(long *)(lVar31 + 0x10) != 0) {
        uVar17 = puVar35[-1];
        uVar29 = *puVar35;
        _swift_bridgeObjectRetain(uVar29);
        _swift_bridgeObjectRetain(lVar31);
        uVar21 = uVar17;
        uVar27 = uVar29;
        FUN_10000464c();
        if ((uVar27 & 1) == 0) {
          _swift_bridgeObjectRelease(uVar29);
          _swift_bridgeObjectRelease(lVar31);
        }
        else {
          self = *(ID *)(*(long *)(lVar31 + 0x38) + uVar21 * 8);
          _swift_bridgeObjectRelease(lVar31);
          lVar31 = *(long *)(unaff_x20 + lVar14);
          if (*(long *)(lVar31 + 0x10) == 0) {
LAB_10023bbd4:
            lVar31 = *(long *)(unaff_x20 + lVar8);
            if (*(long *)(lVar31 + 0x10) != 0) {
              _swift_bridgeObjectRetain(lVar31);
              uVar21 = uVar17;
              uVar27 = uVar29;
              FUN_10000464c();
              if ((uVar27 & 1) == 0) {
                _swift_bridgeObjectRelease(lVar31);
              }
              else {
                lVar33 = *(long *)(*(long *)(lVar31 + 0x38) + uVar21 * 8);
                _swift_bridgeObjectRetain(lVar33);
                _swift_bridgeObjectRelease(lVar31);
                lVar31 = *(long *)(lVar33 + 0x10);
                _swift_bridgeObjectRelease(lVar33);
                if (lVar31 != 0) goto LAB_10023bc28;
              }
            }
            IVar22 = objc_stub::timeControlStatus(self);
            if (IVar22 != 2) {
              IVar22 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
              pNVar23 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
              IVar22 = NSUserDefaults::dictionaryForKey_(IVar22,pNVar23);
              puVar32 = PTR___swiftEmptyDictionarySingleton_100524198;
              if (IVar22 != 0) {
                DVar24 = (extension_Foundation)::Swift::Dictionary::
                         __unconditionallyBridgeFromObjectiveC();
                DVar25 = DVar24;
                FUN_10017dc34();
                _swift_bridgeObjectRelease(DVar24.unknown);
                puVar32 = PTR___swiftEmptyDictionarySingleton_100524198;
                if (DVar25.unknown != (undefined *)0x0) {
                  puVar32 = DVar25.unknown;
                }
              }
              if ((*(long *)(puVar32 + 0x10) == 0) ||
                 (uVar21 = uVar29, FUN_10000464c(), (uVar21 & 1) == 0)) {
                _swift_bridgeObjectRelease(puVar32);
                dVar37 = 1.0;
LAB_10023bd8c:
                fVar36 = (float)dVar37;
              }
              else {
                dVar37 = *(double *)(*(long *)(puVar32 + 0x38) + uVar17 * 8);
                _swift_bridgeObjectRelease(puVar32);
                fVar36 = 1.0;
                if (0.0 < dVar37) goto LAB_10023bd8c;
              }
              objc_stub::playImmediatelyAtRate_(self,fVar36);
              _swift_bridgeObjectRelease(uVar29);
              goto LAB_10023bb28;
            }
          }
          else {
            _swift_bridgeObjectRetain(lVar31);
            uVar21 = uVar17;
            uVar27 = uVar29;
            FUN_10000464c();
            if ((uVar27 & 1) == 0) {
              _swift_bridgeObjectRelease(lVar31);
              goto LAB_10023bbd4;
            }
            bVar6 = *(byte *)(*(long *)(lVar31 + 0x38) + uVar21);
            _swift_bridgeObjectRelease(lVar31);
            if ((bVar6 & 1) != 0) goto LAB_10023bbd4;
LAB_10023bc28:
            IVar22 = objc_stub::timeControlStatus(self);
            if (IVar22 != 0) {
              objc_stub::pause(self);
            }
          }
          _swift_bridgeObjectRelease(uVar29);
        }
      }
LAB_10023bb28:
      uVar28 = uVar28 + 1;
      puVar35 = puVar35 + 2;
    } while (uVar30 != uVar28);
    FUN_10023c3ec(0);
    FUN_10023bec0(0,0);
  }
  _swift_bridgeObjectRelease(puVar20);
  FUN_10002f6dc(local_130,0);
  return;
}

