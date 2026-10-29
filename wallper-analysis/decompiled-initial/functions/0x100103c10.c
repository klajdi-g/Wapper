// rea decompile_all
// name: FUN_100103c10
// address: 0x100103c10
// body: available
// range: 0x100103c10-0x100103e6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100103c10(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  State SVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  undefined8 *unaff_x20;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_b0 [8];
  long local_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar2 = &DAT_10054d8d0;
  local_a8 = param_1;
  FUN_100002f94(&DAT_10054d8d0,&DAT_10041f190);
  lVar9 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100552ae0;
  FUN_100002f94(&DAT_100552ae0,&DAT_1004252e0);
  lVar7 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)(auStack_b0 + -extraout_x8) - extraout_x8_00;
  uVar8 = unaff_x20[3];
  _swift_retain(uVar8);
  FUN_100002f94(&DAT_10054d8e0,&DAT_10041f1b0);
  FUN_1000599d4();
  SwiftUI::Button::_init();
  uStack_88 = unaff_x20[5];
  local_90 = unaff_x20[4];
  uStack_68 = unaff_x20[5];
  local_70 = unaff_x20[4];
  SVar4.unknown = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar4);
  local_70 = CONCAT71(local_70._1_7_,local_a0[0]);
  puVar5 = &DAT_10054d8f0;
  FUN_1000087a0(&DAT_10054d8f0,&DAT_10054d8d0,&DAT_10041f190,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
  puVar6 = puVar5;
  FUN_1001040e0();
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle
            (lVar10,&local_70,puVar2,&DAT_10052bf68,puVar5,puVar6);
  (**(code **)(lVar9 + 8))(auStack_b0 + -extraout_x8,puVar2);
  lVar9 = local_a8;
  FUN_100339ca4(local_a8);
  (**(code **)(lVar7 + 8))(lVar10,puVar3);
  uStack_68 = unaff_x20[1];
  local_70 = *unaff_x20;
  puVar2 = &DAT_10052bee8;
  _swift_allocObject(&DAT_10052bee8,0x40,7);
  uVar11 = *unaff_x20;
  uVar13 = unaff_x20[3];
  uVar12 = unaff_x20[2];
  *(undefined8 *)(puVar2 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar2 + 0x10) = uVar11;
  *(undefined8 *)(puVar2 + 0x28) = uVar13;
  *(undefined8 *)(puVar2 + 0x20) = uVar12;
  uVar11 = unaff_x20[4];
  *(undefined8 *)(puVar2 + 0x38) = unaff_x20[5];
  *(undefined8 *)(puVar2 + 0x30) = uVar11;
  puVar3 = &DAT_100552af0;
  FUN_100002f94(&DAT_100552af0,&DAT_1004252e8);
  iVar1 = *(int *)(puVar3 + 0x24);
  *(undefined8 *)(lVar9 + iVar1) = FUN_100104154;
  ((undefined8 *)(lVar9 + iVar1))[1] = puVar2;
  _swift_retain(uVar8);
  FUN_100043d74(&local_70,local_a0);
  FUN_1000087e4(&local_90,local_a0,&DAT_10054ab50,&DAT_10041d0f0);
  return;
}

