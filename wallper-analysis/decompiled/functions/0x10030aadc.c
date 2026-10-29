// rea decompile_all
// name: FUN_10030aadc
// address: 0x10030aadc
// body: available
// range: 0x10030aadc-0x10030abff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

long * FUN_10030aadc(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  URL UVar7;
  long *plVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  
  uVar5 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar5 >> 0x11 & 1) == 0) {
    UVar7 = Foundation::URL::typeMetadataAccessor();
    lVar12 = *(long *)(UVar7.unknown + -8);
    plVar8 = param_2;
    (**(code **)(lVar12 + 0x30))(param_2,1,UVar7.unknown);
    if ((int)plVar8 == 0) {
      (**(code **)(lVar12 + 0x10))(param_1,param_2,UVar7.unknown);
      (**(code **)(lVar12 + 0x38))(param_1,0,1,UVar7.unknown);
    }
    else {
      puVar9 = &DAT_100553d90;
      FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
      _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar9 + -8) + 0x40));
    }
    iVar4 = *(int *)(param_3 + 0x18);
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    uVar11 = puVar1[1];
    uVar13 = *puVar1;
    puVar6 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    puVar6[1] = puVar1[1];
    *puVar6 = uVar13;
    puVar2 = (undefined1 *)((long)param_1 + (long)iVar4);
    puVar3 = (undefined1 *)((long)param_2 + (long)iVar4);
    *puVar2 = *puVar3;
    lVar12 = *(long *)(puVar3 + 8);
    *(long *)(puVar2 + 8) = lVar12;
    _swift_retain(uVar11);
  }
  else {
    lVar12 = *param_2;
    *param_1 = lVar12;
    uVar10 = (ulong)uVar5 & 0xff;
    param_1 = (long *)(lVar12 + (uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff)));
  }
  _swift_retain(lVar12);
  return param_1;
}

