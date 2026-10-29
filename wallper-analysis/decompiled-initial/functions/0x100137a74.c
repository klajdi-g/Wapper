// rea decompile_all
// name: FUN_100137a74
// address: 0x100137a74
// body: available
// range: 0x100137a74-0x100137f8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100137f74) */
/* WARNING: Removing unreachable block (ram,0x000100137b54) */
/* WARNING: Removing unreachable block (ram,0x000100137d44) */
/* WARNING: Removing unreachable block (ram,0x000100137f68) */
/* WARNING: Removing unreachable block (ram,0x000100137f5c) */
/* WARNING: Removing unreachable block (ram,0x000100137f78) */

bool FUN_100137a74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _StringObject _Var1;
  code *pcVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  UnsafeBufferPointer<__int8> UVar8;
  undefined *puVar9;
  undefined *puVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong *puVar18;
  undefined *local_90;
  ulong uStack_88;
  undefined8 *local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_70 = 0x2e;
  uStack_68 = 0xe100000000000000;
  local_80 = &local_70;
  _swift_bridgeObjectRetain(param_2);
  lVar3 = 0x7fffffffffffffff;
  FUN_1001b49f4(0x7fffffffffffffff,1,FUN_100138104,&local_90,param_1,param_2);
  uVar17 = *(ulong *)(lVar3 + 0x10);
  puVar7 = PTR___swiftEmptyArrayStorage_100524190;
  if (uVar17 != 0) {
    uVar12 = 0;
LAB_100137b0c:
    puVar18 = (ulong *)(lVar3 + 0x38 + uVar12 * 0x20);
    uVar13 = uVar12;
    do {
      if (*(ulong *)(lVar3 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100137f4c);
        (*pcVar2)();
      }
      ppuVar5 = (undefined **)puVar18[-3];
      uVar12 = puVar18[-2];
      if ((uVar12 ^ (ulong)ppuVar5) >> 0xe != 0) {
        _Var1.unknown = (undefined *)puVar18[-1];
        uVar14 = *puVar18;
        if ((uVar14 >> 0x3c & 1) == 0) {
          if ((uVar14 >> 0x3d & 1) == 0) {
            if (((ulong)_Var1.unknown >> 0x3c & 1) == 0) {
              UVar8 = Swift::_StringObject::get_sharedUTF8(_Var1);
            }
            else {
              UVar8.unknown = (undefined *)((uVar14 & 0xfffffffffffffff) + 0x20);
            }
            FUN_10029c130(UVar8.unknown,ppuVar5,uVar12,_Var1.unknown,uVar14);
            uVar11 = (uint)ppuVar5;
            ppuVar5 = (undefined **)UVar8.unknown;
          }
          else {
            uStack_88 = uVar14 & 0xffffffffffffff;
            ppuVar4 = &local_90;
            local_90 = _Var1.unknown;
            FUN_10029c130();
            uVar11 = (uint)ppuVar5;
            ppuVar5 = ppuVar4;
          }
        }
        else {
          _swift_bridgeObjectRetain(uVar14);
          FUN_10029b6a4(ppuVar5,uVar12,_Var1.unknown,uVar14,10);
          uVar11 = (uint)uVar12;
          _swift_bridgeObjectRelease(uVar14);
        }
        if ((uVar11 & 0xff) != 1) goto LAB_100137bfc;
      }
      uVar13 = uVar13 + 1;
      puVar18 = puVar18 + 4;
      if (uVar17 == uVar13) break;
    } while( true );
  }
