// rea decompile_all
// name: FUN_1001bf57c
// address: 0x1001bf57c
// body: available
// range: 0x1001bf57c-0x1001bf983 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001bf57c(long param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *puVar5;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long alStack_b0 [5];
  undefined8 *local_88;
  undefined *local_80;
  undefined *local_78;
  long local_70;
  ulong local_68;
  
  puVar3 = &DAT_100556ab0;
  local_80 = param_4;
  local_78 = param_5;
  FUN_100002f94(&DAT_100556ab0,&DAT_10042ac58);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  alStack_b0[2] = (long)alStack_b0 - extraout_x8;
  FUN_100266c40();
  lVar10 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar10 + 0x40));
  lVar4 = ((long)alStack_b0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  alStack_b0[3] = lVar4;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar5 = (undefined8 *)(lVar4 - extraout_x12);
  local_88 = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar4 = (long)puVar5 - extraout_x12_00;
  alStack_b0[4] = lVar4;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar5 = (undefined8 *)(lVar4 - extraout_x12_01);
  lVar4 = 0;
  FUN_10025ee04();
  if (*(char *)(param_1 + *(int *)(lVar4 + 0x1c)) != '\0') {
    return;
  }
  alStack_b0[1] = (long)*(int *)(lVar4 + 0x20);
  lVar4 = *(long *)(param_1 + alStack_b0[1]);
  local_68 = *(ulong *)(lVar4 + 0x10);
  if (local_68 == 0) {
    return;
  }
  uVar9 = 0;
  local_70 = param_1;
  while( true ) {
    if (*(ulong *)(lVar4 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1001bf8fc);
      (*pcVar1)();
    }
    uVar6 = (ulong)*(byte *)(lVar10 + 0x50) + 0x20 &
            ((ulong)*(byte *)(lVar10 + 0x50) ^ 0xffffffffffffffff);
    lVar11 = *(long *)(lVar10 + 0x48);
    FUN_100029504(lVar4 + uVar6 + lVar11 * uVar9,puVar5,FUN_100266c40);
    if ((undefined *)*puVar5 == param_2 && (undefined *)puVar5[1] == param_3) break;
    bVar2 = Swift::_stringCompareWithSmolCheck
                      ((undefined *)*puVar5,(undefined *)puVar5[1],
                       (_StringComparisonResult)(__int8)param_2);
    FUN_100029548(puVar5,FUN_100266c40);
    if (bVar2) goto LAB_1001bf768;
    uVar9 = uVar9 + 1;
    if (local_68 == uVar9) {
      return;
    }
  }
  FUN_100029548(puVar5,FUN_100266c40);
LAB_1001bf768:
  lVar4 = alStack_b0[1];
  FUN_1001b56ac(alStack_b0[4],uVar9,FUN_100287300,FUN_100266c40);
  puVar5 = local_88;
  if (local_78 != (undefined *)0x0) {
    lVar10 = *(long *)(local_70 + lVar4);
    uVar9 = *(ulong *)(lVar10 + 0x10);
    if (uVar9 != 0) {
      uVar12 = 0;
      lVar7 = lVar10 + uVar6;
      do {
        puVar3 = local_78;
        if (*(ulong *)(lVar10 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1001bf900);
          (*pcVar1)();
        }
        FUN_100029504(lVar7,puVar5,FUN_100266c40);
        if ((undefined *)*puVar5 == local_80 && puVar3 == (undefined *)puVar5[1]) {
          FUN_100029548(puVar5,FUN_100266c40);
LAB_1001bf8a4:
          lVar11 = alStack_b0[4];
          lVar4 = alStack_b0[2];
          if (uVar12 <= *(ulong *)(lVar10 + 0x10)) {
            FUN_100029504(alStack_b0[4],alStack_b0[2],FUN_100266c40);
            FUN_1002873ac(local_70,uVar12,uVar12,lVar4);
            FUN_100029548(lVar11,FUN_100266c40);
            return;
          }
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1001bf984);
          (*pcVar1)();
        }
        bVar2 = Swift::_stringCompareWithSmolCheck
                          ((undefined *)*puVar5,(undefined *)puVar5[1],
                           (_StringComparisonResult)(__int8)local_80);
        FUN_100029548(puVar5,FUN_100266c40);
        if (bVar2) goto LAB_1001bf8a4;
        uVar12 = uVar12 + 1;
        lVar7 = lVar7 + lVar11;
      } while (uVar9 != uVar12);
    }
  }
  lVar7 = alStack_b0[4];
  lVar10 = alStack_b0[3];
  FUN_100029504(alStack_b0[4],alStack_b0[3],FUN_100266c40);
  uVar8 = *(ulong *)(local_70 + lVar4);
  uVar9 = uVar8;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar12 = uVar8;
  if ((uVar9 & 1) == 0) {
    uVar12 = 0;
    FUN_1001c8094(0,*(long *)(uVar8 + 0x10) + 1,1,uVar8,&DAT_100556850,&DAT_10042a660,FUN_100266c40,
                  PTR__swift_bridgeObjectRelease_100524200);
  }
  uVar9 = *(ulong *)(uVar12 + 0x10);
  uVar8 = uVar12;
  if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar9) {
    uVar8 = (ulong)(1 < *(ulong *)(uVar12 + 0x18));
    FUN_1001c8094(uVar8,uVar9 + 1,1,uVar12,&DAT_100556850,&DAT_10042a660,FUN_100266c40,
                  PTR__swift_bridgeObjectRelease_100524200);
  }
  *(ulong *)(uVar8 + 0x10) = uVar9 + 1;
  FUN_100007e64(lVar10,uVar8 + uVar6 + uVar9 * lVar11,FUN_100266c40);
  FUN_100029548(lVar7,FUN_100266c40);
  *(ulong *)(local_70 + lVar4) = uVar8;
  return;
}

