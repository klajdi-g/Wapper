// rea decompile_all
// name: FUN_10025d344
// address: 0x10025d344
// body: available
// range: 0x10025d344-0x10025d8df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010025d7fc) */
/* WARNING: Removing unreachable block (ram,0x00010025d664) */
/* WARNING: Removing unreachable block (ram,0x00010025d5d8) */
/* WARNING: Removing unreachable block (ram,0x00010025d680) */
/* WARNING: Removing unreachable block (ram,0x00010025d754) */

void FUN_10025d344(void)

{
  undefined8 *puVar1;
  String *pSVar2;
  long lVar3;
  NSDataReadingOptions NVar4;
  URL UVar5;
  undefined *puVar6;
  ID IVar7;
  URL UVar8;
  Data DVar9;
  Data DVar10;
  JSONDecoder *pJVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar14;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long unaff_x20;
  long lVar15;
  long lVar16;
  URL UVar17;
  long lVar18;
  code *pcVar19;
  String SVar20;
  Data local_a0;
  NSDataReadingOptions local_98;
  NSDataReadingOptions local_90;
  undefined *local_88;
  undefined *local_80 [4];
  
  UVar5 = Foundation::URL::typeMetadataAccessor();
  lVar15 = *(long *)(UVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar15 + 0x40));
  puVar14 = (undefined *)((long)&local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_90.unknown = puVar14;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar14 = puVar14 + -extraout_x12;
  local_98.unknown = puVar14;
  (*(code *)PTR____chkstk_darwin_100521118)();
  UVar17.unknown = puVar14 + -extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar16 = (long)UVar17.unknown - extraout_x12_01;
  UVar8.unknown = &DAT_100555e80;
  FUN_100002f94(&DAT_100555e80,&DAT_100429c78);
  lVar18 = *(long *)(UVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = _TtC7Wallper15LocalMediaStore::_customTitles;
  puVar12 = PTR___swiftEmptyArrayStorage_100524190;
  puVar6 = PTR___swiftEmptyArrayStorage_100524190;
  FUN_100005574();
  puVar14 = &DAT_100555b40;
  local_80[0] = puVar6;
  FUN_100002f94(&DAT_100555b40,&DAT_100429998);
  local_a0.unknown = puVar14;
  Combine::Published::init(lVar16 - extraout_x8_00);
  (**(code **)(lVar18 + 0x20))(unaff_x20 + lVar3,lVar16 - extraout_x8_00);
  lVar3 = _TtC7Wallper15LocalMediaStore::metadata;
  FUN_100005ee8();
  *(undefined **)(unaff_x20 + lVar3) = puVar12;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7Wallper15LocalMediaStore::fileName);
  *puVar1 = 0xd000000000000017;
  puVar1[1] = 0x80000001004e2d60;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7Wallper15LocalMediaStore::metadataFileName);
  *puVar1 = 0xd000000000000019;
  puVar1[1] = 0x80000001004e2d80;
  local_88 = &_OBJC_CLASS___NSFileManager;
  IVar7 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  FUN_10025d120(UVar17.unknown);
  pSVar2 = (String *)(unaff_x20 + _TtC7Wallper15LocalMediaStore::fileName);
  Foundation::URL::appendingPathComponent(*pSVar2,UVar8);
  pcVar19 = *(code **)(lVar15 + 8);
  UVar8.unknown = UVar17.unknown;
  (*pcVar19)(UVar17.unknown,UVar5.unknown);
  SVar20 = Foundation::URL::get_path(UVar8);
  UVar8.unknown = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar20.bridgeObject);
  (*pcVar19)(lVar16,UVar5.unknown);
  IVar7 = NSFileManager::fileExistsAtPath_(IVar7);
  if ((int)IVar7 != 0) {
    FUN_10025d120(lVar16,0);
    NVar4.unknown = local_98.unknown;
    Foundation::URL::appendingPathComponent(*pSVar2,UVar8);
    (*pcVar19)(lVar16,UVar5.unknown);
    puVar12 = (undefined *)0x0;
    DVar9 = Foundation::Data::_init(NVar4);
    (*pcVar19)(NVar4.unknown,UVar5.unknown);
    pJVar11 = Foundation::JSONDecoder::typeMetadataAccessor();
    _swift_allocObject(pJVar11,*(undefined4 *)(pJVar11 + 0x30),*(undefined2 *)(pJVar11 + 0x34));
    pJVar11 = Foundation::JSONDecoder::init(pJVar11);
    FUN_10025e6d4(&DAT_100557fd8,
                  PTR___protocol_witness_table_for_Swift_String___Swift_Decodable_in_Swift_100523ac0
                  ,PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Decodable_100523990);
    Foundation::JSONDecoder::_decode(pJVar11,local_a0);
    _swift_release(pJVar11);
    puVar14 = local_80[0];
    UVar8.unknown = &DAT_10042c238;
    local_98.unknown = puVar12;
    _swift_getKeyPath();
    _swift_getKeyPath(&DAT_10042c260);
    local_80[0] = puVar14;
    _swift_retain();
    Combine::Published::_set_subscript((Published *)UVar8.unknown,local_80);
    FUN_100093624(DVar9.unknown,local_98.unknown);
  }
  IVar7 = objc_stub::defaultManager((ID)local_88);
  FUN_10025d120(UVar17.unknown);
  pSVar2 = (String *)(unaff_x20 + _TtC7Wallper15LocalMediaStore::metadataFileName);
  Foundation::URL::appendingPathComponent(*pSVar2,UVar8);
  (*pcVar19)(UVar17.unknown,UVar5.unknown);
  SVar20 = Foundation::URL::get_path(UVar17);
  UVar8.unknown = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar20.bridgeObject);
  (*pcVar19)(lVar16,UVar5.unknown);
  IVar7 = objc_stub::fileExistsAtPath_(IVar7);
  if ((int)IVar7 != 0) {
    FUN_10025d120(lVar16,0);
    NVar4.unknown = local_90.unknown;
    Foundation::URL::appendingPathComponent(*pSVar2,UVar8);
    (*pcVar19)(lVar16,UVar5.unknown);
    uVar13 = 0;
    DVar10 = Foundation::Data::_init(NVar4);
    (*pcVar19)(NVar4.unknown,UVar5.unknown);
    pJVar11 = Foundation::JSONDecoder::typeMetadataAccessor();
    _swift_allocObject(pJVar11,*(undefined4 *)(pJVar11 + 0x30),*(undefined2 *)(pJVar11 + 0x34));
    pJVar11 = Foundation::JSONDecoder::init(pJVar11);
    DVar9.unknown = &DAT_100557fc0;
    FUN_100002f94(&DAT_100557fc0,&DAT_10042c280);
    FUN_10025e618(&DAT_100557fc8,FUN_10025e4fc,
                  PTR___protocol_witness_table_for_Swift_String___Swift_Decodable_in_Swift_100523ac0
                  ,PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Decodable_100523990);
    Foundation::JSONDecoder::_decode(pJVar11,DVar9);
    FUN_100093624(DVar10.unknown,uVar13);
    _swift_release(pJVar11);
    puVar14 = local_80[0];
    lVar3 = _TtC7Wallper15LocalMediaStore::metadata;
    _swift_beginAccess(unaff_x20 + _TtC7Wallper15LocalMediaStore::metadata,local_80,1,0);
    uVar13 = *(undefined8 *)(unaff_x20 + lVar3);
    *(undefined **)(unaff_x20 + lVar3) = puVar14;
    _swift_bridgeObjectRelease(uVar13);
  }
  return;
}

