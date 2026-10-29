// rea decompile_all
// name: FUN_1001a8804
// address: 0x1001a8804
// body: available
// range: 0x1001a8804-0x1001a8b9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001a8b38 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001001a8b40) */
/* WARNING: Removing unreachable block (ram,0x0001001a8b50) */

undefined * FUN_1001a8804(long param_1,undefined *param_2)

{
  undefined *puVar1;
  long lVar2;
  String *pSVar3;
  undefined8 *puVar4;
  char *pcVar5;
  _StringGuts _Var6;
  _StringGuts _Var7;
  String SVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  bool bVar12;
  byte bVar13;
  Hasher into;
  ulong uVar14;
  undefined *puVar15;
  void *pvVar16;
  void *pvVar17;
  ulong uVar18;
  ulong uVar19;
  ulong *puVar20;
  ulong uVar21;
  ulong local_100;
  long local_f8;
  undefined *local_e8;
  undefined1 auStack_e0 [16];
  undefined *local_d0;
  ulong uStack_c8;
  long *local_c0;
  long local_98;
  ulong *puStack_90;
  ulong local_88;
  long lStack_80;
  ulong local_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100521138;
  if (*(long *)(param_2 + 0x10) == 0) {
    _swift_release(param_2);
    param_2 = PTR___swiftEmptySetSingleton_1005241a0;
  }
  else {
    puVar20 = (ulong *)(param_1 + 0x38);
    uVar19 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
    uVar21 = 0xffffffffffffffff;
    if (-uVar19 < 0x40) {
      uVar21 = ~(-1L << (-uVar19 & 0x3f));
    }
    uVar21 = uVar21 & *puVar20;
    puVar1 = param_2 + 0x38;
    _swift_bridgeObjectRetain();
    lVar10 = 0;
    local_100 = ~uVar19;
    lVar9 = 0;
    while( true ) {
      while (uVar21 != 0) {
        uVar14 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
        uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
        uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        uVar21 = uVar21 - 1 & uVar21;
        pSVar3 = (String *)
                 (*(long *)(param_1 + 0x30) + LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) * 0x10 +
                 lVar10 * 0x400);
        pcVar5 = pSVar3->str;
        puVar15 = pSVar3->bridgeObject;
        SVar8 = *pSVar3;
        local_f8 = lVar10;
        local_98 = param_1;
        puStack_90 = puVar20;
        local_88 = local_100;
        lStack_80 = lVar10;
        local_78 = uVar21;
        Swift::Hasher::init(*(__int64 *)(param_2 + 0x28));
        _swift_bridgeObjectRetain(puVar15);
        into.unknown = auStack_e0;
        Swift::String::hash(into,SVar8);
        uVar14 = Swift::Hasher::_finalize(into);
        uVar18 = -1L << ((ulong)(byte)param_2[0x20] & 0x3f);
        uVar14 = uVar14 & (uVar18 ^ 0xffffffffffffffff);
        if ((*(ulong *)(puVar1 + (uVar14 >> 6) * 8) >> (uVar14 & 0x3f) & 1) != 0) {
          do {
            puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar14 * 0x10);
            _Var6.unknown = (undefined *)*puVar4;
            _Var7.unknown = (undefined *)puVar4[1];
            if ((_Var6.unknown == pcVar5 && _Var7.unknown == puVar15) ||
               (bVar12 = Swift::_stringCompareWithSmolCheck
                                   (_Var6,_Var7,(_StringComparisonResult)(__int8)pcVar5), bVar12)) {
              _swift_bridgeObjectRelease(puVar15);
              uVar21 = (1L << ((ulong)(byte)param_2[0x20] & 0x3f)) + 0x3fU >> 6;
              local_c0 = &local_98;
              pvVar17 = (void *)(uVar21 << 3);
              local_d0 = param_2;
              uStack_c8 = uVar14;
              if (((param_2[0x20] & 0x3f) < 0xe) ||
                 ((bVar13 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast
                                      (0xc,3,0,0xf,4,0), (bVar13 & 1) != 0 &&
                  (pvVar16 = pvVar17, _swift_stdlib_isStackAllocationSafe(pvVar17,8),
                  ((ulong)pvVar16 & 1) != 0)))) {
                (*(code *)PTR____chkstk_darwin_100521118)();
                puVar15 = (undefined *)
                          ((long)&local_100 - ((long)pvVar17 + 0xfU & 0x1ffffffffffffff0));
                _memcpy(puVar15,puVar1,(size_t)pvVar17);
                FUN_1001a8b9c(puVar15,uVar21,param_2,uVar14,&local_98);
              }
              else {
                pvVar16 = pvVar17;
                _swift_slowAlloc(pvVar17,0xffffffffffffffff);
                if (pvVar16 == (void *)0x0) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x1001a8b40);
                  (*pcVar11)();
                }
                _memcpy(pvVar16,puVar1,(size_t)pvVar17);
                FUN_1001b05fc(&local_e8,pvVar16,uVar21);
                _swift_slowDealloc(pvVar16,0xffffffffffffffff,0xffffffffffffffff);
                puVar15 = local_e8;
              }
              _swift_release(param_2);
              FUN_10002f6ec(local_98,puStack_90,local_88,lStack_80,local_78);
              param_2 = puVar15;
              goto LAB_1001a8a68;
            }
            uVar14 = uVar14 + 1 & ~uVar18;
          } while ((*(ulong *)(puVar1 + (uVar14 >> 6) * 8) >> (uVar14 & 0x3f) & 1) != 0);
        }
        _swift_bridgeObjectRelease(puVar15);
        lVar10 = local_f8;
        lVar9 = local_f8;
      }
      lVar2 = lVar10 + 1;
      if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x1001a8aa8);
        (*pcVar11)();
      }
      if ((long)(0x3f - uVar19 >> 6) <= lVar2) break;
      uVar21 = puVar20[lVar2];
      lVar10 = lVar2;
    }
    FUN_10002f6ec(param_1,puVar20,local_100,lVar9,0);
  }
LAB_1001a8a68:
  if (*(long *)PTR____stack_chk_guard_100521138 == local_70) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

