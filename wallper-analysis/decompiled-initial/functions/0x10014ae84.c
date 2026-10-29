// rea decompile_all
// name: FUN_10014ae84
// address: 0x10014ae84
// body: available
// range: 0x10014ae84-0x10014b073 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10014b058 to 0x1002b6ee8 FUN_1002b6ee8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10014ae84(void)

{
  undefined *puVar1;
  long *plVar2;
  URL UVar3;
  URLRequest *this;
  Published *pPVar4;
  undefined8 uVar5;
  URL url;
  long unaff_x22;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  code *pcVar12;
  String SVar13;
  String SVar14;
  
  pPVar4 = *(Published **)(unaff_x22 + 0x1c0);
  puVar1 = &DAT_100428040;
  _swift_getKeyPath(&DAT_100428040);
  puVar7 = &DAT_100428068;
  _swift_getKeyPath(&DAT_100428068);
  *(undefined8 *)(unaff_x22 + 0x138) = 0;
  *(undefined8 *)(unaff_x22 + 0x140) = 1;
  _swift_retain(pPVar4);
  Combine::Published::_set_subscript(pPVar4,unaff_x22 + 0x138,pPVar4,puVar1,puVar7);
  if (DAT_100559108 != -1) {
    _swift_once(&DAT_100559108,FUN_10028f180);
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0x268);
  url.unknown = *(undefined **)(unaff_x22 + 0x260);
  uVar8 = *(undefined8 *)(unaff_x22 + 600);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x250);
  lVar9 = *(long *)(unaff_x22 + 0x248);
  puVar7 = *(undefined **)(unaff_x22 + 0x240);
  this = *(URLRequest **)(unaff_x22 + 0x238);
  lVar11 = *(long *)(unaff_x22 + 0x1c0);
  puVar1 = puVar7;
  FUN_100099338(puVar7,&DAT_100577d98);
  pcVar12 = *(code **)(lVar9 + 0x10);
  UVar3.unknown = puVar7;
  (*pcVar12)(uVar5,puVar1);
  SVar13.bridgeObject = (void *)0xe800000000000000;
  SVar13.str = (char *)0x7365736e6563696c;
  Foundation::URL::appendingPathComponent(SVar13,UVar3);
  pcVar10 = *(code **)(lVar9 + 8);
  *(code **)(unaff_x22 + 0x288) = pcVar10;
  (*pcVar10)(uVar5,puVar7);
  SVar14.bridgeObject = (void *)0xe600000000000000;
  SVar14.str = (char *)0x737574617473;
  Foundation::URL::appendingPathComponent(SVar14,UVar3);
  (*pcVar10)(uVar8,puVar7);
  Foundation::URL::appendingPathComponent
            (*(String *)(lVar11 + _TtC7Wallper14LicenseManager::hwid),UVar3);
  (*pcVar10)(url.unknown,puVar7);
  (*pcVar12)(url.unknown,uVar6,puVar7);
  Foundation::URLRequest::init(url,(NSURLRequestCachePolicy)0x0,60.0);
  Foundation::URLRequest::_set_httpMethod(this);
  plVar2 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x290) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10014b074;
  FUN_1002b6ee8(*(undefined8 *)(unaff_x22 + 0x238));
  return;
}

