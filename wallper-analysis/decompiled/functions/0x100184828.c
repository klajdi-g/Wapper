// rea decompile_all
// name: FUN_100184828
// address: 0x100184828
// body: available
// range: 0x100184828-0x100184983 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100184828(ID param_1)

{
  undefined *puVar1;
  TaskPriority TVar2;
  TaskPriority TVar3;
  undefined *puVar4;
  long extraout_x8;
  undefined1 *puVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  
  uVar6 = *unaff_x20;
  puVar1 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &stack0xffffffffffffffc0 + -extraout_x8;
  TVar2.unknown = (undefined *)objc_stub::CGImageForProposedRect_context_hints_(param_1,0,0,0);
  if (TVar2.unknown != (undefined *)0x0) {
    Swift::TaskPriority::get_userInitiated(TVar2);
    TVar3 = Swift::TaskPriority::typeMetadataAccessor();
    (**(code **)(*(long *)(TVar3.unknown + -8) + 0x38))(puVar5,0,1,TVar3.unknown);
    puVar1 = &DAT_100530458;
    _swift_allocObject(&DAT_100530458,0x18,7);
    _swift_weakInit(puVar1 + 0x10);
    puVar4 = &DAT_1005309f8;
    _swift_allocObject(&DAT_1005309f8,0x38,7);
    *(undefined8 *)(puVar4 + 0x10) = 0;
    *(undefined8 *)(puVar4 + 0x18) = 0;
    *(undefined **)(puVar4 + 0x20) = TVar2.unknown;
    *(undefined **)(puVar4 + 0x28) = puVar1;
    *(undefined8 *)(puVar4 + 0x30) = uVar6;
    uVar6 = 0;
    FUN_100176d50(0,0,puVar5,&DAT_100429ff8,puVar4);
    _swift_release(uVar6);
    FUN_10002a29c(puVar5,&DAT_100561090,&DAT_10041c870);
  }
  return;
}

