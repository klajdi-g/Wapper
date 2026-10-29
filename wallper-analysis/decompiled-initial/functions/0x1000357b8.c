// rea decompile_all
// name: FUN_1000357b8
// address: 0x1000357b8
// body: available
// range: 0x1000357b8-0x100035b1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000357b8(void)

{
  State *pSVar1;
  ulong *puVar2;
  int iVar3;
  undefined *puVar4;
  code *pcVar5;
  long lVar6;
  undefined *puVar7;
  State SVar8;
  TaskPriority TVar9;
  MainActor *pMVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  long extraout_x8;
  ulong uVar13;
  long lVar14;
  long unaff_x20;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long local_90;
  State local_88;
  ulong uStack_80;
  long local_78;
  undefined *local_70;
  undefined *puStack_68;
  
  lVar6 = 0;
  FUN_100030a44();
  lVar17 = *(long *)(lVar6 + -8);
  lVar15 = *(long *)(lVar17 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = (long)&local_90 - (lVar15 + 0xfU & 0xfffffffffffffff0);
  puVar7 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = lVar14 - extraout_x8;
  pSVar1 = (State *)(unaff_x20 + *(int *)(lVar6 + 0x18));
  puStack_68 = pSVar1[1].unknown;
  SVar8.unknown = &DAT_10054ab50;
  local_70._0_1_ = *(undefined1 *)&pSVar1->unknown;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar8);
  if ((char)local_88.unknown == '\x01') {
    local_70 = (undefined *)((ulong)local_70._1_7_ << 8);
    SwiftUI::State::set_wrappedValue(pSVar1,&local_70,SVar8.unknown);
    iVar3 = *(int *)(lVar6 + 0x1c);
    puVar11 = (undefined8 *)(unaff_x20 + iVar3);
    puStack_68 = (undefined *)puVar11[1];
    local_70 = (undefined *)*puVar11;
    SVar8.unknown = &DAT_10054ba40;
    FUN_100002f94(&DAT_10054ba40,&DAT_100423be0);
    SwiftUI::State::get_wrappedValue(SVar8);
    if (SBORROW8((long)local_88.unknown,1)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100035ad4);
      (*pcVar5)();
    }
    local_70 = (undefined *)
               ((ulong)(local_88.unknown + -1) &
               ((long)(local_88.unknown + -1) >> 0x3f ^ 0xffffffffffffffffU));
    SwiftUI::State::set_wrappedValue((State *)(unaff_x20 + iVar3),&local_70,SVar8.unknown);
    lVar6 = *(long *)(unaff_x20 + *(int *)(lVar6 + 0x14));
    if (lVar6 == 0) {
LAB_100035ad8:
      FUN_100279594(0);
      FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
      SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100035b1c);
      (*pcVar5)();
    }
    _swift_retain(lVar6);
    FUN_100269618();
    puVar7 = &DAT_10041d2c8;
    puVar12 = &DAT_100526188;
  }
  else {
    local_70 = (undefined *)CONCAT71(local_70._1_7_,1);
    SwiftUI::State::set_wrappedValue(pSVar1,&local_70,SVar8.unknown);
    puVar2 = (ulong *)(unaff_x20 + *(int *)(lVar6 + 0x1c));
    puVar7 = (undefined *)*puVar2;
    uVar13 = puVar2[1];
    local_70 = puVar7;
    puStack_68 = (undefined *)uVar13;
    _swift_retain(uVar13);
    SVar8.unknown = &DAT_10054ba40;
    FUN_100002f94(&DAT_10054ba40,&DAT_100423be0);
    SwiftUI::State::get_wrappedValue(SVar8);
    local_90 = local_78 + 1;
    if (SCARRY8(local_78,1)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100035ad8);
      (*pcVar5)();
    }
    local_88.unknown = puVar7;
    uStack_80 = uVar13;
    SwiftUI::State::set_wrappedValue(&local_88,&local_90,SVar8.unknown);
    _swift_release(uVar13);
    lVar6 = *(long *)(unaff_x20 + *(int *)(lVar6 + 0x14));
    if (lVar6 == 0) goto LAB_100035ad8;
    _swift_retain(lVar6);
    FUN_100269f50();
    puVar7 = &UNK_10041d2b8;
    puVar12 = &UNK_100526160;
  }
  _swift_release(lVar6);
  TVar9 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar9.unknown + -8) + 0x38))(lVar16,1,1,TVar9.unknown);
  FUN_100029504();
  pMVar10 = Swift::MainActor::typeMetadataAccessor();
  puVar4 = PTR_typeMetadataAccessor_1005246d8;
  pMVar10 = Swift::MainActor::get_shared(pMVar10,pMVar10);
  puVar11 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar4,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  uVar13 = (ulong)*(byte *)(lVar17 + 0x50);
  uVar18 = uVar13 + 0x20 & (uVar13 ^ 0xffffffffffffffff);
  _swift_allocObject(puVar12,uVar18 + lVar15,uVar13 | 7);
  *(MainActor **)(puVar12 + 0x10) = pMVar10;
  *(undefined8 **)(puVar12 + 0x18) = puVar11;
  FUN_100007e64(lVar14,puVar12 + uVar18,FUN_100030a44);
  FUN_1001b1e74(0,0,lVar16,puVar7,puVar12);
  _swift_release();
  return;
}

