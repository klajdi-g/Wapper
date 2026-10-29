// rea decompile_all
// name: FUN_10002df28
// address: 0x10002df28
// body: available
// range: 0x10002df28-0x10002e09f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10002df28(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined1 auStack_68 [8];
  undefined *local_60;
  undefined1 auStack_58 [24];
  
  lVar3 = _TtC7Wallper21HeroCarouselViewModel::pagesCache;
  _swift_beginAccess(unaff_x20 + _TtC7Wallper21HeroCarouselViewModel::pagesCache,auStack_58,1,0);
  if (*(ulong *)(*(long *)(unaff_x20 + lVar3) + 0x10) < 7) {
    return;
  }
  lVar2 = param_1 + -2;
  if (SBORROW8(param_1,2)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10002e090);
    (*pcVar5)();
  }
  lVar1 = param_1 + 2;
  if (SCARRY8(param_1,2)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10002e094);
    (*pcVar5)();
  }
  if (lVar2 <= lVar1) {
    if (SBORROW8(lVar1,lVar2)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10002e09c);
      (*pcVar5)();
    }
    if (!SCARRY8(lVar1 - lVar2,1)) {
      local_60 = (undefined *)Swift::Set::init((lVar1 - lVar2) + 1);
      FUN_1001ca198(auStack_68,lVar2);
      if ((!SCARRY8(lVar2,1)) && (FUN_1001ca198(auStack_68,param_1 + -1), !SCARRY8(param_1 + -1,1)))
      {
        FUN_1001ca198(auStack_68,param_1);
        if (!SCARRY8(param_1,1)) {
          FUN_1001ca198(auStack_68,param_1 + 1);
          if (!SCARRY8(param_1 + 1,1)) {
            FUN_1001ca198(auStack_68,param_1 + 2);
            puVar4 = local_60;
            uVar7 = *(undefined8 *)(unaff_x20 + lVar3);
            _swift_bridgeObjectRetain(local_60);
            uVar6 = uVar7;
            _swift_bridgeObjectRetain();
            FUN_10002f474();
            _swift_bridgeObjectRelease(uVar7);
            _swift_bridgeObjectRelease_n(puVar4,2);
            uVar7 = *(undefined8 *)(unaff_x20 + lVar3);
            *(undefined8 *)(unaff_x20 + lVar3) = uVar6;
            _swift_bridgeObjectRelease(uVar7);
            return;
          }
        }
      }
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10002e08c);
      (*pcVar5)();
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10002e0a0);
    (*pcVar5)();
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10002e098);
  (*pcVar5)();
}

