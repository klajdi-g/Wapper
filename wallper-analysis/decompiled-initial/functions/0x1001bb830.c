// rea decompile_all
// name: FUN_1001bb830
// address: 0x1001bb830
// body: available
// range: 0x1001bb830-0x1001bbeef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001001bb9d8) */
/* WARNING: Removing unreachable block (ram,0x0001001bbec0) */
/* WARNING: Removing unreachable block (ram,0x0001001bbb84) */
/* WARNING: Removing unreachable block (ram,0x0001001bbed8) */
/* WARNING: Removing unreachable block (ram,0x0001001bbcf0) */
/* WARNING: Removing unreachable block (ram,0x0001001bbe60) */
/* WARNING: Removing unreachable block (ram,0x0001001bbd44) */
/* WARNING: Removing unreachable block (ram,0x0001001bbe74) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001001bb9b8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1001bb830(void)

{
  DispatchWorkItemFlags DVar1;
  JSONEncoder *pJVar2;
  undefined *puVar3;
  undefined *puVar4;
  Data DVar5;
  ID self;
  NSData *pNVar6;
  NSString *pNVar7;
  long extraout_x8;
  undefined1 auStack_130 [40];
  long local_108;
  undefined *puStack_100;
  undefined1 *local_f8;
  long local_f0;
  undefined *local_e8;
  undefined8 local_e0 [16];
  
  local_e8 = (undefined *)os::Logger::typeMetadataAccessor();
  local_f0 = *(long *)(local_e8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_f0 + 0x40));
  local_f8 = auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(DVar1.unknown + -8) + 0x40));
  puStack_100 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_108 = *(long *)(puStack_100 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_108 + 0x40));
  pJVar2 = Foundation::JSONEncoder::typeMetadataAccessor();
  _swift_allocObject(pJVar2,*(undefined4 *)(pJVar2 + 0x30),*(undefined2 *)(pJVar2 + 0x34));
  pJVar2 = Foundation::JSONEncoder::init(pJVar2);
  puVar3 = &DAT_10042a610;
  _swift_getKeyPath(&DAT_10042a610);
  puVar4 = &DAT_10042a638;
  _swift_getKeyPath(&DAT_10042a638);
  Combine::Published::_get_subscript(local_e0);
  _swift_release(puVar3);
  _swift_release(puVar4);
  puVar3 = &DAT_10054a968;
  FUN_100002f94(&DAT_10054a968,&DAT_10041f070);
  FUN_1001d4f30(&DAT_1005568a0,&DAT_1005568a8,&DAT_10042c460);
  DVar5 = Foundation::JSONEncoder::_encode(pJVar2,puVar3,puVar3);
  _swift_release(pJVar2);
  _swift_bridgeObjectRelease(local_e0[0]);
  self = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  pNVar6 = Foundation::Data::_bridgeToObjectiveC(DVar5);
  pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  NSUserDefaults::setObject_forKey_(self,pNVar6,pNVar7);
  FUN_100093624(DVar5.unknown,puVar3);
  return;
}

