// rea decompile_all
// name: FUN_100042b4c
// address: 0x100042b4c
// body: available
// range: 0x100042b4c-0x100042fc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100042b4c(double param_1,undefined8 param_2,ContiguousArray param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  RGBColorSpace RVar4;
  undefined7 extraout_var;
  Color CVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  ContiguousArray CVar11;
  ulong uVar12;
  long extraout_x8;
  double dVar13;
  double *pdVar14;
  long unaff_x20;
  long lVar15;
  double *pdVar16;
  ContiguousArray oldCount;
  code *pcVar17;
  long lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  long local_180;
  uint local_174;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  undefined *local_b0;
  long lVar5;
  
  RVar4 = SwiftUI::Color::RGBColorSpace::typeMetadataAccessor();
  lVar5 = CONCAT71(extraout_var,RVar4.value);
  local_180 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_180 + 0x40));
  lVar15 = (long)&local_180 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  dVar24 = *(double *)(unaff_x20 + 0x48);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  local_138 = *(double *)(unaff_x20 + 0x28);
  local_b0 = PTR___swiftEmptyArrayStorage_100524190;
  Swift::ContiguousArray::_reserveCapacity(0,param_3);
  dVar13 = *(double *)(lVar1 + 0x10);
  local_160 = dVar13;
  if (dVar13 != 0.0) {
    uVar2 = *(uint *)
             PTR___enum_case_for_SwiftUI_Color_RGBColorSpace_sRGB_SwiftUI_Color_RGBColorSpace_Type___>_SwiftUI_Color_RGBColorSpace_1005231e0
    ;
    pcVar17 = *(code **)(local_180 + 0x68);
    pdVar16 = (double *)(lVar1 + 0x30);
    do {
      dVar19 = pdVar16[-2];
      dVar20 = pdVar16[-1];
      dVar22 = *pdVar16;
      CVar11.unknown = (undefined *)(ulong)uVar2;
      (*pcVar17)(lVar15,(undefined *)(ulong)uVar2,lVar5);
      CVar6 = SwiftUI::Color::init((RGBColorSpace)(__int8)lVar15,dVar19,dVar20,dVar22,1.0);
      Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique
                ((ContiguousArray)CVar6.unknown);
                    /* WARNING: Load size is inaccurate */
      oldCount.unknown = local_b0[0x10];
      Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer
                ((__int64)oldCount.unknown,CVar11);
      Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity(oldCount.unknown,CVar6.unknown)
      ;
      Swift::ContiguousArray::__endMutation(oldCount);
      dVar13 = (double)((long)dVar13 + -1);
      pdVar16 = pdVar16 + 3;
    } while (dVar13 != 0.0);
  }
  puVar10 = local_b0;
  puVar7 = &DAT_10054c038;
  FUN_100002f94(&DAT_10054c038,&DAT_10041d7a0);
  uVar12 = 0;
  _swift_initStackObject();
  *(undefined8 *)(puVar7 + 0x18) = 8;
  *(undefined8 *)(puVar7 + 0x10) = 4;
  *(undefined8 *)(puVar7 + 0x28) = 6;
  *(undefined8 *)(puVar7 + 0x20) = 5;
  *(undefined8 *)(puVar7 + 0x38) = 6;
  *(undefined8 *)(puVar7 + 0x30) = 9;
  *(undefined8 *)(puVar7 + 0x48) = 10;
  *(undefined8 *)(puVar7 + 0x40) = 5;
  *(undefined8 *)(puVar7 + 0x58) = 10;
  *(undefined8 *)(puVar7 + 0x50) = 9;
  *(undefined8 *)(puVar7 + 0x68) = 10;
  *(undefined8 *)(puVar7 + 0x60) = 5;
  *(undefined8 *)(puVar7 + 0x78) = 6;
  *(undefined8 *)(puVar7 + 0x70) = 9;
  puVar8 = puVar7;
  FUN_1000065d0();
  _swift_setDeallocating(puVar7);
  lVar3 = local_180;
  lVar18 = *(long *)((long)local_138 + 0x10);
  if (lVar18 != 0) {
    dVar24 = 6.283185307179586 / dVar24;
    lVar1 = lVar1 + 0x20;
    local_168 = param_1 * dVar24;
    local_170 = (param_1 + param_1) * dVar24;
    local_174 = *(uint *)
                 PTR___enum_case_for_SwiftUI_Color_RGBColorSpace_sRGB_SwiftUI_Color_RGBColorSpace_Type___>_SwiftUI_Color_RGBColorSpace_1005231e0
    ;
    pdVar16 = (double *)((long)local_138 + 0x28);
    do {
      if (*(long *)(puVar8 + 0x10) != 0) {
        dVar24 = pdVar16[-1];
        dVar19 = *pdVar16;
        dVar13 = dVar24;
        FUN_1000046b0();
        if ((uVar12 & 1) != 0) {
          if ((ulong)local_160 <= (ulong)dVar24) {
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x100042fbc);
            (*pcVar17)();
          }
          pdVar14 = (double *)(*(long *)(puVar8 + 0x38) + (long)dVar13 * 0x10);
          dVar13 = *pdVar14;
          if ((ulong)local_160 <= (ulong)dVar13) {
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x100042fc0);
            (*pcVar17)();
          }
          dVar20 = pdVar14[1];
          if ((ulong)local_160 <= (ulong)dVar20) {
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x100042fc4);
            (*pcVar17)();
          }
          pdVar14 = (double *)(lVar1 + (long)dVar24 * 0x18);
          dVar22 = *pdVar14;
          dVar21 = pdVar14[1];
          dVar23 = pdVar14[2];
          pdVar14 = (double *)(lVar1 + (long)dVar13 * 0x18);
          local_148 = pdVar14[1];
          local_138 = pdVar14[2];
          dVar26 = *pdVar14;
          pdVar14 = (double *)(lVar1 + (long)dVar20 * 0x18);
          local_158 = *pdVar14;
          local_150 = pdVar14[1];
          local_140 = pdVar14[2];
          dVar13 = local_168 + dVar19;
          _sin();
          dVar25 = dVar13 * 0.5 + 0.5;
          dVar13 = local_170 + dVar19 + 1.0;
          _cos();
          dVar13 = dVar13 * 0.5 + 0.5;
          dVar20 = dVar22 + dVar25 * (dVar26 - dVar22) * 0.22 + dVar13 * (local_158 - dVar22) * 0.22
          ;
          dVar22 = dVar21 + dVar25 * (local_148 - dVar21) * 0.22 +
                   dVar13 * (local_150 - dVar21) * 0.22;
          dVar19 = dVar23 + dVar25 * (local_138 - dVar23) * 0.22 +
                   dVar13 * (local_140 - dVar23) * 0.22;
          dVar13 = 0.0;
          if (0.0 < dVar20) {
            dVar13 = dVar20;
          }
          dVar20 = 1.0;
          if (dVar13 <= 1.0) {
            dVar20 = dVar13;
          }
          dVar13 = 0.0;
          if (0.0 < dVar22) {
            dVar13 = dVar22;
          }
          dVar22 = 1.0;
          if (dVar13 <= 1.0) {
            dVar22 = dVar13;
          }
          dVar13 = 0.0;
          if (0.0 < dVar19) {
            dVar13 = dVar19;
          }
          dVar19 = 1.0;
          if (dVar13 <= 1.0) {
            dVar19 = dVar13;
          }
          uVar12 = (ulong)local_174;
          (**(code **)(lVar3 + 0x68))(lVar15,uVar12,lVar5);
          CVar6 = SwiftUI::Color::init((RGBColorSpace)(__int8)lVar15,dVar20,dVar22,dVar19,1.0);
          puVar7 = puVar10;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((ulong)puVar7 & 1) == 0) {
            FUN_100287274();
          }
          if (*(long *)(puVar10 + 0x10) <= (long)dVar24) {
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x100042fc8);
            (*pcVar17)();
          }
          uVar9 = *(undefined8 *)(puVar10 + (long)dVar24 * 8 + 0x20);
          *(undefined **)(puVar10 + (long)dVar24 * 8 + 0x20) = CVar6.unknown;
          _swift_release(uVar9);
        }
      }
      pdVar16 = pdVar16 + 2;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
  }
  _swift_bridgeObjectRelease(puVar8);
  return puVar10;
}

