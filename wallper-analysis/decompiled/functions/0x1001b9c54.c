// rea decompile_all
// name: FUN_1001b9c54
// address: 0x1001b9c54
// body: available
// range: 0x1001b9c54-0x1001b9fbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001b9c54(UUID param_1,ulong *param_2,uint param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong *puVar7;
  UUID UVar8;
  long extraout_x8;
  ulong uVar9;
  long extraout_x12;
  long extraout_x12_00;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  UUID UVar14;
  ulong uVar15;
  undefined1 auStack_b0 [4];
  uint local_ac;
  long local_a8;
  undefined8 local_a0;
  ulong *local_98;
  undefined1 *local_90;
  ulong local_88;
  long local_80 [4];
  
  lVar4 = 0;
  local_ac = param_3;
  local_a0 = param_4;
  FUN_10025ee04();
  lVar12 = *(long *)(lVar4 + -8);
  local_a8 = lVar4;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar12 + 0x40));
  local_90 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  uVar9 = (long)(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  local_88 = uVar9;
  (*(code *)PTR____chkstk_darwin_100521118)();
  UVar14.unknown = (undefined *)(uVar9 - extraout_x12_00);
  puVar5 = &DAT_10042a610;
  _swift_getKeyPath(&DAT_10042a610);
  puVar6 = &DAT_10042a638;
  _swift_getKeyPath(&DAT_10042a638);
  local_98 = param_2;
  Combine::Published::_get_subscript(local_80,param_2,puVar5,puVar6);
  _swift_release(puVar5);
  _swift_release(puVar6);
  lVar4 = local_80[0];
  uVar9 = *(ulong *)(local_80[0] + 0x10);
  if (uVar9 != 0) {
    uVar13 = 0;
    do {
      if (*(ulong *)(lVar4 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b9fa4);
        (*pcVar2)();
      }
      uVar10 = (ulong)*(byte *)(lVar12 + 0x50) + 0x20 &
               ((ulong)*(byte *)(lVar12 + 0x50) ^ 0xffffffffffffffff);
      lVar11 = *(long *)(lVar12 + 0x48) * uVar13;
      UVar8.unknown = FUN_10025ee04;
      FUN_100029504(lVar4 + uVar10 + lVar11,UVar14.unknown);
      bVar3 = Foundation::UUID::___infix(UVar14,param_1,UVar8);
      FUN_100029548(UVar14.unknown,FUN_10025ee04);
      if (bVar3) {
        _swift_bridgeObjectRelease(lVar4);
        puVar5 = &DAT_10042a610;
        _swift_getKeyPath(&DAT_10042a610);
        puVar6 = &DAT_10042a638;
        _swift_getKeyPath(&DAT_10042a638);
        puVar7 = local_98;
        Combine::Published::_get_subscript(local_80,local_98,puVar5,puVar6);
        _swift_release(puVar5);
        _swift_release(puVar6);
        uVar9 = local_88;
        if (*(ulong *)(local_80[0] + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b9fa8);
          (*pcVar2)();
        }
        FUN_100029504(local_80[0] + uVar10 + lVar11,local_88,FUN_10025ee04);
        _swift_bridgeObjectRelease(local_80[0]);
        puVar1 = local_90;
        FUN_100029504(uVar9,local_90,FUN_10025ee04);
        bVar3 = (local_ac & 0xff) != 0;
        lVar4 = 0x2c;
        if (bVar3) {
          lVar4 = 0x30;
        }
        *(undefined8 *)(uVar9 + (long)*(int *)(local_a8 + lVar4)) = local_a0;
        lVar4 = 0x24;
        if (bVar3) {
          lVar4 = 0x28;
        }
        *(undefined1 *)(uVar9 + (long)*(int *)(local_a8 + lVar4)) = 1;
        uVar15 = uVar9;
        FUN_100265c18(uVar9,puVar1);
        if ((uVar15 & 1) == 0) {
          puVar5 = &DAT_10042a610;
          _swift_getKeyPath(&DAT_10042a610);
          puVar6 = &DAT_10042a638;
          _swift_getKeyPath(&DAT_10042a638);
          pcVar2 = (code *)local_80;
          Combine::Published::_modify_subscript();
          uVar15 = *puVar7;
          uVar9 = uVar15;
          _swift_isUniquelyReferenced_nonNull_native();
          *puVar7 = uVar15;
          if ((uVar9 & 1) == 0) {
            FUN_10028729c();
            *puVar7 = uVar15;
          }
          uVar9 = local_88;
          if (*(ulong *)(uVar15 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b9fc0);
            (*pcVar2)();
          }
          FUN_1001d408c(local_88,uVar15 + uVar10 + lVar11);
          (*pcVar2)(local_80,0);
          _swift_release(puVar5);
          _swift_release(puVar6);
          FUN_1001b9518(param_1.unknown);
          FUN_100029548(local_90,FUN_10025ee04);
        }
        else {
          FUN_100029548(puVar1,FUN_10025ee04);
        }
        FUN_100029548(uVar9,FUN_10025ee04);
        return;
      }
      uVar13 = uVar13 + 1;
    } while (uVar9 != uVar13);
  }
  _swift_bridgeObjectRelease(lVar4);
  return;
}

