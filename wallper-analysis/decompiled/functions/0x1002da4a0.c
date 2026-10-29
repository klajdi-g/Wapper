// rea decompile_all
// name: FUN_1002da4a0
// address: 0x1002da4a0
// body: available
// range: 0x1002da4a0-0x1002da827 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002da4a0(undefined8 *param_1,undefined *param_2)

{
  long lVar1;
  VerticalAlignment VVar2;
  LocalizedStringKey LVar3;
  Text TVar4;
  HierarchicalShapeStyle HVar5;
  Text TVar6;
  undefined8 uVar7;
  Text TVar8;
  uint uVar9;
  StringInterpolation SVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  ulong uVar14;
  long extraout_x8;
  String SVar15;
  String stringLiteral;
  undefined8 uStack_2d0;
  undefined2 auStack_2c8 [4];
  ulong local_2c0;
  undefined1 auStack_2b8 [88];
  undefined7 uStack_260;
  undefined1 local_259;
  undefined7 uStack_258;
  undefined1 uStack_251;
  undefined7 uStack_250;
  undefined1 local_249;
  undefined7 uStack_248;
  undefined1 uStack_241;
  undefined7 uStack_240;
  undefined1 local_239;
  undefined7 uStack_238;
  undefined1 uStack_231;
  undefined7 uStack_230;
  undefined1 local_229;
  undefined7 uStack_228;
  undefined1 uStack_221;
  undefined7 uStack_220;
  undefined1 uStack_219;
  undefined *local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined *local_1a0;
  undefined8 uStack_198;
  undefined1 uStack_190;
  undefined7 uStack_18f;
  undefined1 uStack_188;
  undefined7 uStack_187;
  undefined1 local_180;
  undefined7 uStack_17f;
  undefined1 uStack_178;
  undefined7 uStack_177;
  undefined1 uStack_170;
  undefined7 uStack_16f;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined *local_160;
  undefined8 uStack_158;
  undefined *local_120;
  undefined8 uStack_118;
  undefined1 local_110;
  undefined7 uStack_10f;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined1 uStack_f0;
  undefined7 local_ef;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined7 local_df;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined *local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined1 local_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined1 local_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  
  VVar2.unknown =
       (undefined *)SwiftUI::LocalizedStringKey::StringInterpolation::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(VVar2.unknown + -8) + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  VVar2 = SwiftUI::VerticalAlignment::get_center(VVar2);
  FUN_1002da828(&local_c8,param_2);
  uStack_188 = uStack_b0;
  uStack_187 = uStack_af;
  uStack_190 = local_b8;
  uStack_18f = uStack_b7;
  uStack_198 = uStack_c0;
  local_1a0 = local_c8;
  uStack_178 = uStack_a0;
  uStack_177 = uStack_9f;
  local_180 = local_a8;
  uStack_17f = uStack_a7;
  uStack_168 = uStack_90;
  uStack_167 = uStack_8f;
  uStack_170 = local_98;
  uStack_16f = uStack_97;
  uStack_158 = uStack_c0;
  local_160 = local_c8;
  FUN_1000087e4(&local_1a0,&local_120,&DAT_1005528e8,&DAT_100424e38);
  FUN_10002a29c(&local_160,&DAT_1005528e8,&DAT_100424e38);
  uStack_251 = (undefined1)uStack_198;
  uStack_250 = (undefined7)((ulong)uStack_198 >> 8);
  local_259 = SUB81(local_1a0,0);
  uStack_258 = (undefined7)((ulong)local_1a0 >> 8);
  uStack_107 = uStack_258;
  uStack_100 = uStack_251;
  uStack_10f = uStack_260;
  uStack_108 = local_259;
  uStack_cf = uStack_167;
  uStack_d7 = uStack_16f;
  uStack_d0 = uStack_168;
  local_df = uStack_177;
  uStack_d8 = uStack_170;
  uStack_e7 = uStack_17f;
  uStack_e0 = uStack_178;
  local_ef = uStack_187;
  uStack_e8 = local_180;
  uStack_f7 = uStack_18f;
  uStack_f0 = uStack_188;
  uStack_ff = uStack_250;
  uStack_f8 = uStack_190;
  uStack_118 = 0x4020000000000000;
  local_110 = 0;
  uStack_c0 = 0x4020000000000000;
  local_b8 = 0;
  uStack_af = uStack_258;
  local_a8 = uStack_251;
  uStack_b0 = local_259;
  uStack_a7 = uStack_250;
  SVar10.unknown = &DAT_100424e40;
  puVar13 = SVar10.unknown;
  local_120 = VVar2.unknown;
  local_c8 = VVar2.unknown;
  FUN_1000087e4(&local_120,&local_200,&DAT_1005528f0,&DAT_100424e40);
  FUN_10002a29c(&local_c8,&DAT_1005528f0);
  if ((long)param_2 < 1) {
    stringLiteral.bridgeObject = (void *)0xe700000000000000;
    stringLiteral.str = (char *)0x64657269707845;
    uVar7 = 0xe700000000000000;
    LVar3 = SwiftUI::LocalizedStringKey::init(stringLiteral);
    uVar9 = (uint)SVar10.unknown;
  }
  else {
    SwiftUI::LocalizedStringKey::StringInterpolation::init(10,1);
    SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral
              ((String)(ZEXT816(0xe000000000000000) << 0x40),SVar10);
    SVar10.unknown = (undefined *)0xe400000000000000;
    puVar13 = PTR___type_metadata_for_Swift_Int_100523bd8;
    local_200 = param_2;
    SwiftUI::LocalizedStringKey::StringInterpolation::_appendInterpolation
              (&local_200,0x646c6c25,0xe400000000000000,PTR___type_metadata_for_Swift_Int_100523bd8,
               PTR___protocol_witness_table_for_Swift_Int___SwiftUI__FormatSpecifiable_in_SwiftUI_100523800
              );
    uVar7 = 0xea00000000007466;
    SVar15.bridgeObject = (void *)0xea00000000007466;
    SVar15.str = (char *)0x656c207379616420;
    SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral(SVar15,SVar10);
    uVar9 = (uint)SVar10.unknown;
    LVar3 = SwiftUI::LocalizedStringKey::init((StringInterpolation)(auStack_2b8 + lVar1 + -8));
  }
  *(undefined2 *)((long)auStack_2c8 + lVar1) = 0x100;
  *(undefined8 *)((long)&uStack_2d0 + lVar1) = 0;
  uVar11 = (ulong)(uVar9 & 1);
  TVar4 = SwiftUI::Text::_init(LVar3);
  HVar5 = SwiftUI::HierarchicalShapeStyle::get_secondary(TVar4.unknown);
  local_200 = (undefined *)CONCAT44(local_200._4_4_,(int)HVar5.unknown);
  FUN_100025b4c();
  TVar8 = TVar4;
  uVar12 = uVar7;
  uVar14 = uVar11;
  TVar6 = SwiftUI::Text::_foregroundStyle();
  local_2c0 = uVar14;
  FUN_100025b34(TVar4.unknown,uVar7,uVar11);
  _swift_bridgeObjectRelease(puVar13);
  uVar14 = local_2c0;
  uStack_1e0 = CONCAT71(uStack_ff,uStack_100);
  uStack_238 = (undefined7)CONCAT71(uStack_f7,uStack_f8);
  uStack_231 = (undefined1)((uint7)uStack_f7 >> 0x30);
  uStack_240 = (undefined7)uStack_1e0;
  local_239 = (undefined1)((uint7)uStack_ff >> 0x30);
  uStack_228 = (undefined7)CONCAT71(uStack_e7,uStack_e8);
  uStack_221 = (undefined1)((uint7)uStack_e7 >> 0x30);
  uStack_230 = (undefined7)CONCAT71(local_ef,uStack_f0);
  local_229 = (undefined1)((uint7)local_ef >> 0x30);
  uStack_220 = (undefined7)CONCAT71(local_df,uStack_e0);
  uStack_219 = (undefined1)((uint7)local_df >> 0x30);
  uStack_1e8 = CONCAT71(uStack_107,uStack_108);
  local_1f0 = CONCAT71(uStack_10f,local_110);
  uStack_1f8 = uStack_118;
  local_200 = local_120;
  uStack_258 = (undefined7)uStack_118;
  uStack_251 = (undefined1)((ulong)uStack_118 >> 0x38);
  uStack_260 = SUB87(local_120,0);
  local_259 = (undefined1)((ulong)local_120 >> 0x38);
  uStack_248 = (undefined7)uStack_1e8;
  uStack_241 = (undefined1)((uint7)uStack_107 >> 0x30);
  uStack_250 = (undefined7)local_1f0;
  local_249 = (undefined1)((uint7)uStack_10f >> 0x30);
  param_1[1] = uStack_118;
  *param_1 = local_120;
  param_1[3] = CONCAT71(uStack_107,uStack_108);
  param_1[2] = CONCAT71(uStack_10f,local_110);
  param_1[7] = CONCAT71(uStack_e7,uStack_e8);
  param_1[6] = CONCAT71(local_ef,uStack_f0);
  param_1[9] = CONCAT71(uStack_d7,uStack_d8);
  param_1[8] = CONCAT71(local_df,uStack_e0);
  param_1[5] = CONCAT71(uStack_f7,uStack_f8);
  param_1[4] = CONCAT71(uStack_ff,uStack_100);
  param_1[10] = CONCAT71(uStack_cf,uStack_d0);
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 1;
  param_1[0xd] = TVar6.unknown;
  param_1[0xe] = TVar8.unknown;
  *(char *)(param_1 + 0xf) = (char)uVar12;
  param_1[0x10] = local_2c0;
  FUN_1000087e4(&local_200,auStack_2b8,&DAT_1005528f0,&DAT_100424e40);
  FUN_100007b14(TVar6.unknown,TVar8.unknown,uVar12);
  _swift_bridgeObjectRetain(uVar14);
  FUN_100025b34(TVar6.unknown,TVar8.unknown,uVar12);
  _swift_bridgeObjectRelease(uVar14);
  FUN_10002a29c(&uStack_260,&DAT_1005528f0,&DAT_100424e40);
  return;
}

