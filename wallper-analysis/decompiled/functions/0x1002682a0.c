// rea decompile_all
// name: FUN_1002682a0
// address: 0x1002682a0
// body: available
// range: 0x1002682a0-0x10026844f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


String FUN_1002682a0(long param_1)

{
  Locale LVar1;
  LocalizationValue LVar2;
  char *pcVar3;
  ulong uVar4;
  void *pvVar5;
  long extraout_x8;
  long extraout_x8_00;
  String SVar6;
  
  LVar1 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  LVar2 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar2.unknown + -8) + 0x40));
  if (param_1 - 0xf0U < 0xb4) {
    pcVar3 = (char *)0x6e776144;
    pvVar5 = (void *)0xe400000000000000;
    goto LAB_1002683b0;
  }
  if (param_1 - 0x1a4U < 0xf0) {
    uVar4 = 0x6e726f4d;
  }
  else {
    if (param_1 - 0x294U < 0xb4) {
      pcVar3 = (char *)0x79616464694d;
      pvVar5 = (void *)0xe600000000000000;
      goto LAB_1002683b0;
    }
    if (param_1 - 0x348U < 0xb4) {
      pcVar3 = (char *)0x6f6f6e7265746641;
      pvVar5 = (void *)0xe90000000000006e;
      goto LAB_1002683b0;
    }
    if (0xb3 < param_1 - 0x3fcU) {
      if (param_1 - 0x4b0U < 0xf0) {
        pcVar3 = (char *)0x746867694e;
        pvVar5 = (void *)0xe500000000000000;
      }
      else {
        pcVar3 = (char *)0x67694e206574614c;
        pvVar5 = (void *)0xea00000000007468;
      }
      goto LAB_1002683b0;
    }
    uVar4 = 0x6e657645;
  }
  pcVar3 = (char *)(uVar4 | 0x676e6900000000);
  pvVar5 = (void *)0xe700000000000000;
LAB_1002683b0:
  SVar6.bridgeObject = pvVar5;
  SVar6.str = pcVar3;
  LVar2 = LocalizationValue::_init(SVar6);
  Foundation::Locale::get_current((Locale)LVar2.unknown);
  SVar6 = (extension_Foundation)::Swift::String::_init
                    ((LocalizationValue)
                     (&stack0xffffffffffffffd0 +
                     (-(extraout_x8_00 + 0xfU & 0xfffffffffffffff0) -
                     (extraout_x8 + 0xfU & 0xfffffffffffffff0))),(Locale)0x0);
  return SVar6;
}

