// rea decompile_all
// name: FUN_1000e88d4
// address: 0x1000e88d4
// body: available
// range: 0x1000e88d4-0x1000e8dc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000e8c90 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000e88d4(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  int iVar3;
  Locale LVar4;
  LocalizationValue LVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  URL UVar10;
  State SVar11;
  LocalizationValue LVar12;
  undefined *puVar13;
  undefined8 uVar14;
  ObservedObject<undefined> OVar15;
  State<undefined> SVar16;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 *unaff_x20;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  String SVar20;
  String SVar21;
  undefined *local_130;
  undefined *local_128;
  ulong local_120;
  ulong uStack_118;
  ulong local_110;
  ulong uStack_108;
  ulong local_100;
  ulong uStack_f8;
  
  LVar4 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar4.unknown + -8) + 0x40));
  LVar5 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar5.unknown + -8) + 0x40));
  LVar5.unknown =
       (undefined *)
       ((long)&local_130 +
       (-(extraout_x8_00 + 0xfU & 0xfffffffffffffff0) - (extraout_x8 + 0xfU & 0xfffffffffffffff0)));
  puVar6 = &DAT_10054ac40;
  puVar13 = &DAT_10041ce70;
  FUN_100002f94();
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = (long)LVar5.unknown - extraout_x8_01;
  FUN_1000e3868();
  local_130 = puVar13;
  local_128 = puVar6;
  FUN_1000e3728(lVar17);
  lVar7 = 0;
  FUN_1000f834c();
  iVar3 = *(int *)(lVar7 + 0x14);
  lVar8 = 0;
  FUN_10040211c();
  lVar9 = lVar17;
  (**(code **)(*(long *)(lVar8 + -8) + 0x30))(lVar17,1,lVar8);
  if ((int)lVar9 == 1) {
    FUN_10002a29c(lVar17,&DAT_10054ac40,&DAT_10041ce70);
    UVar10 = Foundation::URL::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar10.unknown + -8) + 0x38))
              ((long)param_1 + (long)iVar3,1,1,UVar10.unknown);
  }
  else {
    FUN_1000087e4(lVar17 + *(int *)(lVar8 + 0x18),(long)param_1 + (long)iVar3,&DAT_100553d90,
                  &DAT_10041bf10);
    FUN_100029548(lVar17,FUN_10040211c);
  }
  uStack_118 = unaff_x20[0xc];
  local_120 = unaff_x20[0xb];
  SVar11.unknown = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar11);
  SVar20.bridgeObject = (void *)0xef544e45544e4f43;
  SVar20.str = (char *)0x205245504c4c4157;
  LVar12 = LocalizationValue::_init(SVar20);
  Foundation::Locale::get_current((Locale)LVar12.unknown);
  SVar20 = (extension_Foundation)::Swift::String::_init(LVar5,(Locale)0x0);
  puVar6 = &DAT_100549eb0;
  FUN_100002f94(&DAT_100549eb0,&DAT_100426be0);
  _swift_initStaticObject();
  SVar21.bridgeObject = (void *)0x80000001004dd700;
  SVar21.str = (char *)0xd000000000000012;
  LVar12 = LocalizationValue::_init(SVar21);
  Foundation::Locale::get_current((Locale)LVar12.unknown);
  SVar21 = (extension_Foundation)::Swift::String::_init(LVar5,(Locale)0x0);
  puVar13 = &DAT_10052a910;
  _swift_allocObject(&DAT_10052a910,200,7);
  uVar18 = unaff_x20[0x10];
  uVar19 = unaff_x20[0x13];
  uVar14 = unaff_x20[0x12];
  *(undefined8 *)(puVar13 + 0x98) = unaff_x20[0x11];
  *(undefined8 *)(puVar13 + 0x90) = uVar18;
  *(undefined8 *)(puVar13 + 0xa8) = uVar19;
  *(undefined8 *)(puVar13 + 0xa0) = uVar14;
  uVar18 = unaff_x20[0x14];
  *(undefined8 *)(puVar13 + 0xb8) = unaff_x20[0x15];
  *(undefined8 *)(puVar13 + 0xb0) = uVar18;
  *(undefined8 *)(puVar13 + 0xc0) = unaff_x20[0x16];
  uVar18 = unaff_x20[8];
  uVar19 = unaff_x20[0xb];
  uVar14 = unaff_x20[10];
  *(undefined8 *)(puVar13 + 0x58) = unaff_x20[9];
  *(undefined8 *)(puVar13 + 0x50) = uVar18;
  *(undefined8 *)(puVar13 + 0x68) = uVar19;
  *(undefined8 *)(puVar13 + 0x60) = uVar14;
  uVar18 = unaff_x20[0xc];
  uVar19 = unaff_x20[0xf];
  uVar14 = unaff_x20[0xe];
  *(undefined8 *)(puVar13 + 0x78) = unaff_x20[0xd];
  *(undefined8 *)(puVar13 + 0x70) = uVar18;
  *(undefined8 *)(puVar13 + 0x88) = uVar19;
  *(undefined8 *)(puVar13 + 0x80) = uVar14;
  uVar18 = *unaff_x20;
  uVar19 = unaff_x20[3];
  uVar14 = unaff_x20[2];
  *(undefined8 *)(puVar13 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar13 + 0x10) = uVar18;
  *(undefined8 *)(puVar13 + 0x28) = uVar19;
  *(undefined8 *)(puVar13 + 0x20) = uVar14;
  uVar18 = unaff_x20[4];
  uVar19 = unaff_x20[7];
  uVar14 = unaff_x20[6];
  *(undefined8 *)(puVar13 + 0x38) = unaff_x20[5];
  *(undefined8 *)(puVar13 + 0x30) = uVar18;
  *(undefined8 *)(puVar13 + 0x48) = uVar19;
  *(undefined8 *)(puVar13 + 0x40) = uVar14;
  *param_1 = local_128;
  param_1[1] = local_130;
  *(String *)((long)param_1 + (long)*(int *)(lVar7 + 0x1c)) = SVar20;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x20));
  *puVar1 = 0xd000000000000022;
  puVar1[1] = 0x80000001004dd5e0;
  *(undefined **)((long)param_1 + (long)*(int *)(lVar7 + 0x24)) = puVar6;
  *(String *)((long)param_1 + (long)*(int *)(lVar7 + 0x28)) = SVar21;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x2c));
  *puVar1 = FUN_1000f8360;
  puVar1[1] = puVar13;
  iVar3 = *(int *)(lVar7 + 0x30);
  FUN_1000f80c4();
  if (DAT_100556f80 != -1) {
    _swift_once(&DAT_100556f80,FUN_1001dd604);
  }
  uVar18 = DAT_100577cf0;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar3);
  uVar14 = 0;
  FUN_1001eba34();
  puVar6 = &DAT_100553e00;
  FUN_1000036d0(&DAT_100553e00,FUN_1001eba34,&TargetProtocolConformanceDescriptor_10042add0);
  _swift_retain(uVar18);
  OVar15 = SwiftUI::ObservedObject::init(puVar6,uVar14,puVar6);
  *puVar1 = OVar15.unknown;
  puVar1[1] = uVar14;
  puVar6 = PTR___type_metadata_for_Swift_Bool_100523b70;
  local_120 = local_120 & 0xffffffffffffff00;
  SwiftUI::State::init
            ((long)param_1 + (long)*(int *)(lVar7 + 0x34),OVar15.unknown,
             PTR___type_metadata_for_Swift_Bool_100523b70);
  local_120 = local_120 & 0xffffffffffffff00;
  SwiftUI::State::init((long)param_1 + (long)*(int *)(lVar7 + 0x38),OVar15.unknown,puVar6);
  local_120 = local_120 & 0xffffffffffffff00;
  SwiftUI::State::init((long)param_1 + (long)*(int *)(lVar7 + 0x3c),OVar15.unknown,puVar6);
  local_120 = 0;
  SwiftUI::State::init
            ((long)param_1 + (long)*(int *)(lVar7 + 0x40),OVar15.unknown,
             PTR___type_metadata_for_Swift_Int_100523bd8);
  local_120 = local_120 & 0xffffffffffffff00;
  SVar16 = SwiftUI::State::init((long)param_1 + (long)*(int *)(lVar7 + 0x44),OVar15.unknown,puVar6);
  SwiftUI::Alignment::get_center((Alignment)SVar16.unknown);
  SwiftUI::_FrameLayout::_init((Alignment)0x4087700000000000);
  puVar6 = &DAT_100551e48;
  FUN_100002f94(&DAT_100551e48,&DAT_100423d40);
  puVar2 = (ulong *)((long)param_1 + (long)*(int *)(puVar6 + 0x24));
  puVar2[1] = uStack_118;
  *puVar2 = local_120;
  puVar2[3] = uStack_108;
  puVar2[2] = local_110;
  puVar2[5] = uStack_f8;
  puVar2[4] = local_100;
  return;
}

