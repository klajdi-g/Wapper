// rea decompile_all
// name: FUN_10015d2c8
// address: 0x10015d2c8
// body: available
// range: 0x10015d2c8-0x10015e0bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10015d2c8(void)

{
  String *pSVar1;
  long *plVar2;
  undefined *puVar3;
  byte bVar4;
  String SVar5;
  bool bVar6;
  int iVar7;
  Task TVar8;
  _StringGuts _Var9;
  ulong uVar10;
  void *pvVar11;
  OS_os_log *pOVar12;
  undefined *puVar13;
  undefined *puVar14;
  DispatchQoS DVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  Logger LVar18;
  OS_os_log *pOVar19;
  undefined4 *puVar20;
  _StringGuts _Var21;
  char *pcVar22;
  _StringGuts _Var23;
  ulong uVar24;
  undefined8 uVar25;
  long lVar26;
  Published *pPVar27;
  undefined8 uVar28;
  char *pcVar29;
  undefined8 uVar30;
  long unaff_x22;
  undefined8 uVar31;
  DispatchWorkItemFlags DVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  uint uVar35;
  long lVar36;
  undefined8 uVar37;
  void *pvVar38;
  undefined8 uVar39;
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
  String SVar71;
  String SVar72;
  String SVar73;
  String SVar74;
  char *local_98;
  void *local_70;
  char *local_68;
  undefined *local_60;
  
  TVar8.unknown = *(undefined **)(unaff_x22 + 0x398);
  _swift_release();
  bVar6 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar8);
  if (bVar6) {
    local_70 = *(void **)(unaff_x22 + 1000);
  }
  else {
    lVar36 = *(long *)(unaff_x22 + 0x2f8);
    pvVar38 = *(void **)(unaff_x22 + 0x2e8);
    _Var9.unknown = *(undefined **)(unaff_x22 + 0x2e0);
    _Var21.unknown = *(undefined **)(unaff_x22 + 0x2d8);
    _Var23.unknown = *(undefined **)(unaff_x22 + 0x2d0);
    plVar2 = (long *)(*(long *)(unaff_x22 + 0x2b8) + _TtC7Wallper13LyricsManager::track);
    puVar13 = (undefined *)*plVar2;
    puVar3 = (undefined *)plVar2[1];
    pcVar22 = (char *)plVar2[2];
    pvVar11 = (void *)plVar2[3];
    puVar14 = (undefined *)plVar2[4];
    lVar26 = plVar2[5];
    *(undefined **)(unaff_x22 + 0xd0) = _Var23.unknown;
    *(undefined **)(unaff_x22 + 0xd8) = _Var21.unknown;
    *(undefined **)(unaff_x22 + 0xe0) = _Var9.unknown;
    *(void **)(unaff_x22 + 0xe8) = pvVar38;
    *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(unaff_x22 + 0x2f0);
    *(long *)(unaff_x22 + 0xf8) = lVar36;
    *(undefined **)(unaff_x22 + 0x100) = puVar13;
    *(undefined **)(unaff_x22 + 0x108) = puVar3;
    *(char **)(unaff_x22 + 0x110) = pcVar22;
    *(void **)(unaff_x22 + 0x118) = pvVar11;
    *(undefined **)(unaff_x22 + 0x120) = puVar14;
    *(long *)(unaff_x22 + 0x128) = lVar26;
    if (puVar3 == (undefined *)0x0) {
      uVar25 = *(undefined8 *)(unaff_x22 + 1000);
      _swift_bridgeObjectRetain(_Var21.unknown);
      _swift_bridgeObjectRetain(pvVar38);
      _swift_bridgeObjectRetain(lVar36);
      _swift_bridgeObjectRelease(uVar25);
      FUN_10002a29c(unaff_x22 + 0xd0,&DAT_100555420,&DAT_100428ee8);
      goto LAB_10015dfc0;
    }
    if ((_Var23.unknown == puVar13) && (puVar3 == _Var21.unknown)) {
joined_r0x00010015d3d0:
      if (((_Var9.unknown != pcVar22) || (pvVar11 != pvVar38)) &&
         (bVar6 = Swift::_stringCompareWithSmolCheck
                            (_Var9,(_StringGuts)*(undefined **)(unaff_x22 + 0x2e8),
                             (_StringComparisonResult)(__int8)pcVar22), !bVar6)) goto LAB_10015d478;
      _Var9.unknown = *(undefined **)(unaff_x22 + 0x2f8);
      uVar28 = *(undefined8 *)(unaff_x22 + 0x2e8);
      uVar25 = *(undefined8 *)(unaff_x22 + 0x2d8);
      pvVar38 = pvVar11;
      if ((*(undefined **)(unaff_x22 + 0x2f0) == puVar14) && (lVar26 == lVar36)) {
        _swift_bridgeObjectRetain(uVar25);
        _swift_bridgeObjectRetain(uVar28);
        _swift_bridgeObjectRetain(_Var9.unknown);
        FUN_100163f7c(puVar13,puVar3,pcVar22,pvVar11,puVar14,lVar36);
        _swift_bridgeObjectRelease(puVar3);
        _swift_bridgeObjectRelease(pvVar11);
        _swift_bridgeObjectRelease(lVar26);
        _swift_bridgeObjectRelease(uVar25);
        _swift_bridgeObjectRelease(uVar28);
LAB_10015d564:
        lVar26 = *(long *)(unaff_x22 + 1000);
        _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x2f8));
        if (lVar26 == 0) {
LAB_10015da5c:
          if (*(char *)(unaff_x22 + 0x204) == '\x01') {
            *(undefined1 *)(*(long *)(unaff_x22 + 0x2b8) + _TtC7Wallper13LyricsManager::provisional)
                 = 0;
            goto LAB_10015dfc0;
          }
          _Var9.unknown = *(undefined **)(unaff_x22 + 0x2b8);
          if ((*(char *)(unaff_x22 + 0x205) == '\x01') &&
             (_Var9.unknown[*(long *)(unaff_x22 + 0x3b0) + 8] != '\x01')) {
            FUN_10015c704(0,0);
            goto LAB_10015dfc0;
          }
          SVar40 = *(String *)(unaff_x22 + 0x2f0);
          pSVar1 = (String *)(unaff_x22 + 0x2e0);
          pcVar29 = pSVar1->str;
          SVar51 = *pSVar1;
          SVar44 = *pSVar1;
          local_60 = *(undefined **)(unaff_x22 + 0x2d8);
          local_68 = ((String *)(unaff_x22 + 0x2d0))->str;
          SVar50 = *(String *)(unaff_x22 + 0x2d0);
          _swift_bridgeObjectRetain(local_60);
          SVar48.bridgeObject = (void *)0xe100000000000000;
          SVar48.str = (char *)0x7c;
          SVar63.bridgeObject = pvVar38;
          SVar63.str = pcVar22;
          Swift::String::append(SVar48,SVar63);
          puVar13 = local_60;
          _swift_bridgeObjectRetain(local_60);
          SVar64.bridgeObject = pvVar38;
          SVar64.str = pcVar22;
          Swift::String::append(SVar44,SVar64);
          _swift_bridgeObjectRelease(puVar13);
          puVar13 = local_60;
          _swift_bridgeObjectRetain(local_60);
          SVar49.bridgeObject = (void *)0xe100000000000000;
          SVar49.str = (char *)0x7c;
          SVar65.bridgeObject = pvVar38;
          SVar65.str = pcVar22;
          Swift::String::append(SVar49,SVar65);
          _swift_bridgeObjectRelease(puVar13);
          puVar13 = local_60;
          _swift_bridgeObjectRetain(local_60);
          SVar66.bridgeObject = pvVar38;
          SVar66.str = pcVar22;
          Swift::String::append(SVar40,SVar66);
          _swift_bridgeObjectRelease(puVar13);
          puVar13 = local_60;
          pcVar22 = local_68;
          _swift_beginAccess(_Var9.unknown + _TtC7Wallper13LyricsManager::unavailable,
                             unaff_x22 + 0x1d8,0x21,0);
          FUN_1001ca054(&local_68,pcVar22,puVar13);
          _swift_endAccess(unaff_x22 + 0x1d8);
          _swift_bridgeObjectRelease(local_60);
          pPVar27 = (Published *)&DAT_100428e90;
          _swift_getKeyPath();
          puVar13 = &DAT_100428eb8;
          _swift_getKeyPath();
          *(undefined1 *)(unaff_x22 + 0x201) = 0;
          _swift_retain(_Var9.unknown);
          Combine::Published::_set_subscript(pPVar27,unaff_x22 + 0x201);
          local_68 = (char *)0x0;
          local_60 = (undefined *)0xe000000000000000;
          Swift::_StringGuts::grow(0x25,_Var9);
          _swift_bridgeObjectRelease(local_60);
          local_68 = (char *)0xd00000000000001c;
          local_60 = (void *)0x80000001004dedf0;
          SVar67.bridgeObject = puVar13;
          SVar67.str = (char *)pPVar27;
          Swift::String::append(SVar50,SVar67);
          SVar40.bridgeObject = (void *)0xe500000000000000;
          SVar40.str = (char *)0x2079622022;
          SVar68.bridgeObject = puVar13;
          SVar68.str = (char *)pPVar27;
          Swift::String::append(SVar40,SVar68);
          SVar69.bridgeObject = puVar13;
          SVar69.str = (char *)pPVar27;
          Swift::String::append(SVar51,SVar69);
          local_70 = local_60;
          SVar44.bridgeObject = local_60;
          SVar44.str = local_68;
          local_68 = (char *)0x5b;
          local_60 = (undefined *)0xe100000000000000;
          *(undefined8 *)(unaff_x22 + 0x268) = 0x4f464e49;
          *(undefined8 *)(unaff_x22 + 0x270) = 0xe400000000000000;
          *(undefined8 *)(unaff_x22 + 0x228) = 0x20;
          *(undefined8 *)(unaff_x22 + 0x230) = 0xe100000000000000;
          FUN_100026df4();
          pcVar22 = (char *)0x0;
          puVar13 = PTR___type_metadata_for_Swift_String_100523a98;
          SVar40 = (extension_Foundation)::Swift::StringProtocol::_padding
                             (6,unaff_x22 + 0x228,0,PTR___type_metadata_for_Swift_String_100523a98,
                              PTR___type_metadata_for_Swift_String_100523a98,pcVar29,pcVar29);
          SVar70.bridgeObject = puVar13;
          SVar70.str = pcVar22;
          Swift::String::append(SVar40,SVar70);
          _swift_bridgeObjectRelease(SVar40.bridgeObject);
          SVar50.bridgeObject = (void *)0xe300000000000000;
          SVar50.str = (char *)0x5b205d;
          SVar71.bridgeObject = puVar13;
          SVar71.str = pcVar22;
          Swift::String::append(SVar50,SVar71);
          SVar51.bridgeObject = (void *)0xe500000000000000;
          SVar51.str = (char *)0x616964656d;
          SVar72.bridgeObject = puVar13;
          SVar72.str = pcVar22;
          Swift::String::append(SVar51,SVar72);
          SVar52.bridgeObject = (void *)0xe200000000000000;
          SVar52.str = (char *)0x205d;
          SVar73.bridgeObject = puVar13;
          SVar73.str = pcVar22;
          Swift::String::append(SVar52,SVar73);
          SVar74.bridgeObject = puVar13;
          SVar74.str = pcVar22;
          Swift::String::append(SVar44,SVar74);
          puVar13 = local_60;
          local_98 = local_68;
          if (DAT_100559018 != -1) {
            _swift_once(&DAT_100559018,FUN_1002854a0);
          }
          DVar32.unknown = *(undefined **)(unaff_x22 + 0x350);
          lVar26 = *(long *)(unaff_x22 + 0x348);
          uVar25 = *(undefined8 *)(unaff_x22 + 0x340);
          uVar28 = *(undefined8 *)(unaff_x22 + 0x338);
          lVar36 = *(long *)(unaff_x22 + 0x330);
          uVar30 = *(undefined8 *)(unaff_x22 + 0x328);
          puVar14 = &DAT_10052f430;
          _swift_allocObject(&DAT_10052f430,0x30,7);
          *(char **)(puVar14 + 0x10) = local_98;
          *(undefined **)(puVar14 + 0x18) = puVar13;
          *(undefined8 *)(puVar14 + 0x20) = 0;
          *(undefined8 *)(puVar14 + 0x28) = 0xe000000000000000;
          *(code **)(unaff_x22 + 0x180) = thunk_FUN_100099310;
          *(undefined **)(unaff_x22 + 0x188) = puVar14;
          *(undefined **)(unaff_x22 + 0x160) = PTR___NSConcreteStackBlock_100521110;
          *(undefined8 *)(unaff_x22 + 0x168) = 0x42000000;
          *(code **)(unaff_x22 + 0x170) = FUN_1000c7e7c;
          *(undefined **)(unaff_x22 + 0x178) = &DAT_10052f448;
          pvVar11 = __Block_copy((void *)(unaff_x22 + 0x160));
          DVar15.unknown = puVar13;
          _swift_bridgeObjectRetain();
          Dispatch::DispatchQoS::get_unspecified(DVar15);
          *(undefined **)(unaff_x22 + 0x290) = PTR___swiftEmptyArrayStorage_100524190;
          puVar16 = &DAT_100553db0;
          FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                        PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
          puVar14 = &DAT_100561080;
          FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
          puVar17 = &DAT_100553dc0;
          FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                        PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
          Swift::SetAlgebra::_init(uVar28,unaff_x22 + 0x290,puVar14,puVar17,uVar30,puVar16);
          (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar32);
          __Block_release(pvVar11);
          (**(code **)(lVar36 + 8))(uVar28,uVar30);
          (**(code **)(lVar26 + 8))(DVar32.unknown,uVar25);
          _swift_release(*(undefined8 *)(unaff_x22 + 0x188));
          if (DAT_100559020 != -1) {
            _swift_once(&DAT_100559020,FUN_100285420);
          }
          uVar28 = *(undefined8 *)(unaff_x22 + 0x318);
          lVar26 = *(long *)(unaff_x22 + 0x308);
          uVar30 = *(undefined8 *)(unaff_x22 + 0x300);
          uVar25 = uVar30;
          FUN_100099338(uVar30,&DAT_100558f50);
          (**(code **)(lVar26 + 0x10))(uVar28,uVar25,uVar30);
          uVar35 = (uint)uVar28;
          static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
          LVar18.unknown = puVar13;
          _swift_bridgeObjectRetain();
          pOVar12 = os::Logger::get_logObject(LVar18);
          pOVar19 = pOVar12;
          _os_log_type_enabled(pOVar12,uVar35 & 0xff);
          iVar7 = (int)pOVar19;
          uVar25 = *(undefined8 *)(unaff_x22 + 0x318);
        }
        else {
          uVar24 = *(ulong *)(unaff_x22 + 1000);
          if (*(long *)(uVar24 + 0x10) == 0) {
            _swift_bridgeObjectRelease(uVar24);
            goto LAB_10015da5c;
          }
          uVar25 = *(undefined8 *)(unaff_x22 + 0x2b8);
          puVar13 = &DAT_100428e00;
          _swift_getKeyPath(&DAT_100428e00);
          puVar14 = &DAT_100428e28;
          _swift_getKeyPath(&DAT_100428e28);
          _swift_bridgeObjectRetain(uVar24);
          Combine::Published::_get_subscript(unaff_x22 + 0x298,uVar25,puVar13,puVar14);
          _swift_release(puVar14);
          _swift_release(puVar13);
          uVar25 = *(undefined8 *)(unaff_x22 + 0x298);
          uVar10 = uVar24;
          FUN_1001d9fdc(uVar24,uVar25);
          _swift_bridgeObjectRelease(uVar25);
          _swift_bridgeObjectRelease(uVar24);
          if ((uVar10 & 1) == 0) {
            pPVar27 = *(Published **)(unaff_x22 + 0x2b8);
            puVar13 = &DAT_100428e00;
            _swift_getKeyPath(&DAT_100428e00);
            puVar14 = &DAT_100428e28;
            _swift_getKeyPath(&DAT_100428e28);
            *(ulong *)(unaff_x22 + 0x2a0) = uVar24;
            _swift_bridgeObjectRetain(uVar24);
            _swift_retain(pPVar27);
            Combine::Published::_set_subscript(pPVar27,unaff_x22 + 0x2a0,pPVar27,puVar13,puVar14);
            FUN_10015b3e0();
          }
          bVar4 = *(byte *)(unaff_x22 + 0x206);
          SVar44 = *(String *)(unaff_x22 + 0x2d0);
          _Var9.unknown = *(undefined **)(unaff_x22 + 0x2b8);
          *(byte *)((long)&((Published *)_Var9.unknown)->unknown +
                   _TtC7Wallper13LyricsManager::provisional) = bVar4 ^ 1;
          pcVar22 = &DAT_100428e90;
          _swift_getKeyPath();
          puVar13 = &DAT_100428eb8;
          _swift_getKeyPath();
          *(undefined1 *)(unaff_x22 + 0x202) = 0;
          _swift_retain(_Var9.unknown);
          Combine::Published::_set_subscript((Published *)_Var9.unknown,unaff_x22 + 0x202);
          local_68 = (char *)0x0;
          local_60 = (undefined *)0xe000000000000000;
          Swift::_StringGuts::grow(0x1b,_Var9);
          _swift_bridgeObjectRelease(local_60);
          local_68 = (char *)0x203a73636972794c;
          local_60 = (void *)0xe800000000000000;
          *(undefined8 *)(unaff_x22 + 0x2a8) = *(undefined8 *)(uVar24 + 0x10);
          SVar40 = Swift::CustomStringConvertible::get_description();
          SVar53.bridgeObject = puVar13;
          SVar53.str = pcVar22;
          Swift::String::append(SVar40,SVar53);
          _swift_bridgeObjectRelease(SVar40.bridgeObject);
          SVar41.bridgeObject = (void *)0xec0000002220726f;
          SVar41.str = (char *)0x662073656e696c20;
          SVar54.bridgeObject = puVar13;
          SVar54.str = pcVar22;
          Swift::String::append(SVar41,SVar54);
          SVar55.bridgeObject = puVar13;
          SVar55.str = pcVar22;
          Swift::String::append(SVar44,SVar55);
          SVar42.bridgeObject = (void *)0xe100000000000000;
          SVar42.str = (char *)0x22;
          SVar56.bridgeObject = puVar13;
          SVar56.str = pcVar22;
          Swift::String::append(SVar42,SVar56);
          _swift_bridgeObjectRelease(uVar24);
          pcVar29 = (char *)0x0;
          if (bVar4 == 0) {
            pcVar29 = (char *)0xd00000000000001d;
          }
          pvVar11 = (void *)0xe000000000000000;
          if (bVar4 == 0) {
            pvVar11 = (void *)0x80000001004dee10;
          }
          SVar43.bridgeObject = pvVar11;
          SVar43.str = pcVar29;
          SVar57.bridgeObject = puVar13;
          SVar57.str = pcVar22;
          Swift::String::append(SVar43,SVar57);
          _swift_bridgeObjectRelease(pvVar11);
          local_70 = local_60;
          SVar5.bridgeObject = local_60;
          SVar5.str = local_68;
          local_68 = (char *)0x5b;
          local_60 = (undefined *)0xe100000000000000;
          *(undefined8 *)(unaff_x22 + 0x238) = 0x4f464e49;
          *(undefined8 *)(unaff_x22 + 0x240) = 0xe400000000000000;
          *(undefined8 *)(unaff_x22 + 0x248) = 0x20;
          *(undefined8 *)(unaff_x22 + 0x250) = 0xe100000000000000;
          FUN_100026df4();
          pcVar22 = (char *)0x0;
          puVar13 = PTR___type_metadata_for_Swift_String_100523a98;
          SVar44 = (extension_Foundation)::Swift::StringProtocol::_padding
                             (6,unaff_x22 + 0x248,0,PTR___type_metadata_for_Swift_String_100523a98,
                              PTR___type_metadata_for_Swift_String_100523a98,pvVar11,pvVar11);
          SVar58.bridgeObject = puVar13;
          SVar58.str = pcVar22;
          Swift::String::append(SVar44,SVar58);
          _swift_bridgeObjectRelease(SVar44.bridgeObject);
          SVar45.bridgeObject = (void *)0xe300000000000000;
          SVar45.str = (char *)0x5b205d;
          SVar59.bridgeObject = puVar13;
          SVar59.str = pcVar22;
          Swift::String::append(SVar45,SVar59);
          SVar46.bridgeObject = (void *)0xe500000000000000;
          SVar46.str = (char *)0x616964656d;
          SVar60.bridgeObject = puVar13;
          SVar60.str = pcVar22;
          Swift::String::append(SVar46,SVar60);
          SVar47.bridgeObject = (void *)0xe200000000000000;
          SVar47.str = (char *)0x205d;
          SVar61.bridgeObject = puVar13;
          SVar61.str = pcVar22;
          Swift::String::append(SVar47,SVar61);
          SVar62.bridgeObject = puVar13;
          SVar62.str = pcVar22;
          Swift::String::append(SVar5,SVar62);
          puVar13 = local_60;
          local_98 = local_68;
          if (DAT_100559018 != -1) {
            _swift_once(&DAT_100559018,FUN_1002854a0);
          }
          DVar32.unknown = *(undefined **)(unaff_x22 + 0x350);
          lVar26 = *(long *)(unaff_x22 + 0x348);
          uVar25 = *(undefined8 *)(unaff_x22 + 0x340);
          uVar28 = *(undefined8 *)(unaff_x22 + 0x338);
          lVar36 = *(long *)(unaff_x22 + 0x330);
          uVar30 = *(undefined8 *)(unaff_x22 + 0x328);
          puVar14 = &DAT_10052f480;
          _swift_allocObject(&DAT_10052f480,0x30,7);
          *(char **)(puVar14 + 0x10) = local_98;
          *(undefined **)(puVar14 + 0x18) = puVar13;
          *(undefined8 *)(puVar14 + 0x20) = 0;
          *(undefined8 *)(puVar14 + 0x28) = 0xe000000000000000;
          *(code **)(unaff_x22 + 0x150) = thunk_FUN_100099310;
          *(undefined **)(unaff_x22 + 0x158) = puVar14;
          *(undefined **)(unaff_x22 + 0x130) = PTR___NSConcreteStackBlock_100521110;
          *(undefined8 *)(unaff_x22 + 0x138) = 0x42000000;
          *(code **)(unaff_x22 + 0x140) = FUN_1000c7e7c;
          *(undefined **)(unaff_x22 + 0x148) = &DAT_10052f498;
          pvVar11 = __Block_copy((void *)(unaff_x22 + 0x130));
          DVar15.unknown = puVar13;
          _swift_bridgeObjectRetain();
          Dispatch::DispatchQoS::get_unspecified(DVar15);
          *(undefined **)(unaff_x22 + 0x2b0) = PTR___swiftEmptyArrayStorage_100524190;
          puVar16 = &DAT_100553db0;
          FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                        PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
          puVar14 = &DAT_100561080;
          FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
          puVar17 = &DAT_100553dc0;
          FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                        PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
          Swift::SetAlgebra::_init(uVar28,unaff_x22 + 0x2b0,puVar14,puVar17,uVar30,puVar16);
          (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar32);
          __Block_release(pvVar11);
          (**(code **)(lVar36 + 8))(uVar28,uVar30);
          (**(code **)(lVar26 + 8))(DVar32.unknown,uVar25);
          _swift_release(*(undefined8 *)(unaff_x22 + 0x158));
          if (DAT_100559020 != -1) {
            _swift_once(&DAT_100559020,FUN_100285420);
          }
          uVar28 = *(undefined8 *)(unaff_x22 + 800);
          lVar26 = *(long *)(unaff_x22 + 0x308);
          uVar30 = *(undefined8 *)(unaff_x22 + 0x300);
          uVar25 = uVar30;
          FUN_100099338(uVar30,&DAT_100558f50);
          (**(code **)(lVar26 + 0x10))(uVar28,uVar25,uVar30);
          uVar35 = (uint)uVar28;
          static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
          LVar18.unknown = puVar13;
          _swift_bridgeObjectRetain();
          pOVar12 = os::Logger::get_logObject(LVar18);
          pOVar19 = pOVar12;
          _os_log_type_enabled(pOVar12,uVar35 & 0xff);
          iVar7 = (int)pOVar19;
          uVar25 = *(undefined8 *)(unaff_x22 + 800);
        }
        lVar26 = *(long *)(unaff_x22 + 0x308);
        uVar28 = *(undefined8 *)(unaff_x22 + 0x300);
        if (iVar7 == 0) {
          _swift_bridgeObjectRelease_n(puVar13,2);
        }
        else {
          puVar20 = (undefined4 *)0xc;
          _swift_slowAlloc(0xc,0xffffffffffffffff);
          pcVar22 = (char *)0x20;
          _swift_slowAlloc(0x20,0xffffffffffffffff);
          *puVar20 = 0x8220102;
          local_68 = pcVar22;
          FUN_10012dbb0(local_98,puVar13,&local_68);
          *(char **)(puVar20 + 1) = local_98;
          _swift_bridgeObjectRelease_n(puVar13,2);
          __os_log_impl(0x100000000,pOVar12,uVar35 & 0xff,"%{public}s",puVar20,0xc);
          FUN_100043f24(pcVar22);
          _swift_slowDealloc(pcVar22,0xffffffffffffffff,0xffffffffffffffff);
          _swift_slowDealloc(puVar20,0xffffffffffffffff,0xffffffffffffffff);
        }
        (**(code **)(lVar26 + 8))(uVar25,uVar28);
        goto LAB_10015dfbc;
      }
      bVar6 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)*(undefined **)(unaff_x22 + 0x2f0),_Var9,
                         (_StringComparisonResult)(__int8)puVar14);
      _swift_bridgeObjectRetain(uVar25);
      _swift_bridgeObjectRetain(uVar28);
      _swift_bridgeObjectRetain(_Var9.unknown);
      FUN_100163f7c(puVar13,puVar3,pcVar22,pvVar11,puVar14,lVar26);
      _swift_bridgeObjectRelease(uVar25);
      _swift_bridgeObjectRelease(uVar28);
      _swift_bridgeObjectRelease(puVar3);
      _swift_bridgeObjectRelease(pvVar11);
      _swift_bridgeObjectRelease(lVar26);
      if (bVar6) goto LAB_10015d564;
    }
    else {
      bVar6 = Swift::_stringCompareWithSmolCheck
                        (_Var23,_Var21,(_StringComparisonResult)(__int8)puVar13);
      if (bVar6) {
        _Var9.unknown = *(undefined **)(unaff_x22 + 0x2e0);
        goto joined_r0x00010015d3d0;
      }
LAB_10015d478:
      uVar25 = *(undefined8 *)(unaff_x22 + 0x2f8);
      uVar28 = *(undefined8 *)(unaff_x22 + 0x2e8);
      uVar30 = *(undefined8 *)(unaff_x22 + 0x2d8);
      _swift_bridgeObjectRetain(uVar30);
      _swift_bridgeObjectRetain(uVar28);
      _swift_bridgeObjectRetain(uVar25);
      FUN_100163f7c(puVar13,puVar3,pcVar22,pvVar11,puVar14,lVar26);
      _swift_bridgeObjectRelease(puVar3);
      _swift_bridgeObjectRelease(pvVar11);
      _swift_bridgeObjectRelease(lVar26);
      _swift_bridgeObjectRelease(uVar30);
      _swift_bridgeObjectRelease(uVar28);
    }
    local_70 = *(void **)(unaff_x22 + 1000);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x2f8));
  }
LAB_10015dfbc:
  _swift_bridgeObjectRelease(local_70);
LAB_10015dfc0:
  uVar28 = *(undefined8 *)(unaff_x22 + 0x388);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x370);
  uVar30 = *(undefined8 *)(unaff_x22 + 0x368);
  uVar31 = *(undefined8 *)(unaff_x22 + 0x350);
  uVar33 = *(undefined8 *)(unaff_x22 + 0x338);
  uVar34 = *(undefined8 *)(unaff_x22 + 800);
  uVar37 = *(undefined8 *)(unaff_x22 + 0x318);
  uVar39 = *(undefined8 *)(unaff_x22 + 0x310);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x390));
  _swift_task_dealloc(uVar28);
  _swift_task_dealloc(uVar25);
  _swift_task_dealloc(uVar30);
  _swift_task_dealloc(uVar31);
  _swift_task_dealloc(uVar33);
  _swift_task_dealloc(uVar34);
  _swift_task_dealloc(uVar37);
  _swift_task_dealloc(uVar39);
                    /* WARNING: Could not recover jumptable at 0x00010015e048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

