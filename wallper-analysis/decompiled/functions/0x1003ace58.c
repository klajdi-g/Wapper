// rea decompile_all
// name: FUN_1003ace58
// address: 0x1003ace58
// body: available
// range: 0x1003ace58-0x1003ad267 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003ace58(undefined8 param_1,char *param_2,long *param_3)

{
  State *pSVar1;
  int iVar2;
  void *pvVar3;
  long *plVar4;
  code *pcVar5;
  bool bVar6;
  NavigationPath NVar7;
  long lVar8;
  long lVar9;
  State SVar10;
  undefined *puVar11;
  undefined *puVar12;
  URL UVar13;
  char *pcVar14;
  _StringGuts _Var15;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar17;
  long lVar18;
  String *pSVar19;
  ulong uVar20;
  String SVar21;
  String SVar22;
  String SStack_d0;
  long local_c0;
  long *local_b8;
  long local_b0;
  undefined *local_a8;
  long local_a0;
  ulong local_98;
  char *local_90;
  char *local_88;
  String local_80;
  undefined *local_70;
  void *pvVar16;
  
  NVar7 = SwiftUI::NavigationPath::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(NVar7.unknown + -8) + 0x40));
  lVar17 = (long)&SStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0;
  FUN_10040211c();
  lVar18 = *(long *)(lVar8 + -8);
  local_a0 = lVar8;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar18 + 0x40));
  pSVar19 = (String *)(lVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar8 = (long)pSVar19 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_a8 = (undefined *)(lVar8 - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_100521118)();
  if (*param_2 == '\x01') {
    lVar9 = 0;
    FUN_1003afcec();
    pSVar1 = (State *)((long)param_3 + (long)*(int *)(lVar9 + 0x38));
    local_70 = pSVar1[2].unknown;
    local_80.bridgeObject = pSVar1[1].unknown;
    local_80.str = pSVar1->unknown;
    SVar10.unknown = &DAT_10054ab90;
    local_b0 = lVar9;
    FUN_100002f94(&DAT_10054ab90,&DAT_10041bdb0);
    SwiftUI::State::get_wrappedValue(SVar10);
    SVar22.bridgeObject = local_88;
    SVar22.str = local_90;
    if (local_88 != (char *)0x0) {
      local_80 = (String)ZEXT816(0);
      local_c0 = lVar17;
      SwiftUI::State::set_wrappedValue(pSVar1,&local_80,SVar10.unknown);
      lVar17 = *param_3;
      local_b8 = param_3;
      if (lVar17 == 0) {
        FUN_100279594(0);
        FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
        SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1003ad268);
        (*pcVar5)();
      }
      puVar11 = &DAT_100435098;
      SStack_d0.bridgeObject = (String *)((undefined *)(lVar8 - extraout_x12_00) + -extraout_x12_01)
      ;
      _swift_getKeyPath(&DAT_100435098);
      puVar12 = &DAT_1004350c0;
      _swift_getKeyPath(&DAT_1004350c0);
      _swift_retain(lVar17);
      Combine::Published::_get_subscript(&local_80);
      _swift_release(puVar11);
      _swift_release(puVar12);
      _swift_release(lVar17);
      pcVar14 = local_80.str;
      local_98 = *(ulong *)(local_80.str + 0x10);
      if (local_98 != 0) {
        uVar20 = 0;
        do {
          if (*(ulong *)(pcVar14 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1003ad220);
            (*pcVar5)();
          }
          FUN_100029504(pcVar14 + *(long *)(lVar18 + 0x48) * uVar20 +
                                  ((ulong)*(byte *)(lVar18 + 0x50) + 0x20 &
                                  ((ulong)*(byte *)(lVar18 + 0x50) ^ 0xffffffffffffffff)),lVar8,
                        FUN_10040211c);
          FUN_100007e64(lVar8,pSVar19,FUN_10040211c);
          SVar21 = Swift::String::lowercased(*pSVar19);
          _Var15.unknown = SVar21.bridgeObject;
          if (SVar21 == SVar22) {
            _swift_bridgeObjectRelease(local_88);
            local_88 = pcVar14;
LAB_1003ad0f4:
            _swift_bridgeObjectRelease(local_88);
            _swift_bridgeObjectRelease(_Var15.unknown);
            UVar13.unknown = local_a8;
            FUN_100007e64(pSVar19,local_a8,FUN_10040211c);
            pvVar3 = SStack_d0.bridgeObject;
            FUN_100007e64(UVar13.unknown,SStack_d0.bridgeObject,FUN_10040211c);
            SVar22 = Foundation::URL::get_lastPathComponent(UVar13);
            plVar4 = local_b8;
            lVar8 = local_c0;
            pvVar16 = SVar22.bridgeObject;
            uVar20 = (ulong)SVar22.str & 0xffffffffffff;
            if (((ulong)pvVar16 & 0x2000000000000000) != 0) {
              uVar20 = (ulong)pvVar16 >> 0x38 & 0xf;
            }
            if (uVar20 == 0) {
              _swift_bridgeObjectRelease(pvVar16);
              SVar22 = *(String *)pvVar3;
              _swift_bridgeObjectRetain(*(void **)((long)pvVar3 + 8));
            }
            pcVar14 = SVar22.bridgeObject;
            iVar2 = *(int *)(local_b0 + 0x34);
            SVar10.unknown = &DAT_10055f708;
            local_80 = SVar22;
            FUN_100002f94(&DAT_10055f708,&DAT_100434ee0);
            SwiftUI::State::get_wrappedValue(SVar10);
            SwiftUI::NavigationPath::_append
                      (&local_80,PTR___type_metadata_for_Swift_String_100523a98,
                       PTR___protocol_witness_table_for_Swift_String___Swift_Decodable_in_Swift_100523ac0
                       ,
                       PTR___protocol_witness_table_for_Swift_String___Swift_Encodable_in_Swift_100523aa0
                       ,
                       PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100523aa8
                      );
            SwiftUI::State::set_wrappedValue
                      ((State *)((long)plVar4 + (long)iVar2),lVar8,SVar10.unknown);
            FUN_100029548(pvVar3,FUN_10040211c);
            goto LAB_1003ad1f8;
          }
          bVar6 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)SVar21.str,_Var15,
                             (_StringComparisonResult)(__int8)local_90);
          _swift_bridgeObjectRelease(_Var15.unknown);
          _Var15.unknown = pcVar14;
          if (bVar6) goto LAB_1003ad0f4;
          uVar20 = uVar20 + 1;
          FUN_100029548(pSVar19,FUN_10040211c);
        } while (local_98 != uVar20);
      }
      _swift_bridgeObjectRelease(local_88);
LAB_1003ad1f8:
      _swift_bridgeObjectRelease(pcVar14);
    }
  }
  return;
}

