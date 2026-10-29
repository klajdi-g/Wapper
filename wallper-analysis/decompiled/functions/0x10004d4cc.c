// rea decompile_all
// name: FUN_10004d4cc
// address: 0x10004d4cc
// body: available
// range: 0x10004d4cc-0x10004d59b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10004d4cc(undefined8 param_1,long param_2)

{
  code *pcVar1;
  State SVar2;
  long local_88;
  State local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_38;
  
  uStack_48 = *(undefined8 *)(param_2 + 0x138);
  local_50 = *(undefined8 *)(param_2 + 0x130);
  uStack_68 = *(undefined8 *)(param_2 + 0x138);
  local_70 = *(undefined8 *)(param_2 + 0x130);
  local_38 = uStack_48;
  FUN_1000087e4(&local_38,&local_80,&DAT_10054d690,&DAT_10041e1d0);
  SVar2.unknown = &DAT_10054ba40;
  FUN_100002f94(&DAT_10054ba40,&DAT_100423be0);
  SwiftUI::State::get_wrappedValue(SVar2);
  local_88 = local_58 + 1;
  if (!SCARRY8(local_58,1)) {
    uStack_78 = *(undefined8 *)(param_2 + 0x138);
    local_80.unknown = *(undefined **)(param_2 + 0x130);
    SwiftUI::State::set_wrappedValue(&local_80,&local_88,SVar2.unknown);
    FUN_10002a29c(&local_50,&DAT_10054ba40,&DAT_100423be0);
    FUN_1000498e8();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10004d59c);
  (*pcVar1)();
}

