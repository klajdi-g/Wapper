// rea decompile_all
// name: FUN_10028c374
// address: 0x10028c374
// body: available
// range: 0x10028c374-0x10028df77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010028dc48) */

undefined1  [16] FUN_10028c374(double param_1,NSDataReadingOptions param_2)

{
  ulong *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  _StringGuts _Var6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  _StringGuts _Var10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  void *pvVar15;
  code *pcVar16;
  bool bVar17;
  Data DVar18;
  Data DVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  Data DVar23;
  char *pcVar24;
  char *pcVar25;
  char *pcVar26;
  char *pcVar27;
  char *pcVar28;
  _StringGuts _Var29;
  char *pcVar30;
  char *pcVar31;
  char *pcVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  undefined8 *puVar38;
  _StringGuts _Var39;
  Data *pDVar40;
  char *pcVar41;
  _StringGuts _Var42;
  ulong uVar43;
  long lVar44;
  char *pcVar45;
  void *pvVar46;
  uint uVar47;
  uint uVar48;
  int iVar49;
  long lVar50;
  undefined8 uVar51;
  long lVar52;
  undefined8 *unaff_x19;
  ulong uVar53;
  ulong *puVar54;
  long *plVar55;
  ulong uVar56;
  _StringGuts unaff_x20;
  long unaff_x21;
  undefined *puVar57;
  ulong uVar58;
  Data DVar59;
  ulong uVar60;
  long lVar61;
  _StringGuts _Var62;
  ulong uVar63;
  ulong uVar64;
  long lVar65;
  Data DVar66;
  Data DVar67;
  double dVar68;
  undefined1 auVar69 [16];
  String SVar70;
  String SVar71;
  String SVar72;
  String SVar73;
  String SVar74;
  String SVar75;
  String SVar76;
  String SVar77;
  long local_198;
  char *local_158;
  undefined *local_140;
  char *local_128;
  long local_110;
  ulong uStack_108;
  Data local_100;
  Data DStack_f8;
  String local_f0;
  Data local_d8;
  char *pcStack_d0;
  undefined4 local_a8 [10];
  undefined4 local_80 [4];
  long local_58;
  
  pcVar41 = (char *)0x0;
  DVar18 = Foundation::Data::_init(param_2);
  if (unaff_x21 != 0) goto LAB_10028ca50;
  uVar48 = (uint)((ulong)pcVar41 >> 0x20);
  uVar47 = uVar48 >> 0x1e;
  local_d8 = DVar18;
  pcStack_d0 = pcVar41;
  if (uVar48 >> 0x1e < 2) {
    if (uVar47 == 0) {
      uVar53 = (ulong)pcVar41 >> 0x30 & 0xff;
    }
    else {
      iVar49 = (int)((ulong)DVar18.unknown >> 0x20);
      if (SBORROW4(iVar49,(int)DVar18.unknown)) {
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x10028dd68);
        (*pcVar16)();
      }
      uVar53 = (ulong)(iVar49 - (int)DVar18.unknown);
LAB_10028c3f0:
      if ((long)uVar53 < 0) {
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x10028c3f8);
        (*pcVar16)();
      }
    }
  }
  else {
    if (uVar47 == 2) {
      uVar53 = *(long *)(DVar18.unknown + 0x18) - *(long *)(DVar18.unknown + 0x10);
      if (SBORROW8(*(long *)(DVar18.unknown + 0x18),*(long *)(DVar18.unknown + 0x10))) {
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x10028c3e0);
        (*pcVar16)();
      }
      goto LAB_10028c3f0;
    }
    uVar53 = 0;
  }
  unaff_x20.unknown = (char *)0x766f6f6d;
  FUN_10011a30c();
  DVar19 = DVar18;
  FUN_10028a5d4(DVar18.unknown,pcVar41,0,uVar53);
  FUN_100093624(DVar18.unknown,pcVar41);
  uVar53 = *(ulong *)((long)DVar19.unknown + 0x10);
  puVar54 = (ulong *)((long)DVar19.unknown + 0x38);
  lVar44 = uVar53 + 1;
  do {
    lVar44 = lVar44 + -1;
    if (lVar44 == 0) {
      _swift_bridgeObjectRelease();
      FUN_10028df78();
      unaff_x19 = (undefined8 *)&DAT_100536d68;
      _swift_allocError(&DAT_100536d68,DVar19.unknown,0,0);
      uVar53 = 0x20766f6f6d206f6e;
      goto LAB_10028ca28;
    }
    puVar1 = puVar54 + -3;
    _Var6.unknown = (undefined *)puVar54[-2];
    uVar43 = puVar54[-1];
    uVar7 = *puVar54;
    if ((undefined *)*puVar1 == (undefined *)0x766f6f6d &&
        _Var6.unknown == (undefined *)0xe400000000000000) break;
    puVar54 = puVar54 + 4;
    bVar17 = Swift::_stringCompareWithSmolCheck
                       ((undefined *)*puVar1,_Var6,(_StringComparisonResult)0x6d);
  } while (!bVar17);
  if (SCARRY8(uVar43,8)) {
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x10028d74c);
    (*pcVar16)();
  }
  pvVar46 = (void *)(uVar43 + uVar7);
  if (SCARRY8(uVar43,uVar7)) {
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x10028d750);
    (*pcVar16)();
  }
  if ((long)pvVar46 < (long)(uVar43 + 8)) {
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x10028d754);
    (*pcVar16)();
  }
  unaff_x20.unknown = (char *)0x6468766d;
  _swift_bridgeObjectRetain(_Var6.unknown);
  DVar59 = DVar18;
  FUN_10028a5d4(DVar18.unknown,pcVar41,uVar43 + 8);
  lVar65 = *(long *)(DVar59.unknown + 0x10);
  lVar44 = lVar65 + 1;
  plVar55 = (long *)(DVar59.unknown + 0x30);
  do {
    lVar44 = lVar44 + -1;
    if (lVar44 == 0) {
      _swift_bridgeObjectRelease(_Var6.unknown);
      _swift_bridgeObjectRelease(DVar59.unknown);
      _swift_bridgeObjectRelease();
      FUN_10028df78();
      unaff_x19 = (undefined8 *)&DAT_100536d68;
      _swift_allocError(&DAT_100536d68,DVar19.unknown,0,0);
      uVar53 = 0x68766d206f6e;
      goto LAB_10028ca24;
    }
    _Var29.unknown = (undefined *)plVar55[-1];
    lVar61 = *plVar55;
    if ((undefined *)plVar55[-2] == (undefined *)0x6468766d &&
        _Var29.unknown == (undefined *)0xe400000000000000) break;
    pvVar46 = (void *)0xe400000000000000;
    bVar17 = Swift::_stringCompareWithSmolCheck
                       ((undefined *)plVar55[-2],_Var29,(_StringComparisonResult)0x6d);
    plVar55 = plVar55 + 4;
  } while (!bVar17);
  lVar44 = lVar61 + 8;
  if (SCARRY8(lVar61,8)) {
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x10028da00);
    (*pcVar16)();
  }
  _swift_bridgeObjectRetain(_Var29.unknown);
  lVar20 = lVar44;
  __Foundation_Data__Representation_subscript_getter____Swift_Int___>_Swift_UInt8
            (lVar44,DVar18.unknown,pcVar41);
  lVar61 = 0x14;
  if (((uint)lVar20 & 0xff) != 1) {
    lVar61 = 0xc;
  }
  lVar52 = lVar44 + lVar61;
  if (SCARRY8(lVar44,lVar61)) {
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x10028da04);
    (*pcVar16)();
  }
  lVar50 = lVar52;
  __Foundation_Data__Representation_subscript_getter____Swift_Int___>_Swift_UInt8
            (lVar52,DVar18.unknown,pcVar41);
  lVar61 = lVar52 + 1;
  if (SCARRY8(lVar52,1)) {
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x10028da08);
    (*pcVar16)();
  }
  __Foundation_Data__Representation_subscript_getter____Swift_Int___>_Swift_UInt8
            (lVar61,DVar18.unknown,pcVar41);
  lVar21 = lVar52 + 2;
  if (SCARRY8(lVar52,2)) {
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x10028da0c);
    (*pcVar16)();
  }
  __Foundation_Data__Representation_subscript_getter____Swift_Int___>_Swift_UInt8
            (lVar21,DVar18.unknown,pcVar41);
  uVar48 = (int)lVar52 + 3;
  if (SCARRY8(lVar52,3)) {
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x10028da10);
    (*pcVar16)();
  }
  DVar23 = DVar18;
  pcVar45 = pcVar41;
  __Foundation_Data__Representation_subscript_getter____Swift_Int___>_Swift_UInt8();
  uVar48 = (int)lVar50 << 0x18 | ((uint)lVar61 & 0xff) << 0x10 | ((uint)lVar21 & 0xff) << 8 |
           uVar48 & 0xff;
  uVar56 = CONCAT44(0,uVar48);
  if (uVar48 != 0) {
    uVar63 = 0;
    local_128 = PTR___swiftEmptyArrayStorage_100524190;
    do {
      puVar38 = (undefined8 *)(DVar59.unknown + uVar63 * 0x20 + 0x38);
      uVar58 = uVar63;
      do {
        uVar63 = uVar58 + 1;
        if (uVar63 - lVar65 == 1) {
          _swift_bridgeObjectRelease(DVar59.unknown);
          puVar57 = *(undefined **)(local_128 + 0x10);
          if (puVar57 != (undefined *)0x1) {
            _swift_bridgeObjectRelease(DVar19.unknown);
            _swift_bridgeObjectRelease(_Var6.unknown);
            _swift_bridgeObjectRelease(_Var29.unknown);
            local_f0.str = (char *)0x0;
            local_f0.bridgeObject = (void *)0xe000000000000000;
            Swift::_StringGuts::grow(0x17,(_StringGuts)DVar23.unknown);
            _swift_release(local_128);
            pvVar15 = local_f0.bridgeObject;
            local_100.unknown = puVar57;
            SVar71 = Swift::CustomStringConvertible::get_description();
            _swift_bridgeObjectRelease(pvVar15);
            puVar38 = (undefined8 *)0xd000000000000015;
            SVar70.bridgeObject = (void *)0x80000001004e34d0;
            SVar70.str = (char *)0xd000000000000015;
            SVar73.bridgeObject = pvVar46;
            SVar73.str = pcVar45;
            local_f0 = SVar71;
            Swift::String::append(SVar70,SVar73);
            unaff_x20.unknown = local_f0.str;
            pvVar46 = local_f0.bridgeObject;
            FUN_10028df78();
            unaff_x19 = (undefined8 *)&DAT_100536d68;
            _swift_allocError(&DAT_100536d68,puVar38,0,0);
            *puVar38 = unaff_x20.unknown;
            puVar38[1] = pvVar46;
            goto LAB_10028ca38;
          }
          uVar51 = *(undefined8 *)(local_128 + 0x28);
          lVar65 = *(long *)(local_128 + 0x30);
          lVar61 = *(long *)(local_128 + 0x38);
          _swift_bridgeObjectRetain(uVar51);
          _swift_release(local_128);
          if (SCARRY8(lVar65,8)) {
                    /* WARNING: Does not return */
            pcVar16 = (code *)SoftwareBreakpoint(1,0x10028de4c);
            (*pcVar16)();
          }
          if (SCARRY8(lVar65,lVar61)) {
                    /* WARNING: Does not return */
            pcVar16 = (code *)SoftwareBreakpoint(1,0x10028de50);
            (*pcVar16)();
          }
          if (lVar65 + lVar61 < lVar65 + 8) {
                    /* WARNING: Does not return */
            pcVar16 = (code *)SoftwareBreakpoint(1,0x10028de54);
            (*pcVar16)();
          }
          DVar59 = DVar18;
          FUN_10028a5d4(DVar18.unknown,pcVar41);
          lVar50 = *(long *)((long)DVar59.unknown + 0x10);
          plVar55 = (long *)((long)DVar59.unknown + 0x38);
          lVar52 = lVar50 + 1;
          goto LAB_10028c7b8;
        }
        if (*(ulong *)(DVar59.unknown + 0x10) <= uVar58) {
                    /* WARNING: Does not return */
          pcVar16 = (code *)SoftwareBreakpoint(1,0x10028d224);
          (*pcVar16)();
        }
        _Var39.unknown = (undefined *)puVar38[-3];
        _Var62.unknown = (undefined *)puVar38[-2];
        uVar51 = puVar38[-1];
        uVar8 = *puVar38;
        if (_Var39.unknown == (undefined *)0x6b617274 &&
            _Var62.unknown == (undefined *)0xe400000000000000) break;
        puVar38 = puVar38 + 4;
        pcVar45 = (char *)0x6b617274;
        pvVar46 = (void *)0xe400000000000000;
        DVar23.unknown = _Var62.unknown;
        bVar17 = Swift::_stringCompareWithSmolCheck(_Var39,_Var62,(_StringComparisonResult)0x74);
        uVar58 = uVar63;
      } while (!bVar17);
      _swift_bridgeObjectRetain(_Var62.unknown);
      pcVar24 = local_128;
      _swift_isUniquelyReferenced_nonNull_native();
      local_f0.str = local_128;
      if (((ulong)pcVar24 & 1) == 0) {
        DVar23.unknown = (undefined *)(*(long *)(local_128 + 0x10) + 1);
        pcVar45 = (char *)0x1;
        FUN_1001c5ef4(0);
        local_128 = local_f0.str;
      }
      uVar58 = *(ulong *)(local_128 + 0x10);
      if (*(ulong *)(local_128 + 0x18) >> 1 <= uVar58) {
        pcVar45 = (char *)0x1;
        DVar23.unknown = (undefined *)(uVar58 + 1);
        FUN_1001c5ef4(1 < *(ulong *)(local_128 + 0x18));
        local_128 = local_f0.str;
      }
      *(undefined **)(local_128 + 0x10) = (undefined *)(uVar58 + 1);
      *(undefined **)(local_128 + uVar58 * 0x20 + 0x20) = _Var39.unknown;
      *(undefined **)(local_128 + uVar58 * 0x20 + 0x28) = _Var62.unknown;
      *(undefined8 *)(local_128 + uVar58 * 0x20 + 0x30) = uVar51;
      *(undefined8 *)(local_128 + uVar58 * 0x20 + 0x38) = uVar8;
    } while( true );
  }
  _swift_bridgeObjectRelease(DVar19.unknown);
  _swift_bridgeObjectRelease(_Var6.unknown);
  _swift_bridgeObjectRelease(DVar59.unknown);
  _swift_bridgeObjectRelease();
  unaff_x20.unknown = (char *)0x80000001004e34b0;
  FUN_10028df78();
  unaff_x19 = (undefined8 *)&DAT_100536d68;
  _swift_allocError(&DAT_100536d68,_Var29.unknown,0,0);
  *(undefined8 *)_Var29.unknown = 0xd000000000000017;
  *(undefined8 *)((long)_Var29.unknown + 8) = 0x80000001004e34b0;
  _swift_willThrow();
  goto LAB_10028ca48;
  while( true ) {
    plVar55 = plVar55 + 4;
    bVar17 = Swift::_stringCompareWithSmolCheck
                       ((undefined *)*plVar2,_Var39,(_StringComparisonResult)0x74);
    if (bVar17) break;
LAB_10028c7b8:
    lVar52 = lVar52 + -1;
    unaff_x20.unknown = _Var29.unknown;
    if (lVar52 == 0) {
      _swift_bridgeObjectRelease(_Var6.unknown);
      _swift_bridgeObjectRelease(_Var29.unknown);
      _swift_bridgeObjectRelease(uVar51);
      _swift_bridgeObjectRelease(DVar59.unknown);
      _swift_bridgeObjectRelease();
      FUN_10028df78();
      unaff_x19 = (undefined8 *)&DAT_100536d68;
      _swift_allocError(&DAT_100536d68,DVar19.unknown,0,0);
      uVar53 = 0x686b74206f6e;
      goto LAB_10028ca24;
    }
    plVar2 = plVar55 + -3;
    _Var39.unknown = (undefined *)plVar55[-2];
    lVar21 = plVar55[-1];
    lVar9 = *plVar55;
    if ((undefined *)*plVar2 == (undefined *)0x64686b74 &&
        _Var39.unknown == (undefined *)0xe400000000000000) break;
  }
  lVar52 = lVar21 + 8;
  if (SCARRY8(lVar21,8)) {
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x10028de58);
    (*pcVar16)();
  }
  _swift_bridgeObjectRetain(_Var39.unknown);
  lVar22 = lVar52;
  __Foundation_Data__Representation_subscript_getter____Swift_Int___>_Swift_UInt8
            (lVar52,DVar18.unknown,pcVar41);
  puVar38 = (undefined8 *)((long)DVar59.unknown + 0x38);
  uVar63 = 0xffffffffffffffff;
  do {
    if (uVar63 - lVar50 == -1) {
      _swift_bridgeObjectRelease(_Var6.unknown);
      _swift_bridgeObjectRelease(_Var29.unknown);
      _swift_bridgeObjectRelease(uVar51);
      _swift_bridgeObjectRelease(_Var39.unknown);
      _swift_bridgeObjectRelease(DVar59.unknown);
      _swift_bridgeObjectRelease();
      FUN_10028df78();
      unaff_x19 = (undefined8 *)&DAT_100536d68;
      _swift_allocError(&DAT_100536d68,DVar19.unknown,0,0);
      uVar53 = 0x206169646d206f6e;
      goto LAB_10028ca28;
    }
    uVar63 = uVar63 + 1;
    if (*(ulong *)((long)DVar59.unknown + 0x10) <= uVar63) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x10028d73c);
      (*pcVar16)();
    }
    puVar3 = puVar38 + -3;
    puVar5 = puVar38 + -2;
    lVar37 = puVar38[-1];
    unaff_x20.unknown = (undefined *)*puVar38;
    if ((undefined *)*puVar3 == (undefined *)0x6169646d &&
        (undefined *)*puVar5 == (undefined *)0xe400000000000000) break;
    puVar38 = puVar38 + 4;
    bVar17 = Swift::_stringCompareWithSmolCheck
                       ((undefined *)*puVar3,(undefined *)*puVar5,(_StringComparisonResult)0x6d);
  } while (!bVar17);
  if (SCARRY8(lVar37,8)) {
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x10028de5c);
    (*pcVar16)();
  }
  if (SCARRY8(lVar37,(long)unaff_x20.unknown)) {
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x10028de60);
    (*pcVar16)();
  }
  if ((long)(unaff_x20.unknown + lVar37) < lVar37 + 8) {
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x10028de64);
    (*pcVar16)();
  }
  DVar23 = DVar18;
  FUN_10028a5d4(DVar18.unknown,pcVar41);
  uVar63 = *(ulong *)((long)DVar23.unknown + 0x10);
  lVar37 = uVar63 + 1;
  puVar54 = (ulong *)((long)DVar23.unknown + 0x30);
