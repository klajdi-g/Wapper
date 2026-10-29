// rea decompile_all
// name: FUN_100368274
// address: 0x100368274
// body: available
// range: 0x100368274-0x10036862f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003685c8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100368274(long param_1,undefined8 param_2,long param_3,undefined8 param_4,uint param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  EnvironmentObject<undefined> EVar12;
  long lVar13;
  long extraout_x12;
  long extraout_x12_00;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  long local_d0;
  undefined8 local_c8;
  uint local_bc;
  long local_b8;
  long local_b0;
  long local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined1 local_61;
  
  lVar7 = 0;
  local_c8 = param_4;
  local_bc = param_5;
  local_98 = param_6;
  local_90 = param_7;
  FUN_1001d59ac();
  local_88 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = (long)&local_d0 - (extraout_x12 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  local_78 = extraout_x12;
  local_70 = lVar13;
  FUN_10025ee04();
  local_b0 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = lVar13 - (extraout_x12_00 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  local_b8 = extraout_x12_00;
  local_80 = lVar13;
  FUN_10040211c();
  local_d0 = *(long *)(lVar7 + -8);
  lVar20 = *(long *)(local_d0 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = lVar13 - (lVar20 + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0;
  FUN_100386f18();
  lVar15 = *(long *)(lVar8 + -8);
  lVar17 = *(long *)(lVar15 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = lVar13 - (lVar17 + 0xfU & 0xfffffffffffffff0);
  lVar7 = param_1;
  FUN_100029504(param_2,param_1,FUN_10040211c);
  lVar8 = *(long *)(param_3 + *(int *)(lVar8 + 0x18));
  if (lVar8 != 0) {
    _swift_retain(lVar8);
    uVar9 = param_2;
    FUN_10026a7c8();
    local_a8 = lVar7;
    uStack_a0 = uVar9;
    _swift_release();
    FUN_10026ac6c();
    FUN_1002165a4();
    local_c8 = CONCAT44(local_c8._4_4_,(int)lVar8);
    _swift_bridgeObjectRelease(lVar7);
    local_bc = local_bc & 1;
    FUN_100029504(param_3,lVar14,FUN_100386f18);
    FUN_100029504(param_2,lVar13,FUN_10040211c);
    lVar7 = local_80;
    FUN_100029504(local_98,local_80,FUN_10025ee04);
    lVar8 = local_70;
    FUN_100029504(local_90,local_70,FUN_1001d59ac);
    bVar2 = *(byte *)(lVar15 + 0x50);
    uVar16 = (ulong)bVar2 + 0x10 & ((ulong)bVar2 ^ 0xffffffffffffffff);
    bVar3 = *(byte *)(local_d0 + 0x50);
    uVar18 = lVar17 + (ulong)bVar3 + uVar16 & ((ulong)bVar3 ^ 0xffffffffffffffff);
    bVar4 = *(byte *)(local_b0 + 0x50);
    uVar21 = lVar20 + (ulong)bVar4 + uVar18 & ((ulong)bVar4 ^ 0xffffffffffffffff);
    bVar5 = *(byte *)(local_88 + 0x50);
    uVar19 = local_b8 + (ulong)bVar5 + uVar21 & ((ulong)bVar5 ^ 0xffffffffffffffff);
    puVar10 = &DAT_10053bf30;
    _swift_allocObject(&DAT_10053bf30,uVar19 + local_78,bVar2 | bVar3 | bVar4 | bVar5 | 7);
    FUN_100007e64(lVar14,puVar10 + uVar16,FUN_100386f18);
    FUN_100007e64(lVar13,puVar10 + uVar18,FUN_10040211c);
    FUN_100007e64(lVar7,puVar10 + uVar21,FUN_10025ee04);
    FUN_100007e64(lVar8,puVar10 + uVar19,FUN_1001d59ac);
    FUN_100279594(0);
    puVar11 = &DAT_100553dd0;
    FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
    EVar12 = SwiftUI::EnvironmentObject::init();
    lVar7 = 0;
    FUN_1003881b4();
    puVar1 = (undefined8 *)(param_1 + *(int *)(lVar7 + 0x14));
    *puVar1 = uStack_a0;
    puVar1[1] = local_a8;
    *(byte *)(param_1 + *(int *)(lVar7 + 0x18)) = (byte)local_c8 & 1;
    *(char *)(param_1 + *(int *)(lVar7 + 0x1c)) = (char)local_bc;
    puVar1 = (undefined8 *)(param_1 + *(int *)(lVar7 + 0x20));
    *puVar1 = FUN_100388a64;
    puVar1[1] = puVar10;
    puVar1 = (undefined8 *)(param_1 + *(int *)(lVar7 + 0x24));
    *puVar1 = EVar12.unknown;
    puVar1[1] = puVar11;
    local_61 = 0;
    SwiftUI::State::init
              (param_1 + *(int *)(lVar7 + 0x28),lVar7,PTR___type_metadata_for_Swift_Bool_100523b70);
    return;
  }
  FUN_100279594(0);
  FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x100368630);
  (*pcVar6)();
}

