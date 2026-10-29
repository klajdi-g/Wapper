// rea decompile_all
// name: FUN_1003d020c
// address: 0x1003d020c
// body: available
// range: 0x1003d020c-0x1003d0363 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1003d020c(void)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  URL UVar4;
  undefined *puVar5;
  undefined *puVar6;
  char *pcVar7;
  void *pvVar8;
  undefined *puVar9;
  String *unaff_x20;
  String SVar10;
  undefined8 local_48;
  
  lVar3 = 0;
  FUN_1003e4bc8();
  puVar9 = *(undefined **)((long)&unaff_x20->str + (long)*(int *)(lVar3 + 0x30));
  if (puVar9 == (undefined *)0x0) {
    FUN_100279594(0);
    FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
    SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1003d0364);
    (*pcVar2)();
  }
  FUN_10040211c();
  UVar4.unknown = puVar9;
  _swift_retain();
  SVar10 = Foundation::URL::get_lastPathComponent(UVar4);
  pvVar8 = SVar10.bridgeObject;
  uVar1 = (ulong)SVar10.str & 0xffffffffffff;
  if (((ulong)pvVar8 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)pvVar8 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    _swift_bridgeObjectRelease(pvVar8);
    SVar10 = *unaff_x20;
    _swift_bridgeObjectRetain(unaff_x20->bridgeObject);
  }
  pcVar7 = SVar10.str;
  puVar5 = &DAT_1004366b8;
  _swift_getKeyPath(&DAT_1004366b8);
  puVar6 = &DAT_1004366e0;
  _swift_getKeyPath(&DAT_1004366e0);
  Combine::Published::_get_subscript(&local_48,puVar9,puVar5,puVar6);
  _swift_release(puVar5);
  _swift_release(puVar6);
  FUN_1002165a4(pcVar7,SVar10.bridgeObject,local_48);
  _swift_release(puVar9);
  _swift_bridgeObjectRelease(SVar10.bridgeObject);
  _swift_bridgeObjectRelease(local_48);
  return (uint)pcVar7 & 1;
}

