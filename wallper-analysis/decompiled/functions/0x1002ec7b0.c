// rea decompile_all
// name: FUN_1002ec7b0
// address: 0x1002ec7b0
// body: available
// range: 0x1002ec7b0-0x1002ecae3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002ec7b0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  LocalizedStringKey LVar6;
  ButtonRole BVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar10;
  long lVar11;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  code *pcVar12;
  ulong uVar13;
  String stringLiteral;
  String stringLiteral_00;
  undefined8 local_b0;
  LocalizedStringKey LStack_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  undefined8 local_70;
  long local_68;
  undefined8 uVar9;
  
  lVar4 = 0;
  local_70 = param_2;
  local_68 = param_1;
  FUN_1002f58d4();
  local_80 = *(long *)(lVar4 + -8);
  local_78 = *(long *)(local_80 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar4 = (long)&local_b0 - (extraout_x12 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_10054dee8;
  local_98 = lVar4;
  FUN_100002f94(&DAT_10054dee8,&DAT_10041ed20);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = lVar4 - extraout_x8;
  puVar5 = &DAT_10054def0;
  FUN_100002f94(&DAT_10054def0,&DAT_100422df0);
  local_90 = *(long *)(puVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_90 + 0x40));
  lVar11 = lVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_88 = lVar11;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar11 = lVar11 - extraout_x12_00;
  local_a0 = lVar11;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar11 = lVar11 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100521118)();
  stringLiteral.bridgeObject = (void *)0xe600000000000000;
  stringLiteral.str = (char *)0x6c65636e6143;
  LVar6 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  SwiftUI::ButtonRole::get_cancel((ButtonRole)LVar6.unknown);
  BVar7 = SwiftUI::ButtonRole::typeMetadataAccessor();
  pcVar12 = *(code **)(*(long *)(BVar7.unknown + -8) + 0x38);
  (*pcVar12)(lVar4,0,1,BVar7.unknown);
  (extension_SwiftUI)::SwiftUI::Button::_init(LVar6);
  stringLiteral_00.bridgeObject = (void *)0xe500000000000000;
  stringLiteral_00.str = (char *)0x7261656c43;
  uVar9 = 0xe500000000000000;
  LStack_a8 = SwiftUI::LocalizedStringKey::init(stringLiteral_00);
  local_b0 = uVar9;
  SwiftUI::ButtonRole::get_destructive((ButtonRole)LStack_a8.unknown);
  (*pcVar12)(lVar4,0,1,BVar7.unknown);
  lVar4 = local_98;
  FUN_100029504(local_70,local_98,FUN_1002f58d4);
  uVar10 = (ulong)*(byte *)(local_80 + 0x50);
  uVar13 = uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff);
  puVar8 = &DAT_1005394d8;
  _swift_allocObject(&DAT_1005394d8,uVar13 + local_78,uVar10 | 7);
  FUN_100007e64(lVar4,puVar8 + uVar13,FUN_1002f58d4);
  (extension_SwiftUI)::SwiftUI::Button::_init(LStack_a8);
  lVar1 = local_90;
  lVar4 = local_a0;
  pcVar12 = *(code **)(local_90 + 0x10);
  (*pcVar12)(local_a0,lVar11 - extraout_x12_02,puVar5);
  lVar2 = local_88;
  (*pcVar12)(local_88,lVar11,puVar5);
  lVar3 = local_68;
  (*pcVar12)(local_68,lVar4,puVar5);
  puVar8 = &DAT_10054e218;
  FUN_100002f94(&DAT_10054e218,&DAT_10041f0d0);
  (*pcVar12)(lVar3 + *(int *)(puVar8 + 0x30),lVar2,puVar5);
  pcVar12 = *(code **)(lVar1 + 8);
  (*pcVar12)(lVar11,puVar5);
  (*pcVar12)(lVar11 - extraout_x12_02,puVar5);
  (*pcVar12)(lVar2,puVar5);
  (*pcVar12)(lVar4,puVar5);
  return;
}

