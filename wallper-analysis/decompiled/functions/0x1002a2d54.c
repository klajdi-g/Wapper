// rea decompile_all
// name: FUN_1002a2d54
// address: 0x1002a2d54
// body: available
// range: 0x1002a2d54-0x1002a2e8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002a2e8c to 0x1004147c8 _swift_continuation_await (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002a2d54(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined7 extraout_var;
  code *pcVar3;
  NSArray *pNVar4;
  long lVar5;
  void *pvVar6;
  ID self;
  long unaff_x22;
  String SVar7;
  
  puVar2 = &DAT_100549eb0;
  FUN_100002f94(&DAT_100549eb0,&DAT_100426be0);
  _swift_allocObject();
  *(undefined8 *)(puVar2 + 0x18) = 2;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  pvVar6 = (void *)0x0;
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0x1a,0,0,0x1a,0,0);
  *(byte *)(unaff_x22 + 0xb8) = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    pcVar3 = FUN_1002a50d4;
    FUN_1002a3454();
    SVar7.bridgeObject = pvVar6;
    SVar7.str = (char *)pcVar3;
  }
  else {
    SVar7 = AVFoundation::AVPartialAsyncProperty::get_backDeployedKey
                      (*(AVPartialAsyncProperty **)(unaff_x22 + 0x90),
                       (AVPartialAsyncProperty *)CONCAT71(extraout_var,bVar1));
  }
  self = *(ID *)(unaff_x22 + 0x98);
  *(String *)(puVar2 + 0x20) = SVar7;
  pNVar4 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  *(NSArray **)(unaff_x22 + 0xb0) = pNVar4;
  _swift_release(puVar2);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1002a2e90;
  lVar5 = unaff_x22 + 0x10;
  _swift_continuation_init(lVar5,0);
  puVar2 = &DAT_10054c080;
  FUN_100002f94(&DAT_10054c080,&DAT_10041d820);
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_100521110;
  *(undefined **)(unaff_x22 + 0x88) = puVar2;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(code **)(unaff_x22 + 0x60) = FUN_1000426d4;
  *(undefined **)(unaff_x22 + 0x68) = &DAT_100537898;
  *(long *)(unaff_x22 + 0x70) = lVar5;
  objc_stub::loadValuesAsynchronouslyForKeys_completionHandler_(self,pNVar4);
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}

