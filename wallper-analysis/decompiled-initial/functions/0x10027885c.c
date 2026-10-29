// rea decompile_all
// name: FUN_10027885c
// address: 0x10027885c
// body: available
// range: 0x10027885c-0x100279343 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10027885c(undefined *param_1,undefined *param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 *puVar1;
  _StringGuts _Var2;
  _StringGuts _Var3;
  undefined8 uVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  ulong uVar13;
  ObservableObjectPublisher *this;
  Published *pPVar14;
  long extraout_x8;
  undefined8 *puVar15;
  long extraout_x12;
  long extraout_x12_00;
  ulong uVar16;
  Published *unaff_x20;
  ulong uVar17;
  long lVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined8 *apuStack_f0 [5];
  ulong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  uint local_a4;
  long local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined1 local_88 [8];
  ulong local_80 [4];
  
  apuStack_f0[1] = (undefined8 *)unaff_x20->unknown;
  lVar8 = 0;
  local_c0 = param_3;
  local_b8 = param_5;
  local_a4 = param_4;
  local_a0 = param_6;
  local_98 = param_2;
  local_90 = param_1;
  FUN_10040211c();
  lVar18 = *(long *)(lVar8 + -8);
  local_b0 = lVar8;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar18 + 0x40));
  puVar15 = (undefined8 *)((long)apuStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  apuStack_f0[3] = puVar15;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar15 = (undefined8 *)((long)puVar15 - extraout_x12);
  apuStack_f0[4] = puVar15;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar15 = (undefined8 *)((long)puVar15 - extraout_x12_00);
  puVar9 = &DAT_10042d1d8;
  _swift_getKeyPath(&DAT_10042d1d8);
  puVar10 = &DAT_10042d200;
  _swift_getKeyPath(&DAT_10042d200);
  Combine::Published::_get_subscript(local_80);
  _swift_release(puVar9);
  _swift_release(puVar10);
  uVar16 = *(ulong *)(local_80[0] + 0x10);
  _swift_bridgeObjectRelease();
  local_c8 = uVar16;
  if (uVar16 != 0) {
    uVar16 = 0;
    apuStack_f0[2] =
         (undefined8 *)((long)&unaff_x20->unknown + _TtC7Wallper17VideoLibraryStore::lookupCache);
    do {
      puVar12 = &DAT_10042d1d8;
      puVar10 = puVar12;
      _swift_getKeyPath(&DAT_10042d1d8);
      puVar9 = &DAT_10042d200;
      _swift_getKeyPath(&DAT_10042d200);
      Combine::Published::_get_subscript(local_80,unaff_x20,puVar10,puVar9);
      _swift_release(puVar10);
      _swift_release(puVar9);
      uVar13 = local_80[0];
      if (*(ulong *)(local_80[0] + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100279324);
        (*pcVar6)();
      }
      uVar17 = (ulong)*(byte *)(lVar18 + 0x50) + 0x20 &
               ((ulong)*(byte *)(lVar18 + 0x50) ^ 0xffffffffffffffff);
      lVar8 = *(long *)(lVar18 + 0x48) * uVar16;
      FUN_100029504(local_80[0] + uVar17 + lVar8,puVar15,FUN_10040211c);
      _swift_bridgeObjectRelease(uVar13);
      _Var2.unknown = (undefined *)*puVar15;
      _Var3.unknown = (undefined *)puVar15[1];
      _swift_bridgeObjectRetain(_Var3.unknown);
      FUN_100029548(puVar15,FUN_10040211c);
      if ((_Var2.unknown == local_90) && (_Var3.unknown == local_98)) {
        _swift_bridgeObjectRelease(_Var3.unknown);
LAB_100278b18:
        if ((local_a4 & 0xff) != 1) {
          puVar10 = puVar12;
          _swift_getKeyPath(&DAT_10042d1d8);
          puVar9 = &DAT_10042d200;
          _swift_getKeyPath(&DAT_10042d200);
          Combine::Published::_get_subscript(local_80,unaff_x20,puVar10,puVar9);
          _swift_release(puVar10);
          _swift_release(puVar9);
          uVar13 = local_80[0];
          uVar11 = local_80[0];
          _swift_isUniquelyReferenced_nonNull_native();
          if ((uVar11 & 1) == 0) {
            FUN_100287238();
          }
          if (*(ulong *)(uVar13 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10027933c);
            (*pcVar6)();
          }
          puVar1 = (undefined8 *)(uVar13 + uVar17 + (long)*(int *)(local_b0 + 0x30) + lVar8);
          *puVar1 = local_c0;
          *(char *)(puVar1 + 1) = (char)local_a4;
          _swift_getKeyPath(&DAT_10042d1d8);
          puVar9 = &DAT_10042d200;
          _swift_getKeyPath(&DAT_10042d200);
          _swift_retain(unaff_x20);
          Combine::Published::_set_subscript(unaff_x20,local_88,unaff_x20,puVar12,puVar9);
          uVar20 = *apuStack_f0[2];
          uVar4 = apuStack_f0[2][1];
          *apuStack_f0[2] = 0;
          apuStack_f0[2][1] = 0;
          FUN_10027f5e8(uVar20,uVar4);
        }
        puVar9 = &DAT_10042d1d8;
        if (local_a0 != 0) {
          _swift_getKeyPath(&DAT_10042d1d8);
          puVar10 = &DAT_10042d200;
          _swift_getKeyPath(&DAT_10042d200);
          Combine::Published::_get_subscript(local_80,unaff_x20,puVar9,puVar10);
          _swift_release(puVar9);
          _swift_release(puVar10);
          uVar13 = local_80[0];
          uVar11 = local_80[0];
          _swift_isUniquelyReferenced_nonNull_native();
          if ((uVar11 & 1) == 0) {
            FUN_100287238();
          }
          if (*(ulong *)(uVar13 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100279330);
            (*pcVar6)();
          }
          puVar1 = (undefined8 *)(uVar13 + uVar17 + (long)*(int *)(local_b0 + 0x34) + lVar8);
          uVar20 = puVar1[1];
          *puVar1 = local_b8;
          puVar1[1] = local_a0;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRelease(uVar20);
          _swift_getKeyPath(&DAT_10042d1d8);
          _swift_getKeyPath(&DAT_10042d200);
          _swift_retain(unaff_x20);
          Combine::Published::_set_subscript();
          uVar20 = *apuStack_f0[2];
          uVar4 = apuStack_f0[2][1];
          *apuStack_f0[2] = 0;
          apuStack_f0[2][1] = 0;
          FUN_10027f5e8(uVar20,uVar4);
        }
      }
      else {
        bVar7 = Swift::_stringCompareWithSmolCheck
                          (_Var2,_Var3,(_StringComparisonResult)(__int8)local_90);
        _swift_bridgeObjectRelease(_Var3.unknown);
        if (bVar7) goto LAB_100278b18;
      }
      uVar16 = uVar16 + 1;
    } while (local_c8 != uVar16);
  }
  puVar9 = &DAT_10042d220;
  _swift_getKeyPath(&DAT_10042d220);
  puVar10 = &DAT_10042d248;
  _swift_getKeyPath(&DAT_10042d248);
  Combine::Published::_get_subscript(local_80,unaff_x20,puVar9,puVar10);
  _swift_release(puVar9);
  _swift_release(puVar10);
  uVar16 = *(ulong *)(local_80[0] + 0x10);
  _swift_bridgeObjectRelease();
  local_c8 = uVar16;
  if (uVar16 != 0) {
    uVar16 = 0;
    apuStack_f0[2] = _TtC7Wallper17VideoLibraryStore::downloadedIDCache;
    do {
      puVar9 = &DAT_10042d220;
      _swift_getKeyPath(&DAT_10042d220);
      puVar10 = &DAT_10042d248;
      _swift_getKeyPath(&DAT_10042d248);
      Combine::Published::_get_subscript(local_80,unaff_x20,puVar9,puVar10);
      _swift_release(puVar9);
      _swift_release(puVar10);
      uVar13 = local_80[0];
      puVar15 = apuStack_f0[4];
      if (*(ulong *)(local_80[0] + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100279328);
        (*pcVar6)();
      }
      uVar17 = (ulong)*(byte *)(lVar18 + 0x50) + 0x20 &
               ((ulong)*(byte *)(lVar18 + 0x50) ^ 0xffffffffffffffff);
      lVar8 = *(long *)(lVar18 + 0x48) * uVar16;
      FUN_100029504(local_80[0] + uVar17 + lVar8,apuStack_f0[4],FUN_10040211c);
      _swift_bridgeObjectRelease(uVar13);
      _Var2.unknown = (undefined *)*puVar15;
      _Var3.unknown = (undefined *)puVar15[1];
      _swift_bridgeObjectRetain(_Var3.unknown);
      FUN_100029548(puVar15,FUN_10040211c);
      if ((_Var2.unknown == local_90) && (_Var3.unknown == local_98)) {
        _swift_bridgeObjectRelease(_Var3.unknown);
LAB_100278df4:
        if ((local_a4 & 0xff) != 1) {
          puVar9 = &DAT_10042d220;
          _swift_getKeyPath(&DAT_10042d220);
          puVar10 = &DAT_10042d248;
          _swift_getKeyPath(&DAT_10042d248);
          Combine::Published::_get_subscript(local_80,unaff_x20,puVar9,puVar10);
          _swift_release(puVar9);
          _swift_release(puVar10);
          uVar13 = local_80[0];
          uVar11 = local_80[0];
          _swift_isUniquelyReferenced_nonNull_native();
          if ((uVar11 & 1) == 0) {
            FUN_100287238();
          }
          if (*(ulong *)(uVar13 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100279340);
            (*pcVar6)();
          }
          puVar15 = (undefined8 *)(uVar13 + uVar17 + (long)*(int *)(local_b0 + 0x30) + lVar8);
          *puVar15 = local_c0;
          *(char *)(puVar15 + 1) = (char)local_a4;
          _swift_getKeyPath(&DAT_10042d220);
          _swift_getKeyPath(&DAT_10042d248);
          _swift_retain(unaff_x20);
          Combine::Published::_set_subscript();
          uVar20 = *(undefined8 *)((long)&unaff_x20->unknown + (long)apuStack_f0[2]);
          *(undefined8 *)((long)&unaff_x20->unknown + (long)apuStack_f0[2]) = 0;
          _swift_bridgeObjectRelease(uVar20);
        }
        if (local_a0 != 0) {
          puVar9 = &DAT_10042d220;
          _swift_getKeyPath(&DAT_10042d220);
          puVar10 = &DAT_10042d248;
          _swift_getKeyPath(&DAT_10042d248);
          Combine::Published::_get_subscript(local_80,unaff_x20,puVar9,puVar10);
          _swift_release(puVar9);
          _swift_release(puVar10);
          uVar13 = local_80[0];
          uVar11 = local_80[0];
          _swift_isUniquelyReferenced_nonNull_native();
          if ((uVar11 & 1) == 0) {
            FUN_100287238();
          }
          if (*(ulong *)(uVar13 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100279334);
            (*pcVar6)();
          }
          puVar15 = (undefined8 *)(uVar13 + uVar17 + (long)*(int *)(local_b0 + 0x34) + lVar8);
          uVar20 = puVar15[1];
          *puVar15 = local_b8;
          puVar15[1] = local_a0;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRelease(uVar20);
          _swift_getKeyPath(&DAT_10042d220);
          _swift_getKeyPath(&DAT_10042d248);
          _swift_retain(unaff_x20);
          Combine::Published::_set_subscript();
          uVar20 = *(undefined8 *)((long)&unaff_x20->unknown + (long)apuStack_f0[2]);
          *(undefined8 *)((long)&unaff_x20->unknown + (long)apuStack_f0[2]) = 0;
          _swift_bridgeObjectRelease(uVar20);
        }
      }
      else {
        bVar7 = Swift::_stringCompareWithSmolCheck
                          (_Var2,_Var3,(_StringComparisonResult)(__int8)local_90);
        _swift_bridgeObjectRelease(_Var3.unknown);
        if (bVar7) goto LAB_100278df4;
      }
      uVar16 = uVar16 + 1;
    } while (local_c8 != uVar16);
  }
  puVar9 = &DAT_10042d3b8;
  _swift_getKeyPath(&DAT_10042d3b8);
  puVar10 = &DAT_10042d3e0;
  _swift_getKeyPath(&DAT_10042d3e0);
  Combine::Published::_get_subscript(local_80,unaff_x20,puVar9,puVar10);
  _swift_release(puVar9);
  _swift_release(puVar10);
  uVar16 = *(ulong *)(local_80[0] + 0x10);
  _swift_bridgeObjectRelease();
  local_c8 = uVar16;
  if (uVar16 != 0) {
    uVar16 = 0;
    do {
      puVar12 = &DAT_10042d3b8;
      puVar10 = puVar12;
      _swift_getKeyPath(&DAT_10042d3b8);
      puVar9 = &DAT_10042d3e0;
      _swift_getKeyPath(&DAT_10042d3e0);
      Combine::Published::_get_subscript(local_80,unaff_x20,puVar10,puVar9);
      _swift_release(puVar10);
      _swift_release(puVar9);
      uVar13 = local_80[0];
      puVar15 = apuStack_f0[3];
      if (*(ulong *)(local_80[0] + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10027932c);
        (*pcVar6)();
      }
      uVar17 = (ulong)*(byte *)(lVar18 + 0x50) + 0x20 &
               ((ulong)*(byte *)(lVar18 + 0x50) ^ 0xffffffffffffffff);
      lVar8 = *(long *)(lVar18 + 0x48) * uVar16;
      FUN_100029504(local_80[0] + uVar17 + lVar8,apuStack_f0[3],FUN_10040211c);
      _swift_bridgeObjectRelease(uVar13);
      _Var2.unknown = (undefined *)*puVar15;
      _Var3.unknown = (undefined *)puVar15[1];
      _swift_bridgeObjectRetain(_Var3.unknown);
      FUN_100029548(puVar15,FUN_10040211c);
      if ((_Var2.unknown == local_90) && (_Var3.unknown == local_98)) {
        _swift_bridgeObjectRelease(_Var3.unknown);
LAB_100279138:
        pPVar14 = unaff_x20;
        if ((local_a4 & 0xff) != 1) {
          _swift_getKeyPath(&DAT_10042d3b8);
          puVar9 = &DAT_10042d3e0;
          _swift_getKeyPath(&DAT_10042d3e0);
          pcVar6 = (code *)local_80;
          Combine::Published::_modify_subscript();
          puVar19 = unaff_x20->unknown;
          puVar10 = puVar19;
          _swift_isUniquelyReferenced_nonNull_native();
          unaff_x20->unknown = puVar19;
          if (((ulong)puVar10 & 1) == 0) {
            FUN_100287238();
            unaff_x20->unknown = puVar19;
          }
          if (*(ulong *)(puVar19 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100279344);
            (*pcVar6)();
          }
          iVar5 = *(int *)(local_b0 + 0x30);
          *(undefined8 *)(puVar19 + (long)iVar5 + lVar8 + uVar17) = local_c0;
          *(char *)((long)(puVar19 + (long)iVar5 + lVar8 + uVar17) + 8) = (char)local_a4;
          (*pcVar6)(local_80,0);
          _swift_release(puVar12);
          _swift_release(puVar9);
        }
        puVar9 = &DAT_10042d3b8;
        unaff_x20 = pPVar14;
        if (local_a0 != 0) {
          _swift_getKeyPath(&DAT_10042d3b8);
          puVar10 = &DAT_10042d3e0;
          _swift_getKeyPath(&DAT_10042d3e0);
          pcVar6 = (code *)local_80;
          Combine::Published::_modify_subscript();
          puVar19 = pPVar14->unknown;
          puVar12 = puVar19;
          _swift_isUniquelyReferenced_nonNull_native();
          pPVar14->unknown = puVar19;
          if (((ulong)puVar12 & 1) == 0) {
            FUN_100287238();
            pPVar14->unknown = puVar19;
          }
          if (*(ulong *)(puVar19 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100279338);
            (*pcVar6)();
          }
          puVar15 = (undefined8 *)(puVar19 + (long)*(int *)(local_b0 + 0x34) + lVar8 + uVar17);
          uVar20 = puVar15[1];
          *puVar15 = local_b8;
          puVar15[1] = local_a0;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRelease(uVar20);
          (*pcVar6)(local_80,0);
          _swift_release(puVar9);
          _swift_release(puVar10);
        }
      }
      else {
        bVar7 = Swift::_stringCompareWithSmolCheck
                          (_Var2,_Var3,(_StringComparisonResult)(__int8)local_90);
        _swift_bridgeObjectRelease(_Var3.unknown);
        if (bVar7) goto LAB_100279138;
      }
      uVar16 = uVar16 + 1;
    } while (local_c8 != uVar16);
  }
  FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
  this = (extension_Combine)::Combine::ObservableObject::_get_objectWillChange();
  Combine::ObservableObjectPublisher::send(this);
  _swift_release(this);
  return;
}

