// rea decompile_all
// name: FUN_1003ca970
// address: 0x1003ca970
// body: available
// range: 0x1003ca970-0x1003cb6ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1003ca970(undefined8 *param_1,undefined8 *param_2,long param_3)

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
  undefined1 *puVar14;
  ulong uVar15;
  size_t sVar16;
  ulong uVar17;
  long lVar18;
  undefined1 *puVar19;
  size_t sVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  ulong uVar23;
  undefined8 uVar24;
  ulong *puVar25;
  ulong uVar26;
  undefined8 uVar27;
  void *pvVar28;
  code *pcVar29;
  undefined8 *puVar30;
  ulong *puVar31;
  uint *puVar32;
  ulong uVar33;
  undefined8 *puVar34;
  long lVar35;
  void *pvVar36;
  undefined8 uVar37;
  uint uVar38;
  undefined8 *puVar39;
  ulong uVar40;
  long lVar41;
  uint uVar42;
  ulong uVar43;
  long lVar44;
  ulong uVar45;
  long lVar46;
  undefined8 uVar47;
  size_t local_100;
  
  uVar24 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar24;
  puVar34 = (undefined8 *)((long)param_1 + 0x17U & 0xfffffffffffffff8);
  puVar30 = (undefined8 *)((long)param_2 + 0x17U & 0xfffffffffffffff8);
  uVar24 = *puVar30;
  *puVar34 = uVar24;
  *(undefined1 *)(puVar34 + 1) = *(undefined1 *)(puVar30 + 1);
  *(undefined1 *)((long)puVar34 + 9) = *(undefined1 *)((long)puVar30 + 9);
  *(undefined1 *)((long)puVar34 + 10) = *(undefined1 *)((long)puVar30 + 10);
  *(undefined1 *)((long)puVar34 + 0xb) = *(undefined1 *)((long)puVar30 + 0xb);
  uVar43 = puVar30[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar24);
  if (uVar43 < 0xffffffff) {
    uVar43 = puVar30[2];
    puVar34[3] = puVar30[3];
    puVar34[2] = uVar43;
  }
  else {
    uVar24 = puVar30[3];
    puVar34[2] = uVar43;
    puVar34[3] = uVar24;
    _swift_retain();
  }
  *(undefined1 *)(puVar34 + 4) = *(undefined1 *)(puVar30 + 4);
  uVar43 = puVar30[5];
  if (uVar43 < 0xffffffff) {
    uVar43 = puVar30[5];
    puVar34[6] = puVar30[6];
    puVar34[5] = uVar43;
  }
  else {
    uVar24 = puVar30[6];
    puVar34[5] = uVar43;
    puVar34[6] = uVar24;
    _swift_retain();
  }
  uVar43 = puVar30[7];
  if (uVar43 < 0xffffffff) {
    uVar43 = puVar30[7];
    puVar34[8] = puVar30[8];
    puVar34[7] = uVar43;
  }
  else {
    uVar24 = puVar30[8];
    puVar34[7] = uVar43;
    puVar34[8] = uVar24;
    _swift_retain();
  }
  puVar25 = puVar34 + 9;
  puVar31 = puVar30 + 9;
  if (*puVar31 < 0xffffffff) {
    uVar43 = *puVar31;
    puVar34[10] = puVar30[10];
    *puVar25 = uVar43;
  }
  else {
    uVar24 = puVar30[10];
    *puVar25 = *puVar31;
    puVar34[10] = uVar24;
    _swift_retain();
  }
  lVar35 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar43 = (ulong)*(byte *)(lVar35 + 0x50);
  uVar26 = (long)puVar25 + uVar43 + 0x10 & (uVar43 ^ 0xffffffffffffffff);
  uVar43 = (long)puVar31 + uVar43 + 0x10 & (uVar43 ^ 0xffffffffffffffff);
  (**(code **)(lVar35 + 0x10))(uVar26,uVar43);
  lVar35 = *(long *)(lVar35 + 0x40) + 7;
  puVar30 = (undefined8 *)(lVar35 + uVar26 & 0xfffffffffffffff8);
  puVar34 = (undefined8 *)(lVar35 + uVar43 & 0xfffffffffffffff8);
  uVar24 = *puVar34;
  *puVar30 = uVar24;
  puVar30[1] = puVar34[1];
  DVar9 = SwiftUI::DismissAction::typeMetadataAccessor();
  lVar41 = *(long *)(DVar9.unknown + -8);
  uVar43 = (ulong)*(uint *)(lVar41 + 0x50) & 0xf8;
  lVar35 = uVar43 + 0x17;
  uVar43 = (uVar43 ^ 0xffffffffffffffff) & 0xfffffffffffffff8;
  puVar30 = (undefined8 *)(lVar35 + (long)puVar30 & uVar43);
  puVar32 = (uint *)(lVar35 + (long)puVar34 & uVar43);
  uVar43 = *(ulong *)(lVar41 + 0x40);
  if (uVar43 < 9) {
    uVar43 = 8;
  }
  bVar5 = *(byte *)((long)puVar32 + uVar43);
  uVar42 = (uint)bVar5;
  _swift_retain(uVar24);
  if (bVar5 < 2) {
LAB_1003cabe4:
    if (uVar42 != 1) goto LAB_1003cac2c;
LAB_1003cabec:
    (**(code **)(lVar41 + 0x10))(puVar30,puVar32,DVar9.unknown);
    uVar13 = 1;
  }
  else {
    uVar38 = (uint)uVar43;
    uVar4 = 4;
    if (uVar38 < 4) {
      uVar4 = uVar38;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) goto LAB_1003cabe4;
      uVar42 = (uint)(byte)*puVar32;
    }
    else if (uVar4 == 2) {
      uVar42 = (uint)(ushort)*puVar32;
    }
    else if (uVar4 == 3) {
      uVar42 = (uint)(uint3)*puVar32;
    }
    else {
      uVar42 = *puVar32;
    }
    if (3 < uVar38) {
      uVar42 = uVar42 + 2;
      goto LAB_1003cabe4;
    }
    if ((uVar42 | bVar5 - 2 << (ulong)((uVar38 & 3) << 3)) == 0xffffffff) goto LAB_1003cabec;
