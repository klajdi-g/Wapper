// rea decompile_all
// name: FUN_100307a70
// address: 0x100307a70
// body: available
// range: 0x100307a70-0x100307d5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100307a70(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  PlainButtonStyle PVar6;
  State SVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 *unaff_x20;
  long lVar8;
  long lVar9;
  Animation AVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *local_b0;
  long local_a8;
  long local_a0;
  undefined1 local_91;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  local_a0 = param_1;
  local_b0 = (undefined *)SwiftUI::PlainButtonStyle::typeMetadataAccessor();
  local_a8 = *(long *)(local_b0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_a8 + 0x40));
  lVar9 = (long)&local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100551b68;
  FUN_100002f94(&DAT_100551b68,&DAT_1004307d0);
  lVar8 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_10055bbc0;
  FUN_100002f94(&DAT_10055bbc0,&DAT_1004307d8);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  AVar10.unknown = (undefined *)((lVar9 - extraout_x8_00) - extraout_x8_01);
  uVar2 = unaff_x20[4];
  _swift_retain(uVar2);
  FUN_100002f94(&DAT_10055bbc8,&DAT_1004307e0);
  FUN_10030d588();
  SwiftUI::Button::_init();
  FUN_1000d911c(AVar10.unknown,0x4034000000000000);
  (**(code **)(lVar8 + 8))(lVar9 - extraout_x8_00,puVar4);
  PVar6 = SwiftUI::PlainButtonStyle::init();
  FUN_10030d7a8();
  puVar4 = &DAT_10054a8b0;
  FUN_1000036d0(&DAT_10054a8b0,PTR_typeMetadataAccessor_100522380,
                PTR_SwiftUI__SwiftUI__PlainButtonStyle_>SwiftUI__PrimitiveButtonStyle_100522370);
  lVar8 = local_a0;
  puVar3 = local_b0;
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle
            (local_a0,lVar9,puVar5,local_b0,PVar6.unknown,puVar4);
  (**(code **)(local_a8 + 8))(lVar9,puVar3);
  FUN_10002a29c(AVar10.unknown,&DAT_10055bbc0,&DAT_1004307d8);
  AVar10 = SwiftUI::Animation::spring(0.5,0.9,0.0,AVar10);
  uStack_78 = unaff_x20[6];
  uStack_80 = unaff_x20[5];
  uStack_88 = unaff_x20[6];
  local_90 = unaff_x20[5];
  SVar7.unknown = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar7);
  puVar4 = &DAT_10055bc30;
  FUN_100002f94(&DAT_10055bc30,&DAT_100430830);
  puVar1 = (undefined8 *)(lVar8 + *(int *)(puVar4 + 0x24));
  *puVar1 = AVar10.unknown;
  *(undefined1 *)(puVar1 + 1) = local_91;
  puVar4 = &DAT_10053a138;
  _swift_allocObject(&DAT_10053a138,0x48,7);
  uVar11 = *unaff_x20;
  uVar13 = unaff_x20[3];
  uVar12 = unaff_x20[2];
  *(undefined8 *)(puVar4 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar4 + 0x10) = uVar11;
  *(undefined8 *)(puVar4 + 0x28) = uVar13;
  *(undefined8 *)(puVar4 + 0x20) = uVar12;
  uVar11 = unaff_x20[4];
  *(undefined8 *)(puVar4 + 0x38) = unaff_x20[5];
  *(undefined8 *)(puVar4 + 0x30) = uVar11;
  *(undefined8 *)(puVar4 + 0x40) = unaff_x20[6];
  puVar5 = &DAT_10055bc38;
  FUN_100002f94(&DAT_10055bc38,&DAT_100430838);
  puVar1 = (undefined8 *)(lVar8 + *(int *)(puVar5 + 0x24));
  *puVar1 = thunk_FUN_10030d858;
  puVar1[1] = puVar4;
  puVar1[2] = 0;
  puVar1[3] = 0;
  _swift_retain(uVar2);
  FUN_1000087e4(&uStack_80,&local_90,&DAT_10054ab50,&DAT_10041d0f0);
  return;
}

