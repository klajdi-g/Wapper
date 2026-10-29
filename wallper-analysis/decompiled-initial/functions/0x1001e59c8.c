// rea decompile_all
// name: FUN_1001e59c8
// address: 0x1001e59c8
// body: available
// range: 0x1001e59c8-0x1001e5a67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001e59c8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  
  pcVar5 = *(code **)(unaff_x22 + 0x350);
  uVar2 = *(undefined8 *)(unaff_x22 + 800);
  lVar6 = *(long *)(unaff_x22 + 0x318);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x310);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x2f0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x2b8);
  FUN_10002a29c(uVar3,&DAT_100553d90,&DAT_10041bf10);
  (**(code **)(lVar6 + 0x20))(uVar4,uVar2,uVar1);
  (*pcVar5)(uVar4,0,1,uVar1);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001001e5a64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

