// rea decompile_all
// name: FUN_1002f5580
// address: 0x1002f5580
// body: available
// range: 0x1002f5580-0x1002f56d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002f56d0 to 0x100413514 /usr/lib/swift/libswift_Concurrency.dylib::(extension_Swift)::Swift::Task::$get_value (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002f5580(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  TaskPriority TVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long *plVar10;
  ulong uVar11;
  long unaff_x22;
  ulong uVar12;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
  lVar1 = *(long *)(unaff_x22 + 0x30);
  lVar4 = *(long *)(unaff_x22 + 0x38);
  lVar2 = *(long *)(unaff_x22 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
  TVar7.unknown = (undefined *)0x0;
  FUN_1002f58e8();
  iVar6 = *(int *)(TVar7.unknown + 0x18);
  Swift::TaskPriority::get_userInitiated(TVar7);
  TVar7 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar7.unknown + -8) + 0x38))(uVar3,0,1,TVar7.unknown);
  (**(code **)(lVar1 + 0x10))(uVar9,lVar2 + iVar6,uVar5);
  uVar11 = (ulong)*(byte *)(lVar1 + 0x50);
  uVar12 = uVar11 + 0x20 & (uVar11 ^ 0xffffffffffffffff);
  puVar8 = &DAT_100539848;
  _swift_allocObject(&DAT_100539848,uVar12 + lVar4,uVar11 | 7);
  *(undefined8 *)(puVar8 + 0x10) = 0;
  *(undefined8 *)(puVar8 + 0x18) = 0;
  (**(code **)(lVar1 + 0x20))(puVar8 + uVar12,uVar9,uVar5);
  uVar9 = 0;
  FUN_100176fac(0,0,uVar3,&DAT_10042fd48,puVar8);
  *(undefined8 *)(unaff_x22 + 0x68) = uVar9;
  FUN_10002a29c(uVar3,&DAT_100561090,&DAT_10041c870);
  plVar10 = (long *)(ulong)*(uint *)(PTR__get_value_100524738 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x70) = plVar10;
  FUN_100002f94(&DAT_10054bd30,&DAT_10041d460);
  *plVar10 = unaff_x22;
  plVar10[1] = (long)FUN_1002f56d4;
  (extension_Swift)::Swift::Task::_get_value((undefined *)(unaff_x22 + 0x10));
  return;
}

