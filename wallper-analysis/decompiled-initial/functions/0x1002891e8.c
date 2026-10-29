// rea decompile_all
// name: FUN_1002891e8
// address: 0x1002891e8
// body: available
// range: 0x1002891e8-0x100289f07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100289efc) */

String FUN_1002891e8(void)

{
  _HashTable _Var1;
  String *pSVar2;
  _CocoaArrayWrapper _Var3;
  char *pcVar4;
  int iVar5;
  String SVar6;
  ulong uVar7;
  undefined8 uVar8;
  code *pcVar9;
  ID IVar10;
  Dictionary<undefined,undefined> DVar11;
  char **ppcVar12;
  _ArrayBuffer _Var13;
  char *pcVar14;
  undefined *puVar15;
  NSString *pNVar16;
  ID IVar17;
  undefined *puVar18;
  undefined *puVar19;
  Bucket BVar20;
  _StringGuts _Var21;
  char *pcVar22;
  char *pcVar23;
  char *pcVar24;
  undefined *in_x3;
  undefined *puVar25;
  char *pcVar26;
  undefined *puVar27;
  long lVar28;
  ulong *puVar29;
  long lVar30;
  ulong uVar31;
  void *pvVar32;
  char *pcVar33;
  long lVar34;
  ulong uVar35;
  ulong uVar36;
  char *pcVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  String SVar41;
  String SVar42;
  String SVar43;
  String separator;
  String SVar44;
  String separator_00;
  String repeating;
  String separator_01;
  String SVar45;
  String SVar46;
  String SVar47;
  String SVar48;
  String SVar49;
  String SVar50;
  String SVar51;
  String SVar52;
  String SVar53;
  String SVar54;
  String SVar55;
  String SVar56;
  String SVar57;
  String SVar58;
  String SVar59;
  char *local_2d0;
  void *pvStack_2c8;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  ulong local_290;
  undefined8 uStack_288;
  char *local_280;
  void *pvStack_278;
  undefined1 auStack_270 [32];
  char *local_250;
  char *pcStack_248;
  char *local_240;
  long local_238;
  char *local_218;
  
  IVar10 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  IVar10 = NSBundle::infoDictionary(IVar10);
  puVar15 = PTR___type_metadata_for_Any_100524178;
  if ((IVar10 == 0) ||
     (in_x3 = PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100523aa8,
     DVar11 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC(),
     DVar11.unknown == (undefined *)0x0)) {
    pcStack_248 = (char *)0x0;
    local_250 = (char *)0x0;
    local_238 = 0;
    local_240 = (char *)0x0;
    FUN_10002a29c(&local_250,&DAT_10054d428,&DAT_100420300);
    pcStack_248 = (char *)0x0;
    local_250 = (char *)0x0;
    local_238 = 0;
    local_240 = (char *)0x0;
    pvVar32 = (void *)0xe100000000000000;
    pcVar26 = (char *)0x3f;
LAB_100289328:
    FUN_10002a29c(&local_250,&DAT_10054d428,&DAT_100420300);
  }
  else {
    if (*(long *)(DVar11.unknown + 0x10) == 0) {
      pcStack_248 = (char *)0x0;
      local_250 = (char *)0x0;
      local_238 = 0;
      local_240 = (char *)0x0;
LAB_100289db4:
      FUN_10002a29c(&local_250,&DAT_10054d428,&DAT_100420300);
LAB_100289dcc:
      pvVar32 = (void *)0xe100000000000000;
      pcVar26 = (char *)0x3f;
      if (*(long *)(DVar11.unknown + 0x10) == 0) goto LAB_100289e30;
LAB_100289ddc:
      _swift_bridgeObjectRetain(DVar11.unknown);
      lVar34 = 0x656c646e75424643;
      uVar35 = 0;
      FUN_10000464c(0x656c646e75424643);
      if ((uVar35 & 1) == 0) {
        _swift_bridgeObjectRelease(DVar11.unknown);
        goto LAB_100289e30;
      }
      FUN_1000280d4(*(long *)(DVar11.unknown + 0x38) + lVar34 * 0x20,&local_250);
      _swift_bridgeObjectRelease(DVar11.unknown);
    }
    else {
      _swift_bridgeObjectRetain(DVar11.unknown);
      lVar34 = -0x2fffffffffffffe6;
      uVar35 = 0;
      FUN_10000464c(0xd00000000000001a);
      if ((uVar35 & 1) == 0) {
        pcStack_248 = (char *)0x0;
        local_250 = (char *)0x0;
        local_238 = 0;
        local_240 = (char *)0x0;
        _swift_bridgeObjectRelease(DVar11.unknown);
        goto LAB_100289db4;
      }
      FUN_1000280d4(*(long *)(DVar11.unknown + 0x38) + lVar34 * 0x20,&local_250);
      _swift_bridgeObjectRelease(DVar11.unknown);
      if (local_238 == 0) goto LAB_100289db4;
      ppcVar12 = &local_280;
      in_x3 = PTR___type_metadata_for_Swift_String_100523a98;
      _swift_dynamicCast(ppcVar12,&local_250,puVar15 + 8,
                         PTR___type_metadata_for_Swift_String_100523a98,6);
      if (((ulong)ppcVar12 & 1) == 0) goto LAB_100289dcc;
      pvVar32 = pvStack_278;
      pcVar26 = local_280;
      if (*(long *)(DVar11.unknown + 0x10) != 0) goto LAB_100289ddc;
LAB_100289e30:
      pcStack_248 = (char *)0x0;
      local_250 = (char *)0x0;
      local_238 = 0;
      local_240 = (char *)0x0;
    }
    _swift_bridgeObjectRelease(DVar11.unknown);
    if (local_238 == 0) goto LAB_100289328;
    ppcVar12 = &local_280;
    in_x3 = PTR___type_metadata_for_Swift_String_100523a98;
    _swift_dynamicCast(ppcVar12,&local_250,puVar15 + 8,
                       PTR___type_metadata_for_Swift_String_100523a98,6);
    if (((ulong)ppcVar12 & 1) != 0) {
      local_2d0 = local_280;
      pvStack_2c8 = pvStack_278;
      goto LAB_10028934c;
    }
  }
  local_2d0 = (char *)0x3f;
  pvStack_2c8 = (void *)0xe100000000000000;
LAB_10028934c:
  IVar10 = NSProcessInfo::processInfo((ID)&_OBJC_CLASS___NSProcessInfo);
  NSProcessInfo::operatingSystemVersion(IVar10,&local_250);
  pcVar4 = local_240;
  pcVar24 = pcStack_248;
  pcVar23 = local_250;
  _Var13.unknown = (undefined *)NSScreen::screens(&_OBJC_CLASS___NSScreen);
  FUN_100044230(0,&DAT_100558e50,&PTR__OBJC_CLASS___NSScreen_10053f9b0);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if ((ulong)_Var13.unknown >> 0x3e == 0) {
    uVar35 = *(ulong *)(((ulong)_Var13.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var3.unknown = _Var13.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var13.unknown) {
      _Var3.unknown = _Var13.unknown;
    }
    uVar35 = Swift::_CocoaArrayWrapper::get_endIndex(_Var3);
  }
  pcVar37 = PTR___swiftEmptyArrayStorage_100524190;
  local_2a8 = SUB84(pvVar32,0);
  uStack_2a4 = (undefined4)((ulong)pvVar32 >> 0x20);
  if (uVar35 == 0) {
    _swift_bridgeObjectRelease(_Var13.unknown);
    pcVar33 = PTR___swiftEmptyArrayStorage_100524190;
  }
  else {
    local_280 = PTR___swiftEmptyArrayStorage_100524190;
    FUN_1001c5bc4(0,uVar35 & ((long)uVar35 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar35 < 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x100289efc);
      (*pcVar9)();
    }
    uVar36 = 0;
    do {
      pcVar37 = local_280;
      if (((ulong)_Var13.unknown & 0xc000000000000001) == 0) {
        if (*(long *)(((ulong)_Var13.unknown & 0xffffffffffffff8) + 0x10) <= (long)uVar36) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100289e8c);
          (*pcVar9)();
        }
        uVar31 = *(ulong *)(_Var13.unknown + uVar36 * 8 + 0x20);
      }
      else {
        uVar31 = uVar36;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar36,_Var13);
      }
      local_290 = uVar31;
      FUN_10028626c(&local_250,&local_290);
      pcVar22 = pcStack_248;
      pcVar14 = local_250;
      uVar31 = *(ulong *)(pcVar37 + 0x10);
      local_280 = pcVar37;
      if (*(ulong *)(pcVar37 + 0x18) >> 1 <= uVar31) {
        FUN_1001c5bc4(1 < *(ulong *)(pcVar37 + 0x18),uVar31 + 1,1);
      }
      pcVar33 = local_280;
      uVar36 = uVar36 + 1;
      *(ulong *)(local_280 + 0x10) = uVar31 + 1;
      *(char **)(local_280 + uVar31 * 0x10 + 0x20) = pcVar14;
      *(char **)(local_280 + uVar31 * 0x10 + 0x28) = pcVar22;
    } while (uVar35 != uVar36);
    _swift_bridgeObjectRelease(_Var13.unknown);
    pcVar37 = PTR___swiftEmptyArrayStorage_100524190;
  }
  pcVar14 = &DAT_100549eb0;
  FUN_100002f94(&DAT_100549eb0,&DAT_100426be0);
  pcVar22 = (char *)0x7;
  _swift_allocObject();
  pcVar14[0x18] = '\x06';
  pcVar14[0x19] = '\0';
  pcVar14[0x1a] = '\0';
  pcVar14[0x1b] = '\0';
  pcVar14[0x1c] = '\0';
  pcVar14[0x1d] = '\0';
  pcVar14[0x1e] = '\0';
  pcVar14[0x1f] = '\0';
  pcVar14[0x10] = '\x03';
  pcVar14[0x11] = '\0';
  pcVar14[0x12] = '\0';
  pcVar14[0x13] = '\0';
  pcVar14[0x14] = '\0';
  pcVar14[0x15] = '\0';
  pcVar14[0x16] = '\0';
  pcVar14[0x17] = '\0';
  local_250 = (char *)0x207265706c6c6157;
  pcStack_248 = (char *)0xe800000000000000;
  SVar6.bridgeObject._0_4_ = local_2a8;
  SVar6.str = pcVar26;
  SVar6.bridgeObject._4_4_ = uStack_2a4;
  SVar45.bridgeObject = in_x3;
  SVar45.str = pcVar22;
  Swift::String::append(SVar6,SVar45);
  _swift_bridgeObjectRelease(pvVar32);
  SVar38.bridgeObject = (void *)0xe200000000000000;
  SVar38.str = (char *)0x2820;
  SVar46.bridgeObject = in_x3;
  SVar46.str = pcVar22;
  Swift::String::append(SVar38,SVar46);
  SVar40.bridgeObject = pvStack_2c8;
  SVar40.str = local_2d0;
  SVar47.bridgeObject = in_x3;
  SVar47.str = pcVar22;
  Swift::String::append(SVar40,SVar47);
  _swift_bridgeObjectRelease(pvStack_2c8);
  SVar39.bridgeObject = (void *)0xe100000000000000;
  SVar39.str = (char *)0x29;
  SVar48.bridgeObject = in_x3;
  SVar48.str = pcVar22;
  Swift::String::append(SVar39,SVar48);
  *(char **)(pcVar14 + 0x20) = local_250;
  *(char **)(pcVar14 + 0x28) = pcStack_248;
  puVar18 = PTR___type_metadata_for_Swift_Int_100523bd8;
  local_250 = (char *)0x20534f63616d;
  pcStack_248 = (char *)0xe600000000000000;
  local_280 = pcVar23;
  SVar40 = Swift::CustomStringConvertible::get_description();
  SVar49.bridgeObject = in_x3;
  SVar49.str = pcVar22;
  Swift::String::append(SVar40,SVar49);
  _swift_bridgeObjectRelease(SVar40.bridgeObject);
  SVar41.bridgeObject = (void *)0xe100000000000000;
  SVar41.str = (char *)0x2e;
  SVar50.bridgeObject = in_x3;
  SVar50.str = pcVar22;
  Swift::String::append(SVar41,SVar50);
  local_280 = pcVar24;
  SVar40 = Swift::CustomStringConvertible::get_description();
  SVar51.bridgeObject = in_x3;
  SVar51.str = pcVar22;
  Swift::String::append(SVar40,SVar51);
  _swift_bridgeObjectRelease(SVar40.bridgeObject);
  SVar42.bridgeObject = (void *)0xe100000000000000;
  SVar42.str = (char *)0x2e;
  SVar52.bridgeObject = in_x3;
  SVar52.str = pcVar22;
  Swift::String::append(SVar42,SVar52);
  local_280 = pcVar4;
  SVar40 = Swift::CustomStringConvertible::get_description();
  SVar53.bridgeObject = in_x3;
  SVar53.str = pcVar22;
  _Var21.unknown = SVar40.bridgeObject;
  Swift::String::append(SVar40,SVar53);
  _swift_bridgeObjectRelease(SVar40.bridgeObject);
  *(char **)(pcVar14 + 0x30) = local_250;
  *(char **)(pcVar14 + 0x38) = pcStack_248;
  local_250 = (char *)0x0;
  pcStack_248 = (char *)0xe000000000000000;
  Swift::_StringGuts::grow(0x11,_Var21);
  _swift_bridgeObjectRelease(pcStack_248);
  local_250 = (char *)0x7379616c70736944;
  pcStack_248 = (char *)0xea00000000002820;
  local_280 = *(char **)(pcVar33 + 0x10);
  SVar40 = Swift::CustomStringConvertible::get_description();
  SVar54.bridgeObject = in_x3;
  SVar54.str = pcVar22;
  Swift::String::append(SVar40,SVar54);
  _swift_bridgeObjectRelease(SVar40.bridgeObject);
  SVar43.bridgeObject = (void *)0xe300000000000000;
  SVar43.str = (char *)0x203a29;
  SVar55.bridgeObject = in_x3;
  SVar55.str = pcVar22;
  Swift::String::append(SVar43,SVar55);
  pcVar26 = &DAT_100553858;
  local_280 = pcVar33;
  FUN_100002f94(&DAT_100553858,&DAT_100429e10);
  puVar15 = &DAT_1005546b8;
  FUN_1000087a0(&DAT_1005546b8,&DAT_100553858,&DAT_100429e10,
                PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100523b48);
  separator.bridgeObject = (void *)0xe200000000000000;
  separator.str = (char *)0x202c;
  pcVar23 = pcVar26;
  puVar25 = puVar15;
  SVar40 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator);
  _swift_bridgeObjectRelease(pcVar33);
  SVar56.bridgeObject = puVar25;
  SVar56.str = pcVar23;
  Swift::String::append(SVar40,SVar56);
  _swift_bridgeObjectRelease(SVar40.bridgeObject);
  *(char **)(pcVar14 + 0x40) = local_250;
  *(char **)(pcVar14 + 0x48) = pcStack_248;
  IVar10 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  puVar27 = &DAT_10054c048;
  FUN_100002f94(&DAT_10054c048,&DAT_10041d7b0);
  _swift_initStackObject();
  *(undefined8 *)(puVar27 + 0x18) = 0x10;
  *(undefined8 *)(puVar27 + 0x10) = 8;
  *(undefined8 *)(puVar27 + 0x20) = 0xd000000000000012;
  *(undefined8 *)(puVar27 + 0x28) = 0x80000001004de4e0;
  pNVar16 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar17 = NSUserDefaults::boolForKey_(IVar10,pNVar16);
  puVar19 = PTR___type_metadata_for_Swift_Bool_100523b70;
  puVar27[0x30] = (char)IVar17;
  *(undefined **)(puVar27 + 0x48) = puVar19;
  *(undefined8 *)(puVar27 + 0x50) = 0xd000000000000011;
  *(undefined8 *)(puVar27 + 0x58) = 0x80000001004de500;
  pNVar16 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar17 = NSUserDefaults::boolForKey_(IVar10,pNVar16);
  puVar27[0x60] = (char)IVar17;
  *(undefined **)(puVar27 + 0x78) = puVar19;
  *(undefined8 *)(puVar27 + 0x80) = 0xd000000000000011;
  *(undefined8 *)(puVar27 + 0x88) = 0x80000001004de4c0;
  pNVar16 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar17 = NSUserDefaults::boolForKey_(IVar10,pNVar16);
  puVar27[0x90] = (char)IVar17;
  *(undefined **)(puVar27 + 0xa8) = puVar19;
  *(undefined8 *)(puVar27 + 0xb0) = 0xd000000000000015;
  *(undefined8 *)(puVar27 + 0xb8) = 0x80000001004de5c0;
  pNVar16 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar17 = NSUserDefaults::boolForKey_(IVar10,pNVar16);
  puVar27[0xc0] = (char)IVar17;
  *(undefined **)(puVar27 + 0xd8) = puVar19;
  *(undefined8 *)(puVar27 + 0xe0) = 0xd000000000000016;
  *(undefined8 *)(puVar27 + 0xe8) = 0x80000001004de580;
  pNVar16 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar17 = NSUserDefaults::boolForKey_(IVar10,pNVar16);
  puVar27[0xf0] = (char)IVar17;
  *(undefined **)(puVar27 + 0x108) = puVar19;
  *(undefined8 *)(puVar27 + 0x110) = 0xd000000000000013;
  *(undefined8 *)(puVar27 + 0x118) = 0x80000001004de520;
  pNVar16 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar17 = NSUserDefaults::integerForKey_(IVar10,pNVar16);
  *(ID *)(puVar27 + 0x120) = IVar17;
  *(undefined **)(puVar27 + 0x138) = puVar18;
  *(undefined8 *)(puVar27 + 0x140) = 0xd000000000000016;
  *(undefined8 *)(puVar27 + 0x148) = 0x80000001004de440;
  pNVar16 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar17 = NSUserDefaults::boolForKey_(IVar10,pNVar16);
  puVar27[0x150] = (char)IVar17;
  *(undefined **)(puVar27 + 0x168) = puVar19;
  *(undefined8 *)(puVar27 + 0x170) = 0xd000000000000016;
  *(undefined8 *)(puVar27 + 0x178) = 0x80000001004dbc80;
  pNVar16 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar10 = NSUserDefaults::boolForKey_(IVar10,pNVar16);
  *(undefined **)(puVar27 + 0x198) = puVar19;
  puVar27[0x180] = (char)IVar10;
  puVar18 = puVar27;
  FUN_100005b10();
  _swift_setDeallocating(puVar27);
  puVar19 = &DAT_10054a1c0;
  FUN_100002f94(&DAT_10054a1c0,&DAT_10041a250);
  _swift_arrayDestroy(puVar27 + 0x20,8,puVar19);
  lVar34 = *(long *)(puVar18 + 0x10);
  if (lVar34 == 0) {
    _swift_bridgeObjectRelease(puVar18);
    pcVar23 = PTR___swiftEmptyArrayStorage_100524190;
  }
  else {
    pcVar24 = (char *)0x0;
    local_218 = pcVar37;
    FUN_1001c5bc4(0,lVar34);
    pcVar23 = local_218;
    _Var1.unknown = puVar18 + 0x40;
    BVar20 = Swift::_HashTable::get_startBucket(_Var1);
    lVar30 = 0;
    iVar5 = *(int *)(puVar18 + 0x24);
    uVar35 = (ulong)(byte)puVar18[0x20];
    do {
      if ((ulong)BVar20.unknown >> (uVar35 & 0x3f) != 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x100289e78);
        (*pcVar9)();
      }
      uVar36 = (ulong)BVar20.unknown >> 6;
      uVar31 = 1L << ((ulong)BVar20.unknown & 0x3f);
      if ((*(ulong *)(_Var1.unknown + uVar36 * 8) & uVar31) == 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x100289e7c);
        (*pcVar9)();
      }
      pSVar2 = (String *)(*(long *)(puVar18 + 0x30) + (long)BVar20.unknown * 0x10);
      pcVar4 = pSVar2->str;
      pvVar32 = pSVar2->bridgeObject;
      SVar40 = *pSVar2;
      FUN_1000280d4(*(long *)(puVar18 + 0x38) + (long)BVar20.unknown * 0x20,&local_240);
      local_280 = pcVar4;
      pvStack_278 = pvVar32;
      FUN_100007d88(&local_240,auStack_270);
      local_290 = 0;
      uStack_288 = 0xe000000000000000;
      _swift_bridgeObjectRetain(pvVar32);
      SVar57.bridgeObject = puVar25;
      SVar57.str = pcVar24;
      Swift::String::append(SVar40,SVar57);
      SVar44.bridgeObject = (void *)0xe100000000000000;
      SVar44.str = (char *)0x3d;
      SVar58.bridgeObject = puVar25;
      SVar58.str = pcVar24;
      Swift::String::append(SVar44,SVar58);
      puVar25 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100523f88;
      Swift::__print_unlocked
                (auStack_270,&local_290,PTR___type_metadata_for_Any_100524178 + 8,
                 PTR___type_metadata_for_Swift_DefaultStringInterpolation_100523f88,
                 PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100523f90
                );
      uVar8 = uStack_288;
      uVar7 = local_290;
      pcVar24 = &DAT_100429ce0;
      FUN_10002a29c(&local_280,&DAT_100555e98);
      uVar35 = *(ulong *)(pcVar23 + 0x10);
      local_218 = pcVar23;
      if (*(ulong *)(pcVar23 + 0x18) >> 1 <= uVar35) {
        pcVar24 = (char *)0x1;
        FUN_1001c5bc4(1 < *(ulong *)(pcVar23 + 0x18),uVar35 + 1);
      }
      pcVar23 = local_218;
      *(ulong *)(local_218 + 0x10) = uVar35 + 1;
      *(ulong *)(local_218 + uVar35 * 0x10 + 0x20) = uVar7;
      *(undefined8 *)(local_218 + uVar35 * 0x10 + 0x28) = uVar8;
      uVar35 = (ulong)(byte)puVar18[0x20];
      puVar27 = (undefined *)(1L << (uVar35 & 0x3f));
      if (puVar27 <= BVar20.unknown) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x100289e80);
        (*pcVar9)();
      }
      if ((*(ulong *)(_Var1.unknown + uVar36 * 8) & uVar31) == 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x100289e84);
        (*pcVar9)();
      }
      if (iVar5 != *(int *)(puVar18 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x100289e88);
        (*pcVar9)();
      }
      uVar31 = *(ulong *)(_Var1.unknown + uVar36 * 8) & -2L << ((ulong)BVar20.unknown & 0x3f);
      if (uVar31 == 0) {
        lVar28 = uVar36 << 6;
        puVar29 = (ulong *)(puVar18 + uVar36 * 8 + 0x48);
        do {
          uVar36 = uVar36 + 1;
          if ((ulong)(puVar27 + 0x3f) >> 6 <= uVar36) goto LAB_100289a9c;
          uVar31 = *puVar29;
          lVar28 = lVar28 + 0x40;
          puVar29 = puVar29 + 1;
        } while (uVar31 == 0);
        uVar36 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
        uVar36 = (uVar36 & 0xcccccccccccccccc) >> 2 | (uVar36 & 0x3333333333333333) << 2;
        uVar36 = (uVar36 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar36 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar36 = (uVar36 & 0xff00ff00ff00ff00) >> 8 | (uVar36 & 0xff00ff00ff00ff) << 8;
        uVar36 = (uVar36 & 0xffff0000ffff0000) >> 0x10 | (uVar36 & 0xffff0000ffff) << 0x10;
        puVar27 = (undefined *)(LZCOUNT(uVar36 >> 0x20 | uVar36 << 0x20) + lVar28);
      }
      else {
        uVar36 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
        uVar36 = (uVar36 & 0xcccccccccccccccc) >> 2 | (uVar36 & 0x3333333333333333) << 2;
        uVar36 = (uVar36 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar36 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar36 = (uVar36 & 0xff00ff00ff00ff00) >> 8 | (uVar36 & 0xff00ff00ff00ff) << 8;
        uVar36 = (uVar36 & 0xffff0000ffff0000) >> 0x10 | (uVar36 & 0xffff0000ffff) << 0x10;
        puVar27 = (undefined *)
                  (LZCOUNT(uVar36 >> 0x20 | uVar36 << 0x20) |
                  (ulong)BVar20.unknown & 0x7fffffffffffffc0);
      }
LAB_100289a9c:
      lVar30 = lVar30 + 1;
      BVar20.unknown = puVar27;
    } while (lVar30 != lVar34);
    _swift_bridgeObjectRelease(puVar18);
  }
  local_250 = pcVar23;
  _swift_bridgeObjectRetain(pcVar23);
  FUN_100177c2c(&local_250);
  _swift_bridgeObjectRelease(pcVar23);
  pcVar23 = local_250;
  separator_00.bridgeObject = (void *)0xe200000000000000;
  separator_00.str = (char *)0x202c;
  SVar40 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator_00);
  _swift_release(pcVar23);
  local_250 = (char *)0x73676e6974746553;
  pcStack_248 = (char *)0xea0000000000203a;
  SVar59.bridgeObject = puVar15;
  SVar59.str = pcVar26;
  Swift::String::append(SVar40,SVar59);
  _swift_bridgeObjectRelease(SVar40.bridgeObject);
  pcVar23 = pcStack_248;
  pcVar26 = local_250;
  uVar35 = *(ulong *)(pcVar14 + 0x10);
  pcVar24 = pcVar14;
  if (*(ulong *)(pcVar14 + 0x18) >> 1 <= uVar35) {
    pcVar24 = (char *)(ulong)(1 < *(ulong *)(pcVar14 + 0x18));
    FUN_1001c432c(pcVar24,uVar35 + 1,1,pcVar14);
  }
  *(ulong *)(pcVar24 + 0x10) = uVar35 + 1;
  *(char **)(pcVar24 + uVar35 * 0x10 + 0x20) = pcVar26;
  *(char **)(pcVar24 + uVar35 * 0x10 + 0x28) = pcVar23;
  repeating.bridgeObject = (void *)0xa300000000000000;
  repeating.str = (char *)0x9480e2;
  SVar40 = Swift::String::init(repeating,0x48);
  uVar35 = *(ulong *)(pcVar24 + 0x10);
  pcVar26 = pcVar24;
  if (*(ulong *)(pcVar24 + 0x18) >> 1 <= uVar35) {
    pcVar26 = (char *)(ulong)(1 < *(ulong *)(pcVar24 + 0x18));
    FUN_1001c432c(pcVar26,uVar35 + 1,1,pcVar24);
  }
  *(ulong *)(pcVar26 + 0x10) = uVar35 + 1;
  *(String *)(pcVar26 + uVar35 * 0x10 + 0x20) = SVar40;
  separator_01.bridgeObject = (void *)0xe100000000000000;
  separator_01.str = (char *)0xa;
  local_250 = pcVar26;
  SVar40 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator_01);
  _swift_bridgeObjectRelease(pcVar26);
  return SVar40;
}

