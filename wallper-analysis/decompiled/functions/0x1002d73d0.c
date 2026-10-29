// rea decompile_all
// name: FUN_1002d73d0
// address: 0x1002d73d0
// body: available
// range: 0x1002d73d0-0x1002d756f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


String FUN_1002d73d0(void)

{
  char *pcVar1;
  void *pvVar2;
  String SVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  State SVar7;
  long *unaff_x20;
  long lVar8;
  String SVar9;
  byte local_71;
  char *local_70;
  void *pvStack_68;
  String repeating;
  
  lVar8 = *unaff_x20;
  if (lVar8 != 0) {
    puVar5 = &DAT_10042eed8;
    _swift_getKeyPath(&DAT_10042eed8);
    puVar6 = &DAT_10042ef00;
    _swift_getKeyPath(&DAT_10042ef00);
    _swift_retain_n(lVar8,2);
    Combine::Published::_get_subscript(&local_70);
    _swift_release(lVar8);
    _swift_release(puVar5);
    _swift_release(puVar6);
    pcVar1 = (char *)0x412f4e;
    if (pvStack_68 != (void *)0x0) {
      pcVar1 = local_70;
    }
    pvVar2 = (void *)0xe300000000000000;
    if (pvStack_68 != (void *)0x0) {
      pvVar2 = pvStack_68;
    }
    SVar3.bridgeObject = pvVar2;
    SVar3.str = pcVar1;
    SVar9.bridgeObject = pvVar2;
    SVar9.str = pcVar1;
    puVar5 = &DAT_10042edb0;
    _swift_getKeyPath(&DAT_10042edb0);
    puVar6 = &DAT_10042edd8;
    _swift_getKeyPath(&DAT_10042edd8);
    Combine::Published::_get_subscript(&local_70,lVar8,puVar5,puVar6);
    _swift_release(puVar5);
    _swift_release(puVar6);
    _swift_release(lVar8);
    if (((byte)local_70 & 1) != 0) {
      pvStack_68 = (void *)unaff_x20[5];
      local_70 = (char *)unaff_x20[4];
      SVar7.unknown = &DAT_10054ab50;
      FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
      SwiftUI::State::get_wrappedValue(SVar7);
      SVar9 = SVar3;
      if ((local_71 & 1) == 0) {
        repeating.bridgeObject = (void *)0xa300000000000000;
        repeating.str = (char *)0xa280e2;
        SVar9 = Swift::String::init(repeating,0x10);
        _swift_bridgeObjectRelease(pvVar2);
      }
    }
    return SVar9;
  }
  FUN_10014e37c(0);
  FUN_1000036d0(&DAT_100553148,FUN_10014e37c,&TargetProtocolConformanceDescriptor_100427f04);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1002d7570);
  (*pcVar4)();
}

