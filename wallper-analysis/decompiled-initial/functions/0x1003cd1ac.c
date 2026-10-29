// rea decompile_all
// name: FUN_1003cd1ac
// address: 0x1003cd1ac
// body: available
// range: 0x1003cd1ac-0x1003cdd53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1003cd1ac(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  size_t sVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  DismissAction DVar9;
  URL UVar10;
  Date DVar11;
  void *pvVar12;
  undefined1 uVar13;
  undefined8 *puVar14;
  ulong *puVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  undefined8 *puVar20;
  ulong *puVar21;
  ulong uVar22;
  undefined8 *puVar23;
  uint uVar24;
  size_t sVar25;
  undefined8 *puVar26;
  ulong uVar27;
  undefined8 uVar28;
  size_t sVar29;
  uint uVar30;
  ulong uVar31;
  ulong uVar32;
  void *pvVar33;
  ulong uVar34;
  code *pcVar35;
  long lVar36;
  uint *puVar37;
  void *pvVar38;
  long lVar39;
  ulong uVar40;
  long lVar41;
  undefined8 uVar42;
  size_t local_f0;
  
  uVar28 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar28;
  puVar20 = (undefined8 *)((long)param_1 + 0x17U & 0xfffffffffffffff8);
  puVar14 = (undefined8 *)((long)param_2 + 0x17U & 0xfffffffffffffff8);
  *puVar20 = *puVar14;
  *(undefined1 *)(puVar20 + 1) = *(undefined1 *)(puVar14 + 1);
  *(undefined1 *)((long)puVar20 + 9) = *(undefined1 *)((long)puVar14 + 9);
  *(undefined1 *)((long)puVar20 + 10) = *(undefined1 *)((long)puVar14 + 10);
  *(undefined1 *)((long)puVar20 + 0xb) = *(undefined1 *)((long)puVar14 + 0xb);
  uVar27 = puVar14[2];
  if (uVar27 < 0xffffffff) {
    uVar27 = puVar14[2];
    puVar20[3] = puVar14[3];
    puVar20[2] = uVar27;
  }
  else {
    uVar28 = puVar14[3];
    puVar20[2] = uVar27;
    puVar20[3] = uVar28;
  }
  *(undefined1 *)(puVar20 + 4) = *(undefined1 *)(puVar14 + 4);
  uVar27 = puVar14[5];
  if (uVar27 < 0xffffffff) {
    uVar27 = puVar14[5];
    puVar20[6] = puVar14[6];
    puVar20[5] = uVar27;
  }
  else {
    uVar28 = puVar14[6];
    puVar20[5] = uVar27;
    puVar20[6] = uVar28;
  }
  uVar27 = puVar14[7];
  if (uVar27 < 0xffffffff) {
    uVar27 = puVar14[7];
    puVar20[8] = puVar14[8];
    puVar20[7] = uVar27;
  }
  else {
    uVar28 = puVar14[8];
    puVar20[7] = uVar27;
    puVar20[8] = uVar28;
  }
  puVar15 = puVar20 + 9;
  puVar21 = puVar14 + 9;
  if (*puVar21 < 0xffffffff) {
    uVar27 = *puVar21;
    puVar20[10] = puVar14[10];
    *puVar15 = uVar27;
  }
  else {
    uVar28 = puVar14[10];
    *puVar15 = *puVar21;
    puVar20[10] = uVar28;
  }
  lVar36 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar27 = (ulong)*(byte *)(lVar36 + 0x50);
  uVar31 = (long)puVar15 + uVar27 + 0x10 & (uVar27 ^ 0xffffffffffffffff);
  uVar27 = (long)puVar21 + uVar27 + 0x10 & (uVar27 ^ 0xffffffffffffffff);
  (**(code **)(lVar36 + 0x20))(uVar31,uVar27);
  lVar36 = *(long *)(lVar36 + 0x40) + 7;
  puVar14 = (undefined8 *)(lVar36 + uVar31 & 0xfffffffffffffff8);
  puVar20 = (undefined8 *)(lVar36 + uVar27 & 0xfffffffffffffff8);
  uVar28 = *puVar20;
  puVar14[1] = puVar20[1];
  *puVar14 = uVar28;
  DVar9 = SwiftUI::DismissAction::typeMetadataAccessor();
  lVar16 = *(long *)(DVar9.unknown + -8);
  uVar27 = (ulong)*(uint *)(lVar16 + 0x50) & 0xf8;
  lVar36 = uVar27 + 0x17;
  uVar27 = (uVar27 ^ 0xffffffffffffffff) & 0xfffffffffffffff8;
  puVar14 = (undefined8 *)(lVar36 + (long)puVar14 & uVar27);
  puVar37 = (uint *)(lVar36 + (long)puVar20 & uVar27);
  uVar27 = *(ulong *)(lVar16 + 0x40);
  if (uVar27 < 9) {
    uVar27 = 8;
  }
  bVar5 = *(byte *)((long)puVar37 + uVar27);
  uVar24 = (uint)bVar5;
  if (bVar5 < 2) {
LAB_1003cd3ec:
    if (uVar24 == 1) goto LAB_1003cd3f4;
LAB_1003cd430:
    uVar13 = 0;
    *puVar14 = *(undefined8 *)puVar37;
  }
  else {
    uVar30 = (uint)uVar27;
    uVar4 = 4;
    if (uVar30 < 4) {
      uVar4 = uVar30;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) goto LAB_1003cd3ec;
      uVar24 = (uint)(byte)*puVar37;
    }
    else if (uVar4 == 2) {
      uVar24 = (uint)(ushort)*puVar37;
    }
    else if (uVar4 == 3) {
      uVar24 = (uint)(uint3)*puVar37;
    }
    else {
      uVar24 = *puVar37;
    }
    if (3 < uVar30) {
      uVar24 = uVar24 + 2;
      goto LAB_1003cd3ec;
    }
    if ((uVar24 | bVar5 - 2 << (ulong)((uVar30 & 3) << 3)) != 0xffffffff) goto LAB_1003cd430;
