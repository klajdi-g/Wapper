// rea decompile_all
// name: FUN_1003cb6ac
// address: 0x1003cb6ac
// body: available
// range: 0x1003cb6ac-0x1003cd1ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1003cb6ac(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  size_t sVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  DismissAction DVar11;
  URL UVar12;
  Date DVar13;
  void *pvVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  size_t sVar19;
  uint uVar20;
  undefined8 uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  void *pvVar25;
  void *pvVar26;
  uint *puVar27;
  undefined1 *puVar28;
  size_t sVar29;
  undefined8 *puVar30;
  undefined8 uVar31;
  undefined8 *puVar32;
  uint *puVar33;
  undefined1 *puVar34;
  undefined8 *puVar35;
  undefined8 *puVar36;
  ulong *puVar37;
  ulong uVar38;
  long lVar39;
  void *pvVar40;
  ulong *puVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  ulong uVar45;
  code *pcVar46;
  code *pcVar47;
  long lVar48;
  size_t local_118;
  
  *param_1 = *param_2;
  uVar31 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar31);
  puVar36 = (undefined8 *)((long)param_1 + 0x17U & 0xfffffffffffffff8);
  puVar32 = (undefined8 *)((long)param_2 + 0x17U & 0xfffffffffffffff8);
  uVar31 = *puVar36;
  *puVar36 = *puVar32;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar31);
  *(undefined1 *)(puVar36 + 1) = *(undefined1 *)(puVar32 + 1);
  *(undefined1 *)((long)puVar36 + 9) = *(undefined1 *)((long)puVar32 + 9);
  *(undefined1 *)((long)puVar36 + 10) = *(undefined1 *)((long)puVar32 + 10);
  *(undefined1 *)((long)puVar36 + 0xb) = *(undefined1 *)((long)puVar32 + 0xb);
  puVar41 = puVar36 + 2;
  uVar15 = puVar32[2];
  if (*puVar41 < 0xffffffff) {
    if (uVar15 < 0xffffffff) goto LAB_1003cb7b4;
    uVar31 = puVar32[3];
    *puVar41 = uVar15;
    puVar36[3] = uVar31;
    _swift_retain();
  }
  else if (uVar15 < 0xffffffff) {
    _swift_release(puVar36[3]);
LAB_1003cb7b4:
    uVar15 = puVar32[2];
    puVar36[3] = puVar32[3];
    *puVar41 = uVar15;
  }
  else {
    uVar31 = puVar32[3];
    uVar21 = puVar36[3];
    *puVar41 = uVar15;
    puVar36[3] = uVar31;
    _swift_retain();
    _swift_release(uVar21);
  }
  *(undefined1 *)(puVar36 + 4) = *(undefined1 *)(puVar32 + 4);
  puVar41 = puVar36 + 5;
  uVar15 = puVar32[5];
  if (*puVar41 < 0xffffffff) {
    if (uVar15 < 0xffffffff) goto LAB_1003cb834;
    uVar31 = puVar32[6];
    *puVar41 = uVar15;
    puVar36[6] = uVar31;
    _swift_retain();
  }
  else if (uVar15 < 0xffffffff) {
    _swift_release(puVar36[6]);
LAB_1003cb834:
    uVar15 = puVar32[5];
    puVar36[6] = puVar32[6];
    *puVar41 = uVar15;
  }
  else {
    uVar31 = puVar32[6];
    uVar21 = puVar36[6];
    *puVar41 = uVar15;
    puVar36[6] = uVar31;
    _swift_retain();
    _swift_release(uVar21);
  }
  puVar41 = puVar36 + 7;
  uVar15 = puVar32[7];
  if (*puVar41 < 0xffffffff) {
    if (uVar15 < 0xffffffff) goto LAB_1003cb8ac;
    uVar31 = puVar32[8];
    *puVar41 = uVar15;
    puVar36[8] = uVar31;
    _swift_retain();
  }
  else if (uVar15 < 0xffffffff) {
    _swift_release(puVar36[8]);
LAB_1003cb8ac:
    uVar15 = puVar32[7];
    puVar36[8] = puVar32[8];
    *puVar41 = uVar15;
  }
  else {
    uVar31 = puVar32[8];
    uVar21 = puVar36[8];
    *puVar41 = uVar15;
    puVar36[8] = uVar31;
    _swift_retain();
    _swift_release(uVar21);
  }
  puVar41 = puVar36 + 9;
  puVar37 = puVar32 + 9;
  uVar15 = *puVar37;
  if (*puVar41 < 0xffffffff) {
    if (uVar15 < 0xffffffff) goto LAB_1003cb924;
    uVar31 = puVar32[10];
    *puVar41 = uVar15;
    puVar36[10] = uVar31;
    _swift_retain();
  }
  else if (uVar15 < 0xffffffff) {
    _swift_release(puVar36[10]);
LAB_1003cb924:
    uVar15 = *puVar37;
    puVar36[10] = puVar32[10];
    *puVar41 = uVar15;
  }
  else {
    uVar31 = puVar32[10];
    uVar21 = puVar36[10];
    *puVar41 = uVar15;
    puVar36[10] = uVar31;
    _swift_retain();
    _swift_release(uVar21);
  }
  lVar42 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar15 = (ulong)*(byte *)(lVar42 + 0x50);
  uVar22 = (long)puVar41 + uVar15 + 0x10 & (uVar15 ^ 0xffffffffffffffff);
  uVar15 = (long)puVar37 + uVar15 + 0x10 & (uVar15 ^ 0xffffffffffffffff);
  (**(code **)(lVar42 + 0x18))(uVar22,uVar15);
  lVar42 = *(long *)(lVar42 + 0x40) + 7;
  puVar32 = (undefined8 *)(lVar42 + uVar22 & 0xfffffffffffffff8);
  puVar36 = (undefined8 *)(lVar42 + uVar15 & 0xfffffffffffffff8);
  uVar31 = *puVar32;
  *puVar32 = *puVar36;
  _swift_retain();
  _swift_release(uVar31);
  puVar32[1] = puVar36[1];
  DVar11 = SwiftUI::DismissAction::typeMetadataAccessor();
  lVar43 = *(long *)(DVar11.unknown + -8);
  uVar15 = (ulong)*(uint *)(lVar43 + 0x50) & 0xf8;
  lVar42 = uVar15 + 0x17;
  uVar15 = (uVar15 ^ 0xffffffffffffffff) & 0xfffffffffffffff8;
  puVar27 = (uint *)(lVar42 + (long)puVar32 & uVar15);
  puVar33 = (uint *)(lVar42 + (long)puVar36 & uVar15);
  uVar15 = *(ulong *)(lVar43 + 0x40);
  if (uVar15 < 9) {
    uVar15 = 8;
  }
  if (puVar27 != puVar33) {
    bVar7 = *(byte *)((long)puVar27 + uVar15);
    uVar16 = (uint)bVar7;
    uVar20 = (uint)uVar15;
    if (bVar7 < 2) {
LAB_1003cba50:
      if (uVar16 == 1) goto LAB_1003cba58;
LAB_1003cba90:
      _swift_release(*(undefined8 *)puVar27);
    }
    else {
      uVar4 = 4;
      if (uVar20 < 4) {
        uVar4 = uVar20;
      }
      if ((int)uVar4 < 2) {
        if (uVar4 == 0) goto LAB_1003cba50;
        uVar16 = (uint)(byte)*puVar27;
      }
      else if (uVar4 == 2) {
        uVar16 = (uint)(ushort)*puVar27;
      }
      else if (uVar4 == 3) {
        uVar16 = (uint)(uint3)*puVar27;
      }
      else {
        uVar16 = *puVar27;
      }
      if (3 < uVar20) {
        uVar16 = uVar16 + 2;
        goto LAB_1003cba50;
      }
      if ((uVar16 | bVar7 - 2 << (ulong)((uVar20 & 3) << 3)) != 0xffffffff) goto LAB_1003cba90;
LAB_1003cba58:
      (**(code **)(lVar43 + 8))(puVar27,DVar11.unknown);
    }
    bVar7 = *(byte *)((long)puVar33 + uVar15);
    uVar16 = (uint)bVar7;
    if (bVar7 < 2) {
LAB_1003cbb04:
      if (uVar16 == 1) {
LAB_1003cbb0c:
        (**(code **)(lVar43 + 0x10))(puVar27,puVar33,DVar11.unknown);
        *(byte *)((long)puVar27 + uVar15) = 1;
        goto LAB_1003cbb60;
      }
    }
    else {
      uVar4 = 4;
      if (uVar20 < 4) {
        uVar4 = uVar20;
      }
      if ((int)uVar4 < 2) {
        if (uVar4 == 0) goto LAB_1003cbb04;
        uVar16 = (uint)(byte)*puVar33;
      }
      else if (uVar4 == 2) {
        uVar16 = (uint)(ushort)*puVar33;
      }
      else if (uVar4 == 3) {
        uVar16 = (uint)(uint3)*puVar33;
      }
      else {
        uVar16 = *puVar33;
      }
      if (3 < uVar20) {
        uVar16 = uVar16 + 2;
        goto LAB_1003cbb04;
      }
      if ((uVar16 | bVar7 - 2 << (ulong)((uVar20 & 3) << 3)) == 0xffffffff) goto LAB_1003cbb0c;
    }
    *(undefined8 *)puVar27 = *(undefined8 *)puVar33;
    *(byte *)((long)puVar27 + uVar15) = 0;
    _swift_retain();
  }
