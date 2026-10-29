// rea decompile_all
// name: FUN_1001e551c
// address: 0x1001e551c
// body: available
// range: 0x1001e551c-0x1001e574f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001e56b4 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001e551c(void)

{
  ulong uVar1;
  URL UVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  MainActor *pMVar6;
  UnownedSerialExecutor UVar7;
  URL UVar8;
  long lVar9;
  code *pcVar10;
  undefined8 uVar11;
  long unaff_x22;
  MainActor *this;
  undefined8 uVar12;
  long lVar13;
  String SVar14;
  
  uVar11 = *(undefined8 *)(unaff_x22 + 0x2f0);
  lVar9 = *(long *)(unaff_x22 + 0x2e8);
  UVar2 = Foundation::URL::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x310) = UVar2.unknown;
  lVar13 = *(long *)(UVar2.unknown + -8);
  *(long *)(unaff_x22 + 0x318) = lVar13;
  uVar1 = *(long *)(lVar13 + 0x40) + 0xf;
  uVar3 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar3);
  uVar4 = lVar9 + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  FUN_100077938(uVar11,uVar4);
  uVar5 = uVar4;
  (**(code **)(lVar13 + 0x30))(uVar4,1,UVar2.unknown);
  if ((int)uVar5 == 1) {
    uVar11 = *(undefined8 *)(unaff_x22 + 0x308);
    this = *(MainActor **)(unaff_x22 + 0x2f8);
    SVar14 = *(String *)(unaff_x22 + 0x2c8);
    UVar8.unknown = &DAT_10041bf10;
    FUN_10002a29c(uVar4,&DAT_100553d90);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar3);
    uVar5 = uVar1 & 0xfffffffffffffff0;
    _swift_task_alloc();
    *(ulong *)(unaff_x22 + 800) = uVar5;
    pMVar6 = (MainActor *)(uVar1 & 0xfffffffffffffff0);
    _swift_task_alloc();
    Foundation::URL::appendingPathComponent(SVar14,UVar8);
    SVar14.bridgeObject = (void *)0xe300000000000000;
    SVar14.str = (char *)0x676e70;
    Foundation::URL::appendingPathExtension(SVar14,UVar8);
    pcVar10 = *(code **)(lVar13 + 8);
    *(code **)(unaff_x22 + 0x328) = pcVar10;
    (*pcVar10)(pMVar6,UVar2.unknown);
    _swift_task_dealloc();
    *(undefined8 *)(unaff_x22 + 0x330) = _TtC7Wallper14PreviewManager::fm;
    pMVar6 = Swift::MainActor::get_shared(this,pMVar6);
    *(MainActor **)(unaff_x22 + 0x338) = pMVar6;
    UVar7 = Swift::Actor::get_unownedExecutor();
    _swift_task_switch(FUN_1001e5750,UVar7.unknown,uVar11);
    return;
  }
  uVar11 = *(undefined8 *)(unaff_x22 + 0x2f0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x2b8);
  pcVar10 = *(code **)(lVar13 + 0x20);
  (*pcVar10)(uVar3,uVar4,UVar2.unknown);
  _swift_task_dealloc(uVar4);
  FUN_10002a29c(uVar11,&DAT_100553d90,&DAT_10041bf10);
  (*pcVar10)(uVar12,uVar3,UVar2.unknown);
  (**(code **)(lVar13 + 0x38))(uVar12,0,1,UVar2.unknown);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar11);
                    /* WARNING: Could not recover jumptable at 0x0001001e574c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

