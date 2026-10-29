// rea decompile_all
// name: FUN_100299640
// address: 0x100299640
// body: available
// range: 0x100299640-0x10029a0cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002997a4 to 0x100414abc _swift_unknownObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100299a60 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100299640(void)

{
  byte bVar1;
  char *pcVar2;
  bool bVar3;
  Logger LVar4;
  DispatchWorkItemFlags DVar5;
  DispatchQoS DVar6;
  undefined *puVar7;
  ID IVar9;
  NSString *pNVar10;
  undefined *puVar11;
  undefined *puVar12;
  NSDictionary *pNVar13;
  ID IVar14;
  undefined8 uVar15;
  void *aBlock;
  long lVar16;
  OS_os_log *pOVar17;
  OS_os_log *pOVar18;
  undefined4 *puVar19;
  undefined *puVar20;
  char *pcVar22;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar23;
  long lVar24;
  DispatchWorkItemFlags qos;
  uint uVar25;
  long lVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  long local_1c0;
  undefined *local_1b8;
  uint local_1b0;
  uint local_1ac;
  long local_1a8;
  long local_1a0;
  long local_198;
  undefined *local_190;
  undefined *local_188;
  ulong local_180;
  long local_178;
  undefined *puStack_170;
  undefined *local_b8;
  undefined *local_b0;
  code *local_a8;
  undefined *puStack_a0;
  code *local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 uStack_70;
  char *pcVar8;
  _StringGuts _Var21;
  
  LVar4 = os::Logger::typeMetadataAccessor();
  lVar23 = *(long *)(LVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar23 + 0x40));
  lVar16 = (long)&local_1c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar5 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar26 = *(long *)(DVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar26 + 0x40));
  lVar24 = lVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar6 = Dispatch::DispatchQoS::typeMetadataAccessor();
  local_178 = *(long *)(DVar6.unknown + -8);
  puStack_170 = DVar6.unknown;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_178 + 0x40));
  qos.unknown = (undefined *)(lVar24 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  if (*(long *)(unaff_x20 + 0x10) == 0) {
    return;
  }
  _IOPSCopyPowerSourcesInfo();
  if (DVar6.unknown == (undefined *)0x0) {
    return;
  }
  puVar7 = DVar6.unknown;
  _IOPSGetProvidingPowerSourceType();
  if (puVar7 == (undefined *)0x0) {
    _swift_unknownObjectRelease(DVar6.unknown);
    return;
  }
  local_1a8 = lVar26;
  local_1a0 = lVar16;
  local_198 = lVar23;
  local_190 = LVar4.unknown;
  SVar27 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  _Var21.unknown = SVar27.bridgeObject;
  if ((SVar27.str == (undefined *)0x2079726574746142) &&
     (_Var21.unknown == (undefined *)0xed00007265776f50)) {
    local_180 = CONCAT44(local_180._4_4_,1);
  }
  else {
    SVar28 = SVar27;
    bVar3 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)SVar27.str,_Var21,(_StringComparisonResult)0x42);
    pcVar8 = (char *)CONCAT71(SVar27.str._1_7_,bVar3);
    SVar27.bridgeObject = SVar28.bridgeObject;
    SVar27.str = pcVar8;
    local_180 = CONCAT44(local_180._4_4_,(int)pcVar8);
  }
  uVar25 = (uint)SVar27.bridgeObject;
  _swift_bridgeObjectRelease(_Var21.unknown);
  _swift_unknownObjectRelease();
  FUN_10029a480();
  puVar7 = (undefined *)0x64;
  if ((uVar25 & 0xff) != 1) {
    puVar7 = DVar6.unknown;
  }
  local_188 = &_OBJC_CLASS___NSUserDefaults;
  IVar9 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar9 = NSUserDefaults::integerForKey_(IVar9,pNVar10);
  if ((long)IVar9 < 6) {
    if ((local_180 & 1) == 0) goto LAB_1002998bc;
    if ((long)puVar7 < 6) goto LAB_1002998ec;
    IVar9 = 5;
LAB_1002998a0:
    if (*(char *)(unaff_x20 + 0x21) == '\x01') {
      uVar25 = (uint)(puVar7 < (undefined *)(IVar9 + 3));
    }
    else {
      uVar25 = 0;
    }
LAB_1002998f8:
    bVar1 = *(byte *)(unaff_x20 + 0x23);
    if ((*(byte *)(unaff_x20 + 0x20) & 1) == 0) goto LAB_1002998d4;
LAB_100299908:
    local_1b0 = uVar25 ^ *(byte *)(unaff_x20 + 0x21);
    local_1ac = 1;
    *(undefined1 *)(unaff_x20 + 0x23) = 1;
    if ((bVar1 & 1) != 0) goto LAB_1002999b0;
    local_1ac = 0;
  }
  else {
    if (IVar9 < 0x33) {
      if ((local_180 & 1) != 0) {
        if ((long)puVar7 <= (long)IVar9) goto LAB_1002998ec;
        goto LAB_1002998a0;
      }
    }
    else if ((local_180 & 1) != 0) {
      if (0x32 < (long)puVar7) {
        IVar9 = 0x32;
        goto LAB_1002998a0;
      }
LAB_1002998ec:
      uVar25 = 1;
      goto LAB_1002998f8;
    }
LAB_1002998bc:
    uVar25 = 0;
    bVar1 = *(byte *)(unaff_x20 + 0x23);
    if (*(char *)(unaff_x20 + 0x20) != '\x01') goto LAB_100299908;
LAB_1002998d4:
    local_1ac = (uint)bVar1;
    local_1b0 = 1;
    *(undefined1 *)(unaff_x20 + 0x23) = 1;
  }
  *(byte *)(unaff_x20 + 0x20) = (byte)local_180 & 1;
  IVar9 = objc_stub::standardUserDefaults((ID)local_188);
  pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar9 = objc_stub::boolForKey_(IVar9,pNVar10);
  if ((int)IVar9 != 0) {
    if (DAT_100557bb0 != -1) {
      _swift_once(&DAT_100557bb0,FUN_100233158);
    }
    FUN_100239d90();
  }
