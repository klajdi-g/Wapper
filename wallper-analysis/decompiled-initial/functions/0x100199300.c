// rea decompile_all
// name: FUN_100199300
// address: 0x100199300
// body: available
// range: 0x100199300-0x100199ae7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100199418 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100199300(long param_1)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  char *pcVar4;
  _StringGuts *p_Var5;
  TaskPriority TVar6;
  MainActor *this;
  MainActor *pMVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  Task TVar10;
  _StringGuts _Var11;
  long extraout_x8;
  undefined8 uVar12;
  undefined *puVar13;
  _StringGuts _Var14;
  MainActor *unaff_x20;
  undefined *puVar15;
  _StringGuts _Var16;
  _StringGuts _Var17;
  _StringGuts _Var18;
  _StringGuts _Var19;
  undefined1 auStack_b0 [8];
  _StringGuts local_a8;
  _StringGuts _Stack_a0;
  char local_98 [40];
  _StringGuts local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long local_58;
  
  puVar13 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (((byte)unaff_x20[_TtC7Wallper17NowPlayingManager::mediaRemoteActive] & 1) == 0) {
    puVar13 = &DAT_100429b50;
    _swift_getKeyPath(&DAT_100429b50);
    puVar15 = &DAT_100429b78;
    _swift_getKeyPath(&DAT_100429b78);
    Combine::Published::_get_subscript(local_98);
    _swift_release(puVar13);
    _swift_release(puVar15);
    if (local_98[0] == '\x01') {
      uVar3 = 0x796669746f7073;
      FUN_10017e6a4(0x796669746f7073,0xe700000000000000);
      if (((uVar3 & 1) != 0) && (param_1 != 0)) {
        local_a8.unknown = (undefined *)0x5320726579616c50;
        _Stack_a0.unknown = (undefined *)0xec00000065746174;
        puVar13 = PTR___type_metadata_for_Swift_String_100523a98;
        Swift::AnyHashable::_init
                  (local_98,uVar3,PTR___type_metadata_for_Swift_String_100523a98,
                   PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100523aa8
                  );
        if (*(long *)(param_1 + 0x10) == 0) {
          uStack_68 = 0;
          local_70.unknown = (undefined *)0x0;
          local_58 = 0;
          uStack_60 = 0;
        }
        else {
          _swift_bridgeObjectRetain(param_1);
          pcVar4 = local_98;
          FUN_10000488c(pcVar4);
          if (((ulong)puVar13 & 1) == 0) {
            _swift_bridgeObjectRelease(param_1);
            uStack_68 = 0;
            local_70.unknown = (undefined *)0x0;
            local_58 = 0;
            uStack_60 = 0;
          }
          else {
            FUN_1000280d4(*(long *)(param_1 + 0x38) + (long)pcVar4 * 0x20,&local_70);
            _swift_bridgeObjectRelease(param_1);
          }
        }
        FUN_100007dd4(local_98);
        puVar13 = PTR___type_metadata_for_Any_100524178;
        if (local_58 == 0) {
          FUN_10002a29c(&local_70,&DAT_10054d428,&DAT_100420300);
        }
        else {
          p_Var5 = &local_a8;
          _swift_dynamicCast(p_Var5,&local_70,PTR___type_metadata_for_Any_100524178 + 8,
                             PTR___type_metadata_for_Swift_String_100523a98,6);
          _Var16.unknown = _Stack_a0.unknown;
          _Var17.unknown = local_a8.unknown;
          if ((int)p_Var5 != 0) {
            if (((((local_a8.unknown == (undefined *)0x646573756150) &&
                  (_Stack_a0.unknown == (undefined *)0xe600000000000000)) ||
                 (bVar2 = Swift::_stringCompareWithSmolCheck
                                    (local_a8,_Stack_a0,(_StringComparisonResult)0x50), bVar2)) ||
                ((_Var17.unknown == (undefined *)0x646570706f7453 &&
                 (_Var16.unknown == (undefined *)0xe700000000000000)))) ||
               (bVar2 = Swift::_stringCompareWithSmolCheck
                                  (_Var17,_Var16,(_StringComparisonResult)0x53), bVar2)) {
              _swift_bridgeObjectRelease(_Var16.unknown);
              unaff_x20[_TtC7Wallper17NowPlayingManager::spotifyIsPlaying] = (MainActor)0x0;
              lVar1 = _TtC7Wallper17NowPlayingManager::spotifyPauseTask;
              puVar13 = *(undefined **)
                         (unaff_x20 + _TtC7Wallper17NowPlayingManager::spotifyPauseTask);
              if (puVar13 != (undefined *)0x0) {
                TVar10.unknown = puVar13;
                _swift_retain();
                Swift::Task::cancel(TVar10);
                _swift_release(puVar13);
              }
              puVar13 = &DAT_100429be0;
              _swift_getKeyPath(&DAT_100429be0);
              puVar15 = &DAT_100429c08;
              _swift_getKeyPath(&DAT_100429c08);
              Combine::Published::_get_subscript(local_98,unaff_x20,puVar13,puVar15);
              _swift_release(puVar13);
              _swift_release(puVar15);
              if (local_98[0] == '\x01') {
                TVar6 = Swift::TaskPriority::typeMetadataAccessor();
                (**(code **)(*(long *)(TVar6.unknown + -8) + 0x38))
                          (auStack_b0 + -extraout_x8,1,1,TVar6.unknown);
                this = Swift::MainActor::typeMetadataAccessor();
                puVar13 = PTR_typeMetadataAccessor_1005246d8;
                pMVar7 = unaff_x20;
                _swift_retain();
                pMVar7 = Swift::MainActor::get_shared(this,pMVar7);
                puVar8 = &DAT_100558b80;
                FUN_1000036d0(&DAT_100558b80,puVar13,
                              PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
                puVar13 = &DAT_100530660;
                _swift_allocObject(&DAT_100530660,0x28,7);
                *(MainActor **)(puVar13 + 0x10) = pMVar7;
                *(undefined8 **)(puVar13 + 0x18) = puVar8;
                *(MainActor **)(puVar13 + 0x20) = unaff_x20;
                uVar9 = 0;
                FUN_1001b1e74(0,0,auStack_b0 + -extraout_x8,&DAT_100429eb8,puVar13);
                uVar12 = *(undefined8 *)(unaff_x20 + lVar1);
                *(undefined8 *)(unaff_x20 + lVar1) = uVar9;
                _swift_release(uVar12);
              }
            }
            else {
              if ((_Var17.unknown == (undefined *)0x676e6979616c50) &&
                 (_Var16.unknown == (undefined *)0xe700000000000000)) {
                _swift_bridgeObjectRelease(0xe700000000000000);
              }
              else {
                bVar2 = Swift::_stringCompareWithSmolCheck
                                  (_Var17,_Var16,(_StringComparisonResult)0x50);
                _swift_bridgeObjectRelease(_Var16.unknown);
                if (!bVar2) {
                  return;
                }
              }
              puVar15 = *(undefined **)
                         (unaff_x20 + _TtC7Wallper17NowPlayingManager::spotifyPauseTask);
              if (puVar15 != (undefined *)0x0) {
                TVar10.unknown = puVar15;
                _swift_retain();
                Swift::Task::cancel(TVar10);
                _swift_release(puVar15);
              }
              unaff_x20[_TtC7Wallper17NowPlayingManager::spotifyIsPlaying] = (MainActor)0x1;
              _swift_getKeyPath(&DAT_100429b98);
              _swift_getKeyPath(&DAT_100429bc0);
              local_98[0] = '\x01';
              _swift_retain(unaff_x20);
              Combine::Published::_set_subscript();
              _swift_getKeyPath(&DAT_100429be0);
              _swift_getKeyPath(&DAT_100429c08);
              local_98[0] = '\x01';
              _swift_retain(unaff_x20);
              Combine::Published::_set_subscript();
              pMVar7 = unaff_x20 + _TtC7Wallper17NowPlayingManager::currentStoreURL;
              uVar9 = *(undefined8 *)(pMVar7 + 8);
              *(undefined8 *)pMVar7 = 0;
              *(undefined8 *)(pMVar7 + 8) = 0;
              _swift_bridgeObjectRelease(uVar9);
              local_70.unknown = (undefined *)0x656d614e;
              uStack_68 = 0xe400000000000000;
              puVar15 = PTR___type_metadata_for_Swift_String_100523a98;
              Swift::AnyHashable::_init
                        (local_98,uVar9,PTR___type_metadata_for_Swift_String_100523a98,
                         PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100523aa8
                        );
              if (*(long *)(param_1 + 0x10) == 0) {
                uStack_68 = 0;
                local_70.unknown = (undefined *)0x0;
                local_58 = 0;
                uStack_60 = 0;
              }
              else {
                _swift_bridgeObjectRetain(param_1);
                pcVar4 = local_98;
                FUN_10000488c(pcVar4);
                if (((ulong)puVar15 & 1) == 0) {
                  _swift_bridgeObjectRelease(param_1);
                  uStack_68 = 0;
                  local_70.unknown = (undefined *)0x0;
                  local_58 = 0;
                  uStack_60 = 0;
                }
                else {
                  FUN_1000280d4(*(long *)(param_1 + 0x38) + (long)pcVar4 * 0x20,&local_70);
                  _swift_bridgeObjectRelease(param_1);
                }
              }
              FUN_100007dd4(local_98);
              if (local_58 == 0) {
                p_Var5 = &local_70;
                FUN_10002a29c(p_Var5,&DAT_10054d428,&DAT_100420300);
                _Var16.unknown = (undefined *)0x0;
                _Var17.unknown = (undefined *)0x0;
              }
              else {
                p_Var5 = &local_a8;
                _swift_dynamicCast(p_Var5,&local_70,puVar13 + 8,
                                   PTR___type_metadata_for_Swift_String_100523a98,6);
                _Var16.unknown = _Stack_a0.unknown;
                _Var17.unknown = local_a8.unknown;
                if ((int)p_Var5 == 0) {
                  _Var17.unknown = (undefined *)0x0;
                  _Var16.unknown = (undefined *)0x0;
                }
              }
              local_70.unknown = (undefined *)0x747369747241;
              uStack_68 = 0xe600000000000000;
              puVar15 = PTR___type_metadata_for_Swift_String_100523a98;
              Swift::AnyHashable::_init
                        (local_98,p_Var5,PTR___type_metadata_for_Swift_String_100523a98,
                         PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100523aa8
                        );
              if (*(long *)(param_1 + 0x10) == 0) {
                uStack_68 = 0;
                local_70.unknown = (undefined *)0x0;
                local_58 = 0;
                uStack_60 = 0;
              }
              else {
                _swift_bridgeObjectRetain(param_1);
                pcVar4 = local_98;
                FUN_10000488c(pcVar4);
                if (((ulong)puVar15 & 1) == 0) {
                  _swift_bridgeObjectRelease(param_1);
                  uStack_68 = 0;
                  local_70.unknown = (undefined *)0x0;
                  local_58 = 0;
                  uStack_60 = 0;
                }
                else {
                  FUN_1000280d4(*(long *)(param_1 + 0x38) + (long)pcVar4 * 0x20,&local_70);
                  _swift_bridgeObjectRelease(param_1);
                }
              }
              FUN_100007dd4(local_98);
              if (local_58 == 0) {
                p_Var5 = &local_70;
                FUN_10002a29c(p_Var5,&DAT_10054d428,&DAT_100420300);
                _Var18.unknown = (undefined *)0x0;
                _Var19.unknown = (undefined *)0x0;
              }
              else {
                p_Var5 = &local_a8;
                _swift_dynamicCast(p_Var5,&local_70,puVar13 + 8,
                                   PTR___type_metadata_for_Swift_String_100523a98,6);
                _Var18.unknown = _Stack_a0.unknown;
                _Var19.unknown = local_a8.unknown;
                if ((int)p_Var5 == 0) {
                  _Var19.unknown = (undefined *)0x0;
                  _Var18.unknown = (undefined *)0x0;
                }
              }
              local_70.unknown = (undefined *)0x6d75626c41;
              uStack_68 = 0xe500000000000000;
              puVar15 = PTR___type_metadata_for_Swift_String_100523a98;
              Swift::AnyHashable::_init
                        (local_98,p_Var5,PTR___type_metadata_for_Swift_String_100523a98,
                         PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100523aa8
                        );
              if (*(long *)(param_1 + 0x10) == 0) {
                uStack_68 = 0;
                local_70.unknown = (undefined *)0x0;
                local_58 = 0;
                uStack_60 = 0;
              }
              else {
                _swift_bridgeObjectRetain(param_1);
                pcVar4 = local_98;
                FUN_10000488c(pcVar4);
                if (((ulong)puVar15 & 1) == 0) {
                  _swift_bridgeObjectRelease(param_1);
                  uStack_68 = 0;
                  local_70.unknown = (undefined *)0x0;
                  local_58 = 0;
                  uStack_60 = 0;
                }
                else {
                  FUN_1000280d4(*(long *)(param_1 + 0x38) + (long)pcVar4 * 0x20,&local_70);
                  _swift_bridgeObjectRelease(param_1);
                }
              }
              FUN_100007dd4(local_98);
              if (local_58 == 0) {
                FUN_10002a29c(&local_70,&DAT_10054d428,&DAT_100420300);
                _Var11.unknown = (undefined *)0x0;
                _Var14.unknown = (undefined *)0x0;
              }
              else {
                p_Var5 = &local_a8;
                _swift_dynamicCast(p_Var5,&local_70,puVar13 + 8,
                                   PTR___type_metadata_for_Swift_String_100523a98,6);
                _Var11.unknown = local_a8.unknown;
                _Var14.unknown = _Stack_a0.unknown;
                if ((int)p_Var5 == 0) {
                  _Var11.unknown = (undefined *)0x0;
                  _Var14.unknown = (undefined *)0x0;
                }
              }
              FUN_10019a25c(_Var17.unknown,_Var16.unknown,_Var19.unknown,_Var18.unknown,
                            _Var11.unknown,_Var14.unknown);
              _swift_bridgeObjectRelease(_Var14.unknown);
              _swift_bridgeObjectRelease(_Var18.unknown);
              _swift_bridgeObjectRelease(_Var16.unknown);
            }
          }
        }
      }
    }
  }
  return;
}

