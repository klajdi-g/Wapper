// rea decompile_all
// name: FUN_10012a308
// address: 0x10012a308
// body: available
// range: 0x10012a308-0x10012adf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010012a80c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined * FUN_10012a308(undefined8 param_1,undefined8 param_2,byte param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  State<undefined> SVar13;
  ID IVar14;
  Dictionary<undefined,undefined> DVar15;
  Dictionary<undefined,undefined> DVar16;
  LocalizedStringKey LVar17;
  undefined8 uVar18;
  AnyView AVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long unaff_x20;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  String stringLiteral;
  undefined1 auStack_1ef0 [440];
  undefined *local_1d38;
  undefined8 local_1d30;
  undefined1 auStack_1b80 [344];
  undefined1 auStack_1a28 [344];
  undefined1 auStack_18d0 [344];
  undefined8 local_1778;
  long local_1770;
  undefined1 auStack_1768 [344];
  undefined8 local_1610;
  long local_1608;
  undefined1 auStack_1600 [360];
  undefined8 local_1498;
  long local_1490;
  undefined1 auStack_1488 [360];
  undefined8 local_1320;
  long local_1318;
  undefined1 auStack_1310 [376];
  undefined8 local_1198;
  long local_1190;
  undefined1 auStack_1188 [376];
  undefined8 local_1010;
  long local_1008;
  undefined1 auStack_1000 [392];
  undefined8 local_e78;
  long local_e70;
  undefined1 auStack_e68 [392];
  undefined8 local_ce0;
  long local_cd8;
  undefined1 auStack_cd0 [408];
  undefined8 local_b38;
  long local_b30;
  undefined1 auStack_b28 [408];
  undefined8 local_990;
  long local_988;
  undefined *local_980;
  undefined8 uStack_978;
  undefined8 local_970;
  long lStack_968;
  undefined8 local_7d8;
  long local_7d0;
  code *local_7c8;
  undefined *local_7c0;
  code *local_7b8;
  undefined *local_7b0;
  code *local_7a8;
  long local_7a0;
  code *local_798;
  long local_790;
  undefined8 local_788;
  undefined8 local_780;
  undefined8 local_778;
  undefined8 local_770;
  undefined *local_768;
  undefined8 *local_760;
  undefined *local_758;
  undefined *local_750;
  undefined *local_748;
  undefined *local_740;
  undefined *local_738;
  undefined *local_730;
  undefined *local_728;
  undefined *local_720;
  undefined *local_718;
  undefined8 local_710;
  undefined8 local_708;
  undefined8 local_700;
  undefined8 local_6f8;
  code *local_6f0;
  undefined8 local_6e8;
  undefined1 local_6e0;
  undefined1 auStack_6d8 [16];
  undefined1 auStack_6c8 [16];
  undefined1 auStack_6b8 [16];
  undefined1 auStack_6a8 [16];
  undefined1 auStack_698 [16];
  undefined1 auStack_688 [24];
  undefined1 auStack_670 [360];
  undefined1 auStack_508 [376];
  undefined1 auStack_390 [392];
  undefined1 auStack_208 [424];
  
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar22 = *(long *)(unaff_x20 + _TtC7Wallper17MenuBarController::videoLibrary);
  if ((((lVar22 == 0) ||
       (lVar21 = *(long *)(unaff_x20 + _TtC7Wallper17MenuBarController::shuffleManager), lVar21 == 0
       )) || (lVar23 = *(long *)(unaff_x20 + _TtC7Wallper17MenuBarController::previewManager),
             lVar23 == 0)) ||
     (((lVar24 = *(long *)(unaff_x20 + _TtC7Wallper17MenuBarController::applicationManager),
       lVar24 == 0 ||
       (lVar25 = *(long *)(unaff_x20 + _TtC7Wallper17MenuBarController::updateManager), lVar25 == 0)
       ) || (lVar26 = *(long *)(unaff_x20 + _TtC7Wallper17MenuBarController::playlistManager),
            lVar26 == 0)))) {
    uVar18 = 0x80000001004ddd70;
    stringLiteral.bridgeObject = (void *)0x80000001004ddd70;
    stringLiteral.str = (char *)0xd000000000000022;
    LVar17 = SwiftUI::LocalizedStringKey::init(stringLiteral);
    param_3 = param_3 & 1;
    local_980 = (undefined *)SwiftUI::Text::_init(LVar17);
    local_970 = CONCAT71(local_970._1_7_,param_3);
    uStack_978 = uVar18;
    lStack_968 = param_4;
    AVar19 = SwiftUI::AnyView::_init
                       (local_980,PTR___type_metadata_for_SwiftUI_Text_100522e28,
                        PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100522e18
                       );
    return AVar19.unknown;
  }
  puVar4 = &DAT_10052d4a0;
  puVar3 = puVar4;
  _swift_allocObject(&DAT_10052d4a0,0x18,7);
  _swift_unknownObjectWeakInit(puVar3 + 0x10);
  _swift_allocObject(&DAT_10052d4a0,0x18,7);
  _swift_unknownObjectWeakInit(puVar4 + 0x10);
  uVar18 = *(undefined8 *)(unaff_x20 + _TtC7Wallper17MenuBarController::currentScreenIDForPreview);
  uVar1 = ((undefined8 *)(unaff_x20 + _TtC7Wallper17MenuBarController::currentScreenIDForPreview))
          [1];
  uVar5 = 0;
  FUN_100279594();
  puVar6 = &DAT_100553dd0;
  FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
  _swift_retain_n(lVar21,3);
  _swift_retain(puVar3);
  _swift_retain(puVar4);
  _swift_retain(lVar26);
  _swift_retain(lVar25);
  _swift_retain(lVar24);
  _swift_retain(lVar23);
  _swift_retain(lVar22);
  _swift_bridgeObjectRetain(uVar1);
  local_768 = (undefined *)SwiftUI::EnvironmentObject::init();
  uVar7 = 0;
  local_760 = puVar6;
  FUN_100226ac0();
  puVar8 = &DAT_10054aa48;
  FUN_1000036d0(&DAT_10054aa48,FUN_100226ac0,&TargetProtocolConformanceDescriptor_10042b420);
  local_758 = (undefined *)SwiftUI::EnvironmentObject::init();
  uVar9 = 0;
  local_750 = puVar8;
  FUN_1001373cc();
  puVar8 = &DAT_100553de0;
  FUN_1000036d0(&DAT_100553de0,FUN_1001373cc,&TargetProtocolConformanceDescriptor_100426ef0);
  local_748 = (undefined *)SwiftUI::EnvironmentObject::init();
  uVar10 = 0;
  local_740 = puVar8;
  FUN_100231228();
  puVar8 = &DAT_10054d6a8;
  FUN_1000036d0(&DAT_10054d6a8,FUN_100231228,&TargetProtocolConformanceDescriptor_10042bb2c);
  local_738 = (undefined *)SwiftUI::EnvironmentObject::init();
  uVar11 = 0;
  local_730 = puVar8;
  FUN_1001b7378();
  puVar8 = &DAT_100553df0;
  FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
  local_728 = (undefined *)SwiftUI::EnvironmentObject::init();
  local_720 = puVar8;
  if (DAT_1005564c0 != -1) {
    _swift_once(&DAT_1005564c0,FUN_10017806c);
  }
  uVar2 = DAT_100577cc0;
  uVar12 = 0;
  FUN_1001a81c0();
  puVar8 = &DAT_10054aa50;
  FUN_1000036d0(&DAT_10054aa50,FUN_1001a81c0,&TargetProtocolConformanceDescriptor_100429ab0);
  _swift_retain(uVar2);
  local_718 = (undefined *)SwiftUI::ObservedObject::init(puVar8,uVar12,puVar8);
  uStack_978 = 0;
  local_980 = (undefined *)0x0;
  puVar8 = &DAT_100549db0;
  local_710 = uVar12;
  FUN_100002f94(&DAT_100549db0,&DAT_100419ed0);
  SVar13 = SwiftUI::State::init(&local_708,puVar8,puVar8);
  local_6f0 = FUN_100009bdc;
  local_6e8 = 0;
  local_6e0 = 0;
  FUN_100057ee0();
  puVar8 = PTR___type_metadata_for_Swift_Bool_100523b70;
  local_980._0_1_ = (byte)SVar13.unknown & 1;
  SwiftUI::State::init(auStack_6d8,SVar13.unknown,PTR___type_metadata_for_Swift_Bool_100523b70);
  local_980._0_1_ = 0;
  SwiftUI::State::init(auStack_6c8,SVar13.unknown,puVar8);
  local_980._0_1_ = 0;
  SwiftUI::State::init(auStack_6b8,SVar13.unknown,puVar8);
  local_980 = (undefined *)((ulong)local_980._1_7_ << 8);
  SwiftUI::State::init(auStack_6a8,SVar13.unknown,puVar8);
  local_980 = (undefined *)0x0;
  SwiftUI::State::init(auStack_698,SVar13.unknown,PTR___type_metadata_for_Swift_Int_100523bd8);
  IVar14 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  IVar14 = NSBundle::infoDictionary(IVar14);
  puVar8 = PTR___type_metadata_for_Any_100524178;
  if (IVar14 == 0) {
    lStack_968 = 0;
    local_970 = 0;
    uStack_978 = 0;
    local_980 = (undefined *)0x0;
    DVar16.unknown = (undefined *)0x0;
LAB_10012a898:
    FUN_10002a29c(&local_980,&DAT_10054d428,&DAT_100420300);
  }
  else {
    DVar15 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
    DVar16 = DVar15;
    if (*(long *)(DVar15.unknown + 0x10) == 0) {
LAB_10012a84c:
      lStack_968 = 0;
      local_970 = 0;
      uStack_978 = 0;
      local_980 = (undefined *)0x0;
    }
    else {
      _swift_bridgeObjectRetain(DVar15.unknown);
      uVar20 = 0;
      DVar16.unknown = (undefined *)0xd00000000000001a;
      FUN_10000464c(0xd00000000000001a);
      if ((uVar20 & 1) == 0) {
        _swift_bridgeObjectRelease(DVar15.unknown);
        goto LAB_10012a84c;
      }
      FUN_1000280d4(*(long *)(DVar15.unknown + 0x38) + (long)DVar16.unknown * 0x20,&local_980);
      _swift_bridgeObjectRelease(DVar15.unknown);
    }
    _swift_bridgeObjectRelease(DVar15.unknown);
    if (lStack_968 == 0) goto LAB_10012a898;
    DVar16.unknown = (undefined *)&local_1d38;
    _swift_dynamicCast(DVar16.unknown,&local_980,puVar8 + 8,
                       PTR___type_metadata_for_Swift_String_100523a98,6);
    if (((ulong)DVar16.unknown & 1) != 0) goto LAB_10012a8c0;
  }
  local_1d30 = 0xe300000000000000;
  local_1d38 = (undefined *)0x302e31;
