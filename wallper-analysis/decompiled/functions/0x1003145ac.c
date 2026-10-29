// rea decompile_all
// name: FUN_1003145ac
// address: 0x1003145ac
// body: available
// range: 0x1003145ac-0x1003149af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003148e0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003145ac(undefined8 *param_1,CGFloat param_2,void *param_3,undefined8 param_4,uint param_5
                  ,Color param_6)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  Design DVar5;
  undefined *puVar6;
  LocalizedStringKey LVar7;
  Text TVar8;
  Font FVar10;
  Text TVar11;
  Color CVar12;
  Color CVar13;
  Text TVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  Text TVar20;
  ulong uVar21;
  undefined8 uVar22;
  ulong uVar23;
  long extraout_x8;
  long lVar24;
  long extraout_x8_00;
  long extraout_x12;
  code *pcVar25;
  String stringLiteral;
  undefined8 uStack_1f0;
  undefined2 auStack_1e8 [4];
  undefined1 auStack_1e0 [12];
  undefined4 local_1d4;
  undefined8 local_1d0;
  void *local_1c8;
  undefined1 *local_1c0;
  long local_1b8;
  undefined *local_1b0;
  undefined8 *local_1a8;
  long local_1a0;
  undefined *local_198 [37];
  undefined *local_70;
  long lVar9;
  undefined8 uVar19;
  
  puVar6 = &DAT_10055c120;
  local_1c8 = param_3;
  local_1a8 = param_1;
  FUN_100002f94(&DAT_10055c120,&DAT_100430e98);
  local_1b8 = *(long *)(puVar6 + -8);
  local_1b0 = puVar6;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_1b8 + 0x40));
  local_1c0 = auStack_1e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar24 = (long)(auStack_1e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  puVar6 = &DAT_10054a828;
  local_1a0 = lVar24;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar24 = lVar24 - extraout_x8_00;
  stringLiteral.bridgeObject = (void *)0xe800000000000000;
  stringLiteral.str = (char *)0x3a72616c75706f50;
  uVar19 = 0xe800000000000000;
  LVar7 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  *(undefined2 *)(lVar24 + -8) = 0x100;
  *(undefined8 *)(lVar24 + -0x10) = 0;
  uVar21 = (ulong)(param_5 & 1);
  TVar8 = SwiftUI::Text::_init(LVar7);
  SwiftUI::Font::Weight::get_medium((Weight)TVar8.unknown);
  DVar5 = SwiftUI::Font::Design::typeMetadataAccessor();
  lVar9 = CONCAT71((int7)((ulong)TVar8.unknown >> 8),DVar5.value);
  (**(code **)(*(long *)(lVar9 + -8) + 0x38))(lVar24,1,1,lVar9);
  FVar10 = SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c(lVar24,&DAT_10054a828,&DAT_10041e3c0);
  TVar20 = TVar8;
  uVar22 = uVar19;
  uVar23 = uVar21;
  TVar11 = SwiftUI::Text::_font(FVar10.unknown);
  _swift_release(FVar10.unknown);
  FUN_100025b34(TVar8.unknown,uVar19,uVar21);
  _swift_bridgeObjectRelease();
  CVar12 = SwiftUI::Color::get_white(param_6);
  CVar13 = SwiftUI::Color::opacity(0.4,CVar12);
  _swift_release(CVar12.unknown);
  local_198[0] = CVar13.unknown;
  FUN_100028d58();
  TVar8 = TVar11;
  puVar6 = TVar20.unknown;
  uVar19 = uVar22;
  TVar14 = SwiftUI::Text::_foregroundStyle();
  local_1d4 = SUB84(puVar6,0);
  local_1d0 = uVar19;
  FUN_100025b34(TVar11.unknown,TVar20.unknown,uVar22);
  _swift_release(CVar13.unknown);
  _swift_bridgeObjectRelease(uVar23);
  puVar6 = &DAT_100549eb0;
  FUN_100002f94(&DAT_100549eb0,&DAT_100426be0);
  _swift_initStaticObject();
  puVar15 = &DAT_100430ea0;
  local_70 = puVar6;
  _swift_getKeyPath(&DAT_100430ea0);
  puVar6 = &DAT_10053a738;
  _swift_allocObject(&DAT_10053a738,0x131,7);
  pvVar2 = local_1c8;
  _memcpy(puVar6 + 0x10,local_1c8,0x121);
  FUN_1003181f4(pvVar2,local_198);
  puVar16 = &DAT_100553858;
  FUN_100002f94(&DAT_100553858,&DAT_100429e10);
  puVar17 = &DAT_10055c1c0;
  FUN_1000087a0(&DAT_10055c1c0,&DAT_100553858,&DAT_100429e10,
                PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100523b60);
  puVar18 = puVar17;
  FUN_10031ce80();
  *(undefined **)(lVar24 + -0x10) = puVar18;
  lVar24 = local_1a0;
  (extension_SwiftUI)::SwiftUI::ForEach::_init
            (local_1a0,puVar18,puVar15,FUN_10031ce78,puVar6,puVar16,&DAT_10052cf58,puVar17,
             PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100523aa8);
  puVar15 = local_1b0;
  lVar9 = local_1b8;
  puVar3 = local_1c0;
  pcVar25 = *(code **)(local_1b8 + 0x10);
  (*pcVar25)(local_1c0,lVar24,local_1b0);
  puVar4 = local_1a8;
  uVar22 = local_1d0;
  uVar1 = local_1d4;
  *local_1a8 = TVar14.unknown;
  local_1a8[1] = TVar8.unknown;
  *(char *)(local_1a8 + 2) = (char)local_1d4;
  local_1a8[3] = local_1d0;
  puVar6 = &DAT_10055c1d0;
  FUN_100002f94(&DAT_10055c1d0,&DAT_100430ec0);
  (*pcVar25)((long)puVar4 + (long)*(int *)(puVar6 + 0x30),puVar3,puVar15);
  FUN_100007b14(TVar14.unknown,TVar8.unknown,uVar1);
  pcVar25 = *(code **)(lVar9 + 8);
  _swift_bridgeObjectRetain(uVar22);
  (*pcVar25)(local_1a0,puVar15);
  (*pcVar25)(puVar3,puVar15);
  FUN_100025b34(TVar14.unknown,TVar8.unknown,uVar1);
  _swift_bridgeObjectRelease(uVar22);
  return;
}

