// rea decompile_all
// name: FUN_10032ebcc
// address: 0x10032ebcc
// body: available
// range: 0x10032ebcc-0x10032eda7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10032ebcc(undefined8 *param_1,Alignment param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  Alignment AVar2;
  undefined *puVar3;
  undefined *puVar4;
  Animation AVar5;
  State SVar6;
  Alignment unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_128;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  AVar2 = SwiftUI::Alignment::get_center(param_2);
  *param_1 = AVar2.unknown;
  param_1[1] = param_3;
  puVar3 = &DAT_10055c950;
  FUN_100002f94(&DAT_10055c950,&DAT_100431b00);
  FUN_10032eda8((long)param_1 + (long)*(int *)(puVar3 + 0x2c));
  puVar3 = &DAT_10053b008;
  _swift_allocObject(&DAT_10053b008,0xd0,7);
  uVar7 = *(undefined8 *)((long)unaff_x20.unknown + 0x80);
  uVar9 = *(undefined8 *)((long)unaff_x20.unknown + 0x98);
  uVar8 = *(undefined8 *)((long)unaff_x20.unknown + 0x90);
  *(undefined8 *)(puVar3 + 0x98) = *(undefined8 *)((long)unaff_x20.unknown + 0x88);
  *(undefined8 *)(puVar3 + 0x90) = uVar7;
  *(undefined8 *)(puVar3 + 0xa8) = uVar9;
  *(undefined8 *)(puVar3 + 0xa0) = uVar8;
  uVar7 = *(undefined8 *)((long)unaff_x20.unknown + 0xa0);
  uVar9 = *(undefined8 *)((long)unaff_x20.unknown + 0xb8);
  uVar8 = *(undefined8 *)((long)unaff_x20.unknown + 0xb0);
  *(undefined8 *)(puVar3 + 0xb8) = *(undefined8 *)((long)unaff_x20.unknown + 0xa8);
  *(undefined8 *)(puVar3 + 0xb0) = uVar7;
  *(undefined8 *)(puVar3 + 200) = uVar9;
  *(undefined8 *)(puVar3 + 0xc0) = uVar8;
  uVar7 = *(undefined8 *)((long)unaff_x20.unknown + 0x40);
  uVar9 = *(undefined8 *)((long)unaff_x20.unknown + 0x58);
  uVar8 = *(undefined8 *)((long)unaff_x20.unknown + 0x50);
  *(undefined8 *)(puVar3 + 0x58) = *(undefined8 *)((long)unaff_x20.unknown + 0x48);
  *(undefined8 *)(puVar3 + 0x50) = uVar7;
  *(undefined8 *)(puVar3 + 0x68) = uVar9;
  *(undefined8 *)(puVar3 + 0x60) = uVar8;
  uVar7 = *(undefined8 *)((long)unaff_x20.unknown + 0x60);
  uVar9 = *(undefined8 *)((long)unaff_x20.unknown + 0x78);
  uVar8 = *(undefined8 *)((long)unaff_x20.unknown + 0x70);
  *(undefined8 *)(puVar3 + 0x78) = *(undefined8 *)((long)unaff_x20.unknown + 0x68);
  *(undefined8 *)(puVar3 + 0x70) = uVar7;
  *(undefined8 *)(puVar3 + 0x88) = uVar9;
  *(undefined8 *)(puVar3 + 0x80) = uVar8;
  uVar7 = *(undefined8 *)unaff_x20.unknown;
  uVar9 = *(undefined8 *)((long)unaff_x20.unknown + 0x18);
  uVar8 = *(undefined8 *)((long)unaff_x20.unknown + 0x10);
  *(undefined8 *)(puVar3 + 0x18) = *(undefined8 *)((long)unaff_x20.unknown + 8);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(undefined8 *)(puVar3 + 0x28) = uVar9;
  *(undefined8 *)(puVar3 + 0x20) = uVar8;
  uVar7 = *(undefined8 *)((long)unaff_x20.unknown + 0x20);
  uVar9 = *(undefined8 *)((long)unaff_x20.unknown + 0x38);
  uVar8 = *(undefined8 *)((long)unaff_x20.unknown + 0x30);
  *(undefined8 *)(puVar3 + 0x38) = *(undefined8 *)((long)unaff_x20.unknown + 0x28);
  *(undefined8 *)(puVar3 + 0x30) = uVar7;
  *(undefined8 *)(puVar3 + 0x48) = uVar9;
  *(undefined8 *)(puVar3 + 0x40) = uVar8;
  puVar4 = &DAT_10055c958;
  FUN_100002f94(&DAT_10055c958,&DAT_100431b08);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar4 + 0x24));
  *puVar1 = FUN_100336148;
  puVar1[1] = puVar3;
  puVar1[2] = 0;
  puVar1[3] = 0;
  FUN_100336150();
  SwiftUI::Alignment::get_center(unaff_x20);
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  AVar5.unknown = &DAT_10055c960;
  FUN_100002f94(&DAT_10055c960,&DAT_100431b10);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(AVar5.unknown + 0x24));
  puVar1[9] = uStack_b8;
  puVar1[8] = local_c0;
  puVar1[0xb] = uStack_a8;
  puVar1[10] = local_b0;
  puVar1[0xd] = uStack_98;
  puVar1[0xc] = uStack_a0;
  puVar1[1] = uStack_f8;
  *puVar1 = local_100;
  puVar1[3] = uStack_e8;
  puVar1[2] = uStack_f0;
  puVar1[5] = uStack_d8;
  puVar1[4] = local_e0;
  puVar1[7] = uStack_c8;
  puVar1[6] = uStack_d0;
  AVar5 = SwiftUI::Animation::spring(0.5,0.85,0.0,AVar5);
  SVar6.unknown = &DAT_10055c968;
  FUN_100002f94(&DAT_10055c968,&DAT_100431b18);
  SwiftUI::State::get_wrappedValue(SVar6);
  puVar3 = &DAT_10055c970;
  FUN_100002f94(&DAT_10055c970,&DAT_100431b20);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar3 + 0x24));
  *param_1 = AVar5.unknown;
  param_1[1] = local_138;
  param_1[2] = uStack_130;
  *(undefined1 *)(param_1 + 3) = local_128;
  return;
}

