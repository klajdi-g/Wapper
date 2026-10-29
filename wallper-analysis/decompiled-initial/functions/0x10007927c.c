// rea decompile_all
// name: FUN_10007927c
// address: 0x10007927c
// body: available
// range: 0x10007927c-0x100079423 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100079414 to 0x100413514 /usr/lib/swift/libswift_Concurrency.dylib::(extension_Swift)::Swift::Task::$get_value (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10007927c(long param_1)

{
  TaskPriority TVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0x68) + 0x18))();
  if (param_1 == 0) {
    lVar5 = *(long *)(*(long *)(unaff_x22 + 0x68) + 0x38);
    *(long *)(unaff_x22 + 0x98) = lVar5;
    puVar6 = *(undefined **)(*(long *)(unaff_x22 + 0x68) + 0x40);
    *(undefined **)(unaff_x22 + 0xa0) = puVar6;
    if (lVar5 != 0) {
      uVar7 = *(undefined8 *)(unaff_x22 + 0x70);
      TVar1.unknown = puVar6;
      _swift_retain();
      Swift::TaskPriority::get_userInitiated(TVar1);
      TVar1 = Swift::TaskPriority::typeMetadataAccessor();
      (**(code **)(*(long *)(TVar1.unknown + -8) + 0x38))(uVar7,0,1,TVar1.unknown);
      puVar2 = &DAT_100528220;
      _swift_allocObject(&DAT_100528220,0x30,7);
      *(undefined8 *)(puVar2 + 0x10) = 0;
      *(undefined8 *)(puVar2 + 0x18) = 0;
      *(long *)(puVar2 + 0x20) = lVar5;
      *(undefined **)(puVar2 + 0x28) = puVar6;
      _swift_retain(puVar6);
      uVar3 = 0;
      FUN_100176fac(0,0,uVar7,&DAT_1004203b0,puVar2);
      *(undefined8 *)(unaff_x22 + 0xa8) = uVar3;
      FUN_10002a29c(uVar7,&DAT_100561090,&DAT_10041c870);
      plVar4 = (long *)(ulong)*(uint *)(PTR__get_value_100524738 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xb0) = plVar4;
      FUN_100002f94(&DAT_10054bd30,&DAT_10041d460);
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_100079424;
      (extension_Swift)::Swift::Task::_get_value((undefined *)(unaff_x22 + 0x40));
      return;
    }
    _swift_release(*(undefined8 *)(unaff_x22 + 0x78));
  }
  else {
    lVar5 = *(long *)(unaff_x22 + 0x68);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x78));
    uVar7 = *(undefined8 *)(lVar5 + 0x30);
    uVar3 = *(undefined8 *)(lVar5 + 0x28);
    *(long *)(unaff_x22 + 0x60) = param_1;
    *(undefined8 *)(unaff_x22 + 0x28) = uVar7;
    *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
    puVar6 = &DAT_10054eed8;
    FUN_100002f94(&DAT_10054eed8,&DAT_1004249f0);
    SwiftUI::State::set_wrappedValue((State *)(unaff_x22 + 0x20),(long *)(unaff_x22 + 0x60),puVar6);
  }
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x000100079304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

