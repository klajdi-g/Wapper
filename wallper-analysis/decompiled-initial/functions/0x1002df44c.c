// rea decompile_all
// name: FUN_1002df44c
// address: 0x1002df44c
// body: available
// range: 0x1002df44c-0x1002df87b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002df5cc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1002df44c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5)

{
  ObservedObject OVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  Color CVar7;
  LocalizedStringKey LVar8;
  Wrapper WVar9;
  Wrapper dynamicMember;
  undefined8 uVar10;
  undefined8 uVar11;
  Binding<bool> isOn;
  uint uVar12;
  long extraout_x8;
  long extraout_x8_00;
  long lVar13;
  long extraout_x12;
  code *pcVar14;
  String stringLiteral;
  String stringLiteral_00;
  undefined8 uStack_1e0;
  undefined2 auStack_1d8 [4];
  undefined8 local_1d0;
  uint local_1c4;
  undefined *local_1c0;
  undefined8 uStack_1b8;
  long local_1b0;
  long local_1a8;
  undefined *local_1a0;
  undefined *local_198;
  long local_190;
  undefined *local_188;
  long local_180;
  long local_178;
  undefined1 auStack_170 [64];
  undefined *local_130;
  undefined8 uStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *local_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *local_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar6 = &DAT_10054b1e0;
  FUN_100002f94(&DAT_10054b1e0,&DAT_10041c400);
  local_190 = *(long *)(puVar6 + -8);
  local_198 = puVar6;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_190 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  CVar7.unknown = &DAT_10054b1e8;
  local_1b0 = (long)&local_1d0 - extraout_x8;
  FUN_100002f94(&DAT_10054b1e8,&DAT_10042e650);
  local_178 = *(long *)(CVar7.unknown + -8);
  local_188 = CVar7.unknown;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_178 + 0x40));
  lVar13 = ((long)&local_1d0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_1a8 = lVar13;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = lVar13 - extraout_x12;
  local_180 = lVar13;
  local_1a0 = (undefined *)SwiftUI::Color::get_indigo(CVar7);
  uVar10 = 0x80000001004e5010;
  stringLiteral.bridgeObject = (void *)0x80000001004e5010;
  stringLiteral.str = (char *)0xd000000000000022;
  LVar8 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  *(undefined2 *)(lVar13 + -8) = 0x100;
  *(undefined8 *)(lVar13 + -0x10) = 0;
  local_1c4 = param_4 & 1;
  local_1c0 = (undefined *)SwiftUI::Text::_init(LVar8);
  uVar11 = 0x80000001004e5040;
  stringLiteral_00.bridgeObject = (void *)0x80000001004e5040;
  stringLiteral_00.str = (char *)0xd000000000000062;
  local_1d0 = uVar10;
  uStack_1b8 = param_5;
  uVar12 = local_1c4;
  LVar8 = SwiftUI::LocalizedStringKey::init(stringLiteral_00);
  local_f0 = (undefined *)((ulong)local_f0 & 0xffffffffffffff00);
  SwiftUI::State::init(&local_90,LVar8.unknown,PTR___type_metadata_for_Swift_Bool_100523b70);
  local_f0 = (undefined *)0x0;
  puVar6 = &DAT_100552970;
  FUN_100002f94(&DAT_100552970,&DAT_10042f240);
  SwiftUI::State::init(&uStack_80,puVar6,puVar6);
  local_a0 = CONCAT71(local_a0._1_7_,(char)uVar12) & 0xffffffffffffff01;
  uStack_c8 = uStack_88;
  local_d0 = local_90;
  uStack_b8 = uStack_78;
  uStack_c0 = uStack_80;
  uStack_e0 = local_a0;
  isOn.unknown = (undefined *)0xe000000000000000;
  local_f0 = LVar8.unknown;
  uStack_e8 = uVar11;
  uStack_d8 = param_5;
  local_b0 = LVar8.unknown;
  uStack_a8 = uVar11;
  local_98 = param_5;
  LVar8 = SwiftUI::LocalizedStringKey::init((String)(ZEXT816(0xe000000000000000) << 0x40));
  OVar1.unknown = (undefined *)*param_2;
  FUN_1001a81c0(0);
  FUN_1000036d0(&DAT_10054aa50,FUN_1001a81c0,&TargetProtocolConformanceDescriptor_100429ab0);
  WVar9 = SwiftUI::ObservedObject::_get_projectedValue(OVar1);
  dynamicMember.unknown = &DAT_10042f280;
  _swift_getKeyPath();
  SwiftUI::ObservedObject::Wrapper::_get_subscript(dynamicMember);
  _swift_release(WVar9.unknown);
  _swift_release(dynamicMember.unknown);
  lVar13 = local_1b0;
  (extension_SwiftUI)::SwiftUI::Toggle::_init(LVar8,isOn);
  FUN_1000087a0(&DAT_10054b200,&DAT_10054b1e0,&DAT_10041c400,
                PTR_SwiftUI__SwiftUI__Toggle<undefined>_>SwiftUI__View_1005234a0);
  lVar5 = local_180;
  puVar6 = local_198;
  (extension_SwiftUI)::SwiftUI::View::_labelsHidden();
  (**(code **)(local_190 + 8))(lVar13,puVar6);
  puVar4 = local_188;
  lVar13 = local_1a8;
  uStack_128 = uStack_e8;
  local_130 = local_f0;
  uStack_118 = uStack_d8;
  uStack_120 = uStack_e0;
  uStack_108 = uStack_c8;
  local_110 = local_d0;
  uStack_f8 = uStack_b8;
  uStack_100 = uStack_c0;
  pcVar14 = *(code **)(local_178 + 0x10);
  (*pcVar14)(local_1a8,lVar5,local_188);
  puVar3 = local_1a0;
  uVar11 = uStack_1b8;
  puVar2 = local_1c0;
  uVar12 = local_1c4;
  uVar10 = local_1d0;
  *param_1 = 0x79616c70736964;
  param_1[1] = 0xe700000000000000;
  param_1[2] = 0x4036000000000000;
  param_1[3] = local_1a0;
  param_1[4] = local_1c0;
  param_1[5] = local_1d0;
  *(char *)(param_1 + 6) = (char)local_1c4;
  param_1[7] = uStack_1b8;
  uStack_a8 = uStack_e8;
  local_b0 = local_f0;
  local_98 = uStack_d8;
  local_a0 = uStack_e0;
  uStack_88 = uStack_c8;
  local_90 = local_d0;
  uStack_78 = uStack_b8;
  uStack_80 = uStack_c0;
  param_1[9] = uStack_e8;
  param_1[8] = local_f0;
  param_1[0xb] = uStack_d8;
  param_1[10] = uStack_e0;
  param_1[0xd] = uStack_c8;
  param_1[0xc] = local_d0;
  param_1[0xf] = uStack_b8;
  param_1[0xe] = uStack_c0;
  param_1[0x10] = 0x4020000000000000;
  *(undefined1 *)(param_1 + 0x11) = 0;
  puVar6 = &DAT_10055a8b8;
  FUN_100002f94(&DAT_10055a8b8,&DAT_10042f270);
  (*pcVar14)((long)param_1 + (long)*(int *)(puVar6 + 0x60),lVar13,puVar4);
  _swift_bridgeObjectRetain(0xe700000000000000);
  _swift_retain(puVar3);
  FUN_100007b14(puVar2,uVar10,uVar12);
  _swift_bridgeObjectRetain(uVar11);
  FUN_100100eac(&local_b0,auStack_170);
  pcVar14 = *(code **)(local_178 + 8);
  (*pcVar14)(local_180,puVar4);
  (*pcVar14)(lVar13,puVar4);
  FUN_1002cab64(&local_130);
  FUN_100025b34(puVar2,uVar10,uVar12);
  _swift_release(puVar3);
  _swift_bridgeObjectRelease(0xe700000000000000);
  _swift_bridgeObjectRelease(uVar11);
  return;
}

