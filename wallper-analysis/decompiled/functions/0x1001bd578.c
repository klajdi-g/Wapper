// rea decompile_all
// name: FUN_1001bd578
// address: 0x1001bd578
// body: available
// range: 0x1001bd578-0x1001bd7e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001bd578(long param_1,UUID param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  UUID UVar7;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  UUID UVar13;
  ulong uVar14;
  long local_90;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  
  lVar6 = 0;
  local_88 = param_3;
  FUN_100266c2c();
  lVar8 = *(long *)(lVar6 + -8);
  local_90 = lVar6;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar8 + 0x40));
  lVar6 = (long)&local_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_78 = lVar6;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar6 = lVar6 - extraout_x12;
  local_80 = lVar6;
  (*(code *)PTR____chkstk_darwin_100521118)();
  UVar13.unknown = (undefined *)(lVar6 - extraout_x12_00);
  lVar6 = 0;
  FUN_10025ee04();
  local_68 = (long)*(int *)(lVar6 + 0x34);
  lVar6 = *(long *)(param_1 + local_68);
  uVar12 = *(ulong *)(lVar6 + 0x10);
  if (uVar12 != 0) {
    uVar14 = 0;
    local_70 = param_1;
    do {
      if (*(ulong *)(lVar6 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1001bd768);
        (*pcVar4)();
      }
      uVar11 = (ulong)*(byte *)(lVar8 + 0x50) + 0x20 &
               ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff);
      lVar10 = *(long *)(lVar8 + 0x48);
      UVar7.unknown = FUN_100266c2c;
      FUN_100029504(lVar6 + uVar11 + lVar10 * uVar14,UVar13.unknown);
      bVar5 = Foundation::UUID::___infix(UVar13,param_2,UVar7);
      FUN_100029548(UVar13.unknown,FUN_100266c2c);
      lVar3 = local_68;
      lVar2 = local_70;
      lVar1 = local_80;
      if (bVar5) {
        FUN_1001b56ac(local_80,uVar14,FUN_1002872ec,FUN_100266c2c);
        lVar6 = local_78;
        *(undefined8 *)(lVar1 + *(int *)(local_90 + 0x18)) = local_88;
        FUN_100029504(lVar1,local_78,FUN_100266c2c);
        uVar9 = *(ulong *)(lVar2 + lVar3);
        uVar12 = uVar9;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar14 = uVar9;
        if ((uVar12 & 1) == 0) {
          uVar14 = 0;
          FUN_1001c8094(0,*(long *)(uVar9 + 0x10) + 1,1,uVar9,&DAT_100556868,&DAT_10042a720,
                        FUN_100266c2c,PTR__swift_bridgeObjectRelease_100524200);
        }
        uVar12 = *(ulong *)(uVar14 + 0x10);
        uVar9 = uVar14;
        if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar12) {
          uVar9 = (ulong)(1 < *(ulong *)(uVar14 + 0x18));
          FUN_1001c8094(uVar9,uVar12 + 1,1,uVar14,&DAT_100556868,&DAT_10042a720,FUN_100266c2c,
                        PTR__swift_bridgeObjectRelease_100524200);
        }
        *(ulong *)(uVar9 + 0x10) = uVar12 + 1;
        FUN_100007e64(lVar6,uVar9 + uVar11 + uVar12 * lVar10,FUN_100266c2c);
        FUN_100029548(lVar1,FUN_100266c2c);
        *(ulong *)(lVar2 + local_68) = uVar9;
        return;
      }
      uVar14 = uVar14 + 1;
    } while (uVar12 != uVar14);
  }
  return;
}

