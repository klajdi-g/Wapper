// rea decompile_all
// name: FUN_10002c2e0
// address: 0x10002c2e0
// body: available
// range: 0x10002c2e0-0x10002c4eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_10002c2e0(void)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 auVar14 [16];
  ulong auStack_60 [2];
  
  lVar3 = 0;
  FUN_10040211c();
  lVar13 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar13 + 0x40));
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar9 = (undefined8 *)((long)auStack_60 + lVar3);
  puVar4 = &DAT_10041ce20;
  _swift_getKeyPath(&DAT_10041ce20);
  puVar5 = &DAT_10041ce48;
  _swift_getKeyPath(&DAT_10041ce48);
  Combine::Published::_get_subscript(auStack_60 + 1);
  _swift_release(puVar4);
  _swift_release(puVar5);
  lVar11 = *(long *)(auStack_60[1] + 0x10);
  _swift_bridgeObjectRelease();
  if (lVar11 == 0) {
    uVar10 = 0;
    uVar12 = 0;
  }
  else {
    puVar4 = &DAT_10041cd90;
    _swift_getKeyPath(&DAT_10041cd90);
    puVar5 = &DAT_10041cdb8;
    _swift_getKeyPath(&DAT_10041cdb8);
    Combine::Published::_get_subscript(auStack_60 + 1);
    _swift_release(puVar4);
    _swift_release(puVar5);
    uVar1 = auStack_60[1];
    puVar4 = &DAT_10041ce20;
    puVar6 = puVar4;
    _swift_getKeyPath(&DAT_10041ce20);
    puVar5 = &DAT_10041ce48;
    puVar7 = puVar5;
    _swift_getKeyPath(&DAT_10041ce48);
    Combine::Published::_get_subscript(auStack_60 + 1);
    _swift_release(puVar6);
    _swift_release(puVar7);
    lVar11 = *(long *)(auStack_60[1] + 0x10);
    _swift_bridgeObjectRelease();
    uVar8 = lVar11 - 1;
    if ((long)uVar1 <= (long)uVar8) {
      uVar8 = uVar1;
    }
    uVar8 = uVar8 & ((long)uVar8 >> 0x3f ^ 0xffffffffffffffffU);
    _swift_getKeyPath(&DAT_10041ce20);
    _swift_getKeyPath(&DAT_10041ce48);
    Combine::Published::_get_subscript(auStack_60 + 1);
    _swift_release(puVar4);
    _swift_release(puVar5);
    if (*(ulong *)(auStack_60[1] + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10002c4ec);
      (*pcVar2)();
    }
    FUN_10002f154(auStack_60[1] +
                  ((ulong)*(byte *)(lVar13 + 0x50) + 0x20 &
                  ((ulong)*(byte *)(lVar13 + 0x50) ^ 0xffffffffffffffff)) +
                  *(long *)(lVar13 + 0x48) * uVar8,puVar9);
    _swift_bridgeObjectRelease(auStack_60[1]);
    uVar10 = *puVar9;
    uVar12 = *(undefined8 *)((long)auStack_60 + lVar3 + 8U);
    _swift_bridgeObjectRetain(uVar12);
    FUN_10002f1dc(puVar9);
  }
  auVar14._8_8_ = uVar12;
  auVar14._0_8_ = uVar10;
  return auVar14;
}

