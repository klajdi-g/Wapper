// rea decompile_all
// name: FUN_1002830e8
// address: 0x1002830e8
// body: available
// range: 0x1002830e8-0x10028325b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002830e8(long param_1,ulong param_2)

{
  undefined *puVar1;
  TaskPriority TVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  long extraout_x8;
  MainActor *unaff_x20;
  double dVar5;
  
  puVar1 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  if ((0 < (long)param_2) &&
     ((dVar5 = (double)param_1 / (double)param_2, 1.0 <= dVar5 ||
      (0.01 <= dVar5 - *(double *)
                        (unaff_x20 +
                        _TtC7WallperP33_4537C798EE20D91316D9ABA5C600337924DownloadProgressDelegate::
                        lastReported))))) {
    *(double *)
     (unaff_x20 +
     _TtC7WallperP33_4537C798EE20D91316D9ABA5C600337924DownloadProgressDelegate::lastReported) =
         dVar5;
    TVar2 = Swift::TaskPriority::typeMetadataAccessor();
    (**(code **)(*(long *)(TVar2.unknown + -8) + 0x38))
              (&stack0xffffffffffffffb0 + -extraout_x8,1,1,TVar2.unknown);
    pMVar3 = Swift::MainActor::typeMetadataAccessor();
    puVar1 = PTR_typeMetadataAccessor_1005246d8;
    pMVar3 = Swift::MainActor::get_shared(pMVar3,unaff_x20);
    puVar4 = &DAT_100558b80;
    FUN_1000036d0(&DAT_100558b80,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
    puVar1 = &DAT_100536638;
    _swift_allocObject(&DAT_100536638,0x30,7);
    *(MainActor **)(puVar1 + 0x10) = pMVar3;
    *(undefined8 **)(puVar1 + 0x18) = puVar4;
    *(MainActor **)(puVar1 + 0x20) = unaff_x20;
    *(double *)(puVar1 + 0x28) = dVar5;
    FUN_1001b1e74(0,0,&stack0xffffffffffffffb0 + -extraout_x8,&DAT_10042d540,puVar1);
    _swift_release();
  }
  return;
}

