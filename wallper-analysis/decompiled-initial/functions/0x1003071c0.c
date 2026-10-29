// rea decompile_all
// name: FUN_1003071c0
// address: 0x1003071c0
// body: available
// range: 0x1003071c0-0x10030764b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003072d8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003071c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,VerticalAlignment param_6)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  code *pcVar4;
  VerticalAlignment VVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  Set _all;
  Set SVar10;
  Alignment AVar11;
  State SVar12;
  Animation AVar13;
  long *unaff_x20;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  char local_f1;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  long lStack_78;
  
  VVar5 = SwiftUI::VerticalAlignment::get_center(param_6);
  *param_1 = VVar5.unknown;
  param_1[1] = 0x4030000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar6 = &DAT_10055b9f8;
  FUN_100002f94(&DAT_10055b9f8,&DAT_100430578);
  iVar3 = *(int *)(puVar6 + 0x2c);
  FUN_100306d58();
  puVar6 = &DAT_100539eb8;
  _swift_allocObject(&DAT_100539eb8,0x48,7);
  lVar14 = *unaff_x20;
  lVar17 = unaff_x20[3];
  lVar16 = unaff_x20[2];
  *(long *)(puVar6 + 0x18) = unaff_x20[1];
  *(long *)(puVar6 + 0x10) = lVar14;
  *(long *)(puVar6 + 0x28) = lVar17;
  *(long *)(puVar6 + 0x20) = lVar16;
  lVar14 = unaff_x20[4];
  *(long *)(puVar6 + 0x38) = unaff_x20[5];
  *(long *)(puVar6 + 0x30) = lVar14;
  *(long *)(puVar6 + 0x40) = unaff_x20[6];
  FUN_10030b478();
  puVar7 = &DAT_10055ba00;
  FUN_100002f94(&DAT_10055ba00,&DAT_100430580);
  puVar8 = &DAT_10055ba08;
  FUN_1000087a0(&DAT_10055ba08,&DAT_10055ba00,&DAT_100430580,
                PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100523b60);
  puVar9 = puVar8;
  FUN_10030b4ac();
  FUN_10030b4ec();
  (extension_SwiftUI)::SwiftUI::ForEach::_init
            ((long)param_1 + (long)iVar3,puVar9,FUN_10030b470,puVar6,puVar7,
             PTR___type_metadata_for_Swift_String_100523a98,&DAT_10053a078,puVar8,puVar9);
  lVar14 = *unaff_x20;
  if (lVar14 != 0) {
    puVar6 = &DAT_100430588;
    _swift_getKeyPath(&DAT_100430588);
    puVar7 = &DAT_1004305b0;
    _swift_getKeyPath(&DAT_1004305b0);
    _swift_retain(lVar14);
    Combine::Published::_get_subscript(&local_f0);
    _swift_release(puVar6);
    _swift_release(puVar7);
    _swift_release(lVar14);
    uVar19 = local_f0;
    SVar10.unknown = &DAT_10055ba20;
    FUN_100002f94(&DAT_10055ba20,&DAT_1004305d0);
    *(undefined8 *)((long)param_1 + (long)*(int *)(SVar10.unknown + 0x34)) = uVar19;
    _all = SwiftUI::Edge::Set::get_horizontal(SVar10);
    uVar15 = 0x4038000000000000;
    SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
    SVar10.unknown = &DAT_10055ba28;
    lVar14 = lVar16;
    uVar19 = param_4;
    uVar18 = param_5;
    FUN_100002f94(&DAT_10055ba28,&DAT_1004305d8);
    puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(SVar10.unknown + 0x24));
    *puVar1 = (char)_all.unknown;
    *(undefined8 *)(puVar1 + 8) = uVar15;
    *(long *)(puVar1 + 0x10) = lVar16;
    *(undefined8 *)(puVar1 + 0x18) = param_4;
    *(undefined8 *)(puVar1 + 0x20) = param_5;
    puVar1[0x28] = 0;
    SVar10 = SwiftUI::Edge::Set::get_bottom(SVar10);
    uVar15 = 0x4034000000000000;
    SwiftUI::EdgeInsets::init((CGFloat)SVar10.unknown);
    AVar11.unknown = &DAT_10055ba30;
    FUN_100002f94();
    puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(AVar11.unknown + 0x24));
    *puVar1 = (char)SVar10.unknown;
    *(undefined8 *)(puVar1 + 8) = uVar15;
    *(long *)(puVar1 + 0x10) = lVar14;
    *(undefined8 *)(puVar1 + 0x18) = uVar19;
    *(undefined8 *)(puVar1 + 0x20) = uVar18;
    puVar1[0x28] = 0;
    SwiftUI::Alignment::get_center(AVar11);
    SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
    puVar6 = &DAT_10055ba38;
    FUN_100002f94(&DAT_10055ba38,&DAT_1004305e8);
    puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar6 + 0x24));
    puVar2[9] = uStack_a8;
    puVar2[8] = local_b0;
    puVar2[0xb] = uStack_98;
    puVar2[10] = uStack_a0;
    puVar2[0xd] = uStack_88;
    puVar2[0xc] = local_90;
    puVar2[1] = uStack_e8;
    *puVar2 = local_f0;
    puVar2[3] = uStack_d8;
    puVar2[2] = uStack_e0;
    puVar2[5] = uStack_c8;
    puVar2[4] = local_d0;
    puVar2[7] = uStack_b8;
    puVar2[6] = uStack_c0;
    lStack_78 = unaff_x20[6];
    local_80 = unaff_x20[5];
    SVar12.unknown = &DAT_10054ab50;
    FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
    SwiftUI::State::get_wrappedValue(SVar12);
    uVar19 = 0x3ff0000000000000;
    if (local_f1 == '\0') {
      uVar19 = 0;
    }
    puVar6 = &DAT_10055ba40;
    FUN_100002f94(&DAT_10055ba40,&DAT_1004305f0);
    *(undefined8 *)((long)param_1 + (long)*(int *)(puVar6 + 0x24)) = uVar19;
    SwiftUI::State::get_wrappedValue(SVar12);
    uVar19 = 0;
    if (local_f1 == '\0') {
      uVar19 = 0x4030000000000000;
    }
    AVar13.unknown = &DAT_10055ba48;
    FUN_100002f94(&DAT_10055ba48,&DAT_1004305f8);
    iVar3 = *(int *)(AVar13.unknown + 0x24);
    *(undefined8 *)((long)param_1 + (long)iVar3) = uVar19;
    *(undefined1 *)((undefined8 *)((long)param_1 + (long)iVar3) + 1) = 0;
    AVar13 = SwiftUI::Animation::spring(0.5,0.9,0.0,AVar13);
    SwiftUI::State::get_wrappedValue(SVar12);
    puVar6 = &DAT_10055ba50;
    FUN_100002f94(&DAT_10055ba50,&DAT_100430600);
    iVar3 = *(int *)(puVar6 + 0x24);
    *(undefined8 *)((long)param_1 + (long)iVar3) = AVar13.unknown;
    *(char *)((undefined8 *)((long)param_1 + (long)iVar3) + 1) = local_f1;
    puVar6 = &DAT_100539ee0;
    _swift_allocObject(&DAT_100539ee0,0x48,7);
    lVar14 = *unaff_x20;
    lVar17 = unaff_x20[3];
    lVar16 = unaff_x20[2];
    *(long *)(puVar6 + 0x18) = unaff_x20[1];
    *(long *)(puVar6 + 0x10) = lVar14;
    *(long *)(puVar6 + 0x28) = lVar17;
    *(long *)(puVar6 + 0x20) = lVar16;
    lVar14 = unaff_x20[4];
    *(long *)(puVar6 + 0x38) = unaff_x20[5];
    *(long *)(puVar6 + 0x30) = lVar14;
    *(long *)(puVar6 + 0x40) = unaff_x20[6];
    puVar7 = &DAT_10055ba58;
    FUN_100002f94(&DAT_10055ba58,&DAT_100430608);
    param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar7 + 0x24));
    *param_1 = thunk_FUN_10030d858;
    param_1[1] = puVar6;
    param_1[2] = 0;
    param_1[3] = 0;
    FUN_10030b478();
    return;
  }
  FUN_10016ed68(0);
  FUN_1000036d0(&DAT_10054aba0,FUN_10016ed68,&TargetProtocolConformanceDescriptor_1004295e8);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10030764c);
  (*pcVar4)();
}

