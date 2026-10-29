// rea decompile_all
// name: FUN_1000a2620
// address: 0x1000a2620
// body: available
// range: 0x1000a2620-0x1000a2c17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000a2c10 to 0x100413640 /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::__C::NSURLSession::$data (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1000a2c14 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

tuple2_conflict1 FUN_1000a2620(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  NSData *pNVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  Data DVar10;
  long *plVar11;
  NSURLResponse *pNVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 uVar17;
  long unaff_x22;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  code *pcVar22;
  String SVar23;
  tuple2_conflict1 tVar24;
  
  lVar14 = *(long *)PTR____stack_chk_guard_100521138;
  pNVar4 = Foundation::Data::_bridgeToObjectiveC((Data)*(undefined **)(unaff_x22 + 0x158));
  puVar15 = (undefined8 *)(unaff_x22 + 0xb0);
  *puVar15 = 0;
  IVar5 = NSJSONSerialization::JSONObjectWithData_options_error_
                    ((ID)&_OBJC_CLASS___NSJSONSerialization,pNVar4,0,puVar15);
  uVar6 = *puVar15;
  if (IVar5 == 0) {
    uVar20 = *(undefined8 *)(unaff_x22 + 0x158);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x160);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x110);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x100);
    lVar16 = *(long *)(unaff_x22 + 0x108);
    uVar21 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar17 = *(undefined8 *)(unaff_x22 + 0xd8);
    lVar8 = *(long *)(unaff_x22 + 0xe0);
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_release(uVar2);
    FUN_100093624(uVar20,uVar19);
    _swift_errorRelease(uVar6);
    (**(code **)(lVar8 + 8))(uVar21,uVar17);
    (**(code **)(lVar16 + 8))(uVar18,uVar1);
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar5);
    puVar7 = &DAT_10054f980;
    FUN_100002f94(&DAT_10054f980,&DAT_10042a870);
    puVar13 = PTR___type_metadata_for_Any_100524178;
    uVar9 = unaff_x22 + 0xb8;
    _swift_dynamicCast(uVar9,unaff_x22 + 0x10,PTR___type_metadata_for_Any_100524178 + 8,puVar7,6);
    if ((uVar9 & 1) == 0) {
LAB_1000a2a5c:
      uVar6 = *(undefined8 *)(unaff_x22 + 0x158);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x160);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x110);
      uVar18 = *(undefined8 *)(unaff_x22 + 0x100);
      lVar16 = *(long *)(unaff_x22 + 0x108);
      uVar19 = *(undefined8 *)(unaff_x22 + 0xf0);
      uVar1 = *(undefined8 *)(unaff_x22 + 0xd8);
      lVar8 = *(long *)(unaff_x22 + 0xe0);
      _swift_release(*(undefined8 *)(unaff_x22 + 0x118));
      FUN_100093624(uVar6,uVar17);
      (**(code **)(lVar8 + 8))(uVar19,uVar1);
      (**(code **)(lVar16 + 8))(uVar20,uVar18);
    }
    else {
      puVar15 = (undefined8 *)(unaff_x22 + 0x30);
      lVar16 = *(long *)(unaff_x22 + 0xb8);
      if (*(long *)(lVar16 + 0x10) == 0) {
LAB_1000a27e8:
        *(undefined8 *)(unaff_x22 + 0x38) = 0;
        *puVar15 = 0;
        *(undefined8 *)(unaff_x22 + 0x48) = 0;
        *(undefined8 *)(unaff_x22 + 0x40) = 0;
      }
      else {
        _swift_bridgeObjectRetain(lVar16);
        lVar8 = 0x73746c75736572;
        uVar9 = 0;
        FUN_10000464c(0x73746c75736572);
        if ((uVar9 & 1) == 0) {
          _swift_bridgeObjectRelease(lVar16);
          goto LAB_1000a27e8;
        }
        FUN_1000280d4(*(long *)(lVar16 + 0x38) + lVar8 * 0x20,puVar15);
        _swift_bridgeObjectRelease(lVar16);
      }
      _swift_bridgeObjectRelease(lVar16);
      if (*(long *)(unaff_x22 + 0x48) == 0) {
LAB_1000a2aa4:
        uVar6 = *(undefined8 *)(unaff_x22 + 0x158);
        uVar17 = *(undefined8 *)(unaff_x22 + 0x160);
        uVar20 = *(undefined8 *)(unaff_x22 + 0x110);
        uVar18 = *(undefined8 *)(unaff_x22 + 0x100);
        lVar16 = *(long *)(unaff_x22 + 0x108);
        uVar19 = *(undefined8 *)(unaff_x22 + 0xf0);
        uVar1 = *(undefined8 *)(unaff_x22 + 0xd8);
        lVar8 = *(long *)(unaff_x22 + 0xe0);
        _swift_release(*(undefined8 *)(unaff_x22 + 0x118));
        FUN_100093624(uVar6,uVar17);
        (**(code **)(lVar8 + 8))(uVar19,uVar1);
        (**(code **)(lVar16 + 8))(uVar20,uVar18);
        puVar7 = &DAT_10054d428;
        puVar13 = &DAT_100420300;
      }
      else {
        puVar7 = &DAT_10054f988;
        FUN_100002f94(&DAT_10054f988,&DAT_100428ac0);
        uVar9 = unaff_x22 + 0xc0;
        _swift_dynamicCast(uVar9,puVar15,puVar13 + 8,puVar7,6);
        if ((uVar9 & 1) == 0) goto LAB_1000a2a5c;
        lVar16 = *(long *)(unaff_x22 + 0xc0);
        if (*(long *)(lVar16 + 0x10) == 0) {
          uVar6 = *(undefined8 *)(unaff_x22 + 0x158);
          uVar17 = *(undefined8 *)(unaff_x22 + 0x160);
          uVar20 = *(undefined8 *)(unaff_x22 + 0x110);
          uVar18 = *(undefined8 *)(unaff_x22 + 0x100);
          lVar8 = *(long *)(unaff_x22 + 0x108);
          uVar19 = *(undefined8 *)(unaff_x22 + 0xf0);
          uVar1 = *(undefined8 *)(unaff_x22 + 0xd8);
          lVar3 = *(long *)(unaff_x22 + 0xe0);
          _swift_release(*(undefined8 *)(unaff_x22 + 0x118));
          FUN_100093624(uVar6,uVar17);
          _swift_bridgeObjectRelease(lVar16);
          (**(code **)(lVar3 + 8))(uVar19,uVar1);
          (**(code **)(lVar8 + 8))(uVar20,uVar18);
          goto LAB_1000a2b00;
        }
        puVar15 = (undefined8 *)(unaff_x22 + 0x50);
        lVar8 = *(long *)(lVar16 + 0x20);
        _swift_bridgeObjectRetain(lVar8);
        _swift_bridgeObjectRelease(lVar16);
        if (*(long *)(lVar8 + 0x10) == 0) {
LAB_1000a2900:
          *(undefined8 *)(unaff_x22 + 0x58) = 0;
          *puVar15 = 0;
          *(undefined8 *)(unaff_x22 + 0x68) = 0;
          *(undefined8 *)(unaff_x22 + 0x60) = 0;
        }
        else {
          _swift_bridgeObjectRetain(lVar8);
          lVar16 = 0x556b726f77747261;
          uVar9 = 0;
          FUN_10000464c(0x556b726f77747261);
          if ((uVar9 & 1) == 0) {
            _swift_bridgeObjectRelease(lVar8);
            goto LAB_1000a2900;
          }
          FUN_1000280d4(*(long *)(lVar8 + 0x38) + lVar16 * 0x20,puVar15);
          _swift_bridgeObjectRelease(lVar8);
        }
        _swift_bridgeObjectRelease(lVar8);
        puVar7 = PTR___type_metadata_for_Swift_String_100523a98;
        if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_1000a2aa4;
        uVar9 = unaff_x22 + 0x70;
        _swift_dynamicCast(uVar9,puVar15,puVar13 + 8,PTR___type_metadata_for_Swift_String_100523a98,
                           6);
        if ((uVar9 & 1) == 0) goto LAB_1000a2a5c;
        pcVar22 = *(code **)(unaff_x22 + 0x130);
        uVar18 = *(undefined8 *)(unaff_x22 + 0xd8);
        uVar20 = *(undefined8 *)(unaff_x22 + 200);
        uVar6 = *(undefined8 *)(unaff_x22 + 0x78);
        *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x70);
        *(undefined8 *)(unaff_x22 + 0x88) = uVar6;
        *(undefined8 *)(unaff_x22 + 0x90) = 0x6230303178303031;
        *(undefined8 *)(unaff_x22 + 0x98) = 0xe900000000000062;
        *(undefined8 *)(unaff_x22 + 0xa0) = 0x6230303678303036;
        *(undefined8 *)(unaff_x22 + 0xa8) = 0xe900000000000062;
        FUN_100026df4();
        SVar23 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                           (unaff_x22 + 0x90,unaff_x22 + 0xa0,0,0,0,1,puVar7,puVar7,puVar7,uVar9,
                            uVar9,uVar9);
        _swift_bridgeObjectRelease(uVar6);
        Foundation::URL::_init();
        _swift_bridgeObjectRelease(SVar23.bridgeObject);
        (*pcVar22)(uVar20,1,uVar18);
        if ((int)uVar20 != 1) {
          IVar5 = *(ID *)(unaff_x22 + 0x140);
          (**(code **)(unaff_x22 + 0x138))
                    (*(undefined8 *)(unaff_x22 + 0xe8),*(undefined8 *)(unaff_x22 + 200),
                     *(undefined8 *)(unaff_x22 + 0xd8));
          IVar5 = objc_stub::sharedSession(IVar5);
          *(ID *)(unaff_x22 + 0x170) = IVar5;
          plVar11 = (long *)(ulong)*(uint *)(PTR__data_100520ea0 + 4);
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0x178) = plVar11;
          *plVar11 = unaff_x22;
          plVar11[1] = (long)FUN_1000a2c18;
          if (*(long *)PTR____stack_chk_guard_100521138 == lVar14) {
            tVar24 = (extension_Foundation)::__C::NSURLSession::_data
                               ((URL)*(undefined **)(unaff_x22 + 0xe8));
            return tVar24;
          }
          goto LAB_1000a2c14;
        }
        uVar6 = *(undefined8 *)(unaff_x22 + 0x158);
        uVar17 = *(undefined8 *)(unaff_x22 + 0x160);
        uVar20 = *(undefined8 *)(unaff_x22 + 0x110);
        uVar18 = *(undefined8 *)(unaff_x22 + 0x100);
        lVar16 = *(long *)(unaff_x22 + 0x108);
        uVar19 = *(undefined8 *)(unaff_x22 + 0xf0);
        uVar1 = *(undefined8 *)(unaff_x22 + 0xd8);
        lVar8 = *(long *)(unaff_x22 + 0xe0);
        puVar15 = *(undefined8 **)(unaff_x22 + 200);
        _swift_release(*(undefined8 *)(unaff_x22 + 0x118));
        FUN_100093624(uVar6,uVar17);
        (**(code **)(lVar8 + 8))(uVar19,uVar1);
        (**(code **)(lVar16 + 8))(uVar20,uVar18);
        puVar7 = &DAT_100553d90;
        puVar13 = &DAT_10041bf10;
      }
      FUN_10002a29c(puVar15,puVar7,puVar13);
    }
  }
LAB_1000a2b00:
  uVar6 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar18 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar17 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar20 = *(undefined8 *)(unaff_x22 + 200);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x110));
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar20);
  if (*(long *)PTR____stack_chk_guard_100521138 == lVar14) {
    DVar10.unknown = (undefined *)0x0;
    pNVar12 = (NSURLResponse *)0xf000000000000000;
                    /* WARNING: Could not recover jumptable at 0x0001000a2b7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(0,0xf000000000000000);
    tVar24._ = pNVar12;
    tVar24._.unknown = DVar10.unknown;
    return tVar24;
  }
LAB_1000a2c14:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

