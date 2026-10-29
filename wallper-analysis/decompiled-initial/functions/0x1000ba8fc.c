// rea decompile_all
// name: FUN_1000ba8fc
// address: 0x1000ba8fc
// body: available
// range: 0x1000ba8fc-0x1000ba9db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000ba8fc(long param_1)

{
  State SVar1;
  undefined *puVar2;
  Animation AVar3;
  State local_50;
  undefined8 uStack_48;
  long local_40;
  long local_38;
  
  uStack_48 = *(undefined8 *)(param_1 + 0x18);
  local_50.unknown = *(undefined **)(param_1 + 0x10);
  SVar1.unknown = &DAT_10054ba40;
  FUN_100002f94(&DAT_10054ba40,&DAT_100423be0);
  SwiftUI::State::get_wrappedValue(SVar1);
  if (0 < local_38) {
    uStack_48 = *(undefined8 *)(param_1 + 0x28);
    local_50.unknown = *(undefined **)(param_1 + 0x20);
    local_38 = -0x4010000000000000;
    puVar2 = &DAT_100550940;
    FUN_100002f94(&DAT_100550940,&DAT_100422368);
    AVar3.unknown = (undefined *)&local_38;
    SwiftUI::State::set_wrappedValue(&local_50,AVar3.unknown,puVar2);
    AVar3 = SwiftUI::Animation::spring(0.5,0.8,0.0,AVar3);
    local_40 = param_1;
    SwiftUI::_withAnimation();
    _swift_release(AVar3.unknown);
  }
  return;
}

