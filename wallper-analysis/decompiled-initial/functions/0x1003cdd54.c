// rea decompile_all
// name: FUN_1003cdd54
// address: 0x1003cdd54
// body: available
// range: 0x1003cdd54-0x1003cf683 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1003cdd54(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  size_t sVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  DismissAction DVar12;
  URL UVar13;
  Date DVar14;
  void *pvVar15;
  byte bVar16;
  ulong uVar17;
  size_t sVar18;
  uint uVar19;
  size_t sVar20;
  ulong uVar21;
  ulong uVar22;
  uint uVar23;
  undefined8 *puVar24;
  ulong uVar25;
  undefined1 *puVar26;
  ulong uVar27;
  void *pvVar28;
  undefined8 *puVar29;
  void *pvVar30;
  uint *puVar31;
  undefined1 *puVar32;
  undefined8 *puVar33;
  undefined8 *puVar34;
  ulong *puVar35;
  uint *puVar36;
  ulong uVar37;
  ulong *puVar38;
  long lVar39;
  long lVar40;
  void *pvVar41;
  long lVar42;
  long lVar43;
  ulong uVar44;
  code *pcVar45;
  long lVar46;
  code *pcVar47;
  ulong uVar48;
  size_t local_120;
  
  uVar11 = param_2[1];
  uVar10 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar11;
  _swift_bridgeObjectRelease(uVar10);
  puVar34 = (undefined8 *)((long)param_1 + 0x17U & 0xfffffffffffffff8);
  puVar24 = (undefined8 *)((long)param_2 + 0x17U & 0xfffffffffffffff8);
  uVar11 = *puVar34;
  *puVar34 = *puVar24;
  _swift_bridgeObjectRelease(uVar11);
  *(undefined1 *)(puVar34 + 1) = *(undefined1 *)(puVar24 + 1);
  *(undefined1 *)((long)puVar34 + 9) = *(undefined1 *)((long)puVar24 + 9);
  *(undefined1 *)((long)puVar34 + 10) = *(undefined1 *)((long)puVar24 + 10);
  *(undefined1 *)((long)puVar34 + 0xb) = *(undefined1 *)((long)puVar24 + 0xb);
  puVar38 = puVar34 + 2;
  uVar17 = puVar24[2];
  if (*puVar38 < 0xffffffff) {
    if (uVar17 < 0xffffffff) goto LAB_1003cde38;
    uVar11 = puVar24[3];
    *puVar38 = uVar17;
    puVar34[3] = uVar11;
  }
  else if (uVar17 < 0xffffffff) {
    _swift_release(puVar34[3]);
LAB_1003cde38:
    uVar17 = puVar24[2];
    puVar34[3] = puVar24[3];
    *puVar38 = uVar17;
  }
  else {
    uVar10 = puVar24[3];
    uVar11 = puVar34[3];
    *puVar38 = uVar17;
    puVar34[3] = uVar10;
    _swift_release(uVar11);
  }
  *(undefined1 *)(puVar34 + 4) = *(undefined1 *)(puVar24 + 4);
  puVar38 = puVar34 + 5;
  uVar17 = puVar24[5];
  if (*puVar38 < 0xffffffff) {
    if (uVar17 < 0xffffffff) goto LAB_1003cdeac;
    uVar11 = puVar24[6];
    *puVar38 = uVar17;
    puVar34[6] = uVar11;
  }
  else if (uVar17 < 0xffffffff) {
    _swift_release(puVar34[6]);
LAB_1003cdeac:
    uVar17 = puVar24[5];
    puVar34[6] = puVar24[6];
    *puVar38 = uVar17;
  }
  else {
    uVar10 = puVar24[6];
    uVar11 = puVar34[6];
    *puVar38 = uVar17;
    puVar34[6] = uVar10;
    _swift_release(uVar11);
  }
  puVar38 = puVar34 + 7;
  uVar17 = puVar24[7];
  if (*puVar38 < 0xffffffff) {
    if (uVar17 < 0xffffffff) goto LAB_1003cdf18;
    uVar11 = puVar24[8];
    *puVar38 = uVar17;
    puVar34[8] = uVar11;
  }
  else if (uVar17 < 0xffffffff) {
    _swift_release(puVar34[8]);
LAB_1003cdf18:
    uVar17 = puVar24[7];
    puVar34[8] = puVar24[8];
    *puVar38 = uVar17;
  }
  else {
    uVar10 = puVar24[8];
    uVar11 = puVar34[8];
    *puVar38 = uVar17;
    puVar34[8] = uVar10;
    _swift_release(uVar11);
  }
  puVar38 = puVar34 + 9;
  puVar35 = puVar24 + 9;
  uVar17 = *puVar35;
  if (*puVar38 < 0xffffffff) {
    if (uVar17 < 0xffffffff) goto LAB_1003cdf84;
    uVar11 = puVar24[10];
    *puVar38 = uVar17;
    puVar34[10] = uVar11;
  }
  else if (uVar17 < 0xffffffff) {
    _swift_release(puVar34[10]);
LAB_1003cdf84:
    uVar17 = *puVar35;
    puVar34[10] = puVar24[10];
    *puVar38 = uVar17;
  }
  else {
    uVar10 = puVar24[10];
    uVar11 = puVar34[10];
    *puVar38 = uVar17;
    puVar34[10] = uVar10;
    _swift_release(uVar11);
  }
  lVar39 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar17 = (ulong)*(byte *)(lVar39 + 0x50);
  uVar25 = (long)puVar38 + uVar17 + 0x10 & (uVar17 ^ 0xffffffffffffffff);
  uVar17 = (long)puVar35 + uVar17 + 0x10 & (uVar17 ^ 0xffffffffffffffff);
  (**(code **)(lVar39 + 0x28))(uVar25,uVar17);
  lVar39 = *(long *)(lVar39 + 0x40) + 7;
  puVar24 = (undefined8 *)(lVar39 + uVar25 & 0xfffffffffffffff8);
  puVar34 = (undefined8 *)(lVar39 + uVar17 & 0xfffffffffffffff8);
  uVar11 = *puVar24;
  *puVar24 = *puVar34;
  _swift_release(uVar11);
  puVar24[1] = puVar34[1];
  DVar12 = SwiftUI::DismissAction::typeMetadataAccessor();
  lVar42 = *(long *)(DVar12.unknown + -8);
  uVar17 = (ulong)*(uint *)(lVar42 + 0x50) & 0xf8;
  lVar39 = uVar17 + 0x17;
  uVar17 = (uVar17 ^ 0xffffffffffffffff) & 0xfffffffffffffff8;
  puVar31 = (uint *)(lVar39 + (long)puVar24 & uVar17);
  puVar36 = (uint *)(lVar39 + (long)puVar34 & uVar17);
  uVar17 = *(ulong *)(lVar42 + 0x40);
  if (uVar17 < 9) {
    uVar17 = 8;
  }
  if (puVar31 != puVar36) {
    bVar16 = *(byte *)((long)puVar31 + uVar17);
    uVar19 = (uint)bVar16;
    uVar23 = (uint)uVar17;
    if (bVar16 < 2) {
LAB_1003ce0a8:
      if (uVar19 != 1) goto LAB_1003ce0e8;
LAB_1003ce0b0:
      (**(code **)(lVar42 + 8))(puVar31,DVar12.unknown);
    }
    else {
      uVar4 = 4;
      if (uVar23 < 4) {
        uVar4 = uVar23;
      }
      if ((int)uVar4 < 2) {
        if (uVar4 == 0) goto LAB_1003ce0a8;
        uVar19 = (uint)(byte)*puVar31;
      }
      else if (uVar4 == 2) {
        uVar19 = (uint)(ushort)*puVar31;
      }
      else if (uVar4 == 3) {
        uVar19 = (uint)(uint3)*puVar31;
      }
      else {
        uVar19 = *puVar31;
      }
      if (3 < uVar23) {
        uVar19 = uVar19 + 2;
        goto LAB_1003ce0a8;
      }
      if ((uVar19 | bVar16 - 2 << (ulong)((uVar23 & 3) << 3)) == 0xffffffff) goto LAB_1003ce0b0;
LAB_1003ce0e8:
      _swift_release(*(undefined8 *)puVar31);
    }
    bVar16 = *(byte *)((long)puVar36 + uVar17);
    uVar19 = (uint)bVar16;
    if (bVar16 < 2) {
LAB_1003ce15c:
      if (uVar19 != 1) goto LAB_1003ce1a4;
LAB_1003ce164:
      (**(code **)(lVar42 + 0x20))(puVar31,puVar36,DVar12.unknown);
      bVar16 = 1;
    }
    else {
      uVar4 = 4;
      if (uVar23 < 4) {
        uVar4 = uVar23;
      }
      if ((int)uVar4 < 2) {
        if (uVar4 == 0) goto LAB_1003ce15c;
        uVar19 = (uint)(byte)*puVar36;
      }
      else if (uVar4 == 2) {
        uVar19 = (uint)(ushort)*puVar36;
      }
      else if (uVar4 == 3) {
        uVar19 = (uint)(uint3)*puVar36;
      }
      else {
        uVar19 = *puVar36;
      }
      if (3 < uVar23) {
        uVar19 = uVar19 + 2;
        goto LAB_1003ce15c;
      }
      if ((uVar19 | bVar16 - 2 << (ulong)((uVar23 & 3) << 3)) == 0xffffffff) goto LAB_1003ce164;
LAB_1003ce1a4:
      bVar16 = 0;
      *(undefined8 *)puVar31 = *(undefined8 *)puVar36;
    }
    *(byte *)((long)puVar31 + uVar17) = bVar16;
  }
  puVar24 = (undefined8 *)((ulong)((long)puVar31 + uVar17 + 8) & 0xfffffffffffffff8);
  puVar34 = (undefined8 *)((ulong)((long)puVar36 + uVar17 + 8) & 0xfffffffffffffff8);
  uVar5 = *(undefined1 *)(puVar34 + 1);
  uVar11 = *puVar24;
  *puVar24 = *puVar34;
  uVar6 = *(undefined1 *)(puVar24 + 1);
  *(undefined1 *)(puVar24 + 1) = uVar5;
  FUN_100047b2c(uVar11,uVar6);
  puVar26 = (undefined1 *)((ulong)((long)puVar31 + uVar17 + 0x18) & 0xfffffffffffffff8);
  puVar32 = (undefined1 *)((ulong)((long)puVar36 + uVar17 + 0x18) & 0xfffffffffffffff8);
  *puVar26 = *puVar32;
  uVar11 = *(undefined8 *)(puVar26 + 8);
  *(undefined8 *)(puVar26 + 8) = *(undefined8 *)(puVar32 + 8);
  _swift_release(uVar11);
  puVar26[0x10] = puVar32[0x10];
  uVar11 = *(undefined8 *)(puVar26 + 0x18);
  *(undefined8 *)(puVar26 + 0x18) = *(undefined8 *)(puVar32 + 0x18);
  _swift_release(uVar11);
  *(undefined8 *)(puVar26 + 0x20) = *(undefined8 *)(puVar32 + 0x20);
  uVar11 = *(undefined8 *)(puVar26 + 0x28);
  *(undefined8 *)(puVar26 + 0x28) = *(undefined8 *)(puVar32 + 0x28);
  _swift_release(uVar11);
  puVar26[0x30] = puVar32[0x30];
  uVar11 = *(undefined8 *)(puVar26 + 0x38);
  *(undefined8 *)(puVar26 + 0x38) = *(undefined8 *)(puVar32 + 0x38);
  _swift_release(uVar11);
  UVar13 = Foundation::URL::typeMetadataAccessor();
  lVar42 = *(long *)(UVar13.unknown + -8);
  bVar16 = *(byte *)(lVar42 + 0x50);
  uVar44 = (ulong)bVar16;
  DVar14 = Foundation::Date::typeMetadataAccessor();
  lVar43 = *(long *)(DVar14.unknown + -8);
  uVar25 = (ulong)*(byte *)(lVar43 + 0x50);
  uVar17 = (ulong)(bVar16 | *(byte *)(lVar43 + 0x50));
  uVar22 = uVar17 | 7;
  lVar39 = uVar17 + 0x10;
  puVar34 = (undefined8 *)((ulong)(puVar26 + 0x30 + lVar39) & (uVar22 ^ 0xffffffffffffffff));
  puVar24 = (undefined8 *)((ulong)(puVar32 + 0x30 + lVar39) & (uVar22 ^ 0xffffffffffffffff));
  uVar23 = *(uint *)(lVar42 + 0x54);
  uVar19 = 0;
  if (uVar23 != 0) {
    uVar19 = uVar23 - 1;
  }
  iVar9 = *(int *)(lVar43 + 0x54);
  uVar4 = 0;
  if (iVar9 != 0) {
    uVar4 = iVar9 - 1;
  }
  uVar3 = uVar23;
  if (uVar23 <= uVar4) {
    uVar3 = uVar4;
  }
  uVar4 = uVar3;
  if (uVar3 < 0x80000000) {
    uVar4 = 0x7fffffff;
  }
  uVar37 = ~uVar44;
  uVar17 = uVar44 + 0x10;
  sVar20 = *(size_t *)(lVar42 + 0x40);
  lVar39 = sVar20 + uVar44;
  uVar44 = lVar39 + (uVar17 & (uVar44 ^ 0xffffffffffffffff)) & (uVar44 ^ 0xffffffffffffffff);
  uVar48 = ~uVar25;
  sVar18 = *(size_t *)(lVar43 + 0x40);
  local_120 = sVar20;
  if ((int)uVar3 < 0) {
    uVar21 = uVar17 + (long)puVar34 & uVar37;
    if (uVar23 == uVar4) {
      (**(code **)(lVar42 + 0x30))(uVar21,uVar23,UVar13.unknown);
      iVar7 = (int)uVar21;
    }
    else {
      uVar21 = lVar39 + uVar21 & uVar37;
      if (uVar19 == uVar4) {
        (**(code **)(lVar42 + 0x30))(uVar21,uVar23,UVar13.unknown);
        iVar8 = (int)uVar21;
      }
      else {
        sVar2 = sVar20;
        if (uVar23 == 0) {
          sVar2 = sVar20 + 1;
        }
        uVar21 = uVar25 + (uVar21 + sVar2 + 7 & 0xfffffffffffffff8) + 0x29 & uVar48;
        (**(code **)(lVar43 + 0x30))(uVar21,iVar9,DVar14.unknown);
        iVar8 = (int)uVar21;
      }
      iVar7 = 0;
      if (iVar8 != 0) {
        iVar7 = iVar8 + -1;
      }
    }
    uVar21 = uVar17 + (long)puVar24 & uVar37;
    if (iVar7 == 0) {
      if (uVar23 == uVar4) {
        (**(code **)(lVar42 + 0x30))(uVar21,uVar23,UVar13.unknown);
        iVar7 = (int)uVar21;
      }
      else {
        uVar21 = lVar39 + uVar21 & uVar37;
        if (uVar19 == uVar4) {
          (**(code **)(lVar42 + 0x30))(uVar21,uVar23,UVar13.unknown);
          iVar8 = (int)uVar21;
        }
        else {
          sVar2 = sVar20;
          if (uVar23 == 0) {
            sVar2 = sVar20 + 1;
          }
          uVar21 = uVar25 + (uVar21 + sVar2 + 7 & 0xfffffffffffffff8) + 0x29 & uVar48;
          (**(code **)(lVar43 + 0x30))(uVar21,iVar9,DVar14.unknown);
          iVar8 = (int)uVar21;
        }
        iVar7 = 0;
        if (iVar8 != 0) {
          iVar7 = iVar8 + -1;
        }
      }
      goto LAB_1003ce388;
    }
    if (uVar23 == uVar4) {
      (**(code **)(lVar42 + 0x30))(uVar21,uVar23,UVar13.unknown);
      iVar7 = (int)uVar21;
      goto LAB_1003ce66c;
    }
    uVar21 = lVar39 + uVar21 & uVar37;
    if (uVar19 == uVar4) {
      (**(code **)(lVar42 + 0x30))(uVar21,uVar23,UVar13.unknown);
      iVar8 = (int)uVar21;
    }
    else {
      sVar2 = sVar20;
      if (uVar23 == 0) {
        sVar2 = sVar20 + 1;
      }
      uVar21 = uVar25 + (uVar21 + sVar2 + 7 & 0xfffffffffffffff8) + 0x29 & uVar48;
      (**(code **)(lVar43 + 0x30))(uVar21,iVar9,DVar14.unknown);
      iVar8 = (int)uVar21;
    }
    iVar7 = 0;
    if (iVar8 != 0) {
      iVar7 = iVar8 + -1;
    }
    if (iVar7 != 0) goto LAB_1003ce670;
LAB_1003ce91c:
    uVar11 = *puVar24;
    puVar34[1] = puVar24[1];
    *puVar34 = uVar11;
    uVar21 = uVar17 + (long)puVar34 & uVar37;
    uVar27 = uVar17 + (long)puVar24 & uVar37;
    pcVar45 = *(code **)(lVar42 + 0x20);
    (*pcVar45)(uVar21,uVar27,UVar13.unknown);
    pvVar30 = (void *)(lVar39 + uVar21 & uVar37);
    pvVar28 = (void *)(lVar39 + uVar27 & uVar37);
    pvVar15 = pvVar28;
    (**(code **)(lVar42 + 0x30))(pvVar28,1,UVar13.unknown);
    if ((int)pvVar15 == 0) {
      (*pcVar45)(pvVar30,pvVar28,UVar13.unknown);
      (**(code **)(lVar42 + 0x38))(pvVar30,0,1,UVar13.unknown);
      if (uVar23 == 0) {
        local_120 = sVar20 + 1;
      }
    }
    else {
      if (uVar23 == 0) {
        local_120 = sVar20 + 1;
      }
      _memcpy(pvVar30,pvVar28,local_120);
    }
    lVar40 = local_120 + 7;
    puVar29 = (undefined8 *)(lVar40 + (long)pvVar30 & 0xfffffffffffffff8);
    puVar33 = (undefined8 *)(lVar40 + (long)pvVar28 & 0xfffffffffffffff8);
    uVar11 = *puVar33;
    puVar29[1] = puVar33[1];
    *puVar29 = uVar11;
    puVar29[2] = puVar33[2];
    *(undefined1 *)(puVar29 + 3) = *(undefined1 *)(puVar33 + 3);
    uVar11 = puVar33[4];
    *(undefined1 *)(puVar29 + 5) = *(undefined1 *)(puVar33 + 5);
    puVar29[4] = uVar11;
    pvVar30 = (void *)(uVar25 + 9 + (long)(puVar29 + 4) & uVar48);
    pvVar28 = (void *)(uVar25 + 9 + (long)(puVar33 + 4) & uVar48);
    pvVar15 = pvVar28;
    (**(code **)(lVar43 + 0x30))(pvVar28,1,DVar14.unknown);
    if ((int)pvVar15 == 0) {
      (**(code **)(lVar43 + 0x20))(pvVar30,pvVar28,DVar14.unknown);
      (**(code **)(lVar43 + 0x38))(pvVar30,0,1,DVar14.unknown);
      if (iVar9 == 0) {
        sVar18 = sVar18 + 1;
      }
    }
    else {
      if (iVar9 == 0) {
        sVar18 = sVar18 + 1;
      }
      _memcpy(pvVar30,pvVar28,sVar18);
    }
    puVar29 = (undefined8 *)((long)pvVar30 + sVar18 + 7 & 0xfffffffffffffff8);
    puVar33 = (undefined8 *)((long)pvVar28 + sVar18 + 7 & 0xfffffffffffffff8);
    uVar11 = *puVar33;
    *(undefined1 *)(puVar29 + 1) = *(undefined1 *)(puVar33 + 1);
    *puVar29 = uVar11;
    puVar29 = (undefined8 *)((long)pvVar30 + sVar18 + 0x17 & 0xfffffffffffffff8);
    puVar33 = (undefined8 *)((long)pvVar28 + sVar18 + 0x17 & 0xfffffffffffffff8);
    uVar11 = *puVar33;
    puVar29[1] = puVar33[1];
    *puVar29 = uVar11;
    uVar11 = puVar33[2];
    *(undefined1 *)(puVar29 + 3) = *(undefined1 *)(puVar33 + 3);
    puVar29[2] = uVar11;
    uVar11 = puVar33[4];
    puVar29[5] = puVar33[5];
    puVar29[4] = uVar11;
    *(undefined1 *)(puVar29 + 6) = *(undefined1 *)(puVar33 + 6);
    puVar29[7] = puVar33[7];
    *(undefined1 *)(puVar29 + 8) = *(undefined1 *)(puVar33 + 8);
  }
  else {
    uVar21 = puVar24[1];
    if (0xfffffffe < uVar21) {
      uVar21 = 0xffffffff;
    }
    iVar7 = (int)uVar21 + 1;
    if ((ulong)puVar34[1] < 0xffffffff) {
LAB_1003ce66c:
      if (iVar7 == 0) goto LAB_1003ce91c;
LAB_1003ce670:
      lVar40 = 0x17;
      sVar2 = sVar18;
      if (iVar9 == 0) {
        lVar40 = 0x18;
        sVar2 = sVar18 + 1;
      }
      lVar1 = 7;
      if (uVar23 == 0) {
        lVar1 = 8;
      }
      if (uVar23 == 0) {
        local_120 = sVar20 + 1;
      }
      _memcpy(puVar34,puVar24,
              (lVar40 + sVar18 +
               (uVar25 + (lVar1 + sVar20 + uVar44 & 0xfffffffffffffff8) + 0x29 & uVar48) &
              0xfffffffffffffff8) + 0x41);
      lVar40 = local_120 + 7;
      sVar18 = sVar2;
    }
    else {
LAB_1003ce388:
      if (iVar7 == 0) {
        *puVar34 = *puVar24;
        uVar11 = puVar34[1];
        puVar34[1] = puVar24[1];
        _swift_bridgeObjectRelease(uVar11);
        uVar21 = uVar17 + (long)puVar34 & uVar37;
        uVar27 = uVar17 + (long)puVar24 & uVar37;
        pcVar45 = *(code **)(lVar42 + 0x28);
        (*pcVar45)(uVar21,uVar27,UVar13.unknown);
        pvVar28 = (void *)(lVar39 + uVar21 & uVar37);
        pvVar41 = (void *)(lVar39 + uVar27 & uVar37);
        pcVar47 = *(code **)(lVar42 + 0x30);
        pvVar15 = pvVar28;
        (*pcVar47)(pvVar28,1,UVar13.unknown);
        pvVar30 = pvVar41;
        (*pcVar47)(pvVar41,1,UVar13.unknown);
        if ((int)pvVar15 == 0) {
          if ((int)pvVar30 != 0) {
            (**(code **)(lVar42 + 8))(pvVar28,UVar13.unknown);
            goto LAB_1003ce780;
          }
          (*pcVar45)(pvVar28,pvVar41,UVar13.unknown);
        }
        else if ((int)pvVar30 == 0) {
          (**(code **)(lVar42 + 0x20))(pvVar28,pvVar41,UVar13.unknown);
          (**(code **)(lVar42 + 0x38))(pvVar28,0,1,UVar13.unknown);
        }
        else {
LAB_1003ce780:
          sVar2 = sVar20;
          if (uVar23 == 0) {
            sVar2 = sVar20 + 1;
          }
          _memcpy(pvVar28,pvVar41,sVar2);
        }
        if (uVar23 == 0) {
          local_120 = sVar20 + 1;
        }
        lVar40 = local_120 + 7;
        puVar29 = (undefined8 *)(lVar40 + (long)pvVar28 & 0xfffffffffffffff8);
        puVar33 = (undefined8 *)(lVar40 + (long)pvVar41 & 0xfffffffffffffff8);
        *puVar29 = *puVar33;
        uVar11 = puVar29[1];
        puVar29[1] = puVar33[1];
        _swift_bridgeObjectRelease(uVar11);
        puVar29[2] = puVar33[2];
        *(undefined1 *)(puVar29 + 3) = *(undefined1 *)(puVar33 + 3);
        uVar11 = puVar33[4];
        *(undefined1 *)(puVar29 + 5) = *(undefined1 *)(puVar33 + 5);
        puVar29[4] = uVar11;
        pvVar41 = (void *)(uVar25 + 9 + (long)(puVar29 + 4) & uVar48);
        pvVar28 = (void *)(uVar25 + 9 + (long)(puVar33 + 4) & uVar48);
        pcVar45 = *(code **)(lVar43 + 0x30);
        pvVar15 = pvVar41;
        (*pcVar45)(pvVar41,1,DVar14.unknown);
        pvVar30 = pvVar28;
        (*pcVar45)(pvVar28,1,DVar14.unknown);
        if ((int)pvVar15 == 0) {
          if ((int)pvVar30 != 0) {
            (**(code **)(lVar43 + 8))(pvVar41,DVar14.unknown);
            goto LAB_1003ce8b4;
          }
          (**(code **)(lVar43 + 0x28))(pvVar41,pvVar28,DVar14.unknown);
        }
        else if ((int)pvVar30 == 0) {
          (**(code **)(lVar43 + 0x20))(pvVar41,pvVar28,DVar14.unknown);
          (**(code **)(lVar43 + 0x38))(pvVar41,0,1,DVar14.unknown);
        }
        else {
LAB_1003ce8b4:
          sVar2 = sVar18;
          if (iVar9 == 0) {
            sVar2 = sVar18 + 1;
          }
          _memcpy(pvVar41,pvVar28,sVar2);
        }
        if (iVar9 == 0) {
          sVar18 = sVar18 + 1;
        }
        puVar29 = (undefined8 *)((long)pvVar41 + sVar18 + 7 & 0xfffffffffffffff8);
        puVar33 = (undefined8 *)((long)pvVar28 + sVar18 + 7 & 0xfffffffffffffff8);
        uVar11 = *puVar33;
        *(undefined1 *)(puVar29 + 1) = *(undefined1 *)(puVar33 + 1);
        *puVar29 = uVar11;
        puVar29 = (undefined8 *)((long)pvVar41 + sVar18 + 0x17 & 0xfffffffffffffff8);
        puVar33 = (undefined8 *)((long)pvVar28 + sVar18 + 0x17 & 0xfffffffffffffff8);
        *puVar29 = *puVar33;
        uVar11 = puVar29[1];
        puVar29[1] = puVar33[1];
        _swift_bridgeObjectRelease(uVar11);
        uVar11 = puVar33[2];
        *(undefined1 *)(puVar29 + 3) = *(undefined1 *)(puVar33 + 3);
        puVar29[2] = uVar11;
        puVar29[4] = puVar33[4];
        uVar11 = puVar29[5];
        puVar29[5] = puVar33[5];
        _swift_bridgeObjectRelease(uVar11);
        *(undefined1 *)(puVar29 + 6) = *(undefined1 *)(puVar33 + 6);
        uVar11 = puVar29[7];
        puVar29[7] = puVar33[7];
        _swift_bridgeObjectRelease(uVar11);
        *(undefined1 *)(puVar29 + 8) = *(undefined1 *)(puVar33 + 8);
      }
      else {
        _swift_bridgeObjectRelease(puVar34[1]);
        uVar21 = uVar17 + (long)puVar34 & uVar37;
        pcVar45 = *(code **)(lVar42 + 8);
        (*pcVar45)(uVar21,UVar13.unknown);
        uVar27 = lVar39 + uVar21 & uVar37;
        uVar21 = uVar27;
        (**(code **)(lVar42 + 0x30))(uVar27,1,UVar13.unknown);
        if ((int)uVar21 == 0) {
          (*pcVar45)(uVar27,UVar13.unknown);
        }
        if (uVar23 == 0) {
          local_120 = sVar20 + 1;
        }
        lVar40 = local_120 + 7;
        uVar21 = lVar40 + uVar27 & 0xfffffffffffffff8;
        _swift_bridgeObjectRelease(*(undefined8 *)(uVar21 + 8));
        uVar27 = uVar25 + 9 + uVar21 + 0x20 & uVar48;
        uVar21 = uVar27;
        (**(code **)(lVar43 + 0x30))(uVar27,1,DVar14.unknown);
        if ((int)uVar21 == 0) {
          (**(code **)(lVar43 + 8))(uVar27,DVar14.unknown);
        }
        if (iVar9 == 0) {
          sVar18 = sVar18 + 1;
        }
        uVar21 = sVar18 + 0x17 + uVar27 & 0xfffffffffffffff8;
        _swift_bridgeObjectRelease(*(undefined8 *)(uVar21 + 8));
        _swift_bridgeObjectRelease(*(undefined8 *)(uVar21 + 0x28));
        _swift_bridgeObjectRelease(*(undefined8 *)(uVar21 + 0x38));
        _memcpy(puVar34,puVar24,
                (sVar18 + 0x17 +
                 (uVar25 + 9 + (lVar40 + uVar44 & 0xfffffffffffffff8) + 0x20 & uVar48) &
                0xfffffffffffffff8) + 0x41);
      }
    }
  }
  lVar46 = uVar25 + 9;
  uVar44 = sVar18 + 0x17 + (lVar46 + (lVar40 + uVar44 & 0xfffffffffffffff8) + 0x20 & uVar48) &
           0xfffffffffffffff8;
  uVar11 = *(undefined8 *)((long)puVar34 + uVar44 + 0x48);
  *(undefined8 *)((long)puVar34 + uVar44 + 0x48) = *(undefined8 *)((long)puVar24 + uVar44 + 0x48);
  _swift_release(uVar11);
  lVar1 = uVar44 + 0x50;
  puVar34 = (undefined8 *)((long)puVar34 + lVar1 + uVar22 & ~uVar22);
  puVar24 = (undefined8 *)((long)puVar24 + lVar1 + uVar22 & ~uVar22);
  if ((int)uVar3 < 0) {
    uVar22 = uVar17 + (long)puVar34 & uVar37;
    if (uVar23 == uVar4) {
      (**(code **)(lVar42 + 0x30))(uVar22,uVar23,UVar13.unknown);
      iVar7 = (int)uVar22;
    }
    else {
      uVar22 = lVar39 + uVar22 & uVar37;
      if (uVar19 == uVar4) {
        (**(code **)(lVar42 + 0x30))(uVar22,uVar23,UVar13.unknown);
        iVar8 = (int)uVar22;
      }
      else {
        sVar2 = sVar20;
        if (uVar23 == 0) {
          sVar2 = sVar20 + 1;
        }
        uVar22 = uVar25 + (uVar22 + sVar2 + 7 & 0xfffffffffffffff8) + 0x29 & uVar48;
        (**(code **)(lVar43 + 0x30))(uVar22,iVar9,DVar14.unknown);
        iVar8 = (int)uVar22;
      }
      iVar7 = 0;
      if (iVar8 != 0) {
        iVar7 = iVar8 + -1;
      }
    }
    uVar22 = uVar17 + (long)puVar24 & uVar37;
    if (iVar7 != 0) {
      if (uVar23 == uVar4) {
        (**(code **)(lVar42 + 0x30))(uVar22,uVar23,UVar13.unknown);
        iVar8 = (int)uVar22;
      }
      else {
        uVar22 = lVar39 + uVar22 & uVar37;
        if (uVar19 == uVar4) {
          (**(code **)(lVar42 + 0x30))(uVar22,uVar23,UVar13.unknown);
          iVar9 = (int)uVar22;
        }
        else {
          if (uVar23 == 0) {
            sVar20 = sVar20 + 1;
          }
          uVar25 = uVar25 + (uVar22 + sVar20 + 7 & 0xfffffffffffffff8) + 0x29 & uVar48;
          (**(code **)(lVar43 + 0x30))(uVar25,iVar9,DVar14.unknown);
          iVar9 = (int)uVar25;
        }
        iVar8 = 0;
        if (iVar9 != 0) {
          iVar8 = iVar9 + -1;
        }
      }
      goto joined_r0x0001003cf2fc;
    }
    if (uVar23 == uVar4) {
      (**(code **)(lVar42 + 0x30))(uVar22,uVar23,UVar13.unknown);
      iVar8 = (int)uVar22;
    }
    else {
      uVar22 = lVar39 + uVar22 & uVar37;
      if (uVar19 == uVar4) {
        (**(code **)(lVar42 + 0x30))(uVar22,uVar23,UVar13.unknown);
        iVar9 = (int)uVar22;
      }
      else {
        if (uVar23 == 0) {
          sVar20 = sVar20 + 1;
        }
        uVar25 = uVar25 + (uVar22 + sVar20 + 7 & 0xfffffffffffffff8) + 0x29 & uVar48;
        (**(code **)(lVar43 + 0x30))(uVar25,iVar9,DVar14.unknown);
        iVar9 = (int)uVar25;
      }
      iVar8 = 0;
      if (iVar9 != 0) {
        iVar8 = iVar9 + -1;
      }
    }
LAB_1003ced94:
    if (iVar8 == 0) {
      *puVar34 = *puVar24;
      uVar11 = puVar34[1];
      puVar34[1] = puVar24[1];
      _swift_bridgeObjectRelease(uVar11);
      uVar25 = uVar17 + (long)puVar34 & uVar37;
      uVar17 = uVar17 + (long)puVar24 & uVar37;
      pcVar47 = *(code **)(lVar42 + 0x28);
      (*pcVar47)(uVar25,uVar17,UVar13.unknown);
      pvVar28 = (void *)(lVar39 + uVar25 & uVar37);
      pvVar41 = (void *)(lVar39 + uVar17 & uVar37);
      pcVar45 = *(code **)(lVar42 + 0x30);
      pvVar15 = pvVar28;
      (*pcVar45)(pvVar28,1,UVar13.unknown);
      pvVar30 = pvVar41;
      (*pcVar45)(pvVar41,1,UVar13.unknown);
      if ((int)pvVar15 == 0) {
        if ((int)pvVar30 != 0) {
          (**(code **)(lVar42 + 8))(pvVar28,UVar13.unknown);
          goto LAB_1003cf0bc;
        }
        (*pcVar47)(pvVar28,pvVar41,UVar13.unknown);
      }
      else if ((int)pvVar30 == 0) {
        (**(code **)(lVar42 + 0x20))(pvVar28,pvVar41,UVar13.unknown);
        (**(code **)(lVar42 + 0x38))(pvVar28,0,1,UVar13.unknown);
      }
      else {
LAB_1003cf0bc:
        _memcpy(pvVar28,pvVar41,local_120);
      }
      puVar29 = (undefined8 *)(lVar40 + (long)pvVar28 & 0xfffffffffffffff8);
      puVar33 = (undefined8 *)(lVar40 + (long)pvVar41 & 0xfffffffffffffff8);
      *puVar29 = *puVar33;
      uVar11 = puVar29[1];
      puVar29[1] = puVar33[1];
      _swift_bridgeObjectRelease(uVar11);
      puVar29[2] = puVar33[2];
      *(undefined1 *)(puVar29 + 3) = *(undefined1 *)(puVar33 + 3);
      uVar11 = puVar33[4];
      *(undefined1 *)(puVar29 + 5) = *(undefined1 *)(puVar33 + 5);
      puVar29[4] = uVar11;
      pvVar28 = (void *)(lVar46 + (long)(puVar29 + 4) & uVar48);
      pvVar41 = (void *)(lVar46 + (long)(puVar33 + 4) & uVar48);
      pcVar45 = *(code **)(lVar43 + 0x30);
      pvVar15 = pvVar28;
      (*pcVar45)(pvVar28,1,DVar14.unknown);
      pvVar30 = pvVar41;
      (*pcVar45)(pvVar41,1,DVar14.unknown);
      if ((int)pvVar15 == 0) {
        if ((int)pvVar30 != 0) {
          (**(code **)(lVar43 + 8))(pvVar28,DVar14.unknown);
          goto LAB_1003cf1d0;
        }
        (**(code **)(lVar43 + 0x28))(pvVar28,pvVar41,DVar14.unknown);
      }
      else if ((int)pvVar30 == 0) {
        (**(code **)(lVar43 + 0x20))(pvVar28,pvVar41,DVar14.unknown);
        (**(code **)(lVar43 + 0x38))(pvVar28,0,1,DVar14.unknown);
      }
      else {
LAB_1003cf1d0:
        _memcpy(pvVar28,pvVar41,sVar18);
      }
      puVar29 = (undefined8 *)((long)pvVar28 + sVar18 + 7 & 0xfffffffffffffff8);
      puVar33 = (undefined8 *)((long)pvVar41 + sVar18 + 7 & 0xfffffffffffffff8);
      uVar11 = *puVar33;
      *(undefined1 *)(puVar29 + 1) = *(undefined1 *)(puVar33 + 1);
      *puVar29 = uVar11;
      puVar29 = (undefined8 *)((long)pvVar28 + sVar18 + 0x17 & 0xfffffffffffffff8);
      puVar33 = (undefined8 *)((long)pvVar41 + sVar18 + 0x17 & 0xfffffffffffffff8);
      *puVar29 = *puVar33;
      uVar11 = puVar29[1];
      puVar29[1] = puVar33[1];
      _swift_bridgeObjectRelease(uVar11);
      uVar11 = puVar33[2];
      *(undefined1 *)(puVar29 + 3) = *(undefined1 *)(puVar33 + 3);
      puVar29[2] = uVar11;
      puVar29[4] = puVar33[4];
      uVar11 = puVar29[5];
      puVar29[5] = puVar33[5];
      _swift_bridgeObjectRelease(uVar11);
      *(undefined1 *)(puVar29 + 6) = *(undefined1 *)(puVar33 + 6);
      uVar11 = puVar29[7];
      puVar29[7] = puVar33[7];
      _swift_bridgeObjectRelease(uVar11);
      *(undefined1 *)(puVar29 + 8) = *(undefined1 *)(puVar33 + 8);
      goto LAB_1003cf51c;
    }
    _swift_bridgeObjectRelease(puVar34[1]);
    uVar17 = uVar17 + (long)puVar34 & uVar37;
    pcVar45 = *(code **)(lVar42 + 8);
    (*pcVar45)(uVar17,UVar13.unknown);
    uVar37 = lVar39 + uVar17 & uVar37;
    uVar17 = uVar37;
    (**(code **)(lVar42 + 0x30))(uVar37,1,UVar13.unknown);
    if ((int)uVar17 == 0) {
      (*pcVar45)(uVar37,UVar13.unknown);
    }
    uVar17 = lVar40 + uVar37 & 0xfffffffffffffff8;
    _swift_bridgeObjectRelease(*(undefined8 *)(uVar17 + 8));
    uVar48 = lVar46 + uVar17 + 0x20 & uVar48;
    uVar17 = uVar48;
    (**(code **)(lVar43 + 0x30))(uVar48,1,DVar14.unknown);
    if ((int)uVar17 == 0) {
      (**(code **)(lVar43 + 8))(uVar48,DVar14.unknown);
    }
    uVar17 = sVar18 + 0x17 + uVar48 & 0xfffffffffffffff8;
    _swift_bridgeObjectRelease(*(undefined8 *)(uVar17 + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(uVar17 + 0x28));
    _swift_bridgeObjectRelease(*(undefined8 *)(uVar17 + 0x38));
  }
  else {
    uVar25 = puVar24[1];
    if (0xfffffffe < uVar25) {
      uVar25 = 0xffffffff;
    }
    iVar8 = (int)uVar25 + 1;
    if (0xfffffffe < (ulong)puVar34[1]) goto LAB_1003ced94;
joined_r0x0001003cf2fc:
    if (iVar8 == 0) {
      uVar11 = *puVar24;
      puVar34[1] = puVar24[1];
      *puVar34 = uVar11;
      uVar25 = uVar17 + (long)puVar34 & uVar37;
      uVar17 = uVar17 + (long)puVar24 & uVar37;
      pcVar45 = *(code **)(lVar42 + 0x20);
      (*pcVar45)(uVar25,uVar17,UVar13.unknown);
      pvVar30 = (void *)(lVar39 + uVar25 & uVar37);
      pvVar28 = (void *)(lVar39 + uVar17 & uVar37);
      pvVar15 = pvVar28;
      (**(code **)(lVar42 + 0x30))(pvVar28,1,UVar13.unknown);
      if ((int)pvVar15 == 0) {
        (*pcVar45)(pvVar30,pvVar28,UVar13.unknown);
        (**(code **)(lVar42 + 0x38))(pvVar30,0,1,UVar13.unknown);
      }
      else {
        _memcpy(pvVar30,pvVar28,local_120);
      }
      puVar29 = (undefined8 *)(lVar40 + (long)pvVar30 & 0xfffffffffffffff8);
      puVar33 = (undefined8 *)(lVar40 + (long)pvVar28 & 0xfffffffffffffff8);
      uVar11 = *puVar33;
      puVar29[1] = puVar33[1];
      *puVar29 = uVar11;
      puVar29[2] = puVar33[2];
      *(undefined1 *)(puVar29 + 3) = *(undefined1 *)(puVar33 + 3);
      uVar11 = puVar33[4];
      *(undefined1 *)(puVar29 + 5) = *(undefined1 *)(puVar33 + 5);
      puVar29[4] = uVar11;
      pvVar30 = (void *)(lVar46 + (long)(puVar29 + 4) & uVar48);
      pvVar28 = (void *)(lVar46 + (long)(puVar33 + 4) & uVar48);
      pvVar15 = pvVar28;
      (**(code **)(lVar43 + 0x30))(pvVar28,1,DVar14.unknown);
      if ((int)pvVar15 == 0) {
        (**(code **)(lVar43 + 0x20))(pvVar30,pvVar28,DVar14.unknown);
        (**(code **)(lVar43 + 0x38))(pvVar30,0,1,DVar14.unknown);
      }
      else {
        _memcpy(pvVar30,pvVar28,sVar18);
      }
      puVar29 = (undefined8 *)((long)pvVar30 + sVar18 + 7 & 0xfffffffffffffff8);
      puVar33 = (undefined8 *)((long)pvVar28 + sVar18 + 7 & 0xfffffffffffffff8);
      uVar11 = *puVar33;
      *(undefined1 *)(puVar29 + 1) = *(undefined1 *)(puVar33 + 1);
      *puVar29 = uVar11;
      puVar29 = (undefined8 *)((long)pvVar30 + sVar18 + 0x17 & 0xfffffffffffffff8);
      puVar33 = (undefined8 *)((long)pvVar28 + sVar18 + 0x17 & 0xfffffffffffffff8);
      uVar11 = *puVar33;
      puVar29[1] = puVar33[1];
      *puVar29 = uVar11;
      uVar11 = puVar33[2];
      *(undefined1 *)(puVar29 + 3) = *(undefined1 *)(puVar33 + 3);
      puVar29[2] = uVar11;
      uVar11 = puVar33[4];
      puVar29[5] = puVar33[5];
      puVar29[4] = uVar11;
      *(undefined1 *)(puVar29 + 6) = *(undefined1 *)(puVar33 + 6);
      puVar29[7] = puVar33[7];
      *(undefined1 *)(puVar29 + 8) = *(undefined1 *)(puVar33 + 8);
      goto LAB_1003cf51c;
    }
  }
  _memcpy(puVar34,puVar24,uVar44 + 0x41);
LAB_1003cf51c:
  lVar39 = uVar44 + 0x48;
  uVar11 = *(undefined8 *)(lVar39 + (long)puVar34);
  *(undefined8 *)(lVar39 + (long)puVar34) = *(undefined8 *)(lVar39 + (long)puVar24);
  _swift_release(uVar11);
  puVar34 = (undefined8 *)((long)puVar34 + lVar1);
  puVar24 = (undefined8 *)((long)puVar24 + lVar1);
  uVar11 = *puVar34;
  *puVar34 = *puVar24;
  _swift_release(uVar11);
  uVar11 = puVar34[1];
  puVar34[1] = puVar24[1];
  _swift_release(uVar11);
  puVar26 = (undefined1 *)((long)puVar34 + 0x17U & 0xfffffffffffffff8);
  puVar32 = (undefined1 *)((long)puVar24 + 0x17U & 0xfffffffffffffff8);
  *puVar26 = *puVar32;
  uVar11 = *(undefined8 *)(puVar26 + 8);
  *(undefined8 *)(puVar26 + 8) = *(undefined8 *)(puVar32 + 8);
  _swift_release(uVar11);
  puVar26[0x10] = puVar32[0x10];
  uVar11 = *(undefined8 *)(puVar26 + 0x18);
  *(undefined8 *)(puVar26 + 0x18) = *(undefined8 *)(puVar32 + 0x18);
  _swift_release(uVar11);
  uVar11 = *(undefined8 *)(puVar32 + 0x20);
  puVar26[0x28] = puVar32[0x28];
  *(undefined8 *)(puVar26 + 0x20) = uVar11;
  uVar11 = *(undefined8 *)(puVar26 + 0x30);
  *(undefined8 *)(puVar26 + 0x30) = *(undefined8 *)(puVar32 + 0x30);
  _swift_release(uVar11);
  return param_1;
}

