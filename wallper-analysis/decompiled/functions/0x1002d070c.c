// rea decompile_all
// name: FUN_1002d070c
// address: 0x1002d070c
// body: available
// range: 0x1002d070c-0x1002d0bb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002d070c(void)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  URL UVar4;
  undefined *puVar5;
  long lVar6;
  TaskPriority TVar7;
  MainActor *this;
  MainActor *pMVar8;
  TargetProtocolConformanceDescriptor *pTVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar10;
  MainActor *unaff_x20;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long local_170 [3];
  undefined *local_158;
  State local_150;
  long lStack_148;
  undefined1 local_69 [9];
  
  puVar2 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  FUN_100137890();
  local_170[2] = lVar3;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar11 = (undefined8 *)
            (((long)local_170 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  puVar2 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)puVar11 - extraout_x8_01;
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar3 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar3 + 0x40));
  lVar10 = lVar13 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar12 = *(long *)unaff_x20;
  if (lVar12 == 0) {
    FUN_1001373cc(0);
    pcVar1 = FUN_1001373cc;
    puVar2 = &DAT_100553de0;
    pTVar9 = &TargetProtocolConformanceDescriptor_100426ef0;
LAB_1002d0b9c:
    FUN_1000036d0(puVar2,pcVar1,pTVar9);
    SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1002d0bb8);
    (*pcVar1)();
  }
  puVar2 = &DAT_10042ebb8;
  _swift_getKeyPath(&DAT_10042ebb8);
  puVar5 = &DAT_10042ebe0;
  _swift_getKeyPath(&DAT_10042ebe0);
  _swift_retain_n(lVar12,3);
  Combine::Published::_get_subscript(lVar13);
  _swift_release(lVar12);
  _swift_release(puVar2);
  _swift_release(puVar5);
  lVar6 = lVar13;
  (**(code **)(lVar3 + 0x30))(lVar13,1,UVar4.unknown);
  if ((int)lVar6 == 1) {
    _swift_release_n(lVar12,2);
    FUN_10002a29c(lVar13,&DAT_100553d90,&DAT_10041bf10);
  }
  else {
    local_170[1] = (long)local_170 - extraout_x8;
    local_158 = UVar4.unknown;
    (**(code **)(lVar3 + 0x20))(lVar10,lVar13,UVar4.unknown);
    lVar13 = *(long *)(unaff_x20 + 0x10);
    if (lVar13 == 0) {
      FUN_100231228(0);
      pcVar1 = FUN_100231228;
      puVar2 = &DAT_10054d6a8;
      pTVar9 = &TargetProtocolConformanceDescriptor_10042bb2c;
      goto LAB_1002d0b9c;
    }
    puVar2 = &DAT_10042ec00;
    _swift_getKeyPath(&DAT_10042ec00);
    puVar5 = &DAT_10042ec28;
    _swift_getKeyPath(&DAT_10042ec28);
    _swift_retain(lVar13);
    Combine::Published::_get_subscript(&local_150,lVar12,puVar2,puVar5);
    _swift_release(puVar2);
    _swift_release(puVar5);
    _swift_release(lVar12);
    lVar6 = local_170[2];
    local_170[0] = lStack_148;
    (**(code **)(lVar3 + 0x10))
              ((long)puVar11 + (long)*(int *)(local_170[2] + 0x14),lVar10,local_158);
    puVar2 = &DAT_10042ec48;
    _swift_getKeyPath(&DAT_10042ec48);
    puVar5 = &DAT_10042ec70;
    _swift_getKeyPath(&DAT_10042ec70);
    Combine::Published::_get_subscript
              ((long)puVar11 + (long)*(int *)(lVar6 + 0x18),lVar12,puVar2,puVar5);
    _swift_release(lVar12);
    _swift_release(puVar2);
    _swift_release(puVar5);
    lVar12 = local_170[0];
    *puVar11 = local_150.unknown;
    puVar11[1] = lVar12;
    FUN_10022b328(puVar11);
    _swift_release(lVar13);
    FUN_100074250(puVar11);
    lStack_148 = *(long *)(unaff_x20 + 0x90);
    local_150.unknown = *(undefined **)(unaff_x20 + 0x88);
    local_69[0] = 1;
    puVar2 = &DAT_10054ab50;
    FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
    SwiftUI::State::set_wrappedValue(&local_150,local_69,puVar2);
    TVar7 = Swift::TaskPriority::typeMetadataAccessor();
    lVar12 = local_170[1];
    (**(code **)(*(long *)(TVar7.unknown + -8) + 0x38))(local_170[1],1,1,TVar7.unknown);
    this = Swift::MainActor::typeMetadataAccessor();
    puVar2 = PTR_typeMetadataAccessor_1005246d8;
    pMVar8 = unaff_x20;
    FUN_1002d6478();
    pMVar8 = Swift::MainActor::get_shared(this,pMVar8);
    puVar11 = &DAT_100558b80;
    FUN_1000036d0(&DAT_100558b80,puVar2,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
    puVar2 = &DAT_1005387b0;
    _swift_allocObject(&DAT_1005387b0,0x100,7);
    *(MainActor **)(puVar2 + 0x10) = pMVar8;
    *(undefined8 **)(puVar2 + 0x18) = puVar11;
    uVar14 = *(undefined8 *)(unaff_x20 + 0xa0);
    uVar16 = *(undefined8 *)(unaff_x20 + 0xb8);
    uVar15 = *(undefined8 *)(unaff_x20 + 0xb0);
    *(undefined8 *)(puVar2 + 200) = *(undefined8 *)(unaff_x20 + 0xa8);
    *(undefined8 *)(puVar2 + 0xc0) = uVar14;
    *(undefined8 *)(puVar2 + 0xd8) = uVar16;
    *(undefined8 *)(puVar2 + 0xd0) = uVar15;
    uVar14 = *(undefined8 *)(unaff_x20 + 0xc0);
    uVar16 = *(undefined8 *)(unaff_x20 + 0xd8);
    uVar15 = *(undefined8 *)(unaff_x20 + 0xd0);
    *(undefined8 *)(puVar2 + 0xe8) = *(undefined8 *)(unaff_x20 + 200);
    *(undefined8 *)(puVar2 + 0xe0) = uVar14;
    *(undefined8 *)(puVar2 + 0xf8) = uVar16;
    *(undefined8 *)(puVar2 + 0xf0) = uVar15;
    uVar14 = *(undefined8 *)(unaff_x20 + 0x60);
    uVar16 = *(undefined8 *)(unaff_x20 + 0x78);
    uVar15 = *(undefined8 *)(unaff_x20 + 0x70);
    *(undefined8 *)(puVar2 + 0x88) = *(undefined8 *)(unaff_x20 + 0x68);
    *(undefined8 *)(puVar2 + 0x80) = uVar14;
    *(undefined8 *)(puVar2 + 0x98) = uVar16;
    *(undefined8 *)(puVar2 + 0x90) = uVar15;
    uVar14 = *(undefined8 *)(unaff_x20 + 0x80);
    uVar16 = *(undefined8 *)(unaff_x20 + 0x98);
    uVar15 = *(undefined8 *)(unaff_x20 + 0x90);
    *(undefined8 *)(puVar2 + 0xa8) = *(undefined8 *)(unaff_x20 + 0x88);
    *(undefined8 *)(puVar2 + 0xa0) = uVar14;
    *(undefined8 *)(puVar2 + 0xb8) = uVar16;
    *(undefined8 *)(puVar2 + 0xb0) = uVar15;
    uVar14 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar16 = *(undefined8 *)(unaff_x20 + 0x38);
    uVar15 = *(undefined8 *)(unaff_x20 + 0x30);
    *(undefined8 *)(puVar2 + 0x48) = *(undefined8 *)(unaff_x20 + 0x28);
    *(undefined8 *)(puVar2 + 0x40) = uVar14;
    *(undefined8 *)(puVar2 + 0x58) = uVar16;
    *(undefined8 *)(puVar2 + 0x50) = uVar15;
    uVar14 = *(undefined8 *)(unaff_x20 + 0x40);
    uVar16 = *(undefined8 *)(unaff_x20 + 0x58);
    uVar15 = *(undefined8 *)(unaff_x20 + 0x50);
    *(undefined8 *)(puVar2 + 0x68) = *(undefined8 *)(unaff_x20 + 0x48);
    *(undefined8 *)(puVar2 + 0x60) = uVar14;
    *(undefined8 *)(puVar2 + 0x78) = uVar16;
    *(undefined8 *)(puVar2 + 0x70) = uVar15;
    uVar14 = *(undefined8 *)unaff_x20;
    uVar16 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar15 = *(undefined8 *)(unaff_x20 + 0x10);
    *(undefined8 *)(puVar2 + 0x28) = *(undefined8 *)(unaff_x20 + 8);
    *(undefined8 *)(puVar2 + 0x20) = uVar14;
    *(undefined8 *)(puVar2 + 0x38) = uVar16;
    *(undefined8 *)(puVar2 + 0x30) = uVar15;
    FUN_1001b1e74(0,0,lVar12,&DAT_10042ec98,puVar2);
    _swift_release();
    (**(code **)(lVar3 + 8))(lVar10,local_158);
  }
  return;
}

