// rea decompile_all
// name: FUN_100335a60
// address: 0x100335a60
// body: available
// range: 0x100335a60-0x1003360e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100335a60(long param_1)

{
  ulong uVar1;
  char *pcVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  Animation AVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char *pcVar11;
  long lVar12;
  void *pvVar13;
  String SVar14;
  ulong local_98 [2];
  undefined1 local_88;
  String local_80;
  long local_70;
  undefined8 uStack_68;
  
  lVar12 = *(long *)(param_1 + 0x20);
  if (lVar12 == 0) {
    FUN_10014e37c(0);
    FUN_1000036d0(&DAT_100553148,FUN_10014e37c,&TargetProtocolConformanceDescriptor_100427f04);
    SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1003360e8);
    (*pcVar4)();
  }
  puVar6 = &DAT_100431fe0;
  _swift_getKeyPath(&DAT_100431fe0);
  puVar7 = &DAT_100432008;
  _swift_getKeyPath(&DAT_100432008);
  _swift_retain(lVar12);
  Combine::Published::_get_subscript(&local_80);
  _swift_release(puVar6);
  _swift_release(puVar7);
  _swift_release(lVar12);
  pcVar2 = local_80.str;
  pvVar3 = local_80.bridgeObject;
  if (local_80.bridgeObject < (void *)0x5) {
    if (local_80.bridgeObject != (void *)0x2) {
      FUN_100336d8c();
      local_80 = *(String *)(param_1 + 0x80);
      local_98[0] = local_98[0] & 0xffffffffffffff00;
      puVar6 = &DAT_10054ab50;
      FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
      SwiftUI::State::set_wrappedValue((State *)&local_80,local_98,puVar6);
      FUN_10032da84(2,0xd000000000000024,0x80000001004e6520);
      FUN_100335414();
      return;
    }
    local_80 = *(String *)(param_1 + 0x80);
    local_98[0] = local_98[0] & 0xffffffffffffff00;
    puVar6 = &DAT_10054ab50;
    FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
    SwiftUI::State::set_wrappedValue((State *)&local_80,local_98,puVar6);
    local_80 = *(String *)(param_1 + 0xa0);
    uStack_68 = *(undefined8 *)(param_1 + 0xb8);
    local_70 = *(undefined8 *)(param_1 + 0xb0);
    local_98[0] = 0;
    local_98[1] = 0;
    local_88 = 0;
    puVar6 = &DAT_10055c968;
    FUN_100002f94(&DAT_10055c968,&DAT_100431b18);
    SwiftUI::State::set_wrappedValue((State *)&local_80,local_98,puVar6);
    AVar8.unknown = (undefined *)0x0;
    FUN_10032da84(0,0xd000000000000041,0x80000001004e66d0);
    AVar8 = SwiftUI::Animation::spring(0.6,0.85,0.0,AVar8);
    local_70 = param_1;
    SwiftUI::_withAnimation();
    _swift_release(AVar8.unknown);
    return;
  }
  SVar14 = Swift::String::lowercased(local_80);
  pvVar13 = SVar14.bridgeObject;
  pcVar11 = SVar14.str;
  local_98[0] = 0xd000000000000021;
  local_98[1] = 0x80000001004e6550;
  local_80 = SVar14;
  FUN_100026df4();
  _swift_bridgeObjectRetain(pvVar3);
  bVar5 = (extension_Foundation)::Swift::StringProtocol::_contains
                    (local_98,PTR___type_metadata_for_Swift_String_100523a98,
                     PTR___type_metadata_for_Swift_String_100523a98,pcVar11,pcVar11);
  if (bVar5) {
LAB_100335d3c:
    _swift_bridgeObjectRelease(pvVar13);
    FUN_100336d8c(pcVar2,pvVar3);
    local_80 = *(String *)(param_1 + 0x80);
    local_98[0] = CONCAT71(local_98[0]._1_7_,1);
    puVar6 = &DAT_10054ab50;
    FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
    SwiftUI::State::set_wrappedValue((State *)&local_80,local_98,puVar6);
    pcVar11 = " on this license.";
    uVar10 = 0xd000000000000042;
    uVar9 = 1;
LAB_100335d9c:
    FUN_10032da84(uVar9,uVar10,(ulong)pcVar11 | 0x8000000000000000);
  }
  else {
    local_98[0] = 0x6c20656369766564;
    local_98[1] = 0xec00000074696d69;
    local_80 = SVar14;
    bVar5 = (extension_Foundation)::Swift::StringProtocol::_contains
                      (local_98,PTR___type_metadata_for_Swift_String_100523a98,
                       PTR___type_metadata_for_Swift_String_100523a98,pcVar11,pcVar11);
    if (bVar5) goto LAB_100335d3c;
    local_98[0] = 0x2073656369766564;
    local_98[1] = 0xef64656863616572;
    local_80 = SVar14;
    bVar5 = (extension_Foundation)::Swift::StringProtocol::_contains
                      (local_98,PTR___type_metadata_for_Swift_String_100523a98,
                       PTR___type_metadata_for_Swift_String_100523a98,pcVar11,pcVar11);
    if (bVar5) goto LAB_100335d3c;
    local_98[0] = 0xd000000000000011;
    local_98[1] = 0x80000001004e6580;
    local_80 = SVar14;
    bVar5 = (extension_Foundation)::Swift::StringProtocol::_contains
                      (local_98,PTR___type_metadata_for_Swift_String_100523a98,
                       PTR___type_metadata_for_Swift_String_100523a98,pcVar11,pcVar11);
    if (bVar5) {
      _swift_bridgeObjectRelease(pvVar13);
      FUN_100336d8c(pcVar2,pvVar3);
      local_80 = *(String *)(param_1 + 0x80);
      local_98[0] = local_98[0] & 0xffffffffffffff00;
      puVar6 = &DAT_10054ab50;
      FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
      SwiftUI::State::set_wrappedValue((State *)&local_80,local_98,puVar6);
      FUN_10032da84(3,0xd000000000000031,0x80000001004e6640);
      goto LAB_100335da8;
    }
    local_98[0] = 0xd000000000000013;
    local_98[1] = 0x80000001004e65a0;
    local_80 = SVar14;
    bVar5 = (extension_Foundation)::Swift::StringProtocol::_contains
                      (local_98,PTR___type_metadata_for_Swift_String_100523a98,
                       PTR___type_metadata_for_Swift_String_100523a98,pcVar11,pcVar11);
    if (bVar5) {
      _swift_bridgeObjectRelease(pvVar13);
      FUN_100336d8c(pcVar2,pvVar3);
      local_80 = *(String *)(param_1 + 0x80);
      local_98[0] = local_98[0] & 0xffffffffffffff00;
      puVar6 = &DAT_10054ab50;
      FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
      SwiftUI::State::set_wrappedValue((State *)&local_80,local_98,puVar6);
      pcVar11 = "This license key is disabled.";
      uVar10 = 0xd00000000000001d;
LAB_10033600c:
      pcVar11 = pcVar11 + -0x20;
      uVar9 = 2;
      goto LAB_100335d9c;
    }
    local_98[0] = 0x6e756f6620746f6e;
    local_98[1] = 0xe900000000000064;
    local_80 = SVar14;
    bVar5 = (extension_Foundation)::Swift::StringProtocol::_contains
                      (local_98,PTR___type_metadata_for_Swift_String_100523a98,
                       PTR___type_metadata_for_Swift_String_100523a98,pcVar11,pcVar11);
    if (bVar5) {
      FUN_100336d8c(pcVar2,pvVar3);
      _swift_bridgeObjectRelease(pvVar13);
LAB_100335fcc:
      local_80 = *(String *)(param_1 + 0x80);
      local_98[0] = local_98[0] & 0xffffffffffffff00;
      puVar6 = &DAT_10054ab50;
      FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
      SwiftUI::State::set_wrappedValue((State *)&local_80,local_98,puVar6);
      pcVar11 = "License key not found. Please check and try again.";
      uVar10 = 0xd000000000000032;
      goto LAB_10033600c;
    }
    local_98[0] = 0xd000000000000015;
    local_98[1] = 0x80000001004e65c0;
    local_80 = SVar14;
    bVar5 = (extension_Foundation)::Swift::StringProtocol::_contains
                      (local_98,PTR___type_metadata_for_Swift_String_100523a98,
                       PTR___type_metadata_for_Swift_String_100523a98,pcVar11,pcVar11);
    _swift_bridgeObjectRelease(pvVar13);
    if (bVar5) {
      FUN_100336d8c(pcVar2,pvVar3);
      goto LAB_100335fcc;
    }
    local_80 = *(String *)(param_1 + 0x80);
    local_98[0] = local_98[0] & 0xffffffffffffff00;
    puVar6 = &DAT_10054ab50;
    FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
    SwiftUI::State::set_wrappedValue((State *)&local_80,local_98,puVar6);
    uVar1 = (ulong)pcVar2 & 0xffffffffffff;
    if (((ulong)pvVar3 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)pvVar3 >> 0x38 & 0xf;
    }
    pcVar11 = pcVar2;
    pvVar13 = pvVar3;
    if (uVar1 == 0) {
      FUN_100336d8c(pcVar2,pvVar3);
      pvVar13 = (void *)0x80000001004e6520;
      pcVar11 = (char *)0xd000000000000024;
    }
    FUN_10032da84(2,pcVar11,pvVar13);
    _swift_bridgeObjectRelease(pvVar13);
  }
  FUN_100335414();
LAB_100335da8:
  FUN_100336d8c(pcVar2,pvVar3);
  return;
}

