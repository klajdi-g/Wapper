// rea decompile_all
// name: FUN_10011f6c0
// address: 0x10011f6c0
// body: available
// range: 0x10011f6c0-0x10011f8c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010011f7d0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10011f6c0(undefined8 *param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  undefined8 param_5,VerticalAlignment param_6,undefined8 param_7)

{
  undefined1 *puVar1;
  VerticalAlignment VVar2;
  undefined *puVar3;
  Color CVar4;
  State SVar5;
  AnyShapeStyle AVar6;
  Set _all;
  Set SVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char local_61;
  
  VVar2 = SwiftUI::VerticalAlignment::get_center(param_6);
  *param_1 = VVar2.unknown;
  param_1[1] = 0x4010000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar3 = &DAT_100553668;
  FUN_100002f94(&DAT_100553668,&DAT_100426680);
  VVar2.unknown = param_6.unknown;
  FUN_10011f8c4((long)param_1 + (long)*(int *)(puVar3 + 0x2c),param_6.unknown,param_7);
  if (((ulong)param_6.unknown & 1) == 0) {
    CVar4 = SwiftUI::Color::get_white(VVar2.unknown);
    FUN_10011c000();
    SVar5.unknown = &DAT_10054ab50;
    FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
    SwiftUI::State::get_wrappedValue(SVar5);
    param_3 = 0.85;
    dVar8 = param_3;
    if (local_61 == '\0') {
      dVar8 = 0.45;
    }
    SwiftUI::Color::opacity(dVar8,CVar4);
    _swift_release(CVar4.unknown);
  }
  else {
    CVar4 = SwiftUI::Color::get_red(VVar2.unknown);
  }
  FUN_100028d58();
  AVar6 = SwiftUI::AnyShapeStyle::_init
                    (CVar4.unknown,PTR___type_metadata_for_SwiftUI_Color_100523288,CVar4.unknown);
  SVar7.unknown = &DAT_100553610;
  FUN_100002f94(&DAT_100553610,&DAT_100426658);
  *(undefined **)((long)param_1 + (long)*(int *)(SVar7.unknown + 0x24)) = AVar6.unknown;
  _all = SwiftUI::Edge::Set::get_vertical(SVar7);
  uVar9 = 0x4008000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  SVar7.unknown = &DAT_100553600;
  dVar8 = param_3;
  uVar10 = param_4;
  uVar11 = param_5;
  FUN_100002f94(&DAT_100553600,&DAT_100426650);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(SVar7.unknown + 0x24));
  *puVar1 = (char)_all.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar9;
  *(double *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  SVar7 = SwiftUI::Edge::Set::get_horizontal(SVar7);
  uVar9 = 0x4010000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar7.unknown);
  puVar3 = &DAT_1005535f0;
  FUN_100002f94(&DAT_1005535f0,&DAT_100426648);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(puVar3 + 0x24));
  *puVar1 = (char)SVar7.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar9;
  *(double *)(puVar1 + 0x10) = dVar8;
  *(undefined8 *)(puVar1 + 0x18) = uVar10;
  *(undefined8 *)(puVar1 + 0x20) = uVar11;
  puVar1[0x28] = 0;
  puVar3 = &DAT_1005535d8;
  FUN_100002f94(&DAT_1005535d8,&DAT_100426640);
  *(undefined1 *)((long)param_1 + (long)*(int *)(puVar3 + 0x24)) = 0;
  return;
}