LAB_10028c8d4:
  lVar37 = lVar37 + -1;
  if (lVar37 != 0) goto code_r0x00010028c8dc;
  _swift_bridgeObjectRelease(_Var6.unknown);
  _swift_bridgeObjectRelease(_Var29.unknown);
  _swift_bridgeObjectRelease(uVar51);
  _swift_bridgeObjectRelease(_Var39.unknown);
  _swift_bridgeObjectRelease(DVar23.unknown);
  _swift_bridgeObjectRelease(DVar59.unknown);
  _swift_bridgeObjectRelease();
  FUN_10028df78();
  unaff_x19 = (undefined8 *)&DAT_100536d68;
  _swift_allocError(&DAT_100536d68,DVar19.unknown,0,0);
  uVar53 = 0x68646d206f6e;
LAB_10028ca24:
  uVar53 = uVar53 | 0x2064000000000000;
LAB_10028ca28:
  *(ulong *)DVar19.unknown = uVar53;
  *(ulong *)((long)DVar19.unknown + 8) = 0xec0000006d6f7461;
LAB_10028ca38:
  _swift_willThrow();
  goto LAB_10028ca48;
code_r0x00010028c8dc:
  _Var62.unknown = (undefined *)puVar54[-1];
  unaff_x20.unknown = (undefined *)*puVar54;
  if (((undefined *)puVar54[-2] == (undefined *)0x6468646d &&
       _Var62.unknown == (undefined *)0xe400000000000000) ||
     (bVar17 = Swift::_stringCompareWithSmolCheck
                         ((undefined *)puVar54[-2],_Var62,(_StringComparisonResult)0x6d),
     puVar54 = puVar54 + 4, bVar17)) goto LAB_10028c90c;
  goto LAB_10028c8d4;
