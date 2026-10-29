// rea decompile_all
// name: FUN_1002bb430
// address: 0x1002bb430
// body: available
// range: 0x1002bb430-0x1002bb5a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002bb430(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  TaskPriority TVar3;
  MainActor *pMVar4;
  undefined8 *puVar5;
  long extraout_x8;
  ulong uVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;
  
  lVar1 = 0;
  FUN_1002bc1b0();
  lVar8 = *(long *)(lVar1 + -8);
  lVar1 = *(long *)(lVar8 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar7 = &stack0xffffffffffffffb0 + -(lVar1 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar3.unknown + -8) + 0x38))((long)puVar7 - extraout_x8,1,1,TVar3.unknown);
  FUN_100029504(param_1,puVar7,FUN_1002bc1b0);
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  puVar2 = PTR_typeMetadataAccessor_1005246d8;
  pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  puVar5 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar2,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  uVar6 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar9 = uVar6 + 0x20 & (uVar6 ^ 0xffffffffffffffff);
  puVar2 = &DAT_100537d68;
  _swift_allocObject(&DAT_100537d68,uVar9 + lVar1,uVar6 | 7);
  *(MainActor **)(puVar2 + 0x10) = pMVar4;
  *(undefined8 **)(puVar2 + 0x18) = puVar5;
  FUN_100007e64(puVar7,puVar2 + uVar9,FUN_1002bc1b0);
  FUN_1001b1e74(0,0,(long)puVar7 - extraout_x8,&DAT_10042e208,puVar2);
  _swift_release();
  return;
}

