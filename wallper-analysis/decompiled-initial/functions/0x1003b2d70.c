// rea decompile_all
// name: FUN_1003b2d70
// address: 0x1003b2d70
// body: available
// range: 0x1003b2d70-0x1003b30cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003b2d70(undefined8 param_1)

{
  undefined *puVar1;
  URL UVar2;
  URL UVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  NSString *pNVar6;
  ID IVar7;
  void *pvVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 *unaff_x20;
  long lVar9;
  bool bVar10;
  URL UVar11;
  code *pcVar12;
  undefined8 uVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  code *pcVar17;
  undefined1 *puVar18;
  String SVar19;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  code *local_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  long local_68;
  
  puVar1 = &DAT_100553d90;
  local_70 = param_1;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar18 = auStack_a0 + -extraout_x8;
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar16 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar16 + 0x40));
  UVar11.unknown = puVar18 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar9 = (long)UVar11.unknown - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_78 = lVar9 - extraout_x12_00;
  uVar13 = unaff_x20[0xe];
  uStack_90 = *unaff_x20;
  local_98 = unaff_x20[1];
  UVar3 = Foundation::URL::_init();
  Foundation::URL::deletingPathExtension(UVar3);
  pcVar12 = *(code **)(lVar16 + 8);
  UVar3.unknown = UVar11.unknown;
  (*pcVar12)(UVar11.unknown,UVar2.unknown);
  SVar19 = Foundation::URL::get_lastPathComponent(UVar3);
  pvVar8 = SVar19.bridgeObject;
  local_88 = pcVar12;
  (*pcVar12)(lVar9,UVar2.unknown);
  puVar1 = &DAT_100435900;
  _swift_getKeyPath(&DAT_100435900);
  puVar4 = &DAT_100435928;
  _swift_getKeyPath(&DAT_100435928);
  local_80 = uVar13;
  Combine::Published::_get_subscript(&local_68,uVar13,puVar1,puVar4);
  _swift_release(puVar1);
  _swift_release(puVar4);
  if (*(long *)(local_68 + 0x10) == 0) {
    bVar10 = true;
    lVar14 = local_78;
  }
  else {
    _swift_bridgeObjectRetain(local_68);
    FUN_10000464c(SVar19.str);
    bVar10 = ((ulong)SVar19.bridgeObject & 1) == 0;
    if (!bVar10) {
      (**(code **)(lVar16 + 0x10))
                (puVar18,*(long *)(local_68 + 0x38) + *(long *)(lVar16 + 0x48) * (long)SVar19.str,
                 UVar2.unknown);
    }
    lVar14 = local_78;
    _swift_bridgeObjectRelease(local_68);
  }
  pcVar12 = *(code **)(lVar16 + 0x38);
  (*pcVar12)(puVar18,bVar10,1,UVar2.unknown);
  _swift_bridgeObjectRelease(pvVar8);
  _swift_bridgeObjectRelease(local_68);
  puVar5 = puVar18;
  (**(code **)(lVar16 + 0x30))(puVar18,1,UVar2.unknown);
  if ((int)puVar5 == 1) {
    FUN_10002a29c(puVar18,&DAT_100553d90,&DAT_10041bf10);
    pcVar15 = local_88;
  }
  else {
    pcVar17 = *(code **)(lVar16 + 0x20);
    (*pcVar17)(lVar14,puVar18,UVar2.unknown);
    UVar3.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
    SVar19 = Foundation::URL::get_path(UVar3);
    pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar19.bridgeObject);
    IVar7 = NSFileManager::fileExistsAtPath_((ID)UVar3.unknown,pNVar6);
    uVar13 = local_70;
    pcVar15 = local_88;
    if ((int)IVar7 != 0) {
      (*pcVar17)(local_70,lVar14,UVar2.unknown);
      goto LAB_1003b309c;
    }
    (*local_88)(lVar14,UVar2.unknown);
  }
  UVar3 = Foundation::URL::_init();
  Foundation::URL::deletingPathExtension(UVar3);
  (*pcVar15)(UVar11.unknown,UVar2.unknown);
  SVar19 = Foundation::URL::get_lastPathComponent(UVar11);
  (*pcVar15)(lVar9,UVar2.unknown);
  uVar13 = local_70;
  FUN_1001da870(local_70,SVar19.str,SVar19.bridgeObject);
  _swift_bridgeObjectRelease(SVar19.bridgeObject);
LAB_1003b309c:
  (*pcVar12)(uVar13,0,1,UVar2.unknown);
  return;
}

