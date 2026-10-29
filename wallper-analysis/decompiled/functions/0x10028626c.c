// rea decompile_all
// name: FUN_10028626c
// address: 0x10028626c
// body: available
// range: 0x10028626c-0x1002864df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10028626c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ID *param_6,undefined8 param_7,char *param_8,void *param_9)

{
  code *pcVar1;
  ID self;
  double extraout_d0;
  double dVar2;
  double extraout_d0_00;
  String SVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  char *local_70;
  void *pvStack_68;
  
  self = *param_6;
  objc_stub::frame(self);
  objc_stub::localizedName(self);
  SVar3 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  SVar4.bridgeObject = (void *)0xe100000000000000;
  SVar4.str = (char *)0x20;
  SVar8.bridgeObject = param_9;
  SVar8.str = param_8;
  Swift::String::append(SVar4,SVar8);
  dVar2 = extraout_d0;
  _CGRectGetWidth(extraout_d0,param_3,param_4,param_5);
  if (0x7fefffffffffffff < (ulong)ABS(dVar2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1002864c0);
    (*pcVar1)();
  }
  if (dVar2 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1002864c4);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= dVar2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1002864c8);
    (*pcVar1)();
  }
  SVar4 = Swift::CustomStringConvertible::get_description();
  SVar9.bridgeObject = param_9;
  SVar9.str = param_8;
  Swift::String::append(SVar4,SVar9);
  _swift_bridgeObjectRelease(SVar4.bridgeObject);
  SVar5.bridgeObject = (void *)0xe100000000000000;
  SVar5.str = (char *)0x78;
  SVar10.bridgeObject = param_9;
  SVar10.str = param_8;
  Swift::String::append(SVar5,SVar10);
  dVar2 = extraout_d0;
  _CGRectGetHeight(extraout_d0,param_3,param_4,param_5);
  if (0x7fefffffffffffff < (ulong)ABS(dVar2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1002864cc);
    (*pcVar1)();
  }
  if (dVar2 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1002864d0);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= dVar2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1002864d4);
    (*pcVar1)();
  }
  SVar4 = Swift::CustomStringConvertible::get_description();
  SVar11.bridgeObject = param_9;
  SVar11.str = param_8;
  Swift::String::append(SVar4,SVar11);
  _swift_bridgeObjectRelease(SVar4.bridgeObject);
  SVar6.bridgeObject = (void *)0xe100000000000000;
  SVar6.str = (char *)0x40;
  SVar12.bridgeObject = param_9;
  SVar12.str = param_8;
  Swift::String::append(SVar6,SVar12);
  objc_stub::backingScaleFactor(self);
  if (0x7fefffffffffffff < (ulong)ABS(extraout_d0_00)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1002864d8);
    (*pcVar1)();
  }
  if (-9.223372036854778e+18 < extraout_d0_00) {
    if (extraout_d0_00 < 9.223372036854776e+18) {
      SVar4 = Swift::CustomStringConvertible::get_description();
      SVar13.bridgeObject = param_9;
      SVar13.str = param_8;
      Swift::String::append(SVar4,SVar13);
      _swift_bridgeObjectRelease(SVar4.bridgeObject);
      SVar7.bridgeObject = (void *)0xe100000000000000;
      SVar7.str = (char *)0x78;
      SVar14.bridgeObject = param_9;
      SVar14.str = param_8;
      Swift::String::append(SVar7,SVar14);
      local_70 = SVar3.str;
      pvStack_68 = SVar3.bridgeObject;
      *param_1 = local_70;
      param_1[1] = pvStack_68;
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1002864e0);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1002864dc);
  (*pcVar1)();
}

