// rea decompile_all
// name: FUN_100013400
// address: 0x100013400
// body: available
// range: 0x100013400-0x100013943 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100013814 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100013400(long *param_1,double param_2,double param_3,long param_4,char *param_5,
                  long param_6)

{
  undefined8 uVar1;
  char *pcVar2;
  long lVar3;
  OpacityTransition OVar4;
  OpacityTransition OVar5;
  char *pcVar6;
  void *pvVar7;
  StateObject SVar8;
  undefined *puVar9;
  undefined8 uVar10;
  AnyTransition AVar11;
  Color CVar12;
  Color CVar13;
  Color CVar14;
  UnitPoint UVar15;
  Gradient gradient;
  undefined *puVar16;
  UnitPoint startPoint;
  UnitPoint endPoint;
  long extraout_x8;
  long extraout_x12;
  long lVar17;
  undefined1 *puVar18;
  long lVar19;
  String SVar20;
  String SVar21;
  undefined1 auStack_230 [8];
  undefined8 local_228;
  undefined *local_220;
  char *local_218;
  char *local_210;
  long local_208;
  long *local_200;
  char *local_1f8;
  long lStack_1f0;
  char *local_1e8;
  char *pcStack_1e0;
  char *local_1d8;
  undefined *puStack_1d0;
  undefined8 local_1c8;
  char *pcStack_1c0;
  long local_1b8;
  undefined *puStack_1b0;
  char *local_1a0;
  char *pcStack_198;
  char *local_190;
  undefined *puStack_188;
  long local_180;
  char *pcStack_178;
  long local_170;
  undefined *puStack_168;
  undefined1 local_160;
  char *local_150;
  char *pcStack_148;
  char *pcStack_140;
  undefined *puStack_138;
  long local_130;
  char *pcStack_128;
  long lStack_120;
  undefined *puStack_118;
  undefined1 local_110;
  char *local_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long local_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined1 local_c0;
  char *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  local_1f8 = param_5;
  lStack_1f0 = param_6;
  OVar4 = SwiftUI::OpacityTransition::typeMetadataAccessor();
  lVar19 = *(long *)(OVar4.unknown + -8);
  OVar5 = OVar4;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar19 + 0x40));
  puVar18 = auStack_230 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = (long)puVar18 - extraout_x12;
  FUN_100009f74();
  if (param_5 != (char *)0x0) {
    pcVar6 = OVar5.unknown;
    FUN_10000c7c4();
    if (((ulong)pcVar6 & 1) != 0) {
      SVar8.unknown = *(undefined **)(param_4 + 0x48);
      pvVar7 = (void *)0x0;
      local_210 = OVar5.unknown;
      local_208 = lVar19;
      local_200 = param_1;
      FUN_10016ed68();
      FUN_1000036d0(&DAT_10054aba0,FUN_10016ed68,&TargetProtocolConformanceDescriptor_1004295e8);
      _swift_bridgeObjectRetain(param_5);
      SwiftUI::StateObject::get_wrappedValue(SVar8);
      puVar16 = &DAT_10041ca08;
      _swift_getKeyPath(&DAT_10041ca08);
      puVar9 = &DAT_10041ca30;
      _swift_getKeyPath(&DAT_10041ca30);
      Combine::Published::_get_subscript(&local_100,SVar8.unknown,puVar16,puVar9);
      _swift_release(puVar16);
      _swift_release(puVar9);
      _swift_release(SVar8.unknown);
      local_218 = local_100;
      if (DAT_1005564c0 != -1) {
        _swift_once(&DAT_1005564c0,FUN_10017806c);
      }
      uVar1 = DAT_100577cc0;
      uVar10 = 0;
      FUN_1001a81c0();
      pcVar6 = &DAT_10054aa50;
      FUN_1000036d0(&DAT_10054aa50,FUN_1001a81c0,&TargetProtocolConformanceDescriptor_100429ab0);
      _swift_retain(uVar1);
      local_220 = (undefined *)SwiftUI::ObservedObject::init();
      pcVar2 = local_210;
      local_100 = local_1f8;
      lStack_f8 = lStack_1f0;
      SVar20.bridgeObject = param_5;
      SVar20.str = local_210;
      SVar21.bridgeObject = pvVar7;
      SVar21.str = pcVar6;
      local_228 = uVar10;
      Swift::String::append(SVar20,SVar21);
      _swift_bridgeObjectRelease(param_5);
      lVar3 = lStack_f8;
      pcVar6 = local_100;
      SwiftUI::OpacityTransition::init();
      lVar19 = local_208;
      (**(code **)(local_208 + 0x10))(puVar18,lVar17,OVar4.unknown);
      puVar16 = &DAT_10054ae80;
      FUN_1000036d0(&DAT_10054ae80,PTR_typeMetadataAccessor_1005225d8,
                    PTR_SwiftUI__SwiftUI__OpacityTransition_>SwiftUI__Transition_1005225c8);
      AVar11 = SwiftUI::AnyTransition::_init(puVar16,OVar4.unknown,puVar16);
      (**(code **)(lVar19 + 8))(lVar17,OVar4.unknown);
      local_1e8 = pcVar2;
      local_1d8 = local_218;
      puStack_1d0 = local_220;
      local_1c8 = local_228;
      pcStack_1c0 = pcVar6;
      local_1b8 = lVar3;
      local_1a0 = pcVar2;
      local_190 = local_218;
      puStack_188 = local_220;
      local_180 = local_228;
      pcStack_178 = pcVar6;
      local_170 = lVar3;
      pcStack_1e0 = param_5;
      puStack_1b0 = AVar11.unknown;
      pcStack_198 = param_5;
      puStack_168 = AVar11.unknown;
      FUN_1000087e4(&local_1e8,&local_100,&DAT_10054b680,&DAT_10041c9f0);
      FUN_10002a29c(&local_1a0,&DAT_10054b680,&DAT_10041c9f0);
      pcStack_148 = pcStack_1e0;
      local_150 = local_1e8;
      puStack_138 = puStack_1d0;
      pcStack_140 = local_1d8;
      pcStack_128 = pcStack_1c0;
      local_130 = local_1c8;
      puStack_118 = puStack_1b0;
      lStack_120 = local_1b8;
      local_110 = 0;
      FUN_100002f94(&DAT_10054b680,&DAT_10041c9f0);
      FUN_100002f94(&DAT_10054b688,&DAT_10041c9f8);
      FUN_10002ab44();
      FUN_10002abfc();
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)&local_150);
      param_1 = local_200;
      goto LAB_1000138a0;
    }
    _swift_bridgeObjectRelease(param_5);
  }
  CVar12.unknown = &DAT_10054af98;
  FUN_100002f94(&DAT_10054af98,&DAT_10041c1a0);
  startPoint.unknown = (undefined *)0x30;
  endPoint.unknown = (undefined *)0x7;
  _swift_allocObject();
  *(undefined8 *)(CVar12.unknown + 0x18) = 4;
  *(undefined8 *)(CVar12.unknown + 0x10) = 2;
  CVar13 = SwiftUI::Color::get_black(CVar12);
  CVar14 = SwiftUI::Color::opacity(param_2,CVar13);
  _swift_release();
  *(undefined **)(CVar12.unknown + 0x20) = CVar14.unknown;
  UVar15.unknown = (undefined *)SwiftUI::Color::get_black(CVar13);
  CVar14 = SwiftUI::Color::opacity(param_3,(Color)UVar15.unknown);
  _swift_release();
  *(undefined **)(CVar12.unknown + 0x28) = CVar14.unknown;
  UVar15 = SwiftUI::UnitPoint::get_top(UVar15);
  SwiftUI::UnitPoint::get_bottom(UVar15);
  gradient = SwiftUI::Gradient::init();
  SwiftUI::LinearGradient::init(gradient,startPoint,endPoint);
  SwiftUI::OpacityTransition::init();
  (**(code **)(lVar19 + 0x10))(puVar18,lVar17,OVar4.unknown);
  puVar16 = &DAT_10054ae80;
  FUN_1000036d0(&DAT_10054ae80,PTR_typeMetadataAccessor_1005225d8,
                PTR_SwiftUI__SwiftUI__OpacityTransition_>SwiftUI__Transition_1005225c8);
  AVar11 = SwiftUI::AnyTransition::_init(puVar16,OVar4.unknown,puVar16);
  (**(code **)(lVar19 + 8))(lVar17,OVar4.unknown);
  local_130 = uStack_98;
  puStack_138 = (undefined *)uStack_a0;
  pcStack_140 = (char *)uStack_a8;
  pcStack_148 = (char *)local_b0;
  local_150 = local_b8;
  local_110 = 1;
  pcStack_128 = (char *)AVar11;
  FUN_100002f94(&DAT_10054b680,&DAT_10041c9f0);
  FUN_100002f94(&DAT_10054b688,&DAT_10041c9f8);
  FUN_10002ab44();
  FUN_10002abfc();
  (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)&local_150);
