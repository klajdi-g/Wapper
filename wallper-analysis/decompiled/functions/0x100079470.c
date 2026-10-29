// rea decompile_all
// name: FUN_100079470
// address: 0x100079470
// body: available
// range: 0x100079470-0x1000795c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100079470(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  Task TVar6;
  undefined *puVar7;
  long lVar8;
  long unaff_x22;
  undefined8 *puVar9;
  
  TVar6.unknown = *(undefined **)(unaff_x22 + 0x78);
  _swift_release();
  lVar8 = *(long *)(unaff_x22 + 0x40);
  bVar5 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar6);
  if (bVar5) {
    FUN_10002f6dc(*(undefined8 *)(unaff_x22 + 0x98),*(undefined8 *)(unaff_x22 + 0xa0));
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
    if (lVar8 == 0) {
      FUN_10002f6dc(uVar1,uVar3);
    }
    else {
      puVar9 = *(undefined8 **)(unaff_x22 + 0x68);
      FUN_1000913ac(lVar8,*puVar9,puVar9[1]);
      uVar2 = puVar9[5];
      uVar4 = puVar9[6];
      *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
      *(undefined8 *)(unaff_x22 + 0x38) = uVar4;
      *(undefined8 *)(unaff_x22 + 0x10) = uVar2;
      *(undefined8 *)(unaff_x22 + 0x18) = uVar4;
      *(long *)(unaff_x22 + 0x48) = lVar8;
      FUN_1000087e4(unaff_x22 + 0x30,unaff_x22 + 0x50,&DAT_10054bd30,&DAT_10041d460);
      FUN_1000087e4(unaff_x22 + 0x38,unaff_x22 + 0x58,&DAT_10054ef10,&DAT_1004203b8);
      puVar7 = &DAT_10054eed8;
      FUN_100002f94(&DAT_10054eed8,&DAT_1004249f0);
      SwiftUI::State::set_wrappedValue((State *)(unaff_x22 + 0x10),unaff_x22 + 0x48,puVar7);
      FUN_10002f6dc(uVar1,uVar3);
      FUN_10002a29c(unaff_x22 + 0x30,&DAT_10054bd30,&DAT_10041d460);
      FUN_10002a29c(unaff_x22 + 0x38,&DAT_10054ef10,&DAT_1004203b8);
    }
  }
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x0001000795c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

