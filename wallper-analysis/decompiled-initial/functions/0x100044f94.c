// rea decompile_all
// name: FUN_100044f94
// address: 0x100044f94
// body: available
// range: 0x100044f94-0x100045037 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100044f94(undefined8 param_1,undefined1 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined8 local_48;
  State local_40;
  undefined8 uStack_38;
  
  uVar3 = *param_2;
  uVar1 = *(undefined8 *)(param_3 + 0x68);
  uVar2 = *(undefined8 *)(param_3 + 0x70);
  if (DAT_100559bc8 != -1) {
    param_2 = (undefined1 *)0x0;
    _swift_once(&DAT_100559bc8,FUN_100299578);
  }
  uVar4 = (uint)param_2;
  FUN_10029a878();
  FUN_100046754(uVar1,uVar2,uVar3,uVar4 & 1);
  uStack_38 = *(undefined8 *)(param_3 + 0x50);
  local_40.unknown = *(undefined **)(param_3 + 0x48);
  puVar5 = &DAT_10054ac50;
  local_48 = param_1;
  FUN_100002f94(&DAT_10054ac50,&DAT_10041dd60);
  SwiftUI::State::set_wrappedValue(&local_40,&local_48,puVar5);
  return;
}

