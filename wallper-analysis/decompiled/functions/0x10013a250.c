// rea decompile_all
// name: FUN_10013a250
// address: 0x10013a250
// body: available
// range: 0x10013a250-0x10013a5bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10013a5a4 to 0x1002b6ee8 FUN_1002b6ee8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010013a430) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010013a424 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10013a250(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ID IVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  JSONEncoder *pJVar10;
  JSONEncoder *pJVar11;
  Data DVar12;
  long *plVar13;
  void *extraout_x1;
  void *pvVar14;
  void *pvVar15;
  URL UVar16;
  void *pvVar17;
  URLRequest *this;
  long unaff_x22;
  undefined *puVar18;
  long lVar19;
  code *pcVar20;
  code *pcVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  
  if (DAT_100559108 != -1) {
    _swift_once(&DAT_100559108,FUN_10028f180);
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  lVar3 = *(long *)(unaff_x22 + 200);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xd0);
  puVar18 = *(undefined **)(unaff_x22 + 0xc0);
  lVar19 = *(long *)(unaff_x22 + 0xa0);
  puVar5 = puVar18;
  FUN_100099338(puVar18,&DAT_100577d98);
  pcVar20 = *(code **)(lVar3 + 0x10);
  UVar16.unknown = puVar18;
  (*pcVar20)(uVar4,puVar5);
  SVar22.bridgeObject = (void *)0xe500000000000000;
  SVar22.str = (char *)0x7372657375;
  Foundation::URL::appendingPathComponent(SVar22,UVar16);
  pcVar21 = *(code **)(lVar3 + 8);
  *(code **)(unaff_x22 + 0x100) = pcVar21;
  (*pcVar21)(uVar4,puVar18);
  SVar23.bridgeObject = (void *)0xe600000000000000;
  SVar23.str = (char *)0x747265737075;
  Foundation::URL::appendingPathComponent(SVar23,UVar16);
  (*pcVar21)(uVar2,puVar18);
  puVar1 = (undefined8 *)(lVar19 + _TtC7Wallper13DeviceManager::hwid);
  uVar2 = *puVar1;
  uVar4 = puVar1[1];
  _swift_bridgeObjectRetain(uVar4);
  IVar6 = NSHost::currentHost((ID)&_OBJC_CLASS___NSHost);
  IVar6 = NSHost::localizedName(IVar6);
  if (IVar6 == 0) {
    pvVar17 = (void *)0xeb0000000063614d;
    SVar24.bridgeObject = extraout_x1;
    SVar24.str = (char *)0x206e776f6e6b6e55;
  }
  else {
    SVar24 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pvVar17 = SVar24.bridgeObject;
  }
  pvVar14 = SVar24.bridgeObject;
  uVar7 = 0;
  FUN_100292af0();
  uVar8 = uVar7;
  FUN_100292fc4();
  uVar9 = uVar8;
  pvVar15 = pvVar14;
  FUN_10028f000();
  *(undefined8 *)(unaff_x22 + 0x10) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x18) = uVar4;
  *(char **)(unaff_x22 + 0x20) = SVar24.str;
  *(void **)(unaff_x22 + 0x28) = pvVar17;
  *(char *)(unaff_x22 + 0x30) = (char)uVar7;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar8;
  *(void **)(unaff_x22 + 0x40) = pvVar14;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar9;
  *(void **)(unaff_x22 + 0x50) = pvVar15;
  pJVar10 = Foundation::JSONEncoder::typeMetadataAccessor();
  _swift_allocObject(pJVar10,*(undefined4 *)(pJVar10 + 0x30),*(undefined2 *)(pJVar10 + 0x34));
  pJVar11 = Foundation::JSONEncoder::init(pJVar10);
  *(JSONEncoder **)(unaff_x22 + 0x108) = pJVar11;
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x30);
  *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x10);
  pJVar10 = pJVar11;
  FUN_10013d48c();
  puVar5 = &DAT_10052ddb8;
  DVar12 = Foundation::JSONEncoder::_encode(pJVar11,pJVar10,&DAT_10052ddb8,pJVar10);
  *(undefined **)(unaff_x22 + 0x110) = DVar12.unknown;
  *(undefined **)(unaff_x22 + 0x118) = puVar5;
  UVar16.unknown = *(undefined **)(unaff_x22 + 0xd8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe0);
  this = *(URLRequest **)(unaff_x22 + 0xb8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xc0);
  FUN_10013d4cc(unaff_x22 + 0x10);
  (*pcVar20)(UVar16.unknown,uVar2,uVar4);
  Foundation::URLRequest::init(UVar16,(NSURLRequestCachePolicy)0x0,60.0);
  Foundation::URLRequest::_set_httpMethod(this);
  Foundation::URLRequest::set_timeoutInterval(this,15.0);
  SVar25.bridgeObject = (void *)0x80000001004de340;
  SVar25.str = (char *)0xd000000000000010;
  Foundation::URLRequest::_setValue(SVar25,(URLRequest)0x2d746e65746e6f43);
  FUN_10011a30c(DVar12.unknown,puVar5);
  Foundation::URLRequest::_set_httpBody(this);
  plVar13 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x120) = plVar13;
  *plVar13 = unaff_x22;
  plVar13[1] = (long)FUN_10013a5c0;
  FUN_1002b6ee8(*(undefined8 *)(unaff_x22 + 0xb8),FUN_1002b6ee8);
  return;
}

