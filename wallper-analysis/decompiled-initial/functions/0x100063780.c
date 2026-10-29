// rea decompile_all
// name: FUN_100063780
// address: 0x100063780
// body: available
// range: 0x100063780-0x100063db3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100063b24 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100063780(undefined8 *param_1,CGFloat param_2,long param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  Design DVar5;
  undefined *puVar6;
  Image IVar7;
  Color CVar9;
  undefined *puVar10;
  char *pcVar11;
  LocalizedStringKey LVar12;
  Text TVar13;
  Font FVar14;
  Text TVar15;
  Color CVar16;
  Text TVar17;
  undefined *puVar18;
  Text TVar19;
  uint uVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  long extraout_x8;
  CGFloat size;
  void *pvVar24;
  long lVar25;
  long lVar26;
  code *pcVar27;
  String systemName;
  String stringLiteral;
  undefined8 uStack_e0;
  undefined2 auStack_d8 [4];
  code *local_d0;
  undefined *local_c8;
  undefined4 local_bc;
  undefined *local_b8;
  undefined *local_b0;
  undefined8 *local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *puStack_68;
  undefined *puVar8;
  
  puVar18 = &DAT_10054a828;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar18 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = -extraout_x8;
  lVar26 = (long)&local_d0 + lVar1;
  lVar25 = *(long *)(param_3 + 0x40);
  if (lVar25 != 0) {
    puVar18 = &DAT_10041ee68;
    puVar6 = puVar18;
    _swift_getKeyPath(&DAT_10041ee68);
    puVar10 = &DAT_10041ee90;
    puVar8 = puVar10;
    _swift_getKeyPath(&DAT_10041ee90);
    _swift_retain(lVar25);
    Combine::Published::_get_subscript(&local_70);
    _swift_release(puVar6);
    _swift_release(puVar8);
    _swift_release(lVar25);
    pcVar11 = (char *)0x69632e6b72616d78;
    if ((byte)local_70 == 0) {
      pcVar11 = (char *)0x79617274;
    }
    pvVar24 = (void *)0xec000000656c6372;
    if ((byte)local_70 == 0) {
      pvVar24 = (void *)0xe400000000000000;
    }
    systemName.bridgeObject = pvVar24;
    systemName.str = pcVar11;
    IVar7 = SwiftUI::Image::init(systemName);
    local_78 = IVar7.unknown;
    SwiftUI::Font::Weight::get_regular((Weight)IVar7.unknown);
    DVar5 = SwiftUI::Font::Design::typeMetadataAccessor();
    puVar8 = (undefined *)CONCAT71((int7)((ulong)IVar7.unknown >> 8),DVar5.value);
    pcVar27 = *(code **)(*(long *)(puVar8 + -8) + 0x38);
    CVar16.unknown = puVar8;
    (*pcVar27)(lVar26,1,1);
    local_80 = (undefined *)SwiftUI::Font::_system(param_2,(Font)0x0);
    FUN_10002a29c(lVar26,&DAT_10054a828,&DAT_10041e3c0);
    CVar9.unknown = &DAT_10041eeb0;
    _swift_getKeyPath();
    local_88 = CVar9.unknown;
    CVar9 = SwiftUI::Color::get_white(CVar9);
    size.unknown = (undefined *)0x3fd6666666666666;
    local_90 = (undefined *)SwiftUI::Color::opacity(0.35,CVar9);
    _swift_release(CVar9.unknown);
    _swift_getKeyPath(&DAT_10041ee68);
    _swift_getKeyPath();
    _swift_retain(lVar25);
    puVar6 = puVar10;
    Combine::Published::_get_subscript(&local_70);
    uVar20 = (uint)puVar6;
    _swift_release(puVar18);
    _swift_release(puVar10);
    _swift_release(lVar25);
    if (((byte)local_70 & 1) == 0) {
      puVar18 = (undefined *)0x80000001004dc580;
      pcVar11 = (char *)0xd000000000000013;
    }
    else {
      pcVar11 = (char *)0x7369206575657551;
      puVar18 = (undefined *)0xec00000066666f20;
    }
    stringLiteral.bridgeObject = puVar18;
    stringLiteral.str = pcVar11;
    local_b0 = (undefined *)param_3;
    local_a8 = param_1;
    LVar12 = SwiftUI::LocalizedStringKey::init(stringLiteral);
    *(undefined2 *)((long)auStack_d8 + lVar1) = 0x100;
    *(undefined8 *)((long)&uStack_e0 + lVar1) = 0;
    puVar21 = (undefined *)(ulong)(uVar20 & 1);
    TVar13 = SwiftUI::Text::_init(LVar12);
    SwiftUI::Font::Weight::get_medium((Weight)TVar13.unknown);
    (*pcVar27)(lVar26,1,1,puVar8);
    FVar14 = SwiftUI::Font::_system(size,(Font)0x0);
    local_c8 = puVar8;
    FUN_10002a29c(lVar26,&DAT_10054a828,&DAT_10041e3c0);
    TVar19 = TVar13;
    puVar10 = puVar18;
    puVar6 = puVar21;
    TVar15 = SwiftUI::Text::_font(FVar14.unknown);
    local_d0 = pcVar27;
    _swift_release(FVar14.unknown);
    FUN_100025b34(TVar13.unknown,puVar18,puVar21);
    _swift_bridgeObjectRelease();
    CVar9 = SwiftUI::Color::get_white(CVar16);
    CVar16 = SwiftUI::Color::opacity(0.6,CVar9);
    _swift_release(CVar9.unknown);
    local_70 = CVar16.unknown;
    FUN_100028d58();
    TVar13 = TVar15;
    puVar18 = TVar19.unknown;
    CVar9.unknown = puVar10;
    local_a0 = (undefined *)SwiftUI::Text::_foregroundStyle();
    local_bc = SUB84(puVar18,0);
    local_b8 = TVar13.unknown;
    local_98 = CVar9.unknown;
    FUN_100025b34(TVar15.unknown,TVar19.unknown,puVar10);
    _swift_release(CVar16.unknown);
    _swift_bridgeObjectRelease();
    FUN_100063db4();
    local_70 = puVar6;
    puStack_68 = TVar19.unknown;
    FUN_100026df4();
    puVar18 = PTR___type_metadata_for_Swift_String_100523a98;
    TVar13 = SwiftUI::Text::_init(puVar6,PTR___type_metadata_for_Swift_String_100523a98,puVar6);
    (*local_d0)(lVar26,1,1,local_c8);
    FVar14 = SwiftUI::Font::_system((CGFloat)0x0,(Font)0x1);
    FUN_10002a29c(lVar26,&DAT_10054a828,&DAT_10041e3c0);
    TVar19 = TVar13;
    puVar10 = puVar18;
    puVar8 = puVar6;
    TVar15 = SwiftUI::Text::_font(FVar14.unknown);
    _swift_release(FVar14.unknown);
    FUN_100025b34(TVar13.unknown,puVar18,puVar6);
    _swift_bridgeObjectRelease();
    CVar9 = SwiftUI::Color::get_white(CVar9);
    CVar16 = SwiftUI::Color::opacity(0.4,CVar9);
    _swift_release(CVar9.unknown);
    TVar13 = TVar15;
    puVar22 = TVar19.unknown;
    puVar23 = puVar10;
    local_70 = CVar16.unknown;
    TVar17 = SwiftUI::Text::_foregroundStyle();
    local_c8 = TVar17.unknown;
    local_b0 = TVar13.unknown;
    FUN_100025b34(TVar15.unknown,TVar19.unknown,puVar10);
    _swift_release(CVar16.unknown);
    _swift_bridgeObjectRelease(puVar8);
    puVar18 = &DAT_10041eee0;
    _swift_getKeyPath();
    puVar4 = local_80;
    puVar3 = local_88;
    puVar21 = local_98;
    puVar10 = local_a0;
    puVar8 = local_b0;
    puVar6 = local_b8;
    uVar2 = local_bc;
    *local_a8 = local_78;
    local_a8[1] = local_88;
    local_a8[2] = local_80;
    local_a8[3] = local_90;
    local_a8[4] = local_a0;
    local_a8[5] = local_b8;
    *(char *)(local_a8 + 6) = (char)local_bc;
    local_a8[7] = local_98;
    local_a8[8] = TVar17.unknown;
    local_a8[9] = local_b0;
    *(char *)(local_a8 + 10) = (char)puVar22;
    local_a8[0xb] = puVar23;
    local_a8[0xc] = puVar18;
    *(undefined1 *)(local_a8 + 0xd) = 1;
    _swift_retain();
    _swift_retain(puVar3);
    _swift_retain(puVar4);
    puVar3 = local_90;
    _swift_retain(local_90);
    FUN_100007b14(puVar10,puVar6,uVar2);
    _swift_bridgeObjectRetain(puVar21);
    puVar10 = local_c8;
    FUN_100007b14(local_c8,puVar8,puVar22);
    _swift_bridgeObjectRetain(puVar23);
    _swift_retain(puVar18);
    FUN_100025b34(puVar10,puVar8,puVar22);
    _swift_release(puVar18);
    _swift_bridgeObjectRelease(puVar23);
    FUN_100025b34(local_a0,puVar6,uVar2);
    _swift_release(puVar3);
    _swift_release(local_80);
    _swift_release(local_88);
    _swift_release(local_78);
    _swift_bridgeObjectRelease(local_98);
    return;
  }
  FUN_1001b7378(0);
  FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar27 = (code *)SoftwareBreakpoint(1,0x100063db4);
  (*pcVar27)();
}

