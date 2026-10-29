// rea decompile_all
// name: FUN_1001ca504
// address: 0x1001ca504
// body: available
// range: 0x1001ca504-0x1001ca60b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1001ca504(undefined1 *param_1,char *param_2)

{
  char *pcVar1;
  Hasher HVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *unaff_x20;
  long lVar6;
  String SVar7;
  long local_88 [9];
  
  lVar6 = *unaff_x20;
  HVar2.unknown = param_2;
  Swift::Hasher::init(*(__int64 *)(lVar6 + 0x28));
  pcVar1 = param_2;
  FUN_100402278();
  SVar7.bridgeObject = HVar2.unknown;
  SVar7.str = pcVar1;
  Swift::String::hash((Hasher)local_88,SVar7);
  _swift_bridgeObjectRelease();
  uVar3 = Swift::Hasher::_finalize(HVar2);
  uVar5 = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
  uVar3 = uVar3 & (uVar5 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar6 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0) {
    do {
      if ((uint)*(byte *)(*(long *)(lVar6 + 0x30) + uVar3) == ((uint)param_2 & 0xff)) {
        uVar4 = 0;
        goto LAB_1001ca5f0;
      }
      uVar3 = uVar3 + 1 & ~uVar5;
    } while ((*(ulong *)(lVar6 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0);
  }
  lVar6 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native(lVar6);
  local_88[0] = *unaff_x20;
  FUN_1001cab88(param_2,uVar3,lVar6);
  *unaff_x20 = local_88[0];
  uVar4 = 1;
LAB_1001ca5f0:
  *param_1 = (char)param_2;
  return uVar4;
}

