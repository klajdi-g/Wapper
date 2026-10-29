// rea decompile_all
// name: FUN_1002cab98
// address: 0x1002cab98
// body: available
// range: 0x1002cab98-0x1002cb083 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002caf3c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

String FUN_1002cab98(long param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  String SVar2;
  code *pcVar3;
  Locale LVar4;
  LocalizationValue LVar5;
  long lVar6;
  URL UVar7;
  LocalizationValue LVar8;
  URL UVar9;
  undefined *puVar10;
  undefined *puVar11;
  char *pcVar12;
  NSComparisonResult NVar13;
  char *pcVar15;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  char *pcVar16;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar17;
  undefined *puVar18;
  String *pSVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  undefined *puVar23;
  String stringLiteral;
  String SVar24;
  String SVar25;
  String SVar26;
  String SStack_d0;
  long local_c0;
  void *local_b8;
  long local_b0;
  char *local_a8;
  undefined *local_a0;
  long local_98;
  ulong local_90;
  long local_88;
  String local_80;
  String local_70;
  void *pvVar14;
  
  local_b8 = (void *)param_3;
  local_98 = param_2;
  local_90 = param_1;
  LVar4 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar4.unknown + -8) + 0x40));
  lVar6 = (long)&SStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_a0 = (undefined *)lVar6;
  LVar5 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar5.unknown + -8) + 0x40));
  LVar5.unknown = (undefined *)(lVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  lVar6 = 0;
  FUN_10040211c();
  lVar21 = *(long *)(lVar6 + -8);
  local_88 = lVar6;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar21 + 0x40));
  pSVar19 = (String *)(LVar5.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar23 = (undefined *)((long)pSVar19 - extraout_x12);
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_b0 = (long)puVar23 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100521118)();
  pcVar16 = (char *)(((long)puVar23 - extraout_x12_00) - extraout_x12_01);
  puVar18 = &DAT_100553d90;
  local_a8 = pcVar16;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar18 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = (long)pcVar16 - extraout_x8_02;
  UVar7 = Foundation::URL::typeMetadataAccessor();
  lVar22 = *(long *)(UVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar22 + 0x40));
  puVar18 = (undefined *)(lVar17 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  lVar6 = 0;
  FUN_100170d98();
  FUN_1000087e4(local_90 + (long)*(int *)(lVar6 + 0x24),lVar17,&DAT_100553d90,&DAT_10041bf10);
  lVar6 = lVar17;
  (**(code **)(lVar22 + 0x30))(lVar17,1,UVar7.unknown);
  if ((int)lVar6 == 1) {
    FUN_10002a29c(lVar17,&DAT_100553d90,&DAT_10041bf10);
    stringLiteral.bridgeObject = (void *)0xec00000072657061;
    stringLiteral.str = (char *)0x706c6c6157206f4e;
    LVar8 = LocalizationValue::_init(stringLiteral);
    Foundation::Locale::get_current((Locale)LVar8.unknown);
    SVar24 = (extension_Foundation)::Swift::String::_init(LVar5,(Locale)0x0);
  }
  else {
    UVar9.unknown = puVar18;
    local_c0 = lVar22;
    local_a0 = UVar7.unknown;
    (**(code **)(lVar22 + 0x20))(puVar18,lVar17,UVar7.unknown);
    SVar25 = Foundation::URL::get_lastPathComponent(UVar9);
    lVar6 = local_98;
    if (local_98 == 0) {
      FUN_100279594(0);
      FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
      SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1002cb084);
      (*pcVar3)();
    }
    puVar10 = &DAT_10042e758;
    _swift_getKeyPath(&DAT_10042e758);
    puVar11 = &DAT_10042e780;
    _swift_getKeyPath(&DAT_10042e780);
    _swift_retain(lVar6);
    Combine::Published::_get_subscript(&local_70);
    _swift_release(puVar10);
    _swift_release(puVar11);
    puVar10 = PTR___type_metadata_for_Swift_String_100523a98;
    pcVar16 = local_70.str;
    local_90 = *(ulong *)(local_70.str + 0x10);
    local_70 = SVar25;
    if (local_90 != 0) {
      uVar20 = 0;
      do {
        local_b8 = SVar25.bridgeObject;
        SStack_d0.bridgeObject = SVar25.str;
        if (*(ulong *)(pcVar16 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1002cb044);
          (*pcVar3)();
        }
        FUN_100029504(pcVar16 + *(long *)(lVar21 + 0x48) * uVar20 +
                                ((ulong)*(byte *)(lVar21 + 0x50) + 0x20 &
                                ((ulong)*(byte *)(lVar21 + 0x50) ^ 0xffffffffffffffff)),puVar23,
                      FUN_10040211c);
        UVar7.unknown = puVar23;
        FUN_100007e64(puVar23,pSVar19,FUN_10040211c);
        SVar26 = Foundation::URL::get_lastPathComponent(UVar7);
        pvVar14 = SVar26.bridgeObject;
        uVar1 = (ulong)SVar26.str & 0xffffffffffff;
        if (((ulong)pvVar14 & 0x2000000000000000) != 0) {
          uVar1 = (ulong)pvVar14 >> 0x38 & 0xf;
        }
        SVar25 = SVar26;
        if (uVar1 == 0) {
          _swift_bridgeObjectRelease(pvVar14);
          pcVar12 = pSVar19->bridgeObject;
          SVar25 = *pSVar19;
          _swift_bridgeObjectRetain(pcVar12);
          SVar26.bridgeObject = pvVar14;
          SVar26.str = pcVar12;
        }
        local_80 = SVar25;
        FUN_100026df4();
        pcVar12 = SVar26.str;
        NVar13 = (extension_Foundation)::Swift::StringProtocol::_caseInsensitiveCompare
                           (pcVar12,puVar10,puVar10,pcVar12,pcVar12);
        _swift_bridgeObjectRelease(SVar25.bridgeObject);
        if (NVar13.unknown == (undefined *)0x0) {
          _swift_bridgeObjectRelease(pcVar16);
          _swift_bridgeObjectRelease(local_b8);
          lVar6 = local_b0;
          FUN_100007e64(pSVar19,local_b0,FUN_10040211c);
          pcVar16 = local_a8;
          pcVar15 = local_a8;
          FUN_100007e64(lVar6,local_a8,FUN_10040211c);
          lVar6 = local_98;
          pcVar12 = pcVar16;
          FUN_10026a7c8(pcVar16);
          _swift_release(lVar6);
          FUN_100029548(pcVar16,FUN_10040211c);
          (**(code **)(local_c0 + 8))(puVar18,local_a0);
          SVar2.bridgeObject = pcVar15;
          SVar2.str = pcVar12;
          return SVar2;
        }
        uVar20 = uVar20 + 1;
        FUN_100029548(pSVar19,FUN_10040211c);
        SVar25.bridgeObject = local_b8;
        SVar25.str = SStack_d0.bridgeObject;
      } while (local_90 != uVar20);
    }
    local_b8 = SVar25.bridgeObject;
    SStack_d0.bridgeObject = SVar25.str;
    _swift_release(local_98);
    _swift_bridgeObjectRelease(pcVar16);
    (**(code **)(local_c0 + 8))(puVar18,local_a0);
    SVar24.bridgeObject = local_b8;
    SVar24.str = SStack_d0.bridgeObject;
  }
  return SVar24;
}

