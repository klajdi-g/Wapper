// rea decompile_all
// name: FUN_10004d360
// address: 0x10004d360
// body: available
// range: 0x10004d360-0x10004d4cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10004d360(long param_1)

{
  code *pcVar1;
  StateObject SVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 local_51;
  State local_50;
  undefined8 uStack_48;
  
  SVar2.unknown = *(undefined **)(param_1 + 0xd8);
  FUN_10016ed68(0);
  FUN_1000036d0(&DAT_10054aba0,FUN_10016ed68,&TargetProtocolConformanceDescriptor_1004295e8);
  SwiftUI::StateObject::get_wrappedValue(SVar2);
  FUN_10016c740();
  _swift_release(SVar2.unknown);
  FUN_1000498e8();
  lVar5 = *(long *)(param_1 + 0x80);
  if (lVar5 != 0) {
    puVar3 = &DAT_10041e0f8;
    _swift_getKeyPath(&DAT_10041e0f8);
    puVar4 = &DAT_10041e120;
    _swift_getKeyPath(&DAT_10041e120);
    _swift_retain(lVar5);
    Combine::Published::_get_subscript(&local_50);
    _swift_release(puVar3);
    _swift_release(puVar4);
    _swift_release(lVar5);
    if (((byte)local_50.unknown & 1) != 0) {
      uStack_48 = *(undefined8 *)(param_1 + 0x128);
      local_50.unknown = *(undefined **)(param_1 + 0x120);
      local_51 = 1;
      puVar3 = &DAT_10054ab50;
      FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
      SwiftUI::State::set_wrappedValue(&local_50,&local_51,puVar3);
    }
    return;
  }
  FUN_1001373cc(0);
  FUN_1000036d0(&DAT_100553de0,FUN_1001373cc,&TargetProtocolConformanceDescriptor_100426ef0);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10004d4cc);
  (*pcVar1)();
}

