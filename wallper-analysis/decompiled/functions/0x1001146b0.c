// rea decompile_all
// name: FUN_1001146b0
// address: 0x1001146b0
// body: available
// range: 0x1001146b0-0x1001148fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001148dc to 0x100114970 FUN_100114970 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1001146b0(undefined8 param_1,code *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  code *pcVar4;
  NSString *pNVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  State SVar9;
  long *plVar10;
  ID IVar11;
  long unaff_x22;
  
  if (DAT_1005528e0 != -1) {
    param_2 = FUN_1000fe734;
    _swift_once(&DAT_1005528e0,FUN_1000fe734);
  }
  lVar7 = DAT_100577c20;
  FUN_100113fec();
  IVar11 = *(ID *)(lVar7 + 0x10);
  pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar11 = objc_stub::objectForKey_(IVar11,pNVar5);
  _swift_bridgeObjectRelease(param_2);
  if (IVar11 != 0) {
    lVar7 = *(long *)(unaff_x22 + 0x50);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x58));
    lVar6 = 0;
    FUN_100113f00();
    iVar3 = *(int *)(lVar6 + 0x24);
    *(ID *)(unaff_x22 + 0x48) = IVar11;
    puVar8 = &DAT_10054eed8;
    FUN_100002f94(&DAT_10054eed8,&DAT_1004249f0);
    SwiftUI::State::set_wrappedValue((State *)(lVar7 + iVar3),(ID *)(unaff_x22 + 0x48),puVar8);
    iVar3 = *(int *)(lVar6 + 0x28);
    *(undefined1 *)(unaff_x22 + 0x79) = 0;
    puVar8 = &DAT_10054ab50;
    FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
    SwiftUI::State::set_wrappedValue
              ((State *)(lVar7 + iVar3),(undefined1 *)(unaff_x22 + 0x79),puVar8);
                    /* WARNING: Could not recover jumptable at 0x0001001147c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar6 = *(long *)(unaff_x22 + 0x50);
  lVar7 = 0;
  FUN_100113f00();
  iVar3 = *(int *)(lVar7 + 0x24);
  *(undefined8 *)(unaff_x22 + 0x30) = 0;
  puVar8 = &DAT_10054eed8;
  FUN_100002f94(&DAT_10054eed8,&DAT_1004249f0);
  SwiftUI::State::set_wrappedValue((State *)(lVar6 + iVar3),unaff_x22 + 0x30,puVar8);
  iVar3 = *(int *)(lVar7 + 0x28);
  *(undefined1 *)(unaff_x22 + 0x78) = 1;
  puVar8 = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::set_wrappedValue((State *)(lVar6 + iVar3),unaff_x22 + 0x78,puVar8);
  puVar1 = (undefined8 *)(lVar6 + *(int *)(lVar7 + 0x2c));
  puVar8 = (undefined *)*puVar1;
  uVar2 = puVar1[1];
  *(undefined **)(unaff_x22 + 0x10) = puVar8;
  *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
  _swift_retain(uVar2);
  SVar9.unknown = &DAT_10054ba40;
  FUN_100002f94(&DAT_10054ba40,&DAT_100423be0);
  SwiftUI::State::get_wrappedValue(SVar9);
  lVar7 = *(long *)(unaff_x22 + 0x38);
  if (!SCARRY8(lVar7,1)) {
    ((State *)(unaff_x22 + 0x20))->unknown = puVar8;
    *(undefined8 *)(unaff_x22 + 0x28) = uVar2;
    *(long *)(unaff_x22 + 0x40) = lVar7 + 1;
    SwiftUI::State::set_wrappedValue
              ((State *)(unaff_x22 + 0x20),(long *)(unaff_x22 + 0x40),SVar9.unknown);
    _swift_release(uVar2);
    plVar10 = (long *)0x2e0;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x70) = plVar10;
    *plVar10 = unaff_x22;
    plVar10[1] = (long)FUN_1001148fc;
    FUN_100114970();
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1001148fc);
  (*pcVar4)();
}

