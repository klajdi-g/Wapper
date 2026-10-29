// rea decompile_all
// name: FUN_1000f6104
// address: 0x1000f6104
// body: available
// range: 0x1000f6104-0x1000f6483 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000f6104(double *param_1,long param_2)

{
  undefined *puVar1;
  Design DVar2;
  State SVar3;
  State SVar4;
  Alignment AVar5;
  Image IVar6;
  undefined7 extraout_var;
  Font FVar7;
  Color CVar8;
  long extraout_x8;
  Color CVar9;
  undefined *puVar10;
  double dVar11;
  CGFloat size;
  double dVar12;
  String systemName;
  double local_190;
  double local_188;
  uint local_17c;
  undefined *local_178;
  undefined1 auStack_170 [64];
  double local_130;
  undefined *puStack_128;
  double local_120;
  undefined1 uStack_118;
  undefined7 uStack_117;
  double local_110;
  undefined1 uStack_108;
  undefined7 uStack_107;
  double local_100;
  double dStack_f8;
  undefined *local_f0;
  undefined *puStack_e8;
  double dStack_e0;
  double dStack_d8;
  double local_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double local_a8;
  undefined1 local_a0;
  double local_98;
  byte local_90;
  double local_88;
  double dStack_80;
  
  puVar10 = &DAT_10054a828;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  dVar12 = *(double *)(param_2 + 8);
  puStack_e8 = *(undefined **)(param_2 + 0x38);
  local_f0 = *(undefined **)(param_2 + 0x30);
  SVar3.unknown = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SVar4.unknown = SVar3.unknown;
  SwiftUI::State::get_wrappedValue(SVar3);
  if (local_130._0_1_ == '\x01') {
    AVar5.unknown = (undefined *)SwiftUI::Color::get_white(SVar4.unknown);
    dVar11 = 0.5;
  }
  else {
    if ((*(byte *)(param_2 + 1) & 1) != 0) {
      AVar5.unknown = (undefined *)SwiftUI::Color::get_green(SVar4.unknown);
      local_178 = AVar5.unknown;
      goto LAB_1000f6204;
    }
    if (dVar12 < 0.9) {
      AVar5.unknown = (undefined *)SwiftUI::Color::get_white(SVar4.unknown);
      local_178 = AVar5.unknown;
      goto LAB_1000f6204;
    }
    AVar5.unknown = (undefined *)SwiftUI::Color::get_green(SVar4.unknown);
    dVar11 = 0.85;
  }
  local_178 = (undefined *)SwiftUI::Color::opacity(dVar11,AVar5.unknown);
  _swift_release();
LAB_1000f6204:
  SwiftUI::Alignment::get_center(AVar5);
  SwiftUI::_FrameLayout::_init((Alignment)0x4038000000000000);
  local_17c = (uint)local_90;
  local_188 = local_88;
  local_190 = dStack_80;
  puStack_e8 = *(undefined **)(param_2 + 0x38);
  size.unknown = *(undefined **)(param_2 + 0x30);
  local_f0 = size.unknown;
  SwiftUI::State::get_wrappedValue(SVar3);
  if (local_130._0_1_ == '\x01') {
    systemName.bridgeObject = (void *)0xe500000000000000;
    systemName.str = (char *)0x6b72616d78;
    IVar6 = SwiftUI::Image::init(systemName);
    SwiftUI::Font::Weight::get_bold((Weight)IVar6.unknown);
    DVar2 = SwiftUI::Font::Design::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var,DVar2.value) + -8) + 0x38))
              ((long)&local_190 - extraout_x8,1,1,CONCAT71(extraout_var,DVar2.value));
    FVar7 = SwiftUI::Font::_system(size,(Font)0x0);
    FUN_10002a29c((long)&local_190 - extraout_x8,&DAT_10054a828,&DAT_10041e3c0);
    CVar9.unknown = &DAT_1004244c8;
    _swift_getKeyPath();
    CVar8 = SwiftUI::Color::get_white(CVar9);
    puVar10 = &DAT_1004246c0;
    _swift_getKeyPath();
    _swift_retain(IVar6.unknown);
    _swift_retain(CVar9.unknown);
    _swift_retain(FVar7.unknown);
    _swift_retain(puVar10);
    _swift_retain(CVar8.unknown);
  }
  else {
    IVar6.unknown = (undefined *)0x0;
    CVar9.unknown = (undefined *)0x0;
    FVar7.unknown = (undefined *)0x0;
    puVar10 = (undefined *)0x0;
    CVar8.unknown = (undefined *)0x0;
  }
  puVar1 = local_178;
  puStack_128 = local_178;
  local_120 = local_a8;
  uStack_118 = local_a0;
  local_110 = local_98;
  uStack_108 = (undefined1)local_17c;
  local_100 = local_188;
  dStack_f8 = local_190;
  dStack_d8 = (double)CONCAT71(uStack_117,local_a0);
  puStack_e8 = local_178;
  dStack_e0 = local_a8;
  dStack_c8 = (double)CONCAT71(uStack_107,uStack_108);
  local_d0 = local_98;
  dStack_b8 = local_190;
  dStack_c0 = local_188;
  local_130 = dVar12;
  local_f0 = (undefined *)dVar12;
  FUN_1000087e4(&local_130,auStack_170,&DAT_1005526b8,&DAT_100424b08);
  FUN_1000fcf64(IVar6.unknown,CVar9.unknown,FVar7.unknown,puVar10,CVar8.unknown);
  FUN_1000fcfc0(IVar6.unknown,CVar9.unknown,FVar7.unknown,puVar10,CVar8.unknown);
  param_1[1] = (double)puStack_e8;
  *param_1 = (double)local_f0;
  param_1[3] = dStack_d8;
  param_1[2] = dStack_e0;
  param_1[5] = dStack_c8;
  param_1[4] = local_d0;
  param_1[7] = dStack_b8;
  param_1[6] = dStack_c0;
  param_1[8] = (double)IVar6.unknown;
  param_1[9] = (double)CVar9.unknown;
  param_1[10] = (double)FVar7.unknown;
  param_1[0xb] = (double)puVar10;
  param_1[0xc] = (double)CVar8.unknown;
  FUN_1000fcfc0(IVar6.unknown,CVar9.unknown,FVar7.unknown,puVar10,CVar8.unknown);
  _swift_release(puVar1);
  return;
}

