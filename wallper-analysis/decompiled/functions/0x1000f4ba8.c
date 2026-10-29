// rea decompile_all
// name: FUN_1000f4ba8
// address: 0x1000f4ba8
// body: available
// range: 0x1000f4ba8-0x1000f4f17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000f4ce8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000f4ba8(undefined8 *param_1,CGFloat param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  Design DVar5;
  undefined *puVar6;
  Image IVar7;
  Color CVar9;
  Color CVar10;
  LocalizedStringKey LVar11;
  Text TVar12;
  Font FVar13;
  Text TVar14;
  Text TVar15;
  undefined8 uVar16;
  Text TVar17;
  uint uVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined *puVar21;
  ulong uVar22;
  long extraout_x8;
  undefined1 *puVar23;
  code *pcVar24;
  CGFloat size;
  String systemName;
  String stringLiteral;
  undefined8 uStack_b0;
  undefined2 auStack_a8 [4];
  undefined1 auStack_a0 [8];
  undefined *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  long lVar8;
  
  puVar6 = &DAT_10054a828;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = -extraout_x8;
  puVar23 = auStack_a0 + lVar1;
  systemName.bridgeObject = (void *)0xef6873616c732e6f;
  systemName.str = (char *)0x746f68706576696c;
  IVar7 = SwiftUI::Image::init(systemName);
  local_70 = IVar7.unknown;
  SwiftUI::Font::Weight::get_regular((Weight)IVar7.unknown);
  DVar5 = SwiftUI::Font::Design::typeMetadataAccessor();
  lVar8 = CONCAT71((int7)((ulong)IVar7.unknown >> 8),DVar5.value);
  pcVar24 = *(code **)(*(long *)(lVar8 + -8) + 0x38);
  (*pcVar24)(puVar23,1,1,lVar8);
  local_78 = (undefined *)SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c(puVar23,&DAT_10054a828,&DAT_10041e3c0);
  CVar10.unknown = &DAT_1004244c8;
  _swift_getKeyPath();
  local_80 = CVar10.unknown;
  CVar9 = SwiftUI::Color::get_white(CVar10);
  size.unknown = (undefined *)0x3fe0000000000000;
  CVar10 = SwiftUI::Color::opacity(0.5,CVar9);
  _swift_release();
  local_68 = CVar10.unknown;
  FUN_1000fa894();
  CVar10.unknown = CVar9.unknown;
  local_90 = CVar9.unknown;
  FUN_100028d58();
  local_98 = CVar10.unknown;
  local_88 = (undefined *)
             SwiftUI::Color::_init
                       (CVar10.unknown,PTR___type_metadata_for_SwiftUI_Color_100523288,CVar9.unknown
                       );
  uVar18 = (uint)CVar9.unknown;
  uVar16 = 0x80000001004dd780;
  stringLiteral.bridgeObject = (void *)0x80000001004dd780;
  stringLiteral.str = (char *)0xd00000000000001b;
  LVar11 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  *(undefined2 *)((long)auStack_a8 + lVar1) = 0x100;
  *(undefined8 *)((long)&uStack_b0 + lVar1) = 0;
  uVar19 = (ulong)(uVar18 & 1);
  TVar12 = SwiftUI::Text::_init(LVar11);
  SwiftUI::Font::Weight::get_regular((Weight)TVar12.unknown);
  (*pcVar24)(puVar23,1,1,lVar8);
  FVar13 = SwiftUI::Font::_system(size,(Font)0x0);
  FUN_10002a29c(puVar23,&DAT_10054a828,&DAT_10041e3c0);
  TVar17 = TVar12;
  uVar20 = uVar16;
  uVar22 = uVar19;
  TVar14 = SwiftUI::Text::_font(FVar13.unknown);
  _swift_release(FVar13.unknown);
  FUN_100025b34(TVar12.unknown,uVar16,uVar19);
  _swift_bridgeObjectRelease();
  CVar10 = SwiftUI::Color::get_white(CVar10);
  CVar9 = SwiftUI::Color::opacity(0.5,CVar10);
  _swift_release(CVar10.unknown);
  local_68 = CVar9.unknown;
  CVar10 = SwiftUI::Color::_init
                     (CVar9.unknown,PTR___type_metadata_for_SwiftUI_Color_100523288,local_90,
                      local_98);
  TVar12 = TVar14;
  puVar21 = TVar17.unknown;
  uVar16 = uVar20;
  local_68 = CVar10.unknown;
  TVar15 = SwiftUI::Text::_foregroundStyle();
  FUN_100025b34(TVar14.unknown,TVar17.unknown,uVar20);
  _swift_release(CVar10.unknown);
  _swift_bridgeObjectRelease(uVar22);
  puVar4 = local_70;
  puVar3 = local_78;
  puVar2 = local_80;
  puVar6 = local_88;
  *param_1 = local_70;
  param_1[1] = local_80;
  param_1[2] = local_78;
  param_1[3] = local_88;
  param_1[4] = TVar15.unknown;
  param_1[5] = TVar12.unknown;
  *(char *)(param_1 + 6) = (char)puVar21;
  param_1[7] = uVar16;
  _swift_retain(local_70);
  _swift_retain(puVar2);
  _swift_retain(puVar3);
  _swift_retain(puVar6);
  FUN_100007b14(TVar15.unknown,TVar12.unknown,puVar21);
  _swift_bridgeObjectRetain(uVar16);
  FUN_100025b34(TVar15.unknown,TVar12.unknown,puVar21);
  _swift_release(puVar6);
  _swift_release(puVar3);
  _swift_release(puVar2);
  _swift_release(puVar4);
  _swift_bridgeObjectRelease(uVar16);
  return;
}

