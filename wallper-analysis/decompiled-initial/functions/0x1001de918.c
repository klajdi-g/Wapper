// rea decompile_all
// name: FUN_1001de918
// address: 0x1001de918
// body: available
// range: 0x1001de918-0x1001dee2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001de918(ulong param_1,ulong param_2,undefined8 param_3,byte param_4)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  URL UVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  TaskPriority TVar8;
  undefined8 uVar9;
  long extraout_x8;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 *unaff_x20;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  bool bVar21;
  undefined8 uVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  undefined *local_110;
  long local_c0 [3];
  undefined1 auStack_a8 [8];
  undefined *local_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  uVar9 = *unaff_x20;
  puVar3 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)&local_110 - extraout_x8;
  puVar3 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  lVar11 = *(long *)(puVar3 + -8);
  lVar25 = *(long *)(lVar11 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = lVar10 - (lVar25 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = lVar12 - extraout_x12;
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar17 = *(long *)(UVar4.unknown + -8);
  lVar19 = *(long *)(lVar17 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = lVar18 - (lVar19 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar23 = _TtC7Wallper14PreviewManager::inFlightIDs;
  lVar14 = lVar13 - extraout_x12_00;
  uVar5 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar5 = param_2 >> 0x38 & 0xf;
  }
  if (uVar5 != 0) {
    _swift_beginAccess((long)unaff_x20 + _TtC7Wallper14PreviewManager::inFlightIDs,auStack_80,0,0);
    uVar22 = *(undefined8 *)((long)unaff_x20 + lVar23);
    _swift_bridgeObjectRetain(uVar22);
    uVar5 = param_1;
    FUN_1002165a4(param_1,param_2,uVar22);
    _swift_bridgeObjectRelease(uVar22);
    lVar23 = _TtC7Wallper14PreviewManager::transparentIDs;
    if ((uVar5 & 1) == 0) {
      _swift_beginAccess((long)unaff_x20 + _TtC7Wallper14PreviewManager::transparentIDs,auStack_98,0
                         ,0);
      uVar22 = *(undefined8 *)((long)unaff_x20 + lVar23);
      _swift_bridgeObjectRetain(uVar22);
      uVar5 = param_1;
      FUN_1002165a4(param_1,param_2,uVar22);
      _swift_bridgeObjectRelease(uVar22);
      if ((uVar5 & 1) == 0) {
        puVar3 = &DAT_10042ae68;
        _swift_getKeyPath(&DAT_10042ae68);
        puVar6 = &DAT_10042ae90;
        _swift_getKeyPath(&DAT_10042ae90);
        Combine::Published::_get_subscript(local_c0);
        _swift_release(puVar3);
        _swift_release(puVar6);
        if (*(long *)(local_c0[0] + 0x10) == 0) {
          bVar21 = true;
        }
        else {
          _swift_bridgeObjectRetain(local_c0[0]);
          uVar5 = param_1;
          uVar16 = param_2;
          FUN_10000464c(param_1);
          bVar21 = (uVar16 & 1) == 0;
          if (!bVar21) {
            (**(code **)(lVar17 + 0x10))
                      (lVar18,*(long *)(local_c0[0] + 0x38) + *(long *)(lVar17 + 0x48) * uVar5,
                       UVar4.unknown);
          }
          _swift_bridgeObjectRelease(local_c0[0]);
        }
        (**(code **)(lVar17 + 0x38))(lVar18,bVar21,1,UVar4.unknown);
        _swift_bridgeObjectRelease(local_c0[0]);
        lVar23 = lVar18;
        (**(code **)(lVar17 + 0x30))(lVar18,1,UVar4.unknown);
        if ((int)lVar23 == 1) {
          FUN_10002a29c(lVar18,&DAT_100553d90,&DAT_10041bf10);
          if ((param_4 & 1) == 0) {
            FUN_1001da998(param_1,param_2);
          }
          else {
            FUN_1001dee2c(param_1,param_2,param_3);
          }
        }
        else {
          pcVar15 = *(code **)(lVar17 + 0x20);
          (*pcVar15)(lVar14,lVar18,UVar4.unknown);
          _swift_beginAccess((long)unaff_x20 + _TtC7Wallper14PreviewManager::validatedIDs,local_c0,
                             0x21,0);
          _swift_bridgeObjectRetain(param_2);
          puVar7 = auStack_a8;
          FUN_1001ca054(puVar7,param_1,param_2);
          _swift_endAccess(local_c0);
          _swift_bridgeObjectRelease();
          if (((ulong)puVar7 & 1) == 0) {
            pcVar15 = *(code **)(lVar17 + 8);
          }
          else {
            Swift::TaskPriority::get_utility((TaskPriority)local_a0);
            TVar8 = Swift::TaskPriority::typeMetadataAccessor();
            (**(code **)(*(long *)(TVar8.unknown + -8) + 0x38))(lVar10,0,1,TVar8.unknown);
            puVar3 = &DAT_100531a78;
            _swift_allocObject(&DAT_100531a78,0x18,7);
            local_110 = puVar3;
            _swift_weakInit(puVar3 + 0x10,unaff_x20);
            (**(code **)(lVar17 + 0x10))(lVar13,lVar14,UVar4.unknown);
            FUN_100077938(param_3,lVar12);
            bVar1 = *(byte *)(lVar17 + 0x50);
            uVar24 = (ulong)bVar1 + 0x20 & ((ulong)bVar1 ^ 0xffffffffffffffff);
            uVar20 = lVar19 + uVar24 + 7 & 0xfffffffffffffff8;
            lVar23 = uVar20 + 8;
            bVar2 = *(byte *)(lVar11 + 0x50);
            uVar16 = (ulong)bVar2 + lVar23 + 0x10 & ((ulong)bVar2 ^ 0xffffffffffffffff);
            uVar5 = uVar16 + lVar25;
            uVar26 = uVar5 & 0xfffffffffffffff8;
            puVar3 = &DAT_100532108;
            _swift_allocObject(&DAT_100532108,uVar26 + 0x10,bVar1 | bVar2 | 7);
            *(undefined8 *)(puVar3 + 0x10) = 0;
            *(undefined8 *)(puVar3 + 0x18) = 0;
            (*pcVar15)(puVar3 + uVar24,lVar13,UVar4.unknown);
            *(undefined **)(puVar3 + uVar20) = local_110;
            *(ulong *)(puVar3 + lVar23) = param_1;
            *(ulong *)((long)(puVar3 + lVar23) + 8) = param_2;
            FUN_1000f8c24(lVar12,puVar3 + uVar16);
            puVar3[uVar5] = param_4 & 1;
            *(undefined8 *)(puVar3 + uVar26 + 8) = uVar9;
            _swift_bridgeObjectRetain(param_2);
            FUN_100176d50(0,0,lVar10,&DAT_10042af60,puVar3);
            _swift_release();
            FUN_10002a29c(lVar10,&DAT_100561090,&DAT_10041c870);
            pcVar15 = *(code **)(lVar17 + 8);
          }
          (*pcVar15)(lVar14,UVar4.unknown);
        }
      }
    }
  }
  return;
}

