// rea decompile_all
// name: FUN_10000bd9c
// address: 0x10000bd9c
// body: available
// range: 0x10000bd9c-0x10000be8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000bd9c(long param_1,byte param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  AppStorage *unaff_x20;
  Published *pPVar4;
  byte local_39;
  undefined8 local_38;
  
  local_38 = *(undefined8 *)(&DAT_10041cc60 + (ulong)param_2 * 8);
  SwiftUI::AppStorage::set_wrappedValue
            (unaff_x20,&local_38,*(undefined8 *)(param_1 + 0xd8),
             PTR___type_metadata_for_Swift_Int_100523bd8);
  pPVar4 = *(Published **)(param_1 + 0x28);
  if (pPVar4 != (Published *)0x0) {
    puVar2 = &DAT_10041c828;
    _swift_getKeyPath(&DAT_10041c828);
    puVar3 = &DAT_10041c850;
    _swift_getKeyPath(&DAT_10041c850);
    local_39 = param_2;
    _swift_retain_n(pPVar4,2);
    Combine::Published::_set_subscript(pPVar4,&local_39,pPVar4,puVar2,puVar3);
    FUN_100217830();
    _swift_release(pPVar4);
    return;
  }
  FUN_100226ac0(0);
  FUN_1000036d0(&DAT_10054aa48,FUN_100226ac0,&TargetProtocolConformanceDescriptor_10042b420);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10000be90);
  (*pcVar1)();
}

