// rea decompile_all
// name: FUN_1002ecfc0
// address: 0x1002ecfc0
// body: available
// range: 0x1002ecfc0-0x1002ed3e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002ecfc0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  State SVar6;
  ulong uVar7;
  long extraout_x8;
  long lVar8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  ulong uVar9;
  long *unaff_x20;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined *apuStack_c0 [3];
  long local_a8;
  long local_a0;
  long local_98;
  State local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 uStack_70;
  ulong local_68;
  
  lVar5 = 0;
  FUN_1002f58e8();
  lVar11 = *(long *)(lVar5 + -8);
  local_a0 = lVar5;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar11 + 0x40));
  lVar8 = (long)apuStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_a8 = lVar8;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar8 = lVar8 - extraout_x12;
  local_98 = lVar8;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar15 = (undefined8 *)(lVar8 - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_100521118)();
  FUN_1002ea5f0();
  uVar9 = *(ulong *)(lVar5 + 0x10);
  if (uVar9 != 0) {
    uVar12 = 0;
    do {
      if (*(ulong *)(lVar5 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1002ed380);
        (*pcVar4)();
      }
      FUN_100029504(lVar5 + ((ulong)*(byte *)(lVar11 + 0x50) + 0x20 &
                            ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff)) +
                    *(long *)(lVar11 + 0x48) * uVar12,(long)puVar15 - extraout_x12_01,FUN_1002f58e8)
      ;
      FUN_100007e64((long)puVar15 - extraout_x12_01,puVar15,FUN_1002f58e8);
      lVar8 = *unaff_x20;
      if (lVar8 == 0) {
        FUN_100279594(0);
        FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
        SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1002ed3e4);
        (*pcVar4)();
      }
      uVar12 = uVar12 + 1;
      uVar1 = *puVar15;
      uVar3 = puVar15[1];
      _swift_retain(lVar8);
      FUN_100279c88(uVar1,uVar3);
      _swift_release(lVar8);
      FUN_100029548(puVar15,FUN_1002f58e8);
    } while (uVar9 != uVar12);
  }
  _swift_bridgeObjectRelease(lVar5);
  lVar5 = 0;
  FUN_1002f58d4();
  puVar15 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar5 + 0x34));
  puVar2 = (undefined *)*puVar15;
  puVar14 = (undefined *)puVar15[1];
  local_78 = puVar2;
  uStack_70 = puVar14;
  _swift_retain(puVar14);
  _swift_bridgeObjectRetain(puVar2);
  SVar6.unknown = &DAT_10055b220;
  FUN_100002f94(&DAT_10055b220,&DAT_10042fa78);
  SwiftUI::State::get_wrappedValue(SVar6);
  uVar12 = *(ulong *)(local_68 + 0x10);
  uVar9 = local_68;
  if (uVar12 == 0) {
    uVar17 = 0;
  }
  else {
    uVar10 = (ulong)*(byte *)(lVar11 + 0x50) + 0x20 &
             ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff);
    lVar8 = *(long *)(lVar11 + 0x48);
    lVar5 = uVar10 + (long)*(int *)(local_a0 + 0x28);
    uVar7 = 0;
    uVar13 = uVar10;
    do {
      uVar13 = lVar8 + uVar13;
      uVar16 = uVar7 + 1;
      apuStack_c0[1] = SVar6.unknown;
      apuStack_c0[2] = puVar14;
      if (*(char *)(local_68 + lVar5) != '\x01') {
        lVar5 = local_a0;
        if (uVar12 - 1 != uVar7) {
          do {
            if ((long)uVar12 <= (long)uVar16) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1002ed384);
              (*pcVar4)();
            }
            if ((*(byte *)(uVar9 + uVar13 + (long)*(int *)(lVar5 + 0x28)) & 1) != 0) {
              if (uVar16 != uVar7) {
                if (uVar12 <= uVar7) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x1002ed388);
                  (*pcVar4)();
                }
                FUN_100029504(uVar9 + uVar10 + uVar7 * lVar8,local_98,FUN_1002f58e8);
                lVar5 = local_a8;
                FUN_100029504(uVar9 + uVar13,local_a8,FUN_1002f58e8);
                uVar12 = uVar9;
                _swift_isUniquelyReferenced_nonNull_native();
                if ((uVar12 & 1) == 0) {
                  FUN_100287350();
                }
                if (*(ulong *)(uVar9 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x1002ed38c);
                  (*pcVar4)();
                }
                FUN_1001d4cb0(lVar5,uVar9 + uVar10 + uVar7 * lVar8,FUN_1002f58e8);
                if (*(long *)(uVar9 + 0x10) <= (long)uVar16) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x1002ed390);
                  (*pcVar4)();
                }
                FUN_1001d4cb0(local_98,uVar9 + uVar13,FUN_1002f58e8);
                uVar12 = *(ulong *)(uVar9 + 0x10);
                lVar5 = local_a0;
              }
              uVar7 = uVar7 + 1;
            }
            uVar16 = uVar16 + 1;
            uVar13 = uVar13 + lVar8;
          } while (uVar16 != uVar12);
        }
        if ((long)uVar12 < (long)uVar7) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1002ed394);
          (*pcVar4)();
        }
        puVar14 = apuStack_c0[2];
        SVar6.unknown = apuStack_c0[1];
        uVar17 = uVar7;
        if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1002ed398);
          (*pcVar4)();
        }
        break;
      }
      lVar5 = lVar5 + lVar8;
      uVar17 = uVar12;
      uVar7 = uVar16;
    } while (uVar12 != uVar16);
  }
  if (!SCARRY8(uVar12,uVar17 - uVar12)) {
    uVar7 = uVar9;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((int)uVar7 == 0) ||
       ((long)(*(ulong *)(uVar9 + 0x18) >> 1) < (long)(uVar12 + (uVar17 - uVar12)))) {
      FUN_1001c56ac();
    }
    FUN_10028a024(uVar17,uVar12,0);
    local_88.unknown = puVar2;
    uStack_80 = puVar14;
    SwiftUI::State::set_wrappedValue(&local_88,&local_68,SVar6.unknown);
    _swift_release(puVar14);
    _swift_bridgeObjectRelease(puVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1002ed39c);
  (*pcVar4)();
}

