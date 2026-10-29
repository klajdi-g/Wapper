// rea decompile_all
// name: FUN_10036fba8
// address: 0x10036fba8
// body: available
// range: 0x10036fba8-0x100370527 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003704e4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10036fba8(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  State SVar10;
  undefined *puVar11;
  EnvironmentObject<undefined> EVar12;
  undefined8 *puVar13;
  EnvironmentObject<undefined> EVar14;
  ulong uVar15;
  undefined8 uVar16;
  long extraout_x8;
  long lVar17;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar18;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x13;
  long lVar19;
  long lVar20;
  code *pcVar21;
  ulong *puVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  long alStack_120 [4];
  long local_100;
  long local_f8;
  undefined *local_f0;
  long local_e8;
  ulong local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  undefined1 local_6a;
  undefined1 local_69;
  
  lVar5 = 0;
  FUN_1001d59ac();
  local_b8 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = (long)alStack_120 - (extraout_x12 + 0xfU & 0xfffffffffffffff0);
  uVar6 = 0;
  local_b0 = extraout_x12;
  lStack_a8 = lVar17;
  FUN_1001d537c();
  local_e8 = *(long *)(uVar6 - 8);
  local_e0 = uVar6;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_e8 + 0x40));
  lVar17 = lVar17 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar7 = &DAT_100550eb8;
  alStack_120[1] = lVar17;
  FUN_100002f94(&DAT_100550eb8,&DAT_100422a48);
  local_f0 = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = lVar17 - extraout_x8_00;
  puVar7 = &DAT_100550ec0;
  local_c8 = lVar17;
  FUN_100002f94(&DAT_100550ec0,&DAT_100422eb0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar7 + -8) + 0x40));
  lVar17 = lVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_f8 = lVar17;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = lVar17 - extraout_x12_00;
  puVar7 = &DAT_10054ac40;
  local_98 = lVar17;
  FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar7 + -8) + 0x40));
  lVar17 = lVar17 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_100 = lVar17;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = lVar17 - extraout_x12_01;
  alStack_120[3] = lVar17;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = lVar17 - extraout_x12_02;
  lVar8 = 0;
  FUN_100387eec();
  local_d8 = *(long *)(lVar8 + -8);
  local_78 = lVar8;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = lVar17 - (extraout_x13 + 0xfU & 0xfffffffffffffff0);
  local_d0 = extraout_x13;
  local_c0 = lVar18;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = lVar18 - extraout_x12_03;
  FUN_100029504(param_3,param_1,FUN_10025ee04);
  lVar8 = 0;
  FUN_10038f3a0();
  local_a0 = param_1;
  local_80 = lVar8;
  FUN_100029504(param_2,param_1 + *(int *)(lVar8 + 0x14),FUN_1001d59ac);
  lVar5 = *(long *)(param_2 + *(int *)(lVar5 + 0x24));
  local_90 = param_3;
  local_88 = param_2;
  FUN_100029504(param_3,lVar18,FUN_100387eec);
  uVar26 = *(ulong *)(lVar5 + 0x10);
  _swift_bridgeObjectRetain(lVar5);
  uVar6 = 0;
  uVar27 = uVar6;
  if (uVar26 != 0) {
    alStack_120[2] = lVar5;
    puVar22 = (ulong *)(lVar5 + 0x28);
    do {
      lVar5 = *(long *)(lVar18 + *(int *)(local_78 + 0x20));
      if (*(long *)(lVar5 + 0x10) != 0) {
        uVar27 = puVar22[-1];
        uVar15 = *puVar22;
        _swift_bridgeObjectRetain(lVar5);
        FUN_10000464c(uVar27);
        if ((uVar15 & 1) != 0) {
          lVar23 = *(long *)(lVar5 + 0x38);
          lVar8 = 0;
          FUN_10040211c();
          lVar25 = *(long *)(lVar8 + -8);
          FUN_100029504(lVar23 + *(long *)(lVar25 + 0x48) * uVar27,lVar17,FUN_10040211c);
          _swift_bridgeObjectRelease(lVar5);
          (**(code **)(lVar25 + 0x38))(lVar17,0,1,lVar8);
          FUN_10002a29c(lVar17,&DAT_10054ac40,&DAT_10041ce70);
          lVar5 = alStack_120[2];
          uVar27 = uVar6;
          break;
        }
        _swift_bridgeObjectRelease(lVar5);
      }
      lVar5 = 0;
      FUN_10040211c();
      (**(code **)(*(long *)(lVar5 + -8) + 0x38))(lVar17,1,1,lVar5);
      FUN_10002a29c(lVar17,&DAT_10054ac40,&DAT_10041ce70);
      uVar6 = uVar6 + 1;
      puVar22 = puVar22 + 2;
      lVar5 = alStack_120[2];
      uVar27 = uVar26;
    } while (uVar26 != uVar6);
  }
  lVar8 = (long)*(int *)(local_80 + 0x18);
  if (uVar27 == *(ulong *)(lVar5 + 0x10)) {
    lVar17 = 0;
    FUN_10040211c();
    lVar25 = local_a0;
    (**(code **)(*(long *)(lVar17 + -8) + 0x38))(local_a0 + lVar8,1,1,lVar17);
    lVar19 = local_88;
  }
  else {
    if (*(ulong *)(lVar5 + 0x10) <= uVar27) {
                    /* WARNING: Does not return */
      pcVar21 = (code *)SoftwareBreakpoint(1,0x100370524);
      (*pcVar21)();
    }
    lVar17 = *(long *)(lVar18 + *(int *)(local_78 + 0x20));
    if (*(long *)(lVar17 + 0x10) == 0) {
LAB_100370048:
      lVar9 = 0;
      FUN_10040211c();
      pcVar21 = *(code **)(*(long *)(lVar9 + -8) + 0x38);
      uVar16 = 1;
      lVar23 = alStack_120[3];
    }
    else {
      lVar23 = lVar5 + uVar27 * 0x10;
      lVar25 = *(long *)(lVar23 + 0x20);
      uVar6 = *(ulong *)(lVar23 + 0x28);
      _swift_bridgeObjectRetain(lVar17);
      FUN_10000464c(lVar25);
      if ((uVar6 & 1) == 0) {
        _swift_bridgeObjectRelease(lVar17);
        goto LAB_100370048;
      }
      lVar19 = *(long *)(lVar17 + 0x38);
      lVar9 = 0;
      FUN_10040211c();
      lVar23 = alStack_120[3];
      lVar24 = *(long *)(lVar9 + -8);
      FUN_100029504(lVar19 + *(long *)(lVar24 + 0x48) * lVar25,alStack_120[3],FUN_10040211c);
      _swift_bridgeObjectRelease(lVar17);
      pcVar21 = *(code **)(lVar24 + 0x38);
      uVar16 = 0;
    }
    (*pcVar21)(lVar23,uVar16,1,lVar9);
    lVar19 = local_88;
    lVar17 = local_100;
    FUN_1000087e4(lVar23,local_100,&DAT_10054ac40,&DAT_10041ce70);
    FUN_10040211c(0);
    lVar20 = *(long *)(lVar9 + -8);
    lVar24 = lVar17;
    (**(code **)(lVar20 + 0x30))(lVar17,1,lVar9);
    lVar25 = local_a0;
    if ((int)lVar24 == 1) {
                    /* WARNING: Does not return */
      pcVar21 = (code *)SoftwareBreakpoint(1,0x100370528);
      (*pcVar21)();
    }
    FUN_100007e64(lVar17,local_a0 + lVar8,FUN_10040211c);
    FUN_10002a29c(lVar23,&DAT_10054ac40,&DAT_10041ce70);
    (**(code **)(lVar20 + 0x38))(lVar25 + lVar8,0,1,lVar9);
  }
  _swift_bridgeObjectRelease(lVar5);
  FUN_100029548(lVar18,FUN_100387eec);
  lVar5 = local_78;
  lVar23 = local_90;
  lVar8 = lVar19;
  FUN_1001da410(lVar19,local_90 + *(int *)(local_78 + 0x18));
  lVar18 = local_98;
  local_a0 = CONCAT44(local_a0._4_4_,(int)lVar8);
  FUN_100029504(lVar19,local_98,FUN_1001d537c);
  uVar6 = local_e0;
  lVar8 = local_e8;
  (**(code **)(local_e8 + 0x38))(lVar18,0,1,local_e0);
  lVar17 = local_c8;
  iVar4 = *(int *)(lVar5 + 0x1c);
  lVar5 = (long)*(int *)(local_f0 + 0x30);
  FUN_1000087e4(lVar18,local_c8,&DAT_100550ec0,&DAT_100422eb0);
  FUN_1000087e4(lVar23 + iVar4,lVar17 + lVar5,&DAT_100550ec0,&DAT_100422eb0);
  pcVar21 = *(code **)(lVar8 + 0x30);
  lVar23 = lVar17;
  (*pcVar21)(lVar17,1,uVar6);
  lVar8 = local_f8;
  if ((int)lVar23 == 1) {
    FUN_10002a29c(lVar18,&DAT_100550ec0,&DAT_100422eb0);
    lVar5 = lVar17 + lVar5;
    (*pcVar21)(lVar5,1,uVar6);
    lVar18 = local_88;
    lVar9 = lStack_a8;
    lVar8 = local_d8;
    lVar19 = local_b0;
    if ((int)lVar5 == 1) {
      FUN_10002a29c(lVar17,&DAT_100550ec0,&DAT_100422eb0);
      local_e0 = CONCAT44(local_e0._4_4_,1);
      goto LAB_100370348;
    }
  }
  else {
    FUN_1000087e4(lVar17,local_f8,&DAT_100550ec0,&DAT_100422eb0);
    lVar18 = lVar17 + lVar5;
    (*pcVar21)(lVar18,1,uVar6);
    lVar9 = lStack_a8;
    lVar23 = alStack_120[1];
    lVar19 = local_b0;
    if ((int)lVar18 != 1) {
      FUN_100007e64(lVar17 + lVar5,alStack_120[1],FUN_1001d537c);
      lVar5 = lVar8;
      FUN_1001da410(lVar8,lVar23);
      local_e0 = CONCAT44(local_e0._4_4_,(int)lVar5);
      FUN_100029548(lVar23,FUN_1001d537c);
      FUN_10002a29c(local_98,&DAT_100550ec0,&DAT_100422eb0);
      FUN_100029548(lVar8,FUN_1001d537c);
      FUN_10002a29c(lVar17,&DAT_100550ec0,&DAT_100422eb0);
      lVar8 = local_d8;
      lVar18 = local_88;
      goto LAB_100370348;
    }
    FUN_10002a29c(local_98,&DAT_100550ec0,&DAT_100422eb0);
    FUN_100029548(lVar8,FUN_1001d537c);
  }
  lVar18 = local_88;
  lVar8 = local_d8;
  FUN_10002a29c(lVar17,&DAT_100550eb8,&DAT_100422a48);
  local_e0 = local_e0 & 0xffffffff00000000;
