// rea decompile_all
// name: FUN_10037a7cc
// address: 0x10037a7cc
// body: available
// range: 0x10037a7cc-0x10037acaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10037a7cc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  HorizontalAlignment HVar7;
  undefined *puVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 auStack_230 [2];
  undefined *local_220;
  long local_218;
  undefined *local_210 [14];
  undefined7 uStack_1a0;
  undefined1 local_199;
  undefined7 uStack_198;
  undefined1 uStack_191;
  undefined7 uStack_190;
  undefined1 local_189;
  undefined7 uStack_188;
  undefined1 uStack_181;
  undefined7 uStack_180;
  undefined1 local_179;
  undefined7 uStack_178;
  undefined1 uStack_171;
  undefined7 uStack_170;
  undefined1 local_169;
  undefined7 uStack_168;
  undefined1 uStack_161;
  undefined7 uStack_160;
  undefined1 local_158 [64];
  undefined *local_118;
  undefined8 uStack_110;
  undefined1 local_108;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  undefined1 uStack_f8;
  undefined7 local_f7;
  undefined1 uStack_f0;
  undefined7 uStack_ef;
  undefined1 uStack_e8;
  undefined7 local_e7;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined1 uStack_d8;
  undefined7 local_d7;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined *local_c0;
  undefined *local_b8;
  undefined1 local_b0;
  undefined7 local_af;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined8 local_9f;
  undefined8 uStack_97;
  undefined8 local_8f;
  undefined8 uStack_87;
  undefined8 local_7f;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  
  lVar5 = 0;
  local_210[2] = (undefined *)param_1;
  FUN_100387a1c();
  lVar12 = *(long *)(lVar5 + -8);
  lVar5 = *(long *)(lVar12 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = (long)&local_220 - (lVar5 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_10055e830;
  FUN_100002f94(&DAT_10055e830,&DAT_100434050);
  local_210[0] = puVar6;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar16 = (undefined8 *)(lVar17 - extraout_x8);
  puVar6 = &DAT_10055e838;
  FUN_100002f94(&DAT_10055e838,&DAT_100434058);
  local_218 = *(long *)(puVar6 + -8);
  local_210[1] = puVar6;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_218 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar15 = (long)puVar16 - extraout_x8_00;
  puVar6 = &DAT_10055e840;
  FUN_100002f94(&DAT_10055e840,&DAT_100434060);
  HVar7.unknown = puVar6;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar14 = (undefined8 *)(lVar15 - extraout_x8_01);
  FUN_10037a598();
  lVar13 = *(long *)(HVar7.unknown + 0x10);
  _swift_bridgeObjectRelease();
  if (lVar13 == 0) {
    HVar7 = SwiftUI::HorizontalAlignment::get_leading(HVar7);
    FUN_10037acb0(local_158);
    uStack_181 = (undefined1)local_158._24_8_;
    uStack_180 = SUB87(local_158._24_8_,1);
    local_189 = (undefined1)local_158._16_8_;
    uStack_188 = SUB87(local_158._16_8_,1);
    uStack_191 = (undefined1)local_158._8_8_;
    uStack_190 = SUB87(local_158._8_8_,1);
    local_199 = (undefined1)local_158._0_8_;
    uStack_198 = SUB87(local_158._0_8_,1);
    uStack_171 = (undefined1)local_158._40_8_;
    uStack_170 = SUB87(local_158._40_8_,1);
    local_179 = (undefined1)local_158._32_8_;
    uStack_178 = SUB87(local_158._32_8_,1);
    uStack_161 = (undefined1)local_158._56_8_;
    uStack_160 = SUB87(local_158._56_8_,1);
    local_169 = (undefined1)local_158._48_8_;
    uStack_168 = SUB87(local_158._48_8_,1);
    uStack_ef = uStack_188;
    uStack_e8 = uStack_181;
    local_f7 = uStack_190;
    uStack_f0 = local_189;
    uStack_97 = CONCAT17(uStack_181,uStack_188);
    local_9f = CONCAT17(local_189,uStack_190);
    uStack_87 = CONCAT17(uStack_171,uStack_178);
    local_8f = CONCAT17(local_179,uStack_180);
    uStack_df = uStack_178;
    uStack_d8 = uStack_171;
    local_e7 = uStack_180;
    uStack_e0 = local_179;
    uStack_cf = uStack_168;
    local_d7 = uStack_170;
    uStack_d0 = local_169;
    uStack_ff = uStack_198;
    uStack_f8 = uStack_191;
    uStack_107 = uStack_1a0;
    uStack_100 = local_199;
    local_7f = CONCAT17(local_169,uStack_170);
    uStack_77 = uStack_168;
    uStack_110 = 0x4018000000000000;
    local_108 = 0;
    local_b8 = (undefined *)0x4018000000000000;
    local_b0 = 0;
    uStack_a7 = uStack_198;
    uStack_a0 = uStack_191;
    uStack_a8 = local_199;
    local_118 = HVar7.unknown;
    uStack_c8 = uStack_161;
    uStack_c7 = uStack_160;
    local_c0 = HVar7.unknown;
    uStack_70 = uStack_161;
    uStack_6f = uStack_160;
    FUN_1000087e4(&local_118,local_210 + 3,&DAT_10054e2b8,&DAT_10041f1e0);
    FUN_10002a29c(&local_c0,&DAT_10054e2b8,&DAT_10041f1e0);
    uVar1 = CONCAT71(local_f7,uStack_f8);
    uVar3 = CONCAT71(uStack_df,uStack_e0);
    uVar2 = CONCAT71(local_e7,uStack_e8);
    puVar14[5] = CONCAT71(uStack_ef,uStack_f0);
    puVar14[4] = uVar1;
    puVar14[7] = uVar3;
    puVar14[6] = uVar2;
    uVar1 = CONCAT71(local_d7,uStack_d8);
    puVar14[9] = CONCAT71(uStack_cf,uStack_d0);
    puVar14[8] = uVar1;
    puVar14[10] = CONCAT71(uStack_c7,uStack_c8);
    puVar9 = local_118;
    uVar2 = CONCAT71(uStack_ff,uStack_100);
    uVar1 = CONCAT71(uStack_107,local_108);
    puVar14[1] = uStack_110;
    *puVar14 = puVar9;
    puVar14[3] = uVar2;
    puVar14[2] = uVar1;
    _swift_storeEnumTagMultiPayload(puVar14,puVar6,0);
    FUN_100002f94(&DAT_10054e2b8,&DAT_10041f1e0);
    puVar9 = PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_1005234c0;
    FUN_1000087a0(&DAT_1005505f0,&DAT_10054e2b8,&DAT_10041f1e0,
                  PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_1005234c0);
    puVar6 = &DAT_10055e850;
    FUN_1000087a0(&DAT_10055e850,&DAT_10055e830,&DAT_100434050,puVar9);
    puVar9 = puVar6;
    FUN_10038fe0c();
    local_210[3] = local_210[0];
    local_210[4] = PTR___type_metadata_for_Swift_String_100523a98;
    local_210[5] = puVar6;
    local_210[6] = puVar9;
    _swift_getOpaqueTypeConformance2
              (local_210 + 3,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_dropDestination<A_where_A1:_CoreTransferable_Transferable>(for:_A1_Type,action:_([A1],__C_CGPoint)__>_Swift_Bool,isTargeted:_(Swift_Bool)__>______>_some>>_100522f90
               ,1);
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar14);
  }
  else {
    HVar7 = SwiftUI::HorizontalAlignment::get_center(HVar7);
    *puVar16 = HVar7.unknown;
    puVar16[1] = 0x4000000000000000;
    *(undefined1 *)(puVar16 + 2) = 0;
    puVar9 = &DAT_10055e848;
    FUN_100002f94(&DAT_10055e848,&DAT_100434068);
    FUN_10037b050((long)puVar16 + (long)*(int *)(puVar9 + 0x2c));
    FUN_100029504();
    uVar10 = (ulong)*(byte *)(lVar12 + 0x50);
    uVar11 = uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff);
    puVar9 = &DAT_10053c370;
    _swift_allocObject(&DAT_10053c370,uVar11 + lVar5,uVar10 | 7);
    FUN_100007e64(lVar17,puVar9 + uVar11,FUN_100387a1c);
    puVar8 = &DAT_10055e850;
    FUN_1000087a0(&DAT_10055e850,&DAT_10055e830,&DAT_100434050,
                  PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_1005234c0);
    local_220 = puVar8;
    FUN_10038fe0c();
    puVar14[-2] = puVar8;
    puVar4 = local_210[0];
    (extension_SwiftUI)::SwiftUI::View::_dropDestination();
    _swift_release(puVar9);
    FUN_10002a29c(puVar16,&DAT_10055e830,&DAT_100434050);
    puVar9 = local_210[1];
    lVar5 = local_218;
    (**(code **)(local_218 + 0x10))(puVar14,lVar15,local_210[1]);
    _swift_storeEnumTagMultiPayload(puVar14,puVar6,1);
    FUN_100002f94(&DAT_10054e2b8,&DAT_10041f1e0);
    FUN_1000087a0(&DAT_1005505f0,&DAT_10054e2b8,&DAT_10041f1e0,
                  PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_1005234c0);
    local_c0 = puVar4;
    local_b8 = PTR___type_metadata_for_Swift_String_100523a98;
    local_b0 = SUB81(local_220,0);
    local_af = (undefined7)((ulong)local_220 >> 8);
    uStack_a8 = SUB81(puVar8,0);
    uStack_a7 = (undefined7)((ulong)puVar8 >> 8);
    _swift_getOpaqueTypeConformance2
              (&local_c0,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_dropDestination<A_where_A1:_CoreTransferable_Transferable>(for:_A1_Type,action:_([A1],__C_CGPoint)__>_Swift_Bool,isTargeted:_(Swift_Bool)__>______>_some>>_100522f90
               ,1);
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar14);
    (**(code **)(lVar5 + 8))(lVar15,puVar9);
  }
  return;
}

