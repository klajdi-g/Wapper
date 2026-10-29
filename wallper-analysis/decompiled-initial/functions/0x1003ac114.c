// rea decompile_all
// name: FUN_1003ac114
// address: 0x1003ac114
// body: available
// range: 0x1003ac114-0x1003ac5db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003ac238 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003ac114(undefined8 param_1,long *param_2)

{
  char *pcVar1;
  int iVar2;
  String SVar3;
  undefined8 *puVar4;
  long *plVar5;
  code *pcVar6;
  bool bVar7;
  NavigationPath NVar8;
  undefined *puVar9;
  Notification NVar10;
  char **ppcVar11;
  URL UVar12;
  State SVar13;
  undefined *puVar14;
  void *pvVar16;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar17;
  long lVar18;
  void *pvVar19;
  String *pSVar20;
  ulong uVar21;
  long lVar22;
  undefined *puVar23;
  String SVar24;
  String SStack_f0;
  undefined *local_e0;
  undefined *local_d8;
  undefined8 *local_d0;
  long *local_c8;
  ulong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  char *local_a8;
  char *pcStack_a0;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long local_68;
  _StringGuts _Var15;
  
  NVar8 = SwiftUI::NavigationPath::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(NVar8.unknown + -8) + 0x40));
  pvVar16 = (void *)((long)&SStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar9 = (undefined *)0x0;
  FUN_10040211c();
  lVar18 = *(long *)(puVar9 + -8);
  NVar10.unknown = puVar9;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar18 + 0x40));
  pSVar20 = (String *)((long)pvVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar22 = (long)pSVar20 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar23 = (undefined *)(lVar22 - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_100521118)();
  Foundation::Notification::_get_userInfo(NVar10);
  if (NVar10.unknown == (undefined *)0x0) {
    uStack_78 = 0;
    local_80 = 0;
    local_68 = 0;
    uStack_70 = 0;
    goto LAB_1003ac430;
  }
  local_b8 = 0x44496f65646976;
  uStack_b0 = 0xe700000000000000;
  puVar14 = PTR___type_metadata_for_Swift_String_100523a98;
  Swift::AnyHashable::_init
            (&local_a8,NVar10.unknown,PTR___type_metadata_for_Swift_String_100523a98,
             PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100523aa8);
  if (*(long *)(NVar10.unknown + 0x10) == 0) {
LAB_1003ac288:
    uStack_78 = 0;
    local_80 = 0;
    local_68 = 0;
    uStack_70 = 0;
  }
  else {
    _swift_bridgeObjectRetain(NVar10.unknown);
    ppcVar11 = &local_a8;
    FUN_10000488c(ppcVar11);
    if (((ulong)puVar14 & 1) == 0) {
      _swift_bridgeObjectRelease(NVar10.unknown);
      goto LAB_1003ac288;
    }
    FUN_1000280d4(*(long *)(NVar10.unknown + 0x38) + (long)ppcVar11 * 0x20,&local_80);
    _swift_bridgeObjectRelease(NVar10.unknown);
  }
  _swift_bridgeObjectRelease(NVar10.unknown);
  FUN_100007dd4(&local_a8);
  if (local_68 != 0) {
    ppcVar11 = &local_a8;
    _swift_dynamicCast(ppcVar11,&local_80,PTR___type_metadata_for_Any_100524178 + 8,
                       PTR___type_metadata_for_Swift_String_100523a98,6);
    pcVar1 = local_a8;
    SVar3.bridgeObject = pcStack_a0;
    SVar3.str = local_a8;
    if (((ulong)ppcVar11 & 1) == 0) {
      return;
    }
    lVar17 = *param_2;
    SStack_f0.bridgeObject = pvVar16;
    local_e0 = puVar23;
    local_d8 = puVar9;
    local_d0 = (undefined8 *)(puVar23 + -extraout_x12_01);
    local_c8 = param_2;
    if (lVar17 == 0) {
      FUN_100279594(0);
      FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
      SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1003ac5dc);
      (*pcVar6)();
    }
    puVar9 = &DAT_100435098;
    _swift_getKeyPath(&DAT_100435098);
    puVar23 = &DAT_1004350c0;
    _swift_getKeyPath(&DAT_1004350c0);
    _swift_retain(lVar17);
    Combine::Published::_get_subscript(&local_a8);
    _swift_release(puVar9);
    _swift_release(puVar23);
    _swift_release(lVar17);
    local_c0 = *(ulong *)(local_a8 + 0x10);
    if (local_c0 != 0) {
      uVar21 = 0;
      do {
        if (*(ulong *)(local_a8 + 0x10) <= uVar21) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1003ac594);
          (*pcVar6)();
        }
        FUN_100029504(local_a8 +
                      *(long *)(lVar18 + 0x48) * uVar21 +
                      ((ulong)*(byte *)(lVar18 + 0x50) + 0x20 &
                      ((ulong)*(byte *)(lVar18 + 0x50) ^ 0xffffffffffffffff)),lVar22,FUN_10040211c);
        FUN_100007e64(lVar22,pSVar20,FUN_10040211c);
        SVar24 = Swift::String::lowercased(*pSVar20);
        _Var15.unknown = SVar24.bridgeObject;
        if (SVar24 == SVar3) {
          _swift_bridgeObjectRelease(local_a8);
          local_a8 = pcStack_a0;
LAB_1003ac47c:
          _swift_bridgeObjectRelease(local_a8);
          _swift_bridgeObjectRelease(_Var15.unknown);
          UVar12.unknown = local_e0;
          FUN_100007e64(pSVar20,local_e0,FUN_10040211c);
          puVar4 = local_d0;
          FUN_100007e64(UVar12.unknown,local_d0,FUN_10040211c);
          SVar24 = Foundation::URL::get_lastPathComponent(UVar12);
          pvVar16 = SVar24.bridgeObject;
          uVar21 = (ulong)SVar24.str & 0xffffffffffff;
          if (((ulong)pvVar16 & 0x2000000000000000) != 0) {
            uVar21 = (ulong)pvVar16 >> 0x38 & 0xf;
          }
          pvVar19 = pvVar16;
          if (uVar21 == 0) {
            _swift_bridgeObjectRelease(pvVar16);
            pcVar1 = (char *)*puVar4;
            pvVar19 = (void *)puVar4[1];
            _swift_bridgeObjectRetain(pvVar19);
            SVar24.bridgeObject = pvVar16;
            SVar24.str = pcVar1;
          }
          plVar5 = local_c8;
          pvVar16 = SStack_f0.bridgeObject;
          local_a8 = SVar24.str;
          lVar18 = 0;
          pcStack_a0 = pvVar19;
          FUN_1003afcec();
          iVar2 = *(int *)(lVar18 + 0x34);
          SVar13.unknown = &DAT_10055f708;
          FUN_100002f94(&DAT_10055f708,&DAT_100434ee0);
          SwiftUI::State::get_wrappedValue(SVar13);
          SwiftUI::NavigationPath::_append
                    (&local_a8,PTR___type_metadata_for_Swift_String_100523a98,
                     PTR___protocol_witness_table_for_Swift_String___Swift_Decodable_in_Swift_100523ac0
                     ,
                     PTR___protocol_witness_table_for_Swift_String___Swift_Encodable_in_Swift_100523aa0
                     ,
                     PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100523aa8
                    );
          SwiftUI::State::set_wrappedValue
                    ((State *)((long)plVar5 + (long)iVar2),pvVar16,SVar13.unknown);
          FUN_100029548(puVar4,FUN_10040211c);
          _swift_bridgeObjectRelease(pvVar19);
          return;
        }
        bVar7 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)SVar24.str,_Var15,(_StringComparisonResult)(__int8)pcVar1);
        _swift_bridgeObjectRelease(_Var15.unknown);
        _Var15.unknown = pcStack_a0;
        if (bVar7) goto LAB_1003ac47c;
        uVar21 = uVar21 + 1;
        FUN_100029548(pSVar20,FUN_10040211c);
      } while (local_c0 != uVar21);
    }
    _swift_bridgeObjectRelease(local_a8);
    lVar18 = 0;
    FUN_1003afcec();
    iVar2 = *(int *)(lVar18 + 0x38);
    puVar9 = &DAT_10054ab90;
    FUN_100002f94(&DAT_10054ab90,&DAT_10041bdb0);
    SwiftUI::State::set_wrappedValue((State *)((long)local_c8 + (long)iVar2),&local_a8,puVar9);
    return;
  }
LAB_1003ac430:
  FUN_10002a29c(&local_80,&DAT_10054d428,&DAT_100420300);
  return;
}

