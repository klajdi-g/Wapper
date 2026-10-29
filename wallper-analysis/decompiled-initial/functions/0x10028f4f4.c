// rea decompile_all
// name: FUN_10028f4f4
// address: 0x10028f4f4
// body: available
// range: 0x10028f4f4-0x10028f9ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010028f950 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10028f4f4(undefined8 param_1,long param_2,ID param_3,ID param_4,undefined *param_5)

{
  _CocoaArrayWrapper _Var1;
  undefined1 *puVar2;
  undefined *puVar3;
  DecodingError DVar4;
  NSString *pNVar5;
  Date DVar6;
  undefined8 uVar7;
  ulong self;
  __int64 _Var8;
  _ArrayBuffer _Var9;
  undefined *puVar10;
  _StringGuts _Var11;
  char *pcVar12;
  void *pvVar13;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  code *pcVar14;
  ulong uVar15;
  long unaff_x21;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  String SVar20;
  String SVar21;
  undefined1 auStack_110 [8];
  long local_108;
  char *local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  undefined1 *local_d8;
  ID local_d0;
  ID local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [24];
  undefined8 local_78;
  
  local_d0 = param_4;
  local_c8 = param_3;
  local_b8 = param_1;
  local_a8 = param_5;
  local_b0 = (undefined *)Foundation::Date::typeMetadataAccessor();
  local_c0 = *(long *)(local_b0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_c0 + 0x40));
  local_d8 = auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar16 = (long)(auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar19 = lVar16 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = lVar19 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = lVar18 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_100521118)();
  FUN_100007bd0(param_2,*(undefined8 *)(param_2 + 0x18));
  Swift::Decoder::_singleValueContainer();
  if (unaff_x21 == 0) {
    local_f8 = lVar16;
    local_f0 = lVar18;
    local_e8 = lVar19;
    local_e0 = lVar17 - extraout_x12_03;
    FUN_100007bd0(auStack_90,local_78);
    SVar20 = Swift::SingleValueDecodingContainer::_decode();
    pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    DVar6.unknown = (undefined *)objc_stub::dateFromString_(local_c8,pNVar5);
    if (DVar6.unknown == (undefined *)0x0) {
      pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      DVar6.unknown = (undefined *)objc_stub::dateFromString_(local_d0,pNVar5);
      puVar3 = local_a8;
      puVar10 = local_b0;
      uVar7 = local_b8;
      lVar17 = local_c0;
      lVar16 = local_e8;
      if (DVar6.unknown == (undefined *)0x0) {
        local_108 = param_2;
        local_100 = SVar20.str;
        if ((ulong)local_a8 >> 0x3e == 0) {
          lVar16 = *(long *)(((ulong)local_a8 & 0xffffffffffffff8) + 0x10);
          _Var8 = 0;
        }
        else {
          _Var1.unknown = (undefined *)((ulong)local_a8 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < local_a8) {
            _Var1.unknown = local_a8;
          }
          lVar16 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
          _Var8 = lVar16;
        }
        if (lVar16 != 0) {
          uVar15 = 0;
          _Var9.unknown = puVar3;
          do {
            if (((ulong)puVar3 & 0xc000000000000001) == 0) {
              if (*(ulong *)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
                pcVar14 = (code *)SoftwareBreakpoint(1,0x10028f884);
                (*pcVar14)();
              }
              self = *(ulong *)(_Var9.unknown + uVar15 * 8 + 0x20);
            }
            else {
              self = uVar15;
              Swift::_ArrayBuffer::__getElementSlowPath(uVar15,_Var9);
            }
            lVar17 = uVar15 + 1;
            if (SCARRY8(uVar15,1)) {
                    /* WARNING: Does not return */
              pcVar14 = (code *)SoftwareBreakpoint(1,0x10028f880);
              (*pcVar14)();
            }
            pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
            DVar6.unknown = (undefined *)objc_stub::dateFromString_(self,pNVar5);
            puVar2 = local_d8;
            if (DVar6.unknown != (undefined *)0x0) {
              Foundation::Date::__unconditionallyBridgeFromObjectiveC(DVar6);
              _swift_bridgeObjectRelease(SVar20.bridgeObject);
              puVar10 = local_b0;
              lVar18 = local_f8;
              pcVar14 = *(code **)(local_c0 + 0x20);
              (*pcVar14)(local_f8,puVar2,local_b0);
              uVar7 = local_b8;
              goto LAB_10028f760;
            }
            uVar15 = uVar15 + 1;
            _Var9.unknown = local_a8;
          } while (lVar17 != lVar16);
          _Var8 = 0;
        }
        DVar4 = Swift::DecodingError::typeMetadataAccessor();
        lVar16 = CONCAT71((int7)((ulong)_Var8 >> 8),DVar4.value);
        pcVar12 = (char *)0x0;
        pvVar13 = (void *)0x0;
        puVar10 = 
        PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100523dd0;
        _swift_allocError(lVar16,
                          PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100523dd0
                         );
        _Var11.unknown = *(undefined **)(local_108 + 0x20);
        FUN_100007bd0(local_108,*(undefined8 *)(local_108 + 0x18));
        Swift::Decoder::_get_codingPath();
        local_a0 = 0;
        local_98 = 0xe000000000000000;
        Swift::_StringGuts::grow(0x16,_Var11);
        _swift_bridgeObjectRelease(local_98);
        local_a0 = 0xd000000000000014;
        local_98 = 0x80000001004e35f0;
        SVar20.str = local_100;
        SVar21.bridgeObject = pvVar13;
        SVar21.str = pcVar12;
        Swift::String::append(SVar20,SVar21);
        _swift_bridgeObjectRelease(SVar20.bridgeObject);
        Swift::DecodingError::Context::_init(puVar10,lVar16,local_a0,local_98,0);
        (**(code **)(*(long *)(lVar16 + -8) + 0x68))
                  (puVar10,*(undefined4 *)
                            PTR___enum_case_for_Swift_DecodingError_dataCorrupted_Swift_DecodingError_Type___>__Swift_DecodingError_Context___>_Swift_DecodingError_100523d88
                   ,lVar16);
        _swift_willThrow();
      }
      else {
        Foundation::Date::__unconditionallyBridgeFromObjectiveC(DVar6);
        _swift_bridgeObjectRelease(SVar20.bridgeObject);
        lVar18 = local_f0;
        pcVar14 = *(code **)(lVar17 + 0x20);
        (*pcVar14)(local_f0,lVar16,puVar10);
LAB_10028f760:
        (*pcVar14)(uVar7,lVar18,puVar10);
      }
    }
    else {
      Foundation::Date::__unconditionallyBridgeFromObjectiveC(DVar6);
      _swift_bridgeObjectRelease(SVar20.bridgeObject);
      puVar10 = local_b0;
      lVar16 = local_e0;
      pcVar14 = *(code **)(local_c0 + 0x20);
      (*pcVar14)(local_e0,lVar17,local_b0);
      (*pcVar14)(local_b8,lVar16,puVar10);
    }
    FUN_100043f24(auStack_90);
  }
  return;
}

