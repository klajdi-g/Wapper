// rea decompile_all
// name: FUN_100365c8c
// address: 0x100365c8c
// body: available
// range: 0x100365c8c-0x100365d83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100365c8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  char param_5)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  char local_41;
  
  lVar2 = 0;
  FUN_100386f18();
  lVar2 = *(long *)(param_4 + *(int *)(lVar2 + 0x1c));
  if (lVar2 != 0) {
    puVar3 = &DAT_100433b10;
    _swift_getKeyPath(&DAT_100433b10);
    puVar4 = &DAT_100433b38;
    _swift_getKeyPath(&DAT_100433b38);
    _swift_retain(lVar2);
    Combine::Published::_get_subscript(&local_41);
    _swift_release(puVar3);
    _swift_release(puVar4);
    _swift_release(lVar2);
    *(bool *)param_1 = local_41 == param_5;
    return;
  }
  FUN_100226ac0(0);
  FUN_1000036d0(&DAT_10054aa48,FUN_100226ac0,&TargetProtocolConformanceDescriptor_10042b420);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100365d84);
  (*pcVar1)();
}

