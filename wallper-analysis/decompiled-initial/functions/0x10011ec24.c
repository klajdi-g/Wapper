// rea decompile_all
// name: FUN_10011ec24
// address: 0x10011ec24
// body: available
// range: 0x10011ec24-0x10011ed2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10011ec24(void)

{
  ulong uVar1;
  code *pcVar2;
  uint uVar3;
  long lVar4;
  URL UVar5;
  char *pcVar6;
  void *pvVar7;
  undefined *puVar8;
  String *unaff_x20;
  String SVar9;
  
  lVar4 = 0;
  FUN_10040211c();
  if ((*(byte *)((long)&unaff_x20->str + (long)*(int *)(lVar4 + 0x40)) & 1) == 0) {
    lVar4 = 0;
    FUN_10011c000();
    puVar8 = *(undefined **)((long)&unaff_x20->str + (long)*(int *)(lVar4 + 0x1c));
    if (puVar8 == (undefined *)0x0) {
      FUN_100279594(0);
      FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
      SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10011ed2c);
      (*pcVar2)();
    }
    UVar5.unknown = puVar8;
    _swift_retain();
    SVar9 = Foundation::URL::get_lastPathComponent(UVar5);
    pvVar7 = SVar9.bridgeObject;
    uVar1 = (ulong)SVar9.str & 0xffffffffffff;
    if (((ulong)pvVar7 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)pvVar7 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) {
      _swift_bridgeObjectRelease(pvVar7);
      SVar9 = *unaff_x20;
      _swift_bridgeObjectRetain(unaff_x20->bridgeObject);
    }
    pcVar6 = SVar9.str;
    FUN_10026eac4(pcVar6,SVar9.bridgeObject);
    _swift_release(puVar8);
    _swift_bridgeObjectRelease(SVar9.bridgeObject);
    uVar3 = (uint)pcVar6 & 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

