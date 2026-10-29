// rea decompile_all
// name: FUN_1002a9fac
// address: 0x1002a9fac
// body: available
// range: 0x1002a9fac-0x1002aa2f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002a9fac(undefined8 param_1,double param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  NSString *pNVar5;
  NSURL *self;
  NSString *in_x3;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ID IVar11;
  ulong uVar12;
  long unaff_x22;
  long lVar13;
  Task TVar14;
  char *pcVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  double extraout_d0;
  double dVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  
  lVar9 = *(long *)(unaff_x22 + 0x58);
  uVar6 = *(ulong *)(lVar9 + 0x10);
  if (uVar6 != 0) {
    uVar12 = 0;
    lVar1 = *(long *)(unaff_x22 + 0x40);
    lVar2 = *(long *)(unaff_x22 + 0x48);
    lVar7 = *(long *)(unaff_x22 + 0x38);
    lVar18 = *(long *)(unaff_x22 + 0x28);
    do {
      if (*(ulong *)(lVar9 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1002aa2ec);
        (*pcVar3)();
      }
      lVar13 = *(long *)(unaff_x22 + 0x48);
      TVar14.unknown = *(undefined **)(unaff_x22 + 0x30);
      pcVar15 = *(char **)(unaff_x22 + 0x20);
      uVar8 = (ulong)*(byte *)(lVar1 + 0x50);
      FUN_1002ab910(*(long *)(unaff_x22 + 0x58) + (uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff)) +
                    *(long *)(lVar1 + 0x48) * uVar12,lVar13);
      lVar10 = *(long *)(lVar2 + 8);
      (**(code **)(lVar18 + 0x20))(TVar14.unknown,lVar13 + *(int *)(lVar7 + 0x30));
      bVar4 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar14);
      if (bVar4) {
        uVar16 = *(undefined8 *)(unaff_x22 + 0x58);
        (**(code **)(lVar18 + 8))
                  (*(undefined8 *)(unaff_x22 + 0x30),*(undefined8 *)(unaff_x22 + 0x20));
        _swift_bridgeObjectRelease(uVar16);
        lVar9 = lVar10;
        goto LAB_1002aa2a0;
      }
      SVar20.bridgeObject = (void *)0xe100000000000000;
      SVar20.str = (char *)0x40;
      SVar21.bridgeObject = in_x3;
      SVar21.str = pcVar15;
      Swift::String::append(SVar20,SVar21);
      *(undefined8 *)(unaff_x22 + 0x10) = 0x300;
      SVar20 = Swift::CustomStringConvertible::get_description();
      SVar22.bridgeObject = in_x3;
      SVar22.str = pcVar15;
      Swift::String::append(SVar20,SVar22);
      _swift_bridgeObjectRelease(SVar20.bridgeObject);
      if (DAT_1005528e0 != -1) {
        _swift_once(&DAT_1005528e0,FUN_1000fe734);
      }
      lVar13 = DAT_100577c20;
      IVar11 = *(ID *)(DAT_100577c20 + 0x10);
      pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      IVar11 = objc_stub::objectForKey_(IVar11,pNVar5);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x30);
      if (IVar11 == 0) {
        self = Foundation::URL::_bridgeToObjectiveC((URL)0x0);
        _CGImageSourceCreateWithURL(self,0);
        if ((self == (NSURL *)0x0) || (FUN_10010f93c(self,0x300), self == (NSURL *)0x0)) {
          (**(code **)(lVar18 + 8))
                    (*(undefined8 *)(unaff_x22 + 0x30),*(undefined8 *)(unaff_x22 + 0x20));
          _swift_bridgeObjectRelease(lVar10);
        }
        else {
          objc_stub::size((ID)self);
          objc_stub::size((ID)self);
          dVar19 = extraout_d0 * param_2 * 4.0;
          if (0x7fefffffffffffff < (ulong)ABS(dVar19)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1002aa2f0);
            (*pcVar3)();
          }
          if (dVar19 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1002aa2f4);
            (*pcVar3)();
          }
          param_2 = 9.223372036854776e+18;
          if (9.223372036854776e+18 <= dVar19) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1002aa2f8);
            (*pcVar3)();
          }
          uVar17 = *(undefined8 *)(unaff_x22 + 0x30);
          uVar16 = *(undefined8 *)(unaff_x22 + 0x20);
          IVar11 = *(ID *)(lVar13 + 0x10);
          in_x3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          objc_stub::setObject_forKey_cost_(IVar11,self,in_x3,(long)dVar19);
          _swift_bridgeObjectRelease(lVar10);
          (**(code **)(lVar18 + 8))(uVar17,uVar16);
        }
      }
      else {
        uVar17 = *(undefined8 *)(unaff_x22 + 0x20);
        _swift_bridgeObjectRelease(lVar10);
        (**(code **)(lVar18 + 8))(uVar16,uVar17);
      }
      uVar12 = uVar12 + 1;
    } while (uVar6 != uVar12);
    lVar9 = *(long *)(unaff_x22 + 0x58);
  }
LAB_1002aa2a0:
  uVar16 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x30);
  _swift_bridgeObjectRelease(lVar9);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar17);
                    /* WARNING: Could not recover jumptable at 0x0001002aa2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

