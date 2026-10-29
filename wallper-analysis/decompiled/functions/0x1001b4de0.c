// rea decompile_all
// name: FUN_1001b4de0
// address: 0x1001b4de0
// body: available
// range: 0x1001b4de0-0x1001b560f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001b4de0(UUID param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  long lVar3;
  UUID UVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  Published *pPVar9;
  ID self;
  NSString *pNVar10;
  ulong *puVar11;
  UUID UVar12;
  long extraout_x8;
  long lVar13;
  long extraout_x8_00;
  long lVar14;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar15;
  long extraout_x8_03;
  code *pcVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  ulong uVar22;
  ulong *unaff_x20;
  ulong uVar23;
  PassthroughSubject *pPVar24;
  UUID UVar25;
  code *pcVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  long lVar30;
  ulong uVar31;
  ulong uVar32;
  long lVar33;
  ulong *puVar34;
  long alStack_130 [2];
  undefined1 auStack_88 [40];
  
  lVar3 = 0;
  FUN_1001b7b68();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar30 = (long)alStack_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  lVar13 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar13 + 0x40));
  lVar14 = lVar30 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_10054a9c0;
  FUN_100002f94(&DAT_10054a9c0,&DAT_100422d20);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar33 = lVar14 - extraout_x8_01;
  puVar6 = &DAT_10054a9c8;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar17 = lVar33 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = lVar17 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar19 = lVar18 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar20 = lVar19 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar15 = lVar20 - extraout_x12_02;
  lVar7 = 0;
  FUN_10025ee04();
  lVar28 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar28 + 0x40));
  lVar7 = lVar15 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar21 = lVar7 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_100521118)();
  UVar25.unknown = (undefined *)(lVar21 - extraout_x12_04);
  puVar6 = &DAT_10042a610;
  _swift_getKeyPath();
  puVar8 = &DAT_10042a638;
  _swift_getKeyPath();
  pcVar16 = (code *)auStack_88;
  puVar11 = unaff_x20;
  UVar12.unknown = puVar6;
  Combine::Published::_modify_subscript();
  uVar23 = *puVar11;
  puVar34 = (ulong *)(uVar23 + 0x10);
  uVar27 = *puVar34;
  if (uVar27 == 0) {
    uVar22 = 0;
    lVar7 = 0;
  }
  else {
    uVar31 = (ulong)*(byte *)(lVar28 + 0x50) + 0x20 &
             ((ulong)*(byte *)(lVar28 + 0x50) ^ 0xffffffffffffffff);
    lVar28 = *(long *)(lVar28 + 0x48);
    uVar22 = 0;
    uVar32 = uVar31;
    alStack_130[1] = lVar33;
    do {
      bVar2 = Foundation::UUID::___infix((undefined *)(uVar23 + uVar32),param_1,UVar12);
      uVar29 = uVar22 + 1;
      if (bVar2) {
        uVar27 = *puVar34;
        if (uVar27 - 1 != uVar22) {
          do {
            uVar32 = lVar28 + uVar32;
            if (uVar27 <= uVar29) {
                    /* WARNING: Does not return */
              pcVar16 = (code *)SoftwareBreakpoint(1,0x1001b55f8);
              (*pcVar16)();
            }
            UVar12.unknown = FUN_10025ee04;
            FUN_100029504(uVar23 + uVar32,UVar25.unknown);
            bVar2 = Foundation::UUID::___infix(UVar25,param_1,UVar12);
            FUN_100029548(UVar25.unknown,FUN_10025ee04);
            if (!bVar2) {
              if (uVar29 != uVar22) {
                if ((long)uVar22 < 0) {
                    /* WARNING: Does not return */
                  pcVar16 = (code *)SoftwareBreakpoint(1,0x1001b55fc);
                  (*pcVar16)();
                }
                uVar27 = *puVar34;
                if (uVar27 <= uVar22) {
                    /* WARNING: Does not return */
                  pcVar16 = (code *)SoftwareBreakpoint(1,0x1001b5600);
                  (*pcVar16)();
                }
                FUN_100029504(uVar23 + uVar31 + uVar22 * lVar28,lVar21,FUN_10025ee04);
                if (uVar27 <= uVar29) {
                    /* WARNING: Does not return */
                  pcVar16 = (code *)SoftwareBreakpoint(1,0x1001b5604);
                  (*pcVar16)();
                }
                FUN_100029504(uVar23 + uVar32,lVar7,FUN_10025ee04);
                uVar27 = uVar23;
                _swift_isUniquelyReferenced_nonNull_native();
                *puVar11 = uVar23;
                if ((uVar27 & 1) == 0) {
                  FUN_10028729c();
                  *puVar11 = uVar23;
                }
                if (*(ulong *)(uVar23 + 0x10) <= uVar22) {
                    /* WARNING: Does not return */
                  pcVar16 = (code *)SoftwareBreakpoint(1,0x1001b5608);
                  (*pcVar16)();
                }
                FUN_1001d4cb0(lVar7,uVar23 + uVar31 + uVar22 * lVar28,FUN_10025ee04);
                *puVar11 = uVar23;
                if (*(ulong *)(uVar23 + 0x10) <= uVar29) {
                    /* WARNING: Does not return */
                  pcVar16 = (code *)SoftwareBreakpoint(1,0x1001b560c);
                  (*pcVar16)();
                }
                FUN_1001d4cb0(lVar21,uVar23 + uVar32,FUN_10025ee04);
                *puVar11 = uVar23;
              }
              uVar22 = uVar22 + 1;
            }
            uVar29 = uVar29 + 1;
            puVar34 = (ulong *)(uVar23 + 0x10);
            uVar27 = *puVar34;
          } while (uVar29 != uVar27);
        }
        goto LAB_1001b50b8;
      }
      uVar32 = uVar32 + lVar28;
      uVar22 = uVar29;
    } while (uVar27 != uVar29);
    uVar22 = *puVar34;
LAB_1001b50b8:
    lVar7 = *(long *)(*puVar11 + 0x10);
    lVar33 = alStack_130[1];
    if (lVar7 < (long)uVar22) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x1001b5610);
      (*pcVar16)();
    }
  }
  FUN_10028841c(uVar22,lVar7);
  (*pcVar16)(auStack_88,0);
  _swift_release(puVar6);
  _swift_release(puVar8);
  puVar6 = &DAT_10042a670;
  _swift_getKeyPath(&DAT_10042a670);
  puVar8 = &DAT_10042a698;
  _swift_getKeyPath(&DAT_10042a698);
  Combine::Published::_get_subscript(lVar15,unaff_x20,puVar6,puVar8);
  _swift_release(puVar6);
  _swift_release(puVar8);
  (**(code **)(lVar13 + 0x10))(lVar20,param_1.unknown,UVar4.unknown);
  pcVar16 = *(code **)(lVar13 + 0x38);
  (*pcVar16)(lVar20,0,1,UVar4.unknown);
  lVar7 = (long)*(int *)(puVar5 + 0x30);
  FUN_1000087e4(lVar15,lVar33,&DAT_10054a9c8,&DAT_10041bbe0);
  FUN_1000087e4(lVar20,lVar33 + lVar7,&DAT_10054a9c8,&DAT_10041bbe0);
  pcVar26 = *(code **)(lVar13 + 0x30);
  lVar21 = lVar33;
  (*pcVar26)(lVar33,1,UVar4.unknown);
  if ((int)lVar21 == 1) {
    FUN_10002a29c(lVar20,&DAT_10054a9c8,&DAT_10041bbe0);
    FUN_10002a29c(lVar15,&DAT_10054a9c8,&DAT_10041bbe0);
    lVar7 = lVar33 + lVar7;
    (*pcVar26)(lVar7,1,UVar4.unknown);
    if ((int)lVar7 != 1) {
LAB_1001b52ac:
      FUN_10002a29c(lVar33,&DAT_10054a9c0,&DAT_100422d20);
      goto LAB_1001b54a4;
    }
    FUN_10002a29c(lVar33,&DAT_10054a9c8,&DAT_10041bbe0);
  }
  else {
    FUN_1000087e4(lVar33,lVar19,&DAT_10054a9c8,&DAT_10041bbe0);
    lVar21 = lVar33 + lVar7;
    (*pcVar26)(lVar21,1,UVar4.unknown);
    if ((int)lVar21 == 1) {
      FUN_10002a29c(lVar20,&DAT_10054a9c8,&DAT_10041bbe0);
      FUN_10002a29c(lVar15,&DAT_10054a9c8,&DAT_10041bbe0);
      (**(code **)(lVar13 + 8))(lVar19,UVar4.unknown);
      goto LAB_1001b52ac;
    }
    (**(code **)(lVar13 + 0x20))(lVar14,lVar33 + lVar7,UVar4.unknown);
    puVar5 = &DAT_10054a130;
    FUN_1000036d0(&DAT_10054a130,PTR_typeMetadataAccessor_100520bd8,
                  PTR_Foundation__Foundation__UUID_>Swift__Equatable_100520bf8);
    bVar2 = Swift::Equatable::___infix(lVar19,lVar14,UVar4.unknown,puVar5);
    pcVar26 = *(code **)(lVar13 + 8);
    (*pcVar26)(lVar14,UVar4.unknown);
    FUN_10002a29c(lVar20,&DAT_10054a9c8,&DAT_10041bbe0);
    FUN_10002a29c(lVar15,&DAT_10054a9c8,&DAT_10041bbe0);
    (*pcVar26)(lVar19,UVar4.unknown);
    FUN_10002a29c(lVar33,&DAT_10054a9c8,&DAT_10041bbe0);
    if (!bVar2) goto LAB_1001b54a4;
  }
  (*pcVar16)(lVar18,1,1,UVar4.unknown);
  puVar5 = &DAT_10042a670;
  _swift_getKeyPath(&DAT_10042a670);
  pPVar9 = (Published *)&DAT_10042a698;
  _swift_getKeyPath(&DAT_10042a698);
  FUN_1000087e4(lVar18,lVar17,&DAT_10054a9c8,&DAT_10041bbe0);
  _swift_retain(unaff_x20);
  Combine::Published::_set_subscript(pPVar9,lVar17,unaff_x20,puVar5,pPVar9);
  FUN_1001b69c4();
  FUN_10002a29c(lVar18,&DAT_10054a9c8,&DAT_10041bbe0);
  self = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  NSUserDefaults::removeObjectForKey_(self,pNVar10);
  pPVar24 = *(PassthroughSubject **)
             ((long)unaff_x20 + _TtC7Wallper15PlaylistManager::activationChanged);
  (*pcVar16)(lVar30,1,1,UVar4.unknown);
  puVar1 = (undefined8 *)(lVar30 + *(int *)(lVar3 + 0x14));
  *puVar1 = 0;
  puVar1[1] = 0;
  Combine::PassthroughSubject::send(pPVar24,lVar30);
  FUN_100029548(lVar30,FUN_1001b7b68);
LAB_1001b54a4:
  FUN_1001bb830();
  FUN_1001bbef0();
  return;
}

