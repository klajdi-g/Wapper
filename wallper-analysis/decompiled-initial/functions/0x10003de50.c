// rea decompile_all
// name: FUN_10003de50
// address: 0x10003de50
// body: available
// range: 0x10003de50-0x10003df77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10003df24 to 0x100413538 /usr/lib/swift/libswift_Concurrency.dylib::(extension_Swift)::Swift::Task::$sleep (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10003df58 to 0x10003fac4 FUN_10003fac4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10003de50(void)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  long *plVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x22 + 0x650);
  lVar5 = *(long *)(unaff_x22 + 0x638);
  objc_stub::lock(*(ID *)(*(long *)(lVar5 + lVar6) + 0x10));
  lVar5 = *(long *)(lVar5 + lVar6);
  if (*(char *)(lVar5 + 0x20) == '\x01') {
    objc_stub::unlock(*(ID *)(lVar5 + 0x10));
  }
  else {
    lVar6 = *(long *)(*(long *)(unaff_x22 + 0x638) + *(long *)(unaff_x22 + 0x658));
    _swift_beginAccess(lVar5 + 0x18,unaff_x22 + 0x440,0,0);
    puVar4 = *(undefined **)(lVar5 + 0x18);
    if ((ulong)puVar4 >> 0x3e == 0) {
      lVar5 = *(long *)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var1.unknown = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar4) {
        _Var1.unknown = puVar4;
      }
      lVar5 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    }
    if (SBORROW8(lVar6,lVar5)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10003df78);
      (*pcVar2)();
    }
    objc_stub::unlock(*(ID *)(*(long *)(*(long *)(unaff_x22 + 0x638) + *(long *)(unaff_x22 + 0x650))
                             + 0x10));
    if (2 < lVar6 - lVar5) {
      plVar3 = (long *)(ulong)*(uint *)(PTR__sleep_100524758 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x6f0) = plVar3;
      *plVar3 = unaff_x22;
      plVar3[1] = (long)FUN_10003dde0;
      (extension_Swift)::Swift::Task::_sleep(4000000);
      return;
    }
  }
  plVar3 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x700) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10003df78;
  FUN_10003fac4();
  return;
}

