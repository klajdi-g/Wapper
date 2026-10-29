// rea decompile_all
// name: FUN_10010ef58
// address: 0x10010ef58
// body: available
// range: 0x10010ef58-0x10010efd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10010ef58(class_t *param_1)

{
  undefined8 *puVar1;
  class_t *pcVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  objc_super local_30;
  
  FUN_10010ee64();
  pcVar2 = param_1;
  _objc_allocWithZone();
  *(undefined8 *)((long)&pcVar2->isa + _TtCV7Wallper22WindowVisibilityReader6Reader::observer) = 0;
  uVar3 = unaff_x20[1];
  uVar4 = *unaff_x20;
  puVar1 = (undefined8 *)
           ((long)&pcVar2->isa + _TtCV7Wallper22WindowVisibilityReader6Reader::onChange);
  puVar1[1] = unaff_x20[1];
  *puVar1 = uVar4;
  local_30.receiver = (ID)pcVar2;
  local_30.super_class = param_1;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(&local_30,"initWithFrame:",0,0,0,0);
  return;
}

