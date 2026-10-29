// rea decompile_all
// name: FUN_1000881d0
// address: 0x1000881d0
// body: available
// range: 0x1000881d0-0x1000883a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000883a4 to 0x100413514 /usr/lib/swift/libswift_Concurrency.dylib::(extension_Swift)::Swift::Task::$get_value (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000881d0(void)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  TaskPriority TVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x22;
  long lVar10;
  
  lVar8 = *(long *)(unaff_x22 + 0x28);
  lVar3 = 0;
  FUN_10007b2b8();
  *(long *)(unaff_x22 + 0x50) = lVar3;
  cVar1 = *(char *)(lVar8 + *(int *)(lVar3 + 0x20));
  *(char *)(unaff_x22 + 0x68) = cVar1;
  lVar8 = 0x6c2d64726f636572;
  if (cVar1 == '\0') {
    lVar8 = 0x64726f636572;
  }
  TVar7.unknown = (undefined *)0xec00000065677261;
  if (cVar1 == '\0') {
    TVar7.unknown = (undefined *)0xe600000000000000;
  }
  FUN_100091638(lVar8,TVar7.unknown);
  _swift_bridgeObjectRelease();
  if (lVar8 != 0) {
    lVar10 = *(long *)(unaff_x22 + 0x28);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
    iVar2 = *(int *)(lVar3 + 0x24);
    *(long *)(unaff_x22 + 0x20) = lVar8;
    puVar4 = &DAT_10054eed8;
    FUN_100002f94(&DAT_10054eed8,&DAT_1004249f0);
    SwiftUI::State::set_wrappedValue((State *)(lVar10 + iVar2),(long *)(unaff_x22 + 0x20),puVar4);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x0001000882b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar9 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar5 = 0x898;
  if (cVar1 == '\0') {
    uVar5 = 0x578;
  }
  Swift::TaskPriority::get_userInitiated(TVar7);
  TVar7 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar7.unknown + -8) + 0x38))(uVar9,0,1,TVar7.unknown);
  puVar4 = &DAT_100528108;
  _swift_allocObject(&DAT_100528108,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined8 *)(puVar4 + 0x18) = 0;
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  uVar5 = 0;
  FUN_100176fac(0,0,uVar9,&DAT_100420350,puVar4);
  *(undefined8 *)(unaff_x22 + 0x58) = uVar5;
  FUN_10002a29c(uVar9,&DAT_100561090,&DAT_10041c870);
  plVar6 = (long *)(ulong)*(uint *)(PTR__get_value_100524738 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x60) = plVar6;
  FUN_100002f94(&DAT_10054bd30,&DAT_10041d460);
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1000883a8;
  (extension_Swift)::Swift::Task::_get_value((undefined *)(unaff_x22 + 0x10));
  return;
}

