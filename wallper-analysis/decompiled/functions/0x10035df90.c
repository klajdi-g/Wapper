// rea decompile_all
// name: FUN_10035df90
// address: 0x10035df90
// body: available
// range: 0x10035df90-0x10035e953 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10035df90(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  Date DVar6;
  State SVar7;
  ulong uVar8;
  undefined *puVar9;
  Set SVar10;
  Alignment AVar11;
  undefined8 uVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar13;
  long extraout_x8_02;
  long lVar14;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  ulong uVar15;
  undefined *puVar16;
  long lVar17;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long lVar18;
  long unaff_x20;
  long lVar19;
  long lVar20;
  code *pcVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined1 auStack_170 [8];
  long local_168;
  undefined *local_160;
  long local_158;
  long local_150;
  undefined *local_148;
  long local_140;
  long local_138;
  long local_130;
  undefined8 local_128;
  long local_120;
  undefined1 *local_118;
  long local_110;
  ulong local_108;
  undefined *local_100;
  code *local_f8;
  undefined *local_f0;
  long local_e8;
  undefined *local_e0;
  long local_d8;
  long lStack_d0;
  
  lVar5 = 0;
  local_158 = param_1;
  local_128 = param_2;
  FUN_1001d537c();
  local_d8 = *(long *)(lVar5 + -8);
  lStack_d0 = lVar5;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_d8 + 0x40));
  puVar16 = &DAT_100550eb8;
  local_118 = auStack_170 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_100002f94(&DAT_100550eb8,&DAT_100422a48);
  local_e0 = puVar16;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar16 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar23 = (long)(auStack_170 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  puVar16 = &DAT_100550ec0;
  FUN_100002f94(&DAT_100550ec0,&DAT_100422eb0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar16 + -8) + 0x40));
  uVar15 = lVar23 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_108 = uVar15;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = uVar15 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar24 = lVar18 - extraout_x12_00;
  lVar5 = 0;
  FUN_1001d59ac();
  lVar13 = *(long *)(lVar5 + -8);
  local_140 = lVar5;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar13 + 0x40));
  lVar5 = lVar24 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_e8 = lVar5 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = (lVar5 - extraout_x12_01) - extraout_x12_02;
  puVar16 = &DAT_10054a9d0;
  puVar9 = &DAT_10041bc60;
  local_138 = lVar14;
  FUN_100002f94();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar16 + -8) + 0x40));
  lVar14 = lVar14 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  local_150 = lVar14;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar16 = (undefined *)(lVar14 - extraout_x12_03);
  local_148 = puVar16;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = (long)puVar16 - extraout_x12_04;
  local_130 = lVar17;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = lVar17 - extraout_x12_05;
  local_120 = lVar17;
  local_f0 = (undefined *)Foundation::Calendar::typeMetadataAccessor();
  local_f8 = *(code **)(local_f0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)((long)local_f8 + 0x40));
  lVar17 = lVar17 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  local_100 = (undefined *)Foundation::Date::typeMetadataAccessor();
  lVar20 = *(long *)(local_100 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar20 + 0x40));
  lVar25 = lVar17 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  lVar14 = 0;
  FUN_100386f18();
  lVar19 = *(long *)(unaff_x20 + *(int *)(lVar14 + 0x18));
  local_168 = lVar14;
  if (lVar19 == 0) {
    FUN_100279594(0);
    FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
    SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
    pcVar21 = (code *)SoftwareBreakpoint(1,0x10035e954);
    (*pcVar21)();
  }
  lVar14 = lVar19;
  _swift_retain(lVar19);
  FUN_1002748c4();
  local_160 = puVar9;
  _swift_release(lVar19);
  _swift_bridgeObjectRelease(lVar14);
  DVar6 = Foundation::Date::init();
  Foundation::Calendar::get_current((Calendar)DVar6.unknown);
  uVar22 = local_128;
  lVar14 = lVar25;
  FUN_1001d6f78(lVar25,lVar17);
  puVar9 = local_f0;
  local_f8 = *(code **)((long)local_f8 + 8);
  (*local_f8)(lVar17,local_f0);
  puVar16 = local_100;
  pcVar21 = *(code **)(lVar20 + 8);
  (*pcVar21)(lVar25,local_100);
  DVar6 = Foundation::Date::init();
  Foundation::Calendar::get_current((Calendar)DVar6.unknown);
  FUN_1001d682c(local_120,lVar25,lVar17);
  (*local_f8)(lVar17,puVar9);
  (*pcVar21)(lVar25,puVar16);
  local_f0 = *(undefined **)(lVar14 + 0x10);
  if (local_f0 != (undefined *)0x0) {
    uVar15 = 0;
    local_f8 = (code *)(lVar14 + ((ulong)*(byte *)(lVar13 + 0x50) + 0x20 &
                                 ((ulong)*(byte *)(lVar13 + 0x50) ^ 0xffffffffffffffff)));
    local_100 = (undefined *)(long)*(int *)(local_168 + 0x24);
    local_110 = lVar5;
    do {
      lVar17 = local_e8;
      if (*(ulong *)(lVar14 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
        pcVar21 = (code *)SoftwareBreakpoint(1,0x10035e90c);
        (*pcVar21)();
      }
      FUN_100029504(local_f8 + *(long *)(lVar13 + 0x48) * uVar15,local_e8,FUN_1001d59ac);
      FUN_100007e64(lVar17,lVar5,FUN_1001d59ac);
      FUN_100029504(lVar5,lVar24,FUN_1001d537c);
      lVar20 = lStack_d0;
      lVar19 = local_d8;
      (**(code **)(local_d8 + 0x38))(lVar24,0,1,lStack_d0);
      SVar7.unknown = &DAT_10055dca8;
      FUN_100002f94(&DAT_10055dca8,&DAT_1004334a8);
      SwiftUI::State::get_wrappedValue(SVar7);
      lVar17 = (long)*(int *)(local_e0 + 0x30);
      FUN_1000087e4(lVar24,lVar23,&DAT_100550ec0,&DAT_100422eb0);
      FUN_1000087e4(lVar18,lVar23 + lVar17,&DAT_100550ec0,&DAT_100422eb0);
      pcVar21 = *(code **)(lVar19 + 0x30);
      lVar19 = lVar23;
      (*pcVar21)(lVar23,1,lVar20);
      uVar4 = local_108;
      if ((int)lVar19 == 1) {
        FUN_10002a29c(lVar18,&DAT_100550ec0,&DAT_100422eb0);
        FUN_10002a29c(lVar24,&DAT_100550ec0,&DAT_100422eb0);
        lVar17 = lVar23 + lVar17;
        (*pcVar21)(lVar17,1,lVar20);
        if ((int)lVar17 == 1) {
          FUN_10002a29c(lVar23,&DAT_100550ec0,&DAT_100422eb0);
LAB_10035e660:
          lVar17 = local_130;
          FUN_100007e64(lVar5,local_130,FUN_1001d59ac);
          uVar12 = 0;
          uVar22 = local_128;
          goto LAB_10035e688;
        }
LAB_10035e3dc:
        FUN_10002a29c(lVar23,&DAT_100550eb8,&DAT_100422a48);
      }
      else {
        FUN_1000087e4(lVar23,local_108,&DAT_100550ec0,&DAT_100422eb0);
        lVar5 = lVar23 + lVar17;
        (*pcVar21)(lVar5,1,lVar20);
        puVar3 = local_118;
        if ((int)lVar5 == 1) {
          FUN_10002a29c(lVar18,&DAT_100550ec0,&DAT_100422eb0);
          FUN_10002a29c(lVar24,&DAT_100550ec0,&DAT_100422eb0);
          FUN_100029548(uVar4,FUN_1001d537c);
          lVar5 = local_110;
          goto LAB_10035e3dc;
        }
        FUN_100007e64(lVar23 + lVar17,local_118,FUN_1001d537c);
        uVar8 = uVar4;
        FUN_1001da410(uVar4,puVar3);
        FUN_100029548(puVar3,FUN_1001d537c);
        FUN_10002a29c(lVar18,&DAT_100550ec0,&DAT_100422eb0);
        FUN_10002a29c(lVar24,&DAT_100550ec0,&DAT_100422eb0);
        FUN_100029548(uVar4,FUN_1001d537c);
        FUN_10002a29c(lVar23,&DAT_100550ec0,&DAT_100422eb0);
        lVar5 = local_110;
        if ((uVar8 & 1) != 0) goto LAB_10035e660;
      }
      uVar15 = uVar15 + 1;
      FUN_100029548(lVar5,FUN_1001d59ac);
      uVar22 = local_128;
    } while (local_f0 != (undefined *)uVar15);
  }
  uVar12 = 1;
  lVar17 = local_130;
LAB_10035e688:
  lVar18 = local_140;
  (**(code **)(lVar13 + 0x38))(lVar17,uVar12,1,local_140);
  puVar16 = local_148;
  FUN_100007e1c(lVar17,local_148,&DAT_10054a9d0,&DAT_10041bc60);
  pcVar21 = *(code **)(lVar13 + 0x30);
  puVar9 = puVar16;
  (*pcVar21)(puVar16,1,lVar18);
  lVar19 = local_120;
  lVar17 = local_138;
  lVar5 = local_150;
  if ((int)puVar9 == 1) {
    FUN_1000087e4(local_120,local_150,&DAT_10054a9d0,&DAT_10041bc60);
    lVar20 = lVar5;
    (*pcVar21)(lVar5,1,lVar18);
    if ((int)lVar20 == 1) {
      if (*(long *)(lVar14 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar21 = (code *)SoftwareBreakpoint(1,0x10035e910);
        (*pcVar21)();
      }
      FUN_100029504(lVar14 + ((ulong)*(byte *)(lVar13 + 0x50) + 0x20 &
                             ((ulong)*(byte *)(lVar13 + 0x50) ^ 0xffffffffffffffff)),lVar17,
                    FUN_1001d59ac);
      lVar13 = lVar5;
      (*pcVar21)(lVar5,1,lVar18);
      if ((int)lVar13 != 1) {
        FUN_10002a29c(lVar5,&DAT_10054a9d0,&DAT_10041bc60);
      }
    }
    else {
      FUN_100007e64(lVar5,lVar17,FUN_1001d59ac);
    }
    SVar10.unknown = puVar16;
    (*pcVar21)(puVar16,1,lVar18);
    if ((int)SVar10.unknown != 1) {
      FUN_10002a29c(puVar16,&DAT_10054a9d0,&DAT_10041bc60);
      SVar10.unknown = puVar16;
    }
  }
  else {
    FUN_100007e64(puVar16,local_138,FUN_1001d59ac);
    SVar10.unknown = puVar16;
  }
  SVar10 = SwiftUI::Axis::Set::get_vertical(SVar10);
  AVar11.unknown = local_160;
  FUN_100002f94(&DAT_10055de48,&DAT_100433710);
  FUN_100387894();
  lVar5 = local_158;
  SwiftUI::ScrollView::_init(SVar10,true);
  _swift_bridgeObjectRelease(lVar14);
  puVar16 = &DAT_10055ddd8;
  FUN_100002f94(&DAT_10055ddd8,&DAT_100433628);
  iVar2 = *(int *)(puVar16 + 0x24);
  puVar9 = AVar11.unknown;
  FUN_100362508(lVar5 + iVar2,uVar22);
  _swift_bridgeObjectRelease();
  AVar11 = SwiftUI::Alignment::get_center(AVar11);
  puVar16 = &DAT_10055ddf8;
  FUN_100002f94(&DAT_10055ddf8,&DAT_100433638);
  puVar1 = (undefined8 *)(lVar5 + iVar2 + (long)*(int *)(puVar16 + 0x24));
  *puVar1 = AVar11.unknown;
  puVar1[1] = puVar9;
  FUN_100029548(lVar17,FUN_1001d59ac);
  FUN_10002a29c(lVar19,&DAT_10054a9d0,&DAT_10041bc60);
  return;
}

