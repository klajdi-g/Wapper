// rea decompile_all
// name: FUN_100184788
// address: 0x100184788
// body: available
// range: 0x100184788-0x100184827 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100184788(void)

{
  bool bVar1;
  Task TVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x28);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
  _swift_beginAccess(lVar5 + 0x10,unaff_x22 + 0x10,0,0);
  TVar2.unknown = (undefined *)(lVar5 + 0x10);
  _swift_weakLoadStrong();
  if (TVar2.unknown != (undefined *)0x0) {
    bVar1 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar2);
    if (bVar1) {
      _swift_release(TVar2.unknown);
    }
    else {
      puVar3 = &DAT_100429b98;
      _swift_getKeyPath(&DAT_100429b98);
      puVar4 = &DAT_100429bc0;
      _swift_getKeyPath(&DAT_100429bc0);
      *(undefined1 *)(unaff_x22 + 0x48) = 0;
      Combine::Published::_set_subscript
                ((Published *)TVar2.unknown,unaff_x22 + 0x48,TVar2.unknown,puVar3,puVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000100184824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

