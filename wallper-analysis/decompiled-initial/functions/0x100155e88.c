// rea decompile_all
// name: FUN_100155e88
// address: 0x100155e88
// body: available
// range: 0x100155e88-0x10015652f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100156430 to 0x1002b749c FUN_1002b749c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100155ec4) */
/* WARNING: Removing unreachable block (ram,0x0001001564e8) */
/* WARNING: Removing unreachable block (ram,0x000100156004) */
/* WARNING: Removing unreachable block (ram,0x000100156500) */
/* WARNING: Removing unreachable block (ram,0x000100156138) */
/* WARNING: Removing unreachable block (ram,0x000100156434) */
/* WARNING: Removing unreachable block (ram,0x000100156190) */
/* WARNING: Removing unreachable block (ram,0x000100156440) */

void FUN_100155e88(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  void *pvVar4;
  URL url;
  undefined8 uVar5;
  long lVar6;
  String SVar7;
  Data DVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 uVar11;
  char *pcVar12;
  URL UVar13;
  void *pvVar14;
  long unaff_x22;
  code *pcVar15;
  URLRequest *this;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  
  uVar11 = 0;
  DVar8 = Foundation::Data::_init(*(undefined **)(unaff_x22 + 0xe8));
  *(undefined **)(unaff_x22 + 0x198) = DVar8.unknown;
  *(undefined8 *)(unaff_x22 + 0x1a0) = uVar11;
  pcVar12 = *(char **)(unaff_x22 + 0xf0);
  pvVar4 = *(void **)(unaff_x22 + 0xf8);
  _swift_bridgeObjectRetain(pvVar4);
  SVar16.bridgeObject = (void *)0xe400000000000000;
  SVar16.str = (char *)0x766f6d2e;
  SVar19.bridgeObject = param_4;
  SVar19.str = param_3;
  Swift::String::append(SVar16,SVar19);
  pvVar14 = pvVar4;
  FUN_100159054();
  _swift_bridgeObjectRelease(pvVar4);
  *(undefined **)(unaff_x22 + 0x1a8) = DVar8.unknown;
  *(undefined8 *)(unaff_x22 + 0x1b0) = uVar11;
  if (DAT_100559108 != -1) {
    _swift_once(&DAT_100559108,FUN_10028f180);
  }
  this = *(URLRequest **)(unaff_x22 + 400);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x170);
  url.unknown = *(undefined **)(unaff_x22 + 0x178);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x168);
  puVar3 = *(undefined **)(unaff_x22 + 0x150);
  lVar6 = *(long *)(unaff_x22 + 0x158);
  SVar16 = *(String *)(unaff_x22 + 0xf0);
  puVar9 = puVar3;
  FUN_100099338(puVar3,&DAT_100577d98);
  UVar13.unknown = puVar3;
  (**(code **)(lVar6 + 0x10))(uVar2,puVar9);
  SVar17.bridgeObject = (void *)0xe600000000000000;
  SVar17.str = (char *)0x736f65646976;
  Foundation::URL::appendingPathComponent(SVar17,UVar13);
  pcVar15 = *(code **)(lVar6 + 8);
  (*pcVar15)(uVar2,puVar3);
  SVar18.bridgeObject = (void *)0xea00000000006e65;
  SVar18.str = (char *)0x657263736b636f6c;
  Foundation::URL::appendingPathComponent(SVar18,UVar13);
  (*pcVar15)(uVar5,puVar3);
  Foundation::URL::appendingPathComponent(SVar16,UVar13);
  (*pcVar15)(uVar1,puVar3);
  Foundation::URLRequest::init(url,(NSURLRequestCachePolicy)0x0,60.0);
  Foundation::URLRequest::_set_httpMethod(this);
  SVar7.bridgeObject = pvVar14;
  SVar7.str = pcVar12;
  Foundation::URLRequest::_setValue(SVar7,(URLRequest)0x2d746e65746e6f43);
  _swift_bridgeObjectRelease(pvVar14);
  plVar10 = (long *)0xe0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x1b8) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = (long)FUN_100156530;
  FUN_1002b749c(*(undefined8 *)(unaff_x22 + 400),DVar8.unknown,uVar11);
  return;
}

