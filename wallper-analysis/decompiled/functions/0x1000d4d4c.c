// rea decompile_all
// name: _TtCV7WallperP33_DBEE93701475F9840ECC6A125B728EB913ScrollCatcher11CatcherView::initWithFrame:
// address: 0x1000d4d4c
// body: available
// range: 0x1000d4d4c-0x1000d4de7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x30 bytes */

ID _TtCV7WallperP33_DBEE93701475F9840ECC6A125B728EB913ScrollCatcher11CatcherView::initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  undefined8 *puVar1;
  class_t *pcVar2;
  ID IVar3;
  objc_super local_50;
  
  pcVar2 = (class_t *)param_1;
  _swift_getObjectType
            (param_1,param_2,param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,
             param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8);
  puVar1 = (undefined8 *)(param_1 + onStep);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(param_1 + monitor);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined8 *)(param_1 + pending) = 0;
  local_50.receiver = param_1;
  local_50.super_class = pcVar2;
  IVar3 = _objc_msgSendSuper2(&local_50,"initWithFrame:");
  return IVar3;
}

