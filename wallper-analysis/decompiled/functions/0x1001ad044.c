// rea decompile_all
// name: FUN_1001ad044
// address: 0x1001ad044
// body: available
// range: 0x1001ad044-0x1001ad543 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001ad53c to 0x100413640 /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::__C::NSURLSession::$data (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1001ad540 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

tuple2_conflict1 FUN_1001ad044(void)

{
  undefined *puVar1;
  NSData *pNVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  Data DVar8;
  long *plVar9;
  NSURLResponse *UNRECOVERED_JUMPTABLE;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long unaff_x22;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  code *pcVar17;
  String SVar18;
  tuple2_conflict1 tVar19;
  
  lVar10 = *(long *)PTR____stack_chk_guard_100521138;
  pNVar2 = Foundation::Data::_bridgeToObjectiveC((Data)*(undefined **)(unaff_x22 + 0x140));
  puVar11 = (undefined8 *)(unaff_x22 + 0xb0);
  *puVar11 = 0;
  IVar3 = NSJSONSerialization::JSONObjectWithData_options_error_
                    ((ID)&_OBJC_CLASS___NSJSONSerialization,pNVar2,0,puVar11);
  uVar4 = *puVar11;
  if (IVar3 == 0) {
    uVar16 = *(undefined8 *)(unaff_x22 + 0x140);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x148);
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    FUN_100093624(uVar16,uVar14);
    _swift_errorRelease(uVar4);
LAB_1001ad410:
    uVar16 = *(undefined8 *)(unaff_x22 + 0x110);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xf0);
    pcVar17 = *(code **)(*(long *)(unaff_x22 + 0xf8) + 8);
    (*pcVar17)(*(undefined8 *)(unaff_x22 + 0x108),uVar4);
    (*pcVar17)(uVar16,uVar4);
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar3);
    puVar5 = &DAT_10054f980;
    FUN_100002f94(&DAT_10054f980,&DAT_10042a870);
    puVar1 = PTR___type_metadata_for_Any_100524178;
    uVar7 = unaff_x22 + 0xb8;
    _swift_dynamicCast(uVar7,unaff_x22 + 0x10,PTR___type_metadata_for_Any_100524178 + 8,puVar5,6);
    if ((uVar7 & 1) == 0) {
LAB_1001ad3e0:
      uVar4 = *(undefined8 *)(unaff_x22 + 0x140);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x148);
