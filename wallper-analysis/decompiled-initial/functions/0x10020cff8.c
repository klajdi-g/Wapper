// rea decompile_all
// name: FUN_10020cff8
// address: 0x10020cff8
// body: available
// range: 0x10020cff8-0x10020d307 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10020d304 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10020cff8(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  bool bVar2;
  URL UVar3;
  undefined *puVar4;
  ID IVar5;
  URL UVar6;
  NSURL *pNVar7;
  NSArray *pNVar8;
  ID self;
  ID IVar9;
  Data DVar10;
  undefined8 uVar11;
  ulong extraout_x1;
  ulong uVar12;
  uint uVar13;
  long extraout_x8;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100521138;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar16 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar16 + 0x40));
  puVar4 = &_OBJC_CLASS___NSTask;
  _objc_allocWithZone();
  IVar5 = objc_stub::init((ID)puVar4);
  UVar6 = Foundation::URL::_init();
  pNVar7 = Foundation::URL::_bridgeToObjectiveC(UVar6);
  (**(code **)(lVar16 + 8))(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar3.unknown);
  objc_stub::setExecutableURL_(IVar5,pNVar7);
  puVar4 = &DAT_100549eb0;
  FUN_100002f94(&DAT_100549eb0,&DAT_100426be0);
  _swift_allocObject();
  *(undefined8 *)(puVar4 + 0x18) = 4;
  *(undefined8 *)(puVar4 + 0x10) = 2;
  *(undefined8 *)(puVar4 + 0x20) = 0x782d;
  *(undefined8 *)(puVar4 + 0x28) = 0xe200000000000000;
  *(undefined8 *)(puVar4 + 0x30) = param_1;
  *(undefined8 *)(puVar4 + 0x38) = param_2;
  _swift_bridgeObjectRetain(param_2);
  pNVar8 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(puVar4);
  objc_stub::setArguments_(IVar5,pNVar8);
  puVar4 = &_OBJC_CLASS___NSPipe;
  _objc_allocWithZone();
  self = objc_stub::init((ID)puVar4);
  objc_stub::setStandardOutput_(IVar5,self);
  IVar9 = NSFileHandle::fileHandleWithNullDevice((ID)&_OBJC_CLASS___NSFileHandle);
  objc_stub::setStandardError_(IVar5,IVar9);
  local_60 = 0;
  IVar9 = objc_stub::launchAndReturnError_(IVar5,&local_60);
  if ((int)IVar9 == 0) {
    uVar11 = local_60;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRelease(uVar11);
    bVar2 = false;
  }
  else {
    objc_stub::waitUntilExit(IVar5);
    IVar5 = objc_stub::fileHandleForReading(self);
    DVar10.unknown = (undefined *)objc_stub::readDataToEndOfFile(IVar5);
    uVar12 = extraout_x1;
    DVar10 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar10);
    uVar1 = (uint)(uVar12 >> 0x20);
    uVar13 = uVar1 >> 0x1e;
    if (uVar1 >> 0x1e < 2) {
      if (uVar13 == 0) {
        FUN_100093624(DVar10.unknown,uVar12);
        uVar15 = 0;
        uVar14 = uVar12 >> 0x30 & 0xff;
      }
      else {
        FUN_100093624(DVar10.unknown,uVar12);
        uVar15 = (ulong)(int)DVar10.unknown;
        uVar14 = (long)DVar10.unknown >> 0x20;
      }
    }
    else if (uVar13 == 2) {
      uVar15 = *(ulong *)(DVar10.unknown + 0x10);
      uVar14 = *(ulong *)(DVar10.unknown + 0x18);
      FUN_100093624(DVar10.unknown,uVar12);
    }
    else {
      FUN_100093624(DVar10.unknown,uVar12);
      uVar14 = 0;
      uVar15 = 0;
    }
    bVar2 = uVar15 != uVar14;
  }
  if (*(long *)PTR____stack_chk_guard_100521138 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(bVar2);
}

