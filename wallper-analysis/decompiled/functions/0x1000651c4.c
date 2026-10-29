// rea decompile_all
// name: FUN_1000651c4
// address: 0x1000651c4
// body: available
// range: 0x1000651c4-0x1000654c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1000651c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  Alignment param_5)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar6;
  Alignment AVar7;
  LocalizedStringKey LVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar10;
  long lVar11;
  String stringLiteral;
  long local_c0 [2];
  undefined *puStack_b0;
  long local_a8;
  undefined *local_a0;
  undefined8 local_98;
  byte local_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  undefined *puStack_68;
  Button<undefined> BVar5;
  
  puVar3 = &DAT_10054e438;
  local_98 = param_1;
  FUN_100002f94(&DAT_10054e438,&DAT_10041f3e8);
  local_a8 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_a8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_10054e440;
  FUN_100002f94(&DAT_10054e440,&DAT_10041f3f0);
  local_c0[1] = *(long *)(puVar4 + -8);
  puStack_b0 = puVar4;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(local_c0[1] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = ((long)local_c0 - extraout_x8) - extraout_x8_00;
  puVar4 = &DAT_10054e448;
  FUN_100002f94(&DAT_10054e448,&DAT_10041f3f8);
  local_a0 = puVar4;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar10 - extraout_x8_01;
  puVar4 = &DAT_1005275a0;
  _swift_allocObject(&DAT_1005275a0,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = param_2;
  *(undefined8 *)(puVar4 + 0x18) = param_3;
  *(long *)(puVar4 + 0x20) = param_4;
  *(undefined **)(puVar4 + 0x28) = param_5.unknown;
  local_80 = param_2;
  uStack_78 = param_3;
  local_70 = param_4;
  puStack_68 = param_5.unknown;
  _swift_retain(param_5.unknown);
  _swift_retain(param_3);
  local_c0[0] = param_4;
  FUN_100002f94(&DAT_10054e450,&DAT_10041f400);
  FUN_10006bcc4();
  BVar5 = SwiftUI::Button::_init();
  bVar2 = (byte)BVar5.unknown;
  FUN_1002159e0();
  local_90[0] = bVar2 & 1;
  puVar4 = &DAT_10054e4a0;
  FUN_1000087a0(&DAT_10054e4a0,&DAT_10054e438,&DAT_10041f3e8,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
  puVar6 = puVar4;
  FUN_100003038();
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle
            (lVar10,local_90,puVar3,&DAT_100525378,puVar4,puVar6);
  (**(code **)(local_a8 + 8))((long)local_c0 - extraout_x8,puVar3);
  FUN_10034f5bc(lVar11);
  (**(code **)(local_c0[1] + 8))(lVar10,puStack_b0);
  puVar3 = &DAT_1005275c8;
  uVar9 = 0x30;
  _swift_allocObject(&DAT_1005275c8,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(long *)(puVar3 + 0x20) = param_4;
  *(undefined **)(puVar3 + 0x28) = param_5.unknown;
  _swift_retain(param_3);
  _swift_retain();
  AVar7 = SwiftUI::Alignment::get_center(param_5);
  puVar1 = (undefined8 *)(lVar11 + *(int *)(local_a0 + 0x24));
  *puVar1 = FUN_10006bf38;
  puVar1[1] = puVar3;
  puVar1[2] = AVar7.unknown;
  puVar1[3] = uVar9;
  uVar9 = 0x80000001004dc6c0;
  stringLiteral.bridgeObject = (void *)0x80000001004dc6c0;
  stringLiteral.str = (char *)0xd00000000000001f;
  LVar8 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  FUN_10006bf44();
  (extension_SwiftUI)::SwiftUI::View::_help(LVar8);
  _swift_bridgeObjectRelease(puVar4);
  _swift_bridgeObjectRelease(uVar9);
  FUN_10002a29c(lVar11,&DAT_10054e448,&DAT_10041f3f8);
  return;
}

