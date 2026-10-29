// rea decompile_all
// name: FUN_1000d4340
// address: 0x1000d4340
// body: available
// range: 0x1000d4340-0x1000d4413 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000d4340(long param_1)

{
  State SVar1;
  double local_98;
  State local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  double local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  
  uStack_58 = *(undefined8 *)(param_1 + 0xd0);
  local_60 = *(undefined8 *)(param_1 + 200);
  uStack_78 = *(undefined8 *)(param_1 + 0xd0);
  local_80 = *(undefined8 *)(param_1 + 200);
  local_48 = uStack_58;
  FUN_1000087e4(&local_48,&local_90,&DAT_100551468,&DAT_100423130);
  SVar1.unknown = &DAT_100550940;
  FUN_100002f94(&DAT_100550940,&DAT_100422368);
  SwiftUI::State::get_wrappedValue(SVar1);
  local_98 = local_68 + 1.0;
  uStack_88 = *(undefined8 *)(param_1 + 0xd0);
  local_90.unknown = *(undefined **)(param_1 + 200);
  SwiftUI::State::set_wrappedValue(&local_90,&local_98,SVar1.unknown);
  FUN_10002a29c(&local_60,&DAT_100550940,&DAT_100422368);
  return;
}

