// rea decompile_all
// name: FUN_100055304
// address: 0x100055304
// body: available
// range: 0x100055304-0x100055443 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_100055304(void)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  ulong uVar7;
  long local_60;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0xb8);
  puVar3 = &DAT_10041e400;
  _swift_getKeyPath(&DAT_10041e400);
  puVar4 = &DAT_10041e428;
  _swift_getKeyPath(&DAT_10041e428);
  Combine::Published::_get_subscript(&local_60,uVar5,puVar3,puVar4);
  _swift_release(puVar3);
  _swift_release(puVar4);
  if (local_58 == 0) {
    lVar6 = *(long *)(unaff_x20 + 0x70);
    if (lVar6 == 0) {
      FUN_100226ac0(0);
      FUN_1000036d0(&DAT_10054aa48,FUN_100226ac0,&TargetProtocolConformanceDescriptor_10042b420);
      SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100055444);
      (*pcVar1)();
    }
    puVar3 = &DAT_10041e448;
    _swift_getKeyPath(&DAT_10041e448);
    puVar4 = &DAT_10041e470;
    _swift_getKeyPath(&DAT_10041e470);
    _swift_retain(lVar6);
    Combine::Published::_get_subscript(&local_60);
    _swift_release(puVar3);
    _swift_release(puVar4);
    uVar7 = *(ulong *)(local_60 + 0x10);
    _swift_bridgeObjectRelease();
    _swift_release(lVar6);
    bVar2 = 1 < uVar7;
  }
  else {
    FUN_10002a3bc(local_60,local_58,local_50,uStack_48,local_40,uStack_38);
    bVar2 = true;
  }
  return bVar2;
}

