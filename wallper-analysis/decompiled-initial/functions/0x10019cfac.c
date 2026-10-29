// rea decompile_all
// name: FUN_10019cfac
// address: 0x10019cfac
// body: available
// range: 0x10019cfac-0x10019d1ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10019d1fc to 0x100413640 /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::__C::NSURLSession::$data (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

tuple2_conflict1 FUN_10019cfac(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  Data DVar5;
  ID IVar6;
  long *plVar7;
  NSURLResponse *UNRECOVERED_JUMPTABLE;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  String SVar11;
  tuple2_conflict1 tVar12;
  
  if (*(long *)(*(long *)(unaff_x22 + 0xa0) + 0x10) == 0) {
LAB_10019d130:
    uVar9 = *(undefined8 *)(unaff_x22 + 200);
  }
  else {
    _swift_bridgeObjectRetain(*(long *)(unaff_x22 + 0xa0));
    lVar3 = 0x556b726f77747261;
    uVar4 = 0;
    FUN_10000464c(0x556b726f77747261);
    if ((uVar4 & 1) != 0) {
      lVar8 = *(long *)(unaff_x22 + 0xa0);
      FUN_1000280d4(*(long *)(lVar8 + 0x38) + lVar3 * 0x20,unaff_x22 + 0x10);
      _swift_bridgeObjectRelease(lVar8);
      puVar2 = PTR___type_metadata_for_Swift_String_100523a98;
      uVar4 = unaff_x22 + 0x50;
      _swift_dynamicCast(uVar4,unaff_x22 + 0x10,PTR___type_metadata_for_Any_100524178 + 8,
                         PTR___type_metadata_for_Swift_String_100523a98,6);
      if ((uVar4 & 1) != 0) {
        uVar9 = *(undefined8 *)(unaff_x22 + 0xb0);
        lVar3 = *(long *)(unaff_x22 + 0xb8);
        uVar10 = *(undefined8 *)(unaff_x22 + 0xa8);
        uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
        *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x50);
        *(undefined8 *)(unaff_x22 + 0x68) = uVar1;
        *(undefined8 *)(unaff_x22 + 0x70) = 0x30303178303031;
        *(undefined8 *)(unaff_x22 + 0x78) = 0xe700000000000000;
        *(undefined8 *)(unaff_x22 + 0x80) = 0x30303678303036;
        *(undefined8 *)(unaff_x22 + 0x88) = 0xe700000000000000;
        FUN_100026df4();
        SVar11 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                           (unaff_x22 + 0x70,unaff_x22 + 0x80,0,0,0,1,puVar2,puVar2,puVar2,uVar4,
                            uVar4,uVar4);
        _swift_bridgeObjectRelease(uVar1);
        Foundation::URL::_init();
        _swift_bridgeObjectRelease(SVar11.bridgeObject);
        (**(code **)(lVar3 + 0x30))(uVar10,1,uVar9);
        if ((int)uVar10 != 1) {
          (**(code **)(*(long *)(unaff_x22 + 0xb8) + 0x20))
                    (*(undefined8 *)(unaff_x22 + 0xc0),*(undefined8 *)(unaff_x22 + 0xa8),
                     *(undefined8 *)(unaff_x22 + 0xb0));
          IVar6 = NSURLSession::sharedSession((ID)&_OBJC_CLASS___NSURLSession);
          *(ID *)(unaff_x22 + 0xe0) = IVar6;
          plVar7 = (long *)(ulong)*(uint *)(PTR__data_100520ea0 + 4);
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0xe8) = plVar7;
          *plVar7 = unaff_x22;
          plVar7[1] = (long)FUN_10019d200;
          tVar12 = (extension_Foundation)::__C::NSURLSession::_data
                             ((URL)*(undefined **)(unaff_x22 + 0xc0));
          return tVar12;
        }
        uVar9 = *(undefined8 *)(unaff_x22 + 0xa8);
        _swift_release(*(undefined8 *)(unaff_x22 + 200));
        FUN_10002a29c(uVar9,&DAT_100553d90,&DAT_10041bf10);
        goto LAB_10019d14c;
      }
      goto LAB_10019d130;
    }
    uVar9 = *(undefined8 *)(unaff_x22 + 200);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0xa0));
  }
  _swift_release(uVar9);
LAB_10019d14c:
  uVar9 = *(undefined8 *)(unaff_x22 + 0xa8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xc0));
  _swift_task_dealloc(uVar9);
  UNRECOVERED_JUMPTABLE = *(NSURLResponse **)(unaff_x22 + 8);
  DVar5.unknown = (undefined *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00010019d180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(0);
  tVar12._ = UNRECOVERED_JUMPTABLE;
  tVar12._.unknown = DVar5.unknown;
  return tVar12;
}

