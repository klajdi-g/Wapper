// rea decompile_all
// name: FUN_1001b7bec
// address: 0x1001b7bec
// body: available
// range: 0x1001b7bec-0x1001b8093 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001001b7e18 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1001b7bec(void)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  UUID UVar6;
  ID IVar7;
  NSString *pNVar8;
  PassthroughSubject *this;
  PassthroughSubject *pPVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x12;
  long unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_b0 [8];
  long local_a8;
  undefined *puStack_a0;
  long local_98;
  long local_90;
  undefined *puStack_88;
  undefined1 *local_80;
  long local_78;
  undefined *puStack_70;
  undefined *local_68;
  
  puVar3 = &DAT_10054b940;
  FUN_100002f94(&DAT_10054b940,&DAT_10041cf50);
  local_78 = *(long *)(puVar3 + -8);
  puStack_70 = puVar3;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_78 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100557e80;
  local_80 = auStack_b0 + -extraout_x8;
  FUN_100002f94(&DAT_100557e80,&DAT_10041cf60);
  local_90 = *(long *)(puVar3 + -8);
  puStack_88 = puVar3;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_90 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)(auStack_b0 + -extraout_x8) - extraout_x8_00;
  puVar3 = &DAT_1005569d8;
  local_98 = lVar10;
  FUN_100002f94(&DAT_1005569d8,&DAT_10042aad8);
  local_a8 = *(long *)(puVar3 + -8);
  puStack_a0 = puVar3;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_a8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar10 - extraout_x8_01;
  puVar3 = &DAT_10054a9c8;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  lVar11 = lVar10 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = lVar11 - extraout_x12;
  puVar4 = &DAT_1005569e0;
  FUN_100002f94(&DAT_1005569e0,&DAT_10042aae0);
  lVar13 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  *(undefined8 *)(unaff_x20 + 0x10) = 0x7473696c79616c50;
  *(undefined8 *)(unaff_x20 + 0x18) = 0xef736d6574692e73;
  *(undefined8 *)(unaff_x20 + 0x20) = 0xd000000000000012;
  *(undefined8 *)(unaff_x20 + 0x28) = 0x80000001004e0af0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0xd000000000000012;
  *(undefined8 *)(unaff_x20 + 0x38) = 0x80000001004e0b10;
  *(undefined8 *)(unaff_x20 + 0x40) = 0xd000000000000018;
  *(undefined8 *)(unaff_x20 + 0x48) = 0x80000001004e0b30;
  lVar1 = _TtC7Wallper15PlaylistManager::_playlists;
  local_68 = PTR___swiftEmptyArrayStorage_100524190;
  puVar5 = &DAT_10054a968;
  FUN_100002f94(&DAT_10054a968,&DAT_10041f070);
  Combine::Published::init(lVar12 - extraout_x8_03,puVar5,puVar5);
  (**(code **)(lVar13 + 0x20))(unaff_x20 + lVar1,lVar12 - extraout_x8_03,puVar4);
  lVar1 = _TtC7Wallper15PlaylistManager::_activePlaylistID;
  UVar6 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar6.unknown + -8) + 0x38))(lVar12,1,1,UVar6.unknown);
  FUN_1000087e4(lVar12,lVar11,&DAT_10054a9c8,&DAT_10041bbe0);
  Combine::Published::init(lVar10,UVar6.unknown,puVar3);
  FUN_10002a29c(lVar12,&DAT_10054a9c8,&DAT_10041bbe0);
  (**(code **)(local_a8 + 0x20))(unaff_x20 + lVar1,lVar10,puStack_a0);
  lVar1 = _TtC7Wallper15PlaylistManager::_isQueueOff;
  IVar7 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar7 = NSUserDefaults::boolForKey_(IVar7,pNVar8);
  lVar10 = local_98;
  local_68 = (undefined *)CONCAT71(local_68._1_7_,(char)IVar7);
  Combine::Published::init(local_98,IVar7,PTR___type_metadata_for_Swift_Bool_100523b70);
  (**(code **)(local_90 + 0x20))(unaff_x20 + lVar1,lVar10,puStack_88);
  puVar2 = local_80;
  lVar1 = _TtC7Wallper15PlaylistManager::_scheduleTick;
  local_68 = (undefined *)0x0;
  Combine::Published::init(local_80,IVar7,PTR___type_metadata_for_Swift_Int_100523bd8);
  (**(code **)(local_78 + 0x20))(unaff_x20 + lVar1,puVar2,puStack_70);
  lVar1 = _TtC7Wallper15PlaylistManager::queueSourceChanged;
  this = (PassthroughSubject *)&DAT_10054ac18;
  FUN_100002f94(&DAT_10054ac18,&DAT_10041beb0);
  pPVar9 = this;
  _swift_allocObject();
  Combine::PassthroughSubject::_init(pPVar9);
  *(PassthroughSubject **)(unaff_x20 + lVar1) = pPVar9;
  lVar1 = _TtC7Wallper15PlaylistManager::activationChanged;
  pPVar9 = (PassthroughSubject *)&DAT_1005569e8;
  FUN_100002f94(&DAT_1005569e8,&DAT_10042b870);
  _swift_allocObject();
  Combine::PassthroughSubject::_init(pPVar9);
  *(PassthroughSubject **)(unaff_x20 + lVar1) = pPVar9;
  lVar1 = _TtC7Wallper15PlaylistManager::playingSectionChanged;
  _swift_allocObject(this,*(undefined4 *)(this + 0x30),*(undefined2 *)(this + 0x34));
  Combine::PassthroughSubject::_init(this);
  *(PassthroughSubject **)(unaff_x20 + lVar1) = this;
  *(undefined8 *)(unaff_x20 + _TtC7Wallper15PlaylistManager::transitionTimer) = 0;
  *(undefined8 *)(unaff_x20 + _TtC7Wallper15PlaylistManager::clockTimer) = 0;
  puVar3 = PTR___swiftEmptyArrayStorage_100524190;
  *(undefined **)(unaff_x20 + _TtC7Wallper15PlaylistManager::observers) =
       PTR___swiftEmptyArrayStorage_100524190;
  *(undefined8 *)(unaff_x20 + _TtC7Wallper15PlaylistManager::appearanceObserver) = 0;
  *(undefined8 *)(unaff_x20 + _TtC7Wallper15PlaylistManager::appearanceSettle) = 0;
  *(undefined1 *)(unaff_x20 + _TtC7Wallper15PlaylistManager::isSchedulingActive) = 0;
  lVar1 = _TtC7Wallper15PlaylistManager::lastActiveSections;
  FUN_100006314();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  FUN_1001b8094();
  FUN_1001b8c78();
  return;
}

