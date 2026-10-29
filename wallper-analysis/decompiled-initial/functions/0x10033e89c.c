// rea decompile_all
// name: FUN_10033e89c
// address: 0x10033e89c
// body: available
// range: 0x10033e89c-0x10033ea8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10033e89c(undefined8 *param_1,CGFloat param_2,long param_3)

{
  Design DVar1;
  undefined *puVar2;
  undefined *puVar3;
  Image IVar4;
  undefined7 extraout_var;
  Font FVar5;
  Color CVar6;
  Color CVar7;
  Color CVar8;
  long extraout_x8;
  undefined8 uVar9;
  String systemName;
  undefined1 auStack_b0 [8];
  undefined *local_a8;
  undefined *puStack_a0;
  undefined *local_98;
  undefined *puStack_90;
  undefined1 local_88;
  char local_80;
  undefined7 uStack_7f;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 local_60;
  
  puVar2 = &DAT_10054a828;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar9 = *(undefined8 *)(param_3 + 8);
  puVar2 = &DAT_1004323c0;
  _swift_getKeyPath(&DAT_1004323c0);
  puVar3 = &DAT_1004323e8;
  _swift_getKeyPath(&DAT_1004323e8);
  Combine::Published::_get_subscript(&local_80,uVar9,puVar2,puVar3);
  _swift_release(puVar2);
  _swift_release(puVar3);
  local_88 = local_80 != '\x01';
  if ((bool)local_88) {
    systemName.bridgeObject = (void *)0xea00000000006c6c;
    systemName.str = (char *)0x69662e6573756170;
    IVar4 = SwiftUI::Image::init(systemName);
    SwiftUI::Font::Weight::get_bold((Weight)IVar4.unknown);
    DVar1 = SwiftUI::Font::Design::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var,DVar1.value) + -8) + 0x38))
              (auStack_b0 + -extraout_x8,1,1,CONCAT71(extraout_var,DVar1.value));
    FVar5 = SwiftUI::Font::_system(param_2,(Font)0x0);
    FUN_10002a29c(auStack_b0 + -extraout_x8,&DAT_10054a828,&DAT_10041e3c0);
    CVar6.unknown = &DAT_1004324f8;
    _swift_getKeyPath();
    CVar7 = SwiftUI::Color::get_white(CVar6);
    CVar8 = SwiftUI::Color::opacity(0.5,CVar7);
    _swift_release(CVar7.unknown);
    local_a8 = IVar4.unknown;
    puStack_a0 = CVar6.unknown;
    local_98 = FVar5.unknown;
    puStack_90 = CVar8.unknown;
  }
  else {
    local_a8 = (undefined *)0x1;
    puStack_a0 = (undefined *)0x0;
    local_98 = (undefined *)0x0;
    puStack_90 = (undefined *)0x0;
  }
  FUN_100002f94(&DAT_10054b280,&DAT_10041c5b0);
  FUN_10002a108();
  FUN_1000297fc();
  (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init
            ((Storage)((char)&stack0xfffffffffffffff0 + 0x68));
  param_1[1] = uStack_78;
  *param_1 = CONCAT71(uStack_7f,local_80);
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  *(undefined1 *)(param_1 + 4) = local_60;
  return;
}

