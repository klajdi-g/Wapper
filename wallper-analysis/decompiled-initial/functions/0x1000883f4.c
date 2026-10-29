// rea decompile_all
// name: FUN_1000883f4
// address: 0x1000883f4
// body: available
// range: 0x1000883f4-0x1000884d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000883f4(void)

{
  undefined8 uVar1;
  int iVar2;
  bool bVar3;
  Task TVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long unaff_x22;
  long lVar9;
  
  TVar4.unknown = *(undefined **)(unaff_x22 + 0x38);
  _swift_release();
  lVar7 = *(long *)(unaff_x22 + 0x10);
  bVar3 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar4);
  if ((!bVar3) && (lVar7 != 0)) {
    lVar8 = *(long *)(unaff_x22 + 0x50);
    lVar9 = *(long *)(unaff_x22 + 0x28);
    bVar3 = *(char *)(unaff_x22 + 0x68) == '\0';
    uVar6 = 0xec00000065677261;
    if (bVar3) {
      uVar6 = 0xe600000000000000;
    }
    uVar1 = 0x6c2d64726f636572;
    if (bVar3) {
      uVar1 = 0x64726f636572;
    }
    FUN_1000913ac(lVar7,uVar1,uVar6);
    _swift_bridgeObjectRelease(uVar6);
    iVar2 = *(int *)(lVar8 + 0x24);
    *(long *)(unaff_x22 + 0x18) = lVar7;
    puVar5 = &DAT_10054eed8;
    FUN_100002f94(&DAT_10054eed8,&DAT_1004249f0);
    SwiftUI::State::set_wrappedValue((State *)(lVar9 + iVar2),unaff_x22 + 0x18,puVar5);
  }
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x0001000884d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

