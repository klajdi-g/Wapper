// rea decompile_all
// name: FUN_1001b9fc0
// address: 0x1001b9fc0
// body: available
// range: 0x1001b9fc0-0x1001ba2f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001b9fc0(UUID param_1,code *param_2,undefined8 param_3)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  UUID UVar6;
  long extraout_x8;
  undefined1 *puVar7;
  ulong uVar8;
  long extraout_x12;
  long extraout_x12_00;
  ulong uVar9;
  ulong *unaff_x20;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  UUID UVar14;
  ulong uVar15;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  code *pcStack_a0;
  long local_80 [4];
  
  lVar3 = 0;
  local_a8 = param_3;
  pcStack_a0 = param_2;
  FUN_10025ee04();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar10 + 0x40));
  puVar7 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  uVar8 = (long)puVar7 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  UVar14.unknown = (undefined *)(uVar8 - extraout_x12_00);
  puVar4 = &DAT_10042a610;
  _swift_getKeyPath(&DAT_10042a610);
  puVar5 = &DAT_10042a638;
  _swift_getKeyPath(&DAT_10042a638);
  Combine::Published::_get_subscript(local_80);
  _swift_release(puVar4);
  _swift_release(puVar5);
  lVar3 = local_80[0];
  uVar11 = *(ulong *)(local_80[0] + 0x10);
  if (uVar11 != 0) {
    uVar13 = 0;
    do {
      if (*(ulong *)(lVar3 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1001ba2dc);
        (*pcVar1)();
      }
      uVar9 = (ulong)*(byte *)(lVar10 + 0x50) + 0x20 &
              ((ulong)*(byte *)(lVar10 + 0x50) ^ 0xffffffffffffffff);
      lVar12 = *(long *)(lVar10 + 0x48) * uVar13;
      UVar6.unknown = FUN_10025ee04;
      FUN_100029504(lVar3 + uVar9 + lVar12,UVar14.unknown);
      bVar2 = Foundation::UUID::___infix(UVar14,param_1,UVar6);
      FUN_100029548(UVar14.unknown,FUN_10025ee04);
      if (bVar2) {
        _swift_bridgeObjectRelease(lVar3);
        puVar4 = &DAT_10042a610;
        _swift_getKeyPath(&DAT_10042a610);
        puVar5 = &DAT_10042a638;
        _swift_getKeyPath(&DAT_10042a638);
        Combine::Published::_get_subscript(local_80,unaff_x20,puVar4,puVar5);
        _swift_release(puVar4);
        _swift_release(puVar5);
        if (*(ulong *)(local_80[0] + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1001ba2e0);
          (*pcVar1)();
        }
        FUN_100029504(local_80[0] + uVar9 + lVar12,uVar8,FUN_10025ee04);
        _swift_bridgeObjectRelease(local_80[0]);
        FUN_100029504(uVar8,puVar7,FUN_10025ee04);
        (*pcStack_a0)(uVar8);
        uVar11 = uVar8;
        FUN_100265c18(uVar8,puVar7);
        if ((uVar11 & 1) == 0) {
          puVar4 = &DAT_10042a610;
          _swift_getKeyPath(&DAT_10042a610);
          puVar5 = &DAT_10042a638;
          _swift_getKeyPath(&DAT_10042a638);
          pcVar1 = (code *)local_80;
          Combine::Published::_modify_subscript();
          uVar15 = *unaff_x20;
          uVar11 = uVar15;
          _swift_isUniquelyReferenced_nonNull_native();
          *unaff_x20 = uVar15;
          if ((uVar11 & 1) == 0) {
            FUN_10028729c();
            *unaff_x20 = uVar15;
          }
          if (*(ulong *)(uVar15 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1001ba2f8);
            (*pcVar1)();
          }
          FUN_1001d408c(uVar8,uVar15 + uVar9 + lVar12);
          (*pcVar1)(local_80,0);
          _swift_release(puVar4);
          _swift_release(puVar5);
          FUN_1001b9518(param_1.unknown);
          FUN_100029548(puVar7,FUN_10025ee04);
        }
        else {
          FUN_100029548(puVar7,FUN_10025ee04);
        }
        FUN_100029548(uVar8,FUN_10025ee04);
        return;
      }
      uVar13 = uVar13 + 1;
    } while (uVar11 != uVar13);
  }
  _swift_bridgeObjectRelease(lVar3);
  return;
}

