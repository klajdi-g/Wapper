// rea decompile_all
// name: FUN_100345088
// address: 0x100345088
// body: available
// range: 0x100345088-0x10034551b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined *
FUN_100345088(undefined *param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  State SVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  long lVar18;
  undefined *apuStack_c0 [2];
  long local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  ulong local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  undefined1 local_70;
  undefined7 uStack_6f;
  undefined8 local_68;
  
  lVar6 = 0;
  local_a0 = param_2;
  FUN_10040211c();
  lVar15 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar15 + 0x40));
  lVar6 = (long)apuStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar13 = (undefined8 *)(lVar6 - extraout_x12);
  (*(code *)PTR____chkstk_darwin_100521118)();
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = ((long)puVar13 - extraout_x12_00) - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar16 = (undefined8 *)(lVar14 - extraout_x12_02);
  (*(code *)PTR____chkstk_darwin_100521118)();
  SVar7.unknown = &DAT_10055d318;
  local_70 = param_3;
  local_68 = param_4;
  FUN_100002f94(&DAT_10055d318,&DAT_1004328e8);
  SwiftUI::State::get_wrappedValue(SVar7);
  if ((char)local_78 == '\0') {
    local_78 = PTR___swiftEmptySetSingleton_1005241a0;
    local_a8 = param_1;
    local_90 = lVar14;
    local_88 = (long)puVar13 - extraout_x12_00;
    local_80 = lVar6;
    FUN_100344e80(param_1,local_a0);
    lVar6 = *(long *)(param_1 + 0x10);
    puVar10 = PTR___swiftEmptyArrayStorage_100524190;
    apuStack_c0[1] = param_1;
    local_b0 = lVar15;
    if (lVar6 != 0) {
      local_98 = (ulong)*(byte *)(lVar15 + 0x50) + 0x20 &
                 ((ulong)*(byte *)(lVar15 + 0x50) ^ 0xffffffffffffffff);
      param_1 = param_1 + local_98;
      lVar14 = *(long *)(lVar15 + 0x48);
      do {
        FUN_10002f154(param_1,(long)puVar16 - extraout_x12_03);
        FUN_10002f198((long)puVar16 - extraout_x12_03,puVar16);
        uVar1 = *puVar16;
        uVar3 = puVar16[1];
        _swift_bridgeObjectRetain(uVar3);
        puVar8 = &local_70;
        FUN_1001ca054(puVar8,uVar1,uVar3);
        _swift_bridgeObjectRelease(local_68);
        lVar15 = local_90;
        if (((ulong)puVar8 & 1) != 0) {
          FUN_10002f154(puVar16,local_90);
          puVar9 = puVar10;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar12 = puVar10;
          if (((ulong)puVar9 & 1) == 0) {
            puVar12 = (undefined *)0x0;
            FUN_1001c4344(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10);
          }
          uVar17 = *(ulong *)(puVar12 + 0x10);
          puVar10 = puVar12;
          if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar17) {
            puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
            FUN_1001c4344(puVar10,uVar17 + 1,1,puVar12);
          }
          *(ulong *)(puVar10 + 0x10) = uVar17 + 1;
          FUN_10002f198(lVar15,puVar10 + uVar17 * lVar14 + local_98);
        }
        FUN_10002f1dc(puVar16);
        param_1 = param_1 + lVar14;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    _swift_bridgeObjectRelease(apuStack_c0[1]);
    puVar9 = local_a8;
    if (local_a8 == (undefined *)0x0) {
LAB_1003454f4:
      FUN_100279594(0);
      FUN_10034551c();
      SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10034551c);
      (*pcVar5)();
    }
    puVar12 = &DAT_100432900;
    _swift_getKeyPath(&DAT_100432900);
    puVar11 = &DAT_100432928;
    _swift_getKeyPath(&DAT_100432928);
    _swift_retain(puVar9);
    Combine::Published::_get_subscript(&local_70);
    _swift_release(puVar12);
    _swift_release(puVar11);
    _swift_release(puVar9);
    lVar14 = CONCAT71(uStack_6f,local_70);
    lVar6 = *(long *)(lVar14 + 0x10);
    if (lVar6 != 0) {
      uVar17 = (ulong)*(byte *)(local_b0 + 0x50) + 0x20 &
               ((ulong)*(byte *)(local_b0 + 0x50) ^ 0xffffffffffffffff);
      lVar15 = lVar14 + uVar17;
      lVar18 = *(long *)(local_b0 + 0x48);
      do {
        lVar4 = local_88;
        FUN_10002f154(lVar15,local_88);
        FUN_10002f198(lVar4,puVar13);
        uVar1 = *puVar13;
        uVar3 = puVar13[1];
        _swift_bridgeObjectRetain(uVar3);
        puVar8 = &local_70;
        FUN_1001ca054(puVar8,uVar1,uVar3);
        _swift_bridgeObjectRelease(local_68);
        if (((ulong)puVar8 & 1) != 0) {
          FUN_10002f154(puVar13,local_80);
          puVar9 = puVar10;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar12 = puVar10;
          if (((ulong)puVar9 & 1) == 0) {
            puVar12 = (undefined *)0x0;
            FUN_1001c4344(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10);
          }
          uVar2 = *(ulong *)(puVar12 + 0x10);
          puVar10 = puVar12;
          if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar2) {
            puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
            FUN_1001c4344(puVar10,uVar2 + 1,1,puVar12);
          }
          *(ulong *)(puVar10 + 0x10) = uVar2 + 1;
          FUN_10002f198(local_80,puVar10 + uVar2 * lVar18 + uVar17);
        }
        FUN_10002f1dc(puVar13);
        lVar15 = lVar15 + lVar18;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    _swift_bridgeObjectRelease(lVar14);
    _swift_bridgeObjectRelease(local_78);
  }
  else if ((char)local_78 == '\x01') {
    FUN_100344e80(param_1,local_a0);
    puVar10 = param_1;
  }
  else {
    if (param_1 == (undefined *)0x0) goto LAB_1003454f4;
    puVar10 = &DAT_100432900;
    _swift_getKeyPath(&DAT_100432900);
    puVar9 = &DAT_100432928;
    _swift_getKeyPath(&DAT_100432928);
    _swift_retain(param_1);
    Combine::Published::_get_subscript(&local_70);
    _swift_release(puVar10);
    _swift_release(puVar9);
    _swift_release(param_1);
    puVar10 = (undefined *)CONCAT71(uStack_6f,local_70);
  }
  return puVar10;
}

