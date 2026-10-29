// rea decompile_all
// name: FUN_1002c8758
// address: 0x1002c8758
// body: available
// range: 0x1002c8758-0x1002c8c07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002c8914 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1002c8758(undefined8 *param_1,undefined8 param_2,undefined8 param_3,MainActor *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  LocalizedStringKey LVar5;
  MainActor *this;
  MainActor *pMVar6;
  undefined8 *puVar7;
  MainActor *pMVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  uint uVar12;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar13;
  long extraout_x12;
  code *pcVar14;
  ulong uVar15;
  undefined1 *puVar16;
  long lVar17;
  String stringLiteral;
  String stringLiteral_00;
  undefined8 uStack_230;
  undefined2 auStack_228 [4];
  undefined1 auStack_220 [12];
  uint local_214;
  undefined8 local_210;
  Binding<bool> local_208;
  LocalizedStringKey LStack_200;
  undefined8 local_1f8;
  long local_1f0;
  undefined8 local_1e8;
  uint local_1dc;
  undefined8 local_1d8;
  undefined *puStack_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  MainActor *local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  long local_1a0;
  undefined *local_198;
  long local_190;
  long local_188;
  undefined *local_180;
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
  
  lVar4 = 0;
  local_1f8 = param_2;
  local_1e8 = param_5;
  local_1c0 = param_7;
  local_1b8 = param_4;
  local_1b0 = param_3;
  uStack_1a8 = param_6;
  FUN_100170d98();
  uVar12 = (uint)param_4;
  local_1f0 = *(long *)(lVar4 + -8);
  lVar17 = *(long *)(local_1f0 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar16 = auStack_220 + -(lVar17 + 0xfU & 0xfffffffffffffff0);
  puVar11 = &DAT_10054b1e0;
  FUN_100002f94(&DAT_10054b1e0,&DAT_10041c400);
  local_188 = *(long *)(puVar11 + -8);
  local_198 = puVar11;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_188 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar11 = &DAT_10054b1e8;
  FUN_100002f94(&DAT_10054b1e8,&DAT_10042e650);
  local_190 = *(long *)(puVar11 + -8);
  local_180 = puVar11;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_190 + 0x40));
  lVar4 = ((long)puVar16 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_1a0 = lVar4;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar4 = lVar4 - extraout_x12;
  uVar9 = 0x80000001004e40a0;
  stringLiteral.bridgeObject = (void *)0x80000001004e40a0;
  stringLiteral.str = (char *)0xd000000000000020;
  local_178 = lVar4;
  LVar5 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  *(undefined2 *)(lVar4 + -8) = 0x100;
  *(undefined8 *)(lVar4 + -0x10) = 0;
  local_1dc = uVar12 & 1;
  puStack_1d0 = (undefined *)SwiftUI::Text::_init(LVar5);
  uVar10 = 0x80000001004e40d0;
  stringLiteral_00.bridgeObject = (void *)0x80000001004e40d0;
  stringLiteral_00.str = (char *)0xd00000000000003c;
  local_1d8 = uVar9;
  local_1c8 = param_5;
  uVar12 = local_1dc;
  LVar5 = SwiftUI::LocalizedStringKey::init(stringLiteral_00);
  local_f0 = (undefined *)((ulong)local_f0 & 0xffffffffffffff00);
  uVar9 = param_5;
  local_214 = uVar12;
  SwiftUI::State::init(&local_90,LVar5.unknown,PTR___type_metadata_for_Swift_Bool_100523b70);
  local_f0 = (undefined *)0x0;
  puVar11 = &DAT_100552970;
  FUN_100002f94(&DAT_100552970,&DAT_10042f240);
  SwiftUI::State::init(&uStack_80,puVar11,puVar11);
  local_a0 = CONCAT71(local_a0._1_7_,(char)uVar12) & 0xffffffffffffff01;
  uStack_c8 = uStack_88;
  local_d0 = local_90;
  uStack_b8 = uStack_78;
  uStack_c0 = uStack_80;
  uStack_e0 = local_a0;
  puVar11 = (undefined *)0xe000000000000000;
  local_f0 = LVar5.unknown;
  uStack_e8 = uVar10;
  uStack_d8 = param_5;
  local_b0 = LVar5.unknown;
  uStack_a8 = uVar10;
  local_98 = param_5;
  LStack_200 = SwiftUI::LocalizedStringKey::init((String)(ZEXT816(0xe000000000000000) << 0x40));
  local_210 = uVar9;
  local_208.unknown = puVar11;
  FUN_100029504(local_1f8,puVar16,FUN_100170d98);
  this = Swift::MainActor::typeMetadataAccessor();
  puVar11 = PTR_typeMetadataAccessor_1005246d8;
  pMVar6 = Swift::MainActor::get_shared(this,this);
  puVar7 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar11,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  uVar13 = (ulong)*(byte *)(local_1f0 + 0x50);
  uVar15 = uVar13 + 0x20 & (uVar13 ^ 0xffffffffffffffff);
  puVar11 = &DAT_100538058;
  _swift_allocObject(&DAT_100538058,uVar15 + lVar17,uVar13 | 7);
  *(MainActor **)(puVar11 + 0x10) = pMVar6;
  *(undefined8 **)(puVar11 + 0x18) = puVar7;
  FUN_100007e64(puVar16,puVar11 + uVar15,FUN_100170d98);
  uVar9 = local_1e8;
  _swift_retain(local_1e8);
  pMVar6 = local_1b8;
  uVar10 = local_1c0;
  pMVar8 = local_1b8;
  _swift_retain();
  pMVar8 = Swift::MainActor::get_shared(this,pMVar8);
  puVar11 = &DAT_100538080;
  _swift_allocObject(&DAT_100538080,0x48,7);
  *(MainActor **)(puVar11 + 0x10) = pMVar8;
  *(undefined8 **)(puVar11 + 0x18) = puVar7;
  *(undefined8 *)(puVar11 + 0x20) = local_1b0;
  *(MainActor **)(puVar11 + 0x28) = pMVar6;
  *(undefined8 *)(puVar11 + 0x30) = uVar9;
  *(undefined8 *)(puVar11 + 0x38) = uStack_1a8;
  *(undefined8 *)(puVar11 + 0x40) = uVar10;
  SwiftUI::Binding::init();
  (extension_SwiftUI)::SwiftUI::Toggle::_init(LStack_200,local_208);
  FUN_1000087a0(&DAT_10054b200,&DAT_10054b1e0,&DAT_10041c400,
                PTR_SwiftUI__SwiftUI__Toggle<undefined>_>SwiftUI__View_1005234a0);
  lVar3 = local_178;
  puVar11 = local_198;
  (extension_SwiftUI)::SwiftUI::View::_labelsHidden();
  (**(code **)(local_188 + 8))((long)puVar16 - extraout_x8,puVar11);
  puVar2 = local_180;
  lVar17 = local_190;
  lVar4 = local_1a0;
  uStack_128 = uStack_e8;
  local_130 = local_f0;
  uStack_118 = uStack_d8;
  uStack_120 = uStack_e0;
  uStack_108 = uStack_c8;
  local_110 = local_d0;
  uStack_f8 = uStack_b8;
  uStack_100 = uStack_c0;
  pcVar14 = *(code **)(local_190 + 0x10);
  (*pcVar14)(local_1a0,lVar3,local_180);
  uVar10 = local_1c8;
  puVar1 = puStack_1d0;
  uVar9 = local_1d8;
  uVar12 = local_1dc;
  *param_1 = puStack_1d0;
  param_1[1] = local_1d8;
  *(char *)(param_1 + 2) = (char)local_1dc;
  param_1[3] = local_1c8;
  uStack_a8 = uStack_e8;
  local_b0 = local_f0;
  local_98 = uStack_d8;
  local_a0 = uStack_e0;
  uStack_88 = uStack_c8;
  local_90 = local_d0;
  uStack_78 = uStack_b8;
  uStack_80 = uStack_c0;
  param_1[9] = uStack_c8;
  param_1[8] = local_d0;
  param_1[0xb] = uStack_b8;
  param_1[10] = uStack_c0;
  param_1[5] = uStack_e8;
  param_1[4] = local_f0;
  param_1[7] = uStack_d8;
  param_1[6] = uStack_e0;
  param_1[0xc] = 0x4020000000000000;
  *(undefined1 *)(param_1 + 0xd) = 0;
  puVar11 = &DAT_10055a5a8;
  FUN_100002f94(&DAT_10055a5a8,&DAT_10042e660);
  (*pcVar14)((long)param_1 + (long)*(int *)(puVar11 + 0x50),lVar4,puVar2);
  FUN_100007b14(puVar1,uVar9,uVar12);
  _swift_bridgeObjectRetain(uVar10);
  FUN_100100eac(&local_b0,auStack_170);
  pcVar14 = *(code **)(lVar17 + 8);
  (*pcVar14)(local_178,puVar2);
  (*pcVar14)(lVar4,puVar2);
  FUN_1002cab64(&local_130);
  FUN_100025b34(puVar1,uVar9,uVar12);
  _swift_bridgeObjectRelease(uVar10);
  return;
}

