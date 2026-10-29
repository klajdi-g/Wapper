// rea decompile_all
// name: FUN_1003d92cc
// address: 0x1003d92cc
// body: available
// range: 0x1003d92cc-0x1003d944b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


String FUN_1003d92cc(void)

{
  ulong uVar1;
  URL UVar2;
  long lVar3;
  URL UVar4;
  URL UVar5;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  long lVar6;
  code *pcVar7;
  long lVar8;
  String SVar9;
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar8 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar8 + 0x40));
  UVar5.unknown = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar6 = (long)UVar5.unknown - extraout_x12;
  lVar3 = 0;
  FUN_1003e437c();
  if (*(long *)(unaff_x20 + *(int *)(lVar3 + 0x18)) != 0) {
    UVar4.unknown = (undefined *)0x0;
    FUN_10040211c();
    SVar9 = Foundation::URL::get_lastPathComponent(UVar4);
    UVar4.unknown = SVar9.bridgeObject;
    uVar1 = (ulong)SVar9.str & 0xffffffffffff;
    if (((ulong)UVar4.unknown & 0x2000000000000000) != 0) {
      uVar1 = (ulong)UVar4.unknown >> 0x38 & 0xf;
    }
    if (uVar1 == 0) {
      _swift_bridgeObjectRelease(UVar4.unknown);
      UVar4.unknown = *(undefined **)(unaff_x20 + 8);
      _swift_bridgeObjectRetain(UVar4.unknown);
    }
    Foundation::URL::_init();
    _swift_bridgeObjectRelease();
    Foundation::URL::deletingPathExtension(UVar4);
    pcVar7 = *(code **)(lVar8 + 8);
    (*pcVar7)(UVar5.unknown,UVar2.unknown);
    SVar9 = Foundation::URL::get_lastPathComponent(UVar5);
    (*pcVar7)(lVar6,UVar2.unknown);
    return SVar9;
  }
  FUN_100279594(0);
  FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x1003d944c);
  (*pcVar7)();
}

