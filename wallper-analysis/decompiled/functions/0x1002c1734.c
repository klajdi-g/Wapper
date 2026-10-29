// rea decompile_all
// name: FUN_1002c1734
// address: 0x1002c1734
// body: available
// range: 0x1002c1734-0x1002c19bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1002c1734(void)

{
  long *plVar1;
  byte bVar2;
  bool bVar3;
  long lVar4;
  char *pcVar5;
  undefined8 uVar6;
  uint uVar7;
  long unaff_x20;
  void *pvVar8;
  undefined8 uVar9;
  String SVar10;
  undefined1 auVar11 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  String local_50;
  
  pvVar8 = (void *)0xea00000000006f65;
  lVar4 = 0;
  FUN_100400294();
  bVar2 = *(byte *)(unaff_x20 + *(int *)(lVar4 + 0x38));
  if (bVar2 < 4) {
    if (bVar2 < 2) {
      if (bVar2 == 0) {
        pvVar8 = (void *)0xea00000000007269;
        pcVar5 = (char *)0x416b6f6f4263614d;
      }
      else {
        pvVar8 = (void *)0xea00000000006f72;
        pcVar5 = (char *)0x506b6f6f4263614d;
      }
    }
    else if (bVar2 == 2) {
      pvVar8 = (void *)0xe400000000000000;
      pcVar5 = (char *)0x63614d69;
    }
    else {
      pvVar8 = (void *)0xe700000000000000;
      pcVar5 = (char *)0x696e694d63614d;
    }
  }
  else if (bVar2 < 6) {
    if (bVar2 == 4) {
      pvVar8 = (void *)0xe90000000000006f;
      pcVar5 = (char *)0x696475745363614d;
    }
    else {
      pvVar8 = (void *)0xe600000000000000;
      pcVar5 = (char *)0x6f725063614d;
    }
  }
  else if (bVar2 == 6) {
    pcVar5 = (char *)0x4e6b6f6f4263614d;
  }
  else {
    pvVar8 = (void *)0xe700000000000000;
    pcVar5 = (char *)0x6e776f6e6b6e55;
  }
  SVar10.bridgeObject = pvVar8;
  SVar10.str = pcVar5;
  SVar10 = Swift::String::lowercased(SVar10);
  _swift_bridgeObjectRelease(pvVar8);
  local_60 = 0x6b6f6f6263616d;
  uStack_58 = 0xe700000000000000;
  local_50 = SVar10;
  FUN_100026df4();
  bVar3 = (extension_Foundation)::Swift::StringProtocol::_contains
                    (&local_60,PTR___type_metadata_for_Swift_String_100523a98,
                     PTR___type_metadata_for_Swift_String_100523a98,pvVar8,pvVar8);
  if (bVar3) {
    _swift_bridgeObjectRelease(SVar10.bridgeObject);
  }
  else {
    local_60 = 0x706f7470616c;
    uStack_58 = 0xe600000000000000;
    local_50 = SVar10;
    bVar3 = (extension_Foundation)::Swift::StringProtocol::_contains
                      (&local_60,PTR___type_metadata_for_Swift_String_100523a98,
                       PTR___type_metadata_for_Swift_String_100523a98,pvVar8,pvVar8);
    _swift_bridgeObjectRelease(SVar10.bridgeObject);
    if (!bVar3) {
      uVar9 = 0xe700000000000000;
      uVar6 = 0x706f746b736564;
      goto LAB_1002c19a0;
    }
  }
  uVar9 = 0xe900000000000035;
  plVar1 = (long *)(unaff_x20 + *(int *)(lVar4 + 0x3c));
  lVar4 = *plVar1;
  uVar7 = (uint)plVar1[1];
  FUN_1002c22bc();
  if ((uVar7 & 0xff) != 1) {
    if (lVar4 == 0xe) {
      uVar6 = 0x312d706f7470616c;
      uVar9 = 0xe900000000000034;
      goto LAB_1002c19a0;
    }
    if ((lVar4 != 0xf) && (lVar4 == 0x1a)) {
      uVar9 = 0xe900000000000036;
      uVar6 = 0x322d706f7470616c;
      goto LAB_1002c19a0;
    }
  }
  uVar6 = 0x312d706f7470616c;
LAB_1002c19a0:
  auVar11._8_8_ = uVar9;
  auVar11._0_8_ = uVar6;
  return auVar11;
}

