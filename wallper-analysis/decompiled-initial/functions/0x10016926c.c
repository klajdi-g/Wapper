// rea decompile_all
// name: FUN_10016926c
// address: 0x10016926c
// body: available
// range: 0x10016926c-0x10016943b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010016951c) */
/* WARNING: Removing unreachable block (ram,0x0001001694cc) */
/* WARNING: Removing unreachable block (ram,0x000100169528) */

String FUN_10016926c(ulong param_1)

{
  undefined1 in_ZR;
  bool bVar1;
  char *pcVar2;
  void *pvVar3;
  void *extraout_x1;
  undefined1 uVar4;
  char *pcVar5;
  byte *unaff_x20;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  
  pvVar3 = (void *)0xe500000000000000;
  pcVar2 = (char *)0x656c746974;
  pcVar5 = (char *)(param_1 & 0xff);
  switch(pcVar5) {
  default:
    pvVar3 = (void *)0xe600000000000000;
  case (char *)0x60:
  case (char *)0x68:
  case (char *)0xf0:
  case (char *)0xf8:
    SVar6.bridgeObject = pvVar3;
    SVar6.str = (char *)0x747369747261;
    return SVar6;
  case (char *)0x2:
    SVar11.bridgeObject = (void *)0xe500000000000000;
    SVar11.str = (char *)0x6d75626c61;
    return SVar11;
  case (char *)0x3:
    pvVar3 = (void *)0xe800000000000000;
    break;
  case (char *)0x4:
    pvVar3 = (void *)0xee00736f7263694d;
    break;
  case (char *)0x5:
    pcVar5 = (char *)0x65646f;
  case (char *)0x3b:
    SVar15.bridgeObject = (void *)(((ulong)pcVar5 | 0xeb00000000000000) + 0x8fa);
    SVar15.str = (char *)0x5464657370616c65;
    return SVar15;
  case (char *)0x6:
  case (char *)0x35:
  case (char *)0xc5:
    pcVar5 = "MRMediaRemoteSendCommand";
  case (char *)0xcb:
    SVar17.bridgeObject = (void *)((long)pcVar5 + 0x20 | 0x8000000000000000);
    SVar17.str = (char *)0xd000000000000011;
    return SVar17;
  case (char *)0x7:
    SVar14.bridgeObject = (void *)0xe900000000000070;
    SVar14.str = (char *)0x6d617473656d6974;
    return SVar14;
  case (char *)0x8:
    pcVar5 = "MRMediaRemoteSendCommand";
  case (char *)0x34:
  case (char *)0xc4:
  case (char *)0xcd:
    pvVar3 = (void *)((long)pcVar5 + 0x40 | 0x8000000000000000);
  case (char *)0x32:
  case (char *)0xc2:
    pcVar5 = (char *)0x10;
  case (char *)0x31:
  case (char *)0x36:
  case (char *)0x3a:
  case (char *)0x43:
  case (char *)0xc1:
  case (char *)0xc6:
  case (char *)0xca:
    SVar19.str = (char *)((ulong)pcVar5 | 0xd000000000000004);
    SVar19.bridgeObject = pvVar3;
    return SVar19;
  case (char *)0x9:
  case (char *)0x18:
  case (char *)0xba:
  case (char *)0xea:
    pvVar3 = (void *)0x6152;
  case (char *)0x5a:
  case (char *)0x8a:
  case (char *)0xa2:
    SVar10.bridgeObject = (void *)((ulong)pvVar3 & 0xffffffffffff | 0xec00000065740000);
    SVar10.str = (char *)0x6b63616279616c70;
    return SVar10;
  case (char *)0xa:
    SVar18.bridgeObject = (void *)0xe700000000000000;
    SVar18.str = (char *)0x676e6979616c70;
    return SVar18;
  case (char *)0xb:
  case (char *)0xa4:
    pcVar2 = (char *)0x4d656c6666756873;
  case (char *)0x10:
  case (char *)0x48:
  case (char *)0x50:
  case (char *)0x90:
  case (char *)0x98:
  case (char *)0xe0:
    SVar8.bridgeObject = (void *)0xeb0000000065646f;
    SVar8.str = pcVar2;
    return SVar8;
  case (char *)0xc:
    SVar9.bridgeObject = (void *)0xea00000000006564;
    SVar9.str = (char *)0x6f4d746165706572;
    return SVar9;
  case (char *)0xd:
    pvVar3 = (void *)0xeb00000000617461;
  case (char *)0x30:
  case (char *)0xc0:
    SVar16.bridgeObject = pvVar3;
    SVar16.str = (char *)0x446b726f77747261;
    return SVar16;
  case (char *)0xe:
    pcVar2 = (char *)0xd000000000000010;
  case (char *)0x58:
  case (char *)0x88:
  case (char *)0xa0:
  case (char *)0xb8:
  case (char *)0xe8:
    pcVar5 = "MRMediaRemoteSendCommand";
  case (char *)0x78:
  case (char *)0x80:
  case (char *)0xa8:
  case (char *)0xb0:
    pcVar5 = (char *)((long)pcVar5 + 0x80);
  case (char *)0xd8:
    SVar7.bridgeObject = (void *)((long)pcVar5 + -0x20 | 0x8000000000000000);
    SVar7.str = pcVar2;
    return SVar7;
  case (char *)0xf:
    pvVar3 = (void *)0x80000001004df080;
  case (char *)0x20:
    pcVar2 = (char *)0xd000000000000021;
  case (char *)0x0:
    SVar12.bridgeObject = pvVar3;
    SVar12.str = pcVar2;
    return SVar12;
  case (char *)0x3f:
  case (char *)0x44:
    pcVar5 = (char *)(ulong)*unaff_x20;
  case (char *)0xcf:
    in_ZR = (int)pcVar5 == 1;
  case (char *)0x39:
  case (char *)0x3e:
  case (char *)0xc9:
  case (char *)0xd2:
    pcVar5 = (char *)0x66666964;
    if (!(bool)in_ZR) {
      pcVar5 = (char *)0x64616f6c796170;
    }
    pvVar3 = (void *)0xe400000000000000;
    if (!(bool)in_ZR) {
      pvVar3 = (void *)0xe700000000000000;
    }
    SVar21.bridgeObject = pvVar3;
    SVar21.str = pcVar5;
    return SVar21;
  case (char *)0x5c:
  case (char *)0x74:
  case (char *)0x8c:
  case (char *)0xbc:
  case (char *)0x5d:
  case (char *)0x5e:
  case (char *)0x8d:
  case (char *)0x8e:
  case (char *)0xbd:
  case (char *)0xbe:
    FUN_10016c27c();
    SVar22 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
    return SVar22;
  case (char *)0x5f:
  case (char *)0x8f:
  case (char *)0xbf:
    pvVar3 = (void *)0xe700000000000000;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x64616f6c796170,(_StringGuts)0xe700000000000000,
                       (_StringComparisonResult)0x74);
    if (bVar1) {
      pcVar2 = (char *)0xe500000000000000;
      _swift_bridgeObjectRelease(0xe500000000000000);
      uVar4 = 0;
    }
    else {
      pvVar3 = (void *)0xe400000000000000;
      bVar1 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)0x66666964,(_StringGuts)0xe400000000000000,
                         (_StringComparisonResult)0x74);
      pcVar2 = (char *)0xe500000000000000;
      _swift_bridgeObjectRelease(0xe500000000000000);
      uVar4 = 1;
      if (!bVar1) {
        uVar4 = 2;
      }
    }
    *pcVar5 = uVar4;
    SVar22.bridgeObject = pvVar3;
    SVar22.str = pcVar2;
    return SVar22;
  case (char *)0xd0:
  case (char *)0x33:
  case (char *)0xc3:
    pcVar2 = &_OBJC_CLASS___NSISO8601DateFormatter;
  case (char *)0x41:
  case (char *)0x42:
    _objc_allocWithZone();
  case (char *)0x37:
  case (char *)0xc7:
    pcVar2 = (char *)objc_stub::init((ID)pcVar2);
    pvVar3 = extraout_x1;
  case (char *)0x3d:
  case (char *)0xcc:
    pcVar5 = (char *)&objc::class_t::_TtC7Wallper14LockscreenSync.superclass;
  case (char *)0x38:
  case (char *)0x3c:
  case (char *)0x40:
  case (char *)0xc8:
  case (char *)0xd1:
    *(char **)((long)pcVar5 + 0x678) = pcVar2;
  case (char *)0xce:
    SVar20.bridgeObject = pvVar3;
    SVar20.str = pcVar2;
    return SVar20;
  }
  SVar13.bridgeObject = pvVar3;
  SVar13.str = (char *)0x6e6f697461727564;
  return SVar13;
}

