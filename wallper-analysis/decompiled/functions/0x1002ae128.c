// rea decompile_all
// name: FUN_1002ae128
// address: 0x1002ae128
// body: available
// range: 0x1002ae128-0x1002ae2b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002ae23c to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1002ae2b0 to 0x10003b840 FUN_10003b840 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002ae128(void)

{
  undefined *puVar1;
  bool bVar2;
  _StringGuts _Var3;
  undefined8 uVar4;
  MainActor *pMVar5;
  undefined8 *puVar6;
  UnownedSerialExecutor UVar7;
  URL UVar8;
  ulong uVar9;
  long *plVar10;
  _StringGuts _Var11;
  long lVar12;
  long unaff_x22;
  
  _Var3.unknown = *(undefined **)(unaff_x22 + 0xb8);
  _Var11.unknown = *(undefined **)(unaff_x22 + 0xa8);
  (**(code **)(*(long *)(unaff_x22 + 0xb0) + 8))(_Var3.unknown);
  _swift_task_dealloc();
  Foundation::URL::_get_scheme((URL)_Var3.unknown);
  if (_Var11.unknown != (undefined *)0x0) {
    if (_Var3.unknown == (undefined *)0x7463617265746e69 &&
        _Var11.unknown == (undefined *)0xeb00000000657669) {
      _swift_bridgeObjectRelease(_Var11.unknown);
    }
    else {
      bVar2 = Swift::_stringCompareWithSmolCheck(_Var3,_Var11,(_StringComparisonResult)0x69);
      _swift_bridgeObjectRelease(_Var11.unknown);
      if (!bVar2) goto LAB_1002ae1cc;
    }
    uVar4 = *(undefined8 *)(unaff_x22 + 0x90);
    FUN_10004306c();
    if (((uint)uVar4 & 0xff) != 7) {
      UVar8 = Foundation::URL::typeMetadataAccessor();
      *(undefined **)(unaff_x22 + 200) = UVar8.unknown;
      lVar12 = *(long *)(UVar8.unknown + -8);
      *(long *)(unaff_x22 + 0xd0) = lVar12;
      lVar12 = *(long *)(lVar12 + 0x40);
      *(long *)(unaff_x22 + 0xd8) = lVar12;
      uVar9 = lVar12 + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      *(ulong *)(unaff_x22 + 0xe0) = uVar9;
      plVar10 = (long *)0x1f0;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xe8) = plVar10;
      *plVar10 = unaff_x22;
      plVar10[1] = (long)FUN_1002ae2b4;
      FUN_10003b840(plVar10,uVar9,uVar4);
      return;
    }
  }
LAB_1002ae1cc:
  pMVar5 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_1005246d8;
  pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar5);
  *(MainActor **)(unaff_x22 + 0x100) = pMVar5;
  puVar6 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  UVar7 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_1002ae668,UVar7.unknown,puVar6);
  return;
}

