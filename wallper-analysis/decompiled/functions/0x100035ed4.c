// rea decompile_all
// name: FUN_100035ed4
// address: 0x100035ed4
// body: available
// range: 0x100035ed4-0x1000362cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100035ed4(undefined8 *param_1,CGFloat param_2,long param_3)

{
  undefined1 *puVar1;
  char *pcVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  Design DVar9;
  StringInterpolation SVar10;
  undefined *puVar11;
  long lVar12;
  Color CVar13;
  undefined7 extraout_var;
  State SVar15;
  LocalizedStringKey LVar16;
  Text TVar17;
  Font FVar18;
  Text TVar19;
  undefined8 uVar20;
  Text TVar21;
  uint uVar22;
  ulong uVar23;
  ulong uVar24;
  long extraout_x8;
  long extraout_x8_00;
  void *pvVar25;
  long lVar26;
  undefined8 uVar27;
  code *pcVar28;
  CGFloat size;
  String systemName;
  undefined8 uStack_c0;
  undefined2 auStack_b8 [4];
  undefined1 auStack_b0 [8];
  undefined *local_a8;
  long local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  char local_78 [8];
  undefined *local_70;
  undefined8 uStack_68;
  long lVar14;
  
  SVar10 = SwiftUI::LocalizedStringKey::StringInterpolation::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(SVar10.unknown + -8) + 0x40));
  puVar11 = &DAT_10054a828;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar26 = (long)(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  lVar12 = 0;
  FUN_100030a44();
  puVar1 = (undefined1 *)(param_3 + *(int *)(lVar12 + 0x18));
  uVar3 = *puVar1;
  uVar27 = *(undefined8 *)(puVar1 + 8);
  CVar13.unknown = &DAT_10054ab50;
  local_a0 = param_3;
  uStack_68 = uVar27;
  local_70._0_1_ = uVar3;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue((State)CVar13.unknown);
  pcVar2 = (char *)0x69662e7472616568;
  if (local_78[0] == '\0') {
    pcVar2 = (char *)0x7472616568;
  }
  pvVar25 = (void *)0xea00000000006c6c;
  if (local_78[0] == '\0') {
    pvVar25 = (void *)0xe500000000000000;
  }
  systemName.bridgeObject = pvVar25;
  systemName.str = pcVar2;
  local_80 = (undefined *)SwiftUI::Image::init(systemName);
  SwiftUI::Font::Weight::get_regular((Weight)local_80);
  DVar9 = SwiftUI::Font::Design::typeMetadataAccessor();
  lVar14 = CONCAT71(extraout_var,DVar9.value);
  pcVar28 = *(code **)(*(long *)(lVar14 + -8) + 0x38);
  (*pcVar28)(lVar26,1,1,lVar14);
  local_88 = (undefined *)SwiftUI::Font::_system(param_2,(Font)0x0);
  SVar10.unknown = &DAT_10041e3c0;
  FUN_10002a29c(lVar26,&DAT_10054a828);
  puVar11 = &DAT_10041d248;
  _swift_getKeyPath();
  local_70 = (undefined *)CONCAT71(local_70._1_7_,uVar3);
  local_90 = puVar11;
  uStack_68 = uVar27;
  SwiftUI::State::get_wrappedValue((State)CVar13.unknown);
  if (local_78[0] == '\x01') {
    local_98 = (undefined *)SwiftUI::Color::get_red(CVar13);
  }
  else {
    local_98 = (undefined *)SwiftUI::Color::get_primary(CVar13);
  }
  puVar11 = &DAT_10041d278;
  _swift_getKeyPath();
  local_a8 = puVar11;
  SwiftUI::LocalizedStringKey::StringInterpolation::init(0,1);
  SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral
            ((String)(ZEXT816(0xe000000000000000) << 0x40),SVar10);
  puVar4 = (undefined8 *)(local_a0 + *(int *)(lVar12 + 0x1c));
  uStack_68 = puVar4[1];
  size.unknown = (undefined *)*puVar4;
  SVar15.unknown = &DAT_10054ba40;
  local_70 = size.unknown;
  FUN_100002f94(&DAT_10054ba40,&DAT_100423be0);
  SwiftUI::State::get_wrappedValue(SVar15);
  SVar10.unknown = (undefined *)0xe400000000000000;
  puVar11 = PTR___type_metadata_for_Swift_Int_100523bd8;
  SwiftUI::LocalizedStringKey::StringInterpolation::_appendInterpolation
            (local_78,0x646c6c25,0xe400000000000000,PTR___type_metadata_for_Swift_Int_100523bd8,
             PTR___protocol_witness_table_for_Swift_Int___SwiftUI__FormatSpecifiable_in_SwiftUI_100523800
            );
  uVar20 = 0xe000000000000000;
  SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral
            ((String)(ZEXT816(0xe000000000000000) << 0x40),SVar10);
  uVar22 = (uint)SVar10.unknown;
  LVar16 = SwiftUI::LocalizedStringKey::init
                     ((StringInterpolation)(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0))
                     );
  *(undefined2 *)(lVar26 + -8) = 0x100;
  *(undefined8 *)(lVar26 + -0x10) = 0;
  uVar23 = (ulong)(uVar22 & 1);
  TVar17 = SwiftUI::Text::_init(LVar16);
  SwiftUI::Font::Weight::get_regular((Weight)TVar17.unknown);
  (*pcVar28)(lVar26,1,1,lVar14);
  FVar18 = SwiftUI::Font::_system(size,(Font)0x0);
  FUN_10002a29c(lVar26,&DAT_10054a828,&DAT_10041e3c0);
  TVar21 = TVar17;
  uVar27 = uVar20;
  uVar24 = uVar23;
  TVar19 = SwiftUI::Text::_font(FVar18.unknown);
  _swift_release(FVar18.unknown);
  FUN_100025b34(TVar17.unknown,uVar20,uVar23);
  _swift_bridgeObjectRelease(puVar11);
  puVar8 = local_80;
  puVar7 = local_88;
  puVar6 = local_90;
  puVar5 = local_98;
  puVar11 = local_a8;
  *param_1 = local_80;
  param_1[1] = local_90;
  param_1[2] = local_88;
  param_1[3] = local_a8;
  param_1[4] = local_98;
  param_1[5] = TVar19.unknown;
  param_1[6] = TVar21.unknown;
  *(char *)(param_1 + 7) = (char)uVar27;
  param_1[8] = uVar24;
  _swift_retain(local_80);
  _swift_retain(puVar6);
  _swift_retain(puVar7);
  _swift_retain(puVar11);
  _swift_retain(puVar5);
  FUN_100007b14(TVar19.unknown,TVar21.unknown,uVar27);
  _swift_bridgeObjectRetain(uVar24);
  FUN_100025b34(TVar19.unknown,TVar21.unknown,uVar27);
  _swift_release(puVar5);
  _swift_release(puVar11);
  _swift_release(puVar7);
  _swift_release(puVar6);
  _swift_release(puVar8);
  _swift_bridgeObjectRelease(uVar24);
  return;
}

