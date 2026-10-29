// rea decompile_all
// name: FUN_1002bb0dc
// address: 0x1002bb0dc
// body: available
// range: 0x1002bb0dc-0x1002bb2a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002bb0dc(long param_1)

{
  long lVar1;
  undefined *puVar2;
  State SVar3;
  TaskPriority TVar4;
  MainActor *pMVar5;
  undefined8 *puVar6;
  long extraout_x8;
  ulong uVar7;
  undefined1 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auStack_70 [15];
  byte local_61;
  undefined1 local_60 [8];
  undefined8 local_58;
  
  lVar1 = 0;
  FUN_1002bc1b0();
  lVar9 = *(long *)(lVar1 + -8);
  lVar1 = *(long *)(lVar9 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar8 = auStack_70 + -(lVar1 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_60[0] = *(undefined1 *)(param_1 + 0x20);
  local_58 = *(undefined8 *)(param_1 + 0x28);
  SVar3.unknown = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar3);
  if ((local_61 & 1) == 0) {
    local_60[0] = 1;
    SwiftUI::State::set_wrappedValue((State *)(param_1 + 0x20),local_60,SVar3.unknown);
    TVar4 = Swift::TaskPriority::typeMetadataAccessor();
    (**(code **)(*(long *)(TVar4.unknown + -8) + 0x38))
              ((long)puVar8 - extraout_x8,1,1,TVar4.unknown);
    FUN_100029504(param_1,puVar8,FUN_1002bc1b0);
    pMVar5 = Swift::MainActor::typeMetadataAccessor();
    puVar2 = PTR_typeMetadataAccessor_1005246d8;
    pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar5);
    puVar6 = &DAT_100558b80;
    FUN_1000036d0(&DAT_100558b80,puVar2,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
    uVar7 = (ulong)*(byte *)(lVar9 + 0x50);
    uVar10 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
    puVar2 = &DAT_100537d90;
    _swift_allocObject(&DAT_100537d90,uVar10 + lVar1,uVar7 | 7);
    *(MainActor **)(puVar2 + 0x10) = pMVar5;
    *(undefined8 **)(puVar2 + 0x18) = puVar6;
    FUN_100007e64(puVar8,puVar2 + uVar10,FUN_1002bc1b0);
    FUN_1001b1e74(0,0,(long)puVar8 - extraout_x8,&DAT_10042e218,puVar2);
    _swift_release();
  }
  return;
}

