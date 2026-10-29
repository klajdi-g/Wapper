// rea decompile_all
// name: FUN_100369980
// address: 0x100369980
// body: available
// range: 0x100369980-0x10036a407 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010036a318 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100369980(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  EnvironmentObject<undefined> EVar13;
  undefined8 *puVar14;
  EnvironmentObject<undefined> EVar15;
  State<undefined> SVar16;
  Alignment AVar17;
  ulong uVar18;
  undefined8 uVar19;
  long extraout_x8;
  long lVar20;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar21;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x13;
  long lVar22;
  code *pcVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  ulong *puVar27;
  undefined8 uStack_1b0;
  undefined1 auStack_1a8 [8];
  undefined8 uStack_1a0;
  undefined1 auStack_198 [8];
  undefined8 auStack_190 [2];
  long local_180;
  undefined *local_178;
  long local_170;
  long local_168;
  long local_160;
  long local_158;
  long local_150;
  long local_148;
  long local_140;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  undefined1 local_d8;
  undefined7 uStack_d7;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  lVar6 = 0;
  FUN_1001d59ac();
  local_120 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar20 = (long)&local_180 - (extraout_x12 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  local_118 = extraout_x12;
  local_110 = lVar20;
  FUN_1001d537c();
  local_150 = *(long *)(lVar7 + -8);
  local_f8 = lVar7;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_150 + 0x40));
  lVar20 = lVar20 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar8 = &DAT_100550eb8;
  local_180 = lVar20;
  FUN_100002f94(&DAT_100550eb8,&DAT_100422a48);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = lVar20 - extraout_x8_00;
  puVar9 = &DAT_100550ec0;
  local_130 = lVar20;
  FUN_100002f94(&DAT_100550ec0,&DAT_100422eb0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar9 + -8) + 0x40));
  lVar20 = lVar20 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_158 = lVar20;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar20 = lVar20 - extraout_x12_00;
  puVar9 = &DAT_10054ac40;
  local_100 = lVar20;
  FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar9 + -8) + 0x40));
  lVar20 = lVar20 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_160 = lVar20;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar20 = lVar20 - extraout_x12_01;
  local_168 = lVar20;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar20 = lVar20 - extraout_x12_02;
  lVar7 = 0;
  FUN_100387cc0();
  local_148 = *(long *)(lVar7 + -8);
  local_e0 = lVar7;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar21 = lVar20 - (extraout_x13 + 0xfU & 0xfffffffffffffff0);
  local_140 = extraout_x13;
  local_138 = lVar21;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar21 = lVar21 - extraout_x12_03;
  FUN_100029504(param_3,param_1,FUN_10025ee04);
  lVar7 = 0;
  FUN_10038ee8c();
  local_e8 = lVar7;
  FUN_100029504(param_2,param_1 + *(int *)(lVar7 + 0x14),FUN_1001d59ac);
  lVar6 = *(long *)(param_2 + *(int *)(lVar6 + 0x24));
  local_128 = param_3;
  local_f0 = param_2;
  FUN_100029504(param_3,lVar21,FUN_100387cc0);
  uVar24 = *(ulong *)(lVar6 + 0x10);
  _swift_bridgeObjectRetain(lVar6);
  local_108 = lVar6;
  if (uVar24 == 0) {
    uVar24 = 0;
  }
  else {
    local_178 = puVar8;
    local_170 = param_1;
    uVar26 = 0;
    puVar27 = (ulong *)(lVar6 + 0x28);
    do {
      lVar6 = *(long *)(lVar21 + *(int *)(local_e0 + 0x20));
      if (*(long *)(lVar6 + 0x10) != 0) {
        uVar10 = puVar27[-1];
        uVar18 = *puVar27;
        _swift_bridgeObjectRetain(lVar6);
        FUN_10000464c(uVar10);
        if ((uVar18 & 1) != 0) {
          lVar11 = *(long *)(lVar6 + 0x38);
          lVar7 = 0;
          FUN_10040211c();
          lVar12 = *(long *)(lVar7 + -8);
          FUN_100029504(lVar11 + *(long *)(lVar12 + 0x48) * uVar10,lVar20,FUN_10040211c);
          _swift_bridgeObjectRelease(lVar6);
          (**(code **)(lVar12 + 0x38))(lVar20,0,1,lVar7);
          FUN_10002a29c(lVar20,&DAT_10054ac40,&DAT_10041ce70);
          uVar24 = uVar26;
          param_1 = local_170;
          puVar8 = local_178;
          break;
        }
        _swift_bridgeObjectRelease(lVar6);
      }
      lVar6 = 0;
      FUN_10040211c();
      (**(code **)(*(long *)(lVar6 + -8) + 0x38))(lVar20,1,1,lVar6);
      FUN_10002a29c(lVar20,&DAT_10054ac40,&DAT_10041ce70);
      uVar26 = uVar26 + 1;
      puVar27 = puVar27 + 2;
      param_1 = local_170;
      puVar8 = local_178;
    } while (uVar24 != uVar26);
  }
  lVar7 = local_f8;
  lVar6 = local_108;
  lVar20 = (long)*(int *)(local_e8 + 0x18);
  if (uVar24 == *(ulong *)(local_108 + 0x10)) {
    lVar11 = 0;
    FUN_10040211c();
    (**(code **)(*(long *)(lVar11 + -8) + 0x38))(param_1 + lVar20,1,1,lVar11);
    lVar11 = local_100;
  }
  else {
    if (*(ulong *)(local_108 + 0x10) <= uVar24) {
                    /* WARNING: Does not return */
      pcVar23 = (code *)SoftwareBreakpoint(1,0x10036a404);
      (*pcVar23)();
    }
    lVar6 = *(long *)(lVar21 + *(int *)(local_e0 + 0x20));
    if (*(long *)(lVar6 + 0x10) == 0) {
LAB_100369e78:
      lVar12 = 0;
      FUN_10040211c();
      pcVar23 = *(code **)(*(long *)(lVar12 + -8) + 0x38);
      uVar19 = 1;
      lVar7 = local_168;
    }
    else {
      lVar7 = local_108 + uVar24 * 0x10;
      lVar11 = *(long *)(lVar7 + 0x20);
      uVar24 = *(ulong *)(lVar7 + 0x28);
      _swift_bridgeObjectRetain(lVar6);
      FUN_10000464c(lVar11);
      if ((uVar24 & 1) == 0) {
        _swift_bridgeObjectRelease(lVar6);
        goto LAB_100369e78;
      }
      lVar22 = *(long *)(lVar6 + 0x38);
      lVar12 = 0;
      FUN_10040211c();
      lVar7 = local_168;
      lVar25 = *(long *)(lVar12 + -8);
      FUN_100029504(lVar22 + *(long *)(lVar25 + 0x48) * lVar11,local_168,FUN_10040211c);
      _swift_bridgeObjectRelease(lVar6);
      pcVar23 = *(code **)(lVar25 + 0x38);
      uVar19 = 0;
    }
    (*pcVar23)(lVar7,uVar19,1,lVar12);
    lVar11 = local_100;
    lVar6 = local_160;
    FUN_1000087e4(lVar7,local_160,&DAT_10054ac40,&DAT_10041ce70);
    FUN_10040211c(0);
    lVar25 = *(long *)(lVar12 + -8);
    lVar22 = lVar6;
    (**(code **)(lVar25 + 0x30))(lVar6,1,lVar12);
    if ((int)lVar22 == 1) {
                    /* WARNING: Does not return */
      pcVar23 = (code *)SoftwareBreakpoint(1,0x10036a408);
      (*pcVar23)();
    }
    FUN_100007e64(lVar6,param_1 + lVar20,FUN_10040211c);
    FUN_10002a29c(lVar7,&DAT_10054ac40,&DAT_10041ce70);
    (**(code **)(lVar25 + 0x38))(param_1 + lVar20,0,1,lVar12);
    lVar6 = local_108;
    lVar7 = local_f8;
  }
  _swift_bridgeObjectRelease(lVar6);
  FUN_100029548(lVar21,FUN_100387cc0);
  lVar25 = local_e0;
  lVar6 = local_f0;
  lVar22 = local_128;
  lVar20 = local_f0;
  FUN_1001da410(local_f0,local_128 + *(int *)(local_e0 + 0x18));
  local_f8 = CONCAT44(local_f8._4_4_,(int)lVar20);
  FUN_100029504(lVar6,lVar11,FUN_1001d537c);
  lVar20 = local_150;
  (**(code **)(local_150 + 0x38))(lVar11,0,1,lVar7);
  lVar12 = local_130;
  iVar4 = *(int *)(lVar25 + 0x1c);
  lVar6 = (long)*(int *)(puVar8 + 0x30);
  FUN_1000087e4(lVar11,local_130,&DAT_100550ec0,&DAT_100422eb0);
  FUN_1000087e4(lVar22 + iVar4,lVar12 + lVar6,&DAT_100550ec0,&DAT_100422eb0);
  pcVar23 = *(code **)(lVar20 + 0x30);
  lVar25 = lVar12;
  (*pcVar23)(lVar12,1,lVar7);
  lVar20 = local_158;
  if ((int)lVar25 == 1) {
    FUN_10002a29c(lVar11,&DAT_100550ec0,&DAT_100422eb0);
    lVar6 = lVar12 + lVar6;
    (*pcVar23)(lVar6,1,lVar7);
    lVar7 = local_f0;
    lVar25 = local_120;
    if ((int)lVar6 == 1) {
      FUN_10002a29c(lVar12,&DAT_100550ec0,&DAT_100422eb0);
      bVar5 = 1;
      goto LAB_10036a19c;
    }
  }
  else {
    FUN_1000087e4(lVar12,local_158,&DAT_100550ec0,&DAT_100422eb0);
    lVar11 = lVar12 + lVar6;
    (*pcVar23)(lVar11,1,lVar7);
    lVar25 = local_120;
    lVar7 = local_180;
    if ((int)lVar11 != 1) {
      FUN_100007e64(lVar12 + lVar6,local_180,FUN_1001d537c);
      lVar6 = lVar20;
      FUN_1001da410(lVar20,lVar7);
      bVar5 = (byte)lVar6;
      FUN_100029548(lVar7,FUN_1001d537c);
      FUN_10002a29c(local_100,&DAT_100550ec0,&DAT_100422eb0);
      FUN_100029548(lVar20,FUN_1001d537c);
      FUN_10002a29c(lVar12,&DAT_100550ec0,&DAT_100422eb0);
      lVar7 = local_f0;
      goto LAB_10036a19c;
    }
    FUN_10002a29c(local_100,&DAT_100550ec0,&DAT_100422eb0);
    FUN_100029548(lVar20,FUN_1001d537c);
  }
  lVar7 = local_f0;
  FUN_10002a29c(lVar12,&DAT_100550eb8,&DAT_100422a48);
  bVar5 = 0;
