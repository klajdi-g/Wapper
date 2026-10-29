// rea decompile_all
// name: FUN_1003b096c
// address: 0x1003b096c
// body: available
// range: 0x1003b096c-0x1003b09f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003b096c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Binding BVar4;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  BVar4.unknown = &DAT_10055f700;
  FUN_100002f94(&DAT_10055f700,&DAT_100434ed8);
  SwiftUI::Binding::get_projectedValue(BVar4);
  puVar1 = (undefined8 *)
           (param_1 +
           _TtCV7WallperP33_4C1A01B9C218D1703E7256E92C2C26AB16WindowSizeReader6Reader::size);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = local_60;
  puVar1[1] = uStack_58;
  puVar1[3] = uStack_48;
  puVar1[2] = local_50;
  _swift_release(uVar3);
  _swift_release(uVar2);
  FUN_1003af4a4();
  return;
}

