// rea decompile_all
// name: FUN_10017f398
// address: 0x10017f398
// body: available
// range: 0x10017f398-0x10017ff27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10017f398(undefined8 *param_1,undefined4 param_2,undefined4 param_3,void *param_4)

{
  long *plVar1;
  void *pvVar2;
  int iVar3;
  String SVar4;
  undefined1 *puVar5;
  _StringGuts _Var6;
  _StringGuts _Var7;
  _StringGuts _Var8;
  _StringGuts _Var9;
  byte bVar10;
  bool bVar11;
  char *pcVar12;
  undefined *puVar13;
  char *pcVar14;
  Task TVar15;
  long lVar16;
  _StringGuts *p_Var17;
  TaskPriority TVar18;
  ulong uVar19;
  char *pcVar20;
  char *pcVar21;
  undefined *puVar22;
  long extraout_x8;
  undefined1 *puVar23;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar24;
  undefined *puVar25;
  long unaff_x20;
  long lVar26;
  undefined8 *puVar27;
  _StringGuts _Var28;
  long lVar29;
  long lVar30;
  long lVar31;
  code *pcVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  String SVar41;
  String SVar42;
  String separator;
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
  undefined1 auStack_150 [8];
  undefined1 *local_148;
  char *local_140;
  undefined1 *local_138;
  ulong local_130;
  undefined8 *local_128;
  ulong local_120;
  void *local_118;
  _StringGuts local_e0;
  _StringGuts _Stack_d8;
  undefined1 auStack_b8 [16];
  undefined8 local_a8;
  char *local_a0;
  void *pvStack_98;
  long local_90 [2];
  
  if ((*(byte *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::isQuitting) & 1) == 0) {
    puVar22 = &DAT_100429d30;
    _swift_getKeyPath(&DAT_100429d30);
    puVar25 = &DAT_100429d58;
    _swift_getKeyPath(&DAT_100429d58);
    Combine::Published::_get_subscript(&local_e0);
    _swift_release(puVar22);
    _swift_release(puVar25);
    if (((char)local_e0.unknown == '\x01') &&
       (bVar10 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0), (bVar10 & 1) != 0)) {
      local_120 = CONCAT44(local_120._4_4_,param_3);
      local_130 = CONCAT44(local_130._4_4_,param_2);
      local_e0.unknown = (char *)0x0;
      _Stack_d8.unknown = (void *)0xe000000000000000;
      puVar22 = &DAT_100429d78;
      puVar25 = puVar22;
      _swift_getKeyPath(&DAT_100429d78);
      pcVar21 = &DAT_100429da0;
      pcVar12 = pcVar21;
      _swift_getKeyPath();
      pcVar14 = pcVar12;
      Combine::Published::_get_subscript(&local_a0);
      _swift_release(puVar25);
      _swift_release(pcVar12);
      pcVar12 = (char *)0x0;
      if (pvStack_98 != (void *)0x0) {
        pcVar12 = local_a0;
      }
      pvVar2 = (void *)0xe000000000000000;
      if (pvStack_98 != (void *)0x0) {
        pvVar2 = pvStack_98;
      }
      SVar42.bridgeObject = pvVar2;
      SVar42.str = pcVar12;
      SVar45.bridgeObject = param_4;
      SVar45.str = pcVar14;
      Swift::String::append(SVar42,SVar45);
      _swift_bridgeObjectRelease(pvVar2);
      SVar37.bridgeObject = (void *)0xe100000000000000;
      SVar37.str = (char *)0x7c;
      SVar46.bridgeObject = param_4;
      SVar46.str = pcVar14;
      Swift::String::append(SVar37,SVar46);
      puVar25 = &DAT_100429dc0;
      puVar13 = puVar25;
      _swift_getKeyPath(&DAT_100429dc0);
      pcVar12 = &DAT_100429de8;
      pcVar14 = pcVar12;
      _swift_getKeyPath();
      pcVar20 = pcVar14;
      Combine::Published::_get_subscript(&local_a0);
      _swift_release(puVar13);
      _swift_release(pcVar14);
      pcVar14 = (char *)0x0;
      if (pvStack_98 != (void *)0x0) {
        pcVar14 = local_a0;
      }
      pvVar2 = (void *)0xe000000000000000;
      if (pvStack_98 != (void *)0x0) {
        pvVar2 = pvStack_98;
      }
      SVar38.bridgeObject = pvVar2;
      SVar38.str = pcVar14;
      SVar47.bridgeObject = param_4;
      SVar47.str = pcVar20;
      Swift::String::append(SVar38,SVar47);
      _swift_bridgeObjectRelease(pvVar2);
      _Var28.unknown = _Stack_d8.unknown;
      _Var6.unknown = local_e0.unknown;
      local_e0.unknown = (char *)0x0;
      _Stack_d8.unknown = (void *)0xe000000000000000;
      _swift_getKeyPath(&DAT_100429d78);
      _swift_getKeyPath();
      pcVar14 = pcVar21;
      Combine::Published::_get_subscript(&local_a0);
      _swift_release(puVar22);
      _swift_release(pcVar21);
      pcVar21 = (char *)0x636973754d;
      if (pvStack_98 != (void *)0x0) {
        pcVar21 = local_a0;
      }
      pvVar2 = (void *)0xe500000000000000;
      if (pvStack_98 != (void *)0x0) {
        pvVar2 = pvStack_98;
      }
      SVar39.bridgeObject = pvVar2;
      SVar39.str = pcVar21;
      SVar48.bridgeObject = param_4;
      SVar48.str = pcVar14;
      Swift::String::append(SVar39,SVar48);
      _swift_bridgeObjectRelease(pvVar2);
      SVar40.bridgeObject = (void *)0xa500000000000000;
      SVar40.str = (char *)0x209380e220;
      SVar49.bridgeObject = param_4;
      SVar49.str = pcVar14;
      Swift::String::append(SVar40,SVar49);
      _swift_getKeyPath(&DAT_100429dc0);
      _swift_getKeyPath();
      pcVar14 = pcVar12;
      Combine::Published::_get_subscript(&local_a0);
      _swift_release(puVar25);
      _swift_release(pcVar12);
      pcVar21 = (char *)0x79616c5020776f4e;
      if (pvStack_98 != (void *)0x0) {
        pcVar21 = local_a0;
      }
      pvVar2 = (void *)0xeb00000000676e69;
      if (pvStack_98 != (void *)0x0) {
        pvVar2 = pvStack_98;
      }
      SVar41.bridgeObject = pvVar2;
      SVar41.str = pcVar21;
      SVar50.bridgeObject = param_4;
      SVar50.str = pcVar14;
      Swift::String::append(SVar41,SVar50);
      _swift_bridgeObjectRelease(pvVar2);
      _Var8.unknown = _Stack_d8.unknown;
      _Var7.unknown = local_e0.unknown;
      lVar24 = param_1[4];
      lVar30 = *(long *)(lVar24 + 0x10);
      local_118 = _Var28.unknown;
      _Var28.unknown = PTR___swiftEmptyArrayStorage_100524190;
      local_128 = param_1;
      local_90[0] = lVar24;
      if (lVar30 != 0) {
        local_e0.unknown = PTR___swiftEmptyArrayStorage_100524190;
        FUN_1001c5bc4(0,lVar30,0);
        puVar25 = PTR___protocol_witness_table_for_Swift_Double___Swift_CVarArg_in_Swift_100523ba8;
        puVar22 = PTR___type_metadata_for_Swift_Double_100523b90;
        puVar27 = (undefined8 *)(lVar24 + 0x30);
        do {
          _Var28.unknown = local_e0.unknown;
          uVar34 = puVar27[-2];
          uVar35 = puVar27[-1];
          uVar36 = *puVar27;
          puVar13 = &DAT_10054b500;
          FUN_100002f94(&DAT_10054b500,&DAT_100434890);
          _swift_allocObject();
          *(undefined8 *)(puVar13 + 0x18) = 6;
          *(undefined8 *)(puVar13 + 0x10) = 3;
          *(undefined **)(puVar13 + 0x38) = puVar22;
          *(undefined **)(puVar13 + 0x40) = puVar25;
          *(undefined8 *)(puVar13 + 0x20) = uVar34;
          *(undefined **)(puVar13 + 0x60) = puVar22;
          *(undefined **)(puVar13 + 0x68) = puVar25;
          *(undefined8 *)(puVar13 + 0x48) = uVar35;
          *(undefined **)(puVar13 + 0x88) = puVar22;
          *(undefined **)(puVar13 + 0x90) = puVar25;
          *(undefined8 *)(puVar13 + 0x70) = uVar36;
          SVar42 = (extension_Foundation)::Swift::String::_init();
          uVar19 = *(ulong *)(_Var28.unknown + 0x10);
          local_e0.unknown = _Var28.unknown;
          if (*(ulong *)(_Var28.unknown + 0x18) >> 1 <= uVar19) {
            FUN_1001c5bc4(1 < *(ulong *)(_Var28.unknown + 0x18),uVar19 + 1,1);
          }
          puVar27 = puVar27 + 3;
          *(ulong *)(local_e0.unknown + 0x10) = uVar19 + 1;
          *(String *)(local_e0.unknown + uVar19 * 0x10 + 0x20) = SVar42;
          lVar30 = lVar30 + -1;
          _Var28.unknown = local_e0.unknown;
        } while (lVar30 != 0);
      }
      pvVar2 = local_118;
      pcVar21 = &DAT_100553858;
      local_e0.unknown = _Var28.unknown;
      FUN_100002f94(&DAT_100553858,&DAT_100429e10);
      puVar22 = &DAT_1005546b8;
      FUN_1000087a0(&DAT_1005546b8,&DAT_100553858,&DAT_100429e10,
                    PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100523b48);
      separator.bridgeObject = (void *)0xe100000000000000;
      separator.str = (char *)0x3b;
      SVar42 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator);
      _swift_bridgeObjectRelease(_Var28.unknown);
      local_e0.unknown = (undefined *)0x746e656964617267;
      _Stack_d8.unknown = (undefined *)0xe90000000000007c;
      SVar43.bridgeObject = pvVar2;
      SVar43.str = _Var6.unknown;
      SVar51.bridgeObject = puVar22;
      SVar51.str = pcVar21;
      Swift::String::append(SVar43,SVar51);
      SVar44.bridgeObject = (void *)0xe100000000000000;
      SVar44.str = (char *)0x7c;
      SVar52.bridgeObject = puVar22;
      SVar52.str = pcVar21;
      Swift::String::append(SVar44,SVar52);
      SVar53.bridgeObject = puVar22;
      SVar53.str = pcVar21;
      pcVar32 = SVar42.bridgeObject;
      Swift::String::append(SVar42,SVar53);
      _swift_bridgeObjectRelease(SVar42.bridgeObject);
      _Var9.unknown = _Stack_d8.unknown;
      _Var28.unknown = local_e0.unknown;
      if ((local_120 & 1) == 0) {
        puVar22 = (undefined *)
                  ((undefined8 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::lockscreenKey))[1];
        if ((puVar22 != (undefined *)0x0) &&
           (((pcVar21 = *(char **)(unaff_x20 + _TtC7Wallper17NowPlayingManager::lockscreenKey),
             local_e0.unknown == pcVar21 && (puVar22 == _Stack_d8.unknown)) ||
            (pcVar32 = (code *)_Stack_d8.unknown,
            bVar11 = Swift::_stringCompareWithSmolCheck
                               (local_e0,_Stack_d8,(_StringComparisonResult)(__int8)pcVar21), bVar11
            )))) {
          _swift_bridgeObjectRelease(_Var8.unknown);
          _swift_bridgeObjectRelease(_Var9.unknown);
          _swift_bridgeObjectRelease(pvVar2);
          return;
        }
      }
      puVar27 = (undefined8 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::lockscreenKey);
      uVar34 = puVar27[1];
      *puVar27 = _Var28.unknown;
      puVar27[1] = _Var9.unknown;
      _swift_bridgeObjectRelease(uVar34);
      lVar30 = _TtC7Wallper17NowPlayingManager::lockscreenTask;
      puVar25 = *(undefined **)(unaff_x20 + _TtC7Wallper17NowPlayingManager::lockscreenTask);
      if (puVar25 != (undefined *)0x0) {
        TVar15.unknown = puVar25;
        _swift_retain();
        pcVar32 = (code *)(PTR___type_metadata_for____100524180 + 8);
        pcVar21 = PTR___type_metadata_for_Swift_Never_100524058;
        puVar22 = PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100524068;
        Swift::Task::cancel(TVar15);
        _swift_release(puVar25);
      }
      lVar24 = *(long *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::lockscreenGeneration) + 1;
      if (SCARRY8(*(long *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::lockscreenGeneration),1)) {
                    /* WARNING: Does not return */
        pcVar32 = (code *)SoftwareBreakpoint(1,0x10017ff10);
        (*pcVar32)();
      }
      *(long *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::lockscreenGeneration) = lVar24;
      local_120 = lVar24;
      if (DAT_1005539e8 != -1) {
        pcVar32 = FUN_1001237d4;
        _swift_once(&DAT_1005539e8);
      }
      uVar34 = DAT_100577c28;
      uVar35 = 0x4018000000000000;
      if ((local_130 & 0xff) != 0) {
        uVar35 = 0x3fe3333333333333;
      }
      local_e0.unknown = (undefined *)0x0;
      _Stack_d8.unknown = (undefined *)0xe000000000000000;
      Swift::_StringGuts::grow(0x11,(_StringGuts)pcVar32);
      _swift_bridgeObjectRelease(_Stack_d8.unknown);
      local_e0.unknown = (undefined *)0x726353206b636f4c;
      _Stack_d8.unknown = (undefined *)0xaf20b7c2206e6565;
      SVar4.bridgeObject = _Var8.unknown;
      SVar4.str = _Var7.unknown;
      SVar54.bridgeObject = puVar22;
      SVar54.str = pcVar21;
      Swift::String::append(SVar4,SVar54);
      _Var28.unknown = _Stack_d8.unknown;
      bVar11 = true;
      local_130 = 0x80000001004df410;
      FUN_100123c28(1,0xd000000000000019,0x80000001004df410,local_e0.unknown,_Stack_d8.unknown,8,0);
      _swift_bridgeObjectRelease(_Var28.unknown);
      lVar24 = 0;
      FUN_100126a5c();
      lVar26 = *(long *)(lVar24 + -8);
      local_138 = auStack_150;
      (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar26 + 0x40));
      puVar23 = auStack_150 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
      puVar22 = &DAT_100429e18;
      local_148 = puVar23;
      _swift_getKeyPath(&DAT_100429e18);
      puVar25 = &DAT_100429e40;
      _swift_getKeyPath(&DAT_100429e40);
      Combine::Published::_get_subscript(&local_e0,uVar34,puVar22,puVar25);
      _swift_release(puVar22);
      _swift_release(puVar25);
      _Var28.unknown = local_e0.unknown;
      puVar22 = &DAT_100551e50;
      FUN_100002f94(&DAT_100551e50,&DAT_100429e60);
      lVar31 = *(long *)(*(long *)(puVar22 + -8) + 0x40);
      (*(code *)PTR____chkstk_darwin_100521118)(lVar31 + 0xfU & 0xfffffffffffffff0);
      lVar29 = (long)puVar23 - extraout_x8_00;
      local_140 = "Waiting for the desktop";
      if (*(long *)(_Var28.unknown + 0x10) != 0) {
        _swift_bridgeObjectRetain(_Var28.unknown);
        lVar16 = -0x2fffffffffffffe2;
        uVar19 = 0;
        FUN_10000464c(0xd00000000000001e);
        bVar11 = (uVar19 & 1) == 0;
        if (!bVar11) {
          FUN_100029504(*(long *)(_Var28.unknown + 0x38) + *(long *)(lVar26 + 0x48) * lVar16,lVar29,
                        FUN_100126a5c);
        }
        _swift_bridgeObjectRelease(_Var28.unknown);
      }
      pcVar32 = *(code **)(lVar26 + 0x38);
      (*pcVar32)(lVar29,bVar11,1,lVar24);
      _swift_bridgeObjectRelease(_Var28.unknown);
      lVar16 = lVar29;
      (**(code **)(lVar26 + 0x30))(lVar29,1,lVar24);
      puVar5 = local_148;
      if ((int)lVar16 == 1) {
        FUN_10002a29c(lVar29,&DAT_100551e50,&DAT_100429e60);
      }
      else {
        FUN_100007e64(lVar29,local_148,FUN_100126a5c);
        plVar1 = (long *)(puVar5 + *(int *)(lVar24 + 0x28));
        if (((char)plVar1[1] == '\x01') || (*plVar1 != 1)) {
          iVar3 = *(int *)(lVar24 + 0x24);
          *(undefined8 *)(puVar5 + iVar3) = 0;
          *(undefined1 *)((long)(puVar5 + iVar3) + 8) = 1;
        }
        *plVar1 = 1;
        *(undefined1 *)(plVar1 + 1) = 0;
        puVar27 = (undefined8 *)(puVar5 + *(int *)(lVar24 + 0x30));
        _swift_bridgeObjectRelease(puVar27[1]);
        *puVar27 = 0xd000000000000017;
        puVar27[1] = 0x80000001004df430;
        (*(code *)PTR____chkstk_darwin_100521118)();
        lVar26 = (long)puVar23 - (lVar31 + 0xfU & 0xfffffffffffffff0);
        FUN_100029504(puVar5,lVar26,FUN_100126a5c);
        (*pcVar32)(lVar26,0,1,lVar24);
        puVar22 = &DAT_100429e18;
        _swift_getKeyPath(&DAT_100429e18);
        puVar25 = &DAT_100429e40;
        _swift_getKeyPath(&DAT_100429e40);
        p_Var17 = &local_e0;
        Combine::Published::_modify_subscript
                  ((Published *)0x80000001004df430,p_Var17,uVar34,puVar22,puVar25);
        FUN_100123160(lVar26,0xd00000000000001e,(ulong)local_140 | 0x8000000000000000);
        (*(code *)p_Var17)(&local_e0,0);
        _swift_release(puVar22);
        _swift_release(puVar25);
        FUN_100029548(puVar5,FUN_100126a5c);
      }
      puVar23 = local_138;
      TVar18.unknown = &DAT_100561090;
      FUN_100002f94(&DAT_100561090,&DAT_10041c870);
      (*(code *)PTR____chkstk_darwin_100521118)
                (*(long *)(*(long *)(TVar18.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar24 = (long)puVar23 - extraout_x8_01;
      Swift::TaskPriority::get_utility(TVar18);
      TVar18 = Swift::TaskPriority::typeMetadataAccessor();
      (**(code **)(*(long *)(TVar18.unknown + -8) + 0x38))(lVar24,0,1,TVar18.unknown);
      puVar22 = &DAT_100530458;
      _swift_allocObject(&DAT_100530458,0x18,7);
      _swift_weakInit(puVar22 + 0x10,unaff_x20);
      puVar27 = local_128;
      _Stack_d8.unknown = (undefined *)local_128[1];
      local_e0.unknown = (undefined *)*local_128;
      pvStack_98 = (void *)local_128[3];
      local_a0 = (char *)local_128[2];
      local_a8 = local_128[5];
      puVar25 = &DAT_1005304d0;
      _swift_allocObject(&DAT_1005304d0,0xa8,7);
      *(undefined8 *)(puVar25 + 0x20) = uVar35;
      uVar35 = *puVar27;
      uVar33 = puVar27[3];
      uVar36 = puVar27[2];
      *(undefined8 *)(puVar25 + 0x60) = puVar27[1];
      *(undefined8 *)(puVar25 + 0x58) = uVar35;
      *(undefined8 *)(puVar25 + 0x10) = 0;
      *(undefined8 *)(puVar25 + 0x18) = 0;
      *(undefined **)(puVar25 + 0x28) = puVar22;
      *(undefined **)(puVar25 + 0x30) = _Var6.unknown;
      *(void **)(puVar25 + 0x38) = local_118;
      *(undefined8 *)(puVar25 + 0x40) = uVar34;
      *(undefined8 *)(puVar25 + 0x48) = 0xd000000000000019;
      *(ulong *)(puVar25 + 0x50) = local_130;
      *(undefined8 *)(puVar25 + 0x70) = uVar33;
      *(undefined8 *)(puVar25 + 0x68) = uVar36;
      uVar35 = puVar27[4];
      *(undefined8 *)(puVar25 + 0x80) = puVar27[5];
      *(undefined8 *)(puVar25 + 0x78) = uVar35;
      puVar25[0x88] = 0;
      *(ulong *)(puVar25 + 0x90) = local_120;
      *(undefined **)(puVar25 + 0x98) = _Var7.unknown;
      *(undefined **)(puVar25 + 0xa0) = _Var8.unknown;
      _swift_retain(uVar34);
      FUN_100043d74(&local_e0,auStack_b8);
      FUN_100043d74(&local_a0,auStack_b8);
      FUN_1000087e4(local_90,auStack_b8,&DAT_10054c050,&DAT_10041dca0);
      FUN_1000087e4(&local_a8,auStack_b8,&DAT_10054c058,&DAT_10041d7d0);
      uVar34 = 0;
      FUN_100176d50(0,0,lVar24,&DAT_100429e70,puVar25);
      FUN_10002a29c(lVar24,&DAT_100561090,&DAT_10041c870);
      uVar35 = *(undefined8 *)(unaff_x20 + lVar30);
      *(undefined8 *)(unaff_x20 + lVar30) = uVar34;
      _swift_release(uVar35);
    }
  }
  return;
}

