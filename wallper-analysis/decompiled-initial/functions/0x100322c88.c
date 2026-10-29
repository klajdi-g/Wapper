// rea decompile_all
// name: FUN_100322c88
// address: 0x100322c88
// body: available
// range: 0x100322c88-0x100322ee7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100322c88(long *param_1,long *param_2)

{
  code *pcVar1;
  State SVar2;
  StateObject SVar3;
  StateObject SVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long local_98;
  State local_90;
  long lStack_88;
  long lStack_80;
  long local_78;
  long local_68;
  
  lVar8 = *param_1;
  lVar9 = *(long *)(lVar8 + 0x10);
  local_78 = param_2[0x1a];
  lStack_80 = param_2[0x19];
  lStack_88 = param_2[0x1a];
  local_90.unknown = (undefined *)param_2[0x19];
  local_68 = local_78;
  FUN_1000087e4(&local_68,&local_98,&DAT_10054d690,&DAT_10041e1d0);
  SVar2.unknown = &DAT_10054ba40;
  FUN_100002f94(&DAT_10054ba40,&DAT_100423be0);
  SwiftUI::State::get_wrappedValue(SVar2);
  if (lVar9 == local_98) {
    FUN_10002a29c(&lStack_80,&DAT_10054ba40,&DAT_100423be0);
  }
  else {
    lStack_88 = param_2[0x1a];
    local_90.unknown = (undefined *)param_2[0x19];
    local_98 = lVar9;
    SwiftUI::State::set_wrappedValue(&local_90,&local_98,SVar2.unknown);
    FUN_10002a29c(&lStack_80,&DAT_10054ba40,&DAT_100423be0);
    SVar4.unknown = (undefined *)param_2[2];
    lVar9 = param_2[3];
    FUN_10002ea18(0);
    FUN_1000036d0(&DAT_10055c5e8,FUN_10002ea18,&TargetProtocolConformanceDescriptor_10041cd50);
    SVar3.unknown = SVar4.unknown;
    SwiftUI::StateObject::get_wrappedValue(SVar4);
    FUN_10002c2e0();
    _swift_release(SVar3.unknown);
    SwiftUI::StateObject::get_wrappedValue(SVar4);
    lVar5 = lVar8;
    FUN_1003213cc(lVar8);
    FUN_10002c4ec();
    _swift_release(SVar4.unknown);
    _swift_bridgeObjectRelease(lVar5);
    _swift_bridgeObjectRelease(lVar9);
    lVar9 = *param_2;
    if (lVar9 == 0) {
      FUN_100279594(0);
      FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
      SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100322ee8);
      (*pcVar1)();
    }
    puVar6 = &DAT_100431220;
    _swift_getKeyPath(&DAT_100431220);
    puVar7 = &DAT_100431248;
    _swift_getKeyPath(&DAT_100431248);
    _swift_retain(lVar9);
    Combine::Published::_get_subscript(&local_90);
    _swift_release(puVar6);
    _swift_release(puVar7);
    _swift_release(lVar9);
    FUN_1003222b4(lVar8,(ulong)local_90.unknown & 0xff);
  }
  return;
}

