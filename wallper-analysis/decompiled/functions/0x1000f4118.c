// rea decompile_all
// name: FUN_1000f4118
// address: 0x1000f4118
// body: available
// range: 0x1000f4118-0x1000f42b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000f4118(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_b0 [16];
  undefined8 *local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  
  puVar1 = &DAT_1005526c0;
  FUN_100002f94(&DAT_1005526c0,&DAT_100424b10);
  lVar3 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_1005526c8;
  FUN_100002f94(&DAT_1005526c8,&DAT_1004348d0);
  lVar4 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)(auStack_b0 + -extraout_x8) - extraout_x8_00;
  uStack_88 = unaff_x20[1];
  local_90 = *unaff_x20;
  local_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  local_70 = unaff_x20[4];
  local_a0 = &local_90;
  _swift_retain(local_70);
  FUN_100002f94(&DAT_1005526d0,&DAT_100424b20);
  FUN_1000fd020();
  SwiftUI::Button::_init();
  FUN_1000087a0(&DAT_100552710,&DAT_1005526c0,&DAT_100424b10,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
  FUN_100037164();
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle(lVar5);
  (**(code **)(lVar3 + 8))(auStack_b0 + -extraout_x8,puVar1);
  FUN_1003520ec(param_1);
  (**(code **)(lVar4 + 8))(lVar5,puVar2);
  return;
}

