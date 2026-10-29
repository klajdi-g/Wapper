// rea decompile_all
// name: FUN_100321bd4
// address: 0x100321bd4
// body: available
// range: 0x100321bd4-0x100321cdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100321bd4(long param_1,Alignment param_2,GeometryProxy param_3)

{
  undefined8 *puVar1;
  int iVar2;
  CGSize CVar3;
  undefined *puVar4;
  SafeAreaRegions SVar5;
  Set SVar6;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  FUN_100321cdc();
  CVar3 = SwiftUI::GeometryProxy::get_size(param_3);
  CVar3 = SwiftUI::GeometryProxy::get_size(CVar3.unknown);
  SwiftUI::Alignment::get_center((Alignment)CVar3.unknown);
  SwiftUI::_FrameLayout::_init(param_2);
  puVar4 = &DAT_10055c5f0;
  FUN_100002f94(&DAT_10055c5f0,&DAT_100431358);
  puVar1 = (undefined8 *)(param_1 + *(int *)(puVar4 + 0x24));
  puVar1[1] = uStack_58;
  *puVar1 = local_60;
  puVar1[3] = uStack_48;
  puVar1[2] = uStack_50;
  puVar1[5] = uStack_38;
  puVar1[4] = local_40;
  SVar5.unknown = &DAT_10055c5f8;
  FUN_100002f94(&DAT_10055c5f8,&DAT_100431360);
  *(undefined2 *)(param_1 + *(int *)(SVar5.unknown + 0x24)) = 0;
  SVar5 = SwiftUI::SafeAreaRegions::get_all(SVar5);
  SVar6 = SwiftUI::Edge::Set::get_all(SVar5.unknown);
  puVar4 = &DAT_10055c600;
  FUN_100002f94(&DAT_10055c600,&DAT_100431368);
  iVar2 = *(int *)(puVar4 + 0x24);
  *(undefined8 *)(param_1 + iVar2) = SVar5.unknown;
  *(char *)((undefined8 *)(param_1 + iVar2) + 1) = (char)SVar6.unknown;
  puVar4 = &DAT_10055c608;
  FUN_100002f94(&DAT_10055c608,&DAT_100431370);
  *(undefined1 *)(param_1 + *(int *)(puVar4 + 0x24)) = 0;
  return;
}