LAB_10012a8c0:
  local_980 = local_1d38;
  uStack_978 = local_1d30;
  SwiftUI::State::init(auStack_688,DVar16.unknown,PTR___type_metadata_for_Swift_String_100523a98);
  local_7c8 = FUN_10012c8f8;
  local_7b8 = FUN_10012c900;
  local_7a8 = thunk_FUN_100216008;
  local_798 = thunk_FUN_100216304;
  local_770 = 0;
  local_778 = 0;
  local_7c0 = puVar3;
  local_7b0 = puVar4;
  local_7a0 = lVar21;
  local_790 = lVar21;
  local_788 = uVar18;
  local_780 = uVar1;
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRelease(local_700);
  _swift_release(local_6f8);
  local_6f8 = 0;
  local_708 = uVar18;
  local_700 = uVar1;
  _memcpy(auStack_1b80,&local_7c8,0x158);
  _memcpy(auStack_1a28,&local_7c8,0x158);
  FUN_100058a6c(auStack_1b80,&local_980);
  FUN_10012c910(auStack_1a28);
  _swift_release(puVar3);
  _swift_release(puVar4);
  (extension_SwiftUI)::Combine::ObservableObject::_get_environmentStore();
  _memcpy(auStack_1768,auStack_1b80,0x158);
  _memcpy(auStack_18d0,auStack_1b80,0x158);
  local_1778 = uVar5;
  local_1770 = lVar22;
  _swift_retain(lVar22);
  (extension_SwiftUI)::Combine::ObservableObject::_get_environmentStore();
  _memcpy(auStack_670,auStack_18d0,0x168);
  local_1610 = uVar5;
  local_1608 = lVar22;
  _swift_retain(lVar21);
  FUN_1000087e4(auStack_18d0,&local_980,&DAT_100553df8,&DAT_100426cc8);
  FUN_10002a29c(auStack_1768,&DAT_100553df8,&DAT_100426cc8);
  _memcpy(auStack_1600,auStack_670,0x168);
  uVar18 = 0;
  local_1498 = uVar7;
  local_1490 = lVar21;
  FUN_1001eba34();
  FUN_1000036d0(&DAT_100553e00,FUN_1001eba34,&TargetProtocolConformanceDescriptor_10042add0);
  (extension_SwiftUI)::Combine::ObservableObject::_get_environmentStore();
  _memcpy(auStack_508,auStack_1600,0x178);
  _memcpy(auStack_1488,auStack_670,0x168);
  local_1320 = uVar7;
  local_1318 = lVar21;
  _swift_retain(lVar23);
  FUN_1000087e4(auStack_1600,&local_980,&DAT_100553e08,&DAT_100426cd0);
  FUN_10002a29c(auStack_1488,&DAT_100553e08,&DAT_100426cd0);
  _memcpy(auStack_1310,auStack_508,0x178);
  local_1198 = uVar18;
  local_1190 = lVar23;
  (extension_SwiftUI)::Combine::ObservableObject::_get_environmentStore();
  _memcpy(auStack_390,auStack_1310,0x188);
  _memcpy(auStack_1188,auStack_508,0x178);
  local_1010 = uVar18;
  local_1008 = lVar23;
  _swift_retain(lVar24);
  FUN_1000087e4(auStack_1310,&local_980,&DAT_100553e10,&DAT_100426cd8);
  FUN_10002a29c(auStack_1188,&DAT_100553e10,&DAT_100426cd8);
  _memcpy(auStack_1000,auStack_390,0x188);
  local_e78 = uVar9;
  local_e70 = lVar24;
  (extension_SwiftUI)::Combine::ObservableObject::_get_environmentStore();
  _memcpy(auStack_208,auStack_1000,0x198);
  _memcpy(auStack_e68,auStack_390,0x188);
  local_ce0 = uVar9;
  local_cd8 = lVar24;
  _swift_retain(lVar25);
  FUN_1000087e4(auStack_1000,&local_980,&DAT_100553e18,&DAT_100426ce0);
  FUN_10002a29c(auStack_e68,&DAT_100553e18,&DAT_100426ce0);
  _memcpy(auStack_cd0,auStack_208,0x198);
  local_b38 = uVar10;
  local_b30 = lVar25;
  (extension_SwiftUI)::Combine::ObservableObject::_get_environmentStore();
  _memcpy(&local_980,auStack_cd0,0x1a8);
  _memcpy(auStack_b28,auStack_208,0x198);
  local_990 = uVar10;
  local_988 = lVar25;
  _swift_retain(lVar26);
  FUN_1000087e4(auStack_cd0,&local_1d38,&DAT_100553e20,&DAT_100426ce8);
  FUN_10002a29c(auStack_b28,&DAT_100553e20,&DAT_100426ce8);
  local_7d8 = uVar11;
  local_7d0 = lVar26;
  _memcpy(&local_1d38,&local_980,0x1b8);
  puVar4 = &DAT_100553e28;
  FUN_1000087e4(&local_980,auStack_1ef0,&DAT_100553e28,&DAT_100426cf0);
  FUN_100002f94(&DAT_100553e28,&DAT_100426cf0);
  puVar8 = puVar4;
  FUN_10012c944();
  AVar19 = SwiftUI::AnyView::_init(puVar8,puVar4,puVar8);
  _swift_release(lVar25);
  _swift_release(lVar24);
  _swift_release(lVar23);
  _swift_release(lVar21);
  _swift_release(lVar22);
  FUN_10002a29c(&local_980,&DAT_100553e28,&DAT_100426cf0);
  _swift_release(lVar26);
  return AVar19.unknown;
}

