// rea decompile_all
// name: FUN_1000df648
// address: 0x1000df648
// body: available
// range: 0x1000df648-0x1000df8cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000df708 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000df648(undefined8 *param_1,CGFloat param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,Color param_6)

{
  byte bVar1;
  Design DVar2;
  long lVar3;
  char *pcVar4;
  undefined *puVar5;
  Font FVar6;
  Text TVar7;
  Color CVar8;
  Color CVar9;
  Text TVar10;
  undefined *puVar11;
  undefined *puVar12;
  long extraout_x8;
  Text TVar13;
  Text TVar14;
  undefined *puVar15;
  ulong uVar16;
  String SVar17;
  String local_70;
  
  puVar15 = &DAT_10054a828;
  puVar5 = &DAT_10041e3c0;
  FUN_100002f94();
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  FUN_10040211c();
  TVar13.unknown = (undefined *)0x0;
  TVar14.unknown = (undefined *)0x0;
  uVar16 = 0;
  puVar15 = (undefined *)0x0;
  bVar1 = *(byte *)(param_3 + *(int *)(lVar3 + 0x24));
  pcVar4 = (char *)(ulong)bVar1;
  if (bVar1 != 0xe) {
    FUN_100402278();
    SVar17.bridgeObject = puVar5;
    SVar17.str = pcVar4;
    SVar17 = Swift::String::uppercased(SVar17);
    _swift_bridgeObjectRelease(puVar5);
    local_70 = SVar17;
    FUN_100026df4();
    puVar15 = PTR___type_metadata_for_Swift_String_100523a98;
    TVar14 = SwiftUI::Text::_init(puVar5,PTR___type_metadata_for_Swift_String_100523a98,puVar5);
    SwiftUI::Font::Weight::get_medium((Weight)TVar14.unknown);
    DVar2 = SwiftUI::Font::Design::typeMetadataAccessor();
    lVar3 = CONCAT71((int7)((ulong)TVar14.unknown >> 8),DVar2.value);
    (**(code **)(*(long *)(lVar3 + -8) + 0x38))((long)&local_70 - extraout_x8,1,1,lVar3);
    FVar6 = SwiftUI::Font::_system(param_2,(Font)0x0);
    FUN_10002a29c((long)&local_70 - extraout_x8,&DAT_10054a828,&DAT_10041e3c0);
    TVar10 = TVar14;
    puVar11 = puVar15;
    puVar12 = puVar5;
    TVar7 = SwiftUI::Text::_font(FVar6.unknown);
    _swift_release(FVar6.unknown);
    FUN_100025b34(TVar14.unknown,puVar15,puVar5);
    _swift_bridgeObjectRelease();
    CVar8 = SwiftUI::Color::get_white(param_6);
    CVar9 = SwiftUI::Color::opacity(0.6,CVar8);
    _swift_release(CVar8.unknown);
    local_70.str = CVar9.unknown;
    FUN_100028d58();
    TVar14 = TVar7;
    puVar5 = TVar10.unknown;
    puVar15 = puVar11;
    TVar13 = SwiftUI::Text::_foregroundStyle();
    FUN_100025b34(TVar7.unknown,TVar10.unknown,puVar11);
    _swift_release(CVar9.unknown);
    _swift_bridgeObjectRelease(puVar12);
    uVar16 = (ulong)puVar5 & 0xff;
    FUN_100007b14(TVar13.unknown,TVar14.unknown,puVar5);
    _swift_bridgeObjectRetain(puVar15);
  }
  FUN_10006953c(TVar13.unknown,TVar14.unknown,uVar16,puVar15);
  FUN_100069568(TVar13.unknown,TVar14.unknown,uVar16,puVar15);
  *param_1 = TVar13.unknown;
  param_1[1] = TVar14.unknown;
  param_1[2] = uVar16;
  param_1[3] = puVar15;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  FUN_100069568(TVar13.unknown,TVar14.unknown,uVar16,puVar15);
  return;
}

