// rea decompile_all
// name: FUN_1002f5720
// address: 0x1002f5720
// body: available
// range: 0x1002f5720-0x1002f57bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002f5720(void)

{
  int iVar1;
  bool bVar2;
  Task TVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x22;
  
  TVar3.unknown = *(undefined **)(unaff_x22 + 0x50);
  _swift_release();
  uVar6 = *(undefined8 *)(unaff_x22 + 0x10);
  bVar2 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar3);
  if (!bVar2) {
    lVar7 = *(long *)(unaff_x22 + 0x20);
    lVar4 = 0;
    FUN_1002fa254();
    iVar1 = *(int *)(lVar4 + 0x18);
    *(undefined8 *)(unaff_x22 + 0x18) = uVar6;
    puVar5 = &DAT_10054eed8;
    FUN_100002f94(&DAT_10054eed8,&DAT_1004249f0);
    SwiftUI::State::set_wrappedValue
              ((State *)(lVar7 + iVar1),(undefined8 *)(unaff_x22 + 0x18),puVar5);
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0x40);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x48));
  _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x0001002f57b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

