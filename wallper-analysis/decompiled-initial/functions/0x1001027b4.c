// rea decompile_all
// name: FUN_1001027b4
// address: 0x1001027b4
// body: available
// range: 0x1001027b4-0x1001028cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001027b4(void)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  ID IVar5;
  undefined *puVar6;
  long unaff_x20;
  String SVar7;
  
  lVar2 = _TtC7WallperP33_33CB5CB3CEB588E6D6BBE6B589CE495718ScrollingLabelView::strip;
  puVar4 = &_OBJC_CLASS___CALayer;
  _objc_allocWithZone();
  IVar5 = objc_stub::init((ID)puVar4);
  *(ID *)(unaff_x20 + lVar2) = IVar5;
  lVar2 = _TtC7WallperP33_33CB5CB3CEB588E6D6BBE6B589CE495718ScrollingLabelView::copies;
  puVar4 = &DAT_10054d5c0;
  FUN_100002f94(&DAT_10054d5c0,&DAT_1004202e0);
  _swift_allocObject();
  *(undefined8 *)(puVar4 + 0x10) = 2;
  *(undefined8 *)(puVar4 + 0x18) = 5;
  puVar6 = &_OBJC_CLASS___CATextLayer;
  _objc_allocWithZone();
  IVar5 = objc_stub::init((ID)puVar6);
  *(ID *)(puVar4 + 0x20) = IVar5;
  puVar6 = &_OBJC_CLASS___CATextLayer;
  _objc_allocWithZone();
  IVar5 = objc_stub::init((ID)puVar6);
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  *(ID *)(puVar4 + 0x28) = IVar5;
  puVar1 = (undefined8 *)
           (unaff_x20 + _TtC7WallperP33_33CB5CB3CEB588E6D6BBE6B589CE495718ScrollingLabelView::key);
  *puVar1 = 0;
  puVar1[1] = 0xe000000000000000;
  *(undefined8 *)
   (unaff_x20 + _TtC7WallperP33_33CB5CB3CEB588E6D6BBE6B589CE495718ScrollingLabelView::distance) = 0;
  *(undefined8 *)
   (unaff_x20 + _TtC7WallperP33_33CB5CB3CEB588E6D6BBE6B589CE495718ScrollingLabelView::pause) =
       0x3ff0000000000000;
  *(undefined8 *)
   (unaff_x20 + _TtC7WallperP33_33CB5CB3CEB588E6D6BBE6B589CE495718ScrollingLabelView::speed) =
       0x4044000000000000;
  SVar7.bridgeObject = (void *)0x2;
  SVar7.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x1004dc328,SVar7,(StaticString)0xd000000000000018,0x80000001004dd800,
             0x4dd880);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1001028d0);
  (*pcVar3)();
}

