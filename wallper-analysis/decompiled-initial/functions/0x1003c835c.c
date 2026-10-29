// rea decompile_all
// name: FUN_1003c835c
// address: 0x1003c835c
// body: available
// range: 0x1003c835c-0x1003c84fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003c835c(long param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  Binding BVar3;
  undefined *puVar4;
  byte local_89;
  Binding local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  byte local_71;
  Binding local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined *local_58;
  undefined *local_48;
  
  puVar4 = *(undefined **)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined1 *)(param_1 + 0x28);
  local_70.unknown = puVar4;
  uStack_68 = uVar1;
  local_60 = uVar2;
  local_48 = puVar4;
  FUN_10030b5e0(&local_48,&local_88);
  _swift_retain(uVar1);
  BVar3.unknown = &DAT_100560cb0;
  FUN_100002f94(&DAT_100560cb0,&DAT_100436920);
  SwiftUI::Binding::get_wrappedValue(BVar3);
  if ((char)local_88.unknown == *(char *)(param_1 + 0x10)) {
    FUN_10030b61c(&local_48);
    _swift_release(uVar1);
    puVar4 = *(undefined **)(param_1 + 0x30);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    uVar2 = *(undefined1 *)(param_1 + 0x40);
    local_70.unknown = puVar4;
    uStack_68 = uVar1;
    local_60 = uVar2;
    local_58 = puVar4;
    FUN_10030b5e0(&local_58,&local_88);
    _swift_retain(uVar1);
    BVar3.unknown = &DAT_10054e328;
    FUN_100002f94(&DAT_10054e328,&DAT_10041fa50);
    SwiftUI::Binding::get_wrappedValue(BVar3);
    local_89 = (local_71 ^ 0xff) & 1;
    local_88.unknown = puVar4;
    uStack_80 = uVar1;
    local_78 = uVar2;
    SwiftUI::Binding::set_wrappedValue(&local_88,&local_89,BVar3.unknown);
    FUN_10030b61c(&local_58);
    _swift_release(uVar1);
  }
  else {
    local_70.unknown = puVar4;
    uStack_68 = uVar1;
    local_60 = uVar2;
    local_88.unknown._0_1_ = *(char *)(param_1 + 0x10);
    SwiftUI::Binding::set_wrappedValue(&local_70,&local_88,BVar3.unknown);
    FUN_10030b61c(&local_48);
    _swift_release(uVar1);
    uStack_68 = *(undefined8 *)(param_1 + 0x38);
    local_70.unknown = *(undefined **)(param_1 + 0x30);
    local_60 = *(undefined1 *)(param_1 + 0x40);
    local_88.unknown._0_1_ = 1;
    puVar4 = &DAT_10054e328;
    FUN_100002f94(&DAT_10054e328,&DAT_10041fa50);
    SwiftUI::Binding::set_wrappedValue(&local_70,&local_88,puVar4);
  }
  return;
}