LAB_1003cbb60:
  puVar36 = (undefined8 *)((ulong)((long)puVar27 + uVar15 + 8) & 0xfffffffffffffff8);
  puVar32 = (undefined8 *)((ulong)((long)puVar33 + uVar15 + 8) & 0xfffffffffffffff8);
  uVar21 = *puVar32;
  uVar5 = *(undefined1 *)(puVar32 + 1);
  FUN_100047ac4(uVar21,uVar5);
  uVar31 = *puVar36;
  *puVar36 = uVar21;
  uVar6 = *(undefined1 *)(puVar36 + 1);
  *(undefined1 *)(puVar36 + 1) = uVar5;
  FUN_100047b2c(uVar31,uVar6);
  puVar28 = (undefined1 *)((ulong)((long)puVar27 + uVar15 + 0x18) & 0xfffffffffffffff8);
  puVar34 = (undefined1 *)((ulong)((long)puVar33 + uVar15 + 0x18) & 0xfffffffffffffff8);
  *puVar28 = *puVar34;
  uVar31 = *(undefined8 *)(puVar28 + 8);
  *(undefined8 *)(puVar28 + 8) = *(undefined8 *)(puVar34 + 8);
  _swift_retain();
  _swift_release(uVar31);
  puVar28[0x10] = puVar34[0x10];
  uVar31 = *(undefined8 *)(puVar28 + 0x18);
  *(undefined8 *)(puVar28 + 0x18) = *(undefined8 *)(puVar34 + 0x18);
  _swift_retain();
  _swift_release(uVar31);
  *(undefined8 *)(puVar28 + 0x20) = *(undefined8 *)(puVar34 + 0x20);
  uVar31 = *(undefined8 *)(puVar28 + 0x28);
  *(undefined8 *)(puVar28 + 0x28) = *(undefined8 *)(puVar34 + 0x28);
  _swift_retain();
  _swift_release(uVar31);
  puVar28[0x30] = puVar34[0x30];
  uVar31 = *(undefined8 *)(puVar28 + 0x38);
  *(undefined8 *)(puVar28 + 0x38) = *(undefined8 *)(puVar34 + 0x38);
  _swift_retain();
  _swift_release(uVar31);
  UVar12 = Foundation::URL::typeMetadataAccessor();
  lVar43 = *(long *)(UVar12.unknown + -8);
  bVar7 = *(byte *)(lVar43 + 0x50);
  uVar23 = (ulong)bVar7;
  DVar13 = Foundation::Date::typeMetadataAccessor();
  lVar48 = *(long *)(DVar13.unknown + -8);
  uVar22 = (ulong)*(byte *)(lVar48 + 0x50);
  uVar15 = (ulong)(bVar7 | *(byte *)(lVar48 + 0x50));
  uVar38 = uVar15 | 7;
  lVar42 = uVar15 + 0x10;
  puVar36 = (undefined8 *)((ulong)(puVar28 + 0x30 + lVar42) & (uVar38 ^ 0xffffffffffffffff));
  puVar32 = (undefined8 *)((ulong)(puVar34 + 0x30 + lVar42) & (uVar38 ^ 0xffffffffffffffff));
  uVar20 = *(uint *)(lVar43 + 0x54);
  uVar16 = 0;
  if (uVar20 != 0) {
    uVar16 = uVar20 - 1;
  }
  iVar10 = *(int *)(lVar48 + 0x54);
  uVar4 = 0;
  if (iVar10 != 0) {
    uVar4 = iVar10 - 1;
  }
  uVar3 = uVar20;
  if (uVar20 <= uVar4) {
    uVar3 = uVar4;
  }
  uVar4 = uVar3;
  if (uVar3 < 0x80000000) {
    uVar4 = 0x7fffffff;
  }
  uVar17 = ~uVar23;
  uVar15 = uVar23 + 0x10;
  sVar19 = *(size_t *)(lVar43 + 0x40);
  lVar42 = sVar19 + uVar23;
  uVar23 = lVar42 + (uVar15 & (uVar23 ^ 0xffffffffffffffff)) & (uVar23 ^ 0xffffffffffffffff);
  uVar45 = ~uVar22;
  sVar29 = *(size_t *)(lVar48 + 0x40);
  local_118 = sVar19;
  if ((int)uVar3 < 0) {
    uVar18 = uVar15 + (long)puVar36 & uVar17;
    if (uVar20 == uVar4) {
      (**(code **)(lVar43 + 0x30))(uVar18,uVar20,UVar12.unknown);
      iVar8 = (int)uVar18;
    }
    else {
      uVar18 = lVar42 + uVar18 & uVar17;
      if (uVar16 == uVar4) {
        (**(code **)(lVar43 + 0x30))(uVar18,uVar20,UVar12.unknown);
        iVar9 = (int)uVar18;
      }
      else {
        sVar2 = sVar19;
        if (uVar20 == 0) {
          sVar2 = sVar19 + 1;
        }
        uVar18 = uVar22 + (uVar18 + sVar2 + 7 & 0xfffffffffffffff8) + 0x29 & uVar45;
        (**(code **)(lVar48 + 0x30))(uVar18,iVar10,DVar13.unknown);
        iVar9 = (int)uVar18;
      }
      iVar8 = 0;
      if (iVar9 != 0) {
        iVar8 = iVar9 + -1;
      }
    }
    uVar18 = uVar15 + (long)puVar32 & uVar17;
    if (iVar8 == 0) {
      if (uVar20 != uVar4) {
        uVar18 = lVar42 + uVar18 & uVar17;
        if (uVar16 == uVar4) {
          (**(code **)(lVar43 + 0x30))(uVar18,uVar20,UVar12.unknown);
          iVar9 = (int)uVar18;
        }
        else {
          sVar2 = sVar19;
          if (uVar20 == 0) {
            sVar2 = sVar19 + 1;
          }
          uVar18 = uVar22 + (uVar18 + sVar2 + 7 & 0xfffffffffffffff8) + 0x29 & uVar45;
          (**(code **)(lVar48 + 0x30))(uVar18,iVar10,DVar13.unknown);
          iVar9 = (int)uVar18;
        }
        iVar8 = 0;
        if (iVar9 != 0) {
          iVar8 = iVar9 + -1;
        }
      }
      else {
        (**(code **)(lVar43 + 0x30))(uVar18,uVar20,UVar12.unknown);
        iVar8 = (int)uVar18;
      }
      goto LAB_1003cbd64;
    }
    if (uVar20 == uVar4) {
      (**(code **)(lVar43 + 0x30))(uVar18,uVar20,UVar12.unknown);
      iVar8 = (int)uVar18;
      goto LAB_1003cc060;
    }
    uVar18 = lVar42 + uVar18 & uVar17;
    if (uVar16 == uVar4) {
      (**(code **)(lVar43 + 0x30))(uVar18,uVar20,UVar12.unknown);
      iVar9 = (int)uVar18;
    }
    else {
      sVar2 = sVar19;
      if (uVar20 == 0) {
        sVar2 = sVar19 + 1;
      }
      uVar18 = uVar22 + (uVar18 + sVar2 + 7 & 0xfffffffffffffff8) + 0x29 & uVar45;
      (**(code **)(lVar48 + 0x30))(uVar18,iVar10,DVar13.unknown);
      iVar9 = (int)uVar18;
    }
    iVar8 = 0;
    if (iVar9 != 0) {
      iVar8 = iVar9 + -1;
    }
    if (iVar8 == 0) goto LAB_1003cc330;
LAB_1003cc064:
    lVar39 = 0x17;
    sVar2 = sVar29;
    if (iVar10 == 0) {
      lVar39 = 0x18;
      sVar2 = sVar29 + 1;
    }
    lVar1 = 7;
    if (uVar20 == 0) {
      lVar1 = 8;
    }
    if (uVar20 == 0) {
      local_118 = sVar19 + 1;
    }
    _memcpy(puVar36,puVar32,
            (lVar39 + sVar29 +
             (uVar22 + (lVar1 + sVar19 + uVar23 & 0xfffffffffffffff8) + 0x29 & uVar45) &
            0xfffffffffffffff8) + 0x41);
    lVar39 = local_118 + 7;
    sVar29 = sVar2;
  }
  else {
    uVar18 = puVar32[1];
    if (0xfffffffe < uVar18) {
      uVar18 = 0xffffffff;
    }
    iVar8 = (int)uVar18 + 1;
    if ((ulong)puVar36[1] < 0xffffffff) {
LAB_1003cc060:
      if (iVar8 != 0) goto LAB_1003cc064;
LAB_1003cc330:
      *puVar36 = *puVar32;
      puVar36[1] = puVar32[1];
      uVar18 = uVar15 + (long)puVar36 & uVar17;
      uVar24 = uVar15 + (long)puVar32 & uVar17;
      pcVar46 = *(code **)(lVar43 + 0x10);
      _swift_bridgeObjectRetain();
      (*pcVar46)(uVar18,uVar24,UVar12.unknown);
      pvVar26 = (void *)(lVar42 + uVar18 & uVar17);
      pvVar25 = (void *)(lVar42 + uVar24 & uVar17);
      pvVar14 = pvVar25;
      (**(code **)(lVar43 + 0x30))(pvVar25,1,UVar12.unknown);
      if ((int)pvVar14 == 0) {
        (*pcVar46)(pvVar26,pvVar25,UVar12.unknown);
        (**(code **)(lVar43 + 0x38))(pvVar26,0,1,UVar12.unknown);
        if (uVar20 == 0) {
          local_118 = sVar19 + 1;
        }
      }
      else {
        if (uVar20 == 0) {
          local_118 = sVar19 + 1;
        }
        _memcpy(pvVar26,pvVar25,local_118);
      }
      lVar39 = local_118 + 7;
      puVar30 = (undefined8 *)(lVar39 + (long)pvVar26 & 0xfffffffffffffff8);
      puVar35 = (undefined8 *)(lVar39 + (long)pvVar25 & 0xfffffffffffffff8);
      *puVar30 = *puVar35;
      puVar30[1] = puVar35[1];
      puVar30[2] = puVar35[2];
      *(undefined1 *)(puVar30 + 3) = *(undefined1 *)(puVar35 + 3);
      uVar31 = puVar35[4];
      *(undefined1 *)(puVar30 + 5) = *(undefined1 *)(puVar35 + 5);
      puVar30[4] = uVar31;
      pvVar26 = (void *)(uVar22 + 9 + (long)(puVar30 + 4) & uVar45);
      pvVar25 = (void *)(uVar22 + 9 + (long)(puVar35 + 4) & uVar45);
      pcVar46 = *(code **)(lVar48 + 0x30);
      _swift_bridgeObjectRetain();
      pvVar14 = pvVar25;
      (*pcVar46)(pvVar25,1,DVar13.unknown);
      if ((int)pvVar14 == 0) {
        (**(code **)(lVar48 + 0x10))(pvVar26,pvVar25,DVar13.unknown);
        (**(code **)(lVar48 + 0x38))(pvVar26,0,1,DVar13.unknown);
        if (iVar10 == 0) {
          sVar29 = sVar29 + 1;
        }
      }
      else {
        if (iVar10 == 0) {
          sVar29 = sVar29 + 1;
        }
        _memcpy(pvVar26,pvVar25,sVar29);
      }
      puVar30 = (undefined8 *)((long)pvVar26 + sVar29 + 7 & 0xfffffffffffffff8);
      puVar35 = (undefined8 *)((long)pvVar25 + sVar29 + 7 & 0xfffffffffffffff8);
      uVar31 = *puVar35;
      *(undefined1 *)(puVar30 + 1) = *(undefined1 *)(puVar35 + 1);
      *puVar30 = uVar31;
      puVar30 = (undefined8 *)((long)pvVar26 + sVar29 + 0x17 & 0xfffffffffffffff8);
      puVar35 = (undefined8 *)((long)pvVar25 + sVar29 + 0x17 & 0xfffffffffffffff8);
      *puVar30 = *puVar35;
      puVar30[1] = puVar35[1];
      uVar31 = puVar35[2];
      *(undefined1 *)(puVar30 + 3) = *(undefined1 *)(puVar35 + 3);
      puVar30[2] = uVar31;
      puVar30[4] = puVar35[4];
      uVar31 = puVar35[5];
      puVar30[5] = uVar31;
      *(undefined1 *)(puVar30 + 6) = *(undefined1 *)(puVar35 + 6);
      uVar21 = puVar35[7];
      puVar30[7] = uVar21;
      *(undefined1 *)(puVar30 + 8) = *(undefined1 *)(puVar35 + 8);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar31);
      _swift_bridgeObjectRetain(uVar21);
    }
    else {
LAB_1003cbd64:
      if (iVar8 == 0) {
        *puVar36 = *puVar32;
        uVar31 = puVar36[1];
        puVar36[1] = puVar32[1];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRelease(uVar31);
        uVar18 = uVar15 + (long)puVar36 & uVar17;
        uVar24 = uVar15 + (long)puVar32 & uVar17;
        pcVar46 = *(code **)(lVar43 + 0x18);
        (*pcVar46)(uVar18,uVar24,UVar12.unknown);
        pvVar25 = (void *)(lVar42 + uVar18 & uVar17);
        pvVar40 = (void *)(lVar42 + uVar24 & uVar17);
        pcVar47 = *(code **)(lVar43 + 0x30);
        pvVar14 = pvVar25;
        (*pcVar47)(pvVar25,1,UVar12.unknown);
        pvVar26 = pvVar40;
        (*pcVar47)(pvVar40,1,UVar12.unknown);
        if ((int)pvVar14 == 0) {
          if ((int)pvVar26 != 0) {
            (**(code **)(lVar43 + 8))(pvVar25,UVar12.unknown);
            goto LAB_1003cc188;
          }
          (*pcVar46)(pvVar25,pvVar40,UVar12.unknown);
        }
        else if ((int)pvVar26 == 0) {
          (**(code **)(lVar43 + 0x10))(pvVar25,pvVar40,UVar12.unknown);
          (**(code **)(lVar43 + 0x38))(pvVar25,0,1,UVar12.unknown);
        }
        else {
LAB_1003cc188:
          sVar2 = sVar19;
          if (uVar20 == 0) {
            sVar2 = sVar19 + 1;
          }
          _memcpy(pvVar25,pvVar40,sVar2);
        }
        if (uVar20 == 0) {
          local_118 = sVar19 + 1;
        }
        lVar39 = local_118 + 7;
        puVar35 = (undefined8 *)(lVar39 + (long)pvVar25 & 0xfffffffffffffff8);
        puVar30 = (undefined8 *)(lVar39 + (long)pvVar40 & 0xfffffffffffffff8);
        *puVar35 = *puVar30;
        uVar31 = puVar35[1];
        puVar35[1] = puVar30[1];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRelease(uVar31);
        puVar35[2] = puVar30[2];
        *(undefined1 *)(puVar35 + 3) = *(undefined1 *)(puVar30 + 3);
        uVar31 = puVar30[4];
        *(undefined1 *)(puVar35 + 5) = *(undefined1 *)(puVar30 + 5);
        puVar35[4] = uVar31;
        pvVar40 = (void *)(uVar22 + 9 + (long)(puVar35 + 4) & uVar45);
        pvVar25 = (void *)(uVar22 + 9 + (long)(puVar30 + 4) & uVar45);
        pcVar46 = *(code **)(lVar48 + 0x30);
        pvVar14 = pvVar40;
        (*pcVar46)(pvVar40,1,DVar13.unknown);
        pvVar26 = pvVar25;
        (*pcVar46)(pvVar25,1,DVar13.unknown);
        if ((int)pvVar14 == 0) {
          if ((int)pvVar26 != 0) {
            (**(code **)(lVar48 + 8))(pvVar40,DVar13.unknown);
            goto LAB_1003cc2c4;
          }
          (**(code **)(lVar48 + 0x18))(pvVar40,pvVar25,DVar13.unknown);
        }
        else if ((int)pvVar26 == 0) {
          (**(code **)(lVar48 + 0x10))(pvVar40,pvVar25,DVar13.unknown);
          (**(code **)(lVar48 + 0x38))(pvVar40,0,1,DVar13.unknown);
        }
        else {
LAB_1003cc2c4:
          sVar2 = sVar29;
          if (iVar10 == 0) {
            sVar2 = sVar29 + 1;
          }
          _memcpy(pvVar40,pvVar25,sVar2);
        }
        if (iVar10 == 0) {
          sVar29 = sVar29 + 1;
        }
        puVar30 = (undefined8 *)((long)pvVar40 + sVar29 + 7 & 0xfffffffffffffff8);
        puVar35 = (undefined8 *)((long)pvVar25 + sVar29 + 7 & 0xfffffffffffffff8);
        uVar31 = *puVar35;
        *(undefined1 *)(puVar30 + 1) = *(undefined1 *)(puVar35 + 1);
        *puVar30 = uVar31;
        puVar30 = (undefined8 *)((long)pvVar40 + sVar29 + 0x17 & 0xfffffffffffffff8);
        puVar35 = (undefined8 *)((long)pvVar25 + sVar29 + 0x17 & 0xfffffffffffffff8);
        *puVar30 = *puVar35;
        uVar31 = puVar30[1];
        puVar30[1] = puVar35[1];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRelease(uVar31);
        uVar31 = puVar35[2];
        *(undefined1 *)(puVar30 + 3) = *(undefined1 *)(puVar35 + 3);
        puVar30[2] = uVar31;
        puVar30[4] = puVar35[4];
        uVar31 = puVar30[5];
        puVar30[5] = puVar35[5];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRelease(uVar31);
        *(undefined1 *)(puVar30 + 6) = *(undefined1 *)(puVar35 + 6);
        uVar31 = puVar30[7];
        puVar30[7] = puVar35[7];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRelease(uVar31);
        *(undefined1 *)(puVar30 + 8) = *(undefined1 *)(puVar35 + 8);
      }
      else {
        _swift_bridgeObjectRelease(puVar36[1]);
        uVar18 = uVar15 + (long)puVar36 & uVar17;
        pcVar46 = *(code **)(lVar43 + 8);
        (*pcVar46)(uVar18,UVar12.unknown);
        uVar24 = lVar42 + uVar18 & uVar17;
        uVar18 = uVar24;
        (**(code **)(lVar43 + 0x30))(uVar24,1,UVar12.unknown);
        if ((int)uVar18 == 0) {
          (*pcVar46)(uVar24,UVar12.unknown);
        }
        if (uVar20 == 0) {
          local_118 = sVar19 + 1;
        }
        lVar39 = local_118 + 7;
        uVar18 = lVar39 + uVar24 & 0xfffffffffffffff8;
        _swift_bridgeObjectRelease(*(undefined8 *)(uVar18 + 8));
        uVar24 = uVar22 + 9 + uVar18 + 0x20 & uVar45;
        uVar18 = uVar24;
        (**(code **)(lVar48 + 0x30))(uVar24,1,DVar13.unknown);
        if ((int)uVar18 == 0) {
          (**(code **)(lVar48 + 8))(uVar24,DVar13.unknown);
        }
        if (iVar10 == 0) {
          sVar29 = sVar29 + 1;
        }
        uVar18 = sVar29 + 0x17 + uVar24 & 0xfffffffffffffff8;
        _swift_bridgeObjectRelease(*(undefined8 *)(uVar18 + 8));
        _swift_bridgeObjectRelease(*(undefined8 *)(uVar18 + 0x28));
        _swift_bridgeObjectRelease(*(undefined8 *)(uVar18 + 0x38));
        _memcpy(puVar36,puVar32,
                (sVar29 + 0x17 +
                 (uVar22 + 9 + (lVar39 + uVar23 & 0xfffffffffffffff8) + 0x20 & uVar45) &
                0xfffffffffffffff8) + 0x41);
      }
    }
  }
  lVar44 = uVar22 + 9;
  uVar23 = sVar29 + 0x17 + (lVar44 + (lVar39 + uVar23 & 0xfffffffffffffff8) + 0x20 & uVar45) &
           0xfffffffffffffff8;
  uVar31 = *(undefined8 *)((long)puVar36 + uVar23 + 0x48);
  *(undefined8 *)((long)puVar36 + uVar23 + 0x48) = *(undefined8 *)((long)puVar32 + uVar23 + 0x48);
  _swift_retain();
  _swift_release(uVar31);
  lVar1 = uVar23 + 0x50;
  puVar36 = (undefined8 *)((long)puVar36 + lVar1 + uVar38 & ~uVar38);
  puVar32 = (undefined8 *)((long)puVar32 + lVar1 + uVar38 & ~uVar38);
  if ((int)uVar3 < 0) {
    uVar38 = uVar15 + (long)puVar36 & uVar17;
    if (uVar20 == uVar4) {
      (**(code **)(lVar43 + 0x30))(uVar38,uVar20,UVar12.unknown);
      iVar8 = (int)uVar38;
    }
    else {
      uVar38 = lVar42 + uVar38 & uVar17;
      if (uVar16 == uVar4) {
        (**(code **)(lVar43 + 0x30))(uVar38,uVar20,UVar12.unknown);
        iVar9 = (int)uVar38;
      }
      else {
        sVar2 = sVar19;
        if (uVar20 == 0) {
          sVar2 = sVar19 + 1;
        }
        uVar38 = uVar22 + (uVar38 + sVar2 + 7 & 0xfffffffffffffff8) + 0x29 & uVar45;
        (**(code **)(lVar48 + 0x30))(uVar38,iVar10,DVar13.unknown);
        iVar9 = (int)uVar38;
      }
      iVar8 = 0;
      if (iVar9 != 0) {
        iVar8 = iVar9 + -1;
      }
    }
    uVar38 = uVar15 + (long)puVar32 & uVar17;
    if (iVar8 != 0) {
      if (uVar20 != uVar4) {
        uVar38 = lVar42 + uVar38 & uVar17;
        if (uVar16 == uVar4) {
          (**(code **)(lVar43 + 0x30))(uVar38,uVar20,UVar12.unknown);
          iVar9 = (int)uVar38;
        }
        else {
          if (uVar20 == 0) {
            sVar19 = sVar19 + 1;
          }
          uVar22 = uVar22 + (uVar38 + sVar19 + 7 & 0xfffffffffffffff8) + 0x29 & uVar45;
          (**(code **)(lVar48 + 0x30))(uVar22,iVar10,DVar13.unknown);
          iVar9 = (int)uVar22;
        }
        iVar10 = 0;
        if (iVar9 != 0) {
          iVar10 = iVar9 + -1;
        }
      }
      else {
        (**(code **)(lVar43 + 0x30))(uVar38,uVar20,UVar12.unknown);
        iVar10 = (int)uVar38;
      }
      goto joined_r0x0001003ccdc4;
    }
    if (uVar20 != uVar4) {
      uVar38 = lVar42 + uVar38 & uVar17;
      if (uVar16 == uVar4) {
        (**(code **)(lVar43 + 0x30))(uVar38,uVar20,UVar12.unknown);
        iVar9 = (int)uVar38;
      }
      else {
        if (uVar20 == 0) {
          sVar19 = sVar19 + 1;
        }
        uVar22 = uVar22 + (uVar38 + sVar19 + 7 & 0xfffffffffffffff8) + 0x29 & uVar45;
        (**(code **)(lVar48 + 0x30))(uVar22,iVar10,DVar13.unknown);
        iVar9 = (int)uVar22;
      }
      iVar10 = 0;
      if (iVar9 != 0) {
        iVar10 = iVar9 + -1;
      }
    }
    else {
      (**(code **)(lVar43 + 0x30))(uVar38,uVar20,UVar12.unknown);
      iVar10 = (int)uVar38;
    }
  }
  else {
    uVar22 = puVar32[1];
    if (0xfffffffe < uVar22) {
      uVar22 = 0xffffffff;
    }
    iVar10 = (int)uVar22 + 1;
    if ((ulong)puVar36[1] < 0xffffffff) {
joined_r0x0001003ccdc4:
      if (iVar10 == 0) {
        *puVar36 = *puVar32;
        puVar36[1] = puVar32[1];
        uVar22 = uVar15 + (long)puVar36 & uVar17;
        uVar15 = uVar15 + (long)puVar32 & uVar17;
        pcVar46 = *(code **)(lVar43 + 0x10);
        _swift_bridgeObjectRetain();
        (*pcVar46)(uVar22,uVar15,UVar12.unknown);
        pvVar26 = (void *)(lVar42 + uVar22 & uVar17);
        pvVar25 = (void *)(lVar42 + uVar15 & uVar17);
        pvVar14 = pvVar25;
        (**(code **)(lVar43 + 0x30))(pvVar25,1,UVar12.unknown);
        if ((int)pvVar14 == 0) {
          (*pcVar46)(pvVar26,pvVar25,UVar12.unknown);
          (**(code **)(lVar43 + 0x38))(pvVar26,0,1,UVar12.unknown);
        }
        else {
          _memcpy(pvVar26,pvVar25,local_118);
        }
        puVar30 = (undefined8 *)(lVar39 + (long)pvVar26 & 0xfffffffffffffff8);
        puVar35 = (undefined8 *)(lVar39 + (long)pvVar25 & 0xfffffffffffffff8);
        *puVar30 = *puVar35;
        puVar30[1] = puVar35[1];
        puVar30[2] = puVar35[2];
        *(undefined1 *)(puVar30 + 3) = *(undefined1 *)(puVar35 + 3);
        uVar31 = puVar35[4];
        *(undefined1 *)(puVar30 + 5) = *(undefined1 *)(puVar35 + 5);
        puVar30[4] = uVar31;
        pvVar26 = (void *)(lVar44 + (long)(puVar30 + 4) & uVar45);
        pvVar25 = (void *)(lVar44 + (long)(puVar35 + 4) & uVar45);
        pcVar46 = *(code **)(lVar48 + 0x30);
        _swift_bridgeObjectRetain();
        pvVar14 = pvVar25;
        (*pcVar46)(pvVar25,1,DVar13.unknown);
        if ((int)pvVar14 == 0) {
          (**(code **)(lVar48 + 0x10))(pvVar26,pvVar25,DVar13.unknown);
          (**(code **)(lVar48 + 0x38))(pvVar26,0,1,DVar13.unknown);
        }
        else {
          _memcpy(pvVar26,pvVar25,sVar29);
        }
        puVar30 = (undefined8 *)((long)pvVar26 + sVar29 + 7 & 0xfffffffffffffff8);
        puVar35 = (undefined8 *)((long)pvVar25 + sVar29 + 7 & 0xfffffffffffffff8);
        uVar31 = *puVar35;
        *(undefined1 *)(puVar30 + 1) = *(undefined1 *)(puVar35 + 1);
        *puVar30 = uVar31;
        puVar30 = (undefined8 *)((long)pvVar26 + sVar29 + 0x17 & 0xfffffffffffffff8);
        puVar35 = (undefined8 *)((long)pvVar25 + sVar29 + 0x17 & 0xfffffffffffffff8);
        *puVar30 = *puVar35;
        puVar30[1] = puVar35[1];
        uVar31 = puVar35[2];
        *(undefined1 *)(puVar30 + 3) = *(undefined1 *)(puVar35 + 3);
        puVar30[2] = uVar31;
        puVar30[4] = puVar35[4];
        uVar31 = puVar35[5];
        puVar30[5] = uVar31;
        *(undefined1 *)(puVar30 + 6) = *(undefined1 *)(puVar35 + 6);
        uVar21 = puVar35[7];
        puVar30[7] = uVar21;
        *(undefined1 *)(puVar30 + 8) = *(undefined1 *)(puVar35 + 8);
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar31);
        _swift_bridgeObjectRetain(uVar21);
      }
      else {
        _memcpy(puVar36,puVar32,uVar23 + 0x41);
      }
      goto LAB_1003cd020;
    }
  }
  if (iVar10 != 0) {
    _swift_bridgeObjectRelease(puVar36[1]);
    uVar15 = uVar15 + (long)puVar36 & uVar17;
    pcVar46 = *(code **)(lVar43 + 8);
    (*pcVar46)(uVar15,UVar12.unknown);
    uVar17 = lVar42 + uVar15 & uVar17;
    uVar15 = uVar17;
    (**(code **)(lVar43 + 0x30))(uVar17,1,UVar12.unknown);
    if ((int)uVar15 == 0) {
      (*pcVar46)(uVar17,UVar12.unknown);
    }
    uVar15 = lVar39 + uVar17 & 0xfffffffffffffff8;
    _swift_bridgeObjectRelease(*(undefined8 *)(uVar15 + 8));
    uVar45 = lVar44 + uVar15 + 0x20 & uVar45;
    uVar15 = uVar45;
    (**(code **)(lVar48 + 0x30))(uVar45,1,DVar13.unknown);
    if ((int)uVar15 == 0) {
      (**(code **)(lVar48 + 8))(uVar45,DVar13.unknown);
    }
    uVar15 = sVar29 + 0x17 + uVar45 & 0xfffffffffffffff8;
    _swift_bridgeObjectRelease(*(undefined8 *)(uVar15 + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(uVar15 + 0x28));
    _swift_bridgeObjectRelease(*(undefined8 *)(uVar15 + 0x38));
    _memcpy(puVar36,puVar32,uVar23 + 0x41);
    goto LAB_1003cd020;
  }
  *puVar36 = *puVar32;
  uVar31 = puVar36[1];
  puVar36[1] = puVar32[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar31);
  uVar22 = uVar15 + (long)puVar36 & uVar17;
  uVar15 = uVar15 + (long)puVar32 & uVar17;
  pcVar47 = *(code **)(lVar43 + 0x18);
  (*pcVar47)(uVar22,uVar15,UVar12.unknown);
  pvVar25 = (void *)(lVar42 + uVar22 & uVar17);
  pvVar40 = (void *)(lVar42 + uVar15 & uVar17);
  pcVar46 = *(code **)(lVar43 + 0x30);
  pvVar14 = pvVar25;
  (*pcVar46)(pvVar25,1,UVar12.unknown);
  pvVar26 = pvVar40;
  (*pcVar46)(pvVar40,1,UVar12.unknown);
  if ((int)pvVar14 == 0) {
    if ((int)pvVar26 != 0) {
      (**(code **)(lVar43 + 8))(pvVar25,UVar12.unknown);
      goto LAB_1003ccb68;
    }
    (*pcVar47)(pvVar25,pvVar40,UVar12.unknown);
  }
  else if ((int)pvVar26 == 0) {
    (**(code **)(lVar43 + 0x10))(pvVar25,pvVar40,UVar12.unknown);
    (**(code **)(lVar43 + 0x38))(pvVar25,0,1,UVar12.unknown);
  }
  else {
LAB_1003ccb68:
    _memcpy(pvVar25,pvVar40,local_118);
  }
  puVar30 = (undefined8 *)(lVar39 + (long)pvVar25 & 0xfffffffffffffff8);
  puVar35 = (undefined8 *)(lVar39 + (long)pvVar40 & 0xfffffffffffffff8);
  *puVar30 = *puVar35;
  uVar31 = puVar30[1];
  puVar30[1] = puVar35[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar31);
  puVar30[2] = puVar35[2];
  *(undefined1 *)(puVar30 + 3) = *(undefined1 *)(puVar35 + 3);
  uVar31 = puVar35[4];
  *(undefined1 *)(puVar30 + 5) = *(undefined1 *)(puVar35 + 5);
  puVar30[4] = uVar31;
  pvVar25 = (void *)(lVar44 + (long)(puVar30 + 4) & uVar45);
  pvVar40 = (void *)(lVar44 + (long)(puVar35 + 4) & uVar45);
  pcVar46 = *(code **)(lVar48 + 0x30);
  pvVar14 = pvVar25;
  (*pcVar46)(pvVar25,1,DVar13.unknown);
  pvVar26 = pvVar40;
  (*pcVar46)(pvVar40,1,DVar13.unknown);
  if ((int)pvVar14 == 0) {
    if ((int)pvVar26 != 0) {
      (**(code **)(lVar48 + 8))(pvVar25,DVar13.unknown);
      goto LAB_1003ccc80;
    }
    (**(code **)(lVar48 + 0x18))(pvVar25,pvVar40,DVar13.unknown);
  }
  else if ((int)pvVar26 == 0) {
    (**(code **)(lVar48 + 0x10))(pvVar25,pvVar40,DVar13.unknown);
    (**(code **)(lVar48 + 0x38))(pvVar25,0,1,DVar13.unknown);
  }
  else {
LAB_1003ccc80:
    _memcpy(pvVar25,pvVar40,sVar29);
  }
  puVar30 = (undefined8 *)((long)pvVar25 + sVar29 + 7 & 0xfffffffffffffff8);
  puVar35 = (undefined8 *)((long)pvVar40 + sVar29 + 7 & 0xfffffffffffffff8);
  uVar31 = *puVar35;
  *(undefined1 *)(puVar30 + 1) = *(undefined1 *)(puVar35 + 1);
  *puVar30 = uVar31;
  puVar30 = (undefined8 *)((long)pvVar25 + sVar29 + 0x17 & 0xfffffffffffffff8);
  puVar35 = (undefined8 *)((long)pvVar40 + sVar29 + 0x17 & 0xfffffffffffffff8);
  *puVar30 = *puVar35;
  uVar31 = puVar30[1];
  puVar30[1] = puVar35[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar31);
  uVar31 = puVar35[2];
  *(undefined1 *)(puVar30 + 3) = *(undefined1 *)(puVar35 + 3);
  puVar30[2] = uVar31;
  puVar30[4] = puVar35[4];
  uVar31 = puVar30[5];
  puVar30[5] = puVar35[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar31);
  *(undefined1 *)(puVar30 + 6) = *(undefined1 *)(puVar35 + 6);
  uVar31 = puVar30[7];
  puVar30[7] = puVar35[7];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar31);
  *(undefined1 *)(puVar30 + 8) = *(undefined1 *)(puVar35 + 8);
