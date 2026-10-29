// rea decompile_all
// name: FUN_10019b4c4
// address: 0x10019b4c4
// body: available
// range: 0x10019b4c4-0x10019b6cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10019b5e4 to 0x100413d18 /usr/lib/swift/libswift_Concurrency.dylib::Swift::$withCheckedContinuation (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10019b6ac to 0x1004147c8 _swift_continuation_await (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10019b4c4(void)

{
  char *pcVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  UnsafeContinuation<undefined,undefined> continuation;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x22;
  ulong uVar8;
  String isolation;
  String function;
  
  uVar7 = 0xd000000000000131;
  if (*(char *)(unaff_x22 + 0xdc) == '\0') {
    pcVar1 = 
    "tell application \"Music\"\n    if player state is playing then\n        set trackName to name of current track\n        set trackArtist to artist of current track\n        set trackAlbum to album of current track\n        return trackName & \"|||\" & trackArtist & \"|||\" & trackAlbum\n    end if\nend tell\nreturn \"\""
    ;
  }
  else {
    if (*(char *)(unaff_x22 + 0xdc) != '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010019b6cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    pcVar1 = 
    "tell application \"Spotify\"\n    if player state is playing then\n        set trackName to name of current track\n        set trackArtist to artist of current track\n        set trackAlbum to album of current track\n        return trackName & \"|||\" & trackArtist & \"|||\" & trackAlbum\n    end if\nend tell\nreturn \"\""
    ;
    uVar7 = 0xd000000000000133;
  }
  *(char **)(unaff_x22 + 0x98) = pcVar1 + -0x20;
  uVar8 = (ulong)(pcVar1 + -0x20) | 0x8000000000000000;
  lVar3 = 0;
  FUN_10028e828();
  uVar4 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa0) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar7;
  *(ulong *)(unaff_x22 + 0x68) = uVar8;
  bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar2 & 1) != 0) {
    plVar5 = (long *)(ulong)*(uint *)(PTR__withCheckedContinuation_100524798 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xa8) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_10019b6d0;
    isolation.bridgeObject = (void *)0x0;
    isolation.str = (char *)uVar4;
    Swift::_withCheckedContinuation(isolation);
    return;
  }
  *(ulong *)(unaff_x22 + 0x38) = uVar4;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_10019b724;
  continuation.unknown = (undefined *)(unaff_x22 + 0x10);
  _swift_continuation_init(continuation.unknown,0);
  puVar6 = &DAT_100555ea0;
  FUN_100002f94(&DAT_100555ea0,&DAT_100429ed0);
  lVar3 = *(long *)(puVar6 + -8);
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar4);
  function.bridgeObject = (void *)0xe700000000000000;
  function.str = (char *)0x293a5f286e7572;
  Swift::CheckedContinuation::init(continuation,function);
  FUN_10028e2e0(uVar4,uVar7,uVar8);
  _swift_bridgeObjectRelease(uVar8);
  (**(code **)(lVar3 + 8))(uVar4,puVar6);
  _swift_task_dealloc(uVar4);
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}

