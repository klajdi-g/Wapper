// rea decompile_all
// name: _TtCV7WallperP33_DBEE93701475F9840ECC6A125B728EB913ScrollCatcher11CatcherView::initWithCoder:
// address: 0x1000d4de8
// body: available
// range: 0x1000d4de8-0x1000d4e97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtCV7WallperP33_DBEE93701475F9840ECC6A125B728EB913ScrollCatcher11CatcherView::initWithCoder_
             (ID param_1,SEL param_2,ID param_3)

{
  undefined8 *puVar1;
  class_t *pcVar2;
  ID IVar3;
  objc_super local_40;
  
  pcVar2 = (class_t *)param_1;
  _swift_getObjectType();
  puVar1 = (undefined8 *)(param_1 + onStep);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(param_1 + monitor);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined8 *)(param_1 + pending) = 0;
  local_40.receiver = param_1;
  local_40.super_class = pcVar2;
  IVar3 = _objc_msgSendSuper2(&local_40,"initWithCoder:",param_3);
  return IVar3;
}

