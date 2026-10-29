// rea decompile_all
// name: FUN_100018f44
// address: 0x100018f44
// body: available
// range: 0x100018f44-0x100019233 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100019014 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100018f44(undefined8 *param_1,CGFloat param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,Color param_6)

{
  int iVar1;
  Design DVar2;
  undefined *puVar3;
  undefined *puVar4;
  Text TVar5;
  Font FVar7;
  Text TVar8;
  Color CVar9;
  Color CVar10;
  Text TVar11;
  ContentTransition CVar12;
  undefined *puVar13;
  Text TVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  long extraout_x8;
  code *pcVar18;
  undefined8 uVar19;
  undefined *local_70;
  long local_68;
  long lVar6;
  
  puVar3 = &DAT_10054a828;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar19 = *(undefined8 *)(param_3 + 0x68);
  puVar3 = &DAT_10041c510;
  _swift_getKeyPath(&DAT_10041c510);
  puVar4 = &DAT_10041c538;
  _swift_getKeyPath(&DAT_10041c538);
  Combine::Published::_get_subscript(&local_70,uVar19,puVar3,puVar4);
  _swift_release(puVar3);
  _swift_release(puVar4);
  if (local_68 == 0) {
    puVar3 = &DAT_10054b5f0;
    FUN_100002f94(&DAT_10054b5f0,&DAT_10041c988);
    pcVar18 = *(code **)(*(long *)(puVar3 + -8) + 0x38);
  }
  else {
    FUN_100026df4();
    puVar3 = PTR___type_metadata_for_Swift_String_100523a98;
    TVar5 = SwiftUI::Text::_init(puVar4,PTR___type_metadata_for_Swift_String_100523a98,puVar4);
    SwiftUI::Font::Weight::get_regular((Weight)TVar5.unknown);
    DVar2 = SwiftUI::Font::Design::typeMetadataAccessor();
    lVar6 = CONCAT71((int7)((ulong)TVar5.unknown >> 8),DVar2.value);
    (**(code **)(*(long *)(lVar6 + -8) + 0x38))((long)&local_70 - extraout_x8,1,1,lVar6);
    FVar7 = SwiftUI::Font::_system(param_2,(Font)0x0);
    FUN_10002a29c((long)&local_70 - extraout_x8,&DAT_10054a828,&DAT_10041e3c0);
    TVar14 = TVar5;
    puVar13 = puVar3;
    puVar16 = puVar4;
    TVar8 = SwiftUI::Text::_font(FVar7.unknown);
    _swift_release(FVar7.unknown);
    FUN_100025b34(TVar5.unknown,puVar3,puVar4);
    _swift_bridgeObjectRelease();
    CVar9 = SwiftUI::Color::get_white(param_6);
    CVar10 = SwiftUI::Color::opacity(0.8,CVar9);
    _swift_release(CVar9.unknown);
    local_70 = CVar10.unknown;
    FUN_100028d58();
    TVar5 = TVar8;
    puVar15 = TVar14.unknown;
    puVar17 = puVar13;
    TVar11 = SwiftUI::Text::_foregroundStyle();
    FUN_100025b34(TVar8.unknown,TVar14.unknown,puVar13);
    _swift_release(CVar10.unknown);
    _swift_bridgeObjectRelease(puVar16);
    puVar4 = &DAT_10041bc80;
    _swift_getKeyPath();
    puVar3 = &DAT_10054b5f0;
    FUN_100002f94(&DAT_10054b5f0,&DAT_10041c988);
    iVar1 = *(int *)(puVar3 + 0x24);
    CVar12.unknown = &DAT_10054b490;
    FUN_100002f94(&DAT_10054b490,&DAT_10041c7e0);
    SwiftUI::ContentTransition::get_opacity(CVar12);
    puVar13 = &DAT_10041c8a8;
    _swift_getKeyPath();
    *(undefined **)((long)param_1 + (long)iVar1) = puVar13;
    *param_1 = TVar11.unknown;
    param_1[1] = TVar5.unknown;
    *(char *)(param_1 + 2) = (char)puVar15;
    param_1[3] = puVar17;
    param_1[4] = puVar4;
    param_1[5] = 1;
    *(undefined1 *)(param_1 + 6) = 0;
    pcVar18 = *(code **)(*(long *)(puVar3 + -8) + 0x38);
  }
  (*pcVar18)(param_1,local_68 == 0,1,puVar3);
  return;
}