LAB_100370348:
  lVar23 = local_80;
  SVar10.unknown = &DAT_10055dca8;
  FUN_100002f94(&DAT_10055dca8,&DAT_1004334a8);
  lVar17 = local_90;
  SwiftUI::State::get_projectedValue(SVar10);
  lVar5 = local_c0;
  FUN_100029504(lVar17,local_c0,FUN_100387eec);
  FUN_100029504(lVar18,lVar9,FUN_1001d59ac);
  bVar2 = *(byte *)(lVar8 + 0x50);
  uVar6 = (ulong)bVar2 + 0x10 & ((ulong)bVar2 ^ 0xffffffffffffffff);
  bVar3 = *(byte *)(local_b8 + 0x50);
  uVar27 = local_d0 + (ulong)bVar3 + uVar6 & ((ulong)bVar3 ^ 0xffffffffffffffff);
  puVar7 = &DAT_10053c348;
  _swift_allocObject(&DAT_10053c348,uVar27 + lVar19,bVar2 | bVar3 | 7);
  FUN_100007e64(lVar5,puVar7 + uVar6,FUN_100387eec);
  FUN_100007e64(lVar9,puVar7 + uVar27,FUN_1001d59ac);
  FUN_1001b7378(0);
  puVar11 = &DAT_100553df0;
  FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
  EVar12 = SwiftUI::EnvironmentObject::init();
  FUN_100279594(0);
  puVar13 = &DAT_100553dd0;
  FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
  EVar14 = SwiftUI::EnvironmentObject::init();
  *(byte *)(lVar25 + *(int *)(lVar23 + 0x1c)) = (byte)local_a0 & 1;
  *(byte *)(lVar25 + *(int *)(lVar23 + 0x20)) = (byte)local_e0 & 1;
  puVar1 = (undefined8 *)(lVar25 + *(int *)(lVar23 + 0x28));
  *puVar1 = FUN_10038fd6c;
  puVar1[1] = puVar7;
  puVar1 = (undefined8 *)(lVar25 + *(int *)(lVar23 + 0x2c));
  *puVar1 = EVar12.unknown;
  puVar1[1] = puVar11;
  puVar1 = (undefined8 *)(lVar25 + *(int *)(lVar23 + 0x30));
  *puVar1 = EVar14.unknown;
  puVar1[1] = puVar13;
  puVar7 = PTR___type_metadata_for_Swift_Bool_100523b70;
  local_69 = 0;
  SwiftUI::State::init
            (lVar25 + *(int *)(lVar23 + 0x34),EVar14.unknown,
             PTR___type_metadata_for_Swift_Bool_100523b70);
  local_6a = 0;
  SwiftUI::State::init(lVar25 + *(int *)(lVar23 + 0x38),EVar14.unknown,puVar7);
  return;
}

