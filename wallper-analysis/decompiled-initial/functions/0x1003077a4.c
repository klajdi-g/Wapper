// rea decompile_all
// name: FUN_1003077a4
// address: 0x1003077a4
// body: available
// range: 0x1003077a4-0x100307a2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003077a4(ulong param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  Binding BVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  Binding local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined *local_68;
  
  if ((param_1 & 1) == 0) {
    puVar2 = *(undefined **)(param_2 + 0x10);
    uVar4 = *(undefined8 *)(param_2 + 0x20);
    uStack_90 = *(undefined8 *)(param_2 + 0x20);
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    local_a0 = puVar2;
    local_98 = uVar5;
    local_70 = uVar4;
    local_68 = puVar2;
    _swift_bridgeObjectRetain(param_4);
    FUN_10030b5e0(&local_68,&local_b8);
    _swift_retain(uVar5);
    FUN_1000087e4(&local_70,&local_b8,&DAT_100553ba8,&DAT_100426bc0);
    BVar1.unknown = &DAT_10055b918;
    FUN_100002f94(&DAT_10055b918,&DAT_100430470);
    SwiftUI::Binding::get_wrappedValue(BVar1);
    FUN_1001ca054(&local_80,param_3,param_4);
    local_b8.unknown = puVar2;
    local_b0 = uVar5;
    local_a8 = (undefined *)uVar4;
    SwiftUI::Binding::set_wrappedValue(&local_b8,auStack_88,BVar1.unknown);
    _swift_bridgeObjectRelease(local_78);
    FUN_10030b61c(&local_68);
    _swift_release(uVar5);
    FUN_10002a29c(&local_70,&DAT_100553ba8,&DAT_100426bc0);
    if (DAT_1005570b0 != -1) {
      _swift_once(&DAT_1005570b0,FUN_1001edbe8);
    }
    FUN_1001edc1c(param_5);
  }
  else {
    puVar2 = *(undefined **)(param_2 + 0x10);
    puVar3 = *(undefined **)(param_2 + 0x20);
    uStack_90 = *(undefined8 *)(param_2 + 0x20);
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    local_a0 = puVar2;
    local_98 = uVar4;
    local_80 = puVar2;
    local_68 = puVar3;
    FUN_10030b5e0(&local_80,&local_b8);
    _swift_retain(uVar4);
    FUN_1000087e4(&local_68,&local_b8,&DAT_100553ba8,&DAT_100426bc0);
    BVar1.unknown = &DAT_10055b918;
    FUN_100002f94(&DAT_10055b918,&DAT_100430470);
    SwiftUI::Binding::get_wrappedValue(BVar1);
    FUN_100227384(param_3,param_4);
    local_b8.unknown = puVar2;
    local_b0 = uVar4;
    local_a8 = puVar3;
    SwiftUI::Binding::set_wrappedValue(&local_b8,&local_70,BVar1.unknown);
    _swift_bridgeObjectRelease(param_4);
    FUN_10030b61c(&local_80);
    _swift_release(uVar4);
    FUN_10002a29c(&local_68,&DAT_100553ba8,&DAT_100426bc0);
    if (DAT_1005570b0 != -1) {
      _swift_once(&DAT_1005570b0,FUN_1001edbe8);
    }
    FUN_1001ee100(param_5);
  }
  return;
}

