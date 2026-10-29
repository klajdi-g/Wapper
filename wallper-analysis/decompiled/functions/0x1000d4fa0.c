// rea decompile_all
// name: FUN_1000d4fa0
// address: 0x1000d4fa0
// body: available
// range: 0x1000d4fa0-0x1000d5007 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ID FUN_1000d4fa0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  
  IVar4 = 0;
  FUN_1000d4ee8();
  _swift_getObjCClassFromMetadata();
  _objc_allocWithZone();
  IVar4 = objc_stub::init(IVar4);
  puVar1 = (undefined8 *)
           (IVar4 + _TtCV7WallperP33_DBEE93701475F9840ECC6A125B728EB913ScrollCatcher11CatcherView::
                    onStep);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar5 = unaff_x20[1];
  uVar6 = *unaff_x20;
  puVar1[1] = unaff_x20[1];
  *puVar1 = uVar6;
  _swift_retain(uVar5);
  FUN_10002f6dc(uVar2,uVar3);
  return IVar4;
}

