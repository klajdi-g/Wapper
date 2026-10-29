// rea decompile_all
// name: FUN_1002bac10
// address: 0x1002bac10
// body: available
// range: 0x1002bac10-0x1002bae5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002bac10(long param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  undefined *puVar4;
  State SVar5;
  TaskPriority TVar6;
  MainActor *pMVar7;
  undefined8 *puVar8;
  long extraout_x8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long local_80;
  byte local_71;
  undefined1 local_70 [8];
  undefined8 local_68;
  
  lVar3 = 0;
  FUN_100400294();
  local_80 = *(long *)(lVar3 + -8);
  lVar10 = *(long *)(local_80 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar9 = (long)&local_80 - (lVar10 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  FUN_1002bc1b0();
  lVar13 = *(long *)(lVar3 + -8);
  lVar11 = *(long *)(lVar13 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar3 = lVar9 - (lVar11 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_70[0] = *(undefined1 *)(param_1 + 0x30);
  local_68 = *(undefined8 *)(param_1 + 0x38);
  SVar5.unknown = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar5);
  if ((local_71 & 1) == 0) {
    local_70[0] = 1;
    SwiftUI::State::set_wrappedValue((State *)(param_1 + 0x30),local_70,SVar5.unknown);
    TVar6 = Swift::TaskPriority::typeMetadataAccessor();
    (**(code **)(*(long *)(TVar6.unknown + -8) + 0x38))(lVar3 - extraout_x8,1,1,TVar6.unknown);
    FUN_100029504(param_1,lVar3,FUN_1002bc1b0);
    FUN_100029504(param_2,lVar9,FUN_100400294);
    pMVar7 = Swift::MainActor::typeMetadataAccessor();
    puVar4 = PTR_typeMetadataAccessor_1005246d8;
    pMVar7 = Swift::MainActor::get_shared(pMVar7,pMVar7);
    puVar8 = &DAT_100558b80;
    FUN_1000036d0(&DAT_100558b80,puVar4,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
    bVar1 = *(byte *)(lVar13 + 0x50);
    uVar14 = (ulong)bVar1 + 0x20 & ((ulong)bVar1 ^ 0xffffffffffffffff);
    bVar2 = *(byte *)(local_80 + 0x50);
    uVar12 = lVar11 + (ulong)bVar2 + uVar14 & ((ulong)bVar2 ^ 0xffffffffffffffff);
    puVar4 = &DAT_100537e08;
    _swift_allocObject(&DAT_100537e08,uVar12 + lVar10,bVar1 | bVar2 | 7);
    *(MainActor **)(puVar4 + 0x10) = pMVar7;
    *(undefined8 **)(puVar4 + 0x18) = puVar8;
    FUN_100007e64(lVar3,puVar4 + uVar14,FUN_1002bc1b0);
    FUN_100007e64(lVar9,puVar4 + uVar12,FUN_100400294);
    FUN_1001b1e74(0,0,lVar3 - extraout_x8,&DAT_10042e228,puVar4);
    _swift_release();
  }
  return;
}

