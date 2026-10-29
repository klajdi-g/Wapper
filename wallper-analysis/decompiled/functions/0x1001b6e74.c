// rea decompile_all
// name: FUN_1001b6e74
// address: 0x1001b6e74
// body: available
// range: 0x1001b6e74-0x1001b701f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001b6e74(undefined8 param_1,UUID param_2)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  UUID UVar7;
  long extraout_x8;
  long extraout_x12;
  UUID UVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar3 = 0;
  FUN_10025ee04();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar10 + 0x40));
  UVar8.unknown = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar4 = &DAT_10042a610;
  _swift_getKeyPath(&DAT_10042a610);
  puVar5 = &DAT_10042a638;
  _swift_getKeyPath(&DAT_10042a638);
  Combine::Published::_get_subscript(&local_68);
  _swift_release(puVar4);
  _swift_release(puVar5);
  uVar9 = *(ulong *)(local_68 + 0x10);
  if (uVar9 != 0) {
    uVar11 = 0;
    do {
      if (*(ulong *)(local_68 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1001b7020);
        (*pcVar1)();
      }
      FUN_100029504(local_68 +
                    ((ulong)*(byte *)(lVar10 + 0x50) + 0x20 &
                    ((ulong)*(byte *)(lVar10 + 0x50) ^ 0xffffffffffffffff)) +
                    *(long *)(lVar10 + 0x48) * uVar11,(long)UVar8.unknown - extraout_x12,
                    FUN_10025ee04);
      UVar7.unknown = FUN_10025ee04;
      FUN_100007e64((long)UVar8.unknown - extraout_x12,UVar8.unknown);
      bVar2 = Foundation::UUID::___infix(UVar8,param_2,UVar7);
      if (bVar2) {
        _swift_bridgeObjectRelease(local_68);
        FUN_100007e64(UVar8.unknown,param_1,FUN_10025ee04);
        uVar6 = 0;
        goto LAB_1001b6fe8;
      }
      uVar11 = uVar11 + 1;
      FUN_100029548(UVar8.unknown,FUN_10025ee04);
    } while (uVar9 != uVar11);
  }
  _swift_bridgeObjectRelease(local_68);
  uVar6 = 1;
LAB_1001b6fe8:
  (**(code **)(lVar10 + 0x38))(param_1,uVar6,1,lVar3);
  return;
}