LAB_10036a19c:
  lVar6 = local_138;
  FUN_100029504(lVar22,local_138,FUN_100387cc0);
  lVar20 = local_110;
  FUN_100029504(lVar7,local_110,FUN_1001d59ac);
  bVar2 = *(byte *)(local_148 + 0x50);
  uVar24 = (ulong)bVar2 + 0x10 & ((ulong)bVar2 ^ 0xffffffffffffffff);
  bVar3 = *(byte *)(lVar25 + 0x50);
  uVar26 = local_140 + (ulong)bVar3 + uVar24 & ((ulong)bVar3 ^ 0xffffffffffffffff);
  puVar8 = &DAT_10053c230;
  _swift_allocObject(&DAT_10053c230,uVar26 + local_118,bVar2 | bVar3 | 7);
  FUN_100007e64(lVar6,puVar8 + uVar24,FUN_100387cc0);
  FUN_100007e64(lVar20,puVar8 + uVar26,FUN_1001d59ac);
  FUN_1001b7378(0);
  puVar9 = &DAT_100553df0;
  FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
  EVar13 = SwiftUI::EnvironmentObject::init();
  FUN_100279594(0);
  puVar14 = &DAT_100553dd0;
  FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
  EVar15 = SwiftUI::EnvironmentObject::init();
  lVar6 = local_e8;
  *(byte *)(param_1 + *(int *)(local_e8 + 0x1c)) = (byte)local_f8 & 1;
  *(byte *)(param_1 + *(int *)(local_e8 + 0x20)) = bVar5 & 1;
  puVar1 = (undefined8 *)(param_1 + *(int *)(local_e8 + 0x24));
  *puVar1 = FUN_10038f0a0;
  puVar1[1] = puVar8;
  puVar1 = (undefined8 *)(param_1 + *(int *)(local_e8 + 0x28));
  *puVar1 = EVar13.unknown;
  puVar1[1] = puVar9;
  puVar1 = (undefined8 *)(param_1 + *(int *)(local_e8 + 0x2c));
  *puVar1 = EVar15.unknown;
  puVar1[1] = puVar14;
  puVar8 = PTR___type_metadata_for_Swift_Bool_100523b70;
  local_d8 = 0;
  SwiftUI::State::init
            (param_1 + *(int *)(local_e8 + 0x30),EVar15.unknown,
             PTR___type_metadata_for_Swift_Bool_100523b70);
  local_d8 = 0;
  SwiftUI::State::init(param_1 + *(int *)(lVar6 + 0x34),EVar15.unknown,puVar8);
  local_d8 = 0;
  SVar16 = SwiftUI::State::init(param_1 + *(int *)(lVar6 + 0x38));
  AVar17 = SwiftUI::Alignment::get_center(SVar16.unknown);
  *(undefined **)(lVar21 + -0x10) = AVar17.unknown;
  *(undefined **)(lVar21 + -8) = puVar8;
  *(undefined1 *)(lVar21 + -0x18) = 1;
  *(undefined8 *)(lVar21 + -0x20) = 0;
  *(undefined1 *)(lVar21 + -0x28) = 1;
  *(undefined8 *)(lVar21 + -0x30) = 0;
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  puVar8 = &DAT_10055e710;
  FUN_100002f94(&DAT_10055e710,&DAT_100433f78);
  puVar14 = (undefined8 *)(param_1 + *(int *)(puVar8 + 0x24));
  puVar14[9] = uStack_90;
  puVar14[8] = local_98;
  puVar14[0xb] = uStack_80;
  puVar14[10] = local_88;
  puVar14[0xd] = uStack_70;
  puVar14[0xc] = local_78;
  puVar14[1] = uStack_d0;
  *puVar14 = CONCAT71(uStack_d7,local_d8);
  puVar14[3] = uStack_c0;
  puVar14[2] = local_c8;
  puVar14[5] = uStack_b0;
  puVar14[4] = local_b8;
  puVar14[7] = uStack_a0;
  puVar14[6] = local_a8;
  return;
}

