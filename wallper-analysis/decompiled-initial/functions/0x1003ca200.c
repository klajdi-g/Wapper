// rea decompile_all
// name: FUN_1003ca200
// address: 0x1003ca200
// body: available
// range: 0x1003ca200-0x1003ca96f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003ca96c to 0x1004149e4 _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003ca200(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  DismissAction DVar10;
  URL UVar11;
  Date DVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  uint *puVar20;
  ulong uVar21;
  uint uVar22;
  undefined8 *puVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  code *pcVar29;
  ulong uVar30;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  puVar23 = (undefined8 *)(param_1 + 0x17U & 0xfffffffffffffff8);
  _swift_bridgeObjectRelease(*puVar23);
  if (0xfffffffe < (ulong)puVar23[2]) {
    _swift_release(puVar23[3]);
  }
  if (0xfffffffe < (ulong)puVar23[5]) {
    _swift_release(puVar23[6]);
  }
  if (0xfffffffe < (ulong)puVar23[7]) {
    _swift_release(puVar23[8]);
  }
  if (0xfffffffe < (ulong)puVar23[9]) {
    _swift_release(puVar23[10]);
  }
  lVar24 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  uVar19 = (long)(puVar23 + 9) + (ulong)*(byte *)(lVar24 + 0x50) + 0x10 &
           ((ulong)*(byte *)(lVar24 + 0x50) ^ 0xffffffffffffffff);
  (**(code **)(lVar24 + 8))(uVar19);
  puVar23 = (undefined8 *)(*(long *)(lVar24 + 0x40) + uVar19 + 7 & 0xfffffffffffffff8);
  _swift_release(*puVar23);
  DVar10 = SwiftUI::DismissAction::typeMetadataAccessor();
  lVar24 = *(long *)(DVar10.unknown + -8);
  uVar19 = (ulong)*(uint *)(lVar24 + 0x50) & 0xf8 | 7;
  puVar20 = (uint *)((long)puVar23 + uVar19 + 0x10 & (uVar19 ^ 0xffffffffffffffff));
  uVar19 = *(ulong *)(lVar24 + 0x40);
  if (uVar19 < 9) {
    uVar19 = 8;
  }
  bVar6 = *(byte *)((long)puVar20 + uVar19);
  uVar16 = (uint)bVar6;
  if (bVar6 < 2) {
LAB_1003ca3a0:
    if (uVar16 != 1) goto LAB_1003ca3dc;
LAB_1003ca3a8:
    (**(code **)(lVar24 + 8))(puVar20,DVar10.unknown);
  }
  else {
    uVar22 = (uint)uVar19;
    uVar5 = 4;
    if (uVar22 < 4) {
      uVar5 = uVar22;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_1003ca3a0;
      uVar16 = (uint)(byte)*puVar20;
    }
    else if (uVar5 == 2) {
      uVar16 = (uint)(ushort)*puVar20;
    }
    else if (uVar5 == 3) {
      uVar16 = (uint)(uint3)*puVar20;
    }
    else {
      uVar16 = *puVar20;
    }
    if (3 < uVar22) {
      uVar16 = uVar16 + 2;
      goto LAB_1003ca3a0;
    }
    if ((uVar16 | bVar6 - 2 << (ulong)((uVar22 & 3) << 3)) == 0xffffffff) goto LAB_1003ca3a8;
LAB_1003ca3dc:
    _swift_release(*(undefined8 *)puVar20);
  }
  puVar23 = (undefined8 *)((ulong)((long)puVar20 + uVar19 + 8) & 0xfffffffffffffff8);
  FUN_100047b2c(*puVar23,*(undefined1 *)(puVar23 + 1));
  uVar21 = (ulong)((long)puVar20 + uVar19 + 0x18) & 0xfffffffffffffff8;
  _swift_release(*(undefined8 *)(uVar21 + 8));
  _swift_release(*(undefined8 *)(uVar21 + 0x18));
  _swift_release(*(undefined8 *)(uVar21 + 0x28));
  _swift_release(*(undefined8 *)(uVar21 + 0x38));
  UVar11 = Foundation::URL::typeMetadataAccessor();
  lVar28 = *(long *)(UVar11.unknown + -8);
  bVar6 = *(byte *)(lVar28 + 0x50);
  uVar25 = (ulong)bVar6;
  DVar12 = Foundation::Date::typeMetadataAccessor();
  lVar24 = *(long *)(DVar12.unknown + -8);
  uVar19 = (ulong)*(byte *)(lVar24 + 0x50);
  uVar30 = (ulong)(bVar6 | *(byte *)(lVar24 + 0x50)) | 7;
  uVar21 = uVar21 + uVar30 + 0x40 & (uVar30 ^ 0xffffffffffffffff);
  uVar5 = *(uint *)(lVar28 + 0x54);
  uVar16 = 0;
  if (uVar5 != 0) {
    uVar16 = uVar5 - 1;
  }
  iVar9 = *(int *)(lVar24 + 0x54);
  uVar22 = 0;
  if (iVar9 != 0) {
    uVar22 = iVar9 - 1;
  }
  uVar4 = uVar5;
  if (uVar5 <= uVar22) {
    uVar4 = uVar22;
  }
  uVar22 = uVar4;
  if (uVar4 < 0x80000000) {
    uVar22 = 0x7fffffff;
  }
  uVar17 = ~uVar25;
  uVar1 = uVar25 + 0x10;
  lVar18 = *(long *)(lVar28 + 0x40);
  lVar3 = lVar18 + uVar25;
  uVar13 = ~uVar19;
  lVar14 = *(long *)(lVar24 + 0x40);
  if ((int)uVar4 < 0) {
    uVar15 = uVar1 + uVar21 & uVar17;
    if (uVar5 == uVar22) {
      (**(code **)(lVar28 + 0x30))(uVar15,uVar5,UVar11.unknown);
      iVar8 = (int)uVar15;
    }
    else {
      uVar15 = lVar3 + uVar15 & uVar17;
      if (uVar16 == uVar22) {
        (**(code **)(lVar28 + 0x30))(uVar15,uVar5,UVar11.unknown);
        iVar7 = (int)uVar15;
      }
      else {
        lVar2 = lVar18;
        if (uVar5 == 0) {
          lVar2 = lVar18 + 1;
        }
        uVar15 = uVar19 + (uVar15 + lVar2 + 7 & 0xfffffffffffffff8) + 0x29 & uVar13;
        (**(code **)(lVar24 + 0x30))(uVar15,iVar9,DVar12.unknown);
        iVar7 = (int)uVar15;
      }
      iVar8 = 0;
      if (iVar7 != 0) {
        iVar8 = iVar7 + -1;
      }
    }
  }
  else {
    uVar15 = *(ulong *)(uVar21 + 8);
    if (0xfffffffe < uVar15) {
      uVar15 = 0xffffffff;
    }
    iVar8 = (int)uVar15 + 1;
  }
  if (iVar8 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(uVar21 + 8));
    uVar15 = uVar1 + uVar21 & uVar17;
    pcVar29 = *(code **)(lVar28 + 8);
    (*pcVar29)(uVar15,UVar11.unknown);
    uVar26 = lVar3 + uVar15 & uVar17;
    uVar15 = uVar26;
    (**(code **)(lVar28 + 0x30))(uVar26,1,UVar11.unknown);
    if ((int)uVar15 == 0) {
      (*pcVar29)(uVar26,UVar11.unknown);
    }
    lVar2 = 7;
    if (uVar5 == 0) {
      lVar2 = 8;
    }
    uVar15 = lVar2 + lVar18 + uVar26 & 0xfffffffffffffff8;
    _swift_bridgeObjectRelease(*(undefined8 *)(uVar15 + 8));
    uVar26 = uVar19 + uVar15 + 0x29 & uVar13;
    uVar15 = uVar26;
    (**(code **)(lVar24 + 0x30))(uVar26,1,DVar12.unknown);
    if ((int)uVar15 == 0) {
      (**(code **)(lVar24 + 8))(uVar26,DVar12.unknown);
    }
    lVar2 = 0x17;
    if (iVar9 == 0) {
      lVar2 = 0x18;
    }
    uVar15 = lVar2 + lVar14 + uVar26 & 0xfffffffffffffff8;
    _swift_bridgeObjectRelease(*(undefined8 *)(uVar15 + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(uVar15 + 0x28));
    _swift_bridgeObjectRelease(*(undefined8 *)(uVar15 + 0x38));
  }
  if (uVar5 == 0) {
    lVar18 = lVar18 + 1;
  }
  if (iVar9 == 0) {
    lVar14 = lVar14 + 1;
  }
  uVar25 = lVar14 + 0x17 +
           (uVar19 + 9 +
            (lVar18 + 7 +
             (lVar3 + (uVar1 & (uVar25 ^ 0xffffffffffffffff)) & (uVar25 ^ 0xffffffffffffffff)) &
            0xfffffffffffffff8) + 0x20 & uVar13) & 0xfffffffffffffff8;
  lVar27 = uVar25 + 0x38;
  _swift_release(*(undefined8 *)(lVar27 + uVar21 + 0x10));
  lVar2 = uVar25 + 0x50;
  uVar21 = uVar21 + uVar30 + lVar2 & ~uVar30;
  if ((int)uVar4 < 0) {
    uVar25 = uVar1 + uVar21 & uVar17;
    if (uVar5 == uVar22) {
      (**(code **)(lVar28 + 0x30))(uVar25,uVar5,UVar11.unknown);
      iVar7 = (int)uVar25;
    }
    else {
      uVar25 = lVar3 + uVar25 & uVar17;
      if (uVar16 == uVar22) {
        (**(code **)(lVar28 + 0x30))(uVar25,uVar5,UVar11.unknown);
        iVar9 = (int)uVar25;
      }
      else {
        uVar25 = uVar19 + (uVar25 + lVar18 + 7 & 0xfffffffffffffff8) + 0x29 & uVar13;
        (**(code **)(lVar24 + 0x30))(uVar25,iVar9,DVar12.unknown);
        iVar9 = (int)uVar25;
      }
      iVar7 = 0;
      if (iVar9 != 0) {
        iVar7 = iVar9 + -1;
      }
    }
    if (iVar7 != 0) goto LAB_1003ca904;
  }
  else {
    uVar25 = *(ulong *)(uVar21 + 8);
    if (0xfffffffe < uVar25) {
      uVar25 = 0xffffffff;
    }
    if ((int)uVar25 != -1) goto LAB_1003ca904;
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(uVar21 + 8));
  uVar25 = uVar1 + uVar21 & uVar17;
  pcVar29 = *(code **)(lVar28 + 8);
  (*pcVar29)(uVar25,UVar11.unknown);
  uVar17 = lVar3 + uVar25 & uVar17;
  uVar25 = uVar17;
  (**(code **)(lVar28 + 0x30))(uVar17,1,UVar11.unknown);
  if ((int)uVar25 == 0) {
    (*pcVar29)(uVar17,UVar11.unknown);
  }
  uVar25 = lVar18 + 7 + uVar17 & 0xfffffffffffffff8;
  _swift_bridgeObjectRelease(*(undefined8 *)(uVar25 + 8));
  uVar13 = uVar19 + 9 + uVar25 + 0x20 & uVar13;
  uVar19 = uVar13;
  (**(code **)(lVar24 + 0x30))(uVar13,1,DVar12.unknown);
  if ((int)uVar19 == 0) {
    (**(code **)(lVar24 + 8))(uVar13,DVar12.unknown);
  }
  uVar19 = lVar14 + 0x17 + uVar13 & 0xfffffffffffffff8;
  _swift_bridgeObjectRelease(*(undefined8 *)(uVar19 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(uVar19 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(uVar19 + 0x38));
LAB_1003ca904:
  _swift_release(*(undefined8 *)(lVar27 + uVar21 + 0x10));
  puVar23 = (undefined8 *)(uVar21 + lVar2);
  _swift_release(*puVar23);
  _swift_release(puVar23[1]);
  uVar19 = (long)puVar23 + 0x17U & 0xfffffffffffffff8;
  _swift_release(*(undefined8 *)(uVar19 + 8));
  _swift_release(*(undefined8 *)(uVar19 + 0x18));
  _swift_release(*(undefined8 *)(uVar19 + 0x30));
  return;
}

