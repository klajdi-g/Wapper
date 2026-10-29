// rea decompile_all
// name: FUN_1002c918c
// address: 0x1002c918c
// body: available
// range: 0x1002c918c-0x1002c95b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002c94a4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1002c918c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined *puVar5;
  long lVar6;
  MainActor *pMVar7;
  undefined8 *puVar8;
  TaskPriority TVar9;
  TaskPriority TVar10;
  URL UVar11;
  undefined *puVar12;
  URL UVar13;
  void *in_x3;
  long extraout_x8;
  ulong uVar14;
  long extraout_x8_00;
  long lVar15;
  long extraout_x8_01;
  long extraout_x12;
  _StringGuts unaff_x20;
  ulong uVar16;
  long lVar17;
  long lVar18;
  String SVar19;
  String SVar20;
  undefined8 auStack_d0 [2];
  undefined1 auStack_c0 [8];
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  undefined *local_90;
  long local_88;
  undefined1 *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  puVar5 = &DAT_100549de8;
  FUN_100002f94(&DAT_100549de8,&DAT_100419f00);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_80 = auStack_c0 + -extraout_x8;
  FUN_1002c95b8();
  lVar6 = 0;
  FUN_1002cb204();
  lVar6 = *(long *)(lVar6 + -8);
  lVar17 = *(long *)(lVar6 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = (long)(auStack_c0 + -extraout_x8) - (lVar17 + 0xfU & 0xfffffffffffffff0);
  FUN_100029504();
  pMVar7 = Swift::MainActor::typeMetadataAccessor();
  puVar5 = PTR_typeMetadataAccessor_1005246d8;
  pMVar7 = Swift::MainActor::get_shared(pMVar7,pMVar7);
  puVar8 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar5,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  uVar14 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar16 = uVar14 + 0x20 & (uVar14 ^ 0xffffffffffffffff);
  puVar5 = &DAT_1005380a8;
  _swift_allocObject(&DAT_1005380a8,uVar16 + lVar17,uVar14 | 7);
  *(MainActor **)(puVar5 + 0x10) = pMVar7;
  *(undefined8 **)(puVar5 + 0x18) = puVar8;
  FUN_100007e64(lVar18,puVar5 + uVar16,FUN_1002cb204);
  TVar9 = Swift::TaskPriority::typeMetadataAccessor();
  lVar6 = *(long *)(TVar9.unknown + -8);
  lVar17 = *(long *)(lVar6 + 0x40);
  TVar10 = TVar9;
  (*(code *)PTR____chkstk_darwin_100521118)();
  uVar14 = lVar17 + 0xfU & 0xfffffffffffffff0;
  lVar18 = lVar18 - uVar14;
  Swift::TaskPriority::get_userInitiated(TVar10);
  bVar4 = Swift::_stdlib_isOSVersionAtLeast(0x1a,4,0);
  if ((bVar4 & 1) == 0) {
    puVar12 = &DAT_100549dd8;
    FUN_100002f94(&DAT_100549dd8,&DAT_100419ef0);
    puVar8 = (undefined8 *)(param_1 + *(int *)(puVar12 + 0x24));
    puVar12 = &DAT_100549de0;
    FUN_100002f94(&DAT_100549de0,&DAT_10042e890);
    iVar1 = *(int *)(puVar12 + 0x28);
    UVar13 = Foundation::URL::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar13.unknown + -8) + 0x10))((long)puVar8 + (long)iVar1);
    (**(code **)(lVar6 + 0x20))((long)puVar8 + (long)*(int *)(puVar12 + 0x24),lVar18,TVar9.unknown);
    *puVar8 = &DAT_10042e880;
    puVar8[1] = puVar5;
    FUN_1002cb904(local_80,param_1);
  }
  else {
    puVar12 = &DAT_100549df0;
    FUN_100002f94(&DAT_100549df0,&DAT_100419f08);
    local_98 = *(long *)(puVar12 + -8);
    local_90 = puVar12;
    local_88 = lVar18;
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(local_98 + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar15 = lVar18 - extraout_x8_00;
    local_b0 = lVar15;
    UVar11 = Foundation::URL::typeMetadataAccessor();
    local_a8 = lVar15;
    local_a0 = param_1;
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(undefined8 *)(*(long *)(UVar11.unknown + -8) + 0x40));
    lVar15 = lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
    UVar13 = UVar11;
    (**(code **)(extraout_x12 + 0x10))(lVar15);
    local_70 = 0;
    local_68 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x11,unaff_x20);
    _swift_bridgeObjectRelease(local_68);
    local_70 = 0xd00000000000002b;
    local_68 = 0x80000001004e4190;
    local_78 = 0x58;
    SVar19 = Swift::CustomStringConvertible::get_description();
    SVar20.bridgeObject = in_x3;
    SVar20.str = UVar13.unknown;
    Swift::String::append(SVar19,SVar20);
    _swift_bridgeObjectRelease(SVar19.bridgeObject);
    uVar3 = local_68;
    uVar2 = local_70;
    local_b8 = lVar15;
    (*(code *)PTR____chkstk_darwin_100521118)();
    lVar15 = lVar15 - uVar14;
    (**(code **)(lVar6 + 0x10))(lVar15,lVar18,TVar9.unknown);
    puVar12 = &DAT_100553da0;
    FUN_1000036d0(&DAT_100553da0,PTR_typeMetadataAccessor_100520a18,
                  PTR_Foundation__Foundation__URL_>Swift__Equatable_100520a38);
    *(undefined **)(lVar15 + -0x10) = UVar11.unknown;
    *(undefined **)(lVar15 + -8) = puVar12;
    lVar17 = local_b0;
    SwiftUI::_TaskValueModifier2::_init
              (local_b0,puVar12,uVar2,uVar3,0,0,lVar15,&DAT_10042e880,puVar5);
    (**(code **)(lVar6 + 8))(lVar18,TVar9.unknown);
    lVar6 = local_a0;
    FUN_1002cb904(local_80,local_a0);
    puVar5 = &DAT_100549e00;
    FUN_100002f94(&DAT_100549e00,&DAT_100419f10);
    (**(code **)(local_98 + 0x20))(lVar6 + *(int *)(puVar5 + 0x24),lVar17,local_90);
  }
  return;
}