LAB_1003cac2c:
    *puVar30 = *(undefined8 *)puVar32;
    _swift_retain();
    uVar13 = 0;
  }
  *(undefined1 *)((long)puVar30 + uVar43) = uVar13;
  puVar39 = (undefined8 *)((long)puVar30 + uVar43 + 8 & 0xfffffffffffffff8);
  puVar34 = (undefined8 *)((ulong)((long)puVar32 + uVar43 + 8) & 0xfffffffffffffff8);
  uVar24 = *puVar34;
  uVar13 = *(undefined1 *)(puVar34 + 1);
  FUN_100047ac4(uVar24,uVar13);
  *puVar39 = uVar24;
  *(undefined1 *)(puVar39 + 1) = uVar13;
  puVar14 = (undefined1 *)((long)puVar30 + uVar43 + 0x18 & 0xfffffffffffffff8);
  puVar19 = (undefined1 *)((ulong)((long)puVar32 + uVar43 + 0x18) & 0xfffffffffffffff8);
  *puVar14 = *puVar19;
  uVar24 = *(undefined8 *)(puVar19 + 8);
  *(undefined8 *)(puVar14 + 8) = uVar24;
  puVar14[0x10] = puVar19[0x10];
  uVar22 = *(undefined8 *)(puVar19 + 0x18);
  *(undefined8 *)(puVar14 + 0x18) = uVar22;
  *(undefined8 *)(puVar14 + 0x20) = *(undefined8 *)(puVar19 + 0x20);
  uVar47 = *(undefined8 *)(puVar19 + 0x28);
  *(undefined8 *)(puVar14 + 0x28) = uVar47;
  puVar14[0x30] = puVar19[0x30];
  uVar27 = *(undefined8 *)(puVar19 + 0x38);
  *(undefined8 *)(puVar14 + 0x38) = uVar27;
  UVar10 = Foundation::URL::typeMetadataAccessor();
  lVar44 = *(long *)(UVar10.unknown + -8);
  bVar5 = *(byte *)(lVar44 + 0x50);
  uVar40 = (ulong)bVar5;
  DVar11 = Foundation::Date::typeMetadataAccessor();
  lVar41 = *(long *)(DVar11.unknown + -8);
  uVar26 = (ulong)*(byte *)(lVar41 + 0x50);
  uVar43 = (ulong)(bVar5 | *(byte *)(lVar41 + 0x50));
  uVar23 = uVar43 | 7;
  lVar35 = uVar43 + 0x10;
  puVar30 = (undefined8 *)((ulong)(puVar14 + 0x30 + lVar35) & (uVar23 ^ 0xffffffffffffffff));
  puVar34 = (undefined8 *)((ulong)(puVar19 + 0x30 + lVar35) & (uVar23 ^ 0xffffffffffffffff));
  uVar4 = *(uint *)(lVar44 + 0x54);
  uVar42 = 0;
  if (uVar4 != 0) {
    uVar42 = uVar4 - 1;
  }
  iVar8 = *(int *)(lVar41 + 0x54);
  uVar38 = 0;
  if (iVar8 != 0) {
    uVar38 = iVar8 - 1;
  }
  uVar3 = uVar4;
  if (uVar4 <= uVar38) {
    uVar3 = uVar38;
  }
  uVar38 = uVar3;
  if (uVar3 < 0x80000000) {
    uVar38 = 0x7fffffff;
  }
  uVar33 = ~uVar40;
  uVar43 = uVar40 + 0x10;
  sVar20 = *(size_t *)(lVar44 + 0x40);
  lVar35 = sVar20 + uVar40;
  uVar15 = ~uVar26;
  sVar16 = *(size_t *)(lVar41 + 0x40);
  _swift_retain(uVar24);
  _swift_retain(uVar22);
  _swift_retain(uVar47);
  _swift_retain(uVar27);
  if ((int)uVar3 < 0) {
    uVar17 = uVar43 + (long)puVar34 & uVar33;
    if (uVar4 == uVar38) {
      (**(code **)(lVar44 + 0x30))(uVar17,uVar4,UVar10.unknown);
      iVar7 = (int)uVar17;
    }
    else {
      uVar17 = lVar35 + uVar17 & uVar33;
      if (uVar42 == uVar38) {
        (**(code **)(lVar44 + 0x30))(uVar17,uVar4,UVar10.unknown);
        iVar6 = (int)uVar17;
      }
      else {
        sVar1 = sVar20;
        if (uVar4 == 0) {
          sVar1 = sVar20 + 1;
        }
        uVar17 = uVar26 + (uVar17 + sVar1 + 7 & 0xfffffffffffffff8) + 0x29 & uVar15;
        (**(code **)(lVar41 + 0x30))(uVar17,iVar8,DVar11.unknown);
        iVar6 = (int)uVar17;
      }
      iVar7 = 0;
      if (iVar6 != 0) {
        iVar7 = iVar6 + -1;
      }
    }
  }
  else {
    uVar17 = puVar34[1];
    if (0xfffffffe < uVar17) {
      uVar17 = 0xffffffff;
    }
    iVar7 = (int)uVar17 + 1;
  }
  uVar40 = lVar35 + (uVar43 & (uVar40 ^ 0xffffffffffffffff)) & (uVar40 ^ 0xffffffffffffffff);
  local_100 = sVar20;
  if (iVar7 == 0) {
    *puVar30 = *puVar34;
    puVar30[1] = puVar34[1];
    uVar17 = uVar43 + (long)puVar30 & uVar33;
    uVar45 = uVar43 + (long)puVar34 & uVar33;
    pcVar29 = *(code **)(lVar44 + 0x10);
    _swift_bridgeObjectRetain();
    (*pcVar29)(uVar17,uVar45,UVar10.unknown);
    pvVar28 = (void *)(lVar35 + uVar17 & uVar33);
    pvVar36 = (void *)(lVar35 + uVar45 & uVar33);
    pvVar12 = pvVar36;
    (**(code **)(lVar44 + 0x30))(pvVar36,1,UVar10.unknown);
    if ((int)pvVar12 == 0) {
      (*pcVar29)(pvVar28,pvVar36,UVar10.unknown);
      (**(code **)(lVar44 + 0x38))(pvVar28,0,1,UVar10.unknown);
      if (uVar4 == 0) {
        local_100 = sVar20 + 1;
      }
    }
    else {
      if (uVar4 == 0) {
        local_100 = sVar20 + 1;
      }
      _memcpy(pvVar28,pvVar36,local_100);
    }
    lVar18 = local_100 + 7;
    puVar39 = (undefined8 *)(lVar18 + (long)pvVar28 & 0xfffffffffffffff8);
    puVar21 = (undefined8 *)(lVar18 + (long)pvVar36 & 0xfffffffffffffff8);
    *puVar39 = *puVar21;
    puVar39[1] = puVar21[1];
    puVar39[2] = puVar21[2];
    *(undefined1 *)(puVar39 + 3) = *(undefined1 *)(puVar21 + 3);
    uVar24 = puVar21[4];
    *(undefined1 *)(puVar39 + 5) = *(undefined1 *)(puVar21 + 5);
    puVar39[4] = uVar24;
    pvVar28 = (void *)(uVar26 + 9 + (long)(puVar39 + 4) & uVar15);
    pvVar36 = (void *)(uVar26 + 9 + (long)(puVar21 + 4) & uVar15);
    pcVar29 = *(code **)(lVar41 + 0x30);
    _swift_bridgeObjectRetain();
    pvVar12 = pvVar36;
    (*pcVar29)(pvVar36,1,DVar11.unknown);
    if ((int)pvVar12 == 0) {
      (**(code **)(lVar41 + 0x10))(pvVar28,pvVar36,DVar11.unknown);
      (**(code **)(lVar41 + 0x38))(pvVar28,0,1,DVar11.unknown);
      if (iVar8 == 0) {
        sVar16 = sVar16 + 1;
      }
    }
    else {
      if (iVar8 == 0) {
        sVar16 = sVar16 + 1;
      }
      _memcpy(pvVar28,pvVar36,sVar16);
    }
    puVar39 = (undefined8 *)((long)pvVar28 + sVar16 + 7 & 0xfffffffffffffff8);
    puVar21 = (undefined8 *)((long)pvVar36 + sVar16 + 7 & 0xfffffffffffffff8);
    uVar24 = *puVar21;
    *(undefined1 *)(puVar39 + 1) = *(undefined1 *)(puVar21 + 1);
    *puVar39 = uVar24;
    puVar39 = (undefined8 *)((long)pvVar28 + sVar16 + 0x17 & 0xfffffffffffffff8);
    puVar21 = (undefined8 *)((long)pvVar36 + sVar16 + 0x17 & 0xfffffffffffffff8);
    *puVar39 = *puVar21;
    puVar39[1] = puVar21[1];
    uVar24 = puVar21[2];
    *(undefined1 *)(puVar39 + 3) = *(undefined1 *)(puVar21 + 3);
    puVar39[2] = uVar24;
    puVar39[4] = puVar21[4];
    uVar24 = puVar21[5];
    puVar39[5] = uVar24;
    *(undefined1 *)(puVar39 + 6) = *(undefined1 *)(puVar21 + 6);
    uVar22 = puVar21[7];
    puVar39[7] = uVar22;
    *(undefined1 *)(puVar39 + 8) = *(undefined1 *)(puVar21 + 8);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar24);
    _swift_bridgeObjectRetain(uVar22);
  }
  else {
    lVar18 = 0x17;
    sVar1 = sVar16;
    if (iVar8 == 0) {
      lVar18 = 0x18;
      sVar1 = sVar16 + 1;
    }
    lVar2 = 7;
    if (uVar4 == 0) {
      lVar2 = 8;
    }
    if (uVar4 == 0) {
      local_100 = sVar20 + 1;
    }
    _memcpy(puVar30,puVar34,
            (lVar18 + sVar16 +
             (uVar26 + (lVar2 + sVar20 + uVar40 & 0xfffffffffffffff8) + 0x29 & uVar15) &
            0xfffffffffffffff8) + 0x41);
    lVar18 = local_100 + 7;
    sVar16 = sVar1;
  }
  lVar46 = uVar26 + 9;
  uVar40 = sVar16 + (lVar46 + (lVar18 + uVar40 & 0xfffffffffffffff8) + 0x20 & uVar15) + 0x17 &
           0xfffffffffffffff8;
  *(undefined8 *)((long)puVar30 + uVar40 + 0x48) = *(undefined8 *)((long)puVar34 + uVar40 + 0x48);
  lVar2 = uVar40 + 0x50;
  puVar30 = (undefined8 *)((long)puVar30 + lVar2 + uVar23 & ~uVar23);
  puVar34 = (undefined8 *)((long)puVar34 + lVar2 + uVar23 & ~uVar23);
  _swift_retain();
  if ((int)uVar3 < 0) {
    uVar23 = uVar43 + (long)puVar34 & uVar33;
    if (uVar4 == uVar38) {
      (**(code **)(lVar44 + 0x30))(uVar23,uVar4,UVar10.unknown);
      iVar6 = (int)uVar23;
    }
    else {
      uVar23 = lVar35 + uVar23 & uVar33;
      if (uVar42 == uVar38) {
        (**(code **)(lVar44 + 0x30))(uVar23,uVar4,UVar10.unknown);
        iVar8 = (int)uVar23;
      }
      else {
        if (uVar4 == 0) {
          sVar20 = sVar20 + 1;
        }
        uVar26 = uVar26 + (uVar23 + sVar20 + 7 & 0xfffffffffffffff8) + 0x29 & uVar15;
        (**(code **)(lVar41 + 0x30))(uVar26,iVar8,DVar11.unknown);
        iVar8 = (int)uVar26;
      }
      iVar6 = 0;
      if (iVar8 != 0) {
        iVar6 = iVar8 + -1;
      }
    }
    if (iVar6 != 0) goto LAB_1003cb2e8;
  }
  else {
    uVar26 = puVar34[1];
    if (0xfffffffe < uVar26) {
      uVar26 = 0xffffffff;
    }
    if ((int)uVar26 != -1) {
LAB_1003cb2e8:
      _memcpy(puVar30,puVar34,uVar40 + 0x41);
      goto LAB_1003cb5cc;
    }
  }
  *puVar30 = *puVar34;
  puVar30[1] = puVar34[1];
  uVar26 = uVar43 + (long)puVar30 & uVar33;
  uVar43 = uVar43 + (long)puVar34 & uVar33;
  pcVar29 = *(code **)(lVar44 + 0x10);
  _swift_bridgeObjectRetain();
  (*pcVar29)(uVar26,uVar43,UVar10.unknown);
  pvVar28 = (void *)(lVar35 + uVar26 & uVar33);
  pvVar36 = (void *)(lVar35 + uVar43 & uVar33);
  pvVar12 = pvVar36;
  (**(code **)(lVar44 + 0x30))(pvVar36,1,UVar10.unknown);
  if ((int)pvVar12 == 0) {
    (*pcVar29)(pvVar28,pvVar36,UVar10.unknown);
    (**(code **)(lVar44 + 0x38))(pvVar28,0,1,UVar10.unknown);
  }
  else {
    _memcpy(pvVar28,pvVar36,local_100);
  }
  puVar39 = (undefined8 *)(lVar18 + (long)pvVar28 & 0xfffffffffffffff8);
  puVar21 = (undefined8 *)(lVar18 + (long)pvVar36 & 0xfffffffffffffff8);
  *puVar39 = *puVar21;
  puVar39[1] = puVar21[1];
  puVar39[2] = puVar21[2];
  *(undefined1 *)(puVar39 + 3) = *(undefined1 *)(puVar21 + 3);
  uVar24 = puVar21[4];
  *(undefined1 *)(puVar39 + 5) = *(undefined1 *)(puVar21 + 5);
  puVar39[4] = uVar24;
  pvVar28 = (void *)(lVar46 + (long)(puVar39 + 4) & uVar15);
  pvVar36 = (void *)(lVar46 + (long)(puVar21 + 4) & uVar15);
  pcVar29 = *(code **)(lVar41 + 0x30);
  _swift_bridgeObjectRetain();
  pvVar12 = pvVar36;
  (*pcVar29)(pvVar36,1,DVar11.unknown);
  if ((int)pvVar12 == 0) {
    (**(code **)(lVar41 + 0x10))(pvVar28,pvVar36,DVar11.unknown);
    (**(code **)(lVar41 + 0x38))(pvVar28,0,1,DVar11.unknown);
  }
  else {
    _memcpy(pvVar28,pvVar36,sVar16);
  }
  puVar39 = (undefined8 *)((long)pvVar28 + sVar16 + 7 & 0xfffffffffffffff8);
  puVar21 = (undefined8 *)((long)pvVar36 + sVar16 + 7 & 0xfffffffffffffff8);
  uVar24 = *puVar21;
  *(undefined1 *)(puVar39 + 1) = *(undefined1 *)(puVar21 + 1);
  *puVar39 = uVar24;
  puVar39 = (undefined8 *)((long)pvVar28 + sVar16 + 0x17 & 0xfffffffffffffff8);
  puVar21 = (undefined8 *)((long)pvVar36 + sVar16 + 0x17 & 0xfffffffffffffff8);
  *puVar39 = *puVar21;
  puVar39[1] = puVar21[1];
  uVar24 = puVar21[2];
  *(undefined1 *)(puVar39 + 3) = *(undefined1 *)(puVar21 + 3);
  puVar39[2] = uVar24;
  puVar39[4] = puVar21[4];
  uVar24 = puVar21[5];
  puVar39[5] = uVar24;
  *(undefined1 *)(puVar39 + 6) = *(undefined1 *)(puVar21 + 6);
  uVar22 = puVar21[7];
  puVar39[7] = uVar22;
  *(undefined1 *)(puVar39 + 8) = *(undefined1 *)(puVar21 + 8);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar24);
  _swift_bridgeObjectRetain(uVar22);
