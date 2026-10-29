// rea decompile_all
// name: FUN_100265634
// address: 0x100265634
// body: available
// range: 0x100265634-0x10026590f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100265634(long param_1)

{
  undefined *puVar1;
  int iVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long extraout_x12;
  long extraout_x13;
  long lVar12;
  long lVar13;
  long lVar14;
  long alStack_a0 [4];
  long local_80;
  long local_78;
  long *local_70;
  undefined *local_68;
  
  puVar4 = &DAT_10054e068;
  FUN_100002f94(&DAT_10054e068,&DAT_100422a40);
  local_68 = puVar4;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  plVar9 = (long *)((long)alStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_70 = plVar9;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar4 = PTR___swiftEmptyArrayStorage_100524190;
  lVar14 = (long)plVar9 - extraout_x12;
  local_78 = *(long *)(param_1 + 0x10);
  if (local_78 == 0) {
    lVar13 = 0;
  }
  else {
    alStack_a0[2] = (long)*(byte *)(extraout_x13 + 0x50);
    alStack_a0[3] = alStack_a0[2] + 0x20U & (alStack_a0[2] ^ 0xffffffffffffffffU);
    puVar7 = PTR___swiftEmptyArrayStorage_100524190 + alStack_a0[3];
    lVar5 = 0;
    FUN_10040211c();
    lVar12 = 0;
    lVar13 = 0;
    uVar10 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    param_1 = param_1 + (uVar10 + 0x20 & (uVar10 ^ 0xffffffffffffffff));
    local_80 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    lVar5 = extraout_x13;
    alStack_a0[1] = extraout_x13;
    do {
      plVar9 = local_70;
      iVar2 = *(int *)(local_68 + 0x30);
      *local_70 = lVar12;
      FUN_100029504(param_1,(long)plVar9 + (long)iVar2,FUN_10040211c);
      FUN_100007e1c(plVar9,lVar14,&DAT_10054e068,&DAT_100422a40);
      if (lVar13 == 0) {
        uVar10 = *(ulong *)(puVar4 + 0x18);
        if ((long)((uVar10 >> 1) + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100265904);
          (*pcVar3)();
        }
        uVar11 = uVar10 & 0xfffffffffffffffe;
        if ((long)uVar10 < 2) {
          uVar11 = 1;
        }
        puVar6 = &DAT_100558540;
        FUN_100002f94(&DAT_100558540,&DAT_10042ce30);
        lVar13 = alStack_a0[3];
        lVar5 = *(long *)(lVar5 + 0x48);
        _swift_allocObject();
        puVar7 = puVar6;
        _malloc_size();
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100265908);
          (*pcVar3)();
        }
        lVar8 = (long)puVar7 - lVar13;
        if (lVar8 == -0x8000000000000000 && lVar5 == -1) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10026590c);
          (*pcVar3)();
        }
        uVar10 = 0;
        if (lVar5 != 0) {
          uVar10 = lVar8 / lVar5;
        }
        *(ulong *)(puVar6 + 0x10) = uVar11;
        *(ulong *)(puVar6 + 0x18) = uVar10 << 1;
        puVar7 = puVar6 + lVar13;
        uVar11 = *(ulong *)(puVar4 + 0x18) >> 1;
        if (*(long *)(puVar4 + 0x10) != 0) {
          puVar1 = puVar4 + alStack_a0[3];
          if (puVar6 < puVar4 || puVar1 + uVar11 * lVar5 <= puVar7) {
            _swift_arrayInitWithTakeFrontToBack(puVar7,puVar1,uVar11,local_68);
          }
          else if (puVar6 != puVar4) {
            _swift_arrayInitWithTakeBackToFront(puVar7,puVar1,uVar11,local_68);
          }
          *(undefined8 *)(puVar4 + 0x10) = 0;
        }
        puVar7 = puVar7 + uVar11 * lVar5;
        lVar13 = (uVar10 & 0x7fffffffffffffff) - uVar11;
        _swift_release(puVar4);
        puVar4 = puVar6;
        lVar5 = alStack_a0[1];
      }
      if (SBORROW8(lVar13,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100265900);
        (*pcVar3)();
      }
      lVar13 = lVar13 + -1;
      lVar12 = lVar12 + 1;
      FUN_100007e1c(lVar14,puVar7,&DAT_10054e068,&DAT_100422a40);
      puVar7 = puVar7 + *(long *)(lVar5 + 0x48);
      param_1 = param_1 + local_80;
    } while (local_78 != lVar12);
  }
  if (1 < *(ulong *)(puVar4 + 0x18)) {
    uVar10 = *(ulong *)(puVar4 + 0x18) >> 1;
    if (SBORROW8(uVar10,lVar13)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100265910);
      (*pcVar3)();
    }
    *(ulong *)(puVar4 + 0x10) = uVar10 - lVar13;
  }
  return puVar4;
}

