// rea decompile_all
// name: FUN_1000789b4
// address: 0x1000789b4
// body: available
// range: 0x1000789b4-0x100078dcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100078c94 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000789b4(long *param_1)

{
  int iVar1;
  byte bVar2;
  Animation AVar3;
  State SVar4;
  MainActor *this;
  MainActor *pMVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  TaskPriority TVar8;
  TaskPriority TVar9;
  undefined *puVar10;
  _StringGuts _Var11;
  char *pcVar12;
  void *in_x3;
  long extraout_x8;
  MainActor *unaff_x20;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  String SVar21;
  String SVar22;
  undefined8 auStack_150 [2];
  long local_140;
  uint local_134;
  long local_130;
  long local_128;
  undefined *local_120;
  long local_118;
  undefined1 *local_110;
  long local_108;
  undefined *local_100;
  long local_f8;
  long lStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  long local_d0;
  long lStack_c8;
  long local_c0;
  byte local_b8;
  long local_80;
  long lStack_78;
  
  AVar3.unknown = unaff_x20;
  FUN_100078dd0(&local_d0);
  local_f8 = local_d0;
  lStack_f0 = lStack_c8;
  local_100 = (undefined *)SwiftUI::Animation::easeOut(0.35,AVar3);
  lStack_c8 = *(long *)(unaff_x20 + 0x30);
  local_d0 = *(long *)(unaff_x20 + 0x28);
  SVar4.unknown = &DAT_10054eed8;
  FUN_100002f94(&DAT_10054eed8,&DAT_1004249f0);
  SwiftUI::State::get_wrappedValue(SVar4);
  local_108 = local_80;
  lStack_78 = *(long *)(unaff_x20 + 8);
  local_80 = *(long *)unaff_x20;
  this = Swift::MainActor::typeMetadataAccessor();
  puVar7 = PTR_typeMetadataAccessor_1005246d8;
  FUN_100043d74(&local_80,&local_d0);
  pMVar5 = unaff_x20;
  FUN_100093a08();
  pMVar5 = Swift::MainActor::get_shared(this,pMVar5);
  puVar6 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar7,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  puVar7 = &DAT_1005281f8;
  _swift_allocObject(&DAT_1005281f8,0x68,7);
  *(MainActor **)(puVar7 + 0x10) = pMVar5;
  *(undefined8 **)(puVar7 + 0x18) = puVar6;
  uVar18 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(puVar7 + 0x48) = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(puVar7 + 0x40) = uVar18;
  *(undefined8 *)(puVar7 + 0x58) = uVar20;
  *(undefined8 *)(puVar7 + 0x50) = uVar19;
  *(undefined8 *)(puVar7 + 0x60) = *(undefined8 *)(unaff_x20 + 0x40);
  uVar20 = *(undefined8 *)unaff_x20;
  uVar19 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(puVar7 + 0x28) = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(puVar7 + 0x20) = uVar20;
  *(undefined8 *)(puVar7 + 0x38) = uVar19;
  *(undefined8 *)(puVar7 + 0x30) = uVar18;
  TVar8 = Swift::TaskPriority::typeMetadataAccessor();
  lVar15 = *(long *)(TVar8.unknown + -8);
  lVar17 = *(long *)(lVar15 + 0x40);
  TVar9 = TVar8;
  local_110 = (undefined1 *)&local_140;
  (*(code *)PTR____chkstk_darwin_100521118)();
  uVar13 = lVar17 + 0xfU & 0xfffffffffffffff0;
  lVar14 = (long)&local_140 - uVar13;
  Swift::TaskPriority::get_userInitiated(TVar9);
  pcVar12 = (char *)0x0;
  bVar2 = Swift::_stdlib_isOSVersionAtLeast(0x1a,4,0);
  lVar17 = lStack_78;
  if ((bVar2 & 1) == 0) {
    puVar10 = &DAT_100549d20;
    FUN_100002f94(&DAT_100549d20,&DAT_100419e40);
    puVar6 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar10 + 0x24));
    puVar10 = &DAT_100549d28;
    FUN_100002f94(&DAT_100549d28,&DAT_100426240);
    iVar1 = *(int *)(puVar10 + 0x28);
    ((long *)((long)puVar6 + (long)iVar1))[1] = lStack_78;
    *(long *)((long)puVar6 + (long)iVar1) = local_80;
    (**(code **)(lVar15 + 0x20))((long)puVar6 + (long)*(int *)(puVar10 + 0x24),lVar14,TVar8.unknown)
    ;
    *puVar6 = &DAT_100420390;
    puVar6[1] = puVar7;
    *param_1 = local_f8;
    param_1[1] = lStack_f0;
    param_1[2] = local_c0;
    *(byte *)(param_1 + 3) = local_b8;
    param_1[4] = (long)local_100;
    param_1[5] = local_108;
  }
  else {
    puVar10 = &DAT_100549d40;
    _Var11.unknown = &DAT_100419e60;
    FUN_100002f94();
    local_130 = *(long *)(puVar10 + -8);
    local_120 = puVar10;
    local_118 = lVar14;
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(local_130 + 0x40) + 0xfU & 0xfffffffffffffff0);
    local_128 = local_c0;
    lVar16 = lVar14 - extraout_x8;
    lStack_c8 = lStack_78;
    local_d0 = local_80;
    local_e0 = 0;
    local_d8 = 0xe000000000000000;
    _swift_bridgeObjectRetain(lVar17);
    Swift::_StringGuts::grow(0x11,_Var11);
    _swift_bridgeObjectRelease(local_d8);
    local_e0 = 0xd000000000000026;
    local_d8 = 0x80000001004dcd10;
    local_e8 = 0xc0;
    SVar21 = Swift::CustomStringConvertible::get_description();
    SVar22.bridgeObject = in_x3;
    SVar22.str = pcVar12;
    local_134 = (uint)local_b8;
    Swift::String::append(SVar21,SVar22);
    _swift_bridgeObjectRelease(SVar21.bridgeObject);
    uVar19 = local_d8;
    uVar18 = local_e0;
    local_140 = lVar16;
    (*(code *)PTR____chkstk_darwin_100521118)();
    lVar17 = lVar16 - uVar13;
    (**(code **)(lVar15 + 0x10))(lVar17,lVar14,TVar8.unknown);
    *(undefined **)(lVar17 + -0x10) = PTR___type_metadata_for_Swift_String_100523a98;
    *(undefined **)(lVar17 + -8) =
         PTR___protocol_witness_table_for_Swift_String___Swift_Equatable_in_Swift_100523ab0;
    SwiftUI::_TaskValueModifier2::_init
              (lVar16,puVar10,uVar18,uVar19,0,0,lVar17,&DAT_100420390,puVar7);
    FUN_100043c00(&local_80);
    (**(code **)(lVar15 + 8))(lVar14,TVar8.unknown);
    puVar7 = &DAT_100549d48;
    FUN_100002f94(&DAT_100549d48,&DAT_1004203a0);
    (**(code **)(local_130 + 0x20))((long)param_1 + (long)*(int *)(puVar7 + 0x24),lVar16,local_120);
    *param_1 = local_f8;
    param_1[1] = lStack_f0;
    param_1[2] = local_128;
    *(char *)(param_1 + 3) = (char)local_134;
    param_1[4] = (long)local_100;
    param_1[5] = local_108;
  }
  return;
}

