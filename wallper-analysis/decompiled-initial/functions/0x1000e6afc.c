// rea decompile_all
// name: FUN_1000e6afc
// address: 0x1000e6afc
// body: available
// range: 0x1000e6afc-0x1000e6cc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000e6be4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000e6afc(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  State SVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ObservedObject<undefined> OVar5;
  Set SVar6;
  long extraout_x8;
  long extraout_x12;
  long lVar7;
  code *pcVar8;
  long lVar9;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  puVar1 = &DAT_100551d18;
  FUN_100002f94(&DAT_100551d18,&DAT_100423c20);
  lVar9 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar9 + 0x40));
  lVar7 = (long)&local_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  uStack_78 = *(undefined8 *)(param_2 + 0x50);
  local_80 = *(undefined8 *)(param_2 + 0x48);
  SVar2.unknown = &DAT_100551cf8;
  FUN_100002f94(&DAT_100551cf8,&DAT_100423c08);
  SwiftUI::State::get_wrappedValue(SVar2);
  uVar3 = 0;
  FUN_1000f69cc();
  puVar4 = &DAT_100551d00;
  FUN_1000036d0(&DAT_100551d00,FUN_1000f69cc,&TargetProtocolConformanceDescriptor_100423a78);
  OVar5 = SwiftUI::ObservedObject::init(puVar4,uVar3,puVar4);
  SVar6 = SwiftUI::Axis::Set::get_vertical(OVar5.unknown);
  local_70 = param_2;
  FUN_100002f94(&DAT_100551d20,&DAT_100423c28);
  FUN_1000f8224();
  SwiftUI::ScrollView::_init(SVar6,true);
  pcVar8 = *(code **)(lVar9 + 0x10);
  (*pcVar8)(lVar7,lVar7 - extraout_x12,puVar1);
  *param_1 = OVar5.unknown;
  param_1[1] = uVar3;
  puVar4 = &DAT_100551d50;
  FUN_100002f94(&DAT_100551d50,&DAT_100423c40);
  (*pcVar8)((long)param_1 + (long)*(int *)(puVar4 + 0x30),lVar7,puVar1);
  pcVar8 = *(code **)(lVar9 + 8);
  _swift_retain(uVar3);
  (*pcVar8)(lVar7 - extraout_x12,puVar1);
  (*pcVar8)(lVar7,puVar1);
  _swift_release(uVar3);
  return;
}

