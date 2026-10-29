// rea decompile_all
// name: FUN_10022f7f0
// address: 0x10022f7f0
// body: available
// range: 0x10022f7f0-0x10022fcdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10022fcdc to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x00010022fc88) */

void FUN_10022f7f0(undefined8 param_1)

{
  URL UVar1;
  ID IVar2;
  URL UVar3;
  NSURL *pNVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  URL UVar8;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar9;
  long extraout_x12;
  long lVar10;
  long unaff_x21;
  long lVar11;
  undefined *puVar12;
  code *pcVar13;
  code *pcVar14;
  String SVar15;
  String SVar16;
  code *apcStack_d0 [2];
  undefined8 local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100521138;
  puVar12 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = (undefined8 *)((long)apcStack_d0 - extraout_x8);
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar10 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar10 + 0x40));
  puVar12 = (undefined *)((long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar11 = (long)puVar12 - extraout_x12;
  UVar3.unknown = &DAT_100549eb0;
  FUN_100002f94(&DAT_100549eb0,&DAT_100426be0);
  _swift_allocObject();
  *(undefined8 *)(UVar3.unknown + 0x18) = 8;
  *(undefined8 *)(UVar3.unknown + 0x10) = 4;
  *(undefined8 *)(UVar3.unknown + 0x20) = 0x782d;
  *(undefined8 *)(UVar3.unknown + 0x28) = 0xe200000000000000;
  *(undefined8 *)(UVar3.unknown + 0x30) = 0x6b2d;
  *(undefined8 *)(UVar3.unknown + 0x38) = 0xe200000000000000;
  SVar15 = Foundation::URL::get_path(UVar3);
  *(String *)(UVar3.unknown + 0x40) = SVar15;
  IVar2 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  UVar8.unknown = (undefined *)0x1;
  IVar2 = NSFileManager::URLsForDirectory_inDomains_(IVar2,0xd);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if (*(long *)(IVar2 + 0x10) == 0) {
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x10022fcd8);
    (*pcVar13)();
  }
  uVar9 = (ulong)*(byte *)(lVar10 + 0x50) + 0x20 &
          ((ulong)*(byte *)(lVar10 + 0x50) ^ 0xffffffffffffffff);
  pcVar13 = *(code **)(lVar10 + 0x10);
  (*pcVar13)(puVar12,IVar2 + uVar9,UVar1.unknown);
  _swift_bridgeObjectRelease(IVar2);
  SVar15.bridgeObject = (void *)0xee00657461647055;
  SVar15.str = (char *)0x2f7265706c6c6157;
  Foundation::URL::appendingPathComponent(SVar15,true,UVar8);
  pcVar14 = *(code **)(lVar10 + 8);
  UVar8.unknown = puVar12;
  (*pcVar14)(puVar12,UVar1.unknown);
  SVar15 = Foundation::URL::get_path(UVar8);
  (*pcVar14)(lVar11,UVar1.unknown);
  *(String *)(UVar3.unknown + 0x50) = SVar15;
  FUN_100231fec(0x6e69622f7273752f,0xee006f747469642f,UVar3.unknown);
  _swift_release(UVar3.unknown);
  if (unaff_x21 == 0) {
    apcStack_d0[1] = pcVar14;
    UVar3.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
    pNVar4 = Foundation::URL::_bridgeToObjectiveC(UVar3);
    local_70 = 0;
    IVar2 = NSFileManager::removeItemAtURL_error_((ID)UVar3.unknown,pNVar4,&local_70);
    if ((int)IVar2 == 0) {
      uVar5 = local_70;
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
      _swift_errorRelease(uVar5);
    }
    IVar2 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
    UVar3.unknown = (undefined *)0x1;
    IVar2 = NSFileManager::URLsForDirectory_inDomains_(IVar2,0xd);
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    if (*(long *)(IVar2 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x10022fcdc);
      (*pcVar13)();
    }
    (*pcVar13)(puVar12,IVar2 + uVar9,UVar1.unknown);
    _swift_bridgeObjectRelease(IVar2);
    SVar16.bridgeObject = (void *)0xee00657461647055;
    SVar16.str = (char *)0x2f7265706c6c6157;
    Foundation::URL::appendingPathComponent(SVar16,true,UVar3);
    pcVar13 = apcStack_d0[1];
    (*apcStack_d0[1])(puVar12,UVar1.unknown);
    FUN_100230310(puVar7,lVar11,1);
    (*pcVar13)(lVar11,UVar1.unknown);
    puVar6 = puVar7;
    (**(code **)(lVar10 + 0x30))(puVar7,1,UVar1.unknown);
    if ((int)puVar6 == 1) {
      FUN_10002a29c(puVar7,&DAT_100553d90,&DAT_10041bf10);
      FUN_100231e20();
      _swift_allocError(&DAT_100533dd8,puVar7,0,0);
      puVar7[1] = 0;
      *puVar7 = 1;
      *(undefined4 *)(puVar7 + 2) = 0;
      *(undefined1 *)((long)puVar7 + 0x14) = 5;
      _swift_willThrow();
    }
    else {
      (**(code **)(lVar10 + 0x20))(param_1,puVar7,UVar1.unknown);
      FUN_1002321c8(param_1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_100521138 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

