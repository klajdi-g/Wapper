// rea decompile_all
// name: FUN_100168078
// address: 0x100168078
// body: available
// range: 0x100168078-0x10016830b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100168078(void)

{
  char cVar1;
  long lVar2;
  ID IVar3;
  ulong uVar4;
  ulong uVar5;
  code *pcVar6;
  long unaff_x20;
  undefined8 uVar7;
  ID local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  ID local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long local_38;
  
  uVar4 = 0;
  uVar5 = 0;
  *(undefined1 *)(unaff_x20 + _TtC7Wallper21MediaRemoteController::isRunning) = 0;
  cVar1 = *(char *)(unaff_x20 + 0x30);
  *(undefined1 *)(unaff_x20 + 0x30) = 0;
  if ((cVar1 == '\x01') && (pcVar6 = *(code **)(unaff_x20 + 0x20), pcVar6 != (code *)0x0)) {
    uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
    _swift_retain(uVar7);
    (*pcVar6)(0);
    FUN_10002f6dc(pcVar6,uVar7);
  }
  lVar2 = _TtC7Wallper21MediaRemoteController::process;
  if (*(ID *)(unaff_x20 + _TtC7Wallper21MediaRemoteController::process) == 0) {
    uStack_48 = 0;
    local_50 = 0;
    local_38 = 0;
    uStack_40 = 0;
LAB_1001681e0:
    FUN_10002a29c(&local_50,&DAT_10054d428,&DAT_100420300);
    IVar3 = *(ID *)(unaff_x20 + lVar2);
    if (IVar3 != 0) goto LAB_1001681b8;
LAB_100168200:
    uStack_48 = 0;
    local_50 = 0;
    local_38 = 0;
    uStack_40 = 0;
  }
  else {
    IVar3 = objc_stub::standardOutput
                      (*(ID *)(unaff_x20 + _TtC7Wallper21MediaRemoteController::process));
    if (IVar3 == 0) {
      uStack_68 = 0;
      local_70 = 0;
      lStack_58 = 0;
      uStack_60 = 0;
    }
    else {
      Swift::__bridgeAnyObjectToAny();
      _swift_unknownObjectRelease(IVar3);
    }
    uStack_48 = uStack_68;
    local_50 = local_70;
    local_38 = lStack_58;
    uStack_40 = uStack_60;
    if (lStack_58 == 0) goto LAB_1001681e0;
    uVar7 = 0;
    FUN_100044230(0,&DAT_100555680,&PTR__OBJC_CLASS___NSPipe_10053fb90);
    _swift_dynamicCast(&local_70,&local_50,PTR___type_metadata_for_Any_100524178 + 8,uVar7,6);
    if ((uVar4 & 1) != 0) {
      IVar3 = objc_stub::fileHandleForReading(local_70);
      objc_stub::setReadabilityHandler_(IVar3,0);
      __Block_release((void *)0x0);
    }
    IVar3 = *(ID *)(unaff_x20 + lVar2);
    if (IVar3 == 0) goto LAB_100168200;
LAB_1001681b8:
    IVar3 = objc_stub::standardError(IVar3);
    if (IVar3 == 0) {
      uStack_68 = 0;
      local_70 = 0;
      lStack_58 = 0;
      uStack_60 = 0;
    }
    else {
      Swift::__bridgeAnyObjectToAny();
      _swift_unknownObjectRelease(IVar3);
    }
    uStack_48 = uStack_68;
    local_50 = local_70;
    local_38 = lStack_58;
    uStack_40 = uStack_60;
    if (lStack_58 != 0) {
      uVar7 = 0;
      FUN_100044230(0,&DAT_100555680,&PTR__OBJC_CLASS___NSPipe_10053fb90);
      _swift_dynamicCast(&local_70,&local_50,PTR___type_metadata_for_Any_100524178 + 8,uVar7,6);
      if ((uVar5 & 1) != 0) {
        IVar3 = objc_stub::fileHandleForReading(local_70);
        objc_stub::setReadabilityHandler_(IVar3,0);
        __Block_release((void *)0x0);
      }
      goto LAB_1001682b8;
    }
  }
  FUN_10002a29c(&local_50,&DAT_10054d428,&DAT_100420300);
LAB_1001682b8:
  if (*(ID *)(unaff_x20 + lVar2) != 0) {
    objc_stub::setTerminationHandler_(*(ID *)(unaff_x20 + lVar2),0);
    __Block_release((void *)0x0);
    if (*(ID *)(unaff_x20 + lVar2) != 0) {
      objc_stub::terminate(*(ID *)(unaff_x20 + lVar2));
    }
  }
  *(undefined8 *)(unaff_x20 + lVar2) = 0;
  return 0;
}

