// rea decompile_all
// name: FUN_1002876b4
// address: 0x1002876b4
// body: available
// range: 0x1002876b4-0x10028777f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002876b4(long *param_1,RangeReference *param_2,ulong param_3)

{
  __DataStorage *p_Var1;
  RangeReference *pRVar2;
  ulong uVar3;
  
  if (param_2 != (RangeReference *)0x0) {
    if (param_3 != 0) {
      if (param_3 < 0xf) {
        pRVar2 = param_2 + param_3;
        FUN_100287d88();
        uVar3 = (ulong)pRVar2 & 0xffffffffffffff;
      }
      else {
        p_Var1 = Foundation::__DataStorage::typeMetadataAccessor();
        _swift_allocObject(p_Var1,*(undefined4 *)(p_Var1 + 0x30),*(undefined2 *)(p_Var1 + 0x34));
        p_Var1 = Foundation::__DataStorage::_init(p_Var1,(__int64)param_2);
        if (param_3 < 0x7fffffff) {
          param_2 = (RangeReference *)(param_3 << 0x20);
          uVar3 = (ulong)p_Var1 | 0x4000000000000000;
        }
        else {
          param_2 = Foundation::Data::RangeReference::typeMetadataAccessor();
          _swift_allocObject(param_2,0x20,7);
          *(undefined8 *)(param_2 + 0x10) = 0;
          *(ulong *)(param_2 + 0x18) = param_3;
          uVar3 = (ulong)p_Var1 | 0x8000000000000000;
        }
      }
      goto LAB_1002876fc;
    }
    param_2 = (RangeReference *)0x0;
  }
  uVar3 = 0xc000000000000000;
LAB_1002876fc:
  *param_1 = (long)param_2;
  param_1[1] = uVar3;
  return;
}

