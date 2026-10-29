// rea decompile_all
// name: FUN_100365d84
// address: 0x100365d84
// body: available
// range: 0x100365d84-0x100365e6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100365d84(char *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined1 param_5)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  Published *pPVar5;
  undefined1 local_31;
  
  if (*param_1 == '\x01') {
    lVar2 = 0;
    FUN_100386f18();
    pPVar5 = *(Published **)(param_4 + *(int *)(lVar2 + 0x1c));
    if (pPVar5 == (Published *)0x0) {
      FUN_100226ac0(0);
      FUN_1000036d0(&DAT_10054aa48,FUN_100226ac0,&TargetProtocolConformanceDescriptor_10042b420);
      SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100365e6c);
      (*pcVar1)();
    }
    puVar3 = &DAT_100433b10;
    _swift_getKeyPath(&DAT_100433b10);
    puVar4 = &DAT_100433b38;
    _swift_getKeyPath(&DAT_100433b38);
    local_31 = param_5;
    _swift_retain_n(pPVar5,2);
    Combine::Published::_set_subscript(pPVar5,&local_31,pPVar5,puVar3,puVar4);
    FUN_100217830();
    _swift_release(pPVar5);
  }
  return;
}

