// rea decompile_all
// name: FUN_1001d3b8c
// address: 0x1001d3b8c
// body: available
// range: 0x1001d3b8c-0x1001d3ee3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001d3b8c(UUID param_1,ulong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong *puVar8;
  UUID UVar9;
  long extraout_x8;
  ulong uVar10;
  long extraout_x12;
  long extraout_x12_00;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  UUID UVar16;
  ulong uVar17;
  long local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  long local_98;
  ulong local_90;
  ulong *local_88;
  long local_80 [4];
  
  lVar5 = 0;
  local_a8 = param_3;
  local_a0 = param_4;
  FUN_10025ee04();
  lVar15 = *(long *)(lVar5 + -8);
  local_b0 = lVar5;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar15 + 0x40));
  lVar5 = (long)&local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_98 = lVar5;
  (*(code *)PTR____chkstk_darwin_100521118)();
  uVar10 = lVar5 - extraout_x12;
  local_90 = uVar10;
  (*(code *)PTR____chkstk_darwin_100521118)();
  UVar16.unknown = (undefined *)(uVar10 - extraout_x12_00);
  puVar6 = &DAT_10042a610;
  _swift_getKeyPath(&DAT_10042a610);
  puVar7 = &DAT_10042a638;
  _swift_getKeyPath(&DAT_10042a638);
  local_88 = param_2;
  Combine::Published::_get_subscript(local_80,param_2,puVar6,puVar7);
  _swift_release(puVar6);
  _swift_release(puVar7);
  lVar5 = local_80[0];
  uVar10 = *(ulong *)(local_80[0] + 0x10);
  if (uVar10 != 0) {
    uVar13 = 0;
    do {
      if (*(ulong *)(lVar5 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1001d3ec8);
        (*pcVar3)();
      }
      uVar11 = (ulong)*(byte *)(lVar15 + 0x50) + 0x20 &
               ((ulong)*(byte *)(lVar15 + 0x50) ^ 0xffffffffffffffff);
      lVar12 = *(long *)(lVar15 + 0x48) * uVar13;
      UVar9.unknown = FUN_10025ee04;
      FUN_100029504(lVar5 + uVar11 + lVar12,UVar16.unknown);
      bVar4 = Foundation::UUID::___infix(UVar16,param_1,UVar9);
      FUN_100029548(UVar16.unknown,FUN_10025ee04);
      if (bVar4) {
        _swift_bridgeObjectRelease(lVar5);
        puVar6 = &DAT_10042a610;
        _swift_getKeyPath(&DAT_10042a610);
        puVar7 = &DAT_10042a638;
        _swift_getKeyPath(&DAT_10042a638);
        Combine::Published::_get_subscript(local_80,local_88,puVar6,puVar7);
        _swift_release(puVar6);
        _swift_release(puVar7);
        uVar10 = local_90;
        if (*(ulong *)(local_80[0] + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1001d3ecc);
          (*pcVar3)();
        }
        FUN_100029504(local_80[0] + uVar11 + lVar12,local_90,FUN_10025ee04);
        _swift_bridgeObjectRelease(local_80[0]);
        lVar5 = local_98;
        FUN_100029504(uVar10,local_98,FUN_10025ee04);
        uVar2 = local_a0;
        puVar1 = (undefined8 *)(uVar10 + (long)*(int *)(local_b0 + 0x14));
        uVar14 = puVar1[1];
        _swift_bridgeObjectRetain(local_a0);
        _swift_bridgeObjectRelease(uVar14);
        *puVar1 = local_a8;
        puVar1[1] = uVar2;
        uVar17 = uVar10;
        FUN_100265c18(uVar10,lVar5);
        if ((uVar17 & 1) == 0) {
          puVar6 = &DAT_10042a610;
          _swift_getKeyPath(&DAT_10042a610);
          puVar7 = &DAT_10042a638;
          _swift_getKeyPath(&DAT_10042a638);
          pcVar3 = (code *)local_80;
          puVar8 = local_88;
          Combine::Published::_modify_subscript();
          uVar17 = *puVar8;
          uVar10 = uVar17;
          _swift_isUniquelyReferenced_nonNull_native();
          *puVar8 = uVar17;
          if ((uVar10 & 1) == 0) {
            FUN_10028729c();
            *puVar8 = uVar17;
          }
          uVar10 = local_90;
          if (*(ulong *)(uVar17 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1001d3ee4);
            (*pcVar3)();
          }
          FUN_1001d408c(local_90,uVar17 + uVar11 + lVar12);
          (*pcVar3)(local_80,0);
          _swift_release(puVar6);
          _swift_release(puVar7);
          FUN_1001b9518(param_1.unknown);
          FUN_100029548(local_98,FUN_10025ee04);
        }
        else {
          FUN_100029548(lVar5,FUN_10025ee04);
        }
        FUN_100029548(uVar10,FUN_10025ee04);
        return;
      }
      uVar13 = uVar13 + 1;
    } while (uVar10 != uVar13);
  }
  _swift_bridgeObjectRelease(lVar5);
  return;
}

