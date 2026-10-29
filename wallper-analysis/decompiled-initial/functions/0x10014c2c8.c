// rea decompile_all
// name: FUN_10014c2c8
// address: 0x10014c2c8
// body: available
// range: 0x10014c2c8-0x10014cbbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10014c9e8 to 0x1002b6ee8 FUN_1002b6ee8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010014c4d8) */
/* WARNING: Removing unreachable block (ram,0x00010014cb8c) */
/* WARNING: Removing unreachable block (ram,0x00010014c714) */
/* WARNING: Removing unreachable block (ram,0x00010014cba4) */
/* WARNING: Removing unreachable block (ram,0x00010014c864) */
/* WARNING: Removing unreachable block (ram,0x00010014c9ec) */
/* WARNING: Removing unreachable block (ram,0x00010014c8bc) */
/* WARNING: Removing unreachable block (ram,0x00010014c9f8) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010014c4d0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10014c2c8(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  JSONEncoder *pJVar7;
  long *plVar8;
  URL UVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined8 uVar12;
  Published *pPVar13;
  URLRequest *pUVar14;
  long unaff_x22;
  URL url;
  undefined8 uVar15;
  code *pcVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  
  pPVar13 = *(Published **)(unaff_x22 + 0x158);
  puVar5 = &DAT_100428040;
  _swift_getKeyPath(&DAT_100428040);
  puVar6 = &DAT_100428068;
  _swift_getKeyPath(&DAT_100428068);
  *(undefined8 *)(unaff_x22 + 200) = 1;
  *(undefined8 *)(unaff_x22 + 0xc0) = 0;
  _swift_retain(pPVar13);
  Combine::Published::_set_subscript(pPVar13,(undefined8 *)(unaff_x22 + 0xc0),pPVar13,puVar5,puVar6)
  ;
  if (DAT_100559108 != -1) {
    _swift_once(&DAT_100559108,FUN_10028f180);
  }
  uVar15 = *(undefined8 *)(unaff_x22 + 0x210);
  url.unknown = *(undefined **)(unaff_x22 + 0x208);
  lVar2 = *(long *)(unaff_x22 + 0x1f8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x200);
  pUVar14 = *(URLRequest **)(unaff_x22 + 0x1e8);
  puVar5 = *(undefined **)(unaff_x22 + 0x1f0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x150);
  lVar4 = *(long *)(unaff_x22 + 0x158);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x148);
  puVar6 = puVar5;
  FUN_100099338(puVar5,&DAT_100577d98);
  pcVar16 = *(code **)(lVar2 + 0x10);
  UVar9.unknown = puVar5;
  (*pcVar16)(uVar3,puVar6);
  SVar17.bridgeObject = (void *)0xe800000000000000;
  SVar17.str = (char *)0x7365736e6563696c;
  Foundation::URL::appendingPathComponent(SVar17,UVar9);
  pcVar11 = *(code **)(lVar2 + 8);
  *(code **)(unaff_x22 + 0x230) = pcVar11;
  (*pcVar11)(uVar3,puVar5);
  SVar18.bridgeObject = (void *)0xe800000000000000;
  SVar18.str = (char *)0x6574617669746361;
  Foundation::URL::appendingPathComponent(SVar18,UVar9);
  (*pcVar11)(url.unknown,puVar5);
  (*pcVar16)(url.unknown,uVar15,puVar5);
  Foundation::URLRequest::init(url,(NSURLRequestCachePolicy)0x0,60.0);
  Foundation::URLRequest::_set_httpMethod(pUVar14);
  SVar19.bridgeObject = (void *)0x80000001004de340;
  SVar19.str = (char *)0xd000000000000010;
  Foundation::URLRequest::_setValue(SVar19,(URLRequest)0x2d746e65746e6f43);
  puVar1 = (undefined8 *)(lVar4 + _TtC7Wallper14LicenseManager::hwid);
  uVar3 = *puVar1;
  uVar15 = puVar1[1];
  pJVar7 = Foundation::JSONEncoder::typeMetadataAccessor();
  _swift_allocObject(pJVar7,*(undefined4 *)(pJVar7 + 0x30),*(undefined2 *)(pJVar7 + 0x34));
  _swift_bridgeObjectRetain(uVar15);
  _swift_bridgeObjectRetain(uVar12);
  pJVar7 = Foundation::JSONEncoder::init(pJVar7);
  *(undefined8 *)(unaff_x22 + 0x70) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x78) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar12;
  FUN_100150a20();
  Foundation::JSONEncoder::_encode(pJVar7,pJVar7,&DAT_10052ebe0);
  pUVar14 = *(URLRequest **)(unaff_x22 + 0x1e8);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x150);
  _swift_release(pJVar7);
  _swift_bridgeObjectRelease(uVar15);
  _swift_bridgeObjectRelease(uVar12);
  Foundation::URLRequest::_set_httpBody(pUVar14);
  plVar8 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x238) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_10014cbbc;
  FUN_1002b6ee8(*(undefined8 *)(unaff_x22 + 0x1e8),FUN_1002b6ee8);
  return;
}

