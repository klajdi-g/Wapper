// rea decompile_all
// name: FUN_1000eb748
// address: 0x1000eb748
// body: available
// range: 0x1000eb748-0x1000ebb93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000eb748(undefined8 param_1)

{
  undefined *puVar1;
  URL UVar2;
  long lVar3;
  long lVar4;
  URL UVar5;
  undefined *puVar6;
  NSString *pNVar7;
  ID IVar8;
  void *pvVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  bool bVar10;
  long lVar11;
  code *pcVar12;
  undefined8 *unaff_x20;
  URL UVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  code *pcVar17;
  long lVar18;
  code *pcVar19;
  String SVar20;
  undefined8 local_a0;
  undefined8 uStack_98;
  code *local_90;
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  long local_70;
  long local_68;
  
  puVar1 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar1 + -8) + 0x40));
  lVar16 = (long)&local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_70 = lVar16;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar16 = lVar16 - extraout_x12;
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar18 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar18 + 0x40));
  UVar13.unknown = (undefined *)(lVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = (long)UVar13.unknown - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_78 = lVar14 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar11 = (lVar14 - extraout_x12_01) - extraout_x12_02;
  lVar3 = 0;
  FUN_1000f834c();
  FUN_1000087e4((long)unaff_x20 + (long)*(int *)(lVar3 + 0x14),lVar16,&DAT_100553d90,&DAT_10041bf10)
  ;
  pcVar19 = *(code **)(lVar18 + 0x30);
  lVar4 = lVar16;
  (*pcVar19)(lVar16,1,UVar2.unknown);
  if ((int)lVar4 == 1) {
    local_80 = param_1;
    FUN_10002a29c(lVar16,&DAT_100553d90,&DAT_10041bf10);
    uVar15 = *(undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar3 + 0x30) + 8);
    uStack_98 = *unaff_x20;
    local_a0 = unaff_x20[1];
    UVar5 = Foundation::URL::_init();
    Foundation::URL::deletingPathExtension(UVar5);
    pcVar12 = *(code **)(lVar18 + 8);
    UVar5.unknown = UVar13.unknown;
    (*pcVar12)(UVar13.unknown,UVar2.unknown);
    SVar20 = Foundation::URL::get_lastPathComponent(UVar5);
    pvVar9 = SVar20.bridgeObject;
    local_90 = pcVar12;
    (*pcVar12)(lVar14,UVar2.unknown);
    puVar1 = &DAT_1004245c8;
    _swift_getKeyPath(&DAT_1004245c8);
    puVar6 = &DAT_1004245f0;
    _swift_getKeyPath(&DAT_1004245f0);
    local_88 = uVar15;
    Combine::Published::_get_subscript(&local_68,uVar15,puVar1,puVar6);
    _swift_release(puVar1);
    _swift_release(puVar6);
    if (*(long *)(local_68 + 0x10) == 0) {
      bVar10 = true;
      lVar4 = local_70;
    }
    else {
      _swift_bridgeObjectRetain(local_68);
      FUN_10000464c(SVar20.str);
      lVar4 = local_70;
      bVar10 = ((ulong)SVar20.bridgeObject & 1) == 0;
      if (!bVar10) {
        (**(code **)(lVar18 + 0x10))
                  (local_70,*(long *)(local_68 + 0x38) + *(long *)(lVar18 + 0x48) * (long)SVar20.str
                   ,UVar2.unknown);
      }
      _swift_bridgeObjectRelease(local_68);
    }
    pcVar12 = *(code **)(lVar18 + 0x38);
    (*pcVar12)(lVar4,bVar10,1,UVar2.unknown);
    _swift_bridgeObjectRelease(pvVar9);
    _swift_bridgeObjectRelease(local_68);
    lVar16 = lVar4;
    (*pcVar19)(lVar4,1,UVar2.unknown);
    lVar3 = local_78;
    if ((int)lVar16 == 1) {
      FUN_10002a29c(lVar4,&DAT_100553d90,&DAT_10041bf10);
      pcVar19 = local_90;
    }
    else {
      pcVar17 = *(code **)(lVar18 + 0x20);
      (*pcVar17)(local_78,lVar4,UVar2.unknown);
      UVar5.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
      SVar20 = Foundation::URL::get_path(UVar5);
      pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(SVar20.bridgeObject);
      IVar8 = NSFileManager::fileExistsAtPath_((ID)UVar5.unknown,pNVar7);
      param_1 = local_80;
      pcVar19 = local_90;
      if ((int)IVar8 != 0) {
        (*pcVar17)(local_80,lVar3,UVar2.unknown);
        goto LAB_1000ebb60;
      }
      (*local_90)(lVar3,UVar2.unknown);
    }
    UVar5 = Foundation::URL::_init();
    Foundation::URL::deletingPathExtension(UVar5);
    (*pcVar19)(UVar13.unknown,UVar2.unknown);
    SVar20 = Foundation::URL::get_lastPathComponent(UVar13);
    (*pcVar19)(lVar14,UVar2.unknown);
    param_1 = local_80;
    FUN_1001da870(local_80,SVar20.str,SVar20.bridgeObject);
    _swift_bridgeObjectRelease(SVar20.bridgeObject);
  }
  else {
    pcVar19 = *(code **)(lVar18 + 0x20);
    (*pcVar19)(lVar11,lVar16,UVar2.unknown);
    (*pcVar19)(param_1,lVar11,UVar2.unknown);
    pcVar12 = *(code **)(lVar18 + 0x38);
  }
LAB_1000ebb60:
  (*pcVar12)(param_1,0,1,UVar2.unknown);
  return;
}

