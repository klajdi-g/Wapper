// rea decompile_all
// name: FUN_1002d41b0
// address: 0x1002d41b0
// body: available
// range: 0x1002d41b0-0x1002d4253 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002d41b0(void)

{
  long lVar1;
  undefined1 uVar2;
  undefined *puVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar2 = *(undefined1 *)(unaff_x22 + 0x62);
  lVar1 = *(long *)(unaff_x22 + 0x30);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
  uVar4 = *(undefined8 *)(lVar1 + 0x98);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar1 + 0xa0);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar4;
  *(undefined1 *)(unaff_x22 + 0x60) = uVar2;
  puVar3 = &DAT_10055a960;
  FUN_100002f94(&DAT_10055a960,&DAT_10042ecb0);
  SwiftUI::State::set_wrappedValue
            ((State *)(unaff_x22 + 0x10),(undefined1 *)(unaff_x22 + 0x60),puVar3);
  uVar4 = *(undefined8 *)(lVar1 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(lVar1 + 0x80);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar4;
  *(undefined1 *)(unaff_x22 + 0x61) = 0;
  puVar3 = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::set_wrappedValue
            ((State *)(unaff_x22 + 0x20),(undefined1 *)(unaff_x22 + 0x61),puVar3);
                    /* WARNING: Could not recover jumptable at 0x0001002d4250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

