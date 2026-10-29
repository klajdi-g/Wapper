// rea decompile_all
// name: FUN_1000ae574
// address: 0x1000ae574
// body: available
// range: 0x1000ae574-0x1000ae937 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000ae6dc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000ae574(ulong *param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,ulong param_7,ulong param_8,long param_9)

{
  undefined1 *puVar1;
  long *plVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ForEach<undefined,undefined,undefined> FVar10;
  Animation AVar11;
  Animation AVar12;
  Set SVar13;
  Color CVar14;
  Color CVar15;
  Stop SVar16;
  UnitPoint UVar17;
  Gradient gradient;
  UnitPoint location;
  ulong uVar18;
  UnitPoint endPoint;
  undefined8 uVar19;
  long lVar20;
  ulong uVar21;
  double dVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lStack_98;
  
  uVar21 = 0x3fdae147ae147ae1;
  if ((param_8 & 0xff) != 0) {
    uVar21 = 0x3fe0000000000000;
  }
  *param_1 = param_7 & ((long)param_7 >> 0x3f ^ 0xffffffffffffffffU);
  param_1[1] = (ulong)(param_2 * 5.0);
  param_1[2] = uVar21;
  puVar4 = &DAT_100550468;
  FUN_100002f94(&DAT_100550468,&DAT_100421cf8);
  iVar3 = *(int *)(puVar4 + 0x2c);
  lVar5 = param_6;
  uVar21 = param_7;
  uVar18 = param_8;
  FUN_1000ae4c8(param_2);
  puVar4 = &DAT_100528d18;
  _swift_allocObject(&DAT_100528d18,0x29,7);
  *(long *)(puVar4 + 0x10) = param_6;
  *(ulong *)(puVar4 + 0x18) = param_7;
  *(double *)(puVar4 + 0x20) = param_2;
  puVar4[0x28] = (char)param_8;
  _swift_bridgeObjectRetain(param_6);
  puVar6 = &DAT_100550470;
  FUN_100002f94(&DAT_100550470,&DAT_100421d00);
  puVar7 = &DAT_100550478;
  FUN_100002f94(&DAT_100550478,&DAT_100421d08);
  puVar8 = &DAT_100550480;
  FUN_1000087a0(&DAT_100550480,&DAT_100550470,&DAT_100421d00,
                PTR_Swift__Swift__ArraySlice<undefined>_>Swift__RandomAccessCollection_100523cc8);
  puVar9 = puVar8;
  FUN_1000b4178();
  FUN_1000b4798();
  FVar10 = (extension_SwiftUI)::SwiftUI::ForEach::_init
                     ((long)param_1 + (long)iVar3,puVar9,FUN_1000b4168,puVar4,puVar6,
                      PTR___type_metadata_for_Swift_Int_100523bd8,puVar7,puVar8,puVar9);
  uVar19 = 0x3feae147ae147ae1;
  uVar24 = 0;
  AVar11 = SwiftUI::Animation::spring(0.72,0.84,0.0,FVar10.unknown);
  AVar12.unknown = &DAT_100550560;
  FUN_100002f94(&DAT_100550560,&DAT_100421d80);
  iVar3 = *(int *)(AVar12.unknown + 0x24);
  *(undefined8 *)((long)param_1 + (long)iVar3) = AVar11.unknown;
  ((undefined8 *)((long)param_1 + (long)iVar3))[1] = param_7;
  AVar12 = SwiftUI::Animation::easeInOut(0.5,AVar12);
  lVar20 = *(long *)(param_6 + 0x10);
  SVar13.unknown = &DAT_100550568;
  FUN_100002f94(&DAT_100550568,&DAT_100421d88);
  iVar3 = *(int *)(SVar13.unknown + 0x24);
  *(undefined8 *)((long)param_1 + (long)iVar3) = AVar12.unknown;
  *(bool *)((undefined8 *)((long)param_1 + (long)iVar3) + 1) = lVar20 == 0;
  SVar13 = SwiftUI::Edge::Set::get_horizontal(SVar13);
  dVar22 = param_2 + param_2;
  SwiftUI::EdgeInsets::init((CGFloat)SVar13.unknown);
  puVar4 = &DAT_100550570;
  uVar23 = uVar19;
  FUN_100002f94(&DAT_100550570,&DAT_100421d90);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(puVar4 + 0x24));
  *puVar1 = (char)SVar13.unknown;
  *(double *)(puVar1 + 8) = dVar22;
  *(undefined8 *)(puVar1 + 0x10) = uVar19;
  *(undefined8 *)(puVar1 + 0x18) = uVar24;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  CVar14.unknown = &DAT_10054f3f0;
  FUN_100002f94(&DAT_10054f3f0,&DAT_100420950);
  location.unknown = (undefined *)0x60;
  endPoint.unknown = (undefined *)0x7;
  _swift_allocObject();
  *(undefined8 *)(CVar14.unknown + 0x18) = 8;
  *(undefined8 *)(CVar14.unknown + 0x10) = 4;
  CVar15 = SwiftUI::Color::get_clear(CVar14);
  uVar19 = 0;
  SVar16 = SwiftUI::Gradient::Stop::init(CVar15,location.unknown);
  *(undefined **)(CVar14.unknown + 0x20) = SVar16.unknown;
  *(undefined8 *)(CVar14.unknown + 0x28) = uVar19;
  CVar15 = SwiftUI::Color::get_black(SVar16.unknown);
  uVar19 = 0x3fc999999999999a;
  SVar16 = SwiftUI::Gradient::Stop::init(CVar15,location.unknown);
  *(undefined **)(CVar14.unknown + 0x30) = SVar16.unknown;
  *(undefined8 *)(CVar14.unknown + 0x38) = uVar19;
  CVar15 = SwiftUI::Color::get_black(SVar16.unknown);
  uVar19 = 0x3fe999999999999a;
  SVar16 = SwiftUI::Gradient::Stop::init(CVar15,location.unknown);
  *(undefined **)(CVar14.unknown + 0x40) = SVar16.unknown;
  *(undefined8 *)(CVar14.unknown + 0x48) = uVar19;
  CVar15 = SwiftUI::Color::get_clear(SVar16.unknown);
  uVar19 = 0x3ff0000000000000;
  SVar16 = SwiftUI::Gradient::Stop::init(CVar15,location.unknown);
  *(undefined **)(CVar14.unknown + 0x50) = SVar16.unknown;
  *(undefined8 *)(CVar14.unknown + 0x58) = uVar19;
  UVar17 = SwiftUI::UnitPoint::get_top(SVar16.unknown);
  SwiftUI::UnitPoint::get_bottom(UVar17);
  gradient = SwiftUI::Gradient::init();
  SwiftUI::LinearGradient::init(gradient,location,endPoint);
  SVar13.unknown = &DAT_100550578;
  FUN_100002f94(&DAT_100550578,&DAT_100421d98);
  plVar2 = (long *)((long)param_1 + (long)*(int *)(SVar13.unknown + 0x24));
  *plVar2 = lVar5;
  plVar2[4] = lStack_98;
  plVar2[3] = param_9;
  plVar2[2] = uVar18;
  plVar2[1] = uVar21;
  SVar13 = SwiftUI::Edge::Set::get_horizontal(SVar13);
  param_2 = param_2 * -2.0;
  SwiftUI::EdgeInsets::init((CGFloat)SVar13.unknown);
  puVar4 = &DAT_100550580;
  FUN_100002f94(&DAT_100550580,&DAT_100421da0);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(puVar4 + 0x24));
  *puVar1 = (char)SVar13.unknown;
  *(double *)(puVar1 + 8) = param_2;
  *(long *)(puVar1 + 0x10) = param_9;
  *(undefined8 *)(puVar1 + 0x18) = uVar19;
  *(undefined8 *)(puVar1 + 0x20) = uVar23;
  puVar1[0x28] = 0;
  return;
}

