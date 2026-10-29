// rea decompile_all
// name: FUN_1000d3d10
// address: 0x1000d3d10
// body: available
// range: 0x1000d3d10-0x1000d3e0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000d3d10(undefined8 param_1,undefined8 param_2,long param_3)

{
  State SVar1;
  undefined8 uVar2;
  undefined8 local_70;
  long local_68;
  State local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(param_3 + 0xa0);
  uStack_38 = *(undefined8 *)(param_3 + 0x98);
  local_40 = *(undefined8 *)(param_3 + 0x90);
  uStack_58 = *(undefined8 *)(param_3 + 0x98);
  local_60.unknown = *(undefined **)(param_3 + 0x90);
  local_50 = uVar2;
  uStack_48 = uVar2;
  FUN_1000087e4(&local_40,&local_70,&DAT_100549db0,&DAT_100419ed0);
  FUN_1000087e4(&uStack_48,&local_70,&DAT_10054ac48,&DAT_10041bf60);
  SVar1.unknown = &DAT_10054ab90;
  FUN_100002f94(&DAT_10054ab90,&DAT_10041bdb0);
  SwiftUI::State::get_wrappedValue(SVar1);
  if (local_68 != 0) {
    _swift_bridgeObjectRelease();
    uStack_58 = *(undefined8 *)(param_3 + 0x98);
    local_60.unknown = *(undefined **)(param_3 + 0x90);
    local_70 = 0;
    local_68 = 0;
    local_50 = uVar2;
    SwiftUI::State::set_wrappedValue(&local_60,&local_70,SVar1.unknown);
  }
  FUN_10002a29c(&local_40,&DAT_100549db0,&DAT_100419ed0);
  FUN_10002a29c(&uStack_48,&DAT_10054ac48,&DAT_10041bf60);
  return;
}

