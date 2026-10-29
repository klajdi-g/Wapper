// rea decompile_all
// name: FUN_1003b08b0
// address: 0x1003b08b0
// body: available
// range: 0x1003b08b0-0x1003b096b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003b08b0(void)

{
  undefined8 *puVar1;
  Binding BVar2;
  class_t *pcVar3;
  class_t *pcVar4;
  undefined8 *unaff_x20;
  objc_super local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_60 = *unaff_x20;
  uStack_58 = unaff_x20[1];
  uStack_48 = unaff_x20[3];
  local_50 = unaff_x20[2];
  BVar2.unknown = &DAT_10055f700;
  FUN_100002f94(&DAT_10055f700,&DAT_100434ed8);
  SwiftUI::Binding::get_projectedValue(BVar2);
  pcVar3 = (class_t *)0x0;
  FUN_1003afccc();
  pcVar4 = pcVar3;
  _objc_allocWithZone();
  *(undefined8 *)
   ((long)&pcVar4->isa +
   _TtCV7WallperP33_4C1A01B9C218D1703E7256E92C2C26AB16WindowSizeReader6Reader::resizeObserver) = 0;
  puVar1 = (undefined8 *)
           ((long)&pcVar4->isa +
           _TtCV7WallperP33_4C1A01B9C218D1703E7256E92C2C26AB16WindowSizeReader6Reader::size);
  *puVar1 = local_80;
  puVar1[1] = uStack_78;
  puVar1[2] = local_70;
  puVar1[3] = uStack_68;
  local_90.receiver = (ID)pcVar4;
  local_90.super_class = pcVar3;
  _objc_msgSendSuper2(&local_90,"initWithFrame:",0,0,0,0);
  return;
}

