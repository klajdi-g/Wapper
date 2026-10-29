// rea decompile_all
// name: FUN_10035f2f8
// address: 0x10035f2f8
// body: available
// range: 0x10035f2f8-0x10035f62b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10035f2f8(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ButtonRole BVar4;
  undefined *puVar5;
  LocalizedStringKey LVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar8;
  long lVar9;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  ulong uVar10;
  code *pcVar11;
  long lVar12;
  undefined1 *puVar13;
  long lVar14;
  String stringLiteral;
  String stringLiteral_00;
  undefined1 auStack_b0 [12];
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  LocalizedStringKey LStack_90;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  
  lVar2 = 0;
  local_88 = param_2;
  local_68 = param_1;
  FUN_100386f18();
  lVar2 = *(long *)(lVar2 + -8);
  lVar14 = *(long *)(lVar2 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar13 = auStack_b0 + -(lVar14 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_10054dee8;
  FUN_100002f94(&DAT_10054dee8,&DAT_10041ed20);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)puVar13 - extraout_x8;
  puVar3 = &DAT_10054def0;
  FUN_100002f94(&DAT_10054def0,&DAT_100422df0);
  local_78 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_78 + 0x40));
  lVar9 = lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_70 = lVar9;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar9 = lVar9 - extraout_x12;
  local_80 = lVar9;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar9 = lVar9 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100521118)();
  uVar7 = 0xef7473696c79616c;
  stringLiteral.bridgeObject = (void *)0xef7473696c79616c;
  stringLiteral.str = (char *)0x50206574656c6544;
  LStack_90 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  local_a4 = param_4;
  local_a0 = param_5;
  local_98 = uVar7;
  SwiftUI::ButtonRole::get_destructive((ButtonRole)LStack_90.unknown);
  BVar4 = SwiftUI::ButtonRole::typeMetadataAccessor();
  pcVar11 = *(code **)(*(long *)(BVar4.unknown + -8) + 0x38);
  (*pcVar11)(lVar12,0,1,BVar4.unknown);
  FUN_100029504(local_88,puVar13,FUN_100386f18);
  uVar8 = (ulong)*(byte *)(lVar2 + 0x50);
  uVar10 = uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff);
  puVar5 = &DAT_10053be68;
  _swift_allocObject(&DAT_10053be68,uVar10 + lVar14,uVar8 | 7);
  FUN_100007e64(puVar13,puVar5 + uVar10,FUN_100386f18);
  (extension_SwiftUI)::SwiftUI::Button::_init(LStack_90);
  stringLiteral_00.bridgeObject = (void *)0xe600000000000000;
  stringLiteral_00.str = (char *)0x6c65636e6143;
  LVar6 = SwiftUI::LocalizedStringKey::init(stringLiteral_00);
  SwiftUI::ButtonRole::get_cancel((ButtonRole)LVar6.unknown);
  (*pcVar11)(lVar12,0,1,BVar4.unknown);
  (extension_SwiftUI)::SwiftUI::Button::_init(LVar6);
  lVar12 = local_78;
  lVar2 = local_80;
  pcVar11 = *(code **)(local_78 + 0x10);
  (*pcVar11)(local_80,lVar9 - extraout_x12_01,puVar3);
  lVar14 = local_70;
  (*pcVar11)(local_70,lVar9,puVar3);
  lVar1 = local_68;
  (*pcVar11)(local_68,lVar2,puVar3);
  puVar5 = &DAT_10054e218;
  FUN_100002f94(&DAT_10054e218,&DAT_10041f0d0);
  (*pcVar11)(lVar1 + *(int *)(puVar5 + 0x30),lVar14,puVar3);
  pcVar11 = *(code **)(lVar12 + 8);
  (*pcVar11)(lVar9,puVar3);
  (*pcVar11)(lVar9 - extraout_x12_01,puVar3);
  (*pcVar11)(lVar14,puVar3);
  (*pcVar11)(lVar2,puVar3);
  return;
}

