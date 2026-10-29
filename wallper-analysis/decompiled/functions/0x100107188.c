// rea decompile_all
// name: FUN_100107188
// address: 0x100107188
// body: available
// range: 0x100107188-0x1001073ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100107188(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  AnyTransition AVar2;
  UnitPoint scale;
  CGFloat CVar3;
  AnyTransition AVar4;
  AnyTransition AVar5;
  UnitPoint UVar6;
  AnyTransition AVar7;
  AnyTransition AVar8;
  undefined1 auStack_1f8 [104];
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *local_60;
  
  lVar1 = DAT_1005539e8;
  UVar6.unknown = (undefined *)*param_2;
  AVar8.unknown = (undefined *)param_2[1];
  _swift_bridgeObjectRetain(AVar8.unknown);
  if (lVar1 != -1) {
    _swift_once(&DAT_1005539e8,FUN_1001237d4);
  }
  AVar7.unknown = DAT_100577c28;
  _swift_retain();
  FUN_10010b988(&local_190);
  AVar2 = SwiftUI::AnyTransition::get_opacity(AVar7);
  scale = SwiftUI::UnitPoint::get_center(AVar2.unknown);
  CVar3.unknown = (undefined *)SwiftUI::AnyTransition::scale(scale.unknown,UVar6,AVar8);
  AVar7 = AVar2;
  AVar4 = SwiftUI::AnyTransition::combined((AnyTransition)CVar3.unknown,AVar2);
  _swift_release(AVar2.unknown);
  _swift_release();
  AVar5 = SwiftUI::AnyTransition::offset(CVar3,AVar7.unknown,AVar8);
  AVar7 = AVar4;
  AVar2 = SwiftUI::AnyTransition::combined(AVar5,AVar4);
  _swift_release(AVar4.unknown);
  _swift_release();
  AVar4 = SwiftUI::AnyTransition::get_opacity(AVar5);
  UVar6 = SwiftUI::UnitPoint::get_center(AVar4.unknown);
  CVar3.unknown = (undefined *)SwiftUI::AnyTransition::scale(UVar6.unknown,AVar7.unknown,AVar8);
  AVar7 = AVar4;
  AVar5 = SwiftUI::AnyTransition::combined((AnyTransition)CVar3.unknown,AVar4);
  _swift_release(AVar4.unknown);
  _swift_release();
  AVar7 = SwiftUI::AnyTransition::offset(CVar3,AVar7.unknown,AVar8);
  AVar4 = SwiftUI::AnyTransition::combined(AVar7,AVar5);
  _swift_release(AVar5.unknown);
  _swift_release(AVar7.unknown);
  AVar8 = SwiftUI::AnyTransition::asymmetric(AVar2,AVar4,AVar8);
  _swift_release(AVar2.unknown);
  _swift_release(AVar4.unknown);
  uStack_108 = uStack_168;
  local_110 = local_170;
  uStack_f8 = uStack_158;
  uStack_100 = uStack_160;
  uStack_e8 = uStack_148;
  local_f0 = local_150;
  uStack_d8 = uStack_138;
  uStack_e0 = uStack_140;
  uStack_128 = uStack_188;
  local_130 = local_190;
  uStack_118 = uStack_178;
  uStack_120 = uStack_180;
  uStack_78 = uStack_148;
  local_80 = local_150;
  uStack_68 = uStack_138;
  uStack_70 = uStack_140;
  uStack_98 = uStack_168;
  local_a0 = local_170;
  uStack_88 = uStack_158;
  uStack_90 = uStack_160;
  uStack_b8 = uStack_188;
  local_c0 = local_190;
  uStack_a8 = uStack_178;
  uStack_b0 = uStack_180;
  local_d0 = AVar8.unknown;
  local_60 = AVar8.unknown;
  FUN_1000087e4(&local_130,auStack_1f8,&DAT_100552e08,&DAT_100425960);
  FUN_10002a29c(&local_c0,&DAT_100552e08,&DAT_100425960);
  param_1[9] = uStack_e8;
  param_1[8] = local_f0;
  param_1[0xb] = uStack_d8;
  param_1[10] = uStack_e0;
  param_1[0xc] = local_d0;
  param_1[1] = uStack_128;
  *param_1 = local_130;
  param_1[3] = uStack_118;
  param_1[2] = uStack_120;
  param_1[5] = uStack_108;
  param_1[4] = local_110;
  param_1[7] = uStack_f8;
  param_1[6] = uStack_100;
  return;
}

