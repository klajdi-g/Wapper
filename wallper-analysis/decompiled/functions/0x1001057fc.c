// rea decompile_all
// name: FUN_1001057fc
// address: 0x1001057fc
// body: available
// range: 0x1001057fc-0x1001058cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001057fc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,HorizontalAlignment param_6)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  HorizontalAlignment HVar4;
  undefined *puVar5;
  Set SVar6;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  
  SVar6.unknown = (undefined *)*unaff_x20;
  uVar2 = unaff_x20[1];
  uVar7 = unaff_x20[2];
  uVar3 = unaff_x20[3];
  HVar4 = SwiftUI::HorizontalAlignment::get_leading(param_6);
  *param_1 = HVar4.unknown;
  param_1[1] = 0x4034000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar5 = &DAT_100552ba0;
  FUN_100002f94(&DAT_100552ba0,&DAT_100425448);
  FUN_100104b44((long)param_1 + (long)*(int *)(puVar5 + 0x2c),SVar6.unknown,uVar2,uVar7,uVar3);
  SVar6 = SwiftUI::Edge::Set::get_top(SVar6);
  uVar7 = 0x4040000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar6.unknown);
  puVar5 = &DAT_100552ba8;
  FUN_100002f94(&DAT_100552ba8,&DAT_100425450);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(puVar5 + 0x24));
  *puVar1 = (char)SVar6.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar7;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  return;
}

