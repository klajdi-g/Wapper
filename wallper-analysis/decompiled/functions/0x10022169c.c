// rea decompile_all
// name: FUN_10022169c
// address: 0x10022169c
// body: available
// range: 0x10022169c-0x1002217b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10022169c(void)

{
  undefined8 uVar1;
  TaskPriority TVar2;
  MainActor *pMVar3;
  MainActor *pMVar4;
  MainActor *pMVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x30);
  pMVar5 = *(MainActor **)(unaff_x22 + 0x38);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x40));
  TVar2 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar2.unknown + -8) + 0x38))(uVar8,1,1,TVar2.unknown);
  pMVar3 = (MainActor *)&DAT_1005333a8;
  _swift_allocObject(&DAT_1005333a8,0x18,7);
  _swift_weakInit(pMVar3 + 0x10,uVar7);
  pMVar4 = pMVar3;
  _swift_retain();
  pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar4);
  puVar6 = &DAT_1005335d8;
  _swift_allocObject(&DAT_1005335d8,0x31,7);
  *(MainActor **)(puVar6 + 0x10) = pMVar5;
  *(undefined8 *)(puVar6 + 0x18) = uVar1;
  *(MainActor **)(puVar6 + 0x20) = pMVar3;
  *(undefined8 *)(puVar6 + 0x28) = 0;
  puVar6[0x30] = 1;
  _swift_release(pMVar3);
  FUN_1001b1e74(0,0,uVar8,&DAT_10042b6f8,puVar6);
  _swift_release();
  FUN_1002179c4();
  FUN_100217d50();
  uVar8 = *(undefined8 *)(unaff_x22 + 0x30);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x60));
  _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x0001002217b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

