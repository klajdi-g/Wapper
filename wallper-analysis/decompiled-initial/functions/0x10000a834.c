// rea decompile_all
// name: FUN_10000a834
// address: 0x10000a834
// body: available
// range: 0x10000a834-0x10000a9d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


String FUN_10000a834(void)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  URL UVar6;
  void *pvVar7;
  long extraout_x8;
  long extraout_x8_00;
  String *pSVar8;
  long unaff_x20;
  long lVar9;
  String SVar10;
  
  puVar3 = &DAT_10054ac40;
  FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  UVar6.unknown = &stack0xffffffffffffffc0 + -extraout_x8;
  lVar4 = 0;
  FUN_10040211c();
  lVar9 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar9 + 0x40));
  pSVar8 = (String *)(UVar6.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  FUN_10000c224(UVar6.unknown);
  puVar5 = UVar6.unknown;
  (**(code **)(lVar9 + 0x30))(UVar6.unknown,1,lVar4);
  if ((int)puVar5 == 1) {
    FUN_10002a29c(UVar6.unknown,&DAT_10054ac40,&DAT_10041ce70);
    SVar10 = (String)ZEXT816(0);
  }
  else {
    FUN_100007e64(UVar6.unknown,pSVar8,FUN_10040211c);
    if (*(long *)(unaff_x20 + 0x18) == 0) {
      FUN_100279594(0);
      FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
      SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10000a9d4);
      (*pcVar2)();
    }
    SVar10 = Foundation::URL::get_lastPathComponent(UVar6);
    pvVar7 = SVar10.bridgeObject;
    uVar1 = (ulong)SVar10.str & 0xffffffffffff;
    if (((ulong)pvVar7 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)pvVar7 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) {
      _swift_bridgeObjectRelease(pvVar7);
      SVar10 = *pSVar8;
      _swift_bridgeObjectRetain();
    }
    FUN_100029548(pSVar8,FUN_10040211c);
  }
  return SVar10;
}