LAB_1003cd020:
  lVar42 = uVar23 + 0x48;
  uVar31 = *(undefined8 *)(lVar42 + (long)puVar36);
  *(undefined8 *)(lVar42 + (long)puVar36) = *(undefined8 *)(lVar42 + (long)puVar32);
  _swift_retain();
  _swift_release(uVar31);
  puVar36 = (undefined8 *)((long)puVar36 + lVar1);
  puVar32 = (undefined8 *)((long)puVar32 + lVar1);
  uVar31 = *puVar36;
  *puVar36 = *puVar32;
  _swift_retain();
  _swift_release(uVar31);
  uVar31 = puVar36[1];
  puVar36[1] = puVar32[1];
  _swift_retain();
  _swift_release(uVar31);
  puVar28 = (undefined1 *)((long)puVar36 + 0x17U & 0xfffffffffffffff8);
  puVar34 = (undefined1 *)((long)puVar32 + 0x17U & 0xfffffffffffffff8);
  *puVar28 = *puVar34;
  uVar31 = *(undefined8 *)(puVar28 + 8);
  *(undefined8 *)(puVar28 + 8) = *(undefined8 *)(puVar34 + 8);
  _swift_retain();
  _swift_release(uVar31);
  puVar28[0x10] = puVar34[0x10];
  uVar31 = *(undefined8 *)(puVar28 + 0x18);
  *(undefined8 *)(puVar28 + 0x18) = *(undefined8 *)(puVar34 + 0x18);
  _swift_retain();
  _swift_release(uVar31);
  uVar31 = *(undefined8 *)(puVar34 + 0x20);
  puVar28[0x28] = puVar34[0x28];
  *(undefined8 *)(puVar28 + 0x20) = uVar31;
  uVar31 = *(undefined8 *)(puVar28 + 0x30);
  *(undefined8 *)(puVar28 + 0x30) = *(undefined8 *)(puVar34 + 0x30);
  _swift_retain();
  _swift_release(uVar31);
  return param_1;
}

