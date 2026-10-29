// rea decompile_all
// name: FUN_1003c9430
// address: 0x1003c9430
// body: available
// range: 0x1003c9430-0x1003ca1ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_1003c9430(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  size_t sVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  undefined1 uVar14;
  byte bVar15;
  int iVar16;
  int iVar17;
  DismissAction DVar18;
  URL UVar19;
  Date DVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  size_t sVar25;
  ulong uVar26;
  undefined1 *puVar27;
  long lVar28;
  ulong uVar29;
  undefined1 *puVar30;
  undefined8 *puVar31;
  size_t sVar32;
  long lVar33;
  ulong uVar34;
  uint uVar35;
  ulong *puVar36;
  code *pcVar37;
  ulong uVar38;
  long lVar39;
  undefined8 uVar40;
  ulong *puVar41;
  void *pvVar42;
  void *pvVar43;
  uint uVar44;
  ulong uVar45;
  undefined8 *puVar46;
  ulong uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 *puVar50;
  undefined8 uVar51;
  long lVar52;
  undefined8 *puVar53;
  uint *puVar54;
  undefined8 uVar55;
  void *pvVar56;
  
  lVar22 = *(long *)(param_3 + 0x10);
  lVar23 = *(long *)(lVar22 + -8);
  uVar44 = *(uint *)(lVar23 + 0x50);
  uVar47 = (ulong)uVar44 & 0xff;
  lVar39 = *(long *)(lVar23 + 0x40);
  DVar18 = SwiftUI::DismissAction::typeMetadataAccessor();
  lVar28 = *(long *)(DVar18.unknown + -8);
  uVar12 = *(uint *)(lVar28 + 0x50);
  uVar45 = (ulong)uVar12 & 0xf8 | 7;
  uVar24 = *(ulong *)(lVar28 + 0x40);
  if (uVar24 < 9) {
    uVar24 = 8;
  }
  UVar19 = Foundation::URL::typeMetadataAccessor();
  lVar52 = *(long *)(UVar19.unknown + -8);
  uVar35 = *(uint *)(lVar52 + 0x50);
  uVar38 = (ulong)uVar35 & 0xff;
  DVar20 = Foundation::Date::typeMetadataAccessor();
  lVar33 = *(long *)(DVar20.unknown + -8);
  uVar10 = *(uint *)(lVar33 + 0x54);
  uVar34 = (ulong)*(uint *)(lVar33 + 0x50) & 0xff;
  uVar29 = uVar34 | uVar38;
  uVar13 = *(uint *)(lVar52 + 0x54);
  uVar7 = 0;
  if (uVar13 != 0) {
    uVar7 = uVar13 - 1;
  }
  uVar9 = 0;
  if (uVar10 != 0) {
    uVar9 = uVar10 - 1;
  }
  uVar8 = uVar13;
  if (uVar13 <= uVar9) {
    uVar8 = uVar9;
  }
  uVar9 = uVar8;
  if (uVar8 < 0x80000000) {
    uVar9 = 0x7fffffff;
  }
  sVar32 = *(size_t *)(lVar52 + 0x40);
  sVar6 = sVar32;
  if (uVar13 == 0) {
    sVar6 = sVar32 + 1;
  }
  sVar25 = *(size_t *)(lVar33 + 0x40);
  if (uVar10 == 0) {
    sVar25 = sVar25 + 1;
  }
  uVar26 = uVar45 | uVar29 | uVar47;
  if ((uVar26 == 7) && (((uVar12 | uVar35 | *(uint *)(lVar33 + 0x50) | uVar44) >> 0x14 & 1) == 0)) {
    lVar39 = lVar39 + 7;
    uVar1 = uVar38 + 0x10;
    lVar5 = sVar32 + uVar38;
    lVar2 = sVar6 + 7;
    lVar3 = uVar34 + 9;
    uVar21 = sVar25 + (lVar3 + (lVar2 + (lVar5 + (uVar1 & (uVar38 ^ 0xffffffffffffffff)) &
                                        (uVar38 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x20
                      & (uVar34 ^ 0xffffffffffffffff)) + 0x17 & 0xfffffffffffffff8;
    lVar4 = uVar21 + 0x50;
    if ((uVar21 + ((uVar29 + (uVar24 + (uVar45 + (lVar39 + (uVar47 + 0x68 &
                                                           (uVar47 ^ 0xffffffffffffffff)) &
                                                 0xfffffffffffffff8) + 0x10 &
                                       (uVar45 ^ 0xffffffffffffffff)) + 0x18 & 0xfffffffffffffff8) +
                    0x40 | uVar29 | 7) + lVar4 & ((uVar29 | 7) ^ 0xffffffffffffffff)) + 0x67 &
        0xfffffffffffffff8) + 0x38 < 0x19) {
      lVar11 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = lVar11;
      puVar53 = (undefined8 *)((long)param_1 + 0x17U & 0xfffffffffffffff8);
      puVar50 = (undefined8 *)((long)param_2 + 0x17U & 0xfffffffffffffff8);
      uVar40 = *puVar50;
      *puVar53 = uVar40;
      *(undefined1 *)(puVar53 + 1) = *(undefined1 *)(puVar50 + 1);
      *(undefined1 *)((long)puVar53 + 9) = *(undefined1 *)((long)puVar50 + 9);
      *(undefined1 *)((long)puVar53 + 10) = *(undefined1 *)((long)puVar50 + 10);
      *(undefined1 *)((long)puVar53 + 0xb) = *(undefined1 *)((long)puVar50 + 0xb);
      uVar29 = puVar50[2];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar40);
      if (uVar29 < 0xffffffff) {
        uVar29 = puVar50[2];
        puVar53[3] = puVar50[3];
        puVar53[2] = uVar29;
      }
      else {
        uVar40 = puVar50[3];
        puVar53[2] = uVar29;
        puVar53[3] = uVar40;
        _swift_retain();
      }
      *(undefined1 *)(puVar53 + 4) = *(undefined1 *)(puVar50 + 4);
      uVar29 = puVar50[5];
      if (uVar29 < 0xffffffff) {
        uVar29 = puVar50[5];
        puVar53[6] = puVar50[6];
        puVar53[5] = uVar29;
      }
      else {
        uVar40 = puVar50[6];
        puVar53[5] = uVar29;
        puVar53[6] = uVar40;
        _swift_retain();
      }
      uVar29 = puVar50[7];
      if (uVar29 < 0xffffffff) {
        uVar29 = puVar50[7];
        puVar53[8] = puVar50[8];
        puVar53[7] = uVar29;
      }
      else {
        uVar40 = puVar50[8];
        puVar53[7] = uVar29;
        puVar53[8] = uVar40;
        _swift_retain();
      }
      puVar36 = puVar53 + 9;
      puVar41 = puVar50 + 9;
      if (*puVar41 < 0xffffffff) {
        uVar29 = *puVar41;
        puVar53[10] = puVar50[10];
        *puVar36 = uVar29;
      }
      else {
        uVar40 = puVar50[10];
        *puVar36 = *puVar41;
        puVar53[10] = uVar40;
        _swift_retain();
      }
      uVar29 = (long)puVar36 + uVar47 + 0x10 & ~uVar47;
      uVar47 = (long)puVar41 + uVar47 + 0x10 & ~uVar47;
      (**(code **)(lVar23 + 0x10))(uVar29,uVar47,lVar22);
      puVar50 = (undefined8 *)(lVar39 + uVar29 & 0xfffffffffffffff8);
      puVar53 = (undefined8 *)(lVar39 + uVar47 & 0xfffffffffffffff8);
      *puVar50 = *puVar53;
      puVar50[1] = puVar53[1];
      puVar50 = (undefined8 *)((long)puVar50 + uVar45 + 0x10 & ~uVar45);
      puVar54 = (uint *)((long)puVar53 + uVar45 + 0x10 & ~uVar45);
      bVar15 = *(byte *)((long)puVar54 + uVar24);
      uVar44 = (uint)bVar15;
      _swift_retain();
      if (1 < bVar15) {
        uVar35 = (uint)uVar24;
        uVar12 = 4;
        if (uVar35 < 4) {
          uVar12 = uVar35;
        }
        if ((int)uVar12 < 2) {
          if (uVar12 == 0) goto LAB_1003c9894;
          uVar44 = (uint)(byte)*puVar54;
        }
        else if (uVar12 == 2) {
          uVar44 = (uint)(ushort)*puVar54;
        }
        else if (uVar12 == 3) {
          uVar44 = (uint)(uint3)*puVar54;
        }
        else {
          uVar44 = *puVar54;
        }
        if (uVar35 < 4) {
          uVar44 = (uVar44 | bVar15 - 2 << (ulong)((uVar35 & 3) << 3)) + 2;
        }
        else {
          uVar44 = uVar44 + 2;
        }
      }
LAB_1003c9894:
      if (uVar44 != 1) {
        *puVar50 = *(undefined8 *)puVar54;
        _swift_retain();
      }
      else {
        (**(code **)(lVar28 + 0x10))(puVar50,puVar54,DVar18.unknown);
      }
      uVar38 = ~uVar38;
      uVar45 = ~uVar34;
      *(bool *)((long)puVar50 + uVar24) = uVar44 == 1;
      puVar46 = (undefined8 *)((long)puVar50 + uVar24 + 8 & 0xfffffffffffffff8);
      puVar53 = (undefined8 *)((ulong)((long)puVar54 + uVar24 + 8) & 0xfffffffffffffff8);
      uVar40 = *puVar53;
      uVar14 = *(undefined1 *)(puVar53 + 1);
      FUN_100047ac4(uVar40,uVar14);
      *puVar46 = uVar40;
      *(undefined1 *)(puVar46 + 1) = uVar14;
      puVar27 = (undefined1 *)((long)puVar50 + uVar24 + 0x18 & 0xfffffffffffffff8);
      puVar30 = (undefined1 *)((ulong)((long)puVar54 + uVar24 + 0x18) & 0xfffffffffffffff8);
      *puVar27 = *puVar30;
      *(undefined8 *)(puVar27 + 8) = *(undefined8 *)(puVar30 + 8);
      puVar27[0x10] = puVar30[0x10];
      uVar40 = *(undefined8 *)(puVar30 + 0x18);
      *(undefined8 *)(puVar27 + 0x18) = uVar40;
      *(undefined8 *)(puVar27 + 0x20) = *(undefined8 *)(puVar30 + 0x20);
      uVar48 = *(undefined8 *)(puVar30 + 0x28);
      *(undefined8 *)(puVar27 + 0x28) = uVar48;
      puVar27[0x30] = puVar30[0x30];
      uVar55 = *(undefined8 *)(puVar30 + 0x38);
      *(undefined8 *)(puVar27 + 0x38) = uVar55;
      puVar50 = (undefined8 *)(puVar27 + 0x40);
      puVar53 = (undefined8 *)(puVar30 + 0x40);
      _swift_retain();
      _swift_retain(uVar40);
      _swift_retain(uVar48);
      _swift_retain(uVar55);
      if ((int)uVar8 < 0) {
        uVar24 = (ulong)(uVar1 + (long)puVar53) & uVar38;
        if (uVar13 != uVar9) {
          pvVar56 = (void *)(lVar5 + uVar24 & uVar38);
          if (uVar7 == uVar9) {
            if (1 < uVar13) {
              (**(code **)(lVar52 + 0x30))(pvVar56,uVar13,UVar19.unknown);
              iVar17 = (int)pvVar56;
LAB_1003c9aec:
              iVar16 = 0;
              if (iVar17 != 0) {
                iVar16 = iVar17 + -1;
              }
              goto joined_r0x0001003c9a30;
            }
          }
          else if (1 < uVar10) {
            uVar24 = uVar34 + ((long)pvVar56 + sVar6 + 7 & 0xfffffffffffffff8) + 0x29 & uVar45;
            (**(code **)(lVar33 + 0x30))(uVar24,uVar10,DVar20.unknown);
            iVar17 = (int)uVar24;
            goto LAB_1003c9aec;
          }
          goto LAB_1003c9b18;
        }
        (**(code **)(lVar52 + 0x30))(uVar24,uVar13,UVar19.unknown);
        iVar16 = (int)uVar24;
joined_r0x0001003c9a30:
        if (iVar16 == 0) goto LAB_1003c9af8;
LAB_1003c9a34:
        _memcpy(puVar50,puVar53,uVar21 + 0x41);
      }
      else {
        uVar24 = *(ulong *)(puVar30 + 0x48);
        if (0xfffffffe < uVar24) {
          uVar24 = 0xffffffff;
        }
        if ((int)uVar24 != -1) goto LAB_1003c9a34;
LAB_1003c9af8:
        uVar24 = (ulong)(uVar1 + (long)puVar53) & uVar38;
        pvVar56 = (void *)(lVar5 + uVar24 & uVar38);
LAB_1003c9b18:
        *puVar50 = *puVar53;
        *(undefined8 *)(puVar27 + 0x48) = *(undefined8 *)(puVar30 + 0x48);
        uVar47 = (ulong)(uVar1 + (long)puVar50) & uVar38;
        pcVar37 = *(code **)(lVar52 + 0x10);
        _swift_bridgeObjectRetain();
        (*pcVar37)(uVar47,uVar24,UVar19.unknown);
        pvVar42 = (void *)(lVar5 + uVar47 & uVar38);
        pvVar43 = pvVar56;
        (**(code **)(lVar52 + 0x30))(pvVar56,1,UVar19.unknown);
        if ((int)pvVar43 == 0) {
          (*pcVar37)(pvVar42,pvVar56,UVar19.unknown);
          (**(code **)(lVar52 + 0x38))(pvVar42,0,1,UVar19.unknown);
        }
        else {
          _memcpy(pvVar42,pvVar56,sVar6);
        }
        puVar50 = (undefined8 *)(lVar2 + (long)pvVar42 & 0xfffffffffffffff8);
        puVar53 = (undefined8 *)(lVar2 + (long)pvVar56 & 0xfffffffffffffff8);
        *puVar50 = *puVar53;
        puVar50[1] = puVar53[1];
        puVar50[2] = puVar53[2];
        *(undefined1 *)(puVar50 + 3) = *(undefined1 *)(puVar53 + 3);
        uVar40 = puVar53[4];
        *(undefined1 *)(puVar50 + 5) = *(undefined1 *)(puVar53 + 5);
        puVar50[4] = uVar40;
        pvVar43 = (void *)(lVar3 + (long)(puVar50 + 4) & uVar45);
        pvVar42 = (void *)(lVar3 + (long)(puVar53 + 4) & uVar45);
        pcVar37 = *(code **)(lVar33 + 0x30);
        _swift_bridgeObjectRetain();
        pvVar56 = pvVar42;
        (*pcVar37)(pvVar42,1,DVar20.unknown);
        if ((int)pvVar56 == 0) {
          (**(code **)(lVar33 + 0x10))(pvVar43,pvVar42,DVar20.unknown);
          (**(code **)(lVar33 + 0x38))(pvVar43,0,1,DVar20.unknown);
        }
        else {
          _memcpy(pvVar43,pvVar42,sVar25);
        }
        puVar50 = (undefined8 *)((long)pvVar43 + sVar25 + 7 & 0xfffffffffffffff8);
        puVar53 = (undefined8 *)((long)pvVar42 + sVar25 + 7 & 0xfffffffffffffff8);
        uVar40 = *puVar53;
        *(undefined1 *)(puVar50 + 1) = *(undefined1 *)(puVar53 + 1);
        *puVar50 = uVar40;
        puVar50 = (undefined8 *)((long)pvVar43 + sVar25 + 0x17 & 0xfffffffffffffff8);
        puVar53 = (undefined8 *)((long)pvVar42 + sVar25 + 0x17 & 0xfffffffffffffff8);
        *puVar50 = *puVar53;
        puVar50[1] = puVar53[1];
        uVar40 = puVar53[2];
        *(undefined1 *)(puVar50 + 3) = *(undefined1 *)(puVar53 + 3);
        puVar50[2] = uVar40;
        puVar50[4] = puVar53[4];
        uVar40 = puVar53[5];
        puVar50[5] = uVar40;
        *(undefined1 *)(puVar50 + 6) = *(undefined1 *)(puVar53 + 6);
        uVar48 = puVar53[7];
        puVar50[7] = uVar48;
        *(undefined1 *)(puVar50 + 8) = *(undefined1 *)(puVar53 + 8);
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar40);
        _swift_bridgeObjectRetain(uVar48);
      }
      *(undefined8 *)(puVar27 + uVar21 + 0x88) = *(undefined8 *)(puVar30 + uVar21 + 0x88);
      puVar50 = (undefined8 *)((ulong)(puVar27 + uVar21 + 0x97) & 0xfffffffffffffff8);
      puVar53 = (undefined8 *)((ulong)(puVar30 + uVar21 + 0x97) & 0xfffffffffffffff8);
      _swift_retain();
      if ((int)uVar8 < 0) {
        uVar24 = uVar1 + (long)puVar53 & uVar38;
        if (uVar13 != uVar9) {
          pvVar56 = (void *)(lVar5 + uVar24 & uVar38);
          if (uVar7 == uVar9) {
            if (1 < uVar13) {
              (**(code **)(lVar52 + 0x30))(pvVar56,uVar13,UVar19.unknown);
              iVar17 = (int)pvVar56;
LAB_1003c9e98:
              iVar16 = 0;
              if (iVar17 != 0) {
                iVar16 = iVar17 + -1;
              }
              goto joined_r0x0001003c9df4;
            }
          }
          else if (1 < uVar10) {
            uVar24 = uVar34 + ((long)pvVar56 + sVar6 + 7 & 0xfffffffffffffff8) + 0x29 & uVar45;
            (**(code **)(lVar33 + 0x30))(uVar24,uVar10,DVar20.unknown);
            iVar17 = (int)uVar24;
            goto LAB_1003c9e98;
          }
          goto LAB_1003c9ec8;
        }
        (**(code **)(lVar52 + 0x30))(uVar24,uVar13,UVar19.unknown);
        iVar16 = (int)uVar24;
joined_r0x0001003c9df4:
        if (iVar16 == 0) goto LAB_1003c9eac;
LAB_1003c9df8:
        _memcpy(puVar50,puVar53,uVar21 + 0x41);
      }
      else {
        uVar24 = puVar53[1];
        if (0xfffffffe < uVar24) {
          uVar24 = 0xffffffff;
        }
        if ((int)uVar24 != -1) goto LAB_1003c9df8;
LAB_1003c9eac:
        uVar24 = uVar1 + (long)puVar53 & uVar38;
        pvVar56 = (void *)(lVar5 + uVar24 & uVar38);
LAB_1003c9ec8:
        *puVar50 = *puVar53;
        puVar50[1] = puVar53[1];
        uVar47 = uVar1 + (long)puVar50 & uVar38;
        pcVar37 = *(code **)(lVar52 + 0x10);
        _swift_bridgeObjectRetain();
        (*pcVar37)(uVar47,uVar24,UVar19.unknown);
        pvVar42 = (void *)(lVar5 + uVar47 & uVar38);
        pvVar43 = pvVar56;
        (**(code **)(lVar52 + 0x30))(pvVar56,1,UVar19.unknown);
        if ((int)pvVar43 == 0) {
          (*pcVar37)(pvVar42,pvVar56,UVar19.unknown);
          (**(code **)(lVar52 + 0x38))(pvVar42,0,1,UVar19.unknown);
        }
        else {
          _memcpy(pvVar42,pvVar56,sVar6);
        }
        puVar46 = (undefined8 *)(lVar2 + (long)pvVar42 & 0xfffffffffffffff8);
        puVar31 = (undefined8 *)(lVar2 + (long)pvVar56 & 0xfffffffffffffff8);
        *puVar46 = *puVar31;
        puVar46[1] = puVar31[1];
        puVar46[2] = puVar31[2];
        *(undefined1 *)(puVar46 + 3) = *(undefined1 *)(puVar31 + 3);
        uVar40 = puVar31[4];
        *(undefined1 *)(puVar46 + 5) = *(undefined1 *)(puVar31 + 5);
        puVar46[4] = uVar40;
        pvVar43 = (void *)(lVar3 + (long)(puVar46 + 4) & uVar45);
        pvVar42 = (void *)(lVar3 + (long)(puVar31 + 4) & uVar45);
        pcVar37 = *(code **)(lVar33 + 0x30);
        _swift_bridgeObjectRetain();
        pvVar56 = pvVar42;
        (*pcVar37)(pvVar42,1,DVar20.unknown);
        if ((int)pvVar56 == 0) {
          (**(code **)(lVar33 + 0x10))(pvVar43,pvVar42,DVar20.unknown);
          (**(code **)(lVar33 + 0x38))(pvVar43,0,1,DVar20.unknown);
        }
        else {
          _memcpy(pvVar43,pvVar42,sVar25);
        }
        puVar46 = (undefined8 *)((long)pvVar43 + sVar25 + 7 & 0xfffffffffffffff8);
        puVar31 = (undefined8 *)((long)pvVar42 + sVar25 + 7 & 0xfffffffffffffff8);
        uVar40 = *puVar31;
        *(undefined1 *)(puVar46 + 1) = *(undefined1 *)(puVar31 + 1);
        *puVar46 = uVar40;
        puVar46 = (undefined8 *)((long)pvVar43 + sVar25 + 0x17 & 0xfffffffffffffff8);
        puVar31 = (undefined8 *)((long)pvVar42 + sVar25 + 0x17 & 0xfffffffffffffff8);
        *puVar46 = *puVar31;
        puVar46[1] = puVar31[1];
        uVar40 = puVar31[2];
        *(undefined1 *)(puVar46 + 3) = *(undefined1 *)(puVar31 + 3);
        puVar46[2] = uVar40;
        puVar46[4] = puVar31[4];
        uVar40 = puVar31[5];
        puVar46[5] = uVar40;
        *(undefined1 *)(puVar46 + 6) = *(undefined1 *)(puVar31 + 6);
        uVar48 = puVar31[7];
        puVar46[7] = uVar48;
        *(undefined1 *)(puVar46 + 8) = *(undefined1 *)(puVar31 + 8);
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar40);
        _swift_bridgeObjectRetain(uVar48);
      }
      *(undefined8 *)(uVar21 + 0x48 + (long)puVar50) =
           *(undefined8 *)(uVar21 + 0x48 + (long)puVar53);
      puVar50 = (undefined8 *)((ulong)(puVar27 + uVar21 + 0x97 + lVar4) & 0xfffffffffffffff8);
      puVar53 = (undefined8 *)((ulong)(puVar30 + uVar21 + 0x97 + lVar4) & 0xfffffffffffffff8);
      uVar48 = *puVar53;
      *puVar50 = uVar48;
      uVar55 = puVar53[1];
      puVar50[1] = uVar55;
      *(undefined1 *)(puVar50 + 2) = *(undefined1 *)(puVar53 + 2);
      uVar49 = puVar53[3];
      puVar50[3] = uVar49;
      *(undefined1 *)(puVar50 + 4) = *(undefined1 *)(puVar53 + 4);
      uVar51 = puVar53[5];
      puVar50[5] = uVar51;
      uVar40 = puVar53[6];
      *(undefined1 *)(puVar50 + 7) = *(undefined1 *)(puVar53 + 7);
      puVar50[6] = uVar40;
      lVar39 = puVar53[8];
      puVar50[8] = lVar39;
      _swift_retain();
      _swift_retain(uVar48);
      _swift_retain(uVar55);
      _swift_retain(uVar49);
      _swift_retain(uVar51);
      goto LAB_1003ca1d4;
    }
  }
  lVar39 = *param_2;
  *param_1 = lVar39;
  param_1 = (long *)(lVar39 + (uVar26 + 0x10 & (uVar26 ^ 0xffffffffffffffff)));
LAB_1003ca1d4:
  _swift_retain(lVar39);
  return param_1;
}