LAB_1003cb5cc:
  *(undefined8 *)(uVar40 + 0x48 + (long)puVar30) = *(undefined8 *)(uVar40 + 0x48 + (long)puVar34);
  puVar30 = (undefined8 *)((long)puVar30 + lVar2);
  puVar34 = (undefined8 *)((long)puVar34 + lVar2);
  uVar22 = *puVar34;
  *puVar30 = uVar22;
  uVar27 = puVar34[1];
  puVar30[1] = uVar27;
  puVar14 = (undefined1 *)((long)puVar30 + 0x17U & 0xfffffffffffffff8);
  puVar19 = (undefined1 *)((long)puVar34 + 0x17U & 0xfffffffffffffff8);
  *puVar14 = *puVar19;
  uVar47 = *(undefined8 *)(puVar19 + 8);
  *(undefined8 *)(puVar14 + 8) = uVar47;
  puVar14[0x10] = puVar19[0x10];
  uVar37 = *(undefined8 *)(puVar19 + 0x18);
  *(undefined8 *)(puVar14 + 0x18) = uVar37;
  uVar24 = *(undefined8 *)(puVar19 + 0x20);
  puVar14[0x28] = puVar19[0x28];
  *(undefined8 *)(puVar14 + 0x20) = uVar24;
  uVar24 = *(undefined8 *)(puVar19 + 0x30);
  *(undefined8 *)(puVar14 + 0x30) = uVar24;
  _swift_retain();
  _swift_retain(uVar22);
  _swift_retain(uVar27);
  _swift_retain(uVar47);
  _swift_retain(uVar37);
  _swift_retain(uVar24);
  return param_1;
}

