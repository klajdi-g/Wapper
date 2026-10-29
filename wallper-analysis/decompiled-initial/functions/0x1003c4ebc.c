// rea decompile_all
// name: FUN_1003c4ebc
// address: 0x1003c4ebc
// body: available
// range: 0x1003c4ebc-0x1003c538b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003c51b8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003c4ebc(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  State SVar11;
  undefined8 *puVar12;
  EnvironmentObject<undefined> EVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  long extraout_x8;
  long lVar19;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar20;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar21;
  long lVar22;
  undefined8 *puVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  undefined8 auStack_f0 [2];
  uint local_e0;
  uint uStack_dc;
  code *local_d8 [2];
  long local_c8;
  undefined8 local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  undefined *local_90;
  long local_88;
  undefined8 local_80;
  char local_71;
  long local_70;
  undefined8 local_68;
  
  puVar7 = &DAT_100560560;
  local_98 = param_1;
  FUN_100002f94(&DAT_100560560,&DAT_100435f10);
  local_a8 = *(long *)(puVar7 + -8);
  local_90 = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_a8 + 0x40));
  lVar19 = (long)&local_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_a0 = lVar19;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar19 = lVar19 - extraout_x12;
  lVar8 = 0;
  local_c0 = param_4;
  local_b0 = lVar19;
  local_80 = param_3;
  FUN_1003cff30(0,param_3,param_4);
  lVar22 = *(long *)(lVar8 + -8);
  local_88 = *(long *)(lVar22 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)(local_88 + 0xfU & 0xfffffffffffffff0);
  lVar19 = lVar19 - extraout_x8_00;
  lVar9 = 0;
  local_c8 = lVar19;
  FUN_1003e5970();
  lVar10 = lVar9;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  lVar19 = lVar19 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_b8 = lVar19;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar23 = (undefined8 *)(lVar19 - extraout_x12_00);
  lVar25 = *(long *)(param_2 + 0x10);
  lVar24 = *(long *)(lVar25 + 0x10);
  iVar4 = *(int *)(lVar10 + 0x14);
  lVar10 = 0;
  FUN_10040211c();
  lVar19 = *(long *)(lVar10 + -8);
  bVar3 = lVar24 == 0;
  if (!bVar3) {
    uVar20 = (ulong)*(byte *)(lVar19 + 0x50);
    FUN_100029504(lVar25 + (uVar20 + 0x20 & (uVar20 ^ 0xffffffffffffffff)),
                  (long)puVar23 + (long)iVar4,FUN_10040211c);
  }
  (**(code **)(lVar19 + 0x38))((long)puVar23 + (long)iVar4,bVar3,1,lVar10);
  puVar1 = (undefined1 *)(param_2 + *(int *)(lVar8 + 0x68));
  local_68 = *(undefined8 *)(puVar1 + 8);
  SVar11.unknown = &DAT_10055bd08;
  local_70._0_1_ = *puVar1;
  FUN_100002f94(&DAT_10055bd08,&DAT_100435de0);
  SwiftUI::State::get_wrappedValue(SVar11);
  lVar10 = local_c8;
  local_e0 = (uint)(local_71 == '\x0e');
  uStack_dc = (uint)*(byte *)(param_2 + 0x30);
  local_d8[1] = *(code **)(lVar22 + 0x10);
  (*local_d8[1])(local_c8,param_2,lVar8);
  uVar26 = (ulong)*(byte *)(lVar22 + 0x50);
  uVar20 = uVar26 + 0x20 & (uVar26 ^ 0xffffffffffffffff);
  puVar7 = &DAT_10053db58;
  _swift_allocObject(&DAT_10053db58,uVar20 + local_88,uVar26 | 7);
  uVar6 = local_c0;
  *(undefined8 *)(puVar7 + 0x10) = local_80;
  *(undefined8 *)(puVar7 + 0x18) = local_c0;
  local_d8[0] = *(code **)(lVar22 + 0x20);
  (*local_d8[0])(puVar7 + uVar20,lVar10,lVar8);
  FUN_100279594(0);
  puVar12 = &DAT_100553dd0;
  FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
  EVar13 = SwiftUI::EnvironmentObject::init();
  *puVar23 = 0x6c6c41;
  uVar5 = uStack_dc;
  puVar23[1] = 0xe300000000000000;
  *(char *)((long)puVar23 + (long)*(int *)(lVar9 + 0x18)) = (char)local_e0;
  *(char *)((long)puVar23 + (long)*(int *)(lVar9 + 0x1c)) = (char)uVar5;
  puVar2 = (undefined8 *)((long)puVar23 + (long)*(int *)(lVar9 + 0x20));
  *puVar2 = 0x81939ff0;
  puVar2[1] = 0xa400000000000000;
  puVar2 = (undefined8 *)((long)puVar23 + (long)*(int *)(lVar9 + 0x24));
  *puVar2 = FUN_1003e5984;
  puVar2[1] = puVar7;
  puVar2 = (undefined8 *)((long)puVar23 + (long)*(int *)(lVar9 + 0x28));
  *puVar2 = EVar13.unknown;
  puVar2[1] = puVar12;
  local_70 = (ulong)local_70._1_7_ << 8;
  SwiftUI::State::init
            ((long)puVar23 + (long)*(int *)(lVar9 + 0x2c),EVar13.unknown,
             PTR___type_metadata_for_Swift_Bool_100523b70);
  lVar19 = lVar8;
  FUN_1003bc998();
  puVar7 = &DAT_100435f20;
  local_70 = lVar19;
  _swift_getKeyPath(&DAT_100435f20);
  (*local_d8[1])(lVar10,param_2,lVar8);
  puVar14 = &DAT_10053db80;
  _swift_allocObject(&DAT_10053db80,uVar20 + local_88,uVar26 | 7);
  *(undefined8 *)(puVar14 + 0x10) = local_80;
  *(undefined8 *)(puVar14 + 0x18) = uVar6;
  (*local_d8[0])(puVar14 + uVar20,lVar10,lVar8);
  puVar15 = &DAT_100560568;
  FUN_100002f94(&DAT_100560568,&DAT_100435f38);
  puVar16 = &DAT_100560570;
  FUN_1000087a0(&DAT_100560570,&DAT_100560568,&DAT_100435f38,
                PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100523b60);
  puVar17 = puVar16;
  FUN_100214690();
  puVar18 = &DAT_100560578;
  FUN_1000036d0(&DAT_100560578,FUN_1003e5970,&TargetProtocolConformanceDescriptor_1004362d0);
  puVar23[-2] = puVar18;
  lVar8 = local_b0;
  (extension_SwiftUI)::SwiftUI::ForEach::_init
            (local_b0,puVar18,puVar7,FUN_1003e5990,puVar14,puVar15,lVar9,puVar16,puVar17);
  lVar10 = local_b8;
  FUN_100029504(puVar23,local_b8,FUN_1003e5970);
  puVar14 = local_90;
  lVar19 = local_a0;
  lVar9 = local_a8;
  pcVar21 = *(code **)(local_a8 + 0x10);
  (*pcVar21)(local_a0,lVar8,local_90);
  lVar22 = local_98;
  FUN_100029504(lVar10,local_98,FUN_1003e5970);
  puVar7 = &DAT_100560580;
  FUN_100002f94(&DAT_100560580,&DAT_100435f40);
  (*pcVar21)(lVar22 + *(int *)(puVar7 + 0x30),lVar19,puVar14);
  pcVar21 = *(code **)(lVar9 + 8);
  (*pcVar21)(lVar8,puVar14);
  FUN_100029548(puVar23,FUN_1003e5970);
  (*pcVar21)(lVar19,puVar14);
  FUN_100029548(lVar10,FUN_1003e5970);
  return;
}

