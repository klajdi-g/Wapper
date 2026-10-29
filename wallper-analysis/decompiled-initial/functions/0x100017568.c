// rea decompile_all
// name: FUN_100017568
// address: 0x100017568
// body: available
// range: 0x100017568-0x10001780b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100017568(undefined8 *param_1,CGFloat param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  Design DVar3;
  undefined *puVar4;
  undefined *puVar5;
  Alignment AVar6;
  Image IVar7;
  undefined7 extraout_var;
  Font FVar8;
  Color CVar9;
  Color CVar10;
  Color CVar11;
  long extraout_x8;
  undefined8 uVar12;
  String systemName;
  undefined *local_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8;
  undefined *local_c0;
  undefined1 local_b8;
  undefined *local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char local_90;
  undefined7 uStack_8f;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  puVar4 = &DAT_10054a828;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar12 = *(undefined8 *)(param_3 + 0x68);
  puVar4 = &DAT_10041c618;
  _swift_getKeyPath(&DAT_10041c618);
  puVar5 = &DAT_10041c640;
  _swift_getKeyPath(&DAT_10041c640);
  Combine::Published::_get_subscript(&local_90,uVar12,puVar4,puVar5);
  _swift_release(puVar4);
  _swift_release(puVar5);
  bVar2 = local_90 != '\x01';
  if (bVar2) {
    systemName.bridgeObject = (void *)0xea00000000006574;
    systemName.str = (char *)0x6f6e2e636973756d;
    IVar7 = SwiftUI::Image::init(systemName);
    SwiftUI::Font::Weight::get_semibold((Weight)IVar7.unknown);
    DVar3 = SwiftUI::Font::Design::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var,DVar3.value) + -8) + 0x38))
              ((long)&local_100 - extraout_x8,1,1,CONCAT71(extraout_var,DVar3.value));
    FVar8 = SwiftUI::Font::_system(param_2,(Font)0x0);
    FUN_10002a29c((long)&local_100 - extraout_x8,&DAT_10054a828,&DAT_10041e3c0);
    CVar9.unknown = &DAT_10041bb78;
    _swift_getKeyPath();
    CVar10 = SwiftUI::Color::get_white(CVar9);
    CVar11 = SwiftUI::Color::opacity(0.8,CVar10);
    _swift_release(CVar10.unknown);
    local_100 = IVar7.unknown;
    local_f8 = CVar9.unknown;
    local_f0 = FVar8.unknown;
    local_e8 = CVar11.unknown;
  }
  else {
    puVar4 = &DAT_10041c460;
    _swift_getKeyPath(&DAT_10041c460);
    AVar6.unknown = &DAT_10041c488;
    _swift_getKeyPath();
    Combine::Published::_get_subscript(&local_90,uVar12,puVar4,AVar6.unknown);
    _swift_release(puVar4);
    _swift_release();
    cVar1 = local_90;
    SwiftUI::Alignment::get_center(AVar6);
    SwiftUI::_FrameLayout::_init((Alignment)0x4034000000000000);
    local_100 = (undefined *)CONCAT71(local_100._1_7_,cVar1);
    local_f8 = local_c0;
    local_f0 = (undefined *)CONCAT71(local_f0._1_7_,local_b8);
    local_e8 = local_b0;
    local_e0 = local_a8;
    uStack_d0 = uStack_98;
    local_d8 = local_a0;
  }
  local_c8 = bVar2;
  FUN_100002f94(&DAT_10054b458,&DAT_10041c738);
  FUN_100002f94(&DAT_10054b280,&DAT_10041c5b0);
  FUN_10002a090();
  FUN_1000297fc();
  (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init
            ((Storage)((char)&stack0xfffffffffffffff0 + 0x10));
  param_1[1] = uStack_88;
  *param_1 = CONCAT71(uStack_8f,local_90);
  param_1[3] = uStack_78;
  param_1[2] = uStack_80;
  param_1[5] = CONCAT71(uStack_67,uStack_68);
  param_1[4] = local_70;
  *(undefined8 *)((long)param_1 + 0x31) = uStack_5f;
  *(ulong *)((long)param_1 + 0x29) = CONCAT17(uStack_60,uStack_67);
  return;
}

