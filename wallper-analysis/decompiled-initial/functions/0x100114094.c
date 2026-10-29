// rea decompile_all
// name: FUN_100114094
// address: 0x100114094
// body: available
// range: 0x100114094-0x10011441f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010011431c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100114094(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 *puVar4;
  byte bVar5;
  long lVar6;
  MainActor *pMVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  TaskPriority TVar10;
  TaskPriority TVar11;
  undefined *puVar12;
  _StringGuts _Var13;
  char *pcVar14;
  void *in_x3;
  ulong uVar15;
  long extraout_x8;
  undefined8 *unaff_x20;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  String SVar20;
  String SVar21;
  undefined8 auStack_e0 [2];
  undefined1 auStack_d0 [8];
  long local_c8;
  long local_c0;
  undefined *local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  uint local_98;
  uint uStack_94;
  undefined8 local_90;
  undefined1 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ushort local_68;
  byte local_66;
  
  FUN_100114420(&local_78);
  local_a8 = local_78;
  uStack_a0 = uStack_70;
  local_98 = (uint)local_68;
  uStack_94 = (uint)local_66;
  lVar6 = 0;
  FUN_100113f00();
  lVar16 = *(long *)(lVar6 + -8);
  lVar6 = *(long *)(lVar16 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  FUN_100119d34();
  pMVar7 = Swift::MainActor::typeMetadataAccessor();
  puVar9 = PTR_typeMetadataAccessor_1005246d8;
  pMVar7 = Swift::MainActor::get_shared(pMVar7,pMVar7);
  puVar8 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar9,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  uVar15 = (ulong)*(byte *)(lVar16 + 0x50);
  uVar17 = uVar15 + 0x20 & (uVar15 ^ 0xffffffffffffffff);
  puVar9 = &DAT_10052cc78;
  _swift_allocObject(&DAT_10052cc78,uVar17 + lVar6,uVar15 | 7);
  *(MainActor **)(puVar9 + 0x10) = pMVar7;
  *(undefined8 **)(puVar9 + 0x18) = puVar8;
  FUN_100119e80(auStack_d0 + -(lVar6 + 0xfU & 0xfffffffffffffff0),puVar9 + uVar17);
  TVar10 = Swift::TaskPriority::typeMetadataAccessor();
  lVar19 = *(long *)(TVar10.unknown + -8);
  lVar16 = *(long *)(lVar19 + 0x40);
  TVar11 = TVar10;
  (*(code *)PTR____chkstk_darwin_100521118)();
  uVar15 = lVar16 + 0xfU & 0xfffffffffffffff0;
  lVar6 = (long)(auStack_d0 + -(lVar6 + 0xfU & 0xfffffffffffffff0)) - uVar15;
  Swift::TaskPriority::get_userInitiated(TVar11);
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  pcVar14 = (char *)0x0;
  bVar5 = Swift::_stdlib_isOSVersionAtLeast(0x1a,4,0);
  if ((bVar5 & 1) == 0) {
    puVar12 = &DAT_100549dc8;
    FUN_100002f94(&DAT_100549dc8,&DAT_100419ee0);
    puVar8 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar12 + 0x24));
    puVar12 = &DAT_100549d28;
    FUN_100002f94(&DAT_100549d28,&DAT_100426240);
    iVar3 = *(int *)(puVar12 + 0x28);
    *(undefined8 *)((long)puVar8 + (long)iVar3) = uVar1;
    ((undefined8 *)((long)puVar8 + (long)iVar3))[1] = uVar2;
    (**(code **)(lVar19 + 0x20))((long)puVar8 + (long)*(int *)(puVar12 + 0x24),lVar6,TVar10.unknown)
    ;
    *puVar8 = &DAT_100426230;
    puVar8[1] = puVar9;
    *param_1 = local_a8;
    param_1[1] = uStack_a0;
    *(short *)(param_1 + 2) = (short)local_98;
    *(char *)((long)param_1 + 0x12) = (char)uStack_94;
    _swift_bridgeObjectRetain(uVar2);
  }
  else {
    puVar12 = &DAT_100549d40;
    _Var13.unknown = &DAT_100419e60;
    FUN_100002f94();
    local_c0 = *(long *)(puVar12 + -8);
    local_b8 = puVar12;
    local_b0 = lVar6;
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(local_c0 + 0x40) + 0xfU & 0xfffffffffffffff0);
    local_88 = (undefined1 *)0x0;
    local_80 = 0xe000000000000000;
    local_c8 = lVar6 - extraout_x8;
    local_78 = uVar1;
    uStack_70 = uVar2;
    _swift_bridgeObjectRetain(uVar2);
    Swift::_StringGuts::grow(0x11,_Var13);
    _swift_bridgeObjectRelease(local_80);
    local_88 = &DAT_d000000000000030;
    local_80 = 0x80000001004dda70;
    local_90 = 0x2d;
    SVar20 = Swift::CustomStringConvertible::get_description();
    SVar21.bridgeObject = in_x3;
    SVar21.str = pcVar14;
    Swift::String::append(SVar20,SVar21);
    _swift_bridgeObjectRelease(SVar20.bridgeObject);
    uVar1 = local_80;
    puVar4 = local_88;
    (*(code *)PTR____chkstk_darwin_100521118)();
    lVar18 = (lVar6 - extraout_x8) - uVar15;
    (**(code **)(lVar19 + 0x10))(lVar18,lVar6,TVar10.unknown);
    *(undefined **)(lVar18 + -0x10) = PTR___type_metadata_for_Swift_String_100523a98;
    *(undefined **)(lVar18 + -8) =
         PTR___protocol_witness_table_for_Swift_String___Swift_Equatable_in_Swift_100523ab0;
    lVar16 = local_c8;
    SwiftUI::_TaskValueModifier2::_init
              (local_c8,puVar12,puVar4,uVar1,0,0,lVar18,&DAT_100426230,puVar9);
    (**(code **)(lVar19 + 8))(lVar6,TVar10.unknown);
    puVar9 = &DAT_100549dd0;
    FUN_100002f94(&DAT_100549dd0,&DAT_100426250);
    (**(code **)(local_c0 + 0x20))((long)param_1 + (long)*(int *)(puVar9 + 0x24),lVar16,local_b8);
    *param_1 = local_a8;
    param_1[1] = uStack_a0;
    *(short *)(param_1 + 2) = (short)local_98;
    *(char *)((long)param_1 + 0x12) = (char)uStack_94;
  }
  return;
}

