// rea decompile_all
// name: FUN_1003c35f4
// address: 0x1003c35f4
// body: available
// range: 0x1003c35f4-0x1003c3b53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003c3884 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003c35f4(long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined *puVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  State SVar11;
  undefined8 *puVar12;
  EnvironmentObject<undefined> EVar13;
  URL UVar14;
  ContentTransition CVar15;
  Animation AVar16;
  Animation AVar17;
  long extraout_x8;
  long lVar18;
  long extraout_x8_00;
  double dVar19;
  long extraout_x12;
  undefined *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  uint local_f0;
  uint uStack_ec;
  long local_e8 [2];
  undefined *local_d8;
  long local_d0;
  undefined *local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  char local_a8;
  ulong local_a0;
  undefined8 uStack_98;
  ulong local_90;
  
  puVar20 = &DAT_100553d90;
  local_b8 = param_1;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  local_d8 = puVar20;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar20 + -8) + 0x40));
  lVar18 = (long)&local_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_e8[1] = lVar18;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = lVar18 - extraout_x12;
  puVar20 = &DAT_1005603c0;
  local_e8[0] = lVar18;
  FUN_100002f94(&DAT_1005603c0,&DAT_100435e68);
  local_c8 = puVar20;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar20 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar18 = lVar18 - extraout_x8_00;
  FUN_100029504(param_3,lVar18,FUN_10040211c);
  lVar9 = 0;
  FUN_1003cff30(0,param_5,param_6);
  lVar10 = 0;
  FUN_1003e4bc8();
  SVar11.unknown = &DAT_1005602d0;
  FUN_100002f94(&DAT_1005602d0,&DAT_100435db8);
  SwiftUI::State::get_projectedValue(SVar11);
  puVar1 = (ulong *)(param_4 + *(int *)(lVar9 + 0x80));
  local_a0 = *puVar1;
  local_90 = puVar1[2];
  uStack_98 = CONCAT71(uStack_98._1_7_,(char)puVar1[1]);
  SVar11.unknown = &DAT_100560300;
  puVar20 = &DAT_100435dd8;
  local_d0 = lVar9;
  FUN_100002f94();
  SwiftUI::State::get_wrappedValue(SVar11);
  local_f0 = (uint)(local_a8 != '\x01' && local_b0 == param_2);
  uStack_ec = (uint)*(byte *)(param_4 + 0x19);
  local_c0 = param_2;
  if (*(code **)(param_4 + 0x38) == (code *)0x0) {
    param_3 = 0;
    puVar20 = (undefined *)0x0;
  }
  else {
    (**(code **)(param_4 + 0x38))();
  }
  uVar21 = *(undefined8 *)(param_4 + 0x48);
  uVar3 = *(undefined8 *)(param_4 + 0x50);
  uVar22 = *(undefined8 *)(param_4 + 0x58);
  uVar4 = *(undefined8 *)(param_4 + 0x60);
  FUN_1000939f8(uVar21,uVar3);
  FUN_1000939f8(uVar22,uVar4);
  FUN_100279594(0);
  puVar12 = &DAT_100553dd0;
  FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
  EVar13 = SwiftUI::EnvironmentObject::init();
  lVar8 = local_c0;
  puVar6 = PTR___type_metadata_for_Swift_Bool_100523b70;
  *(long *)(lVar18 + *(int *)(lVar10 + 0x14)) = local_c0;
  uVar7 = uStack_ec;
  *(char *)(lVar18 + *(int *)(lVar10 + 0x1c)) = (char)local_f0;
  *(char *)(lVar18 + *(int *)(lVar10 + 0x20)) = (char)uVar7;
  puVar2 = (undefined8 *)(lVar18 + *(int *)(lVar10 + 0x24));
  *puVar2 = param_3;
  puVar2[1] = puVar20;
  puVar2 = (undefined8 *)(lVar18 + *(int *)(lVar10 + 0x28));
  *puVar2 = uVar21;
  puVar2[1] = uVar3;
  puVar2 = (undefined8 *)(lVar18 + *(int *)(lVar10 + 0x2c));
  *puVar2 = uVar22;
  puVar2[1] = uVar4;
  puVar2 = (undefined8 *)(lVar18 + *(int *)(lVar10 + 0x30));
  *puVar2 = EVar13.unknown;
  puVar2[1] = puVar12;
  local_a0 = local_a0 & 0xffffffffffffff00;
  SwiftUI::State::init
            (lVar18 + *(int *)(lVar10 + 0x34),EVar13.unknown,
             PTR___type_metadata_for_Swift_Bool_100523b70);
  iVar5 = *(int *)(lVar10 + 0x38);
  local_a0 = 0;
  puVar20 = &DAT_10054bd30;
  FUN_100002f94(&DAT_10054bd30,&DAT_10041d460);
  SwiftUI::State::init(lVar18 + iVar5,puVar20,puVar20);
  iVar5 = *(int *)(lVar10 + 0x3c);
  UVar14 = Foundation::URL::typeMetadataAccessor();
  lVar9 = local_e8[0];
  (**(code **)(*(long *)(UVar14.unknown + -8) + 0x38))(local_e8[0],1,1,UVar14.unknown);
  FUN_1000087e4(lVar9,local_e8[1],&DAT_100553d90,&DAT_10041bf10);
  SwiftUI::State::init(lVar18 + iVar5,UVar14.unknown,local_d8);
  FUN_10002a29c(lVar9,&DAT_100553d90,&DAT_10041bf10);
  iVar5 = *(int *)(lVar10 + 0x40);
  local_a0 = 0;
  uStack_98 = 0;
  puVar20 = &DAT_100549db0;
  FUN_100002f94(&DAT_100549db0,&DAT_100419ed0);
  SwiftUI::State::init(lVar18 + iVar5,puVar20,puVar20);
  local_a0 = local_a0 & 0xffffffffffffff00;
  SwiftUI::State::init(lVar18 + *(int *)(lVar10 + 0x44),puVar20,puVar6);
  local_a0 = 0;
  uStack_98 = 0xe000000000000000;
  SwiftUI::State::init
            (lVar18 + *(int *)(lVar10 + 0x48),puVar20,PTR___type_metadata_for_Swift_String_100523a98
            );
  iVar5 = *(int *)(local_c8 + 0x24);
  CVar15.unknown = &DAT_10054b490;
  FUN_100002f94(&DAT_10054b490,&DAT_10041c7e0);
  SwiftUI::ContentTransition::get_opacity(CVar15);
  puVar20 = &DAT_100435f70;
  _swift_getKeyPath();
  *(undefined **)(lVar18 + iVar5) = puVar20;
  puVar12 = (undefined8 *)(param_4 + *(int *)(local_d0 + 100));
  uStack_98 = puVar12[1];
  local_a0 = *puVar12;
  SVar11.unknown = &DAT_10054ba40;
  FUN_100002f94(&DAT_10054ba40,&DAT_100423be0);
  SwiftUI::State::get_wrappedValue(SVar11);
  if (lVar8 < 0x10) {
    dVar19 = (double)lVar8 * 0.012;
  }
  else {
    dVar19 = 0.18;
  }
  if (local_b0 < 3) {
    uVar21 = 0x4018000000000000;
    uVar22 = 0;
  }
  else {
    uVar21 = 0;
    uVar22 = 0x3ff0000000000000;
  }
  puVar20 = &DAT_1005603b0;
  FUN_100002f94(&DAT_1005603b0,&DAT_100435e60);
  lVar9 = local_b8;
  *(undefined8 *)(local_b8 + *(int *)(puVar20 + 0x24)) = uVar22;
  FUN_1000087e4(lVar18,local_b8,&DAT_1005603c0,&DAT_100435e68);
  AVar16.unknown = &DAT_1005603a0;
  FUN_100002f94(&DAT_1005603a0,&DAT_100435e58);
  puVar12 = (undefined8 *)(lVar9 + *(int *)(AVar16.unknown + 0x24));
  *puVar12 = 0;
  puVar12[1] = uVar21;
  AVar16 = SwiftUI::Animation::easeOut(0.38,AVar16);
  AVar17 = SwiftUI::Animation::delay(dVar19,AVar16);
  _swift_release(AVar16.unknown);
  FUN_10002a29c(lVar18,&DAT_1005603c0,&DAT_100435e68);
  puVar20 = &DAT_100560390;
  FUN_100002f94(&DAT_100560390,&DAT_100435e50);
  puVar12 = (undefined8 *)(lVar9 + *(int *)(puVar20 + 0x24));
  *puVar12 = AVar17.unknown;
  *(bool *)(puVar12 + 1) = 2 < local_b0;
  return;
}

