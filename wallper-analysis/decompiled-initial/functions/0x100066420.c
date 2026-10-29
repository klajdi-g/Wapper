// rea decompile_all
// name: FUN_100066420
// address: 0x100066420
// body: available
// range: 0x100066420-0x1000666c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100066420(long param_1,AppStorage param_2,AppStorage param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_a0 [8];
  long local_98;
  byte local_90 [16];
  undefined *local_80;
  undefined *puStack_78;
  
  puVar2 = &DAT_10054e3c0;
  local_98 = param_1;
  FUN_100002f94(&DAT_10054e3c0,&DAT_10041f370);
  lVar8 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_10054e3c8;
  FUN_100002f94(&DAT_10054e3c8,&DAT_10041f378);
  lVar6 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)(auStack_a0 + -extraout_x8) - extraout_x8_00;
  puVar4 = &DAT_100527550;
  _swift_allocObject(&DAT_100527550,0x20,7);
  *(undefined **)(puVar4 + 0x10) = param_2.unknown;
  *(undefined **)(puVar4 + 0x18) = param_3.unknown;
  local_80 = param_2.unknown;
  puStack_78 = param_3.unknown;
  _swift_retain(param_2.unknown);
  _swift_retain(param_3.unknown);
  FUN_100002f94(&DAT_10054e3d0,&DAT_10041f380);
  FUN_10006ba48();
  SwiftUI::Button::_init();
  SwiftUI::AppStorage::get_wrappedValue(param_2);
  puVar4 = &DAT_10054e420;
  FUN_1000087a0(&DAT_10054e420,&DAT_10054e3c0,&DAT_10041f370,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
  puVar5 = puVar4;
  FUN_100003038();
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle
            (lVar7,local_90,puVar2,&DAT_100525378,puVar4,puVar5);
  (**(code **)(lVar8 + 8))(auStack_a0 + -extraout_x8,puVar2);
  lVar8 = local_98;
  FUN_10034fcf4(local_98);
  (**(code **)(lVar6 + 8))(lVar7,puVar3);
  SwiftUI::AppStorage::get_wrappedValue(param_3);
  uVar9 = 0x3ff0000000000000;
  if (local_90[0] == 0) {
    uVar9 = 0x3fd999999999999a;
  }
  puVar2 = &DAT_10054e428;
  FUN_100002f94(&DAT_10054e428,&DAT_10041f3a8);
  *(undefined8 *)(lVar8 + *(int *)(puVar2 + 0x24)) = uVar9;
  SwiftUI::AppStorage::get_wrappedValue(param_3);
  puVar2 = &DAT_10041f3b0;
  _swift_getKeyPath();
  puVar3 = &DAT_100527578;
  _swift_allocObject(&DAT_100527578,0x11,7);
  puVar3[0x10] = (local_90[0] ^ 0xff) & 1;
  puVar4 = &DAT_10054e430;
  FUN_100002f94(&DAT_10054e430,&DAT_10041f3e0);
  puVar1 = (undefined8 *)(lVar8 + *(int *)(puVar4 + 0x24));
  *puVar1 = puVar2;
  puVar1[1] = FUN_10006bca0;
  puVar1[2] = puVar3;
  return;
}

