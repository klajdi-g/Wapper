// rea decompile_all
// name: FUN_1003013b0
// address: 0x1003013b0
// body: available
// range: 0x1003013b0-0x10030172b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003015cc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003013b0(long param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  State SVar6;
  undefined *puVar7;
  EnvironmentObject<undefined> EVar8;
  undefined8 *puVar9;
  EnvironmentObject<undefined> EVar10;
  undefined *puVar11;
  undefined *puVar12;
  long extraout_x8;
  long lVar13;
  long extraout_x12;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  ulong local_c0 [4];
  long local_a0;
  long local_98;
  long local_90;
  ulong local_88;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  ulong uStack_68;
  
  lVar3 = 0;
  local_90 = param_1;
  FUN_1003009dc();
  local_a0 = *(long *)(lVar3 + -8);
  lVar18 = *(long *)(local_a0 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = (long)local_c0 - (lVar18 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  FUN_100301d0c();
  lVar5 = lVar4;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar13 = lVar17 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_98 = lVar13;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar16 = (undefined8 *)(lVar13 - extraout_x12);
  FUN_100300d74((long)puVar16 + (long)*(int *)(lVar5 + 0x18));
  FUN_100029504(param_2 + *(int *)(lVar3 + 0x1c),(long)puVar16 + (long)*(int *)(lVar4 + 0x1c),
                FUN_10040211c);
  puVar1 = (ulong *)(param_2 + *(int *)(lVar3 + 0x28));
  local_c0[3] = *puVar1;
  local_c0[2] = puVar1[1];
  SVar6.unknown = &DAT_10055b708;
  local_70 = local_c0[3];
  uStack_68 = local_c0[2];
  FUN_100002f94(&DAT_10055b708,&DAT_100430100);
  SwiftUI::State::get_projectedValue(SVar6);
  uVar2 = local_88;
  FUN_10016ed68(0);
  puVar7 = &DAT_10054aba0;
  FUN_1000036d0(&DAT_10054aba0,FUN_10016ed68,&TargetProtocolConformanceDescriptor_1004295e8);
  local_c0[1] = uStack_78;
  local_c0[0] = local_80;
  EVar8 = SwiftUI::EnvironmentObject::init();
  FUN_100279594(0);
  puVar9 = &DAT_100553dd0;
  FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
  EVar10 = SwiftUI::EnvironmentObject::init();
  *puVar16 = EVar8.unknown;
  puVar16[1] = puVar7;
  puVar16[2] = EVar10.unknown;
  puVar16[3] = puVar9;
  puVar1 = (ulong *)((long)puVar16 + (long)*(int *)(lVar4 + 0x20));
  *puVar1 = uVar2;
  puVar1[2] = local_c0[1];
  puVar1[1] = local_c0[0];
  FUN_100029504(param_2,lVar17,FUN_1003009dc);
  uVar14 = (ulong)*(byte *)(local_a0 + 0x50);
  uVar15 = uVar14 + 0x10 & (uVar14 ^ 0xffffffffffffffff);
  puVar7 = &DAT_100539bf0;
  _swift_allocObject(&DAT_100539bf0,uVar15 + lVar18,uVar14 | 7);
  FUN_100007e64(lVar17,puVar7 + uVar15,FUN_1003009dc);
  local_70 = local_70 & 0xffffffffffffff00;
  SwiftUI::State::init(&local_88,puVar7,PTR___type_metadata_for_Swift_Bool_100523b70);
  uVar2 = local_80;
  local_a0 = CONCAT44(local_a0._4_4_,(uint)(byte)local_88);
  local_88 = local_c0[3];
  local_80 = local_c0[2];
  SwiftUI::State::get_wrappedValue(SVar6);
  lVar4 = *(long *)(local_70 + 0x10);
  _swift_bridgeObjectRelease();
  FUN_100029504(param_2,lVar17,FUN_1003009dc);
  puVar11 = &DAT_100539c18;
  _swift_allocObject(&DAT_100539c18,uVar15 + lVar18,uVar14 | 7);
  FUN_100007e64(lVar17,puVar11 + uVar15,FUN_1003009dc);
  lVar3 = local_98;
  FUN_100029504(puVar16,local_98,FUN_100301d0c);
  lVar5 = local_90;
  FUN_100029504(lVar3,local_90,FUN_100301d0c);
  puVar12 = &DAT_10055b710;
  FUN_100002f94(&DAT_10055b710,&DAT_100430108);
  puVar9 = (undefined8 *)(lVar5 + *(int *)(puVar12 + 0x30));
  *puVar9 = FUN_100301ed4;
  puVar9[1] = puVar7;
  *(char *)(puVar9 + 2) = (char)local_a0;
  puVar9[3] = uVar2;
  lVar5 = lVar5 + *(int *)(puVar12 + 0x40);
  *(bool *)lVar5 = lVar4 != 0;
  *(code **)(lVar5 + 8) = FUN_100301ee8;
  *(undefined **)(lVar5 + 0x10) = puVar11;
  _swift_retain(uVar2);
  _swift_retain(puVar11);
  _swift_retain(puVar7);
  FUN_100029548(puVar16,FUN_100301d0c);
  _swift_release(uVar2);
  _swift_release(puVar7);
  _swift_release(puVar11);
  FUN_100029548(lVar3,FUN_100301d0c);
  return;
}

