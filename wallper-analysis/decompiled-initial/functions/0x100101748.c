// rea decompile_all
// name: FUN_100101748
// address: 0x100101748
// body: available
// range: 0x100101748-0x10010181f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100101748(undefined8 *param_1)

{
  undefined *puVar1;
  Alignment AVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  uStack_68 = unaff_x20[1];
  local_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_48 = unaff_x20[5];
  local_50 = unaff_x20[4];
  local_40 = unaff_x20[6];
  puVar1 = &DAT_10052bb38;
  _swift_allocObject(&DAT_10052bb38,0x48,7);
  uVar3 = *unaff_x20;
  uVar5 = unaff_x20[3];
  uVar4 = unaff_x20[2];
  *(undefined8 *)(puVar1 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  *(undefined8 *)(puVar1 + 0x28) = uVar5;
  *(undefined8 *)(puVar1 + 0x20) = uVar4;
  uVar3 = unaff_x20[4];
  *(undefined8 *)(puVar1 + 0x38) = unaff_x20[5];
  *(undefined8 *)(puVar1 + 0x30) = uVar3;
  *(undefined8 *)(puVar1 + 0x40) = unaff_x20[6];
  AVar2.unknown = (undefined *)&local_70;
  FUN_100102a50(AVar2.unknown,&local_a8);
  SwiftUI::Alignment::get_center(AVar2);
  SwiftUI::_FrameLayout::_init((Alignment)0x0);
  *param_1 = FUN_100102a48;
  param_1[1] = puVar1;
  param_1[2] = local_a8;
  *(undefined1 *)(param_1 + 3) = local_a0;
  param_1[4] = local_98;
  *(undefined1 *)(param_1 + 5) = local_90;
  param_1[7] = uStack_80;
  param_1[6] = local_88;
  return;
}