LAB_1002999b0:
  if (uVar25 != *(byte *)(unaff_x20 + 0x21)) {
    *(char *)(unaff_x20 + 0x21) = (char)uVar25;
    local_1b8 = (undefined *)
                NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
    if (DAT_100559bc0 != -1) {
      _swift_once(&DAT_100559bc0,FUN_1002995b0);
    }
    local_1c0 = DAT_100577df8;
    puVar7 = &DAT_100561110;
    FUN_100002f94(&DAT_100561110,&DAT_100422d10);
    _swift_initStackObject();
    *(undefined8 *)(puVar7 + 0x18) = 4;
    *(undefined8 *)(puVar7 + 0x10) = 2;
    puVar11 = PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100523aa8;
    puVar12 = PTR___type_metadata_for_Swift_String_100523a98;
    local_b8 = (undefined *)0x7265747461426e6f;
    local_b0 = (undefined *)0xe900000000000079;
    Swift::AnyHashable::_init
              (puVar7 + 0x20,puVar7,PTR___type_metadata_for_Swift_String_100523a98,
               PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100523aa8);
    puVar20 = PTR___type_metadata_for_Swift_Bool_100523b70;
    *(undefined **)(puVar7 + 0x60) = PTR___type_metadata_for_Swift_Bool_100523b70;
    puVar7[0x48] = (byte)local_180 & 1;
    local_b8 = (undefined *)0x7265776f50776f6c;
    local_b0 = (undefined *)0xe800000000000000;
    Swift::AnyHashable::_init(puVar7 + 0x68,puVar7,puVar12,puVar11);
    *(undefined **)(puVar7 + 0xa8) = puVar20;
    puVar7[0x90] = (char)uVar25;
    puVar11 = puVar7;
    FUN_100006798(puVar7);
    _swift_setDeallocating(puVar7);
    puVar12 = &DAT_10054a120;
    FUN_100002f94(&DAT_10054a120,&DAT_10041a1c8);
    _swift_arrayDestroy(puVar7 + 0x20,2,puVar12);
    pNVar13 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(puVar11);
    objc_stub::postNotificationName_object_userInfo_((ID)local_1b8,local_1c0,0,pNVar13);
  }
  IVar9 = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  if (DAT_100559bb8 != -1) {
    _swift_once(&DAT_100559bb8,FUN_1002995e4);
  }
  NSNotificationCenter::postNotificationName_object_(IVar9,DAT_100577df0,0);
  IVar9 = objc_stub::standardUserDefaults((ID)local_188);
  if ((local_180 & 1) == 0) {
    if ((*(byte *)(unaff_x20 + 0x22) & 1) == 0) {
      return;
    }
    uVar25 = 0;
  }
  else {
    pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    IVar14 = objc_stub::boolForKey_(IVar9,pNVar10);
    if ((int)IVar14 == 0) {
      pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      IVar14 = objc_stub::boolForKey_(IVar9,pNVar10);
      uVar25 = uVar25 & (uint)IVar14;
      if (uVar25 == *(byte *)(unaff_x20 + 0x22)) {
        return;
      }
    }
    else {
      if ((*(byte *)(unaff_x20 + 0x22) & 1) != 0) {
        return;
      }
      uVar25 = 1;
    }
  }
  *(char *)(unaff_x20 + 0x22) = (char)uVar25;
  local_180 = IVar9;
  if (DAT_100557bb0 != -1) {
    _swift_once(&DAT_100557bb0,FUN_100233158);
  }
  uVar15 = 2;
  local_1c0 = DAT_100577d38;
  FUN_10023afe8(2,uVar25);
  local_b8 = (undefined *)0x5b;
  local_b0 = (undefined *)0xe100000000000000;
  local_188 = (undefined *)CONCAT44(local_188._4_4_,uVar25);
  pcVar8 = "leasing battery pause";
  pcVar2 = (char *)0xd00000000000002b;
  if (uVar25 == 0) {
    pcVar8 = "Reconnecting in ";
    pcVar2 = (char *)0xd000000000000025;
  }
  local_78 = (undefined *)0x4f464e49;
  uStack_70 = 0xe400000000000000;
  local_88 = 0x20;
  uStack_80 = 0xe100000000000000;
  FUN_100026df4();
  pcVar22 = (char *)0x0;
  puVar7 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar27 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,&local_88,0,PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,uVar15,uVar15);
  SVar32.bridgeObject = puVar7;
  SVar32.str = pcVar22;
  Swift::String::append(SVar27,SVar32);
  _swift_bridgeObjectRelease(SVar27.bridgeObject);
  SVar28.bridgeObject = (void *)0xe300000000000000;
  SVar28.str = (char *)0x5b205d;
  SVar33.bridgeObject = puVar7;
  SVar33.str = pcVar22;
  Swift::String::append(SVar28,SVar33);
  SVar29.bridgeObject = (void *)0xe500000000000000;
  SVar29.str = (char *)0x7265776f70;
  SVar34.bridgeObject = puVar7;
  SVar34.str = pcVar22;
  Swift::String::append(SVar29,SVar34);
  SVar30.bridgeObject = (void *)0xe200000000000000;
  SVar30.str = (char *)0x205d;
  SVar35.bridgeObject = puVar7;
  SVar35.str = pcVar22;
  Swift::String::append(SVar30,SVar35);
  SVar31.bridgeObject = (void *)((ulong)pcVar8 | 0x8000000000000000);
  SVar31.str = pcVar2;
  SVar36.bridgeObject = puVar7;
  SVar36.str = pcVar22;
  Swift::String::append(SVar31,SVar36);
  puVar12 = local_b0;
  puVar7 = local_b8;
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  puVar11 = &DAT_100537560;
  _swift_allocObject(&DAT_100537560,0x30,7);
  local_1b8 = puVar7;
  *(undefined **)(puVar11 + 0x10) = puVar7;
  *(undefined **)(puVar11 + 0x18) = puVar12;
  *(undefined8 *)(puVar11 + 0x20) = 0;
  *(undefined8 *)(puVar11 + 0x28) = 0xe000000000000000;
  local_98 = FUN_100099310;
  local_b8 = PTR___NSConcreteStackBlock_100521110;
  local_b0 = (undefined *)0x42000000;
  local_a8 = FUN_1000c7e7c;
  puStack_a0 = &DAT_100537578;
  local_90 = puVar11;
  aBlock = __Block_copy(&local_b8);
  DVar6.unknown = puVar12;
  _swift_bridgeObjectRetain();
  DVar6 = Dispatch::DispatchQoS::get_unspecified(DVar6);
  local_78 = PTR___swiftEmptyArrayStorage_100524190;
  FUN_1000fedc8();
  puVar7 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar11 = puVar7;
  FUN_100077ac0();
  Swift::SetAlgebra::_init(lVar24,&local_78,puVar7,puVar11,DVar5.unknown,DVar6.unknown);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(aBlock);
  (**(code **)(local_1a8 + 8))(lVar24,DVar5.unknown);
  (**(code **)(local_178 + 8))(qos.unknown,puStack_170);
  _swift_release(local_90);
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  puVar7 = local_190;
  puVar11 = local_190;
  FUN_100099338(local_190,&DAT_100558f50);
  lVar24 = local_198;
  lVar23 = local_1a0;
  lVar16 = local_1a0;
  (**(code **)(local_198 + 0x10))(local_1a0,puVar11,puVar7);
  static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
  LVar4.unknown = puVar12;
  _swift_bridgeObjectRetain();
  pOVar17 = os::Logger::get_logObject(LVar4);
  pOVar18 = pOVar17;
  _os_log_type_enabled(pOVar17,(uint)lVar16 & 0xff);
  if ((int)pOVar18 == 0) {
    _swift_bridgeObjectRelease_n(puVar12,2);
  }
  else {
    puVar19 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    puVar20 = (undefined *)0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar19 = 0x8220102;
    puVar11 = local_1b8;
    local_b8 = puVar20;
    FUN_10012dbb0(local_1b8,puVar12,&local_b8);
    *(undefined **)(puVar19 + 1) = puVar11;
    _swift_bridgeObjectRelease_n(puVar12,2);
    __os_log_impl(0x100000000,pOVar17,(uint)lVar16 & 0xff,"%{public}s",puVar19,0xc);
    FUN_100043f24(puVar20);
    _swift_slowDealloc(puVar20,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar19,0xffffffffffffffff,0xffffffffffffffff);
  }
  (**(code **)(lVar24 + 8))(lVar23,puVar7);
  _swift_bridgeObjectRelease((ulong)pcVar8 | 0x8000000000000000);
  lVar24 = local_1c0;
  lVar23 = _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL;
  if (((((int)local_188 != 0) && ((local_1b0 & 1) != 0)) && (local_1ac != 0)) &&
     (_swift_beginAccess(local_1c0 + _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL,
                         &local_b8,0,0), *(long *)(*(long *)(lVar24 + lVar23) + 0x10) != 0)) {
    FUN_10029aabc();
  }
  return;
}

