// rea decompile_all
// name: FUN_10031252c
// address: 0x10031252c
// body: available
// range: 0x10031252c-0x10031274b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10031252c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  ScrollViewProxy SVar2;
  Set SVar3;
  State SVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  undefined *local_a0;
  long local_98;
  undefined8 local_90;
  undefined1 auStack_88 [8];
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  local_a8 = param_2;
  local_90 = param_1;
  SVar2 = SwiftUI::ScrollViewProxy::typeMetadataAccessor();
  lVar9 = *(long *)(SVar2.unknown + -8);
  lVar11 = *(long *)(lVar9 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar10 = auStack_b0 + -(lVar11 + 0xfU & 0xfffffffffffffff0);
  SVar3.unknown = &DAT_10055bdd0;
  FUN_100002f94(&DAT_10055bdd0,&DAT_100430b90);
  local_98 = *(long *)(SVar3.unknown + -8);
  local_a0 = SVar3.unknown;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_98 + 0x40) + 0xfU & 0xfffffffffffffff0);
  SVar3 = SwiftUI::Axis::Set::get_vertical(SVar3);
  local_70 = param_3;
  FUN_100002f94(&DAT_10055bdd8,&DAT_100430b98);
  FUN_1000087a0(&DAT_10055bde0,&DAT_10055bdd8,&DAT_100430b98,
                PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_1005234c0);
  SwiftUI::ScrollView::_init(SVar3,true);
  uStack_78 = *(undefined8 *)(param_3 + 0x100);
  local_80 = *(undefined8 *)(param_3 + 0xf8);
  SVar4.unknown = &DAT_10054ba40;
  FUN_100002f94(&DAT_10054ba40,&DAT_100423be0);
  SwiftUI::State::get_wrappedValue(SVar4);
  (**(code **)(lVar9 + 0x10))(puVar10,local_a8,SVar2.unknown);
  uVar7 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar8 = uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff);
  puVar5 = &DAT_10053a558;
  _swift_allocObject(&DAT_10053a558,uVar8 + lVar11,uVar7 | 7);
  (**(code **)(lVar9 + 0x20))(puVar5 + uVar8,puVar10,SVar2.unknown);
  puVar6 = &DAT_10055bde8;
  FUN_1000087a0(&DAT_10055bde8,&DAT_10055bdd0,&DAT_100430b90,
                PTR_SwiftUI__SwiftUI__ScrollView<undefined>_>SwiftUI__View_100521c28);
  puVar1 = local_a0;
  (extension_SwiftUI)::SwiftUI::View::_onChange
            (local_90,auStack_88,0,FUN_10031bd04,puVar5,local_a0,
             PTR___type_metadata_for_Swift_Int_100523bd8,puVar6,
             PTR___protocol_witness_table_for_Swift_Int___Swift_Equatable_in_Swift_100523be8);
  _swift_release(puVar5);
  (**(code **)(local_98 + 8))((long)puVar10 - extraout_x8,puVar1);
  return;
}

