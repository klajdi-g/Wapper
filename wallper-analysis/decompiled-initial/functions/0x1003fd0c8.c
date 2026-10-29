// rea decompile_all
// name: FUN_1003fd0c8
// address: 0x1003fd0c8
// body: available
// range: 0x1003fd0c8-0x1003fd4cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003fd384 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003fd0c8(long param_1)

{
  ulong uVar1;
  bool bVar2;
  URL UVar3;
  _StringGuts _Var4;
  _StringGuts _Var5;
  _StringGuts _Var6;
  undefined *puVar7;
  undefined *puVar8;
  NSDictionary *pNVar9;
  long extraout_x8;
  long extraout_x12;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  char *pcVar13;
  void *pvVar14;
  long lVar15;
  String SVar16;
  undefined8 local_120;
  undefined8 uStack_118;
  long local_108;
  undefined8 local_100;
  ID local_f8;
  code *local_f0;
  long local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar12 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar12 + 0x40));
  puVar10 = (undefined *)((long)&local_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar11 = puVar10 + -extraout_x12;
  lVar15 = *(long *)(param_1 + 0x10);
  if (lVar15 != 0) {
    param_1 = param_1 + ((ulong)*(byte *)(lVar12 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar12 + 0x50) ^ 0xffffffffffffffff));
    local_e8 = *(long *)(lVar12 + 0x48);
    local_f0 = *(code **)(lVar12 + 0x10);
    uStack_118 = 2;
    local_120 = 1;
    local_108 = lVar12;
    do {
      (*local_f0)(puVar11,param_1,UVar3.unknown);
      _Var4.unknown = puVar10;
      _Var5.unknown = puVar11;
      (**(code **)(lVar12 + 0x20))(puVar10,puVar11,UVar3.unknown);
      Foundation::URL::_get_scheme((URL)_Var4.unknown);
      if (_Var5.unknown == (undefined *)0x0) {
LAB_1003fd198:
        (**(code **)(lVar12 + 8))(puVar10,UVar3.unknown);
      }
      else {
        _Var6.unknown = _Var5.unknown;
        if ((_Var4.unknown == (undefined *)0x7265706c6c6177) &&
           (_Var5.unknown == (undefined *)0xe700000000000000)) {
          _swift_bridgeObjectRelease();
        }
        else {
          bVar2 = Swift::_stringCompareWithSmolCheck(_Var4,_Var5,(_StringComparisonResult)0x77);
          _swift_bridgeObjectRelease();
          if (!bVar2) goto LAB_1003fd198;
        }
        Foundation::URL::_get_host((URL)_Var5.unknown);
        if (_Var6.unknown == (undefined *)0x0) goto LAB_1003fd198;
        if ((_Var5.unknown == (undefined *)0x6f65646976) &&
           (_Var6.unknown == (undefined *)0xe500000000000000)) {
          _swift_bridgeObjectRelease();
        }
        else {
          bVar2 = Swift::_stringCompareWithSmolCheck(_Var5,_Var6,(_StringComparisonResult)0x76);
          _swift_bridgeObjectRelease();
          if (!bVar2) goto LAB_1003fd198;
        }
        Foundation::URL::get_pathComponents((URL)_Var6.unknown);
        if (*(ulong *)(_Var6.unknown + 0x10) < 2) {
          pcVar13 = (char *)0x0;
          pvVar14 = (void *)0xe000000000000000;
        }
        else {
          pcVar13 = *(char **)(_Var6.unknown + 0x30);
          pvVar14 = *(void **)(_Var6.unknown + 0x38);
          _swift_bridgeObjectRetain(pvVar14);
        }
        _swift_bridgeObjectRelease();
        uVar1 = (ulong)pcVar13 & 0xffffffffffff;
        if (((ulong)pvVar14 & 0x2000000000000000) != 0) {
          uVar1 = (ulong)pvVar14 >> 0x38 & 0xf;
        }
        if (uVar1 == 0) {
          (**(code **)(lVar12 + 8))(puVar10,UVar3.unknown);
          _swift_bridgeObjectRelease(pvVar14);
        }
        else {
          if (DAT_100557eb0 != -1) {
            _swift_once(&DAT_100557eb0,FUN_10025a3bc);
          }
          FUN_10025b1c4();
          local_f8 = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
          if (DAT_100561108 != -1) {
            _swift_once(&DAT_100561108,FUN_1003fa3ac);
          }
          local_100 = DAT_100577e40;
          puVar7 = &DAT_100561110;
          FUN_100002f94(&DAT_100561110,&DAT_100422d10);
          _swift_initStackObject();
          *(undefined8 *)(puVar7 + 0x18) = uStack_118;
          *(undefined8 *)(puVar7 + 0x10) = local_120;
          puVar8 = PTR___type_metadata_for_Swift_String_100523a98;
          local_e0 = 0x44496f65646976;
          local_d8 = 0xe700000000000000;
          Swift::AnyHashable::_init
                    (puVar7 + 0x20,puVar7,PTR___type_metadata_for_Swift_String_100523a98,
                     PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100523aa8
                    );
          SVar16.bridgeObject = pvVar14;
          SVar16.str = pcVar13;
          SVar16 = Swift::String::lowercased(SVar16);
          _swift_bridgeObjectRelease(pvVar14);
          *(undefined **)(puVar7 + 0x60) = puVar8;
          *(String *)(puVar7 + 0x48) = SVar16;
          puVar8 = puVar7;
          FUN_100006798(puVar7);
          _swift_setDeallocating(puVar7);
          FUN_10002a29c(puVar7 + 0x20,&DAT_10054a120,&DAT_10041a1c8);
          pNVar9 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
          _swift_bridgeObjectRelease(puVar8);
          objc_stub::postNotificationName_object_userInfo_(local_f8,local_100,0,pNVar9);
          lVar12 = local_108;
          (**(code **)(local_108 + 8))(puVar10,UVar3.unknown);
        }
      }
      param_1 = param_1 + local_e8;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  return;
}

