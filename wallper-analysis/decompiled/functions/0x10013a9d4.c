// rea decompile_all
// name: FUN_10013a9d4
// address: 0x10013a9d4
// body: available
// range: 0x10013a9d4-0x10013ab77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10013ab5c to 0x1002b6ee8 FUN_1002b6ee8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10013a9d4(void)

{
  URL url;
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long *plVar7;
  URL UVar8;
  URLRequest *this;
  long unaff_x22;
  code *pcVar9;
  long lVar10;
  code *pcVar11;
  String SVar12;
  String SVar13;
  
  if (DAT_100559108 != -1) {
    _swift_once(&DAT_100559108,FUN_10028f180);
  }
  url.unknown = *(undefined **)(unaff_x22 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
  puVar2 = *(undefined **)(unaff_x22 + 0x70);
  lVar5 = *(long *)(unaff_x22 + 0x78);
  this = *(URLRequest **)(unaff_x22 + 0x68);
  lVar10 = *(long *)(unaff_x22 + 0x20);
  puVar6 = puVar2;
  FUN_100099338(puVar2,&DAT_100577d98);
  pcVar11 = *(code **)(lVar5 + 0x10);
  UVar8.unknown = puVar2;
  (*pcVar11)(uVar1,puVar6);
  SVar12.bridgeObject = (void *)0xe500000000000000;
  SVar12.str = (char *)0x7372657375;
  Foundation::URL::appendingPathComponent(SVar12,UVar8);
  pcVar9 = *(code **)(lVar5 + 8);
  *(code **)(unaff_x22 + 0xb8) = pcVar9;
  (*pcVar9)(uVar1,puVar2);
  SVar13.bridgeObject = (void *)0xe700000000000000;
  SVar13.str = (char *)0x73656369766564;
  Foundation::URL::appendingPathComponent(SVar13,UVar8);
  (*pcVar9)(uVar4,puVar2);
  Foundation::URL::appendingPathComponent
            (*(String *)(lVar10 + _TtC7Wallper13DeviceManager::hwid),UVar8);
  (*pcVar9)(url.unknown,puVar2);
  (*pcVar11)(url.unknown,uVar3,puVar2);
  Foundation::URLRequest::init(url,(NSURLRequestCachePolicy)0x0,60.0);
  Foundation::URLRequest::_set_httpMethod(this);
  Foundation::URLRequest::set_timeoutInterval(this,15.0);
  plVar7 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xc0) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_10013ab78;
  FUN_1002b6ee8(*(undefined8 *)(unaff_x22 + 0x68));
  return;
}

