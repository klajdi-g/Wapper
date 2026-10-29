// rea decompile_all
// name: FUN_10030892c
// address: 0x10030892c
// body: available
// range: 0x10030892c-0x100308e93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100308a10 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10030892c(undefined8 *param_1,ID *param_2,undefined8 param_3,undefined8 param_4,
                  Color param_5)

{
  undefined *puVar1;
  code *pcVar2;
  Design DVar3;
  StringInterpolation SVar4;
  undefined *puVar5;
  undefined8 uVar6;
  Text TVar7;
  Font FVar8;
  Text TVar9;
  Color CVar10;
  Color CVar11;
  Text TVar12;
  LocalizedStringKey LVar13;
  Text TVar14;
  Text TVar15;
  uint uVar16;
  undefined *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined *puVar20;
  long extraout_x8;
  long extraout_x8_00;
  long lVar21;
  StringInterpolation stringInterpolation;
  ulong uVar22;
  undefined *extraout_d0;
  CGFloat CVar23;
  double extraout_d0_00;
  double dVar24;
  undefined *extraout_d0_01;
  String SVar25;
  undefined8 uStack_b0;
  undefined2 auStack_a8 [4];
  undefined *local_a0;
  code *local_98;
  ulong local_90;
  undefined *local_88;
  undefined8 *local_80;
  undefined *local_78;
  String local_70;
  
  local_80 = param_1;
  SVar4 = SwiftUI::LocalizedStringKey::StringInterpolation::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(SVar4.unknown + -8) + 0x40));
  stringInterpolation.unknown =
       (undefined *)((long)&local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar5 = &DAT_10054a828;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar21 = (long)stringInterpolation.unknown - extraout_x8_00;
  local_78 = (undefined *)*param_2;
  objc_stub::localizedName((ID)local_78);
  CVar23.unknown = extraout_d0;
  local_70 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  uVar6 = 0;
  FUN_100026df4(0);
  puVar5 = PTR___type_metadata_for_Swift_String_100523a98;
  TVar7 = SwiftUI::Text::_init(uVar6,PTR___type_metadata_for_Swift_String_100523a98,uVar6);
  SwiftUI::Font::Weight::get_medium((Weight)TVar7.unknown);
  DVar3 = SwiftUI::Font::Design::typeMetadataAccessor();
  local_90 = CONCAT71((int7)((ulong)TVar7.unknown >> 8),DVar3.value);
  local_98 = *(code **)(*(long *)(local_90 + -8) + 0x38);
  (*local_98)(lVar21,1,1);
  FVar8 = SwiftUI::Font::_system(CVar23,(Font)0x0);
  local_88 = (undefined *)lVar21;
  FUN_10002a29c(lVar21,&DAT_10054a828,&DAT_10041e3c0);
  TVar15 = TVar7;
  SVar4.unknown = puVar5;
  uVar19 = uVar6;
  TVar9 = SwiftUI::Text::_font(FVar8.unknown);
  _swift_release(FVar8.unknown);
  FUN_100025b34(TVar7.unknown,puVar5,uVar6);
  _swift_bridgeObjectRelease();
  CVar10 = SwiftUI::Color::get_white(param_5);
  CVar11 = SwiftUI::Color::opacity(0.78,CVar10);
  _swift_release(CVar10.unknown);
  TVar7 = TVar9;
  puVar17 = TVar15.unknown;
  puVar20 = SVar4.unknown;
  TVar12 = SwiftUI::Text::_foregroundColor(CVar11.unknown);
  _swift_release(CVar11.unknown);
  puVar1 = local_78;
  FUN_100025b34(TVar9.unknown,TVar15.unknown);
  _swift_bridgeObjectRelease(uVar19);
  puVar5 = &DAT_100430410;
  _swift_getKeyPath();
  SwiftUI::LocalizedStringKey::StringInterpolation::init(4,2);
  SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral
            ((String)(ZEXT816(0xe000000000000000) << 0x40),SVar4);
  objc_stub::frame((ID)puVar1);
  dVar24 = extraout_d0_00;
  _CGRectGetWidth();
  if (0x7fefffffffffffff < (ulong)ABS(dVar24)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100308e80);
    (*pcVar2)();
  }
  if (dVar24 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100308e84);
    (*pcVar2)();
  }
  if (9.223372036854776e+18 <= dVar24) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100308e88);
    (*pcVar2)();
  }
  SVar4.unknown = (undefined *)0xe400000000000000;
  local_70.str = (char *)(long)dVar24;
  SwiftUI::LocalizedStringKey::StringInterpolation::_appendInterpolation
            (&local_70,0x646c6c25,0xe400000000000000,PTR___type_metadata_for_Swift_Int_100523bd8,
             PTR___protocol_witness_table_for_Swift_Int___SwiftUI__FormatSpecifiable_in_SwiftUI_100523800
            );
  SVar25.bridgeObject = (void *)0xa400000000000000;
  SVar25.str = (char *)0x2097c320;
  SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral(SVar25,SVar4);
  objc_stub::frame((ID)puVar1);
  CVar23.unknown = extraout_d0_01;
  _CGRectGetHeight();
  if ((ulong)ABS((double)CVar23.unknown) < 0x7ff0000000000000) {
    if ((double)CVar23.unknown <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100308e90);
      (*pcVar2)();
    }
    if ((double)CVar23.unknown < 9.223372036854776e+18) {
      local_70.str = (char *)(long)(double)CVar23.unknown;
      SVar4.unknown = (undefined *)0xe400000000000000;
      CVar10.unknown = PTR___type_metadata_for_Swift_Int_100523bd8;
      SwiftUI::LocalizedStringKey::StringInterpolation::_appendInterpolation
                (&local_70,0x646c6c25,0xe400000000000000,PTR___type_metadata_for_Swift_Int_100523bd8
                 ,
                 PTR___protocol_witness_table_for_Swift_Int___SwiftUI__FormatSpecifiable_in_SwiftUI_100523800
                );
      uVar6 = 0xe000000000000000;
      SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral
                ((String)(ZEXT816(0xe000000000000000) << 0x40),SVar4);
      uVar16 = (uint)SVar4.unknown;
      LVar13 = SwiftUI::LocalizedStringKey::init(stringInterpolation);
      *(undefined2 *)(lVar21 + -8) = 0x100;
      *(undefined8 *)(lVar21 + -0x10) = 0;
      uVar18 = (ulong)(uVar16 & 1);
      TVar9 = SwiftUI::Text::_init(LVar13);
      local_78 = puVar5;
      SwiftUI::Font::Weight::get_regular((Weight)TVar9.unknown);
      puVar5 = local_88;
      local_a0 = puVar20;
      (*local_98)(local_88,1,1,local_90);
      FVar8 = SwiftUI::Font::_system(CVar23,(Font)0x0);
      FUN_10002a29c(puVar5,&DAT_10054a828,&DAT_10041e3c0);
      TVar15 = TVar9;
      uVar19 = uVar6;
      uVar22 = uVar18;
      TVar14 = SwiftUI::Text::_font(FVar8.unknown);
      local_90 = CONCAT44(local_90._4_4_,(int)puVar17);
      local_88 = TVar7.unknown;
      _swift_release(FVar8.unknown);
      FUN_100025b34(TVar9.unknown,uVar6,uVar18);
      _swift_bridgeObjectRelease();
      CVar10 = SwiftUI::Color::get_white(CVar10);
      CVar11 = SwiftUI::Color::opacity(0.5,CVar10);
      _swift_release(CVar10.unknown);
      TVar7 = TVar14;
      puVar20 = TVar15.unknown;
      uVar6 = uVar19;
      TVar9 = SwiftUI::Text::_foregroundColor(CVar11.unknown);
      _swift_release(CVar11.unknown);
      FUN_100025b34(TVar14.unknown,TVar15.unknown,uVar19);
      _swift_bridgeObjectRelease(uVar22);
      puVar17 = local_78;
      puVar1 = local_88;
      puVar5 = local_a0;
      *local_80 = TVar12.unknown;
      local_80[1] = local_88;
      uVar22 = local_90 & 0xffffffff;
      *(char *)(local_80 + 2) = (char)local_90;
      local_80[3] = local_a0;
      local_80[4] = local_78;
      *(undefined1 *)(local_80 + 5) = 1;
      local_80[6] = TVar9.unknown;
      local_80[7] = TVar7.unknown;
      *(char *)(local_80 + 8) = (char)puVar20;
      local_80[9] = uVar6;
      FUN_100007b14(TVar12.unknown,local_88,uVar22);
      _swift_bridgeObjectRetain(puVar5);
      _swift_retain(puVar17);
      FUN_100007b14(TVar9.unknown,TVar7.unknown,puVar20);
      _swift_bridgeObjectRetain(uVar6);
      FUN_100025b34(TVar9.unknown,TVar7.unknown,puVar20);
      _swift_bridgeObjectRelease(uVar6);
      FUN_100025b34(TVar12.unknown,puVar1,uVar22);
      _swift_release(puVar17);
      _swift_bridgeObjectRelease(puVar5);
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100308e94);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100308e8c);
  (*pcVar2)();
}