LAB_100137c98:
  _swift_bridgeObjectRelease(lVar3);
  local_70 = 0x2e;
  uStack_68 = 0xe100000000000000;
  local_80 = &local_70;
  _swift_bridgeObjectRetain(param_4);
  lVar3 = 0x7fffffffffffffff;
  FUN_1001b49f4(0x7fffffffffffffff,1,FUN_100138d2c,&local_90,param_3,param_4);
  uVar17 = *(ulong *)(lVar3 + 0x10);
  puVar10 = PTR___swiftEmptyArrayStorage_100524190;
  if (uVar17 != 0) {
    uVar12 = 0;
LAB_100137cfc:
    puVar18 = (ulong *)(lVar3 + 0x38 + uVar12 * 0x20);
    uVar13 = uVar12;
    do {
      if (*(ulong *)(lVar3 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100137f50);
        (*pcVar2)();
      }
      ppuVar5 = (undefined **)puVar18[-3];
      uVar12 = puVar18[-2];
      if ((uVar12 ^ (ulong)ppuVar5) >> 0xe != 0) {
        _Var1.unknown = (undefined *)puVar18[-1];
        uVar14 = *puVar18;
        if ((uVar14 >> 0x3c & 1) == 0) {
          if ((uVar14 >> 0x3d & 1) == 0) {
            if (((ulong)_Var1.unknown >> 0x3c & 1) == 0) {
              UVar8 = Swift::_StringObject::get_sharedUTF8(_Var1);
            }
            else {
              UVar8.unknown = (undefined *)((uVar14 & 0xfffffffffffffff) + 0x20);
            }
            FUN_10029c130(UVar8.unknown,ppuVar5,uVar12,_Var1.unknown,uVar14);
            uVar11 = (uint)ppuVar5;
            ppuVar5 = (undefined **)UVar8.unknown;
          }
          else {
            uStack_88 = uVar14 & 0xffffffffffffff;
            ppuVar4 = &local_90;
            local_90 = _Var1.unknown;
            FUN_10029c130();
            uVar11 = (uint)ppuVar5;
            ppuVar5 = ppuVar4;
          }
        }
        else {
          _swift_bridgeObjectRetain(uVar14);
          FUN_10029b6a4(ppuVar5,uVar12,_Var1.unknown,uVar14,10);
          uVar11 = (uint)uVar12;
          _swift_bridgeObjectRelease(uVar14);
        }
        if ((uVar11 & 0xff) != 1) goto LAB_100137de8;
      }
      uVar13 = uVar13 + 1;
      puVar18 = puVar18 + 4;
      if (uVar17 == uVar13) break;
    } while( true );
  }
LAB_100137e80:
  _swift_bridgeObjectRelease(lVar3);
  uVar12 = *(ulong *)(puVar7 + 0x10);
  uVar13 = *(ulong *)(puVar10 + 0x10);
  uVar17 = uVar13;
  if (uVar13 <= uVar12) {
    uVar17 = uVar12;
  }
  if (uVar17 != 0) {
    lVar3 = 4;
    do {
      uVar14 = lVar3 - 4;
      if (uVar14 < uVar12) {
        lVar15 = *(long *)(puVar7 + lVar3 * 8);
        if (uVar14 < uVar13) goto LAB_100137edc;
        if (lVar15 != 0) {
          lVar16 = 0;
          goto LAB_100137f10;
        }
      }
      else if (uVar14 < uVar13) {
        lVar15 = 0;
LAB_100137edc:
        if (uVar13 <= uVar14) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100137f54);
          (*pcVar2)();
        }
        lVar16 = *(long *)(puVar10 + lVar3 * 8);
        if (lVar15 != lVar16) {
LAB_100137f10:
          _swift_bridgeObjectRelease(puVar7);
          _swift_bridgeObjectRelease(puVar10);
          return lVar16 < lVar15;
        }
      }
      lVar3 = lVar3 + 1;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  _swift_bridgeObjectRelease(puVar7);
  _swift_bridgeObjectRelease(puVar10);
  return false;
LAB_100137bfc:
  puVar10 = puVar7;
  _swift_isUniquelyReferenced_nonNull_native();
  puVar6 = puVar7;
  if (((ulong)puVar10 & 1) == 0) {
    puVar6 = (undefined *)0x0;
    FUN_1001c44a0(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
  }
  uVar14 = *(ulong *)(puVar6 + 0x10);
  puVar7 = puVar6;
  if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar14) {
    puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
    FUN_1001c44a0(puVar7,uVar14 + 1,1,puVar6);
  }
  uVar12 = uVar13 + 1;
  *(ulong *)(puVar7 + 0x10) = uVar14 + 1;
  *(undefined ***)(puVar7 + uVar14 * 8 + 0x20) = ppuVar5;
  if (uVar17 - 1 == uVar13) goto LAB_100137c98;
  goto LAB_100137b0c;
LAB_100137de8:
  puVar6 = puVar10;
  _swift_isUniquelyReferenced_nonNull_native();
  puVar9 = puVar10;
  if (((ulong)puVar6 & 1) == 0) {
    puVar9 = (undefined *)0x0;
    FUN_1001c44a0(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10);
  }
  uVar14 = *(ulong *)(puVar9 + 0x10);
  puVar10 = puVar9;
  if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar14) {
    puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
    FUN_1001c44a0(puVar10,uVar14 + 1,1,puVar9);
  }
  uVar12 = uVar13 + 1;
  *(ulong *)(puVar10 + 0x10) = uVar14 + 1;
  *(undefined ***)(puVar10 + uVar14 * 8 + 0x20) = ppuVar5;
  if (uVar17 - 1 == uVar13) goto LAB_100137e80;
  goto LAB_100137cfc;
}

