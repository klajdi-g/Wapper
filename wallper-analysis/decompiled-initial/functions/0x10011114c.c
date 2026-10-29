// rea decompile_all
// name: FUN_10011114c
// address: 0x10011114c
// body: available
// range: 0x10011114c-0x1001112c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10011114c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  MainActor *pMVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  TaskPriority TVar10;
  MainActor *this;
  MainActor *pMVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x138);
  pcVar4 = *(code **)(unaff_x22 + 0x140);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x110);
  FUN_100093624(*(undefined8 *)(unaff_x22 + 0x158),*(undefined8 *)(unaff_x22 + 0x160));
  (*pcVar4)(uVar1,uVar5);
  FUN_100112e04(uVar2);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar16 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xc0);
  pMVar3 = *(MainActor **)(unaff_x22 + 0x90);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x98);
  TVar10 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar10.unknown + -8) + 0x38))(uVar8,1,1,TVar10.unknown);
  this = Swift::MainActor::typeMetadataAccessor();
  puVar13 = PTR_typeMetadataAccessor_1005246d8;
  pMVar11 = pMVar3;
  FUN_1000939f8(pMVar3,uVar9);
  pMVar11 = Swift::MainActor::get_shared(this,pMVar11);
  puVar12 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar13,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  puVar13 = &DAT_10052ca48;
  _swift_allocObject(&DAT_10052ca48,0x30,7);
  *(MainActor **)(puVar13 + 0x10) = pMVar11;
  *(undefined8 **)(puVar13 + 0x18) = puVar12;
  *(MainActor **)(puVar13 + 0x20) = pMVar3;
  *(undefined8 *)(puVar13 + 0x28) = uVar9;
  FUN_1001b2110(0,0,uVar8,&DAT_100425fb0,puVar13);
  _swift_release();
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar14);
                    /* WARNING: Could not recover jumptable at 0x0001001112c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

