// rea decompile_all
// name: FUN_1001753a0
// address: 0x1001753a0
// body: available
// range: 0x1001753a0-0x100175a1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100175574) */
/* WARNING: Removing unreachable block (ram,0x0001001759ec) */
/* WARNING: Removing unreachable block (ram,0x000100175718) */
/* WARNING: Removing unreachable block (ram,0x000100175a04) */
/* WARNING: Removing unreachable block (ram,0x00010017585c) */
/* WARNING: Removing unreachable block (ram,0x000100175980) */
/* WARNING: Removing unreachable block (ram,0x0001001758b4) */
/* WARNING: Removing unreachable block (ram,0x000100175994) */

undefined8 FUN_1001753a0(char *param_1,void *param_2,char *param_3,void *param_4)

{
  DispatchWorkItemFlags DVar1;
  DispatchQoS DVar2;
  ID self;
  NSString *pNVar3;
  Data DVar4;
  JSONDecoder *pJVar5;
  undefined8 extraout_x1;
  undefined8 uVar6;
  long extraout_x8;
  long lVar7;
  String SVar8;
  String SVar9;
  undefined1 auStack_110 [40];
  long local_e8;
  long local_e0;
  undefined1 *local_d8;
  long local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  
  local_c8 = (undefined *)os::Logger::typeMetadataAccessor();
  local_d0 = *(long *)(local_c8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_d0 + 0x40));
  local_d8 = auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar7 = *(long *)(DVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar7 + 0x40));
  DVar2 = Dispatch::DispatchQoS::typeMetadataAccessor();
  local_e0 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_e0 + 0x40));
  self = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  local_c0 = 0x4379616c70736944;
  local_b8 = 0xee005f6769666e6f;
  SVar8.bridgeObject = param_2;
  SVar8.str = param_1;
  SVar9.bridgeObject = param_4;
  SVar9.str = param_3;
  Swift::String::append(SVar8,SVar9);
  uVar6 = local_b8;
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(uVar6);
  DVar4.unknown = (undefined *)NSUserDefaults::dataForKey_(self,pNVar3);
  if (DVar4.unknown == (undefined *)0x0) {
    local_c0 = 0;
  }
  else {
    uVar6 = extraout_x1;
    local_e8 = lVar7;
    DVar4 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar4);
    pJVar5 = Foundation::JSONDecoder::typeMetadataAccessor();
    _swift_allocObject(pJVar5,*(undefined4 *)(pJVar5 + 0x30),*(undefined2 *)(pJVar5 + 0x34));
    pJVar5 = Foundation::JSONDecoder::init(pJVar5);
    FUN_100175f1c();
    Foundation::JSONDecoder::_decode(pJVar5,(Data)0x10052fd30);
    FUN_100093624(DVar4.unknown,uVar6);
    _swift_release(pJVar5);
  }
  return local_c0;
}

