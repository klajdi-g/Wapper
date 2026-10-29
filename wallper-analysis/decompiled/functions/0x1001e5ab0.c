// rea decompile_all
// name: FUN_1001e5ab0
// address: 0x1001e5ab0
// body: available
// range: 0x1001e5ab0-0x1001e5c37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001e5c34 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001e5ab0(void)

{
  undefined *puVar1;
  URL self;
  NSURL *pNVar2;
  NSDictionary *pNVar3;
  ID IVar4;
  undefined *puVar5;
  MainActor *pMVar6;
  UnownedSerialExecutor UVar7;
  undefined8 uVar8;
  MainActor *this;
  long unaff_x22;
  String SVar9;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x308);
  this = *(MainActor **)(unaff_x22 + 0x2f8);
  puVar5 = &DAT_10054c048;
  FUN_100002f94(&DAT_10054c048,&DAT_10041d7b0);
  _swift_initStackObject();
  *(undefined8 *)(puVar5 + 0x18) = 2;
  *(undefined8 *)(puVar5 + 0x10) = 1;
  SVar9 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  *(String *)(puVar5 + 0x20) = SVar9;
  *(undefined **)(puVar5 + 0x48) = PTR___type_metadata_for_Swift_Bool_100523b70;
  puVar5[0x30] = 0;
  puVar1 = puVar5;
  FUN_100005b10(puVar5);
  _swift_setDeallocating(puVar5);
  FUN_10002a29c((String *)(puVar5 + 0x20),&DAT_10054a1c0,&DAT_10041a250);
  self.unknown = &_OBJC_CLASS___AVURLAsset;
  _objc_allocWithZone();
  pNVar2 = Foundation::URL::_bridgeToObjectiveC(self);
  pNVar3 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(puVar1);
  IVar4 = objc_stub::initWithURL_options_((ID)self.unknown,pNVar2,pNVar3);
  *(ID *)(unaff_x22 + 0x360) = IVar4;
  puVar5 = &_OBJC_CLASS___AVAssetImageGenerator;
  _objc_allocWithZone();
  IVar4 = objc_stub::initWithAsset_((ID)puVar5,IVar4);
  *(ID *)(unaff_x22 + 0x368) = IVar4;
  pMVar6 = (MainActor *)objc_stub::setAppliesPreferredTrackTransform_(IVar4,1);
  pMVar6 = Swift::MainActor::get_shared(this,pMVar6);
  *(MainActor **)(unaff_x22 + 0x370) = pMVar6;
  UVar7 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_1001e5c38,UVar7.unknown,uVar8);
  return;
}

