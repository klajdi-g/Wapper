// rea decompile_all
// name: FUN_10011e660
// address: 0x10011e660
// body: available
// range: 0x10011e660-0x10011ec23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010011e80c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10011e660(undefined8 *param_1,CGFloat param_2,char *param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6)

{
  bool bVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  Design DVar5;
  undefined *puVar6;
  long lVar7;
  void *pvVar8;
  char *pcVar9;
  Text TVar10;
  Font FVar11;
  Text TVar12;
  Color CVar13;
  Text TVar14;
  Image IVar15;
  Color CVar16;
  Color CVar17;
  LocalizedStringKey LVar18;
  char *pcVar19;
  Text TVar20;
  undefined8 uVar21;
  char *pcVar22;
  undefined *puVar23;
  void *pvVar24;
  undefined *puVar25;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined1 *puVar26;
  long lVar27;
  String SVar28;
  String SVar30;
  String systemName;
  String stringLiteral;
  String SVar31;
  undefined1 auStack_d0 [8];
  long local_c8;
  code *local_c0;
  undefined *local_b8;
  undefined4 local_ac;
  undefined *local_a8;
  char *local_a0;
  undefined8 *local_98;
  undefined1 *local_90;
  long local_88;
  String local_80;
  undefined *local_70;
  undefined *puStack_68;
  String SVar29;
  
  puVar6 = &DAT_1005536a8;
  FUN_100002f94(&DAT_1005536a8,&DAT_100426710);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  puVar26 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar6 = &DAT_10054a828;
  pcVar19 = "`-\x02";
  local_88 = (long)puVar26 - extraout_x12;
  FUN_100002f94();
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar27 = ((long)puVar26 - extraout_x12) - extraout_x8_00;
  lVar7 = 0;
  FUN_10011c000();
  lVar7 = *(long *)(param_3 + *(int *)(lVar7 + 0x1c));
  if (lVar7 != 0) {
    _swift_retain(lVar7);
    local_a0 = param_3;
    FUN_10026a7c8();
    _swift_release(lVar7);
    SVar28.bridgeObject = pcVar19;
    SVar28.str = param_3;
    pvVar8 = (void *)Swift::String::get_count(SVar28);
    CVar13.unknown = param_6;
    local_80.bridgeObject = pcVar19;
    local_98 = param_1;
    local_90 = puVar26;
    if (0x20 < (long)pvVar8) {
      pcVar9 = (char *)0x20;
      pcVar22 = pcVar19;
      FUN_1001d39ac();
      _swift_bridgeObjectRelease(pcVar19);
      SVar29.bridgeObject = param_3;
      SVar29.str = pcVar9;
      CVar13.unknown = param_6;
      SVar28 = Swift::String::__fromSubstring(SVar29);
      pvVar8 = SVar28.bridgeObject;
      _swift_bridgeObjectRelease(param_6);
      local_80 = SVar28;
      _swift_bridgeObjectRetain(pvVar8);
      SVar30.bridgeObject = (void *)0xe300000000000000;
      SVar30.str = (char *)0x2e2e2e;
      SVar31.bridgeObject = CVar13.unknown;
      SVar31.str = pcVar22;
      Swift::String::append(SVar30,SVar31);
      _swift_bridgeObjectRelease(pvVar8);
      param_3 = local_80.str;
    }
    local_80.str = param_3;
    FUN_100026df4();
    puVar6 = PTR___type_metadata_for_Swift_String_100523a98;
    TVar10 = SwiftUI::Text::_init(pvVar8,PTR___type_metadata_for_Swift_String_100523a98,pvVar8);
    SwiftUI::Font::Weight::get_medium((Weight)TVar10.unknown);
    DVar5 = SwiftUI::Font::Design::typeMetadataAccessor();
    lVar7 = CONCAT71((int7)((ulong)TVar10.unknown >> 8),DVar5.value);
    local_c0 = *(code **)(*(long *)(lVar7 + -8) + 0x38);
    (*local_c0)(lVar27,1,1,lVar7);
    FVar11 = SwiftUI::Font::_system(param_2,(Font)0x0);
    FUN_10002a29c(lVar27,&DAT_10054a828,&DAT_10041e3c0);
    TVar20 = TVar10;
    puVar23 = puVar6;
    pvVar24 = pvVar8;
    TVar12 = SwiftUI::Text::_font(FVar11.unknown);
    local_c8 = lVar27;
    _swift_release(FVar11.unknown);
    FUN_100025b34(TVar10.unknown,puVar6,pvVar8);
    _swift_bridgeObjectRelease();
    CVar13 = SwiftUI::Color::get_white(CVar13);
    local_80.str = (char *)CVar13;
    FUN_100028d58();
    TVar10 = TVar12;
    puVar6 = TVar20.unknown;
    puVar25 = puVar23;
    TVar14 = SwiftUI::Text::_foregroundStyle();
    local_ac = SUB84(puVar6,0);
    local_a8 = puVar25;
    FUN_100025b34(TVar12.unknown,TVar20.unknown,puVar23);
    _swift_release(CVar13.unknown);
    _swift_bridgeObjectRelease(pvVar24);
    puVar6 = &DAT_100426718;
    _swift_getKeyPath();
    local_b8 = puVar6;
    FUN_10011ec24();
    bVar1 = ((ulong)puVar6 & 1) == 0;
    if (!bVar1) {
      systemName.bridgeObject = (void *)0x80000001004ddb70;
      systemName.str = (char *)0xd000000000000016;
      IVar15 = SwiftUI::Image::init(systemName);
      lVar27 = local_c8;
      local_a0 = (char *)IVar15;
      (*local_c0)(local_c8,1,1,lVar7);
      FVar11 = SwiftUI::Font::_system((CGFloat)0x0,(Font)0x1);
      FUN_10002a29c(lVar27,&DAT_10054a828,&DAT_10041e3c0);
      CVar13.unknown = &DAT_1004264d8;
      _swift_getKeyPath();
      CVar16 = SwiftUI::Color::get_white(CVar13);
      CVar17 = SwiftUI::Color::opacity(0.45,CVar16);
      _swift_release(CVar16.unknown);
      uVar21 = 0x80000001004ddb90;
      stringLiteral.bridgeObject = (void *)0x80000001004ddb90;
      stringLiteral.str = (char *)0xd000000000000012;
      local_70 = FVar11.unknown;
      puStack_68 = CVar17.unknown;
      local_80.str = (char *)IVar15;
      local_80.bridgeObject = CVar13.unknown;
      LVar18 = SwiftUI::LocalizedStringKey::init(stringLiteral);
      FUN_100002f94(&DAT_10054b280,&DAT_10041c5b0);
      FUN_1000297fc();
      (extension_SwiftUI)::SwiftUI::View::_help(LVar18);
      _swift_release(CVar17.unknown);
      _swift_release(FVar11.unknown);
      _swift_release(CVar13.unknown);
      _swift_release(local_a0);
      _swift_bridgeObjectRelease(lVar7);
      _swift_bridgeObjectRelease(uVar21);
    }
    puVar6 = &DAT_1005536b0;
    FUN_100002f94(&DAT_1005536b0,&DAT_100426748);
    lVar7 = local_88;
    (**(code **)(*(long *)(puVar6 + -8) + 0x38))(local_88,bVar1,1,puVar6);
    puVar26 = local_90;
    FUN_1000087e4(lVar7,local_90,&DAT_1005536a8,&DAT_100426710);
    puVar3 = local_98;
    puVar25 = local_a8;
    uVar2 = local_ac;
    puVar23 = local_b8;
    *local_98 = TVar14.unknown;
    local_98[1] = TVar10.unknown;
    *(char *)(local_98 + 2) = (char)local_ac;
    local_98[3] = local_a8;
    local_98[4] = local_b8;
    local_98[5] = 1;
    *(undefined1 *)(local_98 + 6) = 0;
    puVar6 = &DAT_1005536b8;
    FUN_100002f94(&DAT_1005536b8,&DAT_100426750);
    FUN_1000087e4(puVar26,(long)puVar3 + (long)*(int *)(puVar6 + 0x30),&DAT_1005536a8,&DAT_100426710
                 );
    FUN_100007b14(TVar14.unknown,TVar10.unknown,uVar2);
    _swift_bridgeObjectRetain(puVar25);
    _swift_retain(puVar23);
    FUN_10002a29c(lVar7,&DAT_1005536a8,&DAT_100426710);
    FUN_10002a29c(puVar26,&DAT_1005536a8,&DAT_100426710);
    FUN_100025b34(TVar14.unknown,TVar10.unknown,uVar2);
    _swift_release(puVar23);
    _swift_bridgeObjectRelease(puVar25);
    return;
  }
  FUN_100279594(0);
  FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10011ec24);
  (*pcVar4)();
}

