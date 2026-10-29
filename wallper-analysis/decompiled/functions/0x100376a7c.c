// rea decompile_all
// name: FUN_100376a7c
// address: 0x100376a7c
// body: available
// range: 0x100376a7c-0x100376c97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100376a7c(undefined8 param_1)

{
  PlainButtonStyle PVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 *unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_d0 [8];
  long local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined8 *local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  
  local_b8 = param_1;
  PVar1 = SwiftUI::PlainButtonStyle::typeMetadataAccessor();
  local_c0 = *(long *)(PVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_c0 + 0x40));
  puVar6 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_10055d7a8;
  FUN_100002f94(&DAT_10055d7a8,&DAT_100432ec0);
  local_c8 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_c8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_10055d7b0;
  FUN_100002f94(&DAT_10055d7b0,&DAT_100432ec8);
  lVar8 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = ((long)puVar6 - extraout_x8_00) - extraout_x8_01;
  uStack_88 = unaff_x20[1];
  local_90 = *unaff_x20;
  local_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  local_70 = unaff_x20[4];
  local_a0 = &local_90;
  _swift_retain(local_70);
  FUN_100002f94(&DAT_10055d7b8,&DAT_100432ed0);
  FUN_100379e04();
  SwiftUI::Button::_init();
  SwiftUI::PlainButtonStyle::init();
  puVar4 = &DAT_10055d808;
  FUN_1000087a0(&DAT_10055d808,&DAT_10055d7a8,&DAT_100432ec0,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
  puVar5 = &DAT_10054a8b0;
  FUN_1000036d0(&DAT_10054a8b0,PTR_typeMetadataAccessor_100522380,
                PTR_SwiftUI__SwiftUI__PlainButtonStyle_>SwiftUI__PrimitiveButtonStyle_100522370);
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle(lVar7,puVar6,puVar2,PVar1.unknown,puVar4,puVar5);
  (**(code **)(local_c0 + 8))(puVar6,PVar1.unknown);
  (**(code **)(local_c8 + 8))((long)puVar6 - extraout_x8_00,puVar2);
  FUN_10035c23c(local_b8,0);
  (**(code **)(lVar8 + 8))(lVar7,puVar3);
  return;
}