LAB_10028c90c:
  pcVar45 = unaff_x20.unknown + 8;
  if (SCARRY8((long)unaff_x20.unknown,8)) {
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x10028de68);
    (*pcVar16)();
  }
  _swift_bridgeObjectRetain(_Var62.unknown);
  pcVar24 = pcVar45;
  __Foundation_Data__Representation_subscript_getter____Swift_Int___>_Swift_UInt8
            (pcVar45,DVar18.unknown,pcVar41);
  lVar37 = 0x14;
  if (((uint)pcVar24 & 0xff) != 1) {
    lVar37 = 0xc;
  }
  pcVar30 = pcVar45 + lVar37;
  if (SCARRY8((long)pcVar45,lVar37)) {
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x10028de6c);
    (*pcVar16)();
  }
  pcVar25 = pcVar30;
  __Foundation_Data__Representation_subscript_getter____Swift_Int___>_Swift_UInt8
            (pcVar30,DVar18.unknown,pcVar41);
  pcVar26 = pcVar30 + 1;
  if (SCARRY8((long)pcVar30,1)) {
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x10028de70);
    (*pcVar16)();
  }
  __Foundation_Data__Representation_subscript_getter____Swift_Int___>_Swift_UInt8
            (pcVar26,DVar18.unknown,pcVar41);
  pcVar27 = pcVar30 + 2;
  if (SCARRY8((long)pcVar30,2)) {
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x10028de74);
    (*pcVar16)();
  }
  __Foundation_Data__Representation_subscript_getter____Swift_Int___>_Swift_UInt8
            (pcVar27,DVar18.unknown,pcVar41);
  pcVar28 = pcVar30 + 3;
  if (SCARRY8((long)pcVar30,3)) {
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x10028de78);
    (*pcVar16)();
  }
  __Foundation_Data__Representation_subscript_getter____Swift_Int___>_Swift_UInt8
            (pcVar28,DVar18.unknown,pcVar41);
  _swift_bridgeObjectRelease(_Var62.unknown);
  if (((uint)pcVar24 & 0xff) == 1) {
    if (SCARRY8((long)pcVar45,0x18)) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x10028de7c);
      (*pcVar16)();
    }
    DVar66 = DVar18;
    FUN_10028ae04(DVar18.unknown,pcVar41,unaff_x20.unknown + 0x20);
  }
  else {
    pcVar24 = unaff_x20.unknown + 0x18;
    if (SCARRY8((long)pcVar45,0x10)) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x10028de80);
      (*pcVar16)();
    }
    pcVar30 = pcVar24;
    __Foundation_Data__Representation_subscript_getter____Swift_Int___>_Swift_UInt8
              (pcVar24,DVar18.unknown,pcVar41);
    pcVar45 = unaff_x20.unknown + 0x19;
    if (SCARRY8((long)pcVar24,1)) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x10028de84);
      (*pcVar16)();
    }
    __Foundation_Data__Representation_subscript_getter____Swift_Int___>_Swift_UInt8
              (pcVar45,DVar18.unknown,pcVar41);
    pcVar31 = unaff_x20.unknown + 0x1a;
    if (SCARRY8((long)pcVar24,2)) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x10028de88);
      (*pcVar16)();
    }
    __Foundation_Data__Representation_subscript_getter____Swift_Int___>_Swift_UInt8
              (pcVar31,DVar18.unknown,pcVar41);
    pcVar32 = unaff_x20.unknown + 0x1b;
    if (SCARRY8((long)pcVar24,3)) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x10028de8c);
      (*pcVar16)();
    }
    __Foundation_Data__Representation_subscript_getter____Swift_Int___>_Swift_UInt8
              (pcVar32,DVar18.unknown,pcVar41);
    DVar66.unknown =
         (undefined *)
         ((ulong)(uint)((int)pcVar30 << 0x18) | ((ulong)pcVar45 & 0xff) << 0x10 |
          ((ulong)pcVar31 & 0xff) << 8 | (ulong)pcVar32 & 0xff);
  }
  uVar48 = (int)pcVar25 << 0x18 | ((uint)pcVar26 & 0xff) << 0x10 | ((uint)pcVar27 & 0xff) << 8 |
           (uint)pcVar28 & 0xff;
  uVar58 = (ulong)uVar48;
  if ((uVar48 == 0) || (DVar66.unknown == (undefined *)0x0)) {
    _swift_bridgeObjectRelease(_Var39.unknown);
    _swift_bridgeObjectRelease(DVar23.unknown);
    _swift_bridgeObjectRelease(DVar19.unknown);
    _swift_bridgeObjectRelease(_Var6.unknown);
    _swift_bridgeObjectRelease(_Var29.unknown);
    _swift_bridgeObjectRelease(uVar51);
    _swift_bridgeObjectRelease();
    FUN_10028df78();
    unaff_x19 = (undefined8 *)&DAT_100536d68;
    _swift_allocError(&DAT_100536d68,DVar59.unknown,0,0);
    *(undefined8 *)DVar59.unknown = 0x656d207974706d65;
    *(undefined8 *)((long)DVar59.unknown + 8) = 0xeb00000000616964;
    _swift_willThrow();
    unaff_x20.unknown = pcVar41;
  }
  else {
    plVar55 = (long *)((long)DVar59.unknown + 0x38);
    uVar60 = 0xffffffffffffffff;
    do {
      if (uVar60 - lVar50 == -1) {
        _swift_bridgeObjectRelease(DVar59.unknown);
        auVar11._8_8_ = 0;
        auVar11._0_8_ = DVar66.unknown;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar56;
        if (SUB168(auVar11 * auVar13,8) != 0) {
                    /* WARNING: Does not return */
          pcVar16 = (code *)SoftwareBreakpoint(1,0x10028dea0);
          (*pcVar16)();
        }
        if ((long)DVar66.unknown * uVar56 < uVar58) goto LAB_10028d1b4;
        _Var62.unknown = (undefined *)0x0;
        local_58 = 0;
        local_198 = 0;
        DVar67.unknown = (undefined *)0x0;
        DVar59.unknown = (undefined *)0x0;
        if (uVar58 != 0) {
          DVar59.unknown = (undefined *)(((long)DVar66.unknown * uVar56) / uVar58);
        }
        goto LAB_10028d238;
      }
      uVar60 = uVar60 + 1;
      if (*(ulong *)((long)DVar59.unknown + 0x10) <= uVar60) {
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x10028dd94);
        (*pcVar16)();
      }
      plVar2 = plVar55 + -3;
      _Var62.unknown = (undefined *)plVar55[-2];
      local_58 = plVar55[-1];
      local_198 = *plVar55;
      if ((undefined *)*plVar2 == (undefined *)0x73746465 &&
          _Var62.unknown == (undefined *)0xe400000000000000) break;
      plVar55 = plVar55 + 4;
      bVar17 = Swift::_stringCompareWithSmolCheck
                         ((undefined *)*plVar2,_Var62,(_StringComparisonResult)0x65);
    } while (!bVar17);
    _swift_bridgeObjectRetain(_Var62.unknown);
    _swift_bridgeObjectRelease(DVar59.unknown);
    pcVar45 = (char *)(local_58 + 8);
    if (SCARRY8(local_58,8)) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x10028de90);
      (*pcVar16)();
    }
    pvVar46 = (void *)(local_58 + local_198);
    if (SCARRY8(local_58,local_198)) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x10028de94);
      (*pcVar16)();
    }
    if ((long)pvVar46 < (long)pcVar45) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x10028de98);
      (*pcVar16)();
    }
    DVar59 = DVar18;
    _Var42.unknown = pcVar41;
    FUN_10028a5d4();
    puVar57 = *(undefined **)(DVar59.unknown + 0x10);
    if (puVar57 == (undefined *)0x1) {
                    /* WARNING: Load size is inaccurate */
      _Var10.unknown = DVar59.unknown[0x28];
      lVar50 = *(long *)(DVar59.unknown + 0x30);
      if (DVar59.unknown[0x20] != (undefined *)0x74736c65 ||
          _Var10.unknown != (undefined *)0xe400000000000000) {
        pcVar45 = (char *)0x74736c65;
        pvVar46 = (void *)0xe400000000000000;
        _Var42.unknown = _Var10.unknown;
        bVar17 = Swift::_stringCompareWithSmolCheck
                           ((_StringGuts)DVar59.unknown[0x20],_Var10,(_StringComparisonResult)0x65);
        if (!bVar17) goto LAB_10028d08c;
      }
      _swift_bridgeObjectRetain(_Var10.unknown);
      _swift_bridgeObjectRelease(DVar59.unknown);
      lVar37 = lVar50 + 8;
      if (SCARRY8(lVar50,8)) {
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x10028dea4);
        (*pcVar16)();
      }
      lVar33 = lVar37;
      __Foundation_Data__Representation_subscript_getter____Swift_Int___>_Swift_UInt8
                (lVar37,DVar18.unknown,pcVar41);
      lVar4 = lVar50 + 0xc;
      if (SCARRY8(lVar37,4)) {
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x10028dea8);
        (*pcVar16)();
      }
      lVar34 = lVar4;
      __Foundation_Data__Representation_subscript_getter____Swift_Int___>_Swift_UInt8
                (lVar4,DVar18.unknown,pcVar41);
      lVar35 = lVar50 + 0xd;
      if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x10028deac);
        (*pcVar16)();
      }
      __Foundation_Data__Representation_subscript_getter____Swift_Int___>_Swift_UInt8
                (lVar35,DVar18.unknown,pcVar41);
      lVar36 = lVar50 + 0xe;
      if (SCARRY8(lVar4,2)) {
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x10028deb0);
        (*pcVar16)();
      }
      __Foundation_Data__Representation_subscript_getter____Swift_Int___>_Swift_UInt8
                (lVar36,DVar18.unknown,pcVar41);
      uVar48 = (int)lVar50 + 0xf;
      if (SCARRY8(lVar4,3)) {
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x10028deb4);
        (*pcVar16)();
      }
      DVar59 = DVar18;
      pcVar45 = pcVar41;
      __Foundation_Data__Representation_subscript_getter____Swift_Int___>_Swift_UInt8();
      uVar48 = (int)lVar34 << 0x18 | ((uint)lVar35 & 0xff) << 0x10 | ((uint)lVar36 & 0xff) << 8 |
               uVar48 & 0xff;
      if (uVar48 == 1) {
        lVar4 = lVar50 + 0x10;
        if (((uint)lVar33 & 0xff) == 1) {
          if (SCARRY8(lVar37,8)) {
                    /* WARNING: Does not return */
            pcVar16 = (code *)SoftwareBreakpoint(1,0x10028ded0);
            (*pcVar16)();
          }
          DVar59 = DVar18;
          FUN_10028ae04(DVar18.unknown,pcVar41,lVar4);
          if (SCARRY8(lVar37,0x10)) {
                    /* WARNING: Does not return */
            pcVar16 = (code *)SoftwareBreakpoint(1,0x10028ded8);
            (*pcVar16)();
          }
          DVar67 = DVar18;
          FUN_10028ae04(DVar18.unknown,pcVar41,lVar50 + 0x18);
          _swift_bridgeObjectRelease(_Var10.unknown);
          lVar4 = lVar50 + 0x20;
          if (SCARRY8(lVar37,0x18)) {
                    /* WARNING: Does not return */
            pcVar16 = (code *)SoftwareBreakpoint(1,0x10028dee0);
            (*pcVar16)();
          }
          lVar33 = lVar4;
          __Foundation_Data__Representation_subscript_getter____Swift_Int___>_Swift_UInt8
                    (lVar4,DVar18.unknown,pcVar41);
          lVar37 = lVar50 + 0x21;
          if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
            pcVar16 = (code *)SoftwareBreakpoint(1,0x10028dee8);
            (*pcVar16)();
          }
          __Foundation_Data__Representation_subscript_getter____Swift_Int___>_Swift_UInt8
                    (lVar37,DVar18.unknown,pcVar41);
          lVar35 = lVar50 + 0x22;
          if (SCARRY8(lVar4,2)) {
                    /* WARNING: Does not return */
            pcVar16 = (code *)SoftwareBreakpoint(1,0x10028def0);
            (*pcVar16)();
          }
          __Foundation_Data__Representation_subscript_getter____Swift_Int___>_Swift_UInt8
                    (lVar35,DVar18.unknown,pcVar41);
          lVar50 = lVar50 + 0x23;
          if (SCARRY8(lVar4,3)) {
                    /* WARNING: Does not return */
            pcVar16 = (code *)SoftwareBreakpoint(1,0x10028def8);
            (*pcVar16)();
          }
          __Foundation_Data__Representation_subscript_getter____Swift_Int___>_Swift_UInt8
                    (lVar50,DVar18.unknown,pcVar41);
          uVar48 = (int)lVar33 << 0x18 | ((uint)lVar37 & 0xff) << 0x10 | ((uint)lVar35 & 0xff) << 8
                   | (uint)lVar50 & 0xff;
        }
        else {
          if (SCARRY8(lVar37,8)) {
                    /* WARNING: Does not return */
            pcVar16 = (code *)SoftwareBreakpoint(1,0x10028ded4);
            (*pcVar16)();
          }
          lVar33 = lVar4;
          __Foundation_Data__Representation_subscript_getter____Swift_Int___>_Swift_UInt8
                    (lVar4,DVar18.unknown,pcVar41);
          uVar58 = lVar50 + 0x11;
          if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
            pcVar16 = (code *)SoftwareBreakpoint(1,0x10028dedc);
            (*pcVar16)();
          }
          __Foundation_Data__Representation_subscript_getter____Swift_Int___>_Swift_UInt8
                    (uVar58,DVar18.unknown,pcVar41);
          uVar60 = lVar50 + 0x12;
          if (SCARRY8(lVar4,2)) {
                    /* WARNING: Does not return */
            pcVar16 = (code *)SoftwareBreakpoint(1,0x10028dee4);
            (*pcVar16)();
          }
          __Foundation_Data__Representation_subscript_getter____Swift_Int___>_Swift_UInt8
                    (uVar60,DVar18.unknown,pcVar41);
          uVar64 = lVar50 + 0x13;
          if (SCARRY8(lVar4,3)) {
                    /* WARNING: Does not return */
            pcVar16 = (code *)SoftwareBreakpoint(1,0x10028deec);
            (*pcVar16)();
          }
          __Foundation_Data__Representation_subscript_getter____Swift_Int___>_Swift_UInt8
                    (uVar64,DVar18.unknown,pcVar41);
          if (SCARRY8(lVar37,0xc)) {
                    /* WARNING: Does not return */
            pcVar16 = (code *)SoftwareBreakpoint(1,0x10028def4);
            (*pcVar16)();
          }
          DVar67 = DVar18;
          FUN_10028af44(DVar18.unknown,pcVar41,lVar50 + 0x14);
          _swift_bridgeObjectRelease(_Var10.unknown);
          if (SCARRY8(lVar37,0x10)) {
                    /* WARNING: Does not return */
            pcVar16 = (code *)SoftwareBreakpoint(1,0x10028defc);
            (*pcVar16)();
          }
          DVar59.unknown =
               (undefined *)
               ((ulong)(uint)((int)lVar33 << 0x18) | (uVar58 & 0xff) << 0x10 | (uVar60 & 0xff) << 8
               | uVar64 & 0xff);
          DVar67.unknown = DVar67.unknown & 0xffffffff;
          FUN_10028af44(DVar18.unknown,pcVar41,lVar50 + 0x18);
          uVar48 = (uint)DVar18.unknown;
        }
        if ((DVar67.unknown == (undefined *)0xffffffff) || (uVar48 != 0x10000)) {
          _swift_bridgeObjectRelease(DVar23.unknown);
          _swift_bridgeObjectRelease(_Var62.unknown);
          _swift_bridgeObjectRelease(DVar19.unknown);
          _swift_bridgeObjectRelease(_Var6.unknown);
          _swift_bridgeObjectRelease(_Var29.unknown);
          _swift_bridgeObjectRelease(uVar51);
          _swift_bridgeObjectRelease();
          pcVar41 = " tracks, expected one";
          FUN_10028df78();
          unaff_x19 = (undefined8 *)&DAT_100536d68;
          _swift_allocError(&DAT_100536d68,_Var39.unknown,0,0);
          uVar51 = 0xd00000000000001d;
        }
        else {
          if (DVar59.unknown != (undefined *)0x0) {
LAB_10028d238:
            dVar68 = (double)(long)(param_1 / ((double)DVar59.unknown / (double)uVar56));
            if (0x7fefffffffffffff < (ulong)ABS(dVar68)) {
                    /* WARNING: Does not return */
              pcVar16 = (code *)SoftwareBreakpoint(1,0x10028deb8);
              (*pcVar16)();
            }
            if (dVar68 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
              pcVar16 = (code *)SoftwareBreakpoint(1,0x10028debc);
              (*pcVar16)();
            }
            if (9.223372036854776e+18 <= dVar68) {
                    /* WARNING: Does not return */
              pcVar16 = (code *)SoftwareBreakpoint(1,0x10028dec0);
              (*pcVar16)();
            }
            uVar58 = 0;
            if (DVar59.unknown != (undefined *)0x0) {
              uVar58 = 0xffffffff / (ulong)DVar59.unknown;
            }
            if ((long)dVar68 <= (long)uVar58) {
              uVar58 = (long)dVar68;
            }
            if ((long)uVar58 < 2) {
              _swift_bridgeObjectRelease(DVar19.unknown);
              _swift_bridgeObjectRelease(_Var6.unknown);
              _swift_bridgeObjectRelease(_Var29.unknown);
              _swift_bridgeObjectRelease(uVar51);
              _swift_bridgeObjectRelease(_Var39.unknown);
              _swift_bridgeObjectRelease(DVar23.unknown);
              _swift_bridgeObjectRelease(_Var62.unknown);
              unaff_x19 = (undefined8 *)0x0;
              unaff_x20.unknown = (char *)0x1;
              DVar18.unknown = local_d8.unknown;
              pcVar41 = pcStack_d0;
            }
            else {
              auVar12._8_8_ = 0;
              auVar12._0_8_ = DVar59.unknown;
              auVar14._8_8_ = 0;
              auVar14._0_8_ = uVar58;
              if (SUB168(auVar12 * auVar14,8) != 0) {
                    /* WARNING: Does not return */
                pcVar16 = (code *)SoftwareBreakpoint(1,0x10028dec8);
                (*pcVar16)();
              }
              uVar60 = (long)DVar59.unknown * uVar58;
              if (uVar60 >> 0x20 != 0) {
                    /* WARNING: Does not return */
                pcVar16 = (code *)SoftwareBreakpoint(1,0x10028decc);
                (*pcVar16)();
              }
              if ((ulong)DVar67.unknown >> 0x20 != 0) {
                _swift_bridgeObjectRelease(DVar19.unknown);
                _swift_bridgeObjectRelease(_Var6.unknown);
                _swift_bridgeObjectRelease(_Var29.unknown);
                _swift_bridgeObjectRelease(uVar51);
                _swift_bridgeObjectRelease(_Var39.unknown);
                _swift_bridgeObjectRelease();
                unaff_x20.unknown = (char *)0x80000001004e3530;
                FUN_10028df78();
                unaff_x19 = (undefined8 *)&DAT_100536d68;
                _swift_allocError(&DAT_100536d68,DVar23.unknown,0,0);
                *(ulong *)DVar23.unknown = 0xd000000000000019;
                *(ulong *)((long)DVar23.unknown + 8) = 0x80000001004e3530;
                _swift_willThrow();
                _swift_bridgeObjectRelease(_Var62.unknown);
                DVar18.unknown = local_d8.unknown;
                pcVar41 = pcStack_d0;
                goto LAB_10028ca48;
              }
              local_f0 = (String)(ZEXT816(0xc000000000000000) << 0x40);
              if (0x15555553 < uVar58) {
                    /* WARNING: Does not return */
                pcVar16 = (code *)SoftwareBreakpoint(1,0x10028df00);
                (*pcVar16)();
              }
              FUN_10028aff0(&local_f0,(int)uVar58 * 0xc + 0x10);
              lVar50 = 0x74736c65;
              FUN_10012ddec(0x74736c65,0xe400000000000000);
              if (*(long *)(lVar50 + 0x10) != 0) {
                Foundation::Data::_Representation::append
                          ((undefined *)(lVar50 + 0x20),
                           (_Representation)
                           ((char)(undefined *)(lVar50 + 0x20) + (char)*(long *)(lVar50 + 0x10)));
              }
              _swift_release();
              local_a8[0] = 0;
              Foundation::Data::_Representation::append
                        ((UnsafeRawBufferPointer)local_a8,
                         (_Representation)((char)&stack0xfffffffffffffff0 + 0x6c));
              FUN_10028aff0(&local_f0,uVar58);
              DStack_f8.unknown = (undefined *)0xc000000000000000;
              local_100.unknown = (undefined *)0x0;
              if ((ulong)DVar59.unknown >> 0x20 != 0) {
                    /* WARNING: Does not return */
                pcVar16 = (code *)SoftwareBreakpoint(1,0x10028df04);
                (*pcVar16)();
              }
              FUN_10028aff0(&local_100,DVar59.unknown);
              FUN_10028aff0(&local_100,DVar67.unknown);
              local_80[0] = 0x100;
              Foundation::Data::_Representation::append
                        ((UnsafeRawBufferPointer)local_80,
                         (_Representation)((char)&stack0xfffffffffffffff0 + -0x6c));
              DVar66.unknown = DStack_f8.unknown;
              DVar59.unknown = local_100.unknown;
              do {
                Foundation::Data::append(DVar59,DVar66);
                uVar58 = uVar58 - 1;
              } while (uVar58 != 0);
              uStack_108 = 0xc000000000000000;
              local_110 = 0;
              pcVar45 = local_f0.str;
              pvVar46 = local_f0.bridgeObject;
              uVar48 = local_f0.bridgeObject._4_4_ >> 0x1e;
              if (local_f0.bridgeObject._4_4_ >> 0x1e < 2) {
                if (uVar48 == 0) {
                  uVar58 = (ulong)local_f0.bridgeObject >> 0x30 & 0xff;
                }
                else {
                  if (SBORROW4(local_f0.str._4_4_,(int)local_f0.str)) {
                    /* WARNING: Does not return */
                    pcVar16 = (code *)SoftwareBreakpoint(1,0x10028df58);
                    (*pcVar16)();
                  }
                  uVar58 = (ulong)(local_f0.str._4_4_ - (int)local_f0.str);
                }
              }
              else if (uVar48 == 2) {
                uVar58 = *(long *)(local_f0.str + 0x18) - *(long *)(local_f0.str + 0x10);
                if (SBORROW8(*(long *)(local_f0.str + 0x18),*(long *)(local_f0.str + 0x10))) {
                    /* WARNING: Does not return */
                  pcVar16 = (code *)SoftwareBreakpoint(1,0x10028d738);
                  (*pcVar16)();
                }
              }
              else {
                uVar58 = 0;
              }
              if (SCARRY8(uVar58,8)) {
                    /* WARNING: Does not return */
                pcVar16 = (code *)SoftwareBreakpoint(1,0x10028df08);
                (*pcVar16)();
              }
              if ((long)(uVar58 + 8) < 0) {
                    /* WARNING: Does not return */
                pcVar16 = (code *)SoftwareBreakpoint(1,0x10028df0c);
                (*pcVar16)();
              }
              if (uVar58 + 8 >> 0x20 != 0) {
                    /* WARNING: Does not return */
                pcVar16 = (code *)SoftwareBreakpoint(1,0x10028df10);
                (*pcVar16)();
              }
              FUN_10028aff0(&local_110);
              lVar50 = 0x73746465;
              FUN_10012ddec(0x73746465,0xe400000000000000);
              if (*(long *)(lVar50 + 0x10) != 0) {
                Foundation::Data::_Representation::append
                          ((undefined *)(lVar50 + 0x20),
                           (_Representation)
                           ((char)(undefined *)(lVar50 + 0x20) + (char)*(long *)(lVar50 + 0x10)));
              }
              _swift_release();
              Foundation::Data::append((Data)pcVar45,(Data)pvVar46);
              uVar58 = 0xffffffffffffffff;
              puVar54 = (ulong *)((long)DVar19.unknown + 0x30);
              do {
                if (uVar58 - uVar53 == -1) {
                  _swift_bridgeObjectRelease(DVar23.unknown);
                  DVar23.unknown = DVar19.unknown;
                  goto LAB_10028d998;
                }
                uVar58 = uVar58 + 1;
                if (*(ulong *)((long)DVar19.unknown + 0x10) <= uVar58) {
                    /* WARNING: Does not return */
                  pcVar16 = (code *)SoftwareBreakpoint(1,0x10028de9c);
                  (*pcVar16)();
                }
                uVar64 = *puVar54;
              } while (((undefined *)puVar54[-2] != (undefined *)0x7461646d ||
                        (undefined *)puVar54[-1] != (undefined *)0xe400000000000000) &&
                      (bVar17 = Swift::_stringCompareWithSmolCheck
                                          ((undefined *)puVar54[-2],(undefined *)puVar54[-1],
                                           (_StringComparisonResult)0x6d), puVar54 = puVar54 + 4,
                      !bVar17));
              _swift_bridgeObjectRelease(DVar19.unknown);
              if ((long)uVar43 < (long)uVar64) {
                puVar54 = (ulong *)((long)DVar23.unknown + 0x38);
                unaff_x19 = (undefined8 *)-uVar63;
                uVar53 = 0xffffffffffffffff;
                do {
                  if ((undefined *)((long)unaff_x19 + uVar53) == (undefined *)0xffffffffffffffff) {
                    _swift_bridgeObjectRelease(uVar51);
                    _swift_bridgeObjectRelease(_Var39.unknown);
                    _swift_bridgeObjectRelease(DVar23.unknown);
                    local_140 = local_d8.unknown;
                    local_158 = pcStack_d0;
                    goto LAB_10028ddb4;
                  }
                  uVar53 = uVar53 + 1;
                  if (*(ulong *)((long)DVar23.unknown + 0x10) <= uVar53) {
                    /* WARNING: Does not return */
                    pcVar16 = (code *)SoftwareBreakpoint(1,0x10028dec4);
                    (*pcVar16)();
                  }
                  puVar1 = puVar54 + -3;
                  _Var42.unknown = (undefined *)puVar54[-2];
                  uVar63 = puVar54[-1];
                  uVar58 = *puVar54;
                  if ((undefined *)*puVar1 == (undefined *)0x666e696d &&
                      _Var42.unknown == (undefined *)0xe400000000000000) break;
                  puVar54 = puVar54 + 4;
                  bVar17 = Swift::_stringCompareWithSmolCheck
                                     ((undefined *)*puVar1,_Var42,(_StringComparisonResult)0x6d);
                } while (!bVar17);
                _swift_bridgeObjectRetain(_Var42.unknown);
                _swift_bridgeObjectRelease(DVar23.unknown);
                if (SCARRY8(uVar63,8)) {
                    /* WARNING: Does not return */
                  pcVar16 = (code *)SoftwareBreakpoint(1,0x10028df5c);
                  (*pcVar16)();
                }
                if (SCARRY8(uVar63,uVar58)) {
                    /* WARNING: Does not return */
                  pcVar16 = (code *)SoftwareBreakpoint(1,0x10028df60);
                  (*pcVar16)();
                }
                if ((long)(uVar63 + uVar58) < (long)(uVar63 + 8)) {
                    /* WARNING: Does not return */
                  pcVar16 = (code *)SoftwareBreakpoint(1,0x10028df64);
                  (*pcVar16)();
                }
                local_140 = local_d8.unknown;
                local_158 = pcStack_d0;
                DVar18.unknown = local_d8.unknown;
                FUN_10028a5d4();
                unaff_x19 = (undefined8 *)(DVar18.unknown + 0x38);
                lVar50 = *(long *)(DVar18.unknown + 0x10) + 1;
                do {
                  lVar50 = lVar50 + -1;
                  if (lVar50 == 0) {
                    _swift_bridgeObjectRelease(uVar51);
                    _swift_bridgeObjectRelease(_Var39.unknown);
                    _swift_bridgeObjectRelease(_Var42.unknown);
                    _swift_bridgeObjectRelease(DVar18.unknown);
LAB_10028ddb4:
                    _swift_bridgeObjectRelease(_Var6.unknown);
                    _swift_bridgeObjectRelease();
                    FUN_10028df78();
                    unaff_x20.unknown = "\x01\x02";
                    _swift_allocError(&DAT_100536d68,_Var29.unknown,0,0);
                    *(undefined8 *)_Var29.unknown = 0x6c706d6173206f6e;
                    *(undefined8 *)((long)_Var29.unknown + 8) = 0xef656c6261742065;
                    _swift_willThrow();
                    _swift_bridgeObjectRelease(_Var62.unknown);
                    FUN_100093624(DVar59.unknown,DVar66.unknown);
                    FUN_100093624(local_110,uStack_108);
                    FUN_100093624(pcVar45,pvVar46);
                    FUN_100093624(local_140,local_158);
                    goto LAB_10028ca50;
                  }
                  puVar38 = unaff_x19 + -3;
                  unaff_x20.unknown = (undefined *)unaff_x19[-2];
                  lVar37 = unaff_x19[-1];
                  uVar8 = *unaff_x19;
                  if ((undefined *)*puVar38 == (undefined *)0x6c627473 &&
                      unaff_x20.unknown == (undefined *)0xe400000000000000) break;
                  unaff_x19 = unaff_x19 + 4;
                  bVar17 = Swift::_stringCompareWithSmolCheck
                                     ((undefined *)*puVar38,unaff_x20,(_StringComparisonResult)0x73)
                  ;
                } while (!bVar17);
                _swift_bridgeObjectRetain(unaff_x20.unknown);
                _swift_bridgeObjectRelease(_Var42.unknown);
                _swift_bridgeObjectRelease(DVar18.unknown);
                local_158 = (char *)uVar8;
                local_140 = (undefined *)lVar37;
              }
              else {
LAB_10028d998:
                _swift_bridgeObjectRelease(DVar23.unknown);
                unaff_x20.unknown = (char *)0x0;
                local_140 = (undefined *)0x0;
                local_158 = (char *)0x0;
              }
              uVar53 = uStack_108;
              lVar50 = local_110;
              if (_Var62.unknown == (undefined *)0x0) {
                local_58 = lVar21 + lVar9;
                if (SCARRY8(lVar21,lVar9)) {
                    /* WARNING: Does not return */
                  pcVar16 = (code *)SoftwareBreakpoint(1,0x10028df50);
                  (*pcVar16)();
                }
                local_198 = 0;
              }
              uVar48 = (uint)(uStack_108 >> 0x20);
              uVar47 = uVar48 >> 0x1e;
              if (uVar48 >> 0x1e < 2) {
                if (uVar47 == 0) {
                  uVar63 = uStack_108 >> 0x30 & 0xff;
                }
                else {
                  iVar49 = (int)((ulong)local_110 >> 0x20);
                  if (SBORROW4(iVar49,(int)local_110)) {
                    /* WARNING: Does not return */
                    pcVar16 = (code *)SoftwareBreakpoint(1,0x10028df68);
                    (*pcVar16)();
                  }
                  uVar63 = (ulong)(iVar49 - (int)local_110);
                }
              }
              else if (uVar47 == 2) {
                uVar63 = *(long *)(local_110 + 0x18) - *(long *)(local_110 + 0x10);
                if (SBORROW8(*(long *)(local_110 + 0x18),*(long *)(local_110 + 0x10))) {
                    /* WARNING: Does not return */
                  pcVar16 = (code *)SoftwareBreakpoint(1,0x10028d9fc);
                  (*pcVar16)();
                }
              }
              else {
                uVar63 = 0;
              }
              lVar21 = uVar63 - local_198;
              if (SBORROW8(uVar63,local_198)) {
                    /* WARNING: Does not return */
                pcVar16 = (code *)SoftwareBreakpoint(1,0x10028df14);
                (*pcVar16)();
              }
              if (SCARRY8(local_58,local_198)) {
                    /* WARNING: Does not return */
                pcVar16 = (code *)SoftwareBreakpoint(1,0x10028df18);
                (*pcVar16)();
              }
              if (local_58 + local_198 < local_58) {
                    /* WARNING: Does not return */
                pcVar16 = (code *)SoftwareBreakpoint(1,0x10028df1c);
                (*pcVar16)();
              }
              FUN_10028a32c(local_110,uStack_108,&local_d8,local_58);
              _swift_bridgeObjectRelease(uVar51);
              if ((local_58 <= lVar65) &&
                 (bVar17 = SCARRY8(lVar65,lVar21), lVar65 = lVar65 + lVar21, bVar17)) {
                    /* WARNING: Does not return */
                pcVar16 = (code *)SoftwareBreakpoint(1,0x10028df38);
                (*pcVar16)();
              }
              if (SCARRY8(lVar61,lVar21)) {
                    /* WARNING: Does not return */
                pcVar16 = (code *)SoftwareBreakpoint(1,0x10028df20);
                (*pcVar16)();
              }
              if (lVar61 + lVar21 < 0) {
                    /* WARNING: Does not return */
                pcVar16 = (code *)SoftwareBreakpoint(1,0x10028df24);
                (*pcVar16)();
              }
              if ((ulong)(lVar61 + lVar21) >> 0x20 != 0) {
                    /* WARNING: Does not return */
                pcVar16 = (code *)SoftwareBreakpoint(1,0x10028df28);
                (*pcVar16)();
              }
              FUN_10028b02c(&local_d8,lVar65);
              _swift_bridgeObjectRelease(_Var6.unknown);
              if ((local_58 <= (long)uVar43) &&
                 (bVar17 = SCARRY8(uVar43,lVar21), uVar43 = uVar43 + lVar21, bVar17)) {
                    /* WARNING: Does not return */
                pcVar16 = (code *)SoftwareBreakpoint(1,0x10028df3c);
                (*pcVar16)();
              }
              if (SCARRY8(uVar7,lVar21)) {
                    /* WARNING: Does not return */
                pcVar16 = (code *)SoftwareBreakpoint(1,0x10028df2c);
                (*pcVar16)();
              }
              if ((long)(uVar7 + lVar21) < 0) {
                    /* WARNING: Does not return */
                pcVar16 = (code *)SoftwareBreakpoint(1,0x10028df30);
                (*pcVar16)();
              }
              if (uVar7 + lVar21 >> 0x20 != 0) {
                    /* WARNING: Does not return */
                pcVar16 = (code *)SoftwareBreakpoint(1,0x10028df34);
                (*pcVar16)();
              }
              FUN_10028b02c(&local_d8,uVar43);
              _swift_bridgeObjectRelease(_Var29.unknown);
              if (((uint)lVar20 & 0xff) == 1) {
                if ((local_58 <= lVar44) &&
                   (bVar17 = SCARRY8(lVar44,lVar21), lVar44 = lVar44 + lVar21, bVar17)) {
                    /* WARNING: Does not return */
                  pcVar16 = (code *)SoftwareBreakpoint(1,0x10028df6c);
                  (*pcVar16)();
                }
                if (SCARRY8(lVar44,0x18)) {
                    /* WARNING: Does not return */
                  pcVar16 = (code *)SoftwareBreakpoint(1,0x10028df40);
                  (*pcVar16)();
                }
                FUN_10028b02c(&local_d8,lVar44 + 0x18,0);
                lVar65 = lVar44 + 0x1c;
                if (SCARRY8(lVar44 + 0x18,4)) {
                    /* WARNING: Does not return */
                  pcVar16 = (code *)SoftwareBreakpoint(1,0x10028db4c);
                  (*pcVar16)();
                }
              }
              else {
                if ((local_58 <= lVar44) &&
                   (bVar17 = SCARRY8(lVar44,lVar21), lVar44 = lVar44 + lVar21, bVar17)) {
                    /* WARNING: Does not return */
                  pcVar16 = (code *)SoftwareBreakpoint(1,0x10028df70);
                  (*pcVar16)();
                }
                lVar65 = lVar44 + 0x10;
                if (SCARRY8(lVar44,0x10)) {
                    /* WARNING: Does not return */
                  pcVar16 = (code *)SoftwareBreakpoint(1,0x10028df44);
                  (*pcVar16)();
                }
              }
              FUN_10028b02c(&local_d8,lVar65,uVar60);
              _swift_bridgeObjectRelease(_Var39.unknown);
              if (((uint)lVar22 & 0xff) == 1) {
                if ((local_58 <= lVar52) &&
                   (bVar17 = SCARRY8(lVar52,lVar21), lVar52 = lVar52 + lVar21, bVar17)) {
                    /* WARNING: Does not return */
                  pcVar16 = (code *)SoftwareBreakpoint(1,0x10028df74);
                  (*pcVar16)();
                }
                if (SCARRY8(lVar52,0x1c)) {
                    /* WARNING: Does not return */
                  pcVar16 = (code *)SoftwareBreakpoint(1,0x10028df48);
                  (*pcVar16)();
                }
                FUN_10028b02c(&local_d8,lVar52 + 0x1c,0);
                lVar44 = lVar52 + 0x20;
                if (SCARRY8(lVar52 + 0x1c,4)) {
                    /* WARNING: Does not return */
                  pcVar16 = (code *)SoftwareBreakpoint(1,0x10028dbcc);
                  (*pcVar16)();
                }
              }
              else {
                if ((local_58 <= lVar52) &&
                   (bVar17 = SCARRY8(lVar52,lVar21), lVar52 = lVar52 + lVar21, bVar17)) {
                    /* WARNING: Does not return */
                  pcVar16 = (code *)SoftwareBreakpoint(1,0x10028df78);
                  (*pcVar16)();
                }
                lVar44 = lVar52 + 0x14;
                if (SCARRY8(lVar52,0x14)) {
                    /* WARNING: Does not return */
                  pcVar16 = (code *)SoftwareBreakpoint(1,0x10028df4c);
                  (*pcVar16)();
                }
              }
              FUN_10028b02c(&local_d8,lVar44,uVar60);
              if (unaff_x20.unknown != (char *)0x0) {
                if ((local_58 <= (long)local_140) &&
                   (bVar17 = SCARRY8((long)local_140,lVar21),
                   local_140 = (undefined *)((long)local_140 + lVar21), bVar17)) {
                    /* WARNING: Does not return */
                  pcVar16 = (code *)SoftwareBreakpoint(1,0x10028df54);
                  (*pcVar16)();
                }
                pDVar40 = &local_d8;
                FUN_10028b09c(pDVar40,local_140,local_158,lVar21,local_58);
                if (((ulong)pDVar40 & 1) == 0) {
                  unaff_x19 = (undefined8 *)0x80000001004e3550;
                  FUN_10028df78();
                  _swift_allocError(&DAT_100536d68,pDVar40,0,0);
                  pDVar40->unknown = (undefined *)0xd00000000000001a;
                  pDVar40[1].unknown = (undefined *)0x80000001004e3550;
                  _swift_willThrow();
                  _swift_bridgeObjectRelease(_Var62.unknown);
                  _swift_bridgeObjectRelease(unaff_x20.unknown);
                  FUN_100093624(DVar59.unknown,DVar66.unknown);
                  FUN_100093624(lVar50,uVar53);
                  FUN_100093624(pcVar45,pvVar46);
                  FUN_100093624(local_d8.unknown,pcStack_d0);
                  goto LAB_10028ca50;
                }
              }
              pcVar41 = pcStack_d0;
              DVar18.unknown = local_d8.unknown;
              Foundation::Data::_write((URL)param_2.unknown,(NSDataWritingOptions)0x1,local_d8);
              _swift_bridgeObjectRelease(unaff_x20.unknown);
              _swift_bridgeObjectRelease(_Var62.unknown);
              unaff_x19 = (undefined8 *)((double)uVar60 / (double)uVar56);
              FUN_100093624(DVar59.unknown,DVar66.unknown);
              FUN_100093624(lVar50,uVar53);
              FUN_100093624(pcVar45,pvVar46);
              unaff_x20.unknown = (char *)0x0;
            }
            FUN_100093624(DVar18.unknown,pcVar41);
            goto LAB_10028ca50;
          }
          _swift_bridgeObjectRelease(_Var62.unknown);
LAB_10028d1b4:
          _swift_bridgeObjectRelease(_Var6.unknown);
          _swift_bridgeObjectRelease(uVar51);
          _swift_bridgeObjectRelease(_Var39.unknown);
          _swift_bridgeObjectRelease(DVar23.unknown);
          _swift_bridgeObjectRelease(DVar19.unknown);
          _swift_bridgeObjectRelease();
          pcVar41 = "edit is empty or rate-changed";
          FUN_10028df78();
          unaff_x19 = (undefined8 *)&DAT_100536d68;
          _swift_allocError(&DAT_100536d68,_Var29.unknown,0,0);
          uVar51 = 0xd000000000000014;
          _Var39.unknown = _Var29.unknown;
        }
        unaff_x20.unknown = (undefined *)((ulong)pcVar41 | 0x8000000000000000);
        *(undefined8 *)_Var39.unknown = uVar51;
        *(undefined **)((long)_Var39.unknown + 8) = unaff_x20.unknown;
      }
      else {
        _swift_bridgeObjectRelease(DVar19.unknown);
        _swift_bridgeObjectRelease(_Var6.unknown);
        _swift_bridgeObjectRelease(_Var29.unknown);
        _swift_bridgeObjectRelease(uVar51);
        _swift_bridgeObjectRelease(_Var39.unknown);
        _swift_bridgeObjectRelease(DVar23.unknown);
        _swift_bridgeObjectRelease(_Var62.unknown);
        _swift_bridgeObjectRelease(_Var10.unknown);
        local_f0.str = (char *)0x0;
        local_f0.bridgeObject = (void *)0xe000000000000000;
        Swift::_StringGuts::grow(0x18,(_StringGuts)DVar59.unknown);
        _swift_bridgeObjectRelease(local_f0.bridgeObject);
        local_f0.bridgeObject = (void *)0xee00207361682074;
        local_f0.str = (char *)0x73696c2074696465;
        local_100.unknown._0_4_ = uVar48;
        SVar71 = Swift::CustomStringConvertible::get_description();
        SVar76.bridgeObject = pvVar46;
        SVar76.str = pcVar45;
        Swift::String::append(SVar71,SVar76);
        _swift_bridgeObjectRelease(SVar71.bridgeObject);
        puVar38 = (undefined8 *)0x73656972746e6520;
        SVar72.bridgeObject = (void *)0xe800000000000000;
        SVar72.str = (char *)0x73656972746e6520;
        SVar77.bridgeObject = pvVar46;
        SVar77.str = pcVar45;
        Swift::String::append(SVar72,SVar77);
        unaff_x20.unknown = local_f0.str;
        pvVar46 = local_f0.bridgeObject;
        FUN_10028df78();
        unaff_x19 = (undefined8 *)&DAT_100536d68;
        _swift_allocError(&DAT_100536d68,puVar38,0,0);
        *puVar38 = unaff_x20.unknown;
        puVar38[1] = pvVar46;
      }
      _swift_willThrow();
      DVar18.unknown = local_d8.unknown;
      pcVar41 = pcStack_d0;
    }
    else {
LAB_10028d08c:
      _swift_bridgeObjectRelease(DVar23.unknown);
      _swift_bridgeObjectRelease(_Var62.unknown);
      _swift_bridgeObjectRelease(DVar19.unknown);
      _swift_bridgeObjectRelease(_Var6.unknown);
      _swift_bridgeObjectRelease(_Var29.unknown);
      _swift_bridgeObjectRelease(uVar51);
      _swift_bridgeObjectRelease(_Var39.unknown);
      local_f0.str = (char *)0x0;
      local_f0.bridgeObject = (void *)0xe000000000000000;
      Swift::_StringGuts::grow(0x17,_Var42);
      _swift_bridgeObjectRelease(local_f0.bridgeObject);
      _swift_bridgeObjectRelease(DVar59.unknown);
      local_f0.bridgeObject = (void *)0xef2073646c6f6820;
      local_f0.str = (char *)0x786f622074696465;
      local_100.unknown = puVar57;
      SVar71 = Swift::CustomStringConvertible::get_description();
      SVar74.bridgeObject = pvVar46;
      SVar74.str = pcVar45;
      Swift::String::append(SVar71,SVar74);
      _swift_bridgeObjectRelease(SVar71.bridgeObject);
      puVar38 = (undefined8 *)0x736d6f746120;
      SVar71.bridgeObject = (void *)0xe600000000000000;
      SVar71.str = (char *)0x736d6f746120;
      SVar75.bridgeObject = pvVar46;
      SVar75.str = pcVar45;
      Swift::String::append(SVar71,SVar75);
      unaff_x20.unknown = local_f0.str;
      pvVar46 = local_f0.bridgeObject;
      FUN_10028df78();
      unaff_x19 = (undefined8 *)&DAT_100536d68;
      _swift_allocError(&DAT_100536d68,puVar38,0,0);
      *puVar38 = unaff_x20.unknown;
      puVar38[1] = pvVar46;
      _swift_willThrow();
      DVar18.unknown = local_d8.unknown;
    }
  }
LAB_10028ca48:
  FUN_100093624(DVar18.unknown,pcVar41);
LAB_10028ca50:
  auVar69._8_8_ = unaff_x20.unknown;
  auVar69._0_8_ = unaff_x19;
  return auVar69;
}