LAB_1000138a0:
  pcStack_178 = (char *)lStack_d8;
  local_180 = local_e0;
  puStack_168 = (undefined *)lStack_c8;
  local_170 = lStack_d0;
  local_160 = local_c0;
  pcStack_198 = (char *)lStack_f8;
  local_1a0 = local_100;
  puStack_188 = (undefined *)lStack_e8;
  local_190 = (char *)lStack_f0;
  param_1[5] = lStack_d8;
  param_1[4] = local_e0;
  param_1[7] = lStack_c8;
  param_1[6] = lStack_d0;
  *(undefined1 *)(param_1 + 8) = local_c0;
  param_1[1] = lStack_f8;
  *param_1 = (long)local_100;
  param_1[3] = lStack_e8;
  param_1[2] = lStack_f0;
  pcStack_128 = (char *)lStack_d8;
  local_130 = local_e0;
  puStack_118 = (undefined *)lStack_c8;
  lStack_120 = lStack_d0;
  pcStack_148 = (char *)lStack_f8;
  local_150 = local_100;
  puStack_138 = (undefined *)lStack_e8;
  pcStack_140 = (char *)lStack_f0;
  local_110 = local_c0;
  FUN_1000087e4(&local_1a0,&local_1e8,&DAT_10054b628,&DAT_10041c9c0);
  FUN_10002a29c(&local_150,&DAT_10054b628,&DAT_10041c9c0);
  return;
}

