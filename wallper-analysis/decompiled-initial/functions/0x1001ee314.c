// rea decompile_all
// name: FUN_1001ee314
// address: 0x1001ee314
// body: available
// range: 0x1001ee314-0x1001ee5fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1001ee314(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  code *pcVar2;
  UUID UVar3;
  UUID UVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  void *aBlock;
  undefined *puVar8;
  void *aBlock_00;
  long extraout_x8;
  long lVar9;
  String SVar10;
  String SVar11;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  code *local_80;
  undefined *local_78;
  
  UVar3 = Foundation::UUID::typeMetadataAccessor();
  lVar9 = *(long *)(UVar3.unknown + -8);
  UVar4 = UVar3;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar9 + 0x40));
  FUN_100174ed8();
  if (UVar4.unknown == (undefined *)0x0) {
    UVar4 = Foundation::UUID::init();
    SVar10 = Foundation::UUID::get_uuidString(UVar4);
    (**(code **)(lVar9 + 8))
              ((long)&local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar3.unknown);
  }
  else {
    objc_stub::stringValue((ID)UVar4.unknown);
    SVar10 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  _swift_beginAccess(param_2 + 0x10,&local_a0,0x20,0);
  lVar9 = *(long *)(param_2 + 0x10);
  if (*(long *)(lVar9 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar9);
    SVar11 = SVar10;
    FUN_10000464c();
    if (((ulong)SVar11.bridgeObject & 1) != 0) {
      uVar5 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + (long)SVar11.str * 8);
      _swift_endAccess(&local_a0);
      _swift_bridgeObjectRelease(lVar9);
      puVar6 = &DAT_1005322c8;
      _swift_allocObject(&DAT_1005322c8,0x18,7);
      *(undefined8 *)(puVar6 + 0x10) = uVar5;
      puVar7 = &DAT_1005322f0;
      _swift_allocObject(&DAT_1005322f0,0x20,7);
      *(code **)(puVar7 + 0x10) = FUN_1001f005c;
      *(undefined **)(puVar7 + 0x18) = puVar6;
      puVar1 = PTR___NSConcreteStackBlock_100521110;
      local_80 = FUN_1001f0074;
      local_a0 = PTR___NSConcreteStackBlock_100521110;
      local_98 = 0x42000000;
      local_90 = FUN_1003f3adc;
      puStack_88 = &DAT_100532308;
      local_78 = puVar7;
      aBlock = __Block_copy(&local_a0);
      puVar8 = local_78;
      _swift_retain(puVar7);
      _swift_release(puVar8);
      puVar8 = &DAT_100532340;
      _swift_allocObject(&DAT_100532340,0x30,7);
      *(undefined8 *)(puVar8 + 0x10) = uVar5;
      *(long *)(puVar8 + 0x18) = param_2;
      *(String *)(puVar8 + 0x20) = SVar10;
      local_80 = FUN_1001f00b0;
      local_a0 = puVar1;
      local_98 = 0x42000000;
      local_90 = FUN_1000c7e7c;
      puStack_88 = &DAT_100532358;
      local_78 = puVar8;
      aBlock_00 = __Block_copy(&local_a0);
      puVar8 = local_78;
      _swift_retain(param_2);
      _swift_release(puVar8);
      NSAnimationContext::runAnimationGroup_completionHandler_
                ((ID)&_OBJC_CLASS___NSAnimationContext,aBlock,aBlock_00);
      __Block_release(aBlock_00);
      __Block_release(aBlock);
      puVar8 = puVar7;
      _swift_isEscapingClosureAtFileLocation(puVar7,"",0x58,0x45,0x32,1);
      _swift_release(puVar7);
      _swift_release(puVar6);
      if (((ulong)puVar8 & 1) == 0) {
        return;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1001ee5c0);
      (*pcVar2)();
    }
    _swift_bridgeObjectRelease(lVar9);
  }
  _swift_endAccess(&local_a0);
  _swift_bridgeObjectRelease(SVar10.bridgeObject);
  return;
}

