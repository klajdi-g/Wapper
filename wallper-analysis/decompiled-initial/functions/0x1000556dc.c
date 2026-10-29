// rea decompile_all
// name: FUN_1000556dc
// address: 0x1000556dc
// body: available
// range: 0x1000556dc-0x1000557df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000556dc(long param_1,code *param_2,code *param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar4 = *(undefined8 *)(param_1 + 0xb8);
  puVar2 = &DAT_10041e400;
  _swift_getKeyPath(&DAT_10041e400);
  puVar3 = &DAT_10041e428;
  _swift_getKeyPath(&DAT_10041e428);
  Combine::Published::_get_subscript(&local_70,uVar4,puVar2,puVar3);
  _swift_release(puVar2);
  _swift_release(puVar3);
  if (local_68 == 0) {
    lVar5 = *(long *)(param_1 + 0x70);
    if (lVar5 == 0) {
      FUN_100226ac0(0);
      FUN_1000036d0(&DAT_10054aa48,FUN_100226ac0,&TargetProtocolConformanceDescriptor_10042b420);
      SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000557e0);
      (*pcVar1)();
    }
    _swift_retain(lVar5);
    (*param_3)();
    _swift_release(lVar5);
  }
  else {
    FUN_10002a3bc(local_70,local_68,local_60,uStack_58,local_50,uStack_48);
    (*param_2)();
  }
  return;
}

