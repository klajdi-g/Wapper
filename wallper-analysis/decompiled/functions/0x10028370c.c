// rea decompile_all
// name: FUN_10028370c
// address: 0x10028370c
// body: available
// range: 0x10028370c-0x10028381f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10028370c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long extraout_x8;
  long *plVar4;
  long unaff_x20;
  code *pcVar5;
  undefined8 uVar6;
  
  puVar3 = &DAT_100558c08;
  FUN_100002f94(&DAT_100558c08,&DAT_10042d278);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar4 = (long *)(&stack0xffffffffffffffc0 + -extraout_x8);
  if ((*(byte *)(unaff_x20 +
                _TtC7WallperP33_4537C798EE20D91316D9ABA5C600337924DownloadProgressDelegate::
                completed) & 1) == 0) {
    *(undefined1 *)
     (unaff_x20 +
     _TtC7WallperP33_4537C798EE20D91316D9ABA5C600337924DownloadProgressDelegate::completed) = 1;
    if (param_1 != 0) {
      pcVar5 = *(code **)(unaff_x20 +
                         _TtC7WallperP33_4537C798EE20D91316D9ABA5C600337924DownloadProgressDelegate
                         ::onComplete);
      if (pcVar5 != (code *)0x0) {
        uVar6 = ((undefined8 *)
                (unaff_x20 +
                _TtC7WallperP33_4537C798EE20D91316D9ABA5C600337924DownloadProgressDelegate::
                onComplete))[1];
        *plVar4 = param_1;
        _swift_storeEnumTagMultiPayload(plVar4);
        _swift_errorRetain(param_1);
        FUN_1000939f8(pcVar5,uVar6);
        (*pcVar5)(plVar4);
        FUN_10002f6dc(pcVar5,uVar6);
        FUN_10002a29c(plVar4,&DAT_100558c08,&DAT_10042d278);
      }
    }
    puVar1 = (undefined8 *)
             (unaff_x20 +
             _TtC7WallperP33_4537C798EE20D91316D9ABA5C600337924DownloadProgressDelegate::onComplete)
    ;
    uVar6 = *puVar1;
    uVar2 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    FUN_10002f6dc(uVar6,uVar2);
  }
  return;
}

