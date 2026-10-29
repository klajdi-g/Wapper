// rea decompile_all
// name: FUN_100302644
// address: 0x100302644
// body: available
// range: 0x100302644-0x100302a03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010030275c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100302644(long param_1,long param_2)

{
  ulong *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  URL UVar11;
  undefined *puVar12;
  Color CVar13;
  Color CVar14;
  Color CVar15;
  UnitPoint UVar16;
  Gradient gradient;
  LinearGradient LVar17;
  Set SVar18;
  Binding BVar19;
  EnvironmentObject<undefined> EVar20;
  UnitPoint startPoint;
  UnitPoint endPoint;
  long extraout_x8;
  ulong uVar21;
  long extraout_x12;
  long lVar22;
  long lVar23;
  ulong local_100 [4];
  undefined1 local_e0;
  undefined7 uStack_df;
  ulong local_d8 [2];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  ulong local_b0;
  ulong local_a8;
  ulong uStack_a0;
  ulong local_98;
  ulong uStack_90;
  
  puVar9 = &DAT_10055b910;
  local_100[1] = param_1;
  FUN_100002f94(&DAT_10055b910,&DAT_100430460);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar9 + -8) + 0x40));
  uVar21 = (long)local_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar22 = uVar21 - extraout_x12;
  lVar10 = 0;
  FUN_100301d0c();
  iVar3 = *(int *)(lVar10 + 0x18);
  UVar11 = Foundation::URL::typeMetadataAccessor();
  lVar23 = *(long *)(UVar11.unknown + -8);
  (**(code **)(lVar23 + 0x10))(lVar22,param_2 + iVar3,UVar11.unknown);
  (**(code **)(lVar23 + 0x38))(lVar22,0,1,UVar11.unknown);
  lVar23 = 0;
  FUN_10030a830();
  iVar3 = *(int *)(lVar23 + 0x14);
  local_b0 = 0;
  puVar12 = &DAT_10054bd30;
  FUN_100002f94(&DAT_10054bd30,&DAT_10041d460);
  SwiftUI::State::init(lVar22 + iVar3,puVar12,puVar12);
  puVar5 = PTR___type_metadata_for_Swift_Bool_100523b70;
  local_b0 = local_b0 & 0xffffffffffffff00;
  SwiftUI::State::init
            (lVar22 + *(int *)(lVar23 + 0x18),puVar12,PTR___type_metadata_for_Swift_Bool_100523b70);
  CVar13.unknown = &DAT_10054af98;
  FUN_100002f94(&DAT_10054af98,&DAT_10041c1a0);
  startPoint.unknown = (undefined *)0x30;
  endPoint.unknown = (undefined *)0x7;
  _swift_allocObject();
  *(undefined8 *)(CVar13.unknown + 0x18) = 4;
  *(undefined8 *)(CVar13.unknown + 0x10) = 2;
  CVar14 = SwiftUI::Color::get_black(CVar13);
  CVar15 = SwiftUI::Color::opacity(0.25,CVar14);
  _swift_release();
  *(undefined **)(CVar13.unknown + 0x20) = CVar15.unknown;
  UVar16.unknown = (undefined *)SwiftUI::Color::get_black(CVar14);
  CVar15 = SwiftUI::Color::opacity(0.75,(Color)UVar16.unknown);
  _swift_release();
  *(undefined **)(CVar13.unknown + 0x28) = CVar15.unknown;
  UVar16 = SwiftUI::UnitPoint::get_top(UVar16);
  SwiftUI::UnitPoint::get_bottom(UVar16);
  gradient = SwiftUI::Gradient::init();
  LVar17 = SwiftUI::LinearGradient::init(gradient,startPoint,endPoint);
  uVar6 = local_b0;
  SVar18 = SwiftUI::Edge::Set::get_all(LVar17.unknown);
  puVar1 = (ulong *)(lVar22 + *(int *)(puVar9 + 0x24));
  *puVar1 = uVar6;
  puVar1[4] = uStack_90;
  puVar1[3] = local_98;
  puVar1[2] = uStack_a0;
  puVar1[1] = local_a8;
  *(char *)(puVar1 + 5) = (char)SVar18.unknown;
  puVar2 = (undefined8 *)(param_2 + *(int *)(lVar10 + 0x20));
  local_c8 = *puVar2;
  uStack_b8 = puVar2[2];
  local_c0 = puVar2[1];
  BVar19.unknown = &DAT_10055b918;
  FUN_100002f94(&DAT_10055b918,&DAT_100430470);
  SwiftUI::Binding::get_projectedValue(BVar19);
  uVar4 = CONCAT71(uStack_df,local_e0);
  FUN_10016ed68(0);
  puVar9 = &DAT_10054aba0;
  FUN_1000036d0(&DAT_10054aba0,FUN_10016ed68,&TargetProtocolConformanceDescriptor_1004295e8);
  local_100[3] = local_d8[1];
  local_100[2] = local_d8[0];
  EVar20 = SwiftUI::EnvironmentObject::init();
  local_e0 = 0;
  SwiftUI::State::init(&local_c8,EVar20.unknown,puVar5);
  uVar8 = local_c0;
  uVar7 = (undefined1)local_c8;
  local_100[0] = uVar21;
  FUN_1000087e4(lVar22,uVar21,&DAT_10055b910,&DAT_100430460);
  uVar6 = local_100[1];
  FUN_1000087e4(uVar21,local_100[1],&DAT_10055b910,&DAT_100430460);
  puVar12 = &DAT_10055b920;
  FUN_100002f94(&DAT_10055b920,&DAT_100430478);
  puVar2 = (undefined8 *)(uVar6 + (long)*(int *)(puVar12 + 0x30));
  *puVar2 = EVar20.unknown;
  puVar2[1] = puVar9;
  puVar2[2] = uVar4;
  puVar2[4] = local_100[3];
  puVar2[3] = local_100[2];
  *(undefined1 *)(puVar2 + 5) = uVar7;
  puVar2[6] = uVar8;
  _swift_retain(uVar8);
  _swift_retain(EVar20.unknown);
  _swift_retain(uVar4);
  uVar6 = local_100[2];
  _swift_retain(local_100[2]);
  _swift_bridgeObjectRetain(local_d8[1]);
  FUN_10002a29c(lVar22,&DAT_10055b910,&DAT_100430460);
  _swift_release(uVar8);
  _swift_bridgeObjectRelease(local_d8[1]);
  _swift_release(uVar6);
  _swift_release(uVar4);
  _swift_release(EVar20.unknown);
  FUN_10002a29c(local_100[0],&DAT_10055b910,&DAT_100430460);
  return;
}

