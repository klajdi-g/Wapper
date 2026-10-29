// rea decompile_all
// name: FUN_1001dd2c0
// address: 0x1001dd2c0
// body: available
// range: 0x1001dd2c0-0x1001dd483 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001dd480 to 0x100413514 /usr/lib/swift/libswift_Concurrency.dylib::(extension_Swift)::Swift::Task::$get_value (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001dd2c0(undefined8 param_1,undefined8 param_2,URL param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  TaskPriority TVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long *plVar12;
  code *pcVar13;
  ulong uVar14;
  undefined8 uVar15;
  long unaff_x22;
  ulong uVar16;
  ulong uVar17;
  String SVar18;
  
  puVar1 = *(undefined **)(unaff_x22 + 0x80);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
  lVar2 = *(long *)(unaff_x22 + 0x70);
  lVar6 = *(long *)(unaff_x22 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
  pcVar8 = ((String *)(unaff_x22 + 0x40))->str;
  uVar15 = *(undefined8 *)(unaff_x22 + 0x30);
  Foundation::URL::appendingPathComponent(*(String *)(unaff_x22 + 0x40),param_3);
  SVar18.bridgeObject = (void *)0xe300000000000000;
  SVar18.str = (char *)0x676e70;
  Foundation::URL::appendingPathExtension(SVar18,param_3);
  pcVar13 = *(code **)(lVar2 + 8);
  *(code **)(unaff_x22 + 0xa8) = pcVar13;
  TVar9.unknown = puVar1;
  (*pcVar13)(puVar1,uVar7);
  Swift::TaskPriority::get_utility(TVar9);
  TVar9 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar9.unknown + -8) + 0x38))(uVar3,0,1,TVar9.unknown);
  pcVar13 = *(code **)(lVar2 + 0x10);
  *(code **)(unaff_x22 + 0xb0) = pcVar13;
  (*pcVar13)(puVar1,uVar5,uVar7);
  uVar14 = (ulong)*(byte *)(lVar2 + 0x50);
  uVar17 = uVar14 + 0x30 & (uVar14 ^ 0xffffffffffffffff);
  uVar16 = lVar6 + uVar17 + 7 & 0xfffffffffffffff8;
  puVar10 = &DAT_100531ac8;
  _swift_allocObject(&DAT_100531ac8,uVar16 + 0x10,uVar14 | 7);
  *(undefined8 *)(puVar10 + 0x10) = 0;
  *(undefined8 *)(puVar10 + 0x18) = 0;
  *(undefined8 *)(puVar10 + 0x20) = uVar15;
  *(undefined8 *)(puVar10 + 0x28) = uVar4;
  (**(code **)(lVar2 + 0x20))(puVar10 + uVar17,puVar1,uVar7);
  *(char **)(puVar10 + uVar16) = pcVar8;
  *(undefined8 *)((long)(puVar10 + uVar16) + 8) = uVar11;
  FUN_10011a30c(uVar15,uVar4);
  _swift_bridgeObjectRetain(uVar11);
  uVar11 = 0;
  FUN_10017748c(0,0,uVar3,&DAT_10042aee0,puVar10);
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar11;
  FUN_10002a29c(uVar3,&DAT_100561090,&DAT_10041c870);
  plVar12 = (long *)(ulong)*(uint *)(PTR__get_value_100524738 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xc0) = plVar12;
  *plVar12 = unaff_x22;
  plVar12[1] = (long)FUN_1001dd484;
  (extension_Swift)::Swift::Task::_get_value((undefined *)(unaff_x22 + 200));
  return;
}

