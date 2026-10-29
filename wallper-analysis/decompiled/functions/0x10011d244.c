// rea decompile_all
// name: FUN_10011d244
// address: 0x10011d244
// body: available
// range: 0x10011d244-0x10011d56b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010011d33c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10011d244(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  URL UVar6;
  long lVar7;
  undefined *puVar8;
  Color CVar9;
  Color CVar10;
  undefined *puVar11;
  AnyView AVar12;
  GeometryProxy GVar13;
  CGSize CVar14;
  long extraout_x8;
  Alignment width;
  undefined *local_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined *local_f0;
  undefined *puStack_e8;
  long local_e0;
  undefined *local_d8;
  undefined2 uStack_d0;
  undefined6 uStack_ce;
  undefined *local_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  long local_a8;
  undefined *local_a0;
  undefined2 local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined *local_78;
  long lStack_70;
  
  puVar4 = &DAT_100553d90;
  puVar11 = &DAT_10041bf10;
  FUN_100002f94();
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  GVar13.unknown = (undefined *)((long)&local_110 - extraout_x8);
  FUN_10011c270();
  lVar5 = 0;
  FUN_10040211c();
  iVar2 = *(int *)(lVar5 + 0x14);
  UVar6 = Foundation::URL::typeMetadataAccessor();
  lVar5 = *(long *)(UVar6.unknown + -8);
  (**(code **)(lVar5 + 0x10))(GVar13.unknown,param_3 + iVar2,UVar6.unknown);
  (**(code **)(lVar5 + 0x38))(GVar13.unknown,0,1,UVar6.unknown);
  lVar7 = 0;
  FUN_100113f00();
  iVar2 = *(int *)(lVar7 + 0x24);
  local_a0 = (undefined *)0x0;
  puVar8 = &DAT_10054bd30;
  FUN_100002f94(&DAT_10054bd30,&DAT_10041d460);
  SwiftUI::State::init((long)param_1 + (long)iVar2,puVar8,puVar8);
  local_a0 = (undefined *)CONCAT71(local_a0._1_7_,1);
  SwiftUI::State::init
            ((long)param_1 + (long)*(int *)(lVar7 + 0x28),puVar8,
             PTR___type_metadata_for_Swift_Bool_100523b70);
  puVar3 = PTR___type_metadata_for_Swift_Int_100523bd8;
  local_a0 = (undefined *)0x0;
  SwiftUI::State::init
            ((long)param_1 + (long)*(int *)(lVar7 + 0x2c),puVar8,
             PTR___type_metadata_for_Swift_Int_100523bd8);
  local_a0 = (undefined *)0x0;
  SwiftUI::State::init((long)param_1 + (long)*(int *)(lVar7 + 0x30),puVar8,puVar3);
  *param_1 = puVar4;
  param_1[1] = puVar11;
  lVar5 = (long)param_1 + (long)*(int *)(lVar7 + 0x14);
  CVar10.unknown = GVar13.unknown;
  FUN_1000087e4(GVar13.unknown,lVar5,&DAT_100553d90,&DAT_10041bf10);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar7 + 0x18)) = 1;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x1c));
  *puVar1 = 0x300;
  *(undefined1 *)(puVar1 + 1) = 0;
  CVar9 = SwiftUI::Color::get_white(CVar10);
  CVar10 = SwiftUI::Color::opacity(0.05,CVar9);
  _swift_release();
  CVar9 = SwiftUI::Color::get_white(CVar9);
  puStack_b0 = (undefined *)SwiftUI::Alignment::get_center(CVar9.unknown);
  uStack_d0 = 0x100;
  puStack_b8 = (undefined *)0x4000000000000000;
  uStack_c0 = 0x402a000000000000;
  local_98 = 0x100;
  uStack_80 = 0x4000000000000000;
  local_88 = 0x402a000000000000;
  puVar4 = &DAT_100553710;
  local_d8 = CVar10.unknown;
  local_c8 = CVar9.unknown;
  local_a8 = lVar5;
  local_a0 = CVar10.unknown;
  local_90 = CVar9.unknown;
  local_78 = puStack_b0;
  lStack_70 = lVar5;
  FUN_1000087e4(&local_d8,&local_110,&DAT_100553710,&DAT_1004317f0);
  FUN_10002a29c(&local_a0,&DAT_100553710,&DAT_1004317f0);
  uStack_108 = CONCAT62(uStack_ce,uStack_d0);
  local_110 = local_d8;
  uStack_f8 = uStack_c0;
  puStack_100 = local_c8;
  puStack_e8 = puStack_b0;
  local_f0 = puStack_b8;
  local_e0 = local_a8;
  width.unknown = puStack_b8;
  FUN_100002f94(&DAT_100553710,&DAT_1004317f0);
  puVar11 = puVar4;
  FUN_100122654();
  AVar12 = SwiftUI::AnyView::_init(puVar11,puVar4,puVar11);
  FUN_10002a29c(GVar13.unknown,&DAT_100553d90,&DAT_10041bf10);
  *(undefined **)((long)param_1 + (long)*(int *)(lVar7 + 0x20)) = AVar12.unknown;
  CVar14 = SwiftUI::GeometryProxy::get_size(GVar13);
  CVar14 = SwiftUI::GeometryProxy::get_size(CVar14.unknown);
  SwiftUI::Alignment::get_center((Alignment)CVar14.unknown);
  SwiftUI::_FrameLayout::_init(width);
  puVar4 = &DAT_10054bd38;
  FUN_100002f94(&DAT_10054bd38,&DAT_100422740);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar4 + 0x24));
  puVar1[1] = uStack_108;
  *puVar1 = local_110;
  puVar1[3] = uStack_f8;
  puVar1[2] = puStack_100;
  puVar1[5] = puStack_e8;
  puVar1[4] = local_f0;
  puVar4 = &DAT_100553730;
  FUN_100002f94(&DAT_100553730,&DAT_1004267a8);
  *(undefined1 *)((long)param_1 + (long)*(int *)(puVar4 + 0x24)) = 0;
  return;
}

