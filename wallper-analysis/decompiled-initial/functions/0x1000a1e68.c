// rea decompile_all
// name: FUN_1000a1e68
// address: 0x1000a1e68
// body: available
// range: 0x1000a1e68-0x1000a1fef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000a1e68(void)

{
  undefined8 uVar1;
  URL UVar2;
  URL UVar3;
  URL UVar4;
  NSURL *pNVar5;
  undefined8 uVar6;
  long extraout_x8;
  undefined1 *puVar7;
  long lVar8;
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar8 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar8 + 0x40));
  puVar7 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if ((DAT_10054f920 & 1) == 0) {
    DAT_10054f920 = 1;
    if (DAT_10054f928 != -1) {
      _swift_once(&DAT_10054f928,FUN_10009ff34);
    }
    UVar3 = UVar2;
    FUN_100099338(UVar2.unknown,&DAT_10054f930);
    UVar4.unknown = puVar7;
    (**(code **)(lVar8 + 0x10))(puVar7,UVar3.unknown,UVar2.unknown);
    pNVar5 = Foundation::URL::_bridgeToObjectiveC(UVar4);
    _CGImageSourceCreateWithURL(pNVar5,0);
    if (pNVar5 == (NSURL *)0x0) {
      pNVar5 = (NSURL *)0x0;
    }
    else {
      FUN_10010f93c(pNVar5,0x5dc);
    }
    (**(code **)(lVar8 + 8))(puVar7,UVar2.unknown);
    uVar6 = 0x6b63754c20746547;
    DAT_10054f848 = pNVar5;
    FUN_100161e0c(0x6b63754c20746547,0xe900000000000079,0x6e75502074666144,0xe90000000000006b,
                  0xd000000000000016,0x80000001004dce60);
    uVar1 = DAT_10054f858;
    DAT_10054f858 = uVar6;
    _swift_bridgeObjectRelease(uVar1);
  }
  return;
}

