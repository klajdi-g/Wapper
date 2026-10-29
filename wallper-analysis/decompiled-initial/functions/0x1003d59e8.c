// rea decompile_all
// name: FUN_1003d59e8
// address: 0x1003d59e8
// body: available
// range: 0x1003d59e8-0x1003d5b5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003d59e8(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  Task TVar11;
  undefined8 uVar12;
  long lVar13;
  long unaff_x22;
  long *plVar14;
  void *pvVar15;
  String SVar16;
  String SVar17;
  
  TVar11.unknown = *(undefined **)(unaff_x22 + 0xe0);
  _swift_release();
  lVar13 = *(long *)(unaff_x22 + 0x48);
  bVar10 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar11);
  if (!bVar10) {
    plVar14 = (long *)(unaff_x22 + 0x50);
    *plVar14 = lVar13;
    pvVar15 = *(void **)(unaff_x22 + 0x110);
    SwiftUI::State::set_wrappedValue
              ((State *)(*(long *)(unaff_x22 + 0x68) + (long)*(int *)(unaff_x22 + 0x188)));
    if (lVar13 != 0) {
      FUN_1003cffb8();
      SVar16.bridgeObject = pvVar15;
      SVar16.str = (char *)plVar14;
      SVar17.bridgeObject = param_4;
      SVar17.str = param_3;
      Swift::String::append(SVar16,SVar17);
      _swift_bridgeObjectRelease(pvVar15);
      FUN_1000fec60(lVar13,0x2d776f727473696c,0xe800000000000000);
      _swift_bridgeObjectRelease(0xe800000000000000);
    }
  }
  (**(code **)(*(long *)(unaff_x22 + 0x80) + 8))
            (*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0x78));
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar6 = *(undefined8 *)(unaff_x22 + 200);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x70);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xd8));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar12);
                    /* WARNING: Could not recover jumptable at 0x0001003d5b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

