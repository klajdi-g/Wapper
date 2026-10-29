// rea decompile_all
// name: FUN_1000bef00
// address: 0x1000bef00
// body: available
// range: 0x1000bef00-0x1000bf25f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000bf080 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000bef00(String *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  URL UVar4;
  URL UVar5;
  Color CVar6;
  Color CVar7;
  undefined *puVar8;
  AnyView AVar9;
  GeometryProxy GVar10;
  CGSize CVar11;
  long extraout_x8;
  long extraout_x8_00;
  Alignment width;
  long extraout_x12;
  code *pcVar12;
  long lVar13;
  long lVar14;
  URL UVar15;
  String SVar16;
  undefined auStack_a0 [8];
  undefined8 local_98;
  undefined *local_90;
  undefined2 uStack_88;
  undefined6 uStack_86;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar3 = &DAT_100553d90;
  UVar5.unknown = &DAT_10041bf10;
  local_98 = param_2;
  FUN_100002f94();
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  GVar10.unknown = auStack_a0 + -extraout_x8;
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar14 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar14 + 0x40));
  UVar15.unknown = GVar10.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = (long)UVar15.unknown - extraout_x12;
  FUN_10026ac6c();
  Foundation::URL::_init();
  _swift_bridgeObjectRelease();
  Foundation::URL::deletingPathExtension(UVar5);
  pcVar12 = *(code **)(lVar14 + 8);
  (*pcVar12)(UVar15.unknown,UVar4.unknown);
  SVar16 = Foundation::URL::get_lastPathComponent(UVar15);
  (*pcVar12)(lVar13,UVar4.unknown);
  lVar13 = 0;
  FUN_10040211c();
  (**(code **)(lVar14 + 0x10))(GVar10.unknown,param_3 + *(int *)(lVar13 + 0x14),UVar4.unknown);
  (**(code **)(lVar14 + 0x38))(GVar10.unknown,0,1,UVar4.unknown);
  lVar13 = 0;
  FUN_100113f00();
  iVar2 = *(int *)(lVar13 + 0x24);
  local_90 = (undefined *)0x0;
  puVar3 = &DAT_10054bd30;
  FUN_100002f94(&DAT_10054bd30,&DAT_10041d460);
  SwiftUI::State::init((long)&param_1->str + (long)iVar2,puVar3,puVar3);
  local_90 = (undefined *)CONCAT71(local_90._1_7_,1);
  SwiftUI::State::init
            ((long)&param_1->str + (long)*(int *)(lVar13 + 0x28),puVar3,
             PTR___type_metadata_for_Swift_Bool_100523b70);
  puVar8 = PTR___type_metadata_for_Swift_Int_100523bd8;
  local_90 = (undefined *)0x0;
  SwiftUI::State::init
            ((long)&param_1->str + (long)*(int *)(lVar13 + 0x2c),puVar3,
             PTR___type_metadata_for_Swift_Int_100523bd8);
  local_90 = (undefined *)0x0;
  SwiftUI::State::init((long)&param_1->str + (long)*(int *)(lVar13 + 0x30),puVar3,puVar8);
  *param_1 = SVar16;
  CVar6.unknown = GVar10.unknown;
  FUN_1000087e4(GVar10.unknown,(long)&param_1->str + (long)*(int *)(lVar13 + 0x14),&DAT_100553d90,
                &DAT_10041bf10);
  *(undefined1 *)((long)&param_1->str + (long)*(int *)(lVar13 + 0x18)) = 1;
  puVar1 = (undefined8 *)((long)&param_1->str + (long)*(int *)(lVar13 + 0x1c));
  *puVar1 = 0x280;
  *(undefined1 *)(puVar1 + 1) = 0;
  CVar6 = SwiftUI::Color::get_white(CVar6);
  width.unknown = (undefined *)0x3faeb851eb851eb8;
  CVar7 = SwiftUI::Color::opacity(0.06,CVar6);
  _swift_release(CVar6.unknown);
  uStack_88 = 0x100;
  puVar3 = &DAT_100550cc8;
  local_90 = CVar7.unknown;
  FUN_100002f94(&DAT_100550cc8,&DAT_100422858);
  puVar8 = &DAT_100550cd0;
  FUN_1000087a0(&DAT_100550cd0,&DAT_100550cc8,&DAT_100422858,
                PTR_SwiftUI__SwiftUI___ShapeView<undefined,undefined>_>SwiftUI__View_100521c78);
  AVar9 = SwiftUI::AnyView::_init(puVar8,puVar3,puVar8);
  FUN_10002a29c(GVar10.unknown,&DAT_100553d90,&DAT_10041bf10);
  *(undefined **)((long)&param_1->str + (long)*(int *)(lVar13 + 0x20)) = AVar9.unknown;
  CVar11 = SwiftUI::GeometryProxy::get_size(GVar10);
  CVar11 = SwiftUI::GeometryProxy::get_size(CVar11.unknown);
  SwiftUI::Alignment::get_center((Alignment)CVar11.unknown);
  SwiftUI::_FrameLayout::_init(width);
  puVar3 = &DAT_10054bd38;
  FUN_100002f94(&DAT_10054bd38,&DAT_100422740);
  puVar1 = (undefined8 *)((long)&param_1->str + (long)*(int *)(puVar3 + 0x24));
  puVar1[1] = CONCAT62(uStack_86,uStack_88);
  *puVar1 = local_90;
  puVar1[3] = uStack_78;
  puVar1[2] = uStack_80;
  puVar1[5] = uStack_68;
  puVar1[4] = local_70;
  puVar3 = &DAT_10054bd40;
  FUN_100002f94(&DAT_10054bd40,&DAT_10041d470);
  *(undefined2 *)((long)&param_1->str + (long)*(int *)(puVar3 + 0x24)) = 0;
  return;
}

