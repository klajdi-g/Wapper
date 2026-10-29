// rea decompile_all
// name: FUN_100366c54
// address: 0x100366c54
// body: available
// range: 0x100366c54-0x100367167 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100366c54(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  void *pvVar4;
  char *pcVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  CharacterSet CVar9;
  CharacterSet CVar10;
  State SVar11;
  undefined *puVar12;
  undefined *puVar13;
  char *pcVar14;
  char **ppcVar15;
  char *pcVar16;
  char *pcVar17;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar18;
  long unaff_x20;
  char *pcVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong auStack_e0 [5];
  undefined *local_b8;
  ulong local_b0;
  String local_a8;
  undefined *local_98;
  undefined8 local_90;
  char *local_88;
  void *pvStack_80;
  char *local_78;
  char *pcStack_70;
  undefined8 local_68;
  
  lVar8 = 0;
  FUN_10040211c();
  uVar20 = *(long *)(lVar8 + -8);
  auStack_e0[1] = lVar8;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(uVar20 + 0x40));
  pcVar19 = (char *)((long)auStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  CVar9 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar21 = *(long *)(CVar9.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar21 + 0x40));
  lVar8 = 0;
  FUN_100386f18();
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(lVar8 + 0x30));
  pcStack_70 = (char *)puVar1[1];
  local_78 = (char *)*puVar1;
  local_68 = puVar1[2];
  CVar10.unknown = &DAT_10054dd08;
  FUN_100002f94(&DAT_10054dd08,&DAT_10041ea50);
  SwiftUI::State::get_wrappedValue((State)CVar10.unknown);
  pvVar4 = pvStack_80;
  local_78 = local_88;
  pcStack_70 = pvStack_80;
  CVar10 = Foundation::CharacterSet::get_whitespacesAndNewlines(CVar10);
  FUN_100026df4();
  local_b8 = CVar10.unknown;
  local_a8 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters
                       ((CharacterSet)(pcVar19 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)));
  (**(code **)(lVar21 + 8))(pcVar19 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0),CVar9.unknown);
  _swift_bridgeObjectRelease(pvVar4);
  puVar2 = (undefined1 *)(unaff_x20 + *(int *)(lVar8 + 0x28));
  pcStack_70 = *(char **)(puVar2 + 8);
  local_78 = (char *)CONCAT71(local_78._1_7_,*puVar2);
  SVar11.unknown = &DAT_10055de38;
  FUN_100002f94(&DAT_10055de38,&DAT_1004336b0);
  SwiftUI::State::get_wrappedValue(SVar11);
  lVar8 = *(long *)(unaff_x20 + *(int *)(lVar8 + 0x18));
  if ((char)local_88 == '\0') {
    if (lVar8 == 0) goto LAB_100367124;
    puVar12 = &DAT_100433668;
    _swift_getKeyPath(&DAT_100433668);
    puVar13 = &DAT_100433690;
  }
  else if ((char)local_88 == '\x01') {
    if (lVar8 == 0) {
LAB_100367124:
      FUN_100279594(0);
      FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
      SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100367168);
      (*pcVar6)();
    }
    puVar12 = &DAT_1004336b8;
    _swift_getKeyPath(&DAT_1004336b8);
    puVar13 = &DAT_1004336e0;
  }
  else {
    if (lVar8 == 0) goto LAB_100367124;
    puVar12 = &DAT_1004339a8;
    _swift_getKeyPath(&DAT_1004339a8);
    puVar13 = &DAT_1004339d0;
  }
  _swift_getKeyPath(puVar13);
  _swift_retain(lVar8);
  Combine::Published::_get_subscript(&local_78);
  _swift_release(puVar12);
  _swift_release(puVar13);
  _swift_release(lVar8);
  pcVar5 = local_78;
  uVar18 = *(ulong *)(local_78 + 0x10);
  local_90 = param_1;
  _swift_bridgeObjectRetain(param_1);
  puVar12 = PTR___swiftEmptyArrayStorage_100524190;
  auStack_e0[3] = uVar18;
  if (uVar18 != 0) {
    uVar22 = 0;
    auStack_e0[2] = lVar8;
    auStack_e0[4] = uVar20;
    local_b0 = (ulong)local_a8.str & 0xffffffffffff;
    if (((ulong)local_a8.bridgeObject & 0x2000000000000000) != 0) {
      local_b0 = (ulong)local_a8.bridgeObject >> 0x38 & 0xf;
    }
    do {
      if (*(ulong *)(pcVar5 + 0x10) <= uVar22) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100367124);
        (*pcVar6)();
      }
      uVar23 = (ulong)*(byte *)(uVar20 + 0x50) + 0x20 &
               ((ulong)*(byte *)(uVar20 + 0x50) ^ 0xffffffffffffffff);
      lVar8 = *(long *)(uVar20 + 0x48);
      pcVar14 = pcVar5 + lVar8 * uVar22 + uVar23;
      pcVar16 = pcVar19;
      FUN_100029504(pcVar14,pcVar19,FUN_10040211c);
      FUN_10026ac6c();
      ppcVar15 = &local_78;
      FUN_1001ca054(ppcVar15,pcVar14,pcVar16);
      _swift_bridgeObjectRelease(pcStack_70);
      uVar3 = auStack_e0[2];
      if (((ulong)ppcVar15 & 1) == 0) goto LAB_100366eb4;
      if (local_b0 == 0) {
LAB_100366fa4:
        puVar13 = puVar12;
        _swift_isUniquelyReferenced_nonNull_native();
        local_98 = puVar12;
        if (((ulong)puVar13 & 1) == 0) {
          FUN_1001c5c4c(0,*(long *)(puVar12 + 0x10) + 1,1);
        }
        uVar20 = *(ulong *)(local_98 + 0x10);
        if (*(ulong *)(local_98 + 0x18) >> 1 <= uVar20) {
          FUN_1001c5c4c(1 < *(ulong *)(local_98 + 0x18),uVar20 + 1,1);
        }
        puVar12 = local_98;
        *(ulong *)(local_98 + 0x10) = uVar20 + 1;
        FUN_100007e64(pcVar19,local_98 + uVar20 * lVar8 + uVar23,FUN_10040211c);
        uVar20 = auStack_e0[4];
      }
      else {
        _swift_retain(auStack_e0[2]);
        pcVar16 = pcVar19;
        FUN_10026a7c8();
        _swift_release(uVar3);
        uVar18 = auStack_e0[3];
        local_88 = local_a8.str;
        pvStack_80 = local_a8.bridgeObject;
        pcVar17 = PTR___type_metadata_for_Swift_String_100523a98;
        local_78 = pcVar16;
        pcStack_70 = pcVar14;
        bVar7 = (extension_Foundation)::Swift::StringProtocol::_localizedCaseInsensitiveContains
                          (&local_88,PTR___type_metadata_for_Swift_String_100523a98,
                           PTR___type_metadata_for_Swift_String_100523a98,local_b8,local_b8);
        _swift_bridgeObjectRelease(pcVar14);
        if (bVar7) goto LAB_100366fa4;
        pcVar16 = (char *)(ulong)(byte)pcVar19[*(int *)(auStack_e0[1] + 0x24)];
        if (pcVar19[*(int *)(auStack_e0[1] + 0x24)] != 0xe) {
          FUN_100402278();
          local_88 = local_a8.str;
          pvStack_80 = local_a8.bridgeObject;
          local_78 = pcVar16;
          pcStack_70 = pcVar17;
          bVar7 = (extension_Foundation)::Swift::StringProtocol::_localizedCaseInsensitiveContains
                            (&local_88,PTR___type_metadata_for_Swift_String_100523a98,
                             PTR___type_metadata_for_Swift_String_100523a98,local_b8,local_b8);
          _swift_bridgeObjectRelease(pcVar17);
          if (bVar7) goto LAB_100366fa4;
        }
        pcVar16 = *(char **)((long)(pcVar19 + *(int *)(auStack_e0[1] + 0x1c)) + 8);
        if (pcVar16 != (char *)0x0) {
          local_78 = *(char **)(pcVar19 + *(int *)(auStack_e0[1] + 0x1c));
          local_88 = local_a8.str;
          pvStack_80 = local_a8.bridgeObject;
          pcStack_70 = pcVar16;
          bVar7 = (extension_Foundation)::Swift::StringProtocol::_localizedCaseInsensitiveContains
                            (&local_88,PTR___type_metadata_for_Swift_String_100523a98,
                             PTR___type_metadata_for_Swift_String_100523a98,local_b8,local_b8);
          if (bVar7) goto LAB_100366fa4;
        }
LAB_100366eb4:
        FUN_100029548(pcVar19,FUN_10040211c);
      }
      uVar22 = uVar22 + 1;
      param_1 = local_90;
    } while (uVar18 != uVar22);
  }
  _swift_bridgeObjectRelease(local_a8.bridgeObject);
  _swift_bridgeObjectRelease(pcVar5);
  _swift_bridgeObjectRelease(param_1);
  return puVar12;
}

