// rea decompile_all
// name: FUN_1003c53e8
// address: 0x1003c53e8
// body: available
// range: 0x1003c53e8-0x1003c5747 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003c5720 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003c53e8(ulong *param_1,byte *param_2,long param_3,ulong param_4,undefined8 param_5)

{
  undefined1 *puVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte *pbVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  State SVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  EnvironmentObject<undefined> EVar15;
  undefined8 uVar16;
  undefined *puVar17;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong *puVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  byte abStack_e0 [8];
  long local_d8;
  long local_d0;
  long local_c8;
  ulong local_c0;
  ulong uStack_b8;
  byte *local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  ulong local_90;
  undefined8 local_88;
  ulong *local_80;
  byte local_71;
  undefined1 local_70;
  undefined8 local_68;
  
  lVar9 = 0;
  local_90 = param_4;
  local_88 = param_5;
  local_80 = param_1;
  FUN_1003cff30(0,param_4,param_5);
  local_a8 = *(long *)(lVar9 + -8);
  local_c8 = *(long *)(local_a8 + 0x40);
  local_98 = lVar9;
  (*(code *)PTR____chkstk_darwin_100521118)(local_c8 + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0;
  local_b0 = abStack_e0 + -extraout_x8;
  FUN_10040211c();
  lVar19 = *(long *)(lVar10 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar19 + 0x40));
  lVar18 = (long)(abStack_e0 + -extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  bVar4 = *param_2;
  uVar24 = (ulong)bVar4;
  uVar20 = uVar24;
  FUN_100402278();
  lVar23 = *(long *)(param_3 + 0x10);
  uVar22 = *(ulong *)(lVar23 + 0x10);
  lVar11 = 0;
  local_c0 = param_4;
  uStack_b8 = uVar20;
  FUN_1003e5970();
  lVar9 = (long)*(int *)(lVar11 + 0x14);
  local_a0 = lVar11;
  if (uVar22 == 0) {
    uVar16 = 1;
    puVar21 = local_80;
  }
  else {
    uVar20 = 0;
    bVar5 = *(byte *)(lVar19 + 0x50);
    local_d8 = lVar9;
    local_d0 = param_3;
    do {
      if (*(ulong *)(lVar23 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1003c5748);
        (*pcVar8)();
      }
      FUN_100029504(lVar23 + ((ulong)bVar5 + 0x20 & ((ulong)bVar5 ^ 0xffffffffffffffff)) +
                    *(long *)(lVar19 + 0x48) * uVar20,lVar18 - extraout_x12,FUN_10040211c);
      FUN_100007e64(lVar18 - extraout_x12,lVar18,FUN_10040211c);
      puVar21 = local_80;
      lVar9 = local_d8;
      bVar6 = *(byte *)(lVar18 + *(int *)(lVar10 + 0x24));
      if (bVar6 != 0xe && bVar6 == bVar4) {
        FUN_100007e64(lVar18,(long)local_80 + local_d8,FUN_10040211c);
        uVar16 = 0;
        param_3 = local_d0;
        goto LAB_1003c559c;
      }
      uVar20 = uVar20 + 1;
      FUN_100029548(lVar18,FUN_10040211c);
    } while (uVar22 != uVar20);
    uVar16 = 1;
    param_3 = local_d0;
    puVar21 = local_80;
    lVar9 = local_d8;
  }
LAB_1003c559c:
  (**(code **)(lVar19 + 0x38))((long)puVar21 + lVar9,uVar16,1,lVar10);
  lVar11 = local_98;
  puVar1 = (undefined1 *)(param_3 + *(int *)(local_98 + 0x68));
  local_70 = *puVar1;
  local_68 = *(undefined8 *)(puVar1 + 8);
  SVar12.unknown = &DAT_10055bd08;
  puVar17 = &DAT_100435de0;
  FUN_100002f94();
  SwiftUI::State::get_wrappedValue(SVar12);
  local_d0 = CONCAT44(local_d0._4_4_,(uint)(local_71 != 0xe && local_71 == bVar4));
  local_80 = (ulong *)CONCAT44(local_80._4_4_,(uint)*(byte *)(param_3 + 0x30));
  FUN_1003e5b38();
  lVar10 = local_a8;
  pbVar7 = local_b0;
  (**(code **)(local_a8 + 0x10))(local_b0,param_3,lVar11);
  uVar20 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar22 = uVar20 + 0x20 & (uVar20 ^ 0xffffffffffffffff);
  lVar9 = uVar22 + local_c8;
  puVar13 = &DAT_10053dba8;
  _swift_allocObject(&DAT_10053dba8,lVar9 + 1,uVar20 | 7);
  *(ulong *)(puVar13 + 0x10) = local_90;
  *(undefined8 *)(puVar13 + 0x18) = local_88;
  (**(code **)(lVar10 + 0x20))(puVar13 + uVar22,pbVar7,lVar11);
  puVar13[lVar9] = bVar4;
  FUN_100279594(0);
  puVar14 = &DAT_100553dd0;
  FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
  EVar15 = SwiftUI::EnvironmentObject::init();
  *puVar21 = uStack_b8;
  puVar21[1] = local_c0;
  *(char *)((long)puVar21 + (long)*(int *)(local_a0 + 0x18)) = (char)local_d0;
  *(char *)((long)puVar21 + (long)*(int *)(local_a0 + 0x1c)) = (char)local_80;
  puVar2 = (ulong *)((long)puVar21 + (long)*(int *)(local_a0 + 0x20));
  *puVar2 = uVar24;
  puVar2[1] = (ulong)puVar17;
  puVar3 = (undefined8 *)((long)puVar21 + (long)*(int *)(local_a0 + 0x24));
  *puVar3 = FUN_1003e603c;
  puVar3[1] = puVar13;
  puVar3 = (undefined8 *)((long)puVar21 + (long)*(int *)(local_a0 + 0x28));
  *puVar3 = EVar15.unknown;
  puVar3[1] = puVar14;
  local_70 = 0;
  SwiftUI::State::init
            ((long)puVar21 + (long)*(int *)(local_a0 + 0x2c),EVar15.unknown,
             PTR___type_metadata_for_Swift_Bool_100523b70);
  return;
}

