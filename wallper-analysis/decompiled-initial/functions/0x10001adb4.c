// rea decompile_all
// name: FUN_10001adb4
// address: 0x10001adb4
// body: available
// range: 0x10001adb4-0x10001b423 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010001b098 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10001adb4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,MainActor *param_6)

{
  undefined1 *puVar1;
  char *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  ulong *puVar5;
  byte bVar6;
  undefined *puVar7;
  MainActor *pMVar8;
  MainActor *pMVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  Binding<undefined> BVar12;
  VerticalAlignment VVar13;
  Set SVar14;
  Set SVar15;
  long extraout_x8;
  code *pcVar16;
  AnyView AVar17;
  char *pcVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  ulong uStack_1c0;
  char *local_1b8;
  ulong local_1b0;
  char *local_1a8 [2];
  undefined8 local_198;
  undefined8 uStack_190;
  undefined1 local_188;
  
  puVar5 = &uStack_1c0;
  local_1a8[1] = (char *)param_1;
  bVar6 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  AVar17.unknown = (undefined *)0x0;
  if ((bVar6 & 1) != 0) {
    puVar7 = &DAT_10054b1b0;
    FUN_100002f94(&DAT_10054b1b0,&DAT_10041c3e8);
    lVar20 = *(long *)(*(long *)(puVar7 + -8) + 0x40);
    local_1a8[0] = (char *)&uStack_1c0;
    (*(code *)PTR____chkstk_darwin_100521118)();
    local_1b0 = lVar20 + 0xfU & 0xfffffffffffffff0;
    lVar20 = -local_1b0;
    puVar19 = (undefined8 *)((long)&uStack_1c0 + lVar20);
    local_1b8 = "ar to my wallpaper";
    pMVar8 = Swift::MainActor::typeMetadataAccessor();
    puVar11 = PTR_typeMetadataAccessor_1005246d8;
    pMVar9 = param_6;
    FUN_100027a7c(param_6,&local_198);
    pMVar9 = Swift::MainActor::get_shared(pMVar8,pMVar9);
    puVar10 = &DAT_100558b80;
    FUN_1000036d0(&DAT_100558b80,puVar11,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
    puVar11 = &DAT_100525820;
    _swift_allocObject(&DAT_100525820,0x130,7);
    *(MainActor **)(puVar11 + 0x10) = pMVar9;
    *(undefined8 **)(puVar11 + 0x18) = puVar10;
    _memcpy(puVar11 + 0x20,param_6,0x110);
    pMVar9 = param_6;
    FUN_100027a7c(param_6,&local_198);
    pMVar9 = Swift::MainActor::get_shared(pMVar8,pMVar9);
    puVar11 = &DAT_100525848;
    _swift_allocObject(&DAT_100525848,0x130,7);
    *(MainActor **)(puVar11 + 0x10) = pMVar9;
    *(undefined8 **)(puVar11 + 0x18) = puVar10;
    _memcpy(puVar11 + 0x20,param_6,0x110);
    BVar12 = SwiftUI::Binding::init();
    uVar4 = local_188;
    uVar25 = uStack_190;
    uVar24 = local_198;
    VVar13 = SwiftUI::VerticalAlignment::get_center(BVar12.unknown);
    *puVar19 = VVar13.unknown;
    *(undefined8 *)((long)&local_1b8 + lVar20) = 0x4028000000000000;
    *(undefined1 *)((long)&local_1b0 + lVar20) = 0;
    puVar11 = &DAT_10054b1a0;
    FUN_100002f94(&DAT_10054b1a0,&DAT_10041c3d8);
    SVar14.unknown = (undefined *)0x7369642e6b636f6c;
    FUN_10001b4e4((long)puVar19 + (long)*(int *)(puVar11 + 0x2c),0x7369642e6b636f6c,
                  0xec00000079616c70,0xd00000000000002e,(ulong)local_1b8 | 0x8000000000000000,uVar24
                  ,uVar25,uVar4);
    SVar15 = SwiftUI::Edge::Set::get_horizontal(SVar14);
    uVar21 = 0x4030000000000000;
    SwiftUI::EdgeInsets::init((CGFloat)SVar15.unknown);
    SVar14.unknown = &DAT_10054b1a8;
    uVar23 = param_3;
    uVar22 = param_4;
    uVar26 = param_5;
    FUN_100002f94(&DAT_10054b1a8,&DAT_10041c3e0);
    puVar1 = (undefined1 *)((long)puVar19 + (long)*(int *)(SVar14.unknown + 0x24));
    *puVar1 = (char)SVar15.unknown;
    *(undefined8 *)(puVar1 + 8) = uVar21;
    *(undefined8 *)(puVar1 + 0x10) = param_3;
    *(undefined8 *)(puVar1 + 0x18) = param_4;
    *(undefined8 *)(puVar1 + 0x20) = param_5;
    puVar1[0x28] = 0;
    SVar14 = SwiftUI::Edge::Set::get_vertical(SVar14);
    uVar21 = 0x4030000000000000;
    SwiftUI::EdgeInsets::init((CGFloat)SVar14.unknown);
    param_3 = uVar23;
    param_4 = uVar22;
    param_5 = uVar26;
    _swift_release(uVar25);
    _swift_release(uVar24);
    puVar1 = (undefined1 *)((long)puVar19 + (long)*(int *)(puVar7 + 0x24));
    *puVar1 = (char)SVar14.unknown;
    *(undefined8 *)(puVar1 + 8) = uVar21;
    *(undefined8 *)(puVar1 + 0x10) = uVar23;
    *(undefined8 *)(puVar1 + 0x18) = uVar22;
    *(undefined8 *)(puVar1 + 0x20) = uVar26;
    puVar1[0x28] = 0;
    (*(code *)PTR____chkstk_darwin_100521118)();
    puVar10 = puVar19;
    FUN_1000087e4(puVar19,(long)puVar19 - local_1b0,&DAT_10054b1b0,&DAT_10041c3e8);
    FUN_1000295c0();
    AVar17 = SwiftUI::AnyView::_init(puVar10,puVar7,puVar10);
    FUN_10002a29c(puVar19,&DAT_10054b1b0,&DAT_10041c3e8);
    puVar5 = (ulong *)local_1a8[0];
    _swift_retain(AVar17.unknown);
  }
  puVar7 = &DAT_10054b198;
  FUN_100002f94(&DAT_10054b198,&DAT_10041c3d0);
  lVar20 = *(long *)(*(long *)(puVar7 + -8) + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)(lVar20 + 0xfU & 0xfffffffffffffff0);
  pcVar18 = (char *)((long)puVar5 + -extraout_x8);
  bVar3 = (bVar6 & 1) == 0;
  if (bVar3) {
    local_1a8[0] = "rectangle.topthird.inset.filled";
    pMVar8 = Swift::MainActor::typeMetadataAccessor();
    puVar7 = PTR_typeMetadataAccessor_1005246d8;
    pMVar9 = param_6;
    FUN_100027a7c(param_6,&local_198);
    pMVar9 = Swift::MainActor::get_shared(pMVar8,pMVar9);
    puVar10 = &DAT_100558b80;
    FUN_1000036d0(&DAT_100558b80,puVar7,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
    puVar7 = &DAT_1005257d0;
    _swift_allocObject(&DAT_1005257d0,0x130,7);
    *(MainActor **)(puVar7 + 0x10) = pMVar9;
    *(undefined8 **)(puVar7 + 0x18) = puVar10;
    _memcpy(puVar7 + 0x20,param_6,0x110);
    pMVar9 = param_6;
    FUN_100027a7c(param_6,&local_198);
    pMVar9 = Swift::MainActor::get_shared(pMVar8,pMVar9);
    puVar7 = &DAT_1005257f8;
    _swift_allocObject(&DAT_1005257f8,0x130,7);
    *(MainActor **)(puVar7 + 0x10) = pMVar9;
    *(undefined8 **)(puVar7 + 0x18) = puVar10;
    _memcpy(puVar7 + 0x20,param_6,0x110);
    BVar12 = SwiftUI::Binding::init();
    VVar13 = SwiftUI::VerticalAlignment::get_center(BVar12.unknown);
    *(undefined **)pcVar18 = VVar13.unknown;
    pcVar18[8] = '\0';
    pcVar18[9] = '\0';
    pcVar18[10] = '\0';
    pcVar18[0xb] = '\0';
    pcVar18[0xc] = '\0';
    pcVar18[0xd] = '\0';
    pcVar18[0xe] = '(';
    pcVar18[0xf] = '@';
    pcVar18[0x10] = '\0';
    puVar7 = &DAT_10054b1a0;
    FUN_100002f94(&DAT_10054b1a0,&DAT_10041c3d8);
    SVar14.unknown = (undefined *)0xd00000000000001f;
    FUN_10001b4e4(pcVar18 + *(int *)(puVar7 + 0x2c),0xd00000000000001f,0x80000001004dbd30,
                  0xd000000000000022,(ulong)local_1a8[0] | 0x8000000000000000,local_198,uStack_190,
                  local_188);
    SVar15 = SwiftUI::Edge::Set::get_horizontal(SVar14);
    uVar22 = 0x4030000000000000;
    SwiftUI::EdgeInsets::init((CGFloat)SVar15.unknown);
    SVar14.unknown = &DAT_10054b1a8;
    uVar24 = param_3;
    uVar25 = param_4;
    uVar23 = param_5;
    FUN_100002f94(&DAT_10054b1a8,&DAT_10041c3e0);
    pcVar2 = pcVar18 + *(int *)(SVar14.unknown + 0x24);
    *pcVar2 = (char)SVar15.unknown;
    *(undefined8 *)(pcVar2 + 8) = uVar22;
    *(undefined8 *)(pcVar2 + 0x10) = param_3;
    *(undefined8 *)(pcVar2 + 0x18) = param_4;
    *(undefined8 *)(pcVar2 + 0x20) = param_5;
    pcVar2[0x28] = '\0';
    SVar14 = SwiftUI::Edge::Set::get_vertical(SVar14);
    uVar22 = 0x4030000000000000;
    SwiftUI::EdgeInsets::init((CGFloat)SVar14.unknown);
    _swift_release(uStack_190);
    _swift_release(local_198);
    puVar7 = &DAT_10054b1b0;
    FUN_100002f94(&DAT_10054b1b0,&DAT_10041c3e8);
    pcVar2 = pcVar18 + *(int *)(puVar7 + 0x24);
    *pcVar2 = (char)SVar14.unknown;
    *(undefined8 *)(pcVar2 + 8) = uVar22;
    *(undefined8 *)(pcVar2 + 0x10) = uVar24;
    *(undefined8 *)(pcVar2 + 0x18) = uVar25;
    *(undefined8 *)(pcVar2 + 0x20) = uVar23;
    pcVar2[0x28] = '\0';
    pcVar16 = *(code **)(*(long *)(puVar7 + -8) + 0x38);
  }
  else {
    puVar7 = &DAT_10054b1b0;
    FUN_100002f94(&DAT_10054b1b0,&DAT_10041c3e8);
    pcVar16 = *(code **)(*(long *)(puVar7 + -8) + 0x38);
  }
  (*pcVar16)(pcVar18,!bVar3,1,puVar7);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar20 = (long)pcVar18 - (lVar20 + 0xfU & 0xfffffffffffffff0);
  FUN_1000087e4(pcVar18,lVar20,&DAT_10054b198,&DAT_10041c3d0);
  pcVar2 = local_1a8[1];
  *(undefined **)local_1a8[1] = AVar17.unknown;
  puVar7 = &DAT_10054b1b8;
  FUN_100002f94(&DAT_10054b1b8,&DAT_10041c3f0);
  FUN_1000087e4(lVar20,(long)pcVar2 + (long)*(int *)(puVar7 + 0x30),&DAT_10054b198,&DAT_10041c3d0);
  FUN_10002a29c(pcVar18,&DAT_10054b198,&DAT_10041c3d0);
  FUN_10002a29c(lVar20,&DAT_10054b198,&DAT_10041c3d0);
  _swift_release(AVar17.unknown);
  return;
}

