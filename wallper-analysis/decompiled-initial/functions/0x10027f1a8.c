// rea decompile_all
// name: FUN_10027f1a8
// address: 0x10027f1a8
// body: available
// range: 0x10027f1a8-0x10027f2ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10027f1a8(undefined8 param_1,long param_2,ulong param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *unaff_x20;
  _swift_bridgeObjectRetain(lVar4);
  FUN_10000464c();
  _swift_bridgeObjectRelease(lVar4);
  if ((param_3 & 1) == 0) {
    puVar2 = &DAT_10054a360;
    FUN_100002f94(&DAT_10054a360,&DAT_10041a330);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(puVar2 + -8) + 0x38);
    uVar3 = 1;
  }
  else {
    iVar1 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar4 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_1001cc0a4();
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(*(long *)(lVar4 + 0x30) + param_2 * 0x10 + 8));
    lVar5 = *(long *)(lVar4 + 0x38);
    puVar2 = &DAT_10054a360;
    FUN_100002f94(&DAT_10054a360,&DAT_10041a330);
    lVar6 = *(long *)(puVar2 + -8);
    FUN_100007e1c(lVar5 + *(long *)(lVar6 + 0x48) * param_2,param_1,&DAT_10054a360,&DAT_10041a330);
    FUN_1001d268c(param_2,lVar4);
    *unaff_x20 = lVar4;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 0x38);
    uVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010027f2dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar3,1,puVar2);
  return;
}