LAB_1001ad40c:
      FUN_100093624(uVar4,uVar16);
      goto LAB_1001ad410;
    }
    puVar11 = (undefined8 *)(unaff_x22 + 0x30);
    lVar12 = *(long *)(unaff_x22 + 0xb8);
    if (*(long *)(lVar12 + 0x10) == 0) {
LAB_1001ad1c4:
      *(undefined8 *)(unaff_x22 + 0x38) = 0;
      *puVar11 = 0;
      *(undefined8 *)(unaff_x22 + 0x48) = 0;
      *(undefined8 *)(unaff_x22 + 0x40) = 0;
    }
    else {
      _swift_bridgeObjectRetain(lVar12);
      lVar6 = 0x73746c75736572;
      uVar7 = 0;
      FUN_10000464c(0x73746c75736572);
      if ((uVar7 & 1) == 0) {
        _swift_bridgeObjectRelease(lVar12);
        goto LAB_1001ad1c4;
      }
      FUN_1000280d4(*(long *)(lVar12 + 0x38) + lVar6 * 0x20,puVar11);
      _swift_bridgeObjectRelease(lVar12);
    }
    _swift_bridgeObjectRelease(lVar12);
    if (*(long *)(unaff_x22 + 0x48) == 0) {
LAB_1001ad3e8:
      uVar4 = *(undefined8 *)(unaff_x22 + 0x140);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x148);
      FUN_10002a29c(puVar11,&DAT_10054d428,&DAT_100420300);
      goto LAB_1001ad40c;
    }
    puVar5 = &DAT_10054f988;
    FUN_100002f94(&DAT_10054f988,&DAT_100428ac0);
    uVar7 = unaff_x22 + 0xc0;
    _swift_dynamicCast(uVar7,puVar11,puVar1 + 8,puVar5,6);
    if ((uVar7 & 1) == 0) goto LAB_1001ad3e0;
    lVar12 = *(long *)(unaff_x22 + 0xc0);
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar4 = *(undefined8 *)(unaff_x22 + 0x140);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x148);
      _swift_bridgeObjectRelease(lVar12);
      goto LAB_1001ad40c;
    }
    puVar11 = (undefined8 *)(unaff_x22 + 0x50);
    lVar6 = *(long *)(lVar12 + 0x20);
    _swift_bridgeObjectRetain(lVar6);
    _swift_bridgeObjectRelease(lVar12);
    if (*(long *)(lVar6 + 0x10) == 0) {
LAB_1001ad29c:
      *(undefined8 *)(unaff_x22 + 0x58) = 0;
      *puVar11 = 0;
      *(undefined8 *)(unaff_x22 + 0x68) = 0;
      *(undefined8 *)(unaff_x22 + 0x60) = 0;
    }
    else {
      _swift_bridgeObjectRetain(lVar6);
      lVar12 = 0x556b726f77747261;
      uVar7 = 0;
      FUN_10000464c(0x556b726f77747261);
      if ((uVar7 & 1) == 0) {
        _swift_bridgeObjectRelease(lVar6);
        goto LAB_1001ad29c;
      }
      FUN_1000280d4(*(long *)(lVar6 + 0x38) + lVar12 * 0x20,puVar11);
      _swift_bridgeObjectRelease(lVar6);
    }
    _swift_bridgeObjectRelease(lVar6);
    puVar5 = PTR___type_metadata_for_Swift_String_100523a98;
    if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_1001ad3e8;
    uVar7 = unaff_x22 + 0x70;
    _swift_dynamicCast(uVar7,puVar11,puVar1 + 8,PTR___type_metadata_for_Swift_String_100523a98,6);
    if ((uVar7 & 1) == 0) goto LAB_1001ad3e0;
    pcVar17 = *(code **)(unaff_x22 + 0x118);
    uVar14 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar16 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x78);
    *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x70);
    *(undefined8 *)(unaff_x22 + 0x88) = uVar4;
    *(undefined8 *)(unaff_x22 + 0x90) = 0x30303178303031;
    *(undefined8 *)(unaff_x22 + 0x98) = 0xe700000000000000;
    *(undefined8 *)(unaff_x22 + 0xa0) = 0x30303678303036;
    *(undefined8 *)(unaff_x22 + 0xa8) = 0xe700000000000000;
    FUN_100026df4();
    SVar18 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                       (unaff_x22 + 0x90,unaff_x22 + 0xa0,0,0,0,1,puVar5,puVar5,puVar5,uVar7,uVar7,
                        uVar7);
    _swift_bridgeObjectRelease(uVar4);
    Foundation::URL::_init();
    _swift_bridgeObjectRelease(SVar18.bridgeObject);
    (*pcVar17)(uVar16,1,uVar14);
    if ((int)uVar16 != 1) {
      IVar3 = *(ID *)(unaff_x22 + 0x128);
      (**(code **)(unaff_x22 + 0x120))
                (*(undefined8 *)(unaff_x22 + 0x100),*(undefined8 *)(unaff_x22 + 0xd8),
                 *(undefined8 *)(unaff_x22 + 0xf0));
      IVar3 = objc_stub::sharedSession(IVar3);
      *(ID *)(unaff_x22 + 0x158) = IVar3;
      plVar9 = (long *)(ulong)*(uint *)(PTR__data_100520ea0 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x160) = plVar9;
      *plVar9 = unaff_x22;
      plVar9[1] = (long)FUN_1001ad544;
      if (*(long *)PTR____stack_chk_guard_100521138 == lVar10) {
        tVar19 = (extension_Foundation)::__C::NSURLSession::_data
                           ((URL)*(undefined **)(unaff_x22 + 0x100));
        return tVar19;
      }
      goto LAB_1001ad540;
    }
    uVar4 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x110);
    uVar16 = *(undefined8 *)(unaff_x22 + 0xf0);
    lVar12 = *(long *)(unaff_x22 + 0xf8);
    uVar13 = *(undefined8 *)(unaff_x22 + 0xd8);
    FUN_100093624(*(undefined8 *)(unaff_x22 + 0x140),*(undefined8 *)(unaff_x22 + 0x148));
    pcVar17 = *(code **)(lVar12 + 8);
    (*pcVar17)(uVar4,uVar16);
    (*pcVar17)(uVar14,uVar16);
    FUN_10002a29c(uVar13,&DAT_100553d90,&DAT_10041bf10);
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar16 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xd8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x110));
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar15);
  UNRECOVERED_JUMPTABLE = *(NSURLResponse **)(unaff_x22 + 8);
  if (*(long *)PTR____stack_chk_guard_100521138 == lVar10) {
    DVar8.unknown = (undefined *)0x0;
                    /* WARNING: Could not recover jumptable at 0x0001001ad4a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE)(0);
    tVar19._ = UNRECOVERED_JUMPTABLE;
    tVar19._.unknown = DVar8.unknown;
    return tVar19;
  }
LAB_1001ad540:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

