// rea decompile_all
// name: FUN_100119b64
// address: 0x100119b64
// body: available
// range: 0x100119b64-0x100119d2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100119c4c) */

void FUN_100119b64(void)

{
  long lVar1;
  URL self;
  NSString *pNVar2;
  ID IVar3;
  Data DVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  Data DVar8;
  long unaff_x22;
  String SVar9;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar1 = *(long *)(unaff_x22 + 0x58);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar7 = uVar6;
  (**(code **)(lVar1 + 0x30))(uVar6,1,uVar5);
  if ((int)uVar7 == 1) {
    FUN_10002a29c(uVar6,&DAT_100553d90,&DAT_10041bf10);
  }
  else {
    (**(code **)(lVar1 + 0x20))(*(undefined8 *)(unaff_x22 + 0x60),uVar6,uVar5);
    self.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
    SVar9 = Foundation::URL::get_path(self);
    pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar9.bridgeObject);
    IVar3 = NSFileManager::fileExistsAtPath_((ID)self.unknown,pNVar2);
    if ((int)IVar3 == 0) {
      (**(code **)(*(long *)(unaff_x22 + 0x58) + 8))
                (*(undefined **)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0x50));
    }
    else {
      uVar7 = 0;
      DVar4 = Foundation::Data::_init(*(undefined **)(unaff_x22 + 0x60));
      DVar8 = DVar4;
      FUN_1001179b8();
      lVar1 = *(long *)(unaff_x22 + 0x58);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
      if (((ulong)DVar8.unknown & 1) == 0) {
        DVar8 = DVar4;
        FUN_10011a514(DVar4.unknown,uVar7,*(undefined8 *)(unaff_x22 + 0x40),
                      *(undefined1 *)(unaff_x22 + 0x70));
        FUN_100093624(DVar4.unknown,uVar7);
        (**(code **)(lVar1 + 8))(uVar5,uVar6);
        if (DVar8.unknown != (undefined *)0x0) goto LAB_100119c7c;
      }
      else {
        (**(code **)(lVar1 + 8))(uVar5,uVar6);
        FUN_100093624(DVar4.unknown,uVar7);
      }
    }
  }
  DVar8.unknown = (undefined *)0x0;
LAB_100119c7c:
  uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x48);
  **(undefined8 **)(unaff_x22 + 0x18) = DVar8.unknown;
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x000100119cb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

