// rea decompile_all
// name: FUN_100288cec
// address: 0x100288cec
// body: available
// range: 0x100288cec-0x100289187 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100288ed8 to 0x10041469c _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100289184 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

URL FUN_100288cec(undefined *param_1,ulong param_2,char *param_3,void *param_4)

{
  ulong uVar1;
  uint uVar2;
  URL UVar3;
  URL UVar4;
  Data DVar5;
  NSData *pNVar6;
  ID IVar7;
  undefined *puVar8;
  URL UVar9;
  NSURL *pNVar10;
  undefined *puVar11;
  URL UVar12;
  NSURL *pNVar13;
  ulong uVar14;
  uint uVar15;
  int iVar16;
  long extraout_x8;
  ulong uVar17;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 *puVar18;
  code *pcVar19;
  long lVar20;
  code *pcVar21;
  URL UVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  undefined *local_90 [4];
  ulong uStack_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100521138;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar20 = *(long *)(UVar3.unknown + -8);
  UVar4 = UVar3;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar20 + 0x40));
  puVar11 = (undefined *)((long)local_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100521118)();
  UVar22.unknown = puVar11 + -extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar18 = (undefined8 *)(UVar22.unknown + -extraout_x12_00);
  if (DAT_100558fb0 != -1) {
    UVar4.unknown = (undefined *)&DAT_100558fb0;
    _swift_once(&DAT_100558fb0,FUN_1002852a8);
  }
  puVar8 = DAT_100558fb8;
  if (DAT_100558fb8 != (undefined *)0x0) {
    local_90[3] = param_1;
    uStack_70 = param_2;
    _swift_bridgeObjectRetain(param_2);
    SVar23.bridgeObject = (void *)0xe100000000000000;
    SVar23.str = (char *)0xa;
    SVar25.bridgeObject = param_4;
    SVar25.str = param_3;
    Swift::String::append(SVar23,SVar25);
    DVar5.unknown = local_90[3];
    uVar14 = uStack_70;
    FUN_100284930();
    pNVar6 = Foundation::Data::_bridgeToObjectiveC(DVar5);
    objc_stub::writeData_((ID)puVar8,pNVar6);
    uVar2 = (uint)(uVar14 >> 0x20);
    uVar15 = uVar2 >> 0x1e;
    if (uVar2 >> 0x1e < 2) {
      if (uVar15 == 0) {
        uVar17 = uVar14 >> 0x30 & 0xff;
      }
      else {
        iVar16 = (int)((ulong)DVar5.unknown >> 0x20);
        if (SBORROW4(iVar16,(int)DVar5.unknown)) {
                    /* WARNING: Does not return */
          pcVar19 = (code *)SoftwareBreakpoint(1,0x100289184);
          (*pcVar19)();
        }
        uVar17 = (ulong)(iVar16 - (int)DVar5.unknown);
LAB_100288e44:
        if ((long)uVar17 < 0) {
                    /* WARNING: Does not return */
          pcVar19 = (code *)SoftwareBreakpoint(1,0x100288e4c);
          (*pcVar19)();
        }
      }
    }
    else {
      if (uVar15 == 2) {
        uVar17 = *(long *)(DVar5.unknown + 0x18) - *(long *)(DVar5.unknown + 0x10);
        if (SBORROW8(*(long *)(DVar5.unknown + 0x18),*(long *)(DVar5.unknown + 0x10))) {
                    /* WARNING: Does not return */
          pcVar19 = (code *)SoftwareBreakpoint(1,0x100288e34);
          (*pcVar19)();
        }
        goto LAB_100288e44;
      }
      uVar17 = 0;
    }
    uVar1 = DAT_100558fc0 + uVar17;
    if (CARRY8(DAT_100558fc0,uVar17)) {
                    /* WARNING: Does not return */
      pcVar19 = (code *)SoftwareBreakpoint(1,0x100289168);
      (*pcVar19)();
    }
    DAT_100558fc0 = uVar1;
    if (uVar1 < 0x500001) {
      FUN_100093624(DVar5.unknown,uVar14);
      if (*(long *)PTR____stack_chk_guard_100521138 == local_68) {
        return (URL)(undefined8 *)0x0;
      }
      goto LAB_100289184;
    }
    local_90[3] = (undefined *)0x0;
    IVar7 = objc_stub::closeAndReturnError_((ID)puVar8,local_90 + 3);
    local_90[1] = puVar8;
    if ((int)IVar7 == 0) {
      puVar8 = local_90[3];
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
      _swift_errorRelease(puVar8);
    }
    DAT_100558fb8 = (undefined *)0x0;
    local_90[0] = DVar5.unknown;
    if (DAT_100558fc8 != -1) {
      _swift_once(&DAT_100558fc8,switchD_100284e44::caseD_44);
    }
    UVar4 = UVar3;
    FUN_100099338(UVar3.unknown,&DAT_100558fd0);
    pcVar19 = *(code **)(lVar20 + 0x10);
    UVar9.unknown = puVar11;
    UVar12 = UVar3;
    (*pcVar19)(puVar11,UVar4.unknown);
    Foundation::URL::deletingLastPathComponent(UVar9);
    pcVar21 = *(code **)(lVar20 + 8);
    (*pcVar21)(puVar11,UVar3.unknown);
    SVar24.bridgeObject = (void *)0x80000001004e3430;
    SVar24.str = (char *)0xd000000000000014;
    Foundation::URL::appendingPathComponent(SVar24,UVar12);
    (*pcVar21)(UVar22.unknown,UVar3.unknown);
    UVar9.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
    pNVar10 = Foundation::URL::_bridgeToObjectiveC(UVar9);
    local_90[3] = (undefined *)0x0;
    IVar7 = NSFileManager::removeItemAtURL_error_((ID)UVar9.unknown,pNVar10,local_90 + 3);
    if ((int)IVar7 == 0) {
      puVar11 = local_90[3];
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
      _swift_errorRelease(puVar11);
    }
    UVar12.unknown = UVar22.unknown;
    (*pcVar19)(UVar22.unknown,UVar4.unknown,UVar3.unknown);
    pNVar10 = Foundation::URL::_bridgeToObjectiveC(UVar12);
    (*pcVar21)(UVar22.unknown,UVar3.unknown);
    pNVar13 = Foundation::URL::_bridgeToObjectiveC(UVar22);
    local_90[3] = (undefined *)0x0;
    IVar7 = NSFileManager::moveItemAtURL_toURL_error_
                      ((ID)UVar9.unknown,pNVar10,pNVar13,local_90 + 3);
    puVar11 = local_90[3];
    if ((int)IVar7 == 0) {
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
      _swift_errorRelease();
    }
    puVar8 = local_90[0];
    FUN_100288adc();
    DAT_100558fb8 = puVar11;
    FUN_100093624(puVar8,uVar14);
    (*pcVar21)(puVar18,UVar3.unknown);
    UVar4.unknown = (undefined *)puVar18;
  }
  if (*(long *)PTR____stack_chk_guard_100521138 == local_68) {
    return (URL)UVar4.unknown;
  }
LAB_100289184:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

