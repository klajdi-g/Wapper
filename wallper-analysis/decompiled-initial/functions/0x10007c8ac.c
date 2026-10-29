// rea decompile_all
// name: FUN_10007c8ac
// address: 0x10007c8ac
// body: available
// range: 0x10007c8ac-0x10007cddb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010007ccc0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10007c8ac(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  MainActor *pMVar10;
  undefined8 *puVar11;
  TaskPriority TVar12;
  TaskPriority TVar13;
  _StringGuts _Var14;
  code *pcVar15;
  char *pcVar16;
  void *in_x3;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar17;
  undefined8 *unaff_x20;
  ulong uVar18;
  undefined8 *puVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  undefined8 auStack_e0 [2];
  long alStack_d0 [3];
  undefined *local_b8;
  ulong local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 *local_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar6 = &DAT_100549d58;
  local_90 = param_1;
  FUN_100002f94(&DAT_100549d58,&DAT_100419e78);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar19 = (undefined8 *)((long)alStack_d0 + -extraout_x8);
  lVar7 = 0;
  FUN_100095ec0();
  lVar7 = *(long *)(lVar7 + -8);
  lVar20 = *(long *)(lVar7 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  uVar21 = lVar20 + 0xfU & 0xfffffffffffffff0;
  local_b0 = uVar21;
  FUN_100029504();
  uVar17 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar18 = uVar17 + 0x10 & (uVar17 ^ 0xffffffffffffffff);
  puVar8 = &DAT_1005284b0;
  _swift_allocObject(&DAT_1005284b0,uVar18 + lVar20,uVar17 | 7);
  FUN_100007e64((long)puVar19 - uVar21,puVar8 + uVar18,FUN_100095ec0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar7 = ((long)puVar19 - uVar21) - uVar21;
  FUN_100029504();
  puVar9 = &DAT_1005284d8;
  _swift_allocObject(&DAT_1005284d8,uVar18 + lVar20,uVar17 | 7);
  FUN_100007e64(lVar7,puVar9 + uVar18,FUN_100095ec0);
  iVar1 = *(int *)(puVar6 + 0x24);
  pcVar15 = FUN_10009e280;
  FUN_100029504();
  puVar6 = &DAT_10054f360;
  FUN_100002f94(&DAT_10054f360,&DAT_1004208a8);
  puVar11 = (undefined8 *)((long)puVar19 + (long)*(int *)(puVar6 + 0x24) + (long)iVar1);
  *puVar11 = FUN_100098f58;
  puVar11[1] = puVar9;
  *puVar19 = FUN_100098d20;
  *(undefined **)((long)alStack_d0 + -extraout_x8 + 8) = puVar8;
  local_70 = *unaff_x20;
  uStack_68 = unaff_x20[1];
  local_98 = puVar19;
  _swift_bridgeObjectRetain();
  SVar24.bridgeObject = (void *)0xe100000000000000;
  SVar24.str = (char *)0x7c;
  SVar25.bridgeObject = in_x3;
  SVar25.str = (char *)pcVar15;
  Swift::String::append(SVar24,SVar25);
  uVar2 = uStack_68;
  SVar24 = *(String *)(unaff_x20 + 2);
  _swift_bridgeObjectRetain(uStack_68);
  SVar26.bridgeObject = in_x3;
  SVar26.str = (char *)pcVar15;
  Swift::String::append(SVar24,SVar26);
  _swift_bridgeObjectRelease(uVar2);
  local_a8 = local_70;
  uStack_a0 = uStack_68;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar7 = lVar7 - local_b0;
  FUN_100029504();
  pMVar10 = Swift::MainActor::typeMetadataAccessor();
  puVar6 = PTR_typeMetadataAccessor_1005246d8;
  pMVar10 = Swift::MainActor::get_shared(pMVar10,pMVar10);
  puVar11 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar6,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  uVar18 = uVar17 + 0x20 & (uVar17 ^ 0xffffffffffffffff);
  puVar6 = &DAT_100528500;
  _swift_allocObject(&DAT_100528500,uVar18 + lVar20,uVar17 | 7);
  *(MainActor **)(puVar6 + 0x10) = pMVar10;
  *(undefined8 **)(puVar6 + 0x18) = puVar11;
  FUN_100007e64(lVar7,puVar6 + uVar18,FUN_100095ec0);
  TVar12 = Swift::TaskPriority::typeMetadataAccessor();
  lVar20 = *(long *)(TVar12.unknown + -8);
  lVar22 = *(long *)(lVar20 + 0x40);
  TVar13 = TVar12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  uVar17 = lVar22 + 0xfU & 0xfffffffffffffff0;
  lVar7 = lVar7 - uVar17;
  Swift::TaskPriority::get_userInitiated(TVar13);
  pcVar16 = (char *)0x0;
  bVar5 = Swift::_stdlib_isOSVersionAtLeast(0x1a,4,0);
  if ((bVar5 & 1) == 0) {
    puVar8 = &DAT_100549d50;
    FUN_100002f94(&DAT_100549d50,&DAT_100419e70);
    lVar22 = local_90;
    puVar11 = (undefined8 *)(local_90 + *(int *)(puVar8 + 0x24));
    puVar8 = &DAT_100549d28;
    FUN_100002f94(&DAT_100549d28,&DAT_100426240);
    iVar1 = *(int *)(puVar8 + 0x28);
    *(undefined8 *)((long)puVar11 + (long)iVar1) = local_a8;
    ((undefined8 *)((long)puVar11 + (long)iVar1))[1] = uStack_a0;
    (**(code **)(lVar20 + 0x20))((long)puVar11 + (long)*(int *)(puVar8 + 0x24),lVar7,TVar12.unknown)
    ;
    *puVar11 = &DAT_100420978;
    puVar11[1] = puVar6;
    FUN_100007e1c(local_98,lVar22,&DAT_100549d58,&DAT_100419e78);
  }
  else {
    puVar8 = &DAT_100549d40;
    _Var14.unknown = &DAT_100419e60;
    FUN_100002f94();
    alStack_d0[2] = *(long *)(puVar8 + -8);
    local_b8 = puVar8;
    local_b0 = lVar7;
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(alStack_d0[2] + 0x40) + 0xfU & 0xfffffffffffffff0);
    uVar2 = uStack_a0;
    local_70 = local_a8;
    uStack_68 = uStack_a0;
    local_80 = 0;
    local_78 = 0xe000000000000000;
    alStack_d0[1] = lVar7 - extraout_x8_00;
    _swift_bridgeObjectRetain(uStack_a0);
    Swift::_StringGuts::grow(0x11,_Var14);
    _swift_bridgeObjectRelease(local_78);
    local_80 = 0xd000000000000026;
    local_78 = 0x80000001004dcd10;
    local_88 = 0x223;
    SVar24 = Swift::CustomStringConvertible::get_description();
    SVar27.bridgeObject = in_x3;
    SVar27.str = pcVar16;
    Swift::String::append(SVar24,SVar27);
    _swift_bridgeObjectRelease(SVar24.bridgeObject);
    uVar4 = local_78;
    uVar3 = local_80;
    (*(code *)PTR____chkstk_darwin_100521118)();
    lVar23 = (lVar7 - extraout_x8_00) - uVar17;
    (**(code **)(lVar20 + 0x10))(lVar23,lVar7,TVar12.unknown);
    *(undefined **)(lVar23 + -0x10) = PTR___type_metadata_for_Swift_String_100523a98;
    *(undefined **)(lVar23 + -8) =
         PTR___protocol_witness_table_for_Swift_String___Swift_Equatable_in_Swift_100523ab0;
    lVar22 = alStack_d0[1];
    SwiftUI::_TaskValueModifier2::_init
              (alStack_d0[1],puVar8,uVar3,uVar4,0,0,lVar23,&DAT_100420978,puVar6);
    _swift_bridgeObjectRelease(uVar2);
    (**(code **)(lVar20 + 8))(lVar7,TVar12.unknown);
    lVar7 = local_90;
    FUN_100007e1c(local_98,local_90,&DAT_100549d58,&DAT_100419e78);
    puVar6 = &DAT_100549d60;
    FUN_100002f94(&DAT_100549d60,&DAT_100419e80);
    (**(code **)(alStack_d0[2] + 0x20))(lVar7 + *(int *)(puVar6 + 0x24),lVar22,local_b8);
  }
  return;
}

