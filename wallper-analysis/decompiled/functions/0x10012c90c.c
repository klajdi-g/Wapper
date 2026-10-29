// rea decompile_all
// name: thunk_FUN_100216304
// address: 0x10012c90c
// body: available
// range: 0x10012c90c-0x10012c90f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_100216304(void)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  Published *pPVar5;
  TaskPriority TVar6;
  MainActor *pMVar7;
  MainActor *this;
  MainActor *pMVar8;
  undefined8 *puVar9;
  long extraout_x8;
  long lVar10;
  long lVar11;
  undefined1 auStack_60 [8];
  long lStack_58;
  
  puVar3 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_10042b5e8;
  _swift_getKeyPath(&DAT_10042b5e8);
  puVar4 = &DAT_10042b610;
  _swift_getKeyPath(&DAT_10042b610);
  Combine::Published::_get_subscript(&lStack_58);
  _swift_release(puVar3);
  _swift_release(puVar4);
  lVar10 = *(long *)(lStack_58 + 0x10);
  _swift_bridgeObjectRelease();
  if (lVar10 != 0) {
    puVar3 = &DAT_10042b4f8;
    _swift_getKeyPath(&DAT_10042b4f8);
    puVar4 = &DAT_10042b520;
    _swift_getKeyPath(&DAT_10042b520);
    Combine::Published::_get_subscript(&lStack_58);
    _swift_release(puVar3);
    _swift_release(puVar4);
    lVar10 = lStack_58 + 1;
    if (SCARRY8(lStack_58,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1002165a0);
      (*pcVar2)();
    }
    puVar3 = &DAT_10042b5e8;
    _swift_getKeyPath(&DAT_10042b5e8);
    puVar4 = &DAT_10042b610;
    _swift_getKeyPath(&DAT_10042b610);
    Combine::Published::_get_subscript(&lStack_58);
    _swift_release(puVar3);
    _swift_release(puVar4);
    lVar11 = *(long *)(lStack_58 + 0x10);
    _swift_bridgeObjectRelease();
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1002165a4);
      (*pcVar2)();
    }
    lVar1 = 0;
    if (lVar11 != 0) {
      lVar1 = lVar10 / lVar11;
    }
    pPVar5 = (Published *)&DAT_10042b4f8;
    _swift_getKeyPath(&DAT_10042b4f8);
    _swift_getKeyPath(&DAT_10042b520);
    lStack_58 = lVar10 - lVar1 * lVar11;
    _swift_retain();
    Combine::Published::_set_subscript(pPVar5,&lStack_58);
    TVar6 = Swift::TaskPriority::typeMetadataAccessor();
    (**(code **)(*(long *)(TVar6.unknown + -8) + 0x38))(auStack_60 + -extraout_x8,1,1,TVar6.unknown)
    ;
    pMVar7 = (MainActor *)&DAT_1005333a8;
    _swift_allocObject(&DAT_1005333a8,0x18,7);
    _swift_weakInit(pMVar7 + 0x10);
    this = Swift::MainActor::typeMetadataAccessor();
    puVar3 = PTR_typeMetadataAccessor_1005246d8;
    pMVar8 = pMVar7;
    _swift_retain();
    pMVar8 = Swift::MainActor::get_shared(this,pMVar8);
    puVar9 = &DAT_100558b80;
    FUN_1000036d0(&DAT_100558b80,puVar3,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
    puVar3 = &DAT_1005333d0;
    _swift_allocObject(&DAT_1005333d0,0x31,7);
    *(MainActor **)(puVar3 + 0x10) = pMVar8;
    *(undefined8 **)(puVar3 + 0x18) = puVar9;
    *(MainActor **)(puVar3 + 0x20) = pMVar7;
    *(undefined8 *)(puVar3 + 0x28) = 0;
    puVar3[0x30] = 1;
    _swift_release(pMVar7);
    FUN_1001b1e74(0,0,auStack_60 + -extraout_x8,&DAT_10042b638,puVar3);
    _swift_release();
    FUN_100217d50();
  }
  return;
}

