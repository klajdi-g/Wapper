// rea decompile_all
// name: FUN_10010b364
// address: 0x10010b364
// body: available
// range: 0x10010b364-0x10010b7fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10010b364(undefined8 param_1)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  ulong uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar12;
  long lVar13;
  code *pcVar14;
  ulong *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 auStack_b0 [8];
  long local_a8;
  long local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  
  puVar8 = &DAT_100551e50;
  FUN_100002f94(&DAT_100551e50,&DAT_100429e60);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar8 + -8) + 0x40));
  puVar10 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_98 = puVar10;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar4 = 0;
  local_90 = puVar10 + -extraout_x12;
  FUN_100126a5c();
  local_70 = *(long *)(lVar4 + -8);
  local_88 = lVar4;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_70 + 0x40));
  lVar4 = (long)(puVar10 + -extraout_x12) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_a8 = lVar4;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar4 = lVar4 - extraout_x12_00;
  local_a0 = lVar4;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar4 = lVar4 - extraout_x12_01;
  local_80 = lVar4;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_78 = lVar4 - extraout_x12_02;
  puVar8 = &DAT_100425808;
  _swift_getKeyPath(&DAT_100425808);
  puVar5 = &DAT_100425830;
  _swift_getKeyPath(&DAT_100425830);
  Combine::Published::_get_subscript(&local_68,param_1,puVar8,puVar5);
  _swift_release(puVar8);
  _swift_release(puVar5);
  lVar4 = local_68;
  uVar16 = *(ulong *)(local_68 + 0x10);
  puVar8 = PTR___swiftEmptyArrayStorage_100524190;
  if (uVar16 != 0) {
    uVar17 = 0;
    puVar15 = (ulong *)(local_68 + 0x28);
    do {
      if (*(ulong *)(lVar4 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x10010b7fc);
        (*pcVar14)();
      }
      uVar6 = puVar15[-1];
      uVar1 = *puVar15;
      puVar5 = &DAT_100425850;
      _swift_getKeyPath(&DAT_100425850);
      puVar7 = &DAT_100425878;
      _swift_getKeyPath(&DAT_100425878);
      _swift_bridgeObjectRetain(uVar1);
      Combine::Published::_get_subscript(&local_68,param_1,puVar5,puVar7);
      _swift_release(puVar5);
      _swift_release(puVar7);
      lVar3 = local_68;
      if ((*(long *)(local_68 + 0x10) == 0) ||
         (uVar11 = uVar1, FUN_10000464c(uVar6), lVar12 = local_80, (uVar11 & 1) == 0)) {
        _swift_bridgeObjectRelease(lVar3);
        _swift_bridgeObjectRelease(uVar1);
      }
      else {
        lVar13 = *(long *)(local_70 + 0x48);
        FUN_10010b814(*(long *)(lVar3 + 0x38) + lVar13 * uVar6,local_80);
        _swift_bridgeObjectRelease(lVar3);
        _swift_bridgeObjectRelease(uVar1);
        FUN_10010b858(lVar12,local_78);
        puVar5 = puVar8;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar7 = puVar8;
        if (((ulong)puVar5 & 1) == 0) {
          puVar7 = (undefined *)0x0;
          FUN_1001c4750(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
        }
        uVar6 = *(ulong *)(puVar7 + 0x10);
        puVar8 = puVar7;
        if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar6) {
          puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
          FUN_1001c4750(puVar8,uVar6 + 1,1,puVar7);
        }
        *(ulong *)(puVar8 + 0x10) = uVar6 + 1;
        FUN_10010b858(local_78,puVar8 + uVar6 * lVar13 +
                                        ((ulong)*(byte *)(local_70 + 0x50) + 0x20 &
                                        ((ulong)*(byte *)(local_70 + 0x50) ^ 0xffffffffffffffff)));
      }
      uVar17 = uVar17 + 1;
      puVar15 = puVar15 + 2;
    } while (uVar16 != uVar17);
  }
  _swift_bridgeObjectRelease(lVar4);
  if (*(long *)(puVar8 + 0x10) == 0) {
    _swift_bridgeObjectRelease(puVar8);
    puVar8 = &DAT_100425898;
    _swift_getKeyPath(&DAT_100425898);
    puVar5 = &DAT_1004258c0;
    _swift_getKeyPath(&DAT_1004258c0);
    puVar10 = local_90;
    Combine::Published::_get_subscript(local_90,param_1,puVar8,puVar5);
    _swift_release(puVar8);
    _swift_release(puVar5);
    lVar3 = local_70;
    lVar4 = local_88;
    pcVar14 = *(code **)(local_70 + 0x30);
    puVar9 = puVar10;
    (*pcVar14)(puVar10,1,local_88);
    lVar12 = local_a0;
    if ((int)puVar9 == 1) {
      FUN_10002a29c(puVar10,&DAT_100551e50,&DAT_100429e60);
      puVar8 = &DAT_1004258e0;
      _swift_getKeyPath(&DAT_1004258e0);
      puVar5 = &DAT_100425908;
      _swift_getKeyPath(&DAT_100425908);
      puVar10 = local_98;
      Combine::Published::_get_subscript(local_98,param_1,puVar8,puVar5);
      _swift_release(puVar8);
      _swift_release(puVar5);
      puVar9 = puVar10;
      (*pcVar14)(puVar10,1,lVar4);
      lVar12 = local_a8;
      if ((int)puVar9 == 1) {
        FUN_10002a29c(puVar10,&DAT_100551e50,&DAT_100429e60);
        return PTR___swiftEmptyArrayStorage_100524190;
      }
    }
    FUN_10010b858(puVar10,lVar12);
    puVar8 = &DAT_100552de8;
    FUN_100002f94(&DAT_100552de8,&DAT_10042ac30);
    bVar2 = *(byte *)(lVar3 + 0x50);
    _swift_allocObject();
    *(undefined8 *)(puVar8 + 0x18) = 2;
    *(undefined8 *)(puVar8 + 0x10) = 1;
    FUN_10010b858(lVar12,puVar8 + ((ulong)bVar2 + 0x20 & ((ulong)bVar2 ^ 0xffffffffffffffff)));
  }
  return puVar8;
}

