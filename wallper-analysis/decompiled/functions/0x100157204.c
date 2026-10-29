// rea decompile_all
// name: FUN_100157204
// address: 0x100157204
// body: available
// range: 0x100157204-0x1001573c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001573a8 to 0x1002b6ee8 FUN_1002b6ee8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100157204(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  URL url;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long *plVar7;
  URL UVar8;
  URLRequest *this;
  code *pcVar9;
  long unaff_x22;
  String SVar10;
  String SVar11;
  String SVar12;
  
  if (DAT_100559108 != -1) {
    _swift_once(&DAT_100559108,FUN_10028f180);
  }
  this = *(URLRequest **)(unaff_x22 + 0x78);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  url.unknown = *(undefined **)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
  puVar3 = *(undefined **)(unaff_x22 + 0x38);
  lVar5 = *(long *)(unaff_x22 + 0x40);
  SVar12 = *(String *)(unaff_x22 + 0x28);
  puVar6 = puVar3;
  FUN_100099338(puVar3,&DAT_100577d98);
  UVar8.unknown = puVar3;
  (**(code **)(lVar5 + 0x10))(uVar2,puVar6);
  SVar10.bridgeObject = (void *)0xe600000000000000;
  SVar10.str = (char *)0x736f65646976;
  Foundation::URL::appendingPathComponent(SVar10,UVar8);
  pcVar9 = *(code **)(lVar5 + 8);
  (*pcVar9)(uVar2,puVar3);
  SVar11.bridgeObject = (void *)0xea00000000006e65;
  SVar11.str = (char *)0x657263736b636f6c;
  Foundation::URL::appendingPathComponent(SVar11,UVar8);
  (*pcVar9)(uVar4,puVar3);
  Foundation::URL::appendingPathComponent(SVar12,UVar8);
  (*pcVar9)(uVar1,puVar3);
  SVar12.bridgeObject = (void *)0xe300000000000000;
  SVar12.str = (char *)0x6c7275;
  Foundation::URL::appendingPathComponent(SVar12,UVar8);
  (*pcVar9)(url.unknown,puVar3);
  (**(code **)(lVar5 + 0x20))(url.unknown,uVar1,puVar3);
  Foundation::URLRequest::init(url,(NSURLRequestCachePolicy)0x0,60.0);
  Foundation::URLRequest::_set_httpMethod(this);
  plVar7 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x80) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1001573c4;
  FUN_1002b6ee8(*(undefined8 *)(unaff_x22 + 0x78));
  return;
}

