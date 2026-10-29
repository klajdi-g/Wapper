// rea decompile_all
// name: FUN_1002d7570
// address: 0x1002d7570
// body: available
// range: 0x1002d7570-0x1002d775f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1002d7570(void)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  undefined *puVar3;
  char *pcVar4;
  char *pcVar5;
  TargetProtocolConformanceDescriptor *pTVar6;
  void *in_x3;
  long *unaff_x20;
  long lVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  long local_70;
  long local_68;
  long local_58;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0xe000000000000000;
  lVar7 = unaff_x20[2];
  if (lVar7 == 0) {
    FUN_10013b98c(0);
    pcVar2 = FUN_10013b98c;
    puVar3 = &DAT_100553150;
    pTVar6 = &TargetProtocolConformanceDescriptor_1004274b8;
  }
  else {
    puVar3 = &DAT_10042ee90;
    _swift_getKeyPath(&DAT_10042ee90);
    pcVar4 = &DAT_10042eeb8;
    _swift_getKeyPath();
    _swift_retain(lVar7);
    pcVar5 = pcVar4;
    Combine::Published::_get_subscript(&local_70);
    _swift_release(puVar3);
    _swift_release(pcVar4);
    _swift_release(lVar7);
    lVar7 = *(long *)(local_70 + 0x10);
    _swift_bridgeObjectRelease();
    local_70 = lVar7;
    SVar8 = Swift::CustomStringConvertible::get_description();
    SVar9.bridgeObject = in_x3;
    SVar9.str = pcVar5;
    Swift::String::append(SVar8,SVar9);
    _swift_bridgeObjectRelease(SVar8.bridgeObject);
    SVar8.bridgeObject = (void *)0xe400000000000000;
    SVar8.str = (char *)0x20666f20;
    SVar10.bridgeObject = in_x3;
    SVar10.str = pcVar5;
    Swift::String::append(SVar8,SVar10);
    lVar7 = *unaff_x20;
    if (lVar7 != 0) {
      puVar3 = &DAT_10042eed8;
      _swift_getKeyPath(&DAT_10042eed8);
      pcVar4 = "x5\x14";
      _swift_getKeyPath();
      _swift_retain(lVar7);
      pcVar5 = pcVar4;
      Combine::Published::_get_subscript(&local_70);
      _swift_release(lVar7);
      _swift_release(puVar3);
      _swift_release(pcVar4);
      lVar7 = 3;
      if (local_68 != 0) {
        lVar7 = local_58;
      }
      _swift_bridgeObjectRelease();
      local_70 = lVar7;
      SVar8 = Swift::CustomStringConvertible::get_description();
      SVar11.bridgeObject = in_x3;
      SVar11.str = pcVar5;
      Swift::String::append(SVar8,SVar11);
      _swift_bridgeObjectRelease(SVar8.bridgeObject);
      auVar1._8_8_ = uStack_38;
      auVar1._0_8_ = local_40;
      return auVar1;
    }
    FUN_10014e37c(0);
    pcVar2 = FUN_10014e37c;
    puVar3 = &DAT_100553148;
    pTVar6 = &TargetProtocolConformanceDescriptor_100427f04;
  }
  FUN_1000036d0(puVar3,pcVar2,pTVar6);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1002d7760);
  (*pcVar2)();
}

