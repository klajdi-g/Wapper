// rea decompile_all
// name: FUN_10006fa4c
// address: 0x10006fa4c
// body: available
// range: 0x10006fa4c-0x10006ff17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10006fa4c(MainActor *param_1)

{
  State SVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  URL UVar5;
  undefined *puVar6;
  long lVar7;
  TaskPriority TVar8;
  MainActor *this;
  MainActor *pMVar9;
  TargetProtocolConformanceDescriptor *pTVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long local_d0;
  undefined *puStack_c8;
  long local_c0;
  long local_b8;
  State local_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_61;
  
  puVar3 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)&local_d0 - extraout_x8;
  lVar4 = 0;
  FUN_100137890();
  local_b8 = lVar4;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar12 = (undefined8 *)(lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  puVar3 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = (long)puVar12 - extraout_x8_01;
  UVar5 = Foundation::URL::typeMetadataAccessor();
  lVar11 = *(long *)(UVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar11 + 0x40));
  lVar13 = lVar14 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lStack_a8 = *(long *)(param_1 + 0x40);
  local_b0.unknown = *(undefined **)(param_1 + 0x38);
  local_61 = 1;
  puVar3 = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::set_wrappedValue(&local_b0,&local_61,puVar3);
  lVar4 = *(long *)(param_1 + 0x28);
  if (lVar4 == 0) {
    FUN_100231228(0);
    pcVar2 = FUN_100231228;
    puVar3 = &DAT_10054d6a8;
    pTVar10 = &TargetProtocolConformanceDescriptor_10042bb2c;
LAB_10006fefc:
    FUN_1000036d0(puVar3,pcVar2,pTVar10);
    SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10006ff18);
    (*pcVar2)();
  }
  puVar3 = &DAT_10041f870;
  _swift_getKeyPath(&DAT_10041f870);
  puVar6 = &DAT_10041f898;
  _swift_getKeyPath(&DAT_10041f898);
  _swift_retain_n(lVar4,2);
  Combine::Published::_get_subscript(&local_b0);
  _swift_release(puVar3);
  _swift_release(puVar6);
  _swift_release(lVar4);
  lVar15 = lStack_a8;
  SVar1.unknown = local_b0.unknown;
  if (lStack_a8 == 0) {
    lVar15 = *(long *)(param_1 + 0x18);
    local_c0 = lVar7;
    if (lVar15 == 0) {
      FUN_1001373cc(0);
      pcVar2 = FUN_1001373cc;
      puVar3 = &DAT_100553de0;
      pTVar10 = &TargetProtocolConformanceDescriptor_100426ef0;
      goto LAB_10006fefc;
    }
    puVar3 = &DAT_10041f8b8;
    _swift_getKeyPath(&DAT_10041f8b8);
    puVar6 = &DAT_10041f8e0;
    _swift_getKeyPath(&DAT_10041f8e0);
    _swift_retain_n(lVar15,3);
    Combine::Published::_get_subscript(lVar14);
    _swift_release(lVar15);
    _swift_release(puVar3);
    _swift_release(puVar6);
    lVar7 = lVar14;
    (**(code **)(lVar11 + 0x30))(lVar14,1,UVar5.unknown);
    if ((int)lVar7 == 1) {
      _swift_release(lVar4);
      _swift_release_n(lVar15,2);
      FUN_10002a29c(lVar14,&DAT_100553d90,&DAT_10041bf10);
      lVar7 = local_c0;
    }
    else {
      (**(code **)(lVar11 + 0x20))(lVar13,lVar14,UVar5.unknown);
      puVar3 = &DAT_10041f910;
      _swift_getKeyPath(&DAT_10041f910);
      puVar6 = &DAT_10041f938;
      _swift_getKeyPath(&DAT_10041f938);
      Combine::Published::_get_subscript(&local_b0,lVar15,puVar3,puVar6);
      _swift_release(puVar3);
      _swift_release(puVar6);
      _swift_release(lVar15);
      lVar7 = local_b8;
      local_d0 = lStack_a8;
      puStack_c8 = local_b0.unknown;
      (**(code **)(lVar11 + 0x10))
                ((long)puVar12 + (long)*(int *)(local_b8 + 0x14),lVar13,UVar5.unknown);
      puVar3 = &DAT_10041f958;
      _swift_getKeyPath(&DAT_10041f958);
      puVar6 = &DAT_10041f980;
      _swift_getKeyPath(&DAT_10041f980);
      Combine::Published::_get_subscript
                ((long)puVar12 + (long)*(int *)(lVar7 + 0x18),lVar15,puVar3,puVar6);
      _swift_release(lVar15);
      _swift_release(puVar3);
      _swift_release(puVar6);
      lVar7 = local_d0;
      *puVar12 = puStack_c8;
      puVar12[1] = lVar7;
      FUN_10022b328(puVar12);
      _swift_release(lVar4);
      FUN_100074250(puVar12);
      (**(code **)(lVar11 + 8))(lVar13,UVar5.unknown);
      lVar7 = local_c0;
    }
  }
  else {
    _swift_release(lVar4);
    FUN_10007428c(SVar1.unknown,lVar15,local_a0,uStack_98);
  }
  TVar8 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar8.unknown + -8) + 0x38))(lVar7,1,1,TVar8.unknown);
  this = Swift::MainActor::typeMetadataAccessor();
  puVar3 = PTR_typeMetadataAccessor_1005246d8;
  pMVar9 = param_1;
  FUN_100073d64(param_1,&local_b0);
  pMVar9 = Swift::MainActor::get_shared(this,pMVar9);
  puVar12 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar3,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  puVar3 = &DAT_1005278b8;
  _swift_allocObject(&DAT_1005278b8,0x68,7);
  *(MainActor **)(puVar3 + 0x10) = pMVar9;
  *(undefined8 **)(puVar3 + 0x18) = puVar12;
  uVar16 = *(undefined8 *)(param_1 + 0x20);
  uVar18 = *(undefined8 *)(param_1 + 0x38);
  uVar17 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(puVar3 + 0x48) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(puVar3 + 0x40) = uVar16;
  *(undefined8 *)(puVar3 + 0x58) = uVar18;
  *(undefined8 *)(puVar3 + 0x50) = uVar17;
  *(undefined8 *)(puVar3 + 0x60) = *(undefined8 *)(param_1 + 0x40);
  uVar18 = *(undefined8 *)param_1;
  uVar17 = *(undefined8 *)(param_1 + 0x18);
  uVar16 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(puVar3 + 0x28) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(puVar3 + 0x20) = uVar18;
  *(undefined8 *)(puVar3 + 0x38) = uVar17;
  *(undefined8 *)(puVar3 + 0x30) = uVar16;
  FUN_1001b1e74(0,0,lVar7,&DAT_10041f908,puVar3);
  _swift_release();
  return;
}

