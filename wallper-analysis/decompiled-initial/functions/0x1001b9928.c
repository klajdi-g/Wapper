// rea decompile_all
// name: FUN_1001b9928
// address: 0x1001b9928
// body: available
// range: 0x1001b9928-0x1001b9c53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001b9928(UUID param_1,ulong *param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  ulong *puVar8;
  UUID UVar9;
  long extraout_x8;
  ulong uVar10;
  long extraout_x12;
  long extraout_x12_00;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  UUID UVar15;
  ulong uVar16;
  undefined1 auStack_b0 [12];
  undefined4 local_a4;
  code *local_a0;
  ulong local_98;
  ulong *local_90;
  undefined1 *local_88;
  long local_80 [4];
  
  local_a0 = (code *)CONCAT44(local_a0._4_4_,param_4);
  lVar3 = 0;
  local_a4 = param_3;
  FUN_10025ee04();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar12 + 0x40));
  local_88 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  uVar10 = (long)(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  local_98 = uVar10;
  (*(code *)PTR____chkstk_darwin_100521118)();
  UVar15.unknown = (undefined *)(uVar10 - extraout_x12_00);
  puVar4 = &DAT_10042a610;
  _swift_getKeyPath(&DAT_10042a610);
  puVar5 = &DAT_10042a638;
  _swift_getKeyPath(&DAT_10042a638);
  local_90 = param_2;
  Combine::Published::_get_subscript(local_80,param_2,puVar4,puVar5);
  _swift_release(puVar4);
  _swift_release(puVar5);
  lVar3 = local_80[0];
  uVar10 = *(ulong *)(local_80[0] + 0x10);
  if (uVar10 != 0) {
    uVar13 = 0;
    do {
      if (*(ulong *)(lVar3 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1001b9c38);
        (*pcVar1)();
      }
      uVar14 = (ulong)*(byte *)(lVar12 + 0x50) + 0x20 &
               ((ulong)*(byte *)(lVar12 + 0x50) ^ 0xffffffffffffffff);
      lVar11 = *(long *)(lVar12 + 0x48) * uVar13;
      UVar9.unknown = FUN_10025ee04;
      FUN_100029504(lVar3 + uVar14 + lVar11,UVar15.unknown);
      bVar2 = Foundation::UUID::___infix(UVar15,param_1,UVar9);
      FUN_100029548(UVar15.unknown,FUN_10025ee04);
      if (bVar2) {
        _swift_bridgeObjectRelease(lVar3);
        puVar4 = &DAT_10042a610;
        _swift_getKeyPath(&DAT_10042a610);
        puVar5 = &DAT_10042a638;
        _swift_getKeyPath(&DAT_10042a638);
        puVar8 = local_90;
        Combine::Published::_get_subscript(local_80,local_90,puVar4,puVar5);
        _swift_release(puVar4);
        _swift_release(puVar5);
        uVar10 = local_98;
        if (*(ulong *)(local_80[0] + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1001b9c3c);
          (*pcVar1)();
        }
        FUN_100029504(local_80[0] + uVar14 + lVar11,local_98,FUN_10025ee04);
        _swift_bridgeObjectRelease(local_80[0]);
        puVar7 = local_88;
        FUN_100029504(uVar10,local_88,FUN_10025ee04);
        FUN_1001bd268(uVar10,local_a4,(ulong)local_a0 & 0xffffffff);
        uVar6 = uVar10;
        FUN_100265c18(uVar10,puVar7);
        if ((uVar6 & 1) == 0) {
          puVar4 = &DAT_10042a610;
          _swift_getKeyPath(&DAT_10042a610);
          puVar5 = &DAT_10042a638;
          _swift_getKeyPath(&DAT_10042a638);
          pcVar1 = (code *)local_80;
          Combine::Published::_modify_subscript();
          uVar16 = *puVar8;
          uVar6 = uVar16;
          local_a0 = pcVar1;
          _swift_isUniquelyReferenced_nonNull_native();
          *puVar8 = uVar16;
          if ((uVar6 & 1) == 0) {
            FUN_10028729c();
            *puVar8 = uVar16;
          }
          if (*(ulong *)(uVar16 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1001b9c54);
            (*pcVar1)();
          }
          FUN_1001d408c(uVar10,uVar16 + uVar14 + lVar11);
          (*local_a0)(local_80,0);
          _swift_release(puVar4);
          _swift_release(puVar5);
          FUN_1001b9518(param_1.unknown);
          puVar7 = local_88;
        }
        FUN_100029548(puVar7,FUN_10025ee04);
        FUN_100029548(uVar10,FUN_10025ee04);
        return;
      }
      uVar13 = uVar13 + 1;
    } while (uVar10 != uVar13);
  }
  _swift_bridgeObjectRelease(lVar3);
  return;
}

