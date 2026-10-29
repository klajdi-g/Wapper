// rea decompile_all
// name: FUN_1003c6df4
// address: 0x1003c6df4
// body: available
// range: 0x1003c6df4-0x1003c7073 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


String FUN_1003c6df4(void)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  URL UVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar6;
  code *pcVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  URL UVar10;
  String SVar11;
  long local_70;
  undefined *puStack_68;
  
  puStack_68 = (undefined *)Foundation::URL::typeMetadataAccessor();
  local_70 = *(long *)(puStack_68 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_70 + 0x40));
  UVar5.unknown = (undefined *)((long)&local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar8 = (long)UVar5.unknown - extraout_x12;
  puVar2 = &DAT_10054ac40;
  FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  UVar10.unknown = (undefined *)(lVar8 - extraout_x8_00);
  lVar3 = 0;
  FUN_10040211c();
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar6 + 0x40));
  lVar9 = (long)UVar10.unknown - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  FUN_1003e5970();
  FUN_1000087e4(unaff_x20 + *(int *)(lVar4 + 0x14),UVar10.unknown,&DAT_10054ac40,&DAT_10041ce70);
  puVar2 = UVar10.unknown;
  (**(code **)(lVar6 + 0x30))(UVar10.unknown,1,lVar3);
  if ((int)puVar2 == 1) {
    FUN_10002a29c(UVar10.unknown,&DAT_10054ac40,&DAT_10041ce70);
    SVar11 = (String)ZEXT816(0);
  }
  else {
    FUN_100007e64(UVar10.unknown,lVar9,FUN_10040211c);
    if (*(long *)(unaff_x20 + *(int *)(lVar4 + 0x28)) == 0) {
      FUN_100279594(0);
      FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
      SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1003c7074);
      (*pcVar7)();
    }
    SVar11 = Foundation::URL::get_lastPathComponent(UVar10);
    UVar10.unknown = SVar11.bridgeObject;
    uVar1 = (ulong)SVar11.str & 0xffffffffffff;
    if (((ulong)UVar10.unknown & 0x2000000000000000) != 0) {
      uVar1 = (ulong)UVar10.unknown >> 0x38 & 0xf;
    }
    if (uVar1 == 0) {
      _swift_bridgeObjectRelease(UVar10.unknown);
      UVar10.unknown = *(undefined **)(lVar9 + 8);
      _swift_bridgeObjectRetain(UVar10.unknown);
    }
    Foundation::URL::_init();
    _swift_bridgeObjectRelease();
    Foundation::URL::deletingPathExtension(UVar10);
    puVar2 = puStack_68;
    pcVar7 = *(code **)(local_70 + 8);
    (*pcVar7)(UVar5.unknown,puStack_68);
    SVar11 = Foundation::URL::get_lastPathComponent(UVar5);
    (*pcVar7)(lVar8,puVar2);
    FUN_100029548(lVar9,FUN_10040211c);
  }
  return SVar11;
}

