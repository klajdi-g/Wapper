// rea decompile_all
// name: FUN_100120fa8
// address: 0x100120fa8
// body: available
// range: 0x100120fa8-0x1001211bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100120fa8(long param_1)

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
  undefined1 auStack_100 [16];
  undefined8 *local_f0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  PVar2 = SwiftUI::PlainButtonStyle::typeMetadataAccessor();
  lVar7 = *(long *)(PVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar7 + 0x40));
  puVar6 = auStack_100 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_1005533c8;
  FUN_100002f94(&DAT_1005533c8,&DAT_1004264a8);
  lVar8 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uStack_88 = unaff_x20[5];
  local_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  local_70 = unaff_x20[8];
  uStack_a8 = unaff_x20[1];
  local_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  local_f0 = &local_b0;
  _swift_retain(uStack_80);
  FUN_100002f94(&DAT_1005533d0,&DAT_1004264b0);
  FUN_1001211c8();
  SwiftUI::Button::_init();
  SwiftUI::PlainButtonStyle::init();
  puVar4 = &DAT_100553450;
  FUN_1000087a0(&DAT_100553450,&DAT_1005533c8,&DAT_1004264a8,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
  puVar5 = &DAT_10054a8b0;
  FUN_1000036d0(&DAT_10054a8b0,PTR_typeMetadataAccessor_100522380,
                PTR_SwiftUI__SwiftUI__PlainButtonStyle_>SwiftUI__PrimitiveButtonStyle_100522370);
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle
            (param_1,puVar6,puVar3,PVar2.unknown,puVar4,puVar5);
  (**(code **)(lVar7 + 8))(puVar6,PVar2.unknown);
  (**(code **)(lVar8 + 8))((long)puVar6 - extraout_x8_00,puVar3);
  puVar3 = &DAT_10052cf88;
  _swift_allocObject(&DAT_10052cf88,0x58,7);
  *(undefined8 *)(puVar3 + 0x38) = uStack_88;
  *(undefined8 *)(puVar3 + 0x30) = local_90;
  *(undefined8 *)(puVar3 + 0x48) = uStack_78;
  *(undefined8 *)(puVar3 + 0x40) = uStack_80;
  *(undefined8 *)(puVar3 + 0x50) = local_70;
  *(undefined8 *)(puVar3 + 0x18) = uStack_a8;
  *(undefined8 *)(puVar3 + 0x10) = local_b0;
  *(undefined8 *)(puVar3 + 0x28) = uStack_98;
  *(undefined8 *)(puVar3 + 0x20) = uStack_a0;
  puVar4 = &DAT_100553458;
  FUN_100002f94(&DAT_100553458,&DAT_1004264d0);
  iVar1 = *(int *)(puVar4 + 0x24);
  *(undefined8 *)(param_1 + iVar1) = FUN_100121594;
  ((undefined8 *)(param_1 + iVar1))[1] = puVar3;
  FUN_10012159c(&local_b0,auStack_100);
  return;
}

