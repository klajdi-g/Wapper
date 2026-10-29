// rea decompile_all
// name: _TtC7WallperP33_B5DA72BA1597CCF89F9E7344D9DD3E3F16SpinningRingView::initWithCoder:
// address: 0x100103200
// body: available
// range: 0x100103200-0x10010327b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

ID _TtC7WallperP33_B5DA72BA1597CCF89F9E7344D9DD3E3F16SpinningRingView::initWithCoder_
             (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  code *pcVar2;
  undefined *self;
  ID IVar3;
  String SVar4;
  
  lVar1 = ring;
  self = &_OBJC_CLASS___CAShapeLayer;
  _objc_allocWithZone();
  IVar3 = objc_stub::init((ID)self);
  *(ID *)(param_1 + lVar1) = IVar3;
  SVar4.bridgeObject = (void *)0x2;
  SVar4.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x1004dc328,SVar4,(StaticString)0xd000000000000018,0x80000001004dd800,
             0x4dd8a0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10010327c);
  (*pcVar2)();
}

