// rea decompile_all
// name: FUN_1001f2160
// address: 0x1001f2160
// body: available
// range: 0x1001f2160-0x1001f22c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001f22ac to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1001f2160(undefined8 param_1)

{
  undefined8 uVar1;
  UUID UVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  MainActor *this;
  long unaff_x22;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  String SVar11;
  String SVar12;
  
  FUN_10020c5dc();
  _swift_initStaticObject();
  *(undefined8 *)(unaff_x22 + 0x5e8) = param_1;
  if (DAT_100557298 != -1) {
    _swift_once(&DAT_100557298,FUN_1001f06e8);
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x5c8);
  this = *(MainActor **)(unaff_x22 + 0x5b8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x540);
  puVar7 = *(undefined **)(unaff_x22 + 0x538);
  lVar9 = *(long *)(unaff_x22 + 0x528);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x520);
  uVar1 = uVar8;
  FUN_100099338(uVar8,&DAT_100577d00);
  pcVar10 = *(code **)(lVar9 + 0x10);
  *(code **)(unaff_x22 + 0x5f0) = pcVar10;
  (*pcVar10)(uVar6,uVar1,uVar8);
  UVar2.unknown = puVar7;
  (*pcVar10)(puVar7,uVar1,uVar8);
  SVar11 = Foundation::UUID::get_uuidString(UVar2);
  pcVar10 = *(code **)(lVar9 + 8);
  *(code **)(unaff_x22 + 0x5f8) = pcVar10;
  (*pcVar10)(puVar7,uVar8);
  SVar12 = Swift::String::uppercased(SVar11);
  _swift_bridgeObjectRelease(SVar11.bridgeObject);
  *(String *)(unaff_x22 + 0x600) = SVar12;
  *(undefined **)(unaff_x22 + 0x610) = &_OBJC_CLASS___NSFileManager;
  pMVar3 = (MainActor *)NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  *(MainActor **)(unaff_x22 + 0x618) = pMVar3;
  pMVar3 = Swift::MainActor::get_shared(this,pMVar3);
  *(MainActor **)(unaff_x22 + 0x620) = pMVar3;
  UVar4 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_1001f22c8,UVar4.unknown,uVar5);
  return;
}

