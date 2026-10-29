// rea decompile_all
// name: FUN_10015c704
// address: 0x10015c704
// body: available
// range: 0x10015c704-0x10015cb3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10015c704(long param_1,uint param_2)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  ulong uVar4;
  void *pvVar5;
  String SVar6;
  code *pcVar7;
  undefined *puVar8;
  ulong uVar9;
  Task TVar10;
  Published *pPVar11;
  TaskPriority TVar12;
  MainActor *this;
  MainActor *pMVar13;
  undefined8 *puVar14;
  char *pcVar15;
  void *pvVar16;
  long extraout_x8;
  undefined8 uVar17;
  MainActor *unaff_x20;
  long lVar18;
  undefined *puVar19;
  long lVar20;
  ulong uVar21;
  undefined8 uVar22;
  ulong uVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  undefined1 auStack_b0 [4];
  uint local_ac;
  char *local_a8;
  ulong local_a0;
  char *local_98;
  long local_90;
  ulong local_88;
  ulong uStack_80;
  long local_78 [3];
  
  puVar19 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar19 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  if ((param_2 & 1) == 0) {
    puVar19 = &DAT_100428e00;
    _swift_getKeyPath(&DAT_100428e00);
    puVar8 = &DAT_100428e28;
    _swift_getKeyPath(&DAT_100428e28);
    Combine::Published::_get_subscript(local_78);
    _swift_release(puVar19);
    _swift_release(puVar8);
    lVar18 = *(long *)(local_78[0] + 0x10);
    _swift_bridgeObjectRelease();
    if (lVar18 != 0) goto LAB_10015c908;
  }
  lVar18 = _TtC7Wallper13LyricsManager::unavailable;
  pMVar13 = unaff_x20 + _TtC7Wallper13LyricsManager::track;
  uVar21 = *(ulong *)(pMVar13 + 8);
  if (uVar21 != 0) {
    uVar23 = *(ulong *)pMVar13;
    pcVar2 = ((String *)(pMVar13 + 0x20))->str;
    uVar4 = *(ulong *)(pMVar13 + 0x28);
    SVar6 = *(String *)(pMVar13 + 0x20);
    pcVar3 = ((String *)(pMVar13 + 0x10))->str;
    pvVar5 = *(void **)(pMVar13 + 0x18);
    SVar25 = *(String *)(pMVar13 + 0x10);
    local_ac = param_2;
    local_90 = param_1;
    _swift_beginAccess(unaff_x20 + _TtC7Wallper13LyricsManager::unavailable,local_78,0,0);
    uVar22 = *(undefined8 *)(unaff_x20 + lVar18);
    pcVar15 = pcVar3;
    pvVar16 = pvVar5;
    local_a0 = uVar23;
    local_88 = uVar23;
    uStack_80 = uVar21;
    FUN_100163f7c(uVar23,uVar21,pcVar3,pvVar5,pcVar2,uVar4);
    _swift_bridgeObjectRetain(uVar22);
    _swift_bridgeObjectRetain(uVar21);
    SVar24.bridgeObject = (void *)0xe100000000000000;
    SVar24.str = (char *)0x7c;
    SVar26.bridgeObject = pvVar16;
    SVar26.str = pcVar15;
    Swift::String::append(SVar24,SVar26);
    uVar23 = uStack_80;
    _swift_bridgeObjectRetain(uStack_80);
    SVar27.bridgeObject = pvVar16;
    SVar27.str = pcVar15;
    local_a8 = pcVar3;
    Swift::String::append(SVar25,SVar27);
    _swift_bridgeObjectRelease(uVar23);
    uVar23 = uStack_80;
    _swift_bridgeObjectRetain(uStack_80);
    SVar25.bridgeObject = (void *)0xe100000000000000;
    SVar25.str = (char *)0x7c;
    SVar28.bridgeObject = pvVar16;
    SVar28.str = pcVar15;
    Swift::String::append(SVar25,SVar28);
    _swift_bridgeObjectRelease(uVar23);
    uVar23 = uStack_80;
    _swift_bridgeObjectRetain(uStack_80);
    SVar29.bridgeObject = pvVar16;
    SVar29.str = pcVar15;
    local_98 = pcVar2;
    Swift::String::append(SVar6,SVar29);
    _swift_bridgeObjectRelease(uVar23);
    uVar23 = uStack_80;
    uVar9 = local_88;
    FUN_1002165a4(local_88,uStack_80,uVar22);
    _swift_bridgeObjectRelease(uVar23);
    _swift_bridgeObjectRelease(uVar22);
    lVar18 = _TtC7Wallper13LyricsManager::fetchTask;
    if ((uVar9 & 1) == 0) {
      puVar19 = *(undefined **)(unaff_x20 + _TtC7Wallper13LyricsManager::fetchTask);
      if (puVar19 != (undefined *)0x0) {
        TVar10.unknown = puVar19;
        _swift_retain();
        Swift::Task::cancel(TVar10);
        _swift_release(puVar19);
      }
      lVar1 = *(long *)(unaff_x20 + _TtC7Wallper13LyricsManager::fetchGeneration) + 1;
      if (!SCARRY8(*(long *)(unaff_x20 + _TtC7Wallper13LyricsManager::fetchGeneration),1)) {
        *(long *)(unaff_x20 + _TtC7Wallper13LyricsManager::fetchGeneration) = lVar1;
        if (local_90 == 0) {
          puVar19 = &DAT_100428e00;
          _swift_getKeyPath(&DAT_100428e00);
          puVar8 = &DAT_100428e28;
          _swift_getKeyPath(&DAT_100428e28);
          Combine::Published::_get_subscript(&local_88);
          _swift_release(puVar19);
          _swift_release(puVar8);
          lVar20 = *(long *)(local_88 + 0x10);
          _swift_bridgeObjectRelease();
          if (lVar20 == 0) {
            pPVar11 = (Published *)&DAT_100428e90;
            _swift_getKeyPath(&DAT_100428e90);
            _swift_getKeyPath(&DAT_100428eb8);
            local_88 = CONCAT71(local_88._1_7_,1);
            _swift_retain();
            Combine::Published::_set_subscript(pPVar11,&local_88);
          }
        }
        TVar12 = Swift::TaskPriority::typeMetadataAccessor();
        (**(code **)(*(long *)(TVar12.unknown + -8) + 0x38))
                  (auStack_b0 + -extraout_x8,1,1,TVar12.unknown);
        this = Swift::MainActor::typeMetadataAccessor();
        puVar19 = PTR_typeMetadataAccessor_1005246d8;
        pMVar13 = unaff_x20;
        _swift_retain();
        pMVar13 = Swift::MainActor::get_shared(this,pMVar13);
        puVar14 = &DAT_100558b80;
        FUN_1000036d0(&DAT_100558b80,puVar19,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
        puVar19 = &DAT_10052f3b8;
        _swift_allocObject(&DAT_10052f3b8,0x70,7);
        *(MainActor **)(puVar19 + 0x10) = pMVar13;
        *(undefined8 **)(puVar19 + 0x18) = puVar14;
        *(MainActor **)(puVar19 + 0x20) = unaff_x20;
        *(ulong *)(puVar19 + 0x28) = local_a0;
        *(ulong *)(puVar19 + 0x30) = uVar21;
        *(char **)(puVar19 + 0x38) = local_a8;
        *(void **)(puVar19 + 0x40) = pvVar5;
        *(char **)(puVar19 + 0x48) = local_98;
        *(ulong *)(puVar19 + 0x50) = uVar4;
        puVar19[0x58] = (byte)local_ac & 1;
        *(long *)(puVar19 + 0x60) = local_90;
        *(long *)(puVar19 + 0x68) = lVar1;
        uVar22 = 0;
        FUN_1001b1e74(0,0,auStack_b0 + -extraout_x8,&DAT_100428ee0,puVar19);
        uVar17 = *(undefined8 *)(unaff_x20 + lVar18);
        *(undefined8 *)(unaff_x20 + lVar18) = uVar22;
        _swift_release(uVar17);
        return;
      }
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10015cb3c);
      (*pcVar7)();
    }
    _swift_bridgeObjectRelease(uVar4);
    _swift_bridgeObjectRelease(pvVar5);
    _swift_bridgeObjectRelease(uVar21);
  }
LAB_10015c908:
  pPVar11 = (Published *)&DAT_100428e90;
  _swift_getKeyPath(&DAT_100428e90);
  _swift_getKeyPath(&DAT_100428eb8);
  local_88 = local_88 & 0xffffffffffffff00;
  _swift_retain();
  Combine::Published::_set_subscript(pPVar11,&local_88);
  return;
}

