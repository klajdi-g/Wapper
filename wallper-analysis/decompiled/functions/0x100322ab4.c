// rea decompile_all
// name: FUN_100322ab4
// address: 0x100322ab4
// body: available
// range: 0x100322ab4-0x100322c87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100322ab4(char *param_1,long *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  StateObject SVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 local_58;
  
  if (*param_1 == '\x01') {
    SVar3.unknown = (undefined *)param_2[2];
    FUN_10002ea18(0);
    FUN_1000036d0(&DAT_10055c5e8,FUN_10002ea18,&TargetProtocolConformanceDescriptor_10041cd50);
    SwiftUI::StateObject::get_wrappedValue(SVar3);
    lVar9 = *param_2;
    if (lVar9 == 0) {
      FUN_100279594(0);
      FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
      SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100322c88);
      (*pcVar2)();
    }
    puVar7 = &DAT_100431308;
    puVar4 = puVar7;
    _swift_getKeyPath(&DAT_100431308);
    puVar8 = &DAT_100431330;
    puVar5 = puVar8;
    _swift_getKeyPath(&DAT_100431330);
    _swift_retain(lVar9);
    Combine::Published::_get_subscript(&local_58);
    _swift_release(puVar4);
    _swift_release(puVar5);
    uVar1 = local_58;
    uVar6 = local_58;
    FUN_1003213cc(local_58);
    _swift_bridgeObjectRelease(uVar1);
    FUN_10002c4ec(uVar6,0,0);
    _swift_release(SVar3.unknown);
    _swift_bridgeObjectRelease(uVar6);
    _swift_getKeyPath(&DAT_100431308);
    _swift_getKeyPath(&DAT_100431330);
    Combine::Published::_get_subscript(&local_58,lVar9,puVar7,puVar8);
    _swift_release(puVar7);
    _swift_release(puVar8);
    _swift_release(lVar9);
    FUN_1003222b4(local_58,1);
    _swift_bridgeObjectRelease(local_58);
    FUN_100322758();
  }
  return;
}

