// rea decompile_all
// name: FUN_1000f32e0
// address: 0x1000f32e0
// body: available
// range: 0x1000f32e0-0x1000f3453 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000f32e0(undefined8 *param_1,CGFloat param_2,long param_3)

{
  char *pcVar1;
  byte bVar2;
  bool bVar3;
  Design DVar4;
  undefined *puVar5;
  Image IVar6;
  undefined7 extraout_var;
  Font FVar7;
  Color CVar8;
  Color CVar9;
  Color CVar10;
  long extraout_x8;
  void *pvVar11;
  String systemName;
  
  puVar5 = &DAT_10054a828;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  bVar2 = *(byte *)(param_3 + 0x10);
  bVar3 = (bVar2 & 1) == 0;
  pcVar1 = (char *)0x69662e7472616568;
  if (bVar3) {
    pcVar1 = (char *)0x7472616568;
  }
  pvVar11 = (void *)0xea00000000006c6c;
  if (bVar3) {
    pvVar11 = (void *)0xe500000000000000;
  }
  systemName.bridgeObject = pvVar11;
  systemName.str = pcVar1;
  IVar6 = SwiftUI::Image::init(systemName);
  SwiftUI::Font::Weight::get_semibold((Weight)IVar6.unknown);
  DVar4 = SwiftUI::Font::Design::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,DVar4.value) + -8) + 0x38))
            (&stack0xffffffffffffffb0 + -extraout_x8,1,1,CONCAT71(extraout_var,DVar4.value));
  FVar7 = SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c(&stack0xffffffffffffffb0 + -extraout_x8,&DAT_10054a828,&DAT_10041e3c0);
  CVar8.unknown = &DAT_1004244c8;
  _swift_getKeyPath();
  CVar9 = SwiftUI::Color::get_white(CVar8);
  CVar10 = CVar9;
  if ((bVar2 & 1) == 0) {
    CVar10 = SwiftUI::Color::opacity(0.92,CVar9);
    _swift_release(CVar9.unknown);
  }
  puVar5 = &DAT_1004246c0;
  _swift_getKeyPath();
  *param_1 = IVar6.unknown;
  param_1[1] = CVar8.unknown;
  param_1[2] = FVar7.unknown;
  param_1[3] = puVar5;
  param_1[4] = CVar10.unknown;
  return;
}

