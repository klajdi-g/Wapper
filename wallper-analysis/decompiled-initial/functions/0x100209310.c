// rea decompile_all
// name: FUN_100209310
// address: 0x100209310
// body: available
// range: 0x100209310-0x10020976b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100209310(undefined8 param_1)

{
  void *pvVar1;
  char *pcVar2;
  undefined1 *puVar3;
  URL UVar4;
  undefined *puVar5;
  UUID UVar6;
  ID IVar7;
  URL UVar8;
  URL UVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  UUID UVar10;
  code *pcVar11;
  long lVar12;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  undefined1 auStack_c0 [8];
  void *local_b8;
  char *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  long lStack_98;
  undefined1 *local_90;
  long local_88;
  long local_80;
  
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar14 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar14 + 0x40));
  local_90 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = (long)(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  local_88 = lVar12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = lVar12 - extraout_x12_00;
  local_80 = lVar12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar13 = (undefined *)(lVar12 - extraout_x12_01);
  puVar5 = &DAT_10054a9c8;
  UVar9.unknown = &DAT_10041bbe0;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = (long)puVar13 - extraout_x8_00;
  UVar6 = Foundation::UUID::typeMetadataAccessor();
  lVar15 = *(long *)(UVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar15 + 0x40));
  UVar10.unknown = (undefined *)(lVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  FUN_1000087e4(param_1,lVar16,&DAT_10054a9c8);
  lVar12 = lVar16;
  (**(code **)(lVar15 + 0x30))(lVar16,1,UVar6.unknown);
  if ((int)lVar12 == 1) {
    FUN_10002a29c(lVar16,&DAT_10054a9c8,&DAT_10041bbe0);
    FUN_100207010(puVar13);
    FUN_100213f74(puVar13);
    pcVar11 = *(code **)(lVar14 + 8);
  }
  else {
    local_a8 = UVar10.unknown;
    local_a0 = UVar6.unknown;
    lStack_98 = lVar15;
    (**(code **)(lVar15 + 0x20))(UVar10.unknown,lVar16,UVar6.unknown);
    SVar17 = Foundation::UUID::get_uuidString(UVar10);
    SVar18 = Swift::String::uppercased(SVar17);
    local_b8 = SVar18.bridgeObject;
    local_b0 = SVar18.str;
    _swift_bridgeObjectRelease(SVar17.bridgeObject);
    FUN_100207010(puVar13);
    FUN_100213f74(puVar13);
    pcVar11 = *(code **)(lVar14 + 8);
    (*pcVar11)(puVar13,UVar4.unknown);
    IVar7 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
    UVar8.unknown = (undefined *)NSFileManager::homeDirectoryForCurrentUser(IVar7);
    puVar3 = local_90;
    Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar8);
    lVar12 = local_88;
    SVar19.bridgeObject = (void *)0x80000001004e1140;
    SVar19.str = (char *)0xd000000000000037;
    Foundation::URL::appendingPathComponent(SVar19,true,UVar9);
    (*pcVar11)(puVar3,UVar4.unknown);
    lVar14 = local_80;
    UVar8.unknown = (char *)0x1;
    SVar20.bridgeObject = (void *)0xe600000000000000;
    SVar20.str = (char *)0x736f65646976;
    Foundation::URL::appendingPathComponent(SVar20,true,UVar9);
    (*pcVar11)(lVar12,UVar4.unknown);
    pvVar1 = local_b8;
    _swift_bridgeObjectRetain(local_b8);
    SVar21.bridgeObject = (void *)0xe400000000000000;
    SVar21.str = (char *)0x766f6d2e;
    SVar25.bridgeObject = UVar9.unknown;
    SVar25.str = UVar8.unknown;
    Swift::String::append(SVar21,SVar25);
    SVar17.bridgeObject = pvVar1;
    SVar17.str = SVar18.str;
    Foundation::URL::appendingPathComponent(SVar17,UVar8);
    _swift_bridgeObjectRelease(pvVar1);
    (*pcVar11)(lVar14,UVar4.unknown);
    FUN_100213f74(puVar13);
    (*pcVar11)(puVar13,UVar4.unknown);
    IVar7 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
    UVar8.unknown = (undefined *)NSFileManager::homeDirectoryForCurrentUser(IVar7);
    Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar8);
    SVar22.bridgeObject = (void *)0x80000001004e1140;
    SVar22.str = (char *)0xd000000000000037;
    Foundation::URL::appendingPathComponent(SVar22,true,UVar9);
    (*pcVar11)(puVar3,UVar4.unknown);
    UVar8.unknown = (char *)0x1;
    SVar23.bridgeObject = (void *)0xea0000000000736c;
    SVar23.str = (char *)0x69616e626d756874;
    Foundation::URL::appendingPathComponent(SVar23,true,UVar9);
    (*pcVar11)(lVar12,UVar4.unknown);
    pcVar2 = local_b0;
    SVar24.bridgeObject = (void *)0xe400000000000000;
    SVar24.str = (char *)0x676e702e;
    SVar26.bridgeObject = UVar9.unknown;
    SVar26.str = UVar8.unknown;
    Swift::String::append(SVar24,SVar26);
    SVar18.bridgeObject = pvVar1;
    SVar18.str = pcVar2;
    Foundation::URL::appendingPathComponent(SVar18,UVar8);
    _swift_bridgeObjectRelease(pvVar1);
    (*pcVar11)(lVar14,UVar4.unknown);
    FUN_100213f74(puVar13);
    (*pcVar11)(puVar13,UVar4.unknown);
    pcVar11 = *(code **)(lStack_98 + 8);
    puVar13 = local_a8;
    UVar4.unknown = local_a0;
  }
  (*pcVar11)(puVar13,UVar4.unknown);
  return;
}

