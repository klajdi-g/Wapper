// rea decompile_all
// name: FUN_1000ea51c
// address: 0x1000ea51c
// body: available
// range: 0x1000ea51c-0x1000ea627 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000ea51c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  byte bVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  State local_50;
  undefined8 uStack_48;
  byte local_31;
  
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != 0) {
    lVar3 = lVar5;
    _swift_retain();
    bVar2 = (byte)lVar3;
    FUN_1000e3868();
    FUN_10026ad9c();
    _swift_release(lVar5);
    _swift_bridgeObjectRelease(param_2);
    uStack_48 = *(undefined8 *)(param_1 + 0xb0);
    local_50.unknown = *(undefined **)(param_1 + 0xa8);
    local_31 = bVar2 & 1;
    puVar4 = &DAT_10054ab50;
    FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
    SwiftUI::State::set_wrappedValue(&local_50,&local_31,puVar4);
    uStack_48 = *(undefined8 *)(param_1 + 0xa0);
    local_50.unknown = *(undefined **)(param_1 + 0x98);
    local_31 = 0;
    SwiftUI::State::set_wrappedValue(&local_50,&local_31,puVar4);
    return;
  }
  FUN_100279594(0);
  FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000ea628);
  (*pcVar1)();
}

