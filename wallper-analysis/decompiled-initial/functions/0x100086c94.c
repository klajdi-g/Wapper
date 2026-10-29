// rea decompile_all
// name: FUN_100086c94
// address: 0x100086c94
// body: available
// range: 0x100086c94-0x1000874e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000873c0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100086c94(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  void *pvVar5;
  byte bVar6;
  undefined *puVar7;
  long lVar8;
  MainActor *pMVar9;
  undefined8 *puVar10;
  TaskPriority TVar11;
  TaskPriority TVar12;
  undefined *puVar13;
  _TaskModifier _Var14;
  _StringGuts _Var15;
  char *pcVar16;
  code *pcVar17;
  void *in_x3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  MainActor *unaff_x20;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  undefined1 *puVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  long alStack_180 [5];
  char *local_158;
  undefined1 *local_150;
  char *local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 *local_118;
  ulong local_110;
  ulong local_108;
  undefined *local_100;
  undefined8 *local_f8;
  MainActor *local_f0;
  long local_e8;
  undefined *puStack_e0;
  long local_d8;
  undefined *puStack_d0;
  long local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  char *local_a0;
  void *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  byte local_70;
  
  puVar7 = &DAT_100549d70;
  local_c8 = param_1;
  FUN_100002f94(&DAT_100549d70,&DAT_100419e90);
  local_d8 = *(long *)(puVar7 + -8);
  puStack_d0 = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_d8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar22 = -extraout_x8;
  puVar18 = (undefined8 *)((long)alStack_180 + lVar22);
  FUN_1000874e4(&local_a0);
  local_148 = local_a0;
  local_140 = local_98;
  local_138 = local_90;
  local_130 = uStack_88;
  local_128 = local_80;
  local_120 = uStack_78;
  local_118 = (undefined1 *)CONCAT44(local_118._4_4_,(uint)local_70);
  lVar8 = 0;
  FUN_10007b2b8();
  lVar20 = *(long *)(lVar8 + -8);
  lVar8 = *(long *)(lVar20 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar19 = (long)puVar18 - (lVar8 + 0xfU & 0xfffffffffffffff0);
  FUN_100029504();
  local_f0 = Swift::MainActor::typeMetadataAccessor();
  puVar7 = PTR_typeMetadataAccessor_1005246d8;
  pMVar9 = Swift::MainActor::get_shared(local_f0,local_f0);
  puVar10 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar7,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  local_108 = (ulong)*(byte *)(lVar20 + 0x50);
  uVar21 = local_108 + 0x20 & (local_108 ^ 0xffffffffffffffff);
  puVar7 = &DAT_1005280b8;
  _swift_allocObject(&DAT_1005280b8,uVar21 + lVar8,local_108 | 7);
  *(MainActor **)(puVar7 + 0x10) = pMVar9;
  *(undefined8 **)(puVar7 + 0x18) = puVar10;
  local_100 = (undefined *)uVar21;
  local_f8 = puVar10;
  FUN_100007e64(lVar19,puVar7 + uVar21,FUN_10007b2b8);
  TVar11 = Swift::TaskPriority::typeMetadataAccessor();
  lVar20 = *(long *)(TVar11.unknown + -8);
  TVar12 = TVar11;
  (*(code *)PTR____chkstk_darwin_100521118)();
  uVar21 = extraout_x12 + 0xfU & 0xfffffffffffffff0;
  puVar23 = (undefined1 *)(lVar19 - uVar21);
  local_c0 = extraout_x12;
  Swift::TaskPriority::get_userInitiated(TVar12);
  _Var15.unknown = (undefined *)0x4;
  pcVar16 = (char *)0x0;
  bVar6 = Swift::_stdlib_isOSVersionAtLeast(0x1a,4,0);
  local_110 = CONCAT44(local_110._4_4_,(int)CONCAT71((int7)((ulong)TVar12.unknown >> 8),bVar6));
  local_e8 = lVar20;
  puStack_e0 = TVar11.unknown;
  if ((bVar6 & 1) == 0) {
    puVar13 = &DAT_100549e48;
    FUN_100002f94(&DAT_100549e48,&DAT_100419f48);
    puVar10 = (undefined8 *)((long)puVar18 + (long)*(int *)(puVar13 + 0x24));
    _Var14 = SwiftUI::_TaskModifier::typeMetadataAccessor();
    (**(code **)(lVar20 + 0x20))((long)puVar10 + (long)*(int *)(_Var14.unknown + 0x14),puVar23);
    *puVar10 = &DAT_100420310;
    puVar10[1] = puVar7;
    uVar2 = local_140;
    *puVar18 = local_148;
    *(undefined8 *)((long)alStack_180 + lVar22 + 8) = uVar2;
    uVar2 = local_130;
    *(undefined8 *)((long)alStack_180 + lVar22 + 0x10) = local_138;
    *(undefined8 *)((long)alStack_180 + lVar22 + 0x18) = uVar2;
    uVar2 = local_120;
    *(undefined8 *)((long)alStack_180 + lVar22 + 0x20) = local_128;
    *(undefined8 *)((long)&local_158 + lVar22) = uVar2;
    *(char *)((long)&local_150 + lVar22) = (char)local_118;
  }
  else {
    local_158 = (char *)SwiftUI::_TaskModifier2::typeMetadataAccessor();
    alStack_180[4] = *(long *)(local_158 + -8);
    local_150 = puVar23;
    (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(alStack_180[4] + 0x40));
    lVar19 = (long)puVar23 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
    local_a0 = (char *)0x0;
    local_98 = (void *)0xe000000000000000;
    alStack_180[2] = lVar19;
    Swift::_StringGuts::grow(0x11,_Var15);
    _swift_bridgeObjectRelease(local_98);
    local_a0 = (char *)0xd000000000000026;
    local_98 = (void *)0x80000001004dcd10;
    local_b0 = 799;
    SVar24 = Swift::CustomStringConvertible::get_description();
    SVar27.bridgeObject = in_x3;
    SVar27.str = pcVar16;
    Swift::String::append(SVar24,SVar27);
    _swift_bridgeObjectRelease(SVar24.bridgeObject);
    SVar24.bridgeObject = local_98;
    SVar24.str = local_a0;
    alStack_180[1] = lVar19;
    (*(code *)PTR____chkstk_darwin_100521118)();
    (**(code **)(lVar20 + 0x10))(lVar19 - uVar21,puVar23,TVar11.unknown);
    lVar19 = alStack_180[2];
    in_x3 = (void *)0x0;
    alStack_180[3] = lVar8;
    SwiftUI::_TaskModifier2::_init(SVar24,(TaskPriority)0x0);
    (**(code **)(lVar20 + 8))(puVar23,TVar11.unknown);
    puVar7 = &DAT_100549e58;
    FUN_100002f94(&DAT_100549e58,&DAT_100420340);
    lVar8 = alStack_180[3];
    TVar11.unknown = local_158;
    (**(code **)(alStack_180[4] + 0x20))((long)puVar18 + (long)*(int *)(puVar7 + 0x24),lVar19);
    uVar2 = local_140;
    *puVar18 = local_148;
    *(undefined8 *)((long)alStack_180 + lVar22 + 8) = uVar2;
    uVar2 = local_130;
    *(undefined8 *)((long)alStack_180 + lVar22 + 0x10) = local_138;
    *(undefined8 *)((long)alStack_180 + lVar22 + 0x18) = uVar2;
    uVar2 = local_120;
    *(undefined8 *)((long)alStack_180 + lVar22 + 0x20) = local_128;
    *(undefined8 *)((long)&local_158 + lVar22) = uVar2;
    *(char *)((long)&local_150 + lVar22) = (char)local_118;
    puVar23 = local_150;
  }
  local_a0 = *(char **)unaff_x20;
  local_98 = *(void **)(unaff_x20 + 8);
  _swift_bridgeObjectRetain();
  SVar25.bridgeObject = (void *)0xe100000000000000;
  SVar25.str = (char *)0x7c;
  SVar28.bridgeObject = in_x3;
  SVar28.str = TVar11.unknown;
  Swift::String::append(SVar25,SVar28);
  pvVar5 = local_98;
  SVar24 = *(String *)(unaff_x20 + 0x10);
  _swift_bridgeObjectRetain(local_98);
  SVar29.bridgeObject = in_x3;
  SVar29.str = TVar11.unknown;
  Swift::String::append(SVar24,SVar29);
  _swift_bridgeObjectRelease(pvVar5);
  pvVar5 = local_98;
  _swift_bridgeObjectRetain(local_98);
  SVar26.bridgeObject = (void *)0xe100000000000000;
  SVar26.str = (char *)0x23;
  SVar30.bridgeObject = in_x3;
  SVar30.str = TVar11.unknown;
  Swift::String::append(SVar26,SVar30);
  _swift_bridgeObjectRelease(pvVar5);
  pvVar5 = local_98;
  pcVar16 = local_a0;
  SVar24 = Swift::CustomStringConvertible::get_description();
  local_a0 = pcVar16;
  local_98 = pvVar5;
  _swift_bridgeObjectRetain(pvVar5);
  SVar31.bridgeObject = in_x3;
  SVar31.str = TVar11.unknown;
  Swift::String::append(SVar24,SVar31);
  _swift_bridgeObjectRelease(pvVar5);
  _swift_bridgeObjectRelease(SVar24.bridgeObject);
  pvVar5 = local_98;
  pcVar16 = local_a0;
  local_118 = puVar23;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar23 = puVar23 + -(lVar8 + 0xfU & 0xfffffffffffffff0);
  pcVar17 = FUN_10007b2b8;
  FUN_100029504();
  pMVar9 = Swift::MainActor::get_shared(local_f0,unaff_x20);
  puVar13 = local_100;
  puVar7 = &DAT_1005280e0;
  _swift_allocObject(&DAT_1005280e0,(long)local_100 + lVar8,local_108 | 7);
  *(MainActor **)(puVar7 + 0x10) = pMVar9;
  *(undefined8 **)(puVar7 + 0x18) = local_f8;
  TVar12.unknown = puVar23;
  FUN_100007e64(puVar23,puVar7 + (long)puVar13);
  local_f0 = (MainActor *)puVar23;
  (*(code *)PTR____chkstk_darwin_100521118)();
  uVar21 = local_c0 + 0xfU & 0xfffffffffffffff0;
  lVar22 = (long)puVar23 - uVar21;
  Swift::TaskPriority::get_userInitiated(TVar12);
  if ((local_110 & 1) == 0) {
    puVar13 = &DAT_100549d68;
    FUN_100002f94(&DAT_100549d68,&DAT_100420330);
    lVar8 = local_c8;
    puVar10 = (undefined8 *)(local_c8 + *(int *)(puVar13 + 0x24));
    puVar13 = &DAT_100549d28;
    FUN_100002f94(&DAT_100549d28,&DAT_100426240);
    iVar1 = *(int *)(puVar13 + 0x28);
    *(undefined8 *)((long)puVar10 + (long)iVar1) = pcVar16;
    ((undefined8 *)((long)puVar10 + (long)iVar1))[1] = pvVar5;
    (**(code **)(local_e8 + 0x20))((long)puVar10 + (long)*(int *)(puVar13 + 0x24),lVar22,puStack_e0)
    ;
    *puVar10 = &DAT_100420328;
    puVar10[1] = puVar7;
    (**(code **)(local_d8 + 0x20))(lVar8,puVar18,puStack_d0);
  }
  else {
    puVar13 = &DAT_100549d40;
    _Var15.unknown = &DAT_100419e60;
    FUN_100002f94();
    local_108 = *(ulong *)(puVar13 + -8);
    local_100 = puVar13;
    local_f8 = (undefined8 *)lVar22;
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(local_108 + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar20 = lVar22 - extraout_x8_01;
    local_b0 = 0;
    local_a8 = 0xe000000000000000;
    local_a0 = pcVar16;
    local_98 = pvVar5;
    _swift_bridgeObjectRetain(pvVar5);
    Swift::_StringGuts::grow(0x11,_Var15);
    _swift_bridgeObjectRelease(local_a8);
    local_b0 = 0xd000000000000026;
    local_a8 = 0x80000001004dcd10;
    local_b8 = 0x327;
    SVar24 = Swift::CustomStringConvertible::get_description();
    SVar32.bridgeObject = in_x3;
    SVar32.str = (char *)pcVar17;
    Swift::String::append(SVar24,SVar32);
    _swift_bridgeObjectRelease(SVar24.bridgeObject);
    uVar4 = local_a8;
    uVar2 = local_b0;
    local_110 = lVar20;
    (*(code *)PTR____chkstk_darwin_100521118)();
    puVar3 = puStack_e0;
    lVar8 = local_e8;
    lVar19 = lVar20 - uVar21;
    (**(code **)(local_e8 + 0x10))(lVar19,lVar22,puStack_e0);
    *(undefined **)(lVar19 + -0x10) = PTR___type_metadata_for_Swift_String_100523a98;
    *(undefined **)(lVar19 + -8) =
         PTR___protocol_witness_table_for_Swift_String___Swift_Equatable_in_Swift_100523ab0;
    SwiftUI::_TaskValueModifier2::_init(lVar20,puVar13,uVar2,uVar4,0,0,lVar19,&DAT_100420328,puVar7)
    ;
    _swift_bridgeObjectRelease(pvVar5);
    (**(code **)(lVar8 + 8))(lVar22,puVar3);
    lVar22 = local_c8;
    (**(code **)(local_d8 + 0x20))(local_c8,puVar18,puStack_d0);
    puVar7 = &DAT_100549d78;
    FUN_100002f94(&DAT_100549d78,&DAT_100419e98);
    (**(code **)(local_108 + 0x20))(lVar22 + *(int *)(puVar7 + 0x24),lVar20,local_100);
  }
  return;
}

