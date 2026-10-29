// rea decompile_all
// name: FUN_100237018
// address: 0x100237018
// body: available
// range: 0x100237018-0x100237a5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100237018(long param_1,code *param_2)

{
  String *pSVar1;
  long *plVar2;
  ulong uVar3;
  bool bVar4;
  uint uVar5;
  Logger LVar6;
  DispatchWorkItemFlags DVar7;
  DispatchQoS DVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  char **ppcVar15;
  OS_os_log *pOVar16;
  OS_os_log *pOVar17;
  undefined4 *puVar18;
  ID IVar19;
  NSString *pNVar20;
  Dictionary<undefined,undefined> DVar21;
  Dictionary<undefined,undefined> DVar22;
  code *pcVar23;
  char **ppcVar24;
  char *pcVar25;
  char **ppcVar26;
  char *pcVar27;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *pcVar28;
  ulong uVar29;
  ulong uVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  ID self;
  undefined *puVar36;
  long lVar37;
  ulong *puVar38;
  float fVar39;
  double dVar40;
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
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  char *local_1c0;
  char *local_1b8;
  char *local_1b0;
  ulong *local_1a8;
  undefined *local_1a0;
  long local_198;
  ulong local_190;
  long local_188;
  long local_180;
  char *local_178;
  code *local_170;
  long local_168;
  undefined *local_160;
  long local_158;
  char **local_150;
  long local_148;
  void *local_140;
  char *local_138;
  code *local_130;
  DispatchWorkItemFlags local_128;
  char *local_120;
  undefined *local_118;
  code *local_110;
  undefined *puStack_108;
  code *local_100;
  undefined *local_f8;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  
  local_130 = param_2;
  LVar6 = os::Logger::typeMetadataAccessor();
  lVar33 = *(long *)(LVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar33 + 0x40));
  lVar35 = (long)&local_1d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar7 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar34 = *(long *)(DVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar34 + 0x40));
  lVar37 = lVar35 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar8 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar31 = *(long *)(DVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar31 + 0x40));
  local_128.unknown = (undefined *)(lVar37 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  _swift_beginAccess(param_1 + 0x10,auStack_90,0,0);
  pcVar28 = (code *)(param_1 + 0x10);
  _swift_unknownObjectWeakLoadStrong();
  lVar32 = _TtC7Wallper21VideoWallpaperManager::globalHolds;
  if (pcVar28 != (code *)0x0) {
    _swift_beginAccess(pcVar28 + _TtC7Wallper21VideoWallpaperManager::globalHolds,auStack_a8,0,0);
    uVar9 = 3;
    FUN_100216724(3,*(undefined8 *)(pcVar28 + lVar32));
    lVar32 = _TtC7Wallper21VideoWallpaperManager::players;
    if ((uVar9 & 1) == 0) {
      pcVar27 = (char *)0x0;
      local_168 = lVar31;
      local_160 = DVar8.unknown;
      _swift_beginAccess(pcVar28 + _TtC7Wallper21VideoWallpaperManager::players,auStack_c0,0);
      lVar31 = *(long *)(pcVar28 + lVar32);
      lVar32 = lVar31;
      local_110 = pcVar28;
      _swift_bridgeObjectRetain();
      pcVar23 = FUN_100259ea0;
      ppcVar26 = &local_120;
      FUN_100257abc();
      _swift_bridgeObjectRelease(lVar31);
      if (*(long *)(lVar32 + 0x10) == 0) {
        _swift_release(lVar32);
      }
      else {
        puVar38 = (ulong *)(lVar32 + 0x40);
        uVar30 = 1L << ((ulong)*(byte *)(lVar32 + 0x20) & 0x3f);
        uVar9 = 0xffffffffffffffff;
        if ((*(byte *)(lVar32 + 0x20) & 0x3f) < 6) {
          uVar9 = ~(-1L << (uVar30 & 0x3f));
        }
        uVar9 = uVar9 & *puVar38;
        uVar30 = uVar30 + 0x3f >> 6;
        local_148 = lVar32;
        local_170 = pcVar28;
        local_180 = lVar34;
        local_188 = lVar37;
        if ((long)local_130 < 1) {
          lVar32 = 0;
          do {
            while (uVar9 == 0) {
              bVar4 = SCARRY8(lVar32,1);
              lVar32 = lVar32 + 1;
              if (bVar4) {
                    /* WARNING: Does not return */
                pcVar28 = (code *)SoftwareBreakpoint(1,0x100237a5c);
                (*pcVar28)();
              }
              if ((long)uVar30 <= lVar32) {
                _swift_release(local_148);
                FUN_100236d58(local_130 + 1);
                return;
              }
              uVar9 = puVar38[lVar32];
            }
            uVar3 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
            uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
            uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
            uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
            uVar29 = LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) | lVar32 << 6;
            plVar2 = (long *)(*(long *)(local_148 + 0x30) + uVar29 * 0x10);
            lVar31 = *plVar2;
            uVar3 = plVar2[1];
            self = *(ID *)(*(long *)(local_148 + 0x38) + uVar29 * 8);
            _swift_bridgeObjectRetain(uVar3);
            IVar19 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
            pNVar20 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
            IVar19 = NSUserDefaults::dictionaryForKey_(IVar19,pNVar20);
            if (IVar19 == 0) {
              puVar36 = PTR___swiftEmptyDictionarySingleton_100524198;
              if (*(long *)(PTR___swiftEmptyDictionarySingleton_100524198 + 0x10) != 0)
              goto LAB_1002379b8;
LAB_1002379ec:
              _swift_bridgeObjectRelease(puVar36);
              dVar40 = 1.0;
LAB_1002379f8:
              fVar39 = (float)dVar40;
            }
            else {
              DVar21 = (extension_Foundation)::Swift::Dictionary::
                       __unconditionallyBridgeFromObjectiveC();
              DVar22 = DVar21;
              FUN_10017dc34();
              _swift_bridgeObjectRelease(DVar21.unknown);
              puVar36 = PTR___swiftEmptyDictionarySingleton_100524198;
              if (DVar22.unknown != (undefined *)0x0) {
                puVar36 = DVar22.unknown;
              }
              if (*(long *)(puVar36 + 0x10) == 0) goto LAB_1002379ec;
LAB_1002379b8:
              uVar29 = uVar3;
              FUN_10000464c();
              if ((uVar29 & 1) == 0) goto LAB_1002379ec;
              dVar40 = *(double *)(*(long *)(puVar36 + 0x38) + lVar31 * 8);
              _swift_bridgeObjectRelease(puVar36);
              fVar39 = 1.0;
              if (0.0 < dVar40) goto LAB_1002379f8;
            }
            uVar9 = uVar9 - 1 & uVar9;
            objc_stub::playImmediatelyAtRate_(self,(ulong)(uint)fVar39);
            _swift_bridgeObjectRelease(uVar3);
          } while( true );
        }
        lVar31 = 0;
        local_1b0 = "Playback speed for ";
        local_1b8 = s_did_not_resume_after_wake_rebuil_1004e2ac0 + 0x10;
        local_1c0 = (char *)0x6b63616279616c50;
        uStack_1c8 = 0;
        local_1d0 = 0x8220102;
        local_150 = (char **)LVar6;
        local_158 = lVar33;
        local_190 = uVar30;
        local_198 = lVar35;
        local_1a0 = DVar7.unknown;
        local_1a8 = puVar38;
        while( true ) {
          for (; uVar9 != 0; uVar9 = uVar9 - 1 & uVar9) {
            uVar30 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
            uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 | (uVar30 & 0x3333333333333333) << 2;
            uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
            uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
            pSVar1 = (String *)
                     (*(long *)(lVar32 + 0x30) + LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) * 0x10 +
                     lVar31 * 0x400);
            pcVar25 = pSVar1->str;
            pcVar28 = pSVar1->bridgeObject;
            SVar48 = *pSVar1;
            local_120 = (char *)0x0;
            local_118 = (void *)0xe000000000000000;
            _swift_bridgeObjectRetain(pcVar28);
            Swift::_StringGuts::grow(0x35,(_StringGuts)pcVar23);
            SVar42.bridgeObject = (void *)0xea0000000000203a;
            SVar42.str = local_1c0;
            SVar50.bridgeObject = pcVar27;
            SVar50.str = (char *)ppcVar26;
            Swift::String::append(SVar42,SVar50);
            SVar51.bridgeObject = pcVar27;
            SVar51.str = (char *)ppcVar26;
            local_138 = pcVar25;
            local_130 = pcVar28;
            Swift::String::append(SVar48,SVar51);
            SVar41.bridgeObject = (void *)((ulong)local_1b0 | 0x8000000000000000);
            uVar10 = 0x1000000000000029;
            SVar41.str = (char *)0x1000000000000029;
            SVar52.bridgeObject = pcVar27;
            SVar52.str = (char *)ppcVar26;
            Swift::String::append(SVar41,SVar52);
            puVar36 = local_118;
            SVar48.bridgeObject = local_118;
            SVar48.str = local_120;
            local_120 = (char *)0x5b;
            local_118 = (undefined *)0xe100000000000000;
            local_e0 = 0xe100000000000000;
            local_d8 = (undefined *)0x4e524157;
            local_d0 = 0xe400000000000000;
            local_e8 = 0x20;
            FUN_100026df4();
            pcVar25 = (char *)0x0;
            puVar13 = PTR___type_metadata_for_Swift_String_100523a98;
            SVar42 = (extension_Foundation)::Swift::StringProtocol::_padding
                               (6,&local_e8,0,PTR___type_metadata_for_Swift_String_100523a98,
                                PTR___type_metadata_for_Swift_String_100523a98,uVar10,uVar10);
            SVar53.bridgeObject = puVar13;
            SVar53.str = pcVar25;
            Swift::String::append(SVar42,SVar53);
            _swift_bridgeObjectRelease(SVar42.bridgeObject);
            SVar43.bridgeObject = (void *)0xe300000000000000;
            SVar43.str = (char *)0x5b205d;
            SVar54.bridgeObject = puVar13;
            SVar54.str = pcVar25;
            Swift::String::append(SVar43,SVar54);
            SVar44.bridgeObject = (void *)0xe800000000000000;
            SVar44.str = (char *)0x6b63616279616c70;
            SVar55.bridgeObject = puVar13;
            SVar55.str = pcVar25;
            Swift::String::append(SVar44,SVar55);
            SVar45.bridgeObject = (void *)0xe200000000000000;
            SVar45.str = (char *)0x205d;
            SVar56.bridgeObject = puVar13;
            SVar56.str = pcVar25;
            Swift::String::append(SVar45,SVar56);
            local_140 = puVar36;
            SVar57.bridgeObject = puVar13;
            SVar57.str = pcVar25;
            Swift::String::append(SVar48,SVar57);
            puVar36 = local_118;
            pcVar27 = local_120;
            local_120 = (char *)0x282020;
            local_118 = (undefined *)0xe300000000000000;
            SVar46.bridgeObject = (void *)((ulong)local_1b8 | 0x8000000000000000);
            SVar46.str = &DAT_d000000000000028;
            SVar58.bridgeObject = puVar13;
            SVar58.str = pcVar25;
            Swift::String::append(SVar46,SVar58);
            SVar47.bridgeObject = (void *)0xe100000000000000;
            SVar47.str = (char *)0x3a;
            SVar59.bridgeObject = puVar13;
            SVar59.str = pcVar25;
            Swift::String::append(SVar47,SVar59);
            local_d8 = (undefined *)0xf5;
            SVar48 = Swift::CustomStringConvertible::get_description();
            SVar60.bridgeObject = puVar13;
            SVar60.str = pcVar25;
            Swift::String::append(SVar48,SVar60);
            _swift_bridgeObjectRelease(SVar48.bridgeObject);
            SVar49.bridgeObject = (void *)0xe100000000000000;
            SVar49.str = (char *)0x29;
            SVar61.bridgeObject = puVar13;
            SVar61.str = pcVar25;
            Swift::String::append(SVar49,SVar61);
            puVar13 = local_118;
            pcVar25 = local_120;
            if (DAT_100559018 != -1) {
              _swift_once(&DAT_100559018,FUN_1002854a0);
            }
            puVar11 = &DAT_100535568;
            _swift_allocObject(&DAT_100535568,0x30,7);
            local_178 = pcVar27;
            *(char **)(puVar11 + 0x10) = pcVar27;
            *(undefined **)(puVar11 + 0x18) = puVar36;
            *(char **)(puVar11 + 0x20) = pcVar25;
            *(undefined **)(puVar11 + 0x28) = puVar13;
            local_100 = thunk_FUN_100099310;
            local_120 = PTR___NSConcreteStackBlock_100521110;
            local_118 = (undefined *)0x42000000;
            local_110 = FUN_1000c7e7c;
            puStack_108 = &DAT_100535580;
            local_f8 = puVar11;
            pcVar25 = __Block_copy(&local_120);
            DVar8.unknown = puVar36;
            _swift_bridgeObjectRetain();
            DVar7.unknown = local_128.unknown;
            Dispatch::DispatchQoS::get_unspecified(DVar8);
            local_d8 = PTR___swiftEmptyArrayStorage_100524190;
            puVar12 = &DAT_100553db0;
            FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                          PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8
                         );
            puVar13 = &DAT_100561080;
            FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
            puVar14 = puVar13;
            FUN_100077ac0();
            lVar32 = local_188;
            puVar11 = local_1a0;
            Swift::SetAlgebra::_init(local_188,&local_d8,puVar13,puVar14,local_1a0,puVar12);
            pcVar27 = pcVar25;
            (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar7);
            __Block_release(pcVar25);
            (**(code **)(local_180 + 8))(lVar32,puVar11);
            (**(code **)(local_168 + 8))(DVar7.unknown,local_160);
            _swift_release(local_f8);
            if (DAT_100559020 != -1) {
              _swift_once(&DAT_100559020,FUN_100285420);
            }
            ppcVar24 = local_150;
            ppcVar15 = local_150;
            FUN_100099338(local_150,&DAT_100558f50);
            lVar33 = local_158;
            lVar32 = local_198;
            lVar34 = local_198;
            ppcVar26 = ppcVar24;
            (**(code **)(local_158 + 0x10))(local_198,ppcVar15);
            uVar5 = (uint)lVar34;
            static_(extension_in_os):__C.os_log_type_t.default.getter_:___C.os_log_type_t::
            _get_default();
            LVar6.unknown = puVar36;
            _swift_bridgeObjectRetain();
            pOVar16 = os::Logger::get_logObject(LVar6);
            pOVar17 = pOVar16;
            _os_log_type_enabled(pOVar16,uVar5 & 0xff);
            if ((int)pOVar17 == 0) {
              _swift_bridgeObjectRelease_n(puVar36,2);
              pcVar28 = *(code **)(lVar33 + 8);
            }
            else {
              puVar18 = (undefined4 *)0xc;
              _swift_slowAlloc(0xc,0xffffffffffffffff);
              pcVar25 = (char *)0x20;
              _swift_slowAlloc(0x20,0xffffffffffffffff);
              *puVar18 = (int)local_1d0;
              pcVar27 = local_178;
              local_120 = pcVar25;
              FUN_10012dbb0(local_178,puVar36,&local_120);
              *(char **)(puVar18 + 1) = pcVar27;
              _swift_bridgeObjectRelease_n(puVar36,2);
              pcVar27 = "%{public}s";
              __os_log_impl(0x100000000,pOVar16,uVar5 & 0xff,"%{public}s",puVar18,0xc);
              FUN_100043f24(pcVar25);
              lVar33 = local_158;
              _swift_slowDealloc(pcVar25,0xffffffffffffffff,0xffffffffffffffff);
              ppcVar26 = (char **)0xffffffffffffffff;
              _swift_slowDealloc(puVar18,0xffffffffffffffff);
              pcVar28 = *(code **)(lVar33 + 8);
              ppcVar24 = local_150;
            }
            (*pcVar28)(lVar32,ppcVar24);
            _swift_bridgeObjectRelease(local_140);
            pcVar28 = local_130;
            lVar32 = local_148;
            puVar38 = local_1a8;
            pcVar23 = local_130;
            FUN_10023382c(local_138);
            _swift_bridgeObjectRelease(pcVar28);
          }
          bVar4 = SCARRY8(lVar31,1);
          lVar31 = lVar31 + 1;
          if (bVar4) {
                    /* WARNING: Does not return */
            pcVar28 = (code *)SoftwareBreakpoint(1,0x100237a58);
            (*pcVar28)();
          }
          if ((long)local_190 <= lVar31) break;
          uVar9 = puVar38[lVar31];
        }
        _swift_release(lVar32);
      }
    }
  }
  return;
}

