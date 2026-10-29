// rea decompile_all
// name: FUN_100379848
// address: 0x100379848
// body: available
// range: 0x100379848-0x100379903 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100379848(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_50 [16];
  long local_40;
  undefined8 uStack_38;
  
  lVar2 = 0;
  FUN_10034c390();
  lVar3 = *(long *)(param_2 + *(int *)(lVar2 + 0x1c));
  if (lVar3 != 0) {
    local_40 = param_2 + *(int *)(lVar2 + 0x14);
    uStack_38 = param_1;
    _swift_retain(lVar3);
    FUN_1001b9fc0(param_2,FUN_100384b00,auStack_50);
    _swift_release(lVar3);
    return;
  }
  FUN_1001b7378(0);
  FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100379904);
  (*pcVar1)();
}

