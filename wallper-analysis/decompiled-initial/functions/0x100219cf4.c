// rea decompile_all
// name: FUN_100219cf4
// address: 0x100219cf4
// body: available
// range: 0x100219cf4-0x10021a4c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100219cf4(ulong param_1)

{
  ulong uVar1;
  byte bVar2;
  String SVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  CharacterSet CVar7;
  long lVar8;
  undefined *puVar9;
  char *pcVar10;
  undefined *puVar11;
  Published *pPVar12;
  URL UVar13;
  Published *pPVar14;
  undefined *puVar15;
  void *pvVar16;
  void *pvVar17;
  CharacterSet CVar18;
  long lVar19;
  long extraout_x8;
  long lVar20;
  long extraout_x8_00;
  long extraout_x8_01;
  char *pcVar21;
  code *pcVar22;
  long unaff_x20;
  _StringGuts _Var23;
  char *pcVar24;
  long lVar25;
  char *pcVar26;
  CharacterSet in;
  String SVar27;
  char acStack_e0 [8];
  String local_80;
  char *local_70;
  
  CVar7 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar19 = *(long *)(CVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar19 + 0x40));
  in.unknown = acStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0;
  FUN_10040211c();
  lVar20 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar20 + 0x40));
  lVar25 = (long)in.unknown - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar9 = &DAT_10054ac40;
  FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar24 = (char *)(lVar25 - extraout_x8_01);
  pcVar10 = (char *)0x0;
  pvVar16 = (void *)0x0;
  if ((param_1 & 1) != 0) {
    FUN_100220ee8(pcVar24);
    pvVar16 = (void *)0x1;
    pcVar10 = pcVar24;
    (**(code **)(lVar20 + 0x30))(pcVar24,1,lVar8);
    if ((int)pcVar10 == 1) {
      FUN_10002a29c(pcVar24,&DAT_10054ac40,&DAT_10041ce70);
      puVar9 = &DAT_10042b588;
      _swift_getKeyPath(&DAT_10042b588);
      puVar11 = &DAT_10042b5b0;
      _swift_getKeyPath(&DAT_10042b5b0);
      Combine::Published::_get_subscript(&local_80);
      _swift_release(puVar9);
      _swift_release(puVar11);
      pcVar10 = local_80.str;
      pvVar16 = local_80.bridgeObject;
    }
    else {
      FUN_10026ac6c();
      FUN_100029548(pcVar24,FUN_10040211c);
    }
  }
  pPVar12 = (Published *)(unaff_x20 + _TtC7Wallper19ShuffleQueueManager::playlistManager);
  _swift_weakLoadStrong();
  if (pPVar12 != (Published *)0x0) {
    puVar9 = &DAT_10042b460;
    _swift_getKeyPath(&DAT_10042b460);
    puVar11 = &DAT_10042b488;
    _swift_getKeyPath(&DAT_10042b488);
    Combine::Published::_get_subscript(&local_80,pPVar12,puVar9,puVar11);
    _swift_release(puVar9);
    _swift_release(puVar11);
    _swift_release();
    if ((char)local_80.str == '\x01') {
      _swift_bridgeObjectRelease(pvVar16);
      pPVar12 = (Published *)&DAT_10042b5e8;
      _swift_getKeyPath(&DAT_10042b5e8);
      _swift_getKeyPath(&DAT_10042b610);
      local_80.str = PTR___swiftEmptyArrayStorage_100524190;
      _swift_retain();
      Combine::Published::_set_subscript(pPVar12,&local_80);
      pPVar12 = (Published *)&DAT_10042b4f8;
      _swift_getKeyPath(&DAT_10042b4f8);
      _swift_getKeyPath(&DAT_10042b520);
      goto LAB_10021a400;
    }
  }
  FUN_10022347c();
  if (pPVar12 == (Published *)0x0) {
    FUN_100222e68();
    local_80.str = (char *)pPVar12;
    FUN_100216b34(&local_80);
    pcVar24 = local_80.str;
    pPVar12 = (Published *)&DAT_10042b5e8;
    _swift_getKeyPath(&DAT_10042b5e8);
    _swift_getKeyPath(&DAT_10042b610);
    local_70 = pcVar24;
    _swift_retain();
    lVar8 = -0x60;
  }
  else {
    _swift_getKeyPath(&DAT_10042b5e8);
    _swift_getKeyPath(&DAT_10042b610);
    local_80.str = (char *)pPVar12;
    _swift_retain();
    lVar8 = -0x70;
  }
  Combine::Published::_set_subscript(pPVar12,&stack0xfffffffffffffff0 + lVar8);
  puVar9 = &DAT_10042b5e8;
  _swift_getKeyPath(&DAT_10042b5e8);
  puVar11 = &DAT_10042b610;
  _swift_getKeyPath(&DAT_10042b610);
  Combine::Published::_get_subscript(&local_80);
  _swift_release(puVar9);
  _swift_release(puVar11);
  lVar8 = *(long *)(local_80.str + 0x10);
  _swift_bridgeObjectRelease();
  if (lVar8 != 0) {
    if (pvVar16 != (void *)0x0) {
      puVar9 = &DAT_10042b5e8;
      _swift_getKeyPath(&DAT_10042b5e8);
      puVar11 = &DAT_10042b610;
      _swift_getKeyPath(&DAT_10042b610);
      Combine::Published::_get_subscript(&local_80);
      _swift_release(puVar9);
      _swift_release(puVar11);
      pcVar24 = local_80.str;
      pcVar21 = *(char **)(local_80.str + 0x10);
      if (pcVar21 != (char *)0x0) {
        pcVar26 = (char *)0x0;
        bVar2 = *(byte *)(lVar20 + 0x50);
        do {
          if (*(char **)(pcVar24 + 0x10) <= pcVar26) {
                    /* WARNING: Does not return */
            pcVar22 = (code *)SoftwareBreakpoint(1,0x10021a4c8);
            (*pcVar22)();
          }
          UVar13.unknown =
               pcVar24 + *(long *)(lVar20 + 0x48) * (long)pcVar26 +
                         ((ulong)bVar2 + 0x20 & ((ulong)bVar2 ^ 0xffffffffffffffff));
          FUN_10002f154(UVar13.unknown,lVar25);
          local_80 = Foundation::URL::get_lastPathComponent(UVar13);
          pvVar17 = local_80.bridgeObject;
          Foundation::CharacterSet::get_whitespacesAndNewlines((CharacterSet)local_80.str);
          FUN_100026df4();
          SVar27 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
          CVar18.unknown = SVar27.bridgeObject;
          pcVar22 = *(code **)(lVar19 + 8);
          (*pcVar22)(in.unknown,CVar7.unknown);
          _swift_bridgeObjectRelease(pvVar17);
          uVar1 = (ulong)SVar27.str & 0xffffffffffff;
          if (((ulong)CVar18.unknown & 0x2000000000000000) != 0) {
            uVar1 = (ulong)CVar18.unknown >> 0x38 & 0xf;
          }
          if (uVar1 == 0) {
            _swift_bridgeObjectRelease();
            Foundation::CharacterSet::get_whitespacesAndNewlines(CVar18);
            SVar27 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
            (*pcVar22)(in.unknown,CVar7.unknown);
          }
          _Var23.unknown = SVar27.bridgeObject;
          SVar3.bridgeObject = pvVar16;
          SVar3.str = pcVar10;
          if (SVar27 == SVar3) {
            _swift_bridgeObjectRelease(_Var23.unknown);
            FUN_100029548(lVar25,FUN_10040211c);
LAB_10021a444:
            _swift_bridgeObjectRelease(pvVar16);
            _swift_bridgeObjectRelease(pcVar24);
            pPVar12 = (Published *)&DAT_10042b4f8;
            _swift_getKeyPath(&DAT_10042b4f8);
            puVar9 = &DAT_10042b520;
            _swift_getKeyPath(&DAT_10042b520);
            local_80.str = pcVar26;
            goto LAB_10021a47c;
          }
          bVar6 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)SVar27.str,_Var23,(_StringComparisonResult)(__int8)pcVar10
                            );
          _swift_bridgeObjectRelease(_Var23.unknown);
          FUN_100029548(lVar25,FUN_10040211c);
          if (bVar6) goto LAB_10021a444;
          pcVar26 = pcVar26 + 1;
        } while (pcVar21 != pcVar26);
      }
      _swift_bridgeObjectRelease(pvVar16);
      _swift_bridgeObjectRelease(pcVar24);
    }
    pPVar12 = (Published *)&DAT_10042b4f8;
    pPVar14 = pPVar12;
    _swift_getKeyPath(&DAT_10042b4f8);
    puVar9 = &DAT_10042b520;
    puVar11 = puVar9;
    _swift_getKeyPath(&DAT_10042b520);
    Combine::Published::_get_subscript(&local_80,unaff_x20,pPVar14,puVar11);
    _swift_release(pPVar14);
    _swift_release(puVar11);
    pcVar24 = local_80.str;
    puVar11 = &DAT_10042b5e8;
    _swift_getKeyPath(&DAT_10042b5e8);
    puVar15 = &DAT_10042b610;
    _swift_getKeyPath(&DAT_10042b610);
    Combine::Published::_get_subscript(&local_80,unaff_x20,puVar11,puVar15);
    _swift_release(puVar11);
    _swift_release(puVar15);
    lVar8 = *(long *)(local_80.str + 0x10);
    _swift_bridgeObjectRelease();
    pcVar10 = (char *)(lVar8 + -1);
    if ((long)pcVar24 <= lVar8 + -1) {
      pcVar10 = pcVar24;
    }
    _swift_getKeyPath(&DAT_10042b4f8);
    _swift_getKeyPath(&DAT_10042b520);
    local_80.str = pcVar10;
