// rea decompile_all
// name: FUN_10025d8e0
// address: 0x10025d8e0
// body: available
// range: 0x10025d8e0-0x10025dd43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010025dc6c) */
/* WARNING: Removing unreachable block (ram,0x00010025dbe0) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010025dbd8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined8
FUN_10025d8e0(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  Published PVar2;
  URL UVar3;
  CharacterSet CVar4;
  CharacterSet CVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  Published *pPVar9;
  JSONEncoder *pJVar10;
  URL UVar11;
  Data DVar12;
  ID self;
  NSString *pNVar13;
  void *pvVar14;
  undefined8 *puVar15;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined8 *unaff_x20;
  code *pcVar16;
  long lVar17;
  URL to;
  String SVar18;
  Published *local_b0;
  long local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_88;
  Published local_80;
  undefined8 uStack_78;
  
  local_98 = param_3;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  local_a0 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_a0 + 0x40));
  lVar17 = (long)&local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_a8 = lVar17;
  (*(code *)PTR____chkstk_darwin_100521118)();
  to.unknown = (undefined *)(lVar17 - extraout_x12);
  CVar4 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar17 = *(long *)(CVar4.unknown + -8);
  CVar5 = CVar4;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar17 + 0x40));
  local_80.unknown = param_1;
  uStack_78 = param_2;
  Foundation::CharacterSet::get_whitespacesAndNewlines(CVar5);
  FUN_100026df4();
  SVar18 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters
                     ((CharacterSet)(to.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)));
  pvVar14 = SVar18.bridgeObject;
  (**(code **)(lVar17 + 8))
            (to.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0),CVar4.unknown);
  uVar1 = (ulong)SVar18.str & 0xffffffffffff;
  if (((ulong)pvVar14 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)pvVar14 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    _swift_bridgeObjectRelease(pvVar14);
    puVar7 = &DAT_10042c238;
    _swift_getKeyPath(&DAT_10042c238);
    puVar8 = &DAT_10042c260;
    _swift_getKeyPath(&DAT_10042c260);
    pPVar9 = &local_80;
    Combine::Published::_modify_subscript(&local_80);
    FUN_10027ed4c(local_98,param_4);
    (*(code *)pPVar9)(&local_80,0);
    _swift_release(puVar7);
    _swift_release(puVar8);
    _swift_bridgeObjectRelease(param_4);
  }
  else {
    puVar7 = &DAT_10042c238;
    _swift_getKeyPath(&DAT_10042c238);
    puVar8 = &DAT_10042c260;
    _swift_getKeyPath(&DAT_10042c260);
    _swift_bridgeObjectRetain(param_4);
    pPVar9 = &local_80;
    puVar15 = unaff_x20;
    Combine::Published::_modify_subscript(&local_80);
    uVar6 = *puVar15;
    local_b0 = pPVar9;
    _swift_isUniquelyReferenced_nonNull_native(uVar6);
    local_88 = *puVar15;
    *puVar15 = 0x8000000000000000;
    FUN_10034091c(SVar18.str,pvVar14,local_98,param_4,uVar6);
    _swift_bridgeObjectRelease(param_4);
    *puVar15 = local_88;
    (*(code *)local_b0)(&local_80,0);
    _swift_release(puVar7);
    _swift_release(puVar8);
  }
  pJVar10 = Foundation::JSONEncoder::typeMetadataAccessor();
  _swift_allocObject(pJVar10,*(undefined4 *)(pJVar10 + 0x30),*(undefined2 *)(pJVar10 + 0x34));
  pJVar10 = Foundation::JSONEncoder::init(pJVar10);
  puVar7 = &DAT_10042c238;
  _swift_getKeyPath(&DAT_10042c238);
  puVar8 = &DAT_10042c260;
  _swift_getKeyPath(&DAT_10042c260);
  Combine::Published::_get_subscript(&local_80,unaff_x20,puVar7,puVar8);
  _swift_release(puVar7);
  _swift_release(puVar8);
  PVar2.unknown = local_80.unknown;
  puVar7 = &DAT_100555b40;
  FUN_100002f94(&DAT_100555b40,&DAT_100429998);
  UVar11.unknown = &DAT_100558010;
  FUN_10025e6d4(&DAT_100558010,
                PTR___protocol_witness_table_for_Swift_String___Swift_Encodable_in_Swift_100523aa0,
                PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Encodable_100523988);
  DVar12 = Foundation::JSONEncoder::_encode(pJVar10,UVar11.unknown,puVar7);
  _swift_release(pJVar10);
  _swift_bridgeObjectRelease(PVar2.unknown);
  lVar17 = local_a8;
  FUN_10025d120(local_a8);
  Foundation::URL::appendingPathComponent
            (*(String *)((long)unaff_x20 + _TtC7Wallper15LocalMediaStore::fileName),UVar11);
  pcVar16 = *(code **)(local_a0 + 8);
  (*pcVar16)(lVar17,UVar3.unknown);
  Foundation::Data::_write(to,(NSDataWritingOptions)0x0,DVar12);
  (*pcVar16)(to.unknown,UVar3.unknown);
  FUN_100093624(DVar12.unknown,puVar7);
  self = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  if (DAT_100558018 != -1) {
    _swift_once(&DAT_100558018,FUN_10025e31c);
  }
  uVar6 = DAT_100577d78;
  pNVar13 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  NSNotificationCenter::postNotificationName_object_(self,uVar6,pNVar13);
  return 0;
}

