// rea decompile_all
// name: FUN_1001bd3f4
// address: 0x1001bd3f4
// body: available
// range: 0x1001bd3f4-0x1001bd577 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001bd3f4(long param_1,UUID param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  UUID UVar7;
  long extraout_x8;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  UUID UVar13;
  undefined1 auStack_90 [8];
  long local_88;
  long local_80;
  undefined8 local_78;
  long local_70;
  undefined8 local_68;
  
  lVar5 = 0;
  local_78 = param_3;
  local_68 = param_4;
  FUN_100266c2c();
  lVar9 = *(long *)(lVar5 + -8);
  local_80 = lVar5;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar9 + 0x40));
  UVar13.unknown = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  FUN_10025ee04();
  local_88 = (long)*(int *)(lVar5 + 0x34);
  uVar12 = *(ulong *)(param_1 + local_88);
  uVar8 = *(ulong *)(uVar12 + 0x10);
  if (uVar8 != 0) {
    uVar10 = 0;
    local_70 = param_1;
    do {
      if (*(ulong *)(uVar12 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1001bd564);
        (*pcVar3)();
      }
      uVar11 = (ulong)*(byte *)(lVar9 + 0x50) + 0x20 &
               ((ulong)*(byte *)(lVar9 + 0x50) ^ 0xffffffffffffffff);
      lVar5 = *(long *)(lVar9 + 0x48) * uVar10;
      UVar7.unknown = FUN_100266c2c;
      FUN_100029504(uVar12 + uVar11 + lVar5,UVar13.unknown);
      bVar4 = Foundation::UUID::___infix(UVar13,param_2,UVar7);
      FUN_100029548(UVar13.unknown,FUN_100266c2c);
      uVar2 = local_68;
      if (bVar4) {
        _swift_bridgeObjectRetain(local_68);
        uVar8 = uVar12;
        _swift_isUniquelyReferenced_nonNull_native();
        if ((uVar8 & 1) == 0) {
          FUN_1002872ec();
        }
        if (uVar10 < *(ulong *)(uVar12 + 0x10)) {
          puVar1 = (undefined8 *)(uVar12 + uVar11 + (long)*(int *)(local_80 + 0x14) + lVar5);
          uVar6 = puVar1[1];
          *puVar1 = local_78;
          puVar1[1] = uVar2;
          _swift_bridgeObjectRelease(uVar6);
          *(ulong *)(local_70 + local_88) = uVar12;
          return;
        }
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1001bd578);
        (*pcVar3)();
      }
      uVar10 = uVar10 + 1;
    } while (uVar8 != uVar10);
  }
  return;
}

