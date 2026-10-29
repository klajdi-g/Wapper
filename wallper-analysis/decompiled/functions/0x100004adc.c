// rea decompile_all
// name: FUN_100004adc
// address: 0x100004adc
// body: available
// range: 0x100004adc-0x100004bc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_100004adc(undefined8 param_1,ulong param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  long unaff_x20;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  uVar4 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar4 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    uVar5 = 0;
  }
  else {
    uVar2 = 0;
    FUN_100007e08(0);
    puVar3 = &DAT_10054a170;
    FUN_1000036d0(&DAT_10054a170,FUN_100007e08,&TargetProtocolConformanceDescriptor_10041b51c);
    do {
      bVar1 = (extension_CoreFoundation)::CoreFoundation::_CFObject::___infix
                        (*(undefined8 *)(*(long *)(unaff_x20 + 0x30) + param_2 * 8),param_1,uVar2,
                         puVar3);
      uVar5 = (ulong)bVar1;
      if (bVar1) break;
      param_2 = param_2 + 1 & ~uVar4;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  }
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = param_2;
  return auVar6;
}

