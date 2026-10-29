// rea decompile_all
// name: FUN_1002e9010
// address: 0x1002e9010
// body: available
// range: 0x1002e9010-0x1002e911f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002e9010(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  State SVar1;
  undefined8 uVar2;
  long local_a8;
  State local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_58;
  
  uVar2 = *param_1;
  if (DAT_100557bb0 != -1) {
    _swift_once(uVar2,&DAT_100557bb0,FUN_100233158);
  }
  FUN_1002386a0(uVar2);
  uStack_68 = *(undefined8 *)(param_4 + 0x88);
  local_70 = *(undefined8 *)(param_4 + 0x80);
  uStack_88 = *(undefined8 *)(param_4 + 0x88);
  local_90 = *(undefined8 *)(param_4 + 0x80);
  local_58 = uStack_68;
  FUN_1000087e4(&local_58,&local_a0,&DAT_10054d690,&DAT_10041e1d0);
  SVar1.unknown = &DAT_10054ba40;
  FUN_100002f94(&DAT_10054ba40,&DAT_100423be0);
  SwiftUI::State::get_wrappedValue(SVar1);
  local_a8 = local_78 + 1;
  uStack_98 = *(undefined8 *)(param_4 + 0x88);
  local_a0.unknown = *(undefined **)(param_4 + 0x80);
  SwiftUI::State::set_wrappedValue(&local_a0,&local_a8,SVar1.unknown);
  FUN_10002a29c(&local_70,&DAT_10054ba40,&DAT_100423be0);
  return;
}

