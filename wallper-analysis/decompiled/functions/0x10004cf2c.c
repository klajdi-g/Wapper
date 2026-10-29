// rea decompile_all
// name: FUN_10004cf2c
// address: 0x10004cf2c
// body: available
// range: 0x10004cf2c-0x10004d35f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010004d1b4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10004cf2c(ulong *param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  OpacityTransition OVar3;
  undefined *puVar4;
  State SVar5;
  undefined *puVar6;
  EnvironmentObject<undefined> EVar7;
  undefined8 *puVar8;
  EnvironmentObject<undefined> EVar9;
  undefined *puVar10;
  EnvironmentObject<undefined> EVar11;
  UUID UVar12;
  AnyTransition AVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar14;
  code *pcVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  undefined1 auStack_d0 [4];
  uint local_cc;
  ulong local_c8;
  ulong local_c0;
  long local_b8;
  undefined *local_b0;
  undefined1 *local_a8;
  ulong local_a0;
  ulong uStack_98;
  byte local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  
  OVar3 = SwiftUI::OpacityTransition::typeMetadataAccessor();
  lVar14 = *(long *)(OVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar14 + 0x40));
  local_a8 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar16 = (long)(auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  puVar4 = &DAT_10054a9c8;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar17 = lVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = lVar17 - extraout_x12_00;
  uStack_98 = *(ulong *)(param_2 + 0x118);
  local_a0 = *(ulong *)(param_2 + 0x110);
  SVar5.unknown = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar5);
  bVar2 = (char)local_80 != '\x01';
  if (bVar2) {
    puVar4 = &DAT_10054d698;
    FUN_100002f94(&DAT_10054d698,&DAT_10041e1d8);
    pcVar15 = *(code **)(*(long *)(puVar4 + -8) + 0x38);
  }
  else {
    uStack_78 = *(undefined8 *)(param_2 + 0x118);
    local_80 = *(undefined8 *)(param_2 + 0x110);
    SwiftUI::State::get_projectedValue(SVar5);
    local_c8 = uStack_98;
    local_c0 = local_a0;
    local_cc = (uint)local_90;
    uVar19 = *(ulong *)(param_2 + 0x50);
    FUN_100226ac0(0);
    puVar6 = &DAT_10054aa48;
    FUN_1000036d0(&DAT_10054aa48,FUN_100226ac0,&TargetProtocolConformanceDescriptor_10042b420);
    EVar7 = SwiftUI::EnvironmentObject::init();
    FUN_100279594(0);
    puVar8 = &DAT_100553dd0;
    FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
    EVar9 = SwiftUI::EnvironmentObject::init();
    local_b8 = lVar16;
    FUN_1001b7378(0);
    puVar10 = &DAT_100553df0;
    local_b0 = OVar3.unknown;
    FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
    EVar11 = SwiftUI::EnvironmentObject::init();
    *param_1 = local_c0;
    param_1[1] = local_c8;
    *(char *)(param_1 + 2) = (char)local_cc;
    param_1[3] = uVar19;
    param_1[4] = (ulong)EVar7.unknown;
    param_1[5] = (ulong)puVar6;
    param_1[6] = (ulong)EVar9.unknown;
    param_1[7] = (ulong)puVar8;
    param_1[8] = (ulong)EVar11.unknown;
    param_1[9] = (ulong)puVar10;
    lVar16 = 0;
    FUN_10006866c();
    iVar1 = *(int *)(lVar16 + 0x24);
    UVar12 = Foundation::UUID::typeMetadataAccessor();
    pcVar15 = *(code **)(*(long *)(UVar12.unknown + -8) + 0x38);
    local_c0 = lVar14;
    (*pcVar15)(lVar18,1,1,UVar12.unknown);
    FUN_1000087e4(lVar18,lVar17,&DAT_10054a9c8,&DAT_10041bbe0);
    SwiftUI::State::init((long)param_1 + (long)iVar1,UVar12.unknown,puVar4);
    FUN_10002a29c(lVar18,&DAT_10054a9c8,&DAT_10041bbe0);
    iVar1 = *(int *)(lVar16 + 0x28);
    (*pcVar15)(lVar18,1,1,UVar12.unknown);
    FUN_1000087e4(lVar18,lVar17,&DAT_10054a9c8,&DAT_10041bbe0);
    SwiftUI::State::init((long)param_1 + (long)iVar1,UVar12.unknown,puVar4);
    FUN_10002a29c(lVar18,&DAT_10054a9c8,&DAT_10041bbe0);
    local_a0 = 0;
    uStack_98 = 0xe000000000000000;
    SwiftUI::State::init
              ((long)param_1 + (long)*(int *)(lVar16 + 0x2c),UVar12.unknown,
               PTR___type_metadata_for_Swift_String_100523a98);
    local_a0 = local_a0 & 0xffffffffffffff00;
    SwiftUI::State::init
              ((long)param_1 + (long)*(int *)(lVar16 + 0x30),UVar12.unknown,
               PTR___type_metadata_for_Swift_Bool_100523b70);
    lVar14 = local_b8;
    SwiftUI::OpacityTransition::init();
    puVar6 = local_b0;
    uVar19 = local_c0;
    (**(code **)(local_c0 + 0x10))(local_a8,lVar14,local_b0);
    puVar4 = &DAT_10054ae80;
    FUN_1000036d0(&DAT_10054ae80,PTR_typeMetadataAccessor_1005225d8,
                  PTR_SwiftUI__SwiftUI__OpacityTransition_>SwiftUI__Transition_1005225c8);
    AVar13 = SwiftUI::AnyTransition::_init(puVar4,puVar6,puVar4);
    (**(code **)(uVar19 + 8))(lVar14,puVar6);
    puVar4 = &DAT_10054d6a0;
    FUN_100002f94(&DAT_10054d6a0,&DAT_10041e1e0);
    *(undefined **)((long)param_1 + (long)*(int *)(puVar4 + 0x24)) = AVar13.unknown;
    puVar4 = &DAT_10054d698;
    FUN_100002f94(&DAT_10054d698,&DAT_10041e1d8);
    *(undefined8 *)((long)param_1 + (long)*(int *)(puVar4 + 0x24)) = 0x4024000000000000;
    pcVar15 = *(code **)(*(long *)(puVar4 + -8) + 0x38);
  }
  (*pcVar15)(param_1,bVar2,1,puVar4);
  return;
}

