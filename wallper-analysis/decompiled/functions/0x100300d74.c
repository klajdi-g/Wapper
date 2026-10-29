// rea decompile_all
// name: FUN_100300d74
// address: 0x100300d74
// body: available
// range: 0x100300d74-0x1003010bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100300d74(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  URL UVar3;
  long lVar4;
  URL UVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  NSString *pNVar8;
  ID IVar9;
  void *pvVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long lVar11;
  bool bVar12;
  URL UVar13;
  code *pcVar14;
  code *pcVar15;
  undefined8 uVar16;
  long lVar17;
  undefined1 *puVar18;
  String SVar19;
  undefined1 auStack_a0 [8];
  long local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  code *local_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  puVar2 = &DAT_100553d90;
  local_70 = param_1;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar18 = auStack_a0 + -extraout_x8;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar17 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar17 + 0x40));
  UVar13.unknown = puVar18 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar11 = (long)UVar13.unknown - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_98 = lVar11 - extraout_x12_00;
  uVar16 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar4 = 0;
  FUN_1003009dc();
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(lVar4 + 0x20));
  uStack_88 = *puVar1;
  local_90 = puVar1[1];
  UVar5 = Foundation::URL::_init();
  Foundation::URL::deletingPathExtension(UVar5);
  pcVar14 = *(code **)(lVar17 + 8);
  UVar5.unknown = UVar13.unknown;
  (*pcVar14)(UVar13.unknown,UVar3.unknown);
  SVar19 = Foundation::URL::get_lastPathComponent(UVar5);
  pvVar10 = SVar19.bridgeObject;
  local_80 = pcVar14;
  (*pcVar14)(lVar11,UVar3.unknown);
  puVar2 = &DAT_100430118;
  _swift_getKeyPath(&DAT_100430118);
  puVar6 = &DAT_100430140;
  _swift_getKeyPath(&DAT_100430140);
  local_78 = uVar16;
  Combine::Published::_get_subscript(&local_68,uVar16,puVar2,puVar6);
  _swift_release(puVar2);
  _swift_release(puVar6);
  if (*(long *)(local_68 + 0x10) == 0) {
    bVar12 = true;
  }
  else {
    _swift_bridgeObjectRetain(local_68);
    FUN_10000464c(SVar19.str);
    bVar12 = ((ulong)SVar19.bridgeObject & 1) == 0;
    if (!bVar12) {
      (**(code **)(lVar17 + 0x10))
                (puVar18,*(long *)(local_68 + 0x38) + *(long *)(lVar17 + 0x48) * (long)SVar19.str,
                 UVar3.unknown);
    }
    _swift_bridgeObjectRelease(local_68);
  }
  (**(code **)(lVar17 + 0x38))(puVar18,bVar12,1,UVar3.unknown);
  _swift_bridgeObjectRelease(pvVar10);
  _swift_bridgeObjectRelease(local_68);
  puVar7 = puVar18;
  (**(code **)(lVar17 + 0x30))(puVar18,1,UVar3.unknown);
  lVar4 = local_98;
  if ((int)puVar7 == 1) {
    FUN_10002a29c(puVar18,&DAT_100553d90,&DAT_10041bf10);
    pcVar14 = local_80;
  }
  else {
    pcVar15 = *(code **)(lVar17 + 0x20);
    (*pcVar15)(local_98,puVar18,UVar3.unknown);
    UVar5.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
    SVar19 = Foundation::URL::get_path(UVar5);
    pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar19.bridgeObject);
    IVar9 = NSFileManager::fileExistsAtPath_((ID)UVar5.unknown,pNVar8);
    pcVar14 = local_80;
    if ((int)IVar9 != 0) {
      (*pcVar15)(local_70,lVar4,UVar3.unknown);
      return;
    }
    (*local_80)(lVar4,UVar3.unknown);
  }
  UVar5 = Foundation::URL::_init();
  Foundation::URL::deletingPathExtension(UVar5);
  (*pcVar14)(UVar13.unknown,UVar3.unknown);
  SVar19 = Foundation::URL::get_lastPathComponent(UVar13);
  (*pcVar14)(lVar11,UVar3.unknown);
  FUN_1001da870(local_70,SVar19.str,SVar19.bridgeObject);
  _swift_bridgeObjectRelease(SVar19.bridgeObject);
  return;
}

