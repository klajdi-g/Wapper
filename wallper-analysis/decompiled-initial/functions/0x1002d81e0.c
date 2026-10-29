// rea decompile_all
// name: FUN_1002d81e0
// address: 0x1002d81e0
// body: available
// range: 0x1002d81e0-0x1002d8463 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002d81e0(MainActor *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  TaskPriority TVar4;
  MainActor *this;
  MainActor *pMVar5;
  undefined8 *puVar6;
  TargetProtocolConformanceDescriptor *pTVar7;
  long extraout_x8;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  State local_90;
  undefined8 uStack_88;
  byte local_41;
  
  puVar2 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = *(long *)param_1;
  if (lVar8 == 0) {
    FUN_10014e37c(0);
    pcVar1 = FUN_10014e37c;
    puVar2 = &DAT_100553148;
    pTVar7 = &TargetProtocolConformanceDescriptor_100427f04;
  }
  else {
    puVar2 = &DAT_10042edb0;
    _swift_getKeyPath(&DAT_10042edb0);
    puVar3 = &DAT_10042edd8;
    _swift_getKeyPath(&DAT_10042edd8);
    _swift_retain(lVar8);
    Combine::Published::_get_subscript(&local_90);
    _swift_release(puVar2);
    _swift_release(puVar3);
    _swift_release(lVar8);
    uStack_88 = *(undefined8 *)(param_1 + 0x28);
    local_41 = ((byte)local_90.unknown ^ 0xff) & 1;
    puVar2 = &DAT_10054ab50;
    local_90.unknown = *(undefined **)(param_1 + 0x20);
    FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
    SwiftUI::State::set_wrappedValue(&local_90,&local_41,puVar2);
    lVar8 = *(long *)(param_1 + 0x10);
    if (lVar8 != 0) {
      puVar2 = &DAT_10042edf8;
      _swift_getKeyPath(&DAT_10042edf8);
      puVar3 = &DAT_10042ee20;
      _swift_getKeyPath(&DAT_10042ee20);
      _swift_retain(lVar8);
      Combine::Published::_get_subscript(&local_90);
      _swift_release(puVar2);
      _swift_release(puVar3);
      _swift_release(lVar8);
      if (((ulong)local_90.unknown & 1) == 0) {
        TVar4 = Swift::TaskPriority::typeMetadataAccessor();
        (**(code **)(*(long *)(TVar4.unknown + -8) + 0x38))
                  ((long)&local_90 - extraout_x8,1,1,TVar4.unknown);
        this = Swift::MainActor::typeMetadataAccessor();
        puVar2 = PTR_typeMetadataAccessor_1005246d8;
        pMVar5 = param_1;
        FUN_1002db56c(param_1,&local_90);
        pMVar5 = Swift::MainActor::get_shared(this,pMVar5);
        puVar6 = &DAT_100558b80;
        FUN_1000036d0(&DAT_100558b80,puVar2,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
        puVar2 = &DAT_100538928;
        _swift_allocObject(&DAT_100538928,0x60,7);
        *(MainActor **)(puVar2 + 0x10) = pMVar5;
        *(undefined8 **)(puVar2 + 0x18) = puVar6;
        uVar9 = *(undefined8 *)param_1;
        uVar11 = *(undefined8 *)(param_1 + 0x18);
        uVar10 = *(undefined8 *)(param_1 + 0x10);
        *(undefined8 *)(puVar2 + 0x28) = *(undefined8 *)(param_1 + 8);
        *(undefined8 *)(puVar2 + 0x20) = uVar9;
        *(undefined8 *)(puVar2 + 0x38) = uVar11;
        *(undefined8 *)(puVar2 + 0x30) = uVar10;
        uVar9 = *(undefined8 *)(param_1 + 0x20);
        uVar11 = *(undefined8 *)(param_1 + 0x38);
        uVar10 = *(undefined8 *)(param_1 + 0x30);
        *(undefined8 *)(puVar2 + 0x48) = *(undefined8 *)(param_1 + 0x28);
        *(undefined8 *)(puVar2 + 0x40) = uVar9;
        *(undefined8 *)(puVar2 + 0x58) = uVar11;
        *(undefined8 *)(puVar2 + 0x50) = uVar10;
        FUN_1001b1e74(0,0,(long)&local_90 - extraout_x8,&DAT_10042ee48,puVar2);
        _swift_release();
      }
      return;
    }
    FUN_10013b98c(0);
    pcVar1 = FUN_10013b98c;
    puVar2 = &DAT_100553150;
    pTVar7 = &TargetProtocolConformanceDescriptor_1004274b8;
  }
  FUN_1000036d0(puVar2,pcVar1,pTVar7);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1002d8464);
  (*pcVar1)();
}

