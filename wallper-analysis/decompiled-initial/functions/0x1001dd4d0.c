// rea decompile_all
// name: FUN_1001dd4d0
// address: 0x1001dd4d0
// body: available
// range: 0x1001dd4d0-0x1001dd603 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001dd4d0(void)

{
  Published *pPVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  code *pcVar8;
  long unaff_x22;
  undefined8 uVar9;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x90));
  if (*(char *)(unaff_x22 + 200) == '\x01') {
    pPVar1 = *(Published **)(unaff_x22 + 0x68);
    lVar4 = *(long *)(unaff_x22 + 0x70);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x48);
    (**(code **)(unaff_x22 + 0xb0))(uVar5,*(undefined8 *)(unaff_x22 + 0x88),pPVar1);
    (**(code **)(lVar4 + 0x38))(uVar5,0,1,pPVar1);
    puVar6 = &DAT_10042ae68;
    _swift_getKeyPath(&DAT_10042ae68);
    puVar7 = &DAT_10042ae90;
    _swift_getKeyPath(&DAT_10042ae90);
    _swift_bridgeObjectRetain(uVar9);
    pcVar8 = (code *)(unaff_x22 + 0x10);
    Combine::Published::_modify_subscript(pPVar1,pcVar8,uVar2,puVar6,puVar7);
    FUN_100122fac(uVar5,uVar3,uVar9);
    (*pcVar8)(unaff_x22 + 0x10,0);
    _swift_release(puVar7);
    _swift_release(puVar6);
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x58);
  (**(code **)(unaff_x22 + 0xa8))(uVar5,*(undefined8 *)(unaff_x22 + 0x68));
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x0001001dd600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

