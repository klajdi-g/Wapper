// rea decompile_all
// name: FUN_10003bc24
// address: 0x10003bc24
// body: available
// range: 0x10003bc24-0x10003c0d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10003c0b4 to 0x10003c5b4 FUN_10003c5b4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10003c0d0 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10003bc24(undefined8 param_1,_StringGuts param_2,URL param_3,void *param_4)

{
  char *pcVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  byte bVar11;
  String SVar12;
  URL self;
  NSString *pNVar13;
  ID IVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  code *pcVar18;
  char *pcVar19;
  ulong uVar20;
  long unaff_x22;
  double dVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  
  lVar17 = *(long *)PTR____stack_chk_guard_100521138;
  pcVar19 = (char *)0x746e656964617267;
  bVar11 = *(byte *)(unaff_x22 + 0x1e8);
  FUN_10003b620(*(undefined8 *)(unaff_x22 + 0x1a0));
  Swift::_StringGuts::grow(0x18,param_2);
  _swift_bridgeObjectRelease(0xe000000000000000);
  pvVar4 = (void *)0xef747365726f662d;
  pcVar1 = pcVar19;
  if (bVar11 != 5) {
    pcVar1 = (char *)0xd000000000000011;
    pvVar4 = (void *)0x80000001004dbf90;
  }
  pvVar2 = (void *)0xed00006e6f656e2d;
  if (bVar11 != 3) {
    pvVar2 = (void *)0xee007265626d652d;
  }
  if (bVar11 < 5) {
    pvVar4 = pvVar2;
    pcVar1 = pcVar19;
  }
  pvVar2 = (void *)0xef7465736e75732d;
  if (bVar11 != 1) {
    pvVar2 = (void *)0xee006e6165636f2d;
  }
  pvVar3 = (void *)0xef61726f7275612d;
  if (bVar11 != 0) {
    pvVar3 = pvVar2;
  }
  if (bVar11 < 3) {
    pvVar4 = pvVar3;
    pcVar1 = pcVar19;
  }
  uVar20 = *(ulong *)(unaff_x22 + 0x1b8);
  SVar23.bridgeObject = pvVar4;
  SVar23.str = pcVar1;
  SVar26.bridgeObject = param_4;
  SVar26.str = param_3.unknown;
  Swift::String::append(SVar23,SVar26);
  _swift_bridgeObjectRelease(pvVar4);
  SVar22.bridgeObject = (void *)0xe100000000000000;
  SVar22.str = (char *)0x2d;
  SVar27.bridgeObject = param_4;
  SVar27.str = param_3.unknown;
  Swift::String::append(SVar22,SVar27);
  if (0x7fefffffffffffff < (uVar20 & 0x7fffffffffffffff)) {
                    /* WARNING: Does not return */
    pcVar18 = (code *)SoftwareBreakpoint(1,0x10003c0bc);
    (*pcVar18)();
  }
  dVar21 = *(double *)(unaff_x22 + 0x1b8);
  if (dVar21 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar18 = (code *)SoftwareBreakpoint(1,0x10003c0c0);
    (*pcVar18)();
  }
  if (dVar21 < 9.223372036854776e+18) {
    uVar20 = *(ulong *)(unaff_x22 + 0x1c0);
    *(long *)(unaff_x22 + 0x150) = (long)dVar21;
    SVar23 = Swift::CustomStringConvertible::get_description();
    SVar28.bridgeObject = param_4;
    SVar28.str = param_3.unknown;
    Swift::String::append(SVar23,SVar28);
    _swift_bridgeObjectRelease(SVar23.bridgeObject);
    SVar24.bridgeObject = (void *)0xe100000000000000;
    SVar24.str = (char *)0x78;
    SVar29.bridgeObject = param_4;
    SVar29.str = param_3.unknown;
    Swift::String::append(SVar24,SVar29);
    if (0x7fefffffffffffff < (uVar20 & 0x7fffffffffffffff)) {
                    /* WARNING: Does not return */
      pcVar18 = (code *)SoftwareBreakpoint(1,0x10003c0c8);
      (*pcVar18)();
    }
    dVar21 = *(double *)(unaff_x22 + 0x1c0);
    if (dVar21 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar18 = (code *)SoftwareBreakpoint(1,0x10003c0cc);
      (*pcVar18)();
    }
    if (9.223372036854776e+18 <= dVar21) {
                    /* WARNING: Does not return */
      pcVar18 = (code *)SoftwareBreakpoint(1,0x10003c0d0);
      (*pcVar18)();
    }
    uVar5 = *(undefined8 *)(unaff_x22 + 0x1a0);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x188);
    lVar7 = *(long *)(unaff_x22 + 400);
    *(long *)(unaff_x22 + 0x158) = (long)dVar21;
    SVar23 = Swift::CustomStringConvertible::get_description();
    SVar30.bridgeObject = param_4;
    SVar30.str = param_3.unknown;
    Swift::String::append(SVar23,SVar30);
    _swift_bridgeObjectRelease(SVar23.bridgeObject);
    SVar25.bridgeObject = (void *)0xe400000000000000;
    SVar25.str = (char *)0x766f6d2e;
    SVar31.bridgeObject = param_4;
    SVar31.str = param_3.unknown;
    Swift::String::append(SVar25,SVar31);
    SVar12.bridgeObject = (void *)0xec0000002d657669;
    SVar12.str = (char *)0x7463617265746e69;
    Foundation::URL::appendingPathComponent(SVar12,param_3);
    _swift_bridgeObjectRelease(0xec0000002d657669);
    pcVar18 = *(code **)(lVar7 + 8);
    *(code **)(unaff_x22 + 0x1c8) = pcVar18;
    (*pcVar18)(uVar5,uVar6);
    *(undefined **)(unaff_x22 + 0x1d0) = &_OBJC_CLASS___NSFileManager;
    self.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
    SVar23 = Foundation::URL::get_path(self);
    pNVar13 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar23.bridgeObject);
    IVar14 = NSFileManager::fileExistsAtPath_((ID)self.unknown,pNVar13);
    if ((int)IVar14 == 0) {
      uVar5 = *(undefined8 *)(unaff_x22 + 0x188);
      lVar7 = *(long *)(unaff_x22 + 400);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x178);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x180);
      lVar15 = 0;
      FUN_10009e280();
      (**(code **)(*(long *)(lVar15 + -8) + 0x38))(uVar8,1,1,lVar15);
      (**(code **)(lVar7 + 0x38))(uVar6,1,1,uVar5);
      plVar16 = (long *)0x770;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x1d8) = plVar16;
      *plVar16 = unaff_x22;
      plVar16[1] = (long)FUN_10003c0d4;
      if (*(long *)PTR____stack_chk_guard_100521138 == lVar17) {
        FUN_10003c5b4(plVar16,*(undefined8 *)(unaff_x22 + 0x1b8),*(undefined8 *)(unaff_x22 + 0x1c0),
                      *(undefined8 *)(unaff_x22 + 0x198),unaff_x22 + 0x60,
                      *(undefined8 *)(unaff_x22 + 0x180),0,*(undefined8 *)(unaff_x22 + 0x178),0,0);
        return;
      }
    }
    else {
      *(undefined8 *)(unaff_x22 + 0x118) = *(undefined8 *)(unaff_x22 + 0x68);
      *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 0x60);
      FUN_100043c00(unaff_x22 + 0x110);
      *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0x78);
      *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x70);
      FUN_100043c00(unaff_x22 + 0x100);
      *(undefined8 *)(unaff_x22 + 0x148) = *(undefined8 *)(unaff_x22 + 0x80);
      FUN_10002a29c(unaff_x22 + 0x148,&DAT_10054c050,&DAT_10041dca0);
      *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0x88);
      FUN_10002a29c(unaff_x22 + 0x140,&DAT_10054c058,&DAT_10041d7d0);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x1a0);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x1a8);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x198);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x180);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x178);
      (**(code **)(*(long *)(unaff_x22 + 400) + 0x20))
                (*(undefined8 *)(unaff_x22 + 0x170),uVar8,*(undefined8 *)(unaff_x22 + 0x188));
      _swift_task_dealloc(uVar8);
      _swift_task_dealloc(uVar5);
      _swift_task_dealloc(uVar9);
      _swift_task_dealloc(uVar6);
      _swift_task_dealloc(uVar10);
      if (*(long *)PTR____stack_chk_guard_100521138 == lVar17) {
                    /* WARNING: Could not recover jumptable at 0x00010003bffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))();
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
                    /* WARNING: Does not return */
  pcVar18 = (code *)SoftwareBreakpoint(1,0x10003c0c4);
  (*pcVar18)();
}