LAB_1003cd3f4:
    (**(code **)(lVar16 + 0x20))(puVar14,puVar37,DVar9.unknown);
    uVar13 = 1;
  }
  *(undefined1 *)((long)puVar14 + uVar27) = uVar13;
  puVar20 = (undefined8 *)((long)puVar14 + uVar27 + 8 & 0xfffffffffffffff8);
  puVar26 = (undefined8 *)((ulong)((long)puVar37 + uVar27 + 8) & 0xfffffffffffffff8);
  uVar28 = *puVar26;
  *(undefined1 *)(puVar20 + 1) = *(undefined1 *)(puVar26 + 1);
  *puVar20 = uVar28;
  puVar20 = (undefined8 *)((long)puVar14 + uVar27 + 0x18 & 0xfffffffffffffff8);
  puVar14 = (undefined8 *)((ulong)((long)puVar37 + uVar27 + 0x18) & 0xfffffffffffffff8);
  uVar28 = *puVar14;
  puVar20[1] = puVar14[1];
  *puVar20 = uVar28;
  uVar28 = puVar14[2];
  puVar20[3] = puVar14[3];
  puVar20[2] = uVar28;
  uVar28 = puVar14[4];
  puVar20[5] = puVar14[5];
  puVar20[4] = uVar28;
  uVar28 = puVar14[6];
  puVar20[7] = puVar14[7];
  puVar20[6] = uVar28;
  UVar10 = Foundation::URL::typeMetadataAccessor();
  lVar16 = *(long *)(UVar10.unknown + -8);
  bVar5 = *(byte *)(lVar16 + 0x50);
  uVar32 = (ulong)bVar5;
  DVar11 = Foundation::Date::typeMetadataAccessor();
  lVar39 = *(long *)(DVar11.unknown + -8);
  uVar31 = (ulong)*(byte *)(lVar39 + 0x50);
  uVar27 = (ulong)(bVar5 | *(byte *)(lVar39 + 0x50));
  uVar34 = uVar27 | 7;
  lVar36 = uVar27 + 0x10;
  puVar20 = (undefined8 *)(lVar36 + (long)(puVar20 + 6) & (uVar34 ^ 0xffffffffffffffff));
  puVar14 = (undefined8 *)(lVar36 + (long)(puVar14 + 6) & (uVar34 ^ 0xffffffffffffffff));
  uVar4 = *(uint *)(lVar16 + 0x54);
  uVar24 = 0;
  if (uVar4 != 0) {
    uVar24 = uVar4 - 1;
  }
  iVar8 = *(int *)(lVar39 + 0x54);
  uVar30 = 0;
  if (iVar8 != 0) {
    uVar30 = iVar8 - 1;
  }
  uVar3 = uVar4;
  if (uVar4 <= uVar30) {
    uVar3 = uVar30;
  }
  uVar30 = uVar3;
  if (uVar3 < 0x80000000) {
    uVar30 = 0x7fffffff;
  }
  uVar22 = ~uVar32;
  uVar27 = uVar32 + 0x10;
  sVar25 = *(size_t *)(lVar16 + 0x40);
  lVar36 = sVar25 + uVar32;
  uVar17 = ~uVar31;
  sVar29 = *(size_t *)(lVar39 + 0x40);
  if ((int)uVar3 < 0) {
    uVar18 = uVar27 + (long)puVar14 & uVar22;
    if (uVar4 == uVar30) {
      (**(code **)(lVar16 + 0x30))(uVar18,uVar4,UVar10.unknown);
      iVar7 = (int)uVar18;
    }
    else {
      uVar18 = lVar36 + uVar18 & uVar22;
      if (uVar24 == uVar30) {
        (**(code **)(lVar16 + 0x30))(uVar18,uVar4,UVar10.unknown);
        iVar6 = (int)uVar18;
      }
      else {
        sVar1 = sVar25;
        if (uVar4 == 0) {
          sVar1 = sVar25 + 1;
        }
        uVar18 = uVar31 + (uVar18 + sVar1 + 7 & 0xfffffffffffffff8) + 0x29 & uVar17;
        (**(code **)(lVar39 + 0x30))(uVar18,iVar8,DVar11.unknown);
        iVar6 = (int)uVar18;
      }
      iVar7 = 0;
      if (iVar6 != 0) {
        iVar7 = iVar6 + -1;
      }
    }
  }
  else {
    uVar18 = puVar14[1];
    if (0xfffffffe < uVar18) {
      uVar18 = 0xffffffff;
    }
    iVar7 = (int)uVar18 + 1;
  }
  uVar32 = lVar36 + (uVar27 & (uVar32 ^ 0xffffffffffffffff)) & (uVar32 ^ 0xffffffffffffffff);
  local_f0 = sVar25;
  if (iVar7 == 0) {
    uVar28 = *puVar14;
    puVar20[1] = puVar14[1];
    *puVar20 = uVar28;
    uVar18 = uVar27 + (long)puVar20 & uVar22;
    uVar40 = uVar27 + (long)puVar14 & uVar22;
    pcVar35 = *(code **)(lVar16 + 0x20);
    (*pcVar35)(uVar18,uVar40,UVar10.unknown);
    pvVar33 = (void *)(lVar36 + uVar18 & uVar22);
    pvVar38 = (void *)(lVar36 + uVar40 & uVar22);
    pvVar12 = pvVar38;
    (**(code **)(lVar16 + 0x30))(pvVar38,1,UVar10.unknown);
    if ((int)pvVar12 == 0) {
      (*pcVar35)(pvVar33,pvVar38,UVar10.unknown);
      (**(code **)(lVar16 + 0x38))(pvVar33,0,1,UVar10.unknown);
      if (uVar4 == 0) {
        local_f0 = sVar25 + 1;
      }
    }
    else {
      if (uVar4 == 0) {
        local_f0 = sVar25 + 1;
      }
      _memcpy(pvVar33,pvVar38,local_f0);
    }
    lVar19 = local_f0 + 7;
    puVar26 = (undefined8 *)(lVar19 + (long)pvVar33 & 0xfffffffffffffff8);
    puVar23 = (undefined8 *)(lVar19 + (long)pvVar38 & 0xfffffffffffffff8);
    uVar28 = *puVar23;
    puVar26[1] = puVar23[1];
    *puVar26 = uVar28;
    puVar26[2] = puVar23[2];
    *(undefined1 *)(puVar26 + 3) = *(undefined1 *)(puVar23 + 3);
    uVar28 = puVar23[4];
    *(undefined1 *)(puVar26 + 5) = *(undefined1 *)(puVar23 + 5);
    puVar26[4] = uVar28;
    pvVar38 = (void *)(uVar31 + 9 + (long)(puVar26 + 4) & uVar17);
    pvVar33 = (void *)(uVar31 + 9 + (long)(puVar23 + 4) & uVar17);
    pvVar12 = pvVar33;
    (**(code **)(lVar39 + 0x30))(pvVar33,1,DVar11.unknown);
    if ((int)pvVar12 == 0) {
      (**(code **)(lVar39 + 0x20))(pvVar38,pvVar33,DVar11.unknown);
      (**(code **)(lVar39 + 0x38))(pvVar38,0,1,DVar11.unknown);
      if (iVar8 == 0) {
        sVar29 = sVar29 + 1;
      }
    }
    else {
      if (iVar8 == 0) {
        sVar29 = sVar29 + 1;
      }
      _memcpy(pvVar38,pvVar33,sVar29);
    }
    puVar26 = (undefined8 *)((long)pvVar38 + sVar29 + 7 & 0xfffffffffffffff8);
    puVar23 = (undefined8 *)((long)pvVar33 + sVar29 + 7 & 0xfffffffffffffff8);
    uVar28 = *puVar23;
    *(undefined1 *)(puVar26 + 1) = *(undefined1 *)(puVar23 + 1);
    *puVar26 = uVar28;
    puVar26 = (undefined8 *)((long)pvVar38 + sVar29 + 0x17 & 0xfffffffffffffff8);
    puVar23 = (undefined8 *)((long)pvVar33 + sVar29 + 0x17 & 0xfffffffffffffff8);
    uVar28 = *puVar23;
    puVar26[1] = puVar23[1];
    *puVar26 = uVar28;
    uVar28 = puVar23[2];
    *(undefined1 *)(puVar26 + 3) = *(undefined1 *)(puVar23 + 3);
    puVar26[2] = uVar28;
    uVar28 = puVar23[4];
    puVar26[5] = puVar23[5];
    puVar26[4] = uVar28;
    *(undefined1 *)(puVar26 + 6) = *(undefined1 *)(puVar23 + 6);
    puVar26[7] = puVar23[7];
    *(undefined1 *)(puVar26 + 8) = *(undefined1 *)(puVar23 + 8);
  }
  else {
    lVar19 = 0x17;
    sVar1 = sVar29;
    if (iVar8 == 0) {
      lVar19 = 0x18;
      sVar1 = sVar29 + 1;
    }
    lVar2 = 7;
    if (uVar4 == 0) {
      lVar2 = 8;
    }
    if (uVar4 == 0) {
      local_f0 = sVar25 + 1;
    }
    _memcpy(puVar20,puVar14,
            (lVar19 + sVar29 +
             (uVar31 + (lVar2 + sVar25 + uVar32 & 0xfffffffffffffff8) + 0x29 & uVar17) &
            0xfffffffffffffff8) + 0x41);
    lVar19 = local_f0 + 7;
    sVar29 = sVar1;
  }
  lVar41 = uVar31 + 9;
  uVar32 = sVar29 + (lVar41 + (lVar19 + uVar32 & 0xfffffffffffffff8) + 0x20 & uVar17) + 0x17 &
           0xfffffffffffffff8;
  *(undefined8 *)((long)puVar20 + uVar32 + 0x48) = *(undefined8 *)((long)puVar14 + uVar32 + 0x48);
  lVar2 = uVar32 + 0x50;
  puVar20 = (undefined8 *)((long)puVar20 + lVar2 + uVar34 & ~uVar34);
  puVar14 = (undefined8 *)((long)puVar14 + lVar2 + uVar34 & ~uVar34);
  if ((int)uVar3 < 0) {
    uVar34 = uVar27 + (long)puVar14 & uVar22;
    if (uVar4 == uVar30) {
      (**(code **)(lVar16 + 0x30))(uVar34,uVar4,UVar10.unknown);
      iVar6 = (int)uVar34;
    }
    else {
      uVar34 = lVar36 + uVar34 & uVar22;
      if (uVar24 == uVar30) {
        (**(code **)(lVar16 + 0x30))(uVar34,uVar4,UVar10.unknown);
        iVar8 = (int)uVar34;
      }
      else {
        if (uVar4 == 0) {
          sVar25 = sVar25 + 1;
        }
        uVar31 = uVar31 + (uVar34 + sVar25 + 7 & 0xfffffffffffffff8) + 0x29 & uVar17;
        (**(code **)(lVar39 + 0x30))(uVar31,iVar8,DVar11.unknown);
        iVar8 = (int)uVar31;
      }
      iVar6 = 0;
      if (iVar8 != 0) {
        iVar6 = iVar8 + -1;
      }
    }
    if (iVar6 != 0) goto LAB_1003cda30;
  }
  else {
    uVar31 = puVar14[1];
    if (0xfffffffe < uVar31) {
      uVar31 = 0xffffffff;
    }
    if ((int)uVar31 != -1) {
LAB_1003cda30:
      _memcpy(puVar20,puVar14,uVar32 + 0x41);
      goto LAB_1003cdcd8;
    }
  }
  uVar28 = *puVar14;
  puVar20[1] = puVar14[1];
  *puVar20 = uVar28;
  uVar31 = uVar27 + (long)puVar20 & uVar22;
  uVar27 = uVar27 + (long)puVar14 & uVar22;
  pcVar35 = *(code **)(lVar16 + 0x20);
  (*pcVar35)(uVar31,uVar27,UVar10.unknown);
  pvVar33 = (void *)(lVar36 + uVar31 & uVar22);
  pvVar38 = (void *)(lVar36 + uVar27 & uVar22);
  pvVar12 = pvVar38;
  (**(code **)(lVar16 + 0x30))(pvVar38,1,UVar10.unknown);
  if ((int)pvVar12 == 0) {
    (*pcVar35)(pvVar33,pvVar38,UVar10.unknown);
    (**(code **)(lVar16 + 0x38))(pvVar33,0,1,UVar10.unknown);
  }
  else {
    _memcpy(pvVar33,pvVar38,local_f0);
  }
  puVar26 = (undefined8 *)(lVar19 + (long)pvVar33 & 0xfffffffffffffff8);
  puVar23 = (undefined8 *)(lVar19 + (long)pvVar38 & 0xfffffffffffffff8);
  uVar28 = *puVar23;
  puVar26[1] = puVar23[1];
  *puVar26 = uVar28;
  puVar26[2] = puVar23[2];
  *(undefined1 *)(puVar26 + 3) = *(undefined1 *)(puVar23 + 3);
  uVar28 = puVar23[4];
  *(undefined1 *)(puVar26 + 5) = *(undefined1 *)(puVar23 + 5);
  puVar26[4] = uVar28;
  pvVar33 = (void *)(lVar41 + (long)(puVar26 + 4) & uVar17);
  pvVar38 = (void *)(lVar41 + (long)(puVar23 + 4) & uVar17);
  pvVar12 = pvVar38;
  (**(code **)(lVar39 + 0x30))(pvVar38,1,DVar11.unknown);
  if ((int)pvVar12 == 0) {
    (**(code **)(lVar39 + 0x20))(pvVar33,pvVar38,DVar11.unknown);
    (**(code **)(lVar39 + 0x38))(pvVar33,0,1,DVar11.unknown);
  }
  else {
    _memcpy(pvVar33,pvVar38,sVar29);
  }
  puVar26 = (undefined8 *)((long)pvVar33 + sVar29 + 7 & 0xfffffffffffffff8);
  puVar23 = (undefined8 *)((long)pvVar38 + sVar29 + 7 & 0xfffffffffffffff8);
  uVar28 = *puVar23;
  *(undefined1 *)(puVar26 + 1) = *(undefined1 *)(puVar23 + 1);
  *puVar26 = uVar28;
  puVar26 = (undefined8 *)((long)pvVar33 + sVar29 + 0x17 & 0xfffffffffffffff8);
  puVar23 = (undefined8 *)((long)pvVar38 + sVar29 + 0x17 & 0xfffffffffffffff8);
  uVar28 = *puVar23;
  puVar26[1] = puVar23[1];
  *puVar26 = uVar28;
  uVar28 = puVar23[2];
  *(undefined1 *)(puVar26 + 3) = *(undefined1 *)(puVar23 + 3);
  puVar26[2] = uVar28;
  uVar28 = puVar23[4];
  puVar26[5] = puVar23[5];
  puVar26[4] = uVar28;
  *(undefined1 *)(puVar26 + 6) = *(undefined1 *)(puVar23 + 6);
  puVar26[7] = puVar23[7];
  *(undefined1 *)(puVar26 + 8) = *(undefined1 *)(puVar23 + 8);
LAB_1003cdcd8:
  *(undefined8 *)(uVar32 + 0x48 + (long)puVar20) = *(undefined8 *)(uVar32 + 0x48 + (long)puVar14);
  puVar20 = (undefined8 *)((long)puVar20 + lVar2);
  puVar14 = (undefined8 *)((long)puVar14 + lVar2);
  uVar28 = *puVar14;
  puVar20[1] = puVar14[1];
  *puVar20 = uVar28;
  puVar20 = (undefined8 *)((long)puVar20 + 0x17U & 0xfffffffffffffff8);
  puVar14 = (undefined8 *)((long)puVar14 + 0x17U & 0xfffffffffffffff8);
  uVar28 = *puVar14;
  puVar20[1] = puVar14[1];
  *puVar20 = uVar28;
  uVar28 = puVar14[2];
  puVar20[3] = puVar14[3];
  puVar20[2] = uVar28;
  uVar42 = puVar14[5];
  uVar28 = puVar14[4];
  puVar20[6] = puVar14[6];
  puVar20[5] = uVar42;
  puVar20[4] = uVar28;
  return param_1;
}