LAB_10021a47c:
    _swift_retain(unaff_x20);
    Combine::Published::_set_subscript(pPVar12,&local_80,unaff_x20,pPVar12,puVar9);
    FUN_100217d50();
    FUN_10021fe68();
    return;
  }
  _swift_bridgeObjectRelease(pvVar16);
  pPVar12 = (Published *)&DAT_10042b4f8;
  _swift_getKeyPath(&DAT_10042b4f8);
  _swift_getKeyPath(&DAT_10042b520);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_80.bridgeObject;
  local_80 = (String)(auVar4 << 0x40);
  _swift_retain();
  Combine::Published::_set_subscript(pPVar12,&local_80);
  lVar8 = unaff_x20 + _TtC7Wallper19ShuffleQueueManager::videoLibrary;
  _swift_weakLoadStrong();
  if (lVar8 == 0) {
    return;
  }
  puVar9 = &DAT_10042b700;
  _swift_getKeyPath(&DAT_10042b700);
  puVar11 = &DAT_10042b728;
  _swift_getKeyPath(&DAT_10042b728);
  Combine::Published::_get_subscript(&local_80,lVar8,puVar9,puVar11);
  _swift_release(puVar9);
  _swift_release(puVar11);
  _swift_release(lVar8);
  lVar8 = *(long *)(local_80.str + 0x10);
  _swift_bridgeObjectRelease();
  if (lVar8 == 0) {
    return;
  }
  pPVar12 = (Published *)&DAT_10042b588;
  _swift_getKeyPath(&DAT_10042b588);
  _swift_getKeyPath(&DAT_10042b5b0);
  local_80.bridgeObject = (void *)0x0;
LAB_10021a400:
  auVar5._8_8_ = 0;
  auVar5._0_8_ = local_80.bridgeObject;
  local_80 = (String)(auVar5 << 0x40);
  _swift_retain();
  Combine::Published::_set_subscript(pPVar12,&local_80);
  FUN_100217d50();
  return;
}

