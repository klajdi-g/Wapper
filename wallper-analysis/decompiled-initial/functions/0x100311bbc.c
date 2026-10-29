// rea decompile_all
// name: FUN_100311bbc
// address: 0x100311bbc
// body: available
// range: 0x100311bbc-0x100311c5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100311bbc(void)

{
  bool bVar1;
  Task TVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  
  TVar2.unknown = *(undefined **)(unaff_x22 + 0x40);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x30);
  lVar4 = *(long *)(unaff_x22 + 0x38);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x48));
  (**(code **)(lVar4 + 8))(TVar2.unknown,uVar5);
  bVar1 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar2);
  if (!bVar1) {
    lVar4 = *(long *)(unaff_x22 + 0x28);
    uVar6 = *(undefined8 *)(lVar4 + 0xa0);
    uVar5 = *(undefined8 *)(lVar4 + 0x98);
    *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(lVar4 + 0x108);
    *(undefined8 *)(unaff_x22 + 0x18) = uVar6;
    *(undefined8 *)(unaff_x22 + 0x10) = uVar5;
    puVar3 = &DAT_10054ba40;
    FUN_100002f94(&DAT_10054ba40,&DAT_100423be0);
    SwiftUI::State::set_wrappedValue
              ((State *)(unaff_x22 + 0x10),(undefined8 *)(unaff_x22 + 0x20),puVar3);
    FUN_10030f54c(0);
  }
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x000100311c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

