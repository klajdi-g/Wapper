// rea decompile_all
// name: FUN_10029cb38
// address: 0x10029cb38
// body: available
// range: 0x10029cb38-0x10029ccef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10029cb38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  URL UVar2;
  undefined1 *puVar3;
  URL self;
  NSString *pNVar4;
  ID IVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  code *pcVar10;
  String SVar11;
  
  puVar1 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = &stack0xffffffffffffffa0 + -extraout_x8;
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar9 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar9 + 0x40));
  lVar7 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_10029d6d8(puVar8,param_2,param_3,param_4);
  puVar3 = puVar8;
  (**(code **)(lVar9 + 0x30))(puVar8,1,UVar2.unknown);
  if ((int)puVar3 == 1) {
    FUN_10002a29c(puVar8,&DAT_100553d90,&DAT_10041bf10);
  }
  else {
    pcVar10 = *(code **)(lVar9 + 0x20);
    (*pcVar10)(lVar7,puVar8,UVar2.unknown);
    self.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
    SVar11 = Foundation::URL::get_path(self);
    pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar11.bridgeObject);
    IVar5 = NSFileManager::fileExistsAtPath_((ID)self.unknown,pNVar4);
    if ((int)IVar5 != 0) {
      (*pcVar10)(param_1,lVar7,UVar2.unknown);
      uVar6 = 0;
      goto LAB_10029ccbc;
    }
    (**(code **)(lVar9 + 8))(lVar7,UVar2.unknown);
  }
  uVar6 = 1;
LAB_10029ccbc:
  (**(code **)(lVar9 + 0x38))(param_1,uVar6,1,UVar2.unknown);
  return;
}

