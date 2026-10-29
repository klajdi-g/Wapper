// rea decompile_all
// name: FUN_10013d8a4
// address: 0x10013d8a4
// body: available
// range: 0x10013d8a4-0x10013da53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10013da38 to 0x1002b6ee8 FUN_1002b6ee8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10013d8a4(void)

{
  URL url;
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  String SVar6;
  undefined *puVar7;
  long *plVar8;
  URL UVar9;
  URLRequest *this;
  long unaff_x22;
  code *pcVar10;
  code *pcVar11;
  String SVar12;
  String SVar13;
  
  if (DAT_100559108 != -1) {
    _swift_once(&DAT_100559108,FUN_10028f180);
  }
  url.unknown = *(undefined **)(unaff_x22 + 0x58);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
  puVar2 = *(undefined **)(unaff_x22 + 0x38);
  lVar5 = *(long *)(unaff_x22 + 0x40);
  this = *(URLRequest **)(unaff_x22 + 0x30);
  SVar6 = *(String *)(unaff_x22 + 0x10);
  puVar7 = puVar2;
  FUN_100099338(puVar2,&DAT_100577d98);
  pcVar10 = *(code **)(lVar5 + 0x10);
  UVar9.unknown = puVar2;
  (*pcVar10)(uVar1,puVar7);
  SVar12.bridgeObject = (void *)0xe500000000000000;
  SVar12.str = (char *)0x7372657375;
  Foundation::URL::appendingPathComponent(SVar12,UVar9);
  pcVar11 = *(code **)(lVar5 + 8);
  *(code **)(unaff_x22 + 0x80) = pcVar11;
  (*pcVar11)(uVar1,puVar2);
  SVar13.bridgeObject = (void *)0xee0065736e656369;
  SVar13.str = (char *)0x6c2d6b6e696c6e75;
  Foundation::URL::appendingPathComponent(SVar13,UVar9);
  (*pcVar11)(uVar4,puVar2);
  Foundation::URL::appendingPathComponent(SVar6,UVar9);
  (*pcVar11)(url.unknown,puVar2);
  (*pcVar10)(url.unknown,uVar3,puVar2);
  Foundation::URLRequest::init(url,(NSURLRequestCachePolicy)0x0,60.0);
  Foundation::URLRequest::_set_httpMethod(this);
  Foundation::URLRequest::set_timeoutInterval(this,15.0);
  plVar8 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x88) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_10013da54;
  FUN_1002b6ee8(*(undefined8 *)(unaff_x22 + 0x30));
  return;
}

