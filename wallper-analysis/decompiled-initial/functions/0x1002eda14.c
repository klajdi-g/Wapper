// rea decompile_all
// name: FUN_1002eda14
// address: 0x1002eda14
// body: available
// range: 0x1002eda14-0x1002edda3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002eda14(long *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  _StringGuts _Var3;
  undefined *puVar4;
  _StringGuts _Var5;
  undefined8 uVar6;
  code *pcVar7;
  bool bVar8;
  long lVar9;
  State SVar10;
  ulong uVar11;
  long extraout_x8;
  long extraout_x12;
  ulong uVar12;
  long *unaff_x20;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined *puVar18;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined *local_b0;
  undefined *puStack_a8;
  ulong local_a0;
  long local_98;
  undefined1 *local_90;
  State local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 uStack_70;
  ulong local_68;
  
  lVar9 = 0;
  FUN_1002f58e8();
  lVar15 = *(long *)(lVar9 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar15 + 0x40));
  local_90 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_98 = (long)(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lVar9 = *unaff_x20;
  if (lVar9 == 0) {
    FUN_100279594(0);
    FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
    SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x1002edda4);
    (*pcVar7)();
  }
  puVar2 = (undefined *)*param_1;
  puVar4 = (undefined *)param_1[1];
  _swift_retain(lVar9);
  FUN_100279c88(puVar2,puVar4);
  _swift_release(lVar9);
  lVar9 = 0;
  FUN_1002f58d4();
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar9 + 0x34));
  puVar18 = (undefined *)*puVar1;
  uVar14 = puVar1[1];
  local_78 = puVar18;
  uStack_70 = uVar14;
  _swift_retain(uVar14);
  _swift_bridgeObjectRetain(puVar18);
  SVar10.unknown = &DAT_10055b220;
  FUN_100002f94(&DAT_10055b220,&DAT_10042fa78);
  SwiftUI::State::get_wrappedValue(SVar10);
  uVar12 = *(ulong *)(local_68 + 0x10);
  uVar11 = local_68;
  if (uVar12 == 0) {
    uVar16 = 0;
    uVar17 = 0;
  }
  else {
    uVar17 = 0;
    uVar13 = (ulong)*(byte *)(lVar15 + 0x50) + 0x20 &
             ((ulong)*(byte *)(lVar15 + 0x50) ^ 0xffffffffffffffff);
    lVar9 = *(long *)(lVar15 + 0x48);
    local_b0 = SVar10.unknown;
    puStack_a8 = puVar18;
    local_a0 = uVar13;
    do {
      _Var3.unknown = *(undefined **)(local_68 + uVar13);
      _Var5.unknown = (undefined *)((undefined8 *)(local_68 + uVar13))[1];
      if ((_Var3.unknown == puVar2 && _Var5.unknown == puVar4) ||
         (bVar8 = Swift::_stringCompareWithSmolCheck
                            (_Var3,_Var5,(_StringComparisonResult)(__int8)puVar2), bVar8)) {
        uVar16 = uVar17 + 1;
        uVar12 = *(ulong *)(local_68 + 0x10);
        uVar6 = uVar14;
        if (uVar12 - 1 != uVar17) {
          do {
            local_b8 = uVar6;
            uVar13 = lVar9 + uVar13;
            if (uVar12 <= uVar16) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x1002edd4c);
              (*pcVar7)();
            }
            puVar1 = (undefined8 *)(uVar11 + uVar13);
            if (((undefined *)*puVar1 != puVar2 || (undefined *)puVar1[1] != puVar4) &&
               (bVar8 = Swift::_stringCompareWithSmolCheck
                                  ((undefined *)*puVar1,(undefined *)puVar1[1],
                                   (_StringComparisonResult)(__int8)puVar2), !bVar8)) {
              if (uVar16 != uVar17) {
                if (uVar12 <= uVar17) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x1002edd58);
                  (*pcVar7)();
                }
                FUN_100029504(uVar11 + local_a0 + uVar17 * lVar9,local_98,FUN_1002f58e8);
                FUN_100029504(puVar1,local_90,FUN_1002f58e8);
                uVar12 = uVar11;
                _swift_isUniquelyReferenced_nonNull_native();
                if ((uVar12 & 1) == 0) {
                  FUN_100287350();
                }
                uVar14 = local_b8;
                if (*(ulong *)(uVar11 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x1002edd5c);
                  (*pcVar7)();
                }
                FUN_1001d4cb0(local_90,uVar11 + local_a0 + uVar17 * lVar9,FUN_1002f58e8);
                if (*(ulong *)(uVar11 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x1002edd60);
                  (*pcVar7)();
                }
                FUN_1001d4cb0(local_98,uVar11 + uVar13,FUN_1002f58e8);
              }
              uVar17 = uVar17 + 1;
            }
            uVar16 = uVar16 + 1;
            uVar12 = *(ulong *)(uVar11 + 0x10);
            uVar6 = local_b8;
          } while (uVar16 != uVar12);
        }
        goto LAB_1002edb8c;
      }
      uVar17 = uVar17 + 1;
      uVar13 = uVar13 + lVar9;
    } while (uVar12 != uVar17);
    uVar16 = *(ulong *)(local_68 + 0x10);
    uVar17 = uVar12;
LAB_1002edb8c:
    if ((long)uVar16 < (long)uVar17) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1002edd50);
      (*pcVar7)();
    }
    puVar18 = puStack_a8;
    SVar10.unknown = local_b0;
    if ((long)uVar17 < 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1002edba0);
      (*pcVar7)();
    }
  }
  if (!SCARRY8(uVar16,uVar17 - uVar16)) {
    uVar12 = uVar11;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((int)uVar12 == 0) ||
       ((long)(*(ulong *)(uVar11 + 0x18) >> 1) < (long)(uVar16 + (uVar17 - uVar16)))) {
      FUN_1001c56ac();
    }
    FUN_10028a024(uVar17,uVar16,0);
    local_88.unknown = puVar18;
    uStack_80 = uVar14;
    SwiftUI::State::set_wrappedValue(&local_88,&local_68,SVar10.unknown);
    _swift_release(uVar14);
    _swift_bridgeObjectRelease(puVar18);
    return;
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x1002edd54);
  (*pcVar7)();
}

