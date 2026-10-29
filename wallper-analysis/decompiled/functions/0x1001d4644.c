// rea decompile_all
// name: FUN_1001d4644
// address: 0x1001d4644
// body: available
// range: 0x1001d4644-0x1001d496f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001d4644(UUID param_1,ulong *param_2,code *param_3)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong *puVar7;
  UUID UVar8;
  long extraout_x8;
  ulong uVar9;
  long extraout_x12;
  long extraout_x12_00;
  long lVar10;
  long lVar11;
  ulong uVar12;
  UUID UVar13;
  ulong uVar14;
  ulong uVar15;
  code *local_a0;
  ulong local_98;
  ulong *local_90;
  long local_88;
  long local_80 [4];
  
  lVar3 = 0;
  local_a0 = param_3;
  FUN_10025ee04();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar11 + 0x40));
  lVar3 = (long)&local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_88 = lVar3;
  (*(code *)PTR____chkstk_darwin_100521118)();
  uVar9 = lVar3 - extraout_x12;
  local_98 = uVar9;
  (*(code *)PTR____chkstk_darwin_100521118)();
  UVar13.unknown = (undefined *)(uVar9 - extraout_x12_00);
  puVar4 = &DAT_10042a610;
  _swift_getKeyPath(&DAT_10042a610);
  puVar5 = &DAT_10042a638;
  _swift_getKeyPath(&DAT_10042a638);
  local_90 = param_2;
  Combine::Published::_get_subscript(local_80,param_2,puVar4,puVar5);
  _swift_release(puVar4);
  _swift_release(puVar5);
  lVar3 = local_80[0];
  uVar9 = *(ulong *)(local_80[0] + 0x10);
  if (uVar9 != 0) {
    uVar15 = 0;
    do {
      if (*(ulong *)(lVar3 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1001d4954);
        (*pcVar1)();
      }
      uVar12 = (ulong)*(byte *)(lVar11 + 0x50) + 0x20 &
               ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff);
      lVar10 = *(long *)(lVar11 + 0x48) * uVar15;
      UVar8.unknown = FUN_10025ee04;
      FUN_100029504(lVar3 + uVar12 + lVar10,UVar13.unknown);
      bVar2 = Foundation::UUID::___infix(UVar13,param_1,UVar8);
      FUN_100029548(UVar13.unknown,FUN_10025ee04);
      if (bVar2) {
        _swift_bridgeObjectRelease(lVar3);
        puVar4 = &DAT_10042a610;
        _swift_getKeyPath(&DAT_10042a610);
        puVar5 = &DAT_10042a638;
        _swift_getKeyPath(&DAT_10042a638);
        puVar7 = local_90;
        Combine::Published::_get_subscript(local_80,local_90,puVar4,puVar5);
        _swift_release(puVar4);
        _swift_release(puVar5);
        uVar9 = local_98;
        if (*(ulong *)(local_80[0] + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1001d4958);
          (*pcVar1)();
        }
        FUN_100029504(local_80[0] + uVar12 + lVar10,local_98,FUN_10025ee04);
        _swift_bridgeObjectRelease(local_80[0]);
        lVar3 = local_88;
        FUN_100029504(uVar9,local_88,FUN_10025ee04);
        FUN_1001d4250(uVar9,local_a0);
        uVar6 = uVar9;
        FUN_100265c18(uVar9,lVar3);
        if ((uVar6 & 1) == 0) {
          puVar4 = &DAT_10042a610;
          _swift_getKeyPath(&DAT_10042a610);
          puVar5 = &DAT_10042a638;
          _swift_getKeyPath(&DAT_10042a638);
          pcVar1 = (code *)local_80;
          Combine::Published::_modify_subscript();
          uVar14 = *puVar7;
          uVar6 = uVar14;
          local_a0 = pcVar1;
          _swift_isUniquelyReferenced_nonNull_native();
          *puVar7 = uVar14;
          if ((uVar6 & 1) == 0) {
            FUN_10028729c();
            *puVar7 = uVar14;
          }
          if (*(ulong *)(uVar14 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1001d4970);
            (*pcVar1)();
          }
          FUN_1001d408c(uVar9,uVar14 + uVar12 + lVar10);
          (*local_a0)(local_80,0);
          _swift_release(puVar4);
          _swift_release(puVar5);
          FUN_1001b9518(param_1.unknown);
          lVar3 = local_88;
        }
        FUN_100029548(lVar3,FUN_10025ee04);
        FUN_100029548(uVar9,FUN_10025ee04);
        return;
      }
      uVar15 = uVar15 + 1;
    } while (uVar9 != uVar15);
  }
  _swift_bridgeObjectRelease(lVar3);
  return;
}

