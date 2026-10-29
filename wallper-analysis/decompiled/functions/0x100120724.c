// rea decompile_all
// name: FUN_100120724
// address: 0x100120724
// body: available
// range: 0x100120724-0x10012096f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100120724(long param_1)

{
  int iVar1;
  PlainButtonStyle PVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_e0 [16];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 *local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_70;
  undefined8 uStack_68;
  
  PVar2 = SwiftUI::PlainButtonStyle::typeMetadataAccessor();
  lVar7 = *(long *)(PVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar7 + 0x40));
  puVar6 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100553738;
  FUN_100002f94(&DAT_100553738,&DAT_1004267b0);
  lVar8 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uStack_98 = unaff_x20[3];
  local_a0 = unaff_x20[2];
  local_88 = unaff_x20[5];
  uVar9 = unaff_x20[4];
  uStack_a8 = unaff_x20[1];
  local_b0 = *unaff_x20;
  uStack_80 = unaff_x20[6];
  local_c0 = &local_b0;
  uStack_90 = uVar9;
  _swift_retain(uVar9);
  FUN_100002f94(&DAT_100553740,&DAT_1004267b8);
  FUN_100122714();
  SwiftUI::Button::_init();
  SwiftUI::PlainButtonStyle::init();
  puVar4 = &DAT_1005537d0;
  FUN_1000087a0(&DAT_1005537d0,&DAT_100553738,&DAT_1004267b0,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
  puVar5 = &DAT_10054a8b0;
  FUN_1000036d0(&DAT_10054a8b0,PTR_typeMetadataAccessor_100522380,
                PTR_SwiftUI__SwiftUI__PlainButtonStyle_>SwiftUI__PrimitiveButtonStyle_100522370);
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle
            (param_1,puVar6,puVar3,PVar2.unknown,puVar4,puVar5);
  (**(code **)(lVar7 + 8))(puVar6,PVar2.unknown);
  (**(code **)(lVar8 + 8))((long)puVar6 - extraout_x8_00,puVar3);
  uStack_68 = uStack_a8;
  local_70 = local_b0;
  uStack_c8 = uStack_80;
  local_d0 = local_88;
  puVar3 = &DAT_10052d0a0;
  _swift_allocObject(&DAT_10052d0a0,0x48,7);
  *(undefined8 *)(puVar3 + 0x18) = uStack_a8;
  *(undefined8 *)(puVar3 + 0x10) = local_b0;
  *(undefined8 *)(puVar3 + 0x28) = uStack_98;
  *(undefined8 *)(puVar3 + 0x20) = local_a0;
  *(undefined8 *)(puVar3 + 0x38) = local_88;
  *(undefined8 *)(puVar3 + 0x30) = uStack_90;
  *(undefined8 *)(puVar3 + 0x40) = uStack_80;
  puVar4 = &DAT_1005537d8;
  FUN_100002f94(&DAT_1005537d8,&DAT_1004267e0);
  iVar1 = *(int *)(puVar4 + 0x24);
  *(undefined8 *)(param_1 + iVar1) = FUN_100122b70;
  ((undefined8 *)(param_1 + iVar1))[1] = puVar3;
  _swift_retain(uVar9);
  FUN_100043d74(&local_70,auStack_e0);
  FUN_1000087e4(&local_d0,auStack_e0,&DAT_10054ab50,&DAT_10041d0f0);
  return;
}

