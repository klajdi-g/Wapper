// rea decompile_all
// name: FUN_10019d9b4
// address: 0x10019d9b4
// body: available
// range: 0x10019d9b4-0x10019dab3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10019d9b4(void)

{
  undefined8 uVar1;
  Published *pPVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x38);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x68));
  _swift_beginAccess(lVar5 + 0x10,unaff_x22 + 0x10,0,0);
  pPVar2 = (Published *)(lVar5 + 0x10);
  _swift_weakLoadStrong();
  if (pPVar2 != (Published *)0x0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar6 = *(undefined8 *)
             ((long)&pPVar2->unknown + _TtC7Wallper17NowPlayingManager::dominantColorTuples);
    *(undefined8 *)((long)&pPVar2->unknown + _TtC7Wallper17NowPlayingManager::dominantColorTuples) =
         *(undefined8 *)(unaff_x22 + 0x58);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar6);
    puVar3 = &DAT_100429ce8;
    _swift_getKeyPath(&DAT_100429ce8);
    puVar4 = &DAT_100429d10;
    _swift_getKeyPath(&DAT_100429d10);
    *(undefined8 *)(unaff_x22 + 0x28) = uVar1;
    _swift_bridgeObjectRetain(uVar1);
    _swift_retain(pPVar2);
    Combine::Published::_set_subscript(pPVar2,(undefined8 *)(unaff_x22 + 0x28),pPVar2,puVar3,puVar4)
    ;
    FUN_1001790d4(1);
    _swift_release(pPVar2);
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x60));
  _swift_bridgeObjectRelease(uVar1);
  _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010019dab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

