// rea decompile_all
// name: FUN_10020b204
// address: 0x10020b204
// body: available
// range: 0x10020b204-0x10020b543 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10020b204(void)

{
  void *pvVar1;
  char *pcVar2;
  undefined1 *puVar3;
  URL UVar4;
  ID IVar5;
  URL UVar6;
  URL in_x3;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  undefined1 auStack_a0 [8];
  void *local_98;
  char *local_90;
  undefined1 *local_88;
  
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar9 = *(long *)(UVar4.unknown + -8);
  UVar6 = UVar4;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar9 + 0x40));
  local_88 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar11 = (long)(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar7 = lVar11 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar8 = lVar7 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100521118)();
  SVar12 = Foundation::UUID::get_uuidString((UUID)UVar6.unknown);
  SVar13 = Swift::String::uppercased(SVar12);
  local_98 = SVar13.bridgeObject;
  local_90 = SVar13.str;
  _swift_bridgeObjectRelease(SVar12.bridgeObject);
  IVar5 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  UVar6.unknown = (undefined *)NSFileManager::homeDirectoryForCurrentUser(IVar5);
  Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar6);
  SVar14.bridgeObject = (void *)0x80000001004e1140;
  SVar14.str = (char *)0xd000000000000037;
  Foundation::URL::appendingPathComponent(SVar14,true,in_x3);
  pcVar10 = *(code **)(lVar9 + 8);
  (*pcVar10)(lVar11,UVar4.unknown);
  UVar6.unknown = (char *)0x1;
  SVar15.bridgeObject = (void *)0xe600000000000000;
  SVar15.str = (char *)0x736f65646976;
  Foundation::URL::appendingPathComponent(SVar15,true,in_x3);
  (*pcVar10)(lVar7,UVar4.unknown);
  pvVar1 = local_98;
  _swift_bridgeObjectRetain(local_98);
  SVar16.bridgeObject = (void *)0xe400000000000000;
  SVar16.str = (char *)0x766f6d2e;
  SVar20.bridgeObject = in_x3.unknown;
  SVar20.str = UVar6.unknown;
  Swift::String::append(SVar16,SVar20);
  SVar12.bridgeObject = pvVar1;
  SVar12.str = SVar13.str;
  Foundation::URL::appendingPathComponent(SVar12,UVar6);
  _swift_bridgeObjectRelease(pvVar1);
  (*pcVar10)(lVar8,UVar4.unknown);
  IVar5 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  UVar6.unknown = (undefined *)NSFileManager::homeDirectoryForCurrentUser(IVar5);
  puVar3 = local_88;
  Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar6);
  SVar17.bridgeObject = (void *)0x80000001004e1140;
  SVar17.str = (char *)0xd000000000000037;
  Foundation::URL::appendingPathComponent(SVar17,true,in_x3);
  (*pcVar10)(puVar3,UVar4.unknown);
  UVar6.unknown = (char *)0x1;
  SVar18.bridgeObject = (void *)0xea0000000000736c;
  SVar18.str = (char *)0x69616e626d756874;
  Foundation::URL::appendingPathComponent(SVar18,true,in_x3);
  (*pcVar10)(lVar11,UVar4.unknown);
  pcVar2 = local_90;
  SVar19.bridgeObject = (void *)0xe400000000000000;
  SVar19.str = (char *)0x676e702e;
  SVar21.bridgeObject = in_x3.unknown;
  SVar21.str = UVar6.unknown;
  Swift::String::append(SVar19,SVar21);
  SVar13.bridgeObject = pvVar1;
  SVar13.str = pcVar2;
  Foundation::URL::appendingPathComponent(SVar13,UVar6);
  _swift_bridgeObjectRelease(pvVar1);
  (*pcVar10)(lVar7,UVar4.unknown);
  FUN_100213f74(lVar8 - extraout_x12_02);
  FUN_100213f74(lVar8);
  FUN_100207010(lVar7);
  FUN_100213f74(lVar7);
  (*pcVar10)(lVar7,UVar4.unknown);
  (*pcVar10)(lVar8,UVar4.unknown);
  (*pcVar10)(lVar8 - extraout_x12_02,UVar4.unknown);
  return;
}

