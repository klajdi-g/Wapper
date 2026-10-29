// rea decompile_all
// name: FUN_100214208
// address: 0x100214208
// body: available
// range: 0x100214208-0x1002145cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002145cc to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x00010021445c) */

void FUN_100214208(undefined8 param_1,undefined8 param_2,undefined8 param_3,URL param_4,URL param_5)

{
  NSURL *pNVar1;
  ID IVar2;
  undefined *puVar3;
  undefined8 uVar4;
  Data DVar5;
  NSData *pNVar6;
  NSDictionary *pNVar7;
  Data DVar8;
  undefined8 uVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar10;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  
  local_88 = *(long *)PTR____stack_chk_guard_100521138;
  pNVar1 = Foundation::URL::_bridgeToObjectiveC(param_4);
  IVar2 = AVAsset::assetWithURL_((ID)&_OBJC_CLASS___AVAsset,pNVar1);
  puVar3 = &_OBJC_CLASS___AVAssetImageGenerator;
  _objc_allocWithZone();
  IVar2 = objc_stub::initWithAsset_((ID)puVar3,IVar2);
  uVar10 = 1;
  objc_stub::setAppliesPreferredTrackTransform_(IVar2);
  objc_stub::setMaximumSize_(IVar2,param_2,param_3);
  uVar4 = 600;
  uVar9 = extraout_x1;
  ___extension_in_CoreMedia____C_CMTime_init_seconds__Swift_Double_preferredTimescale__Swift_Int32___>___C_CMTime
            (param_1);
  local_90 = 0;
  local_a0 = (undefined4)uVar9;
  uStack_9c = (undefined4)((ulong)uVar9 >> 0x20);
  local_a8 = uVar4;
  local_98 = uVar10;
  IVar2 = objc_stub::copyCGImageAtTime_actualTime_error_(IVar2,&local_a8,0,&local_90);
  if (IVar2 == 0) {
    uVar9 = local_90;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRelease(uVar9);
  }
  else {
    puVar3 = &_OBJC_CLASS___NSImage;
    _objc_allocWithZone();
    IVar2 = objc_stub::initWithCGImage_size_((ID)puVar3,0,0,IVar2);
    DVar5.unknown = (undefined *)objc_stub::TIFFRepresentation(IVar2);
    if (DVar5.unknown != (undefined *)0x0) {
      uVar9 = extraout_x1_00;
      DVar5 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar5);
      puVar3 = &_OBJC_CLASS___NSBitmapImageRep;
      _objc_allocWithZone();
      FUN_10011a30c(DVar5.unknown,uVar9);
      pNVar6 = Foundation::Data::_bridgeToObjectiveC(DVar5);
      IVar2 = objc_stub::initWithData_((ID)puVar3,pNVar6);
      FUN_100093624(DVar5.unknown,uVar9);
      if (IVar2 != 0) {
        puVar3 = PTR___swiftEmptyArrayStorage_100524190;
        FUN_100006b0c(PTR___swiftEmptyArrayStorage_100524190);
        FUN_10000807c(0);
        FUN_1000036d0(&DAT_10054a5f0,FUN_10000807c,&TargetProtocolConformanceDescriptor_10041b450);
        pNVar7 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
        _swift_bridgeObjectRelease(puVar3);
        DVar8.unknown = (undefined *)objc_stub::representationUsingType_properties_(IVar2,4,pNVar7);
        if (DVar8.unknown != (undefined *)0x0) {
          uVar4 = extraout_x1_01;
          DVar8 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar8);
          Foundation::Data::_write(param_5,(NSDataWritingOptions)0x1,DVar8);
          FUN_100093624(DVar8.unknown,uVar4);
          FUN_100093624(DVar5.unknown,uVar9);
          uVar9 = 1;
          goto LAB_100214544;
        }
      }
      FUN_100093624(DVar5.unknown,uVar9);
    }
  }
  uVar9 = 0;
LAB_100214544:
  if (*(long *)PTR____stack_chk_guard_100521138 == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar9);
}

