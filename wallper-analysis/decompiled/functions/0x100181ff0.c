// rea decompile_all
// name: FUN_100181ff0
// address: 0x100181ff0
// body: available
// range: 0x100181ff0-0x10018238f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100182230 to 0x10041478c _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100181ff0(void)

{
  uint uVar1;
  bool bVar2;
  RGBColorSpace RVar3;
  undefined7 extraout_var;
  ID IVar4;
  NSString *pNVar5;
  ID IVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  Color CVar10;
  ContiguousArray CVar11;
  long extraout_x8;
  ulong uVar12;
  ulong uVar13;
  long unaff_x20;
  long lVar14;
  long lVar15;
  ContiguousArray oldCount;
  double *pdVar16;
  code *pcVar17;
  undefined8 uVar18;
  double red;
  undefined8 uVar19;
  double green;
  undefined8 uVar20;
  double blue;
  
  RVar3 = SwiftUI::Color::RGBColorSpace::typeMetadataAccessor();
  lVar15 = *(long *)(CONCAT71(extraout_var,RVar3.value) + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar15 + 0x40));
  IVar4 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar4 = NSUserDefaults::boolForKey_(IVar4,pNVar5);
  if ((int)IVar4 != 0) {
    IVar4 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
    pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    IVar4 = NSUserDefaults::arrayForKey_(IVar4,pNVar5);
    if (IVar4 != 0) {
      CVar11.unknown = PTR___type_metadata_for_Any_100524178 + 8;
      (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
      IVar6 = IVar4;
      FUN_1001f03ac();
      _swift_bridgeObjectRelease(IVar4);
      if (IVar6 != 0) {
        if (*(long *)(IVar6 + 0x10) != 0x30) {
          _swift_bridgeObjectRelease(IVar6);
          return;
        }
        uVar12 = 0;
        puVar9 = PTR___swiftEmptyArrayStorage_100524190;
        do {
          uVar13 = *(ulong *)(IVar6 + 0x10);
          if (uVar13 <= uVar12) {
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x100182388);
            (*pcVar17)();
          }
          if (uVar13 <= uVar12 + 1) {
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x10018238c);
            (*pcVar17)();
          }
          if (uVar13 <= uVar12 + 2) {
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x100182390);
            (*pcVar17)();
          }
          lVar14 = IVar6 + uVar12 * 8;
          uVar18 = *(undefined8 *)(lVar14 + 0x20);
          uVar19 = *(undefined8 *)(lVar14 + 0x28);
          uVar20 = *(undefined8 *)(lVar14 + 0x30);
          puVar7 = puVar9;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar8 = puVar9;
          if (((ulong)puVar7 & 1) == 0) {
            CVar11.unknown = (undefined *)(*(long *)(puVar9 + 0x10) + 1);
            puVar8 = (undefined *)0x0;
            FUN_1001c44d4(0,CVar11.unknown,1,puVar9);
          }
          uVar13 = *(ulong *)(puVar8 + 0x10);
          puVar7 = (undefined *)(uVar13 + 1);
          puVar9 = puVar8;
          if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar13) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
            CVar11.unknown = puVar7;
            FUN_1001c44d4(puVar9,puVar7,1,puVar8);
          }
          *(undefined **)(puVar9 + 0x10) = puVar7;
          *(undefined8 *)(puVar9 + uVar13 * 0x18 + 0x20) = uVar18;
          *(undefined8 *)(puVar9 + uVar13 * 0x18 + 0x28) = uVar19;
          *(undefined8 *)(puVar9 + uVar13 * 0x18 + 0x30) = uVar20;
          bVar2 = uVar12 < 0x2d;
          uVar12 = uVar12 + 3;
        } while (bVar2);
        _swift_bridgeObjectRelease(IVar6);
        uVar18 = *(undefined8 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::dominantColorTuples);
        *(undefined **)(unaff_x20 + _TtC7Wallper17NowPlayingManager::dominantColorTuples) = puVar9;
        _swift_bridgeObjectRelease(uVar18);
        puVar7 = PTR___swiftEmptyArrayStorage_100524190;
        lVar14 = *(long *)(puVar9 + 0x10);
        if (lVar14 == 0) {
          _swift_bridgeObjectRetain(puVar9);
        }
        else {
          _swift_bridgeObjectRetain(puVar9);
          Swift::ContiguousArray::_reserveCapacity(lVar14,CVar11);
          uVar1 = *(uint *)
                   PTR___enum_case_for_SwiftUI_Color_RGBColorSpace_sRGB_SwiftUI_Color_RGBColorSpace_Type___>_SwiftUI_Color_RGBColorSpace_1005231e0
          ;
          pcVar17 = *(code **)(lVar15 + 0x68);
          pdVar16 = (double *)(puVar9 + 0x30);
          do {
            red = pdVar16[-2];
            green = pdVar16[-1];
            blue = *pdVar16;
            CVar11.unknown = (undefined *)(ulong)uVar1;
            (*pcVar17)(&stack0xffffffffffffff70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                       (undefined *)(ulong)uVar1,CONCAT71(extraout_var,RVar3.value));
            CVar10 = SwiftUI::Color::init
                               ((RGBColorSpace)
                                (__int8)(&stack0xffffffffffffff70 +
                                        -(extraout_x8 + 0xfU & 0xfffffffffffffff0)),red,green,blue,
                                1.0);
            Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique
                      ((ContiguousArray)CVar10.unknown);
                    /* WARNING: Load size is inaccurate */
            oldCount.unknown = puVar7[0x10];
            Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer
                      ((__int64)oldCount.unknown,CVar11);
            Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity
                      (oldCount.unknown,CVar10.unknown);
            Swift::ContiguousArray::__endMutation(oldCount);
            lVar14 = lVar14 + -1;
            pdVar16 = pdVar16 + 3;
          } while (lVar14 != 0);
        }
        _swift_getKeyPath(&DAT_100429ce8);
        _swift_getKeyPath(&DAT_100429d10);
        _swift_retain(unaff_x20);
        Combine::Published::_set_subscript();
        FUN_1001790d4(0);
        _swift_bridgeObjectRelease(puVar9);
      }
    }
  }
  return;
}

