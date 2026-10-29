// rea decompile_all
// name: FUN_100319128
// address: 0x100319128
// body: available
// range: 0x100319128-0x100319387 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100319128(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  PlainButtonStyle PVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar7;
  long extraout_x12;
  long unaff_x20;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  
  local_90 = *(long *)(param_2 + -8);
  local_88 = *(long *)(local_90 + 0x40);
  local_a0 = param_1;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar11 = (long)&local_a0 - (extraout_x12 + 0xfU & 0xfffffffffffffff0);
  local_98 = lVar11;
  PVar3 = SwiftUI::PlainButtonStyle::typeMetadataAccessor();
  lVar8 = *(long *)(PVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar8 + 0x40));
  lVar11 = lVar11 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_10055c360;
  FUN_100002f94(&DAT_10055c360,&DAT_100431050);
  lVar10 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_retain(*(undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x1c) + 8));
  FUN_100002f94(&DAT_10055c368,&DAT_100431058);
  FUN_10031fd30();
  SwiftUI::Button::_init();
  SwiftUI::PlainButtonStyle::init();
  puVar5 = &DAT_10055c428;
  FUN_1000087a0(&DAT_10055c428,&DAT_10055c360,&DAT_100431050,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
  puVar6 = &DAT_10054a8b0;
  FUN_1000036d0(&DAT_10054a8b0,PTR_typeMetadataAccessor_100522380,
                PTR_SwiftUI__SwiftUI__PlainButtonStyle_>SwiftUI__PrimitiveButtonStyle_100522370);
  lVar2 = local_a0;
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle
            (local_a0,lVar11,puVar4,PVar3.unknown,puVar5,puVar6);
  (**(code **)(lVar8 + 8))(lVar11,PVar3.unknown);
  (**(code **)(lVar10 + 8))(lVar11 - extraout_x8_00,puVar4);
  lVar11 = local_98;
  FUN_100029504();
  uVar7 = (ulong)*(byte *)(local_90 + 0x50);
  uVar9 = uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff);
  puVar4 = &DAT_10053a7b0;
  _swift_allocObject(&DAT_10053a7b0,uVar9 + local_88,uVar7 | 7);
  FUN_100007e64(lVar11,puVar4 + uVar9,FUN_10031cb80);
  puVar5 = &DAT_10055c430;
  FUN_100002f94(&DAT_10055c430,&DAT_1004310b0);
  iVar1 = *(int *)(puVar5 + 0x24);
  *(undefined8 *)(lVar2 + iVar1) = FUN_100320414;
  ((undefined8 *)(lVar2 + iVar1))[1] = puVar4;
  return;
}

