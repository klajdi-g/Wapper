// rea decompile_all
// name: FUN_1000c3818
// address: 0x1000c3818
// body: available
// range: 0x1000c3818-0x1000c3a6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000c3818(long param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  long unaff_x20;
  long lVar7;
  Color CVar8;
  long lVar9;
  undefined8 uVar10;
  undefined auStack_a0 [8];
  long local_98;
  
  puVar3 = &DAT_100550ec8;
  local_98 = param_1;
  FUN_100002f94(&DAT_100550ec8,&DAT_100422a50);
  lVar6 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  CVar8.unknown = auStack_a0 + -extraout_x8;
  puVar4 = &DAT_100550ed0;
  FUN_100002f94(&DAT_100550ed0,&DAT_100422a58);
  lVar9 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)CVar8.unknown - extraout_x8_00;
  _swift_retain(*(undefined8 *)(unaff_x20 + 0x30));
  FUN_100002f94(&DAT_100550ed8,&DAT_100422a60);
  FUN_1000c6e20();
  SwiftUI::Button::_init();
  FUN_1000087a0(&DAT_100550f28,&DAT_100550ec8,&DAT_100422a50,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
  FUN_100037164();
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle(lVar7);
  (**(code **)(lVar6 + 8))(CVar8.unknown,puVar3);
  if (*(char *)(unaff_x20 + 0x20) == '\0') {
    CVar8 = SwiftUI::Color::get_blue(CVar8);
  }
  else {
    CVar8.unknown = (undefined *)0x0;
  }
  lVar6 = local_98;
  FUN_100358cfc(local_98,CVar8.unknown);
  _swift_release(CVar8.unknown);
  (**(code **)(lVar9 + 8))(lVar7,puVar4);
  bVar2 = *(byte *)(unaff_x20 + 0x21);
  puVar3 = &DAT_100422a90;
  _swift_getKeyPath();
  puVar4 = &DAT_100529638;
  _swift_allocObject(&DAT_100529638,0x11,7);
  puVar4[0x10] = (bVar2 ^ 0xff) & 1;
  puVar5 = &DAT_100550f30;
  FUN_100002f94(&DAT_100550f30,&DAT_100422ac0);
  puVar1 = (undefined8 *)(lVar6 + *(int *)(puVar5 + 0x24));
  *puVar1 = puVar3;
  puVar1[1] = FUN_10006bca0;
  puVar1[2] = puVar4;
  uVar10 = 0x3ff0000000000000;
  if ((bVar2 & 1) == 0) {
    uVar10 = 0x3fdccccccccccccd;
  }
  puVar3 = &DAT_100550f38;
  FUN_100002f94(&DAT_100550f38,&DAT_100422ac8);
  *(undefined8 *)(lVar6 + *(int *)(puVar3 + 0x24)) = uVar10;
  return;
}

