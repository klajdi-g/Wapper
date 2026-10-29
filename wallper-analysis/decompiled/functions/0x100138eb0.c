// rea decompile_all
// name: FUN_100138eb0
// address: 0x100138eb0
// body: available
// range: 0x100138eb0-0x10013905f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100138eb0(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined1 *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar4 = 0;
  FUN_100400294();
  lVar9 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar9 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_70 + lVar1;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar5 = &DAT_1004275e0;
  _swift_getKeyPath(&DAT_1004275e0);
  puVar6 = &DAT_100427608;
  _swift_getKeyPath(&DAT_100427608);
  Combine::Published::_get_subscript(&local_68);
  _swift_release(puVar5);
  _swift_release(puVar6);
  uVar10 = *(ulong *)(local_68 + 0x10);
  if (uVar10 != 0) {
    uVar11 = 0;
    puVar5 = *(undefined **)(unaff_x20 + _TtC7Wallper13DeviceManager::hwid);
    puVar6 = (undefined *)((long *)(unaff_x20 + _TtC7Wallper13DeviceManager::hwid))[1];
    do {
      if (*(ulong *)(local_68 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100139060);
        (*pcVar2)();
      }
      FUN_10013d4f8(local_68 +
                    ((ulong)*(byte *)(lVar9 + 0x50) + 0x20 &
                    ((ulong)*(byte *)(lVar9 + 0x50) ^ 0xffffffffffffffff)) +
                    *(long *)(lVar9 + 0x48) * uVar11,(long)puVar8 - extraout_x12);
      FUN_10013d53c((long)puVar8 - extraout_x12,puVar8);
      if ((*(undefined **)(&stack0xffffffffffffffa0 + lVar1) == puVar5 &&
           *(undefined **)(&stack0xffffffffffffffa8 + lVar1) == puVar6) ||
         (bVar3 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)*(undefined **)(&stack0xffffffffffffffa0 + lVar1),
                             (_StringGuts)*(undefined **)(&stack0xffffffffffffffa8 + lVar1),
                             (_StringComparisonResult)(__int8)puVar5), bVar3)) {
        _swift_bridgeObjectRelease(local_68);
        FUN_10013d53c(puVar8,param_1);
        uVar7 = 0;
        goto LAB_100139028;
      }
      uVar11 = uVar11 + 1;
      FUN_10013d580(puVar8);
    } while (uVar10 != uVar11);
  }
  _swift_bridgeObjectRelease(local_68);
  uVar7 = 1;
LAB_100139028:
  (**(code **)(lVar9 + 0x38))(param_1,uVar7,1,lVar4);
  return;
}

