// rea decompile_all
// name: FUN_10006e4bc
// address: 0x10006e4bc
// body: available
// range: 0x10006e4bc-0x10006e813 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010006e578 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10006e4bc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  Color param_5)

{
  long lVar1;
  Design DVar2;
  LocalizedStringKey LVar3;
  Text TVar4;
  Font FVar6;
  Text TVar7;
  Color CVar8;
  Text TVar9;
  Color CVar10;
  undefined8 uVar11;
  Text TVar12;
  uint uVar13;
  undefined *puVar14;
  undefined *puVar15;
  long extraout_x8;
  undefined8 uVar16;
  CGFloat size;
  undefined8 uVar17;
  String stringLiteral;
  undefined8 uStack_e0;
  undefined2 auStack_d8 [4];
  undefined1 auStack_d0 [8];
  undefined8 local_c8;
  uint local_bc;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 local_a8;
  undefined7 uStack_a7;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_61;
  long lVar5;
  
  puVar14 = &DAT_10054a828;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = -extraout_x8;
  puVar14 = &DAT_1005278e0;
  uVar13 = 7;
  _swift_allocObject(&DAT_1005278e0,0x58);
  uVar16 = param_2[4];
  uVar17 = param_2[7];
  uVar11 = param_2[6];
  *(undefined8 *)(puVar14 + 0x38) = param_2[5];
  *(undefined8 *)(puVar14 + 0x30) = uVar16;
  *(undefined8 *)(puVar14 + 0x48) = uVar17;
  *(undefined8 *)(puVar14 + 0x40) = uVar11;
  *(undefined8 *)(puVar14 + 0x50) = param_2[8];
  uVar11 = *param_2;
  uVar16 = param_2[3];
  size.unknown = (undefined *)param_2[2];
  *(undefined8 *)(puVar14 + 0x18) = param_2[1];
  *(undefined8 *)(puVar14 + 0x10) = uVar11;
  *(undefined8 *)(puVar14 + 0x28) = uVar16;
  *(undefined **)(puVar14 + 0x20) = size.unknown;
  local_61 = 0;
  local_b8 = puVar14;
  FUN_100073d64(param_2,&local_b0);
  SwiftUI::State::init(&local_b0,puVar14,PTR___type_metadata_for_Swift_Bool_100523b70);
  local_bc = (uint)(byte)local_b0;
  local_c8 = CONCAT71(uStack_a7,local_a8);
  uVar11 = 0xef65746164705520;
  stringLiteral.bridgeObject = (void *)0xef65746164705520;
  stringLiteral.str = (char *)0x6572617774666f53;
  LVar3 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  *(undefined2 *)((long)auStack_d8 + lVar1) = 0x100;
  *(undefined8 *)((long)&uStack_e0 + lVar1) = 0;
  puVar14 = (undefined *)(ulong)(uVar13 & 1);
  TVar4 = SwiftUI::Text::_init(LVar3);
  SwiftUI::Font::Weight::get_semibold((Weight)TVar4.unknown);
  DVar2 = SwiftUI::Font::Design::typeMetadataAccessor();
  lVar5 = CONCAT71((int7)((ulong)TVar4.unknown >> 8),DVar2.value);
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(auStack_d0 + lVar1,1,1,lVar5);
  FVar6 = SwiftUI::Font::_system(size,(Font)0x0);
  FUN_10002a29c(auStack_d0 + lVar1,&DAT_10054a828,&DAT_10041e3c0);
  TVar12 = TVar4;
  uVar16 = uVar11;
  CVar10.unknown = puVar14;
  TVar7 = SwiftUI::Text::_font(FVar6.unknown);
  _swift_release(FVar6.unknown);
  FUN_100025b34(TVar4.unknown,uVar11,puVar14);
  _swift_bridgeObjectRelease();
  CVar8 = SwiftUI::Color::get_white(param_5);
  local_b0 = CVar8.unknown;
  FUN_100028d58();
  TVar4 = TVar7;
  puVar15 = TVar12.unknown;
  uVar11 = uVar16;
  TVar9 = SwiftUI::Text::_foregroundStyle();
  FUN_100025b34(TVar7.unknown,TVar12.unknown,uVar16);
  _swift_release(CVar8.unknown);
  _swift_bridgeObjectRelease();
  CVar10 = SwiftUI::Color::get_clear(CVar10);
  SwiftUI::Alignment::get_center((Alignment)CVar10.unknown);
  SwiftUI::_FrameLayout::_init((Alignment)0x4041000000000000);
  puVar14 = local_b8;
  *param_1 = 0x2e6e6f7276656863;
  param_1[1] = 0xec0000007466656c;
  param_1[2] = FUN_100074588;
  param_1[3] = local_b8;
  *(char *)(param_1 + 4) = (char)local_bc;
  param_1[5] = local_c8;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 1;
  param_1[8] = TVar9.unknown;
  param_1[9] = TVar4.unknown;
  *(char *)(param_1 + 10) = (char)puVar15;
  param_1[0xb] = uVar11;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 1;
  param_1[0xe] = CVar10.unknown;
  param_1[0xf] = local_b0;
  *(undefined1 *)(param_1 + 0x10) = local_a8;
  param_1[0x11] = local_a0;
  *(undefined1 *)(param_1 + 0x12) = local_98;
  param_1[0x14] = uStack_88;
  param_1[0x13] = local_90;
  _swift_retain();
  _swift_bridgeObjectRetain(0xec0000007466656c);
  _swift_retain(puVar14);
  FUN_100007b14(TVar9.unknown,TVar4.unknown,puVar15);
  _swift_bridgeObjectRetain(uVar11);
  FUN_100025b34(TVar9.unknown,TVar4.unknown,puVar15);
  _swift_release(local_c8);
  _swift_release(puVar14);
  _swift_bridgeObjectRelease(0xec0000007466656c);
  _swift_bridgeObjectRelease(uVar11);
  return;
}

