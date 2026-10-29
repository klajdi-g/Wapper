// rea decompile_all
// name: FUN_100030ee4
// address: 0x100030ee4
// body: available
// range: 0x100030ee4-0x100030fa7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100030ee4(undefined8 *param_1,Alignment param_2,Alignment param_3,GeometryProxy param_4)

{
  Alignment AVar1;
  undefined *puVar2;
  CGSize CVar3;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar2 = param_4.unknown;
  AVar1 = SwiftUI::Alignment::get_center(param_3);
  *param_1 = AVar1.unknown;
  param_1[1] = puVar2;
  puVar2 = &DAT_10054bd00;
  FUN_100002f94(&DAT_10054bd00,&DAT_10041d430);
  FUN_100030fa8((long)param_1 + (long)*(int *)(puVar2 + 0x2c),param_4.unknown,param_3.unknown);
  CVar3 = SwiftUI::GeometryProxy::get_size(param_4);
  CVar3 = SwiftUI::GeometryProxy::get_size(CVar3.unknown);
  SwiftUI::Alignment::get_center((Alignment)CVar3.unknown);
  SwiftUI::_FrameLayout::_init(param_2);
  puVar2 = &DAT_10054bd08;
  FUN_100002f94(&DAT_10054bd08,&DAT_10041d438);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar2 + 0x24));
  param_1[1] = uStack_58;
  *param_1 = local_60;
  param_1[3] = uStack_48;
  param_1[2] = uStack_50;
  param_1[5] = uStack_38;
  param_1[4] = local_40;
  return;
}

