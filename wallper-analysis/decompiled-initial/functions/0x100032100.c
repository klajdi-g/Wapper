// rea decompile_all
// name: FUN_100032100
// address: 0x100032100
// body: available
// range: 0x100032100-0x100032383 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100032100(ulong param_1,char param_2,char *param_3,void *param_4)

{
  void *pvVar1;
  void *pvVar2;
  char *pcVar3;
  char *pcVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  undefined1 auVar12 [16];
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  undefined1 local_60 [16];
  
  local_60._8_8_ = (void *)0xe200000000000000;
  local_60._0_8_ = (char *)0x7330;
  if ((param_2 == '\x01') || ((long)param_1 < 1)) goto LAB_100032368;
  if (param_1 < 0xe10) {
    if (0x3b < param_1 % 0xe10) {
      SVar7 = Swift::CustomStringConvertible::get_description();
      SVar8.bridgeObject = (void *)0xe100000000000000;
      SVar8.str = (char *)0x6d;
      SVar15.bridgeObject = param_4;
      SVar15.str = param_3;
      Swift::String::append(SVar8,SVar15);
      local_60._0_8_ = SVar7.str;
      local_60._8_8_ = SVar7.bridgeObject;
      pvVar1 = (void *)local_60._8_8_;
      pcVar4 = (char *)local_60._0_8_;
      if (param_1 % 0x3c == 0) goto LAB_100032330;
LAB_1000322e8:
      SVar7 = Swift::CustomStringConvertible::get_description();
      SVar19.bridgeObject = param_4;
      SVar19.str = param_3;
      Swift::String::append(SVar7,SVar19);
      _swift_bridgeObjectRelease(SVar7.bridgeObject);
      SVar10.bridgeObject = (void *)0xe100000000000000;
      SVar10.str = (char *)0x73;
      SVar20.bridgeObject = param_4;
      SVar20.str = param_3;
      Swift::String::append(SVar10,SVar20);
      local_60._0_8_ = (char *)0x20;
      local_60._8_8_ = (void *)0xe100000000000000;
      pvVar2 = (void *)local_60._8_8_;
      pcVar3 = (char *)local_60._0_8_;
      goto LAB_100032338;
    }
    local_60 = (undefined1  [16])Swift::CustomStringConvertible::get_description();
    SVar5.bridgeObject = (void *)0xe100000000000000;
    SVar5.str = (char *)0x73;
    SVar13.bridgeObject = param_4;
    SVar13.str = param_3;
    Swift::String::append(SVar5,SVar13);
  }
  else {
    SVar7 = Swift::CustomStringConvertible::get_description();
    SVar6.bridgeObject = (void *)0xe100000000000000;
    SVar6.str = (char *)0x68;
    SVar14.bridgeObject = param_4;
    SVar14.str = param_3;
    Swift::String::append(SVar6,SVar14);
    local_60._0_8_ = SVar7.str;
    pcVar4 = (char *)local_60._0_8_;
    local_60._8_8_ = SVar7.bridgeObject;
    pvVar1 = (void *)local_60._8_8_;
    if (param_1 % 0xe10 < 0x3c) {
      local_60._0_8_ = (char *)0x0;
      local_60._8_8_ = (void *)0xe000000000000000;
    }
    else {
      SVar7 = Swift::CustomStringConvertible::get_description();
      SVar16.bridgeObject = param_4;
      SVar16.str = param_3;
      Swift::String::append(SVar7,SVar16);
      _swift_bridgeObjectRelease(SVar7.bridgeObject);
      SVar7.bridgeObject = (void *)0xe100000000000000;
      SVar7.str = (char *)0x6d;
      SVar17.bridgeObject = param_4;
      SVar17.str = param_3;
      Swift::String::append(SVar7,SVar17);
      local_60._0_8_ = (char *)0x20;
      local_60._8_8_ = (void *)0xe100000000000000;
    }
    _swift_bridgeObjectRetain(pvVar1);
    SVar9.bridgeObject = (void *)local_60._8_8_;
    SVar9.str = (char *)local_60._0_8_;
    SVar18.bridgeObject = param_4;
    SVar18.str = param_3;
    Swift::String::append(SVar9,SVar18);
    _swift_bridgeObjectRelease(pvVar1);
    _swift_bridgeObjectRelease(local_60._8_8_);
    if (param_1 % 0x3c != 0) goto LAB_1000322e8;
LAB_100032330:
    pcVar3 = (char *)0x0;
    pvVar2 = (void *)0xe000000000000000;
LAB_100032338:
    local_60._8_8_ = pvVar1;
    local_60._0_8_ = pcVar4;
    _swift_bridgeObjectRetain(pvVar1);
    SVar11.bridgeObject = pvVar2;
    SVar11.str = pcVar3;
    SVar21.bridgeObject = param_4;
    SVar21.str = param_3;
    Swift::String::append(SVar11,SVar21);
    _swift_bridgeObjectRelease(pvVar1);
    _swift_bridgeObjectRelease(pvVar2);
  }
LAB_100032368:
  auVar12._8_8_ = local_60._8_8_;
  auVar12._0_8_ = local_60._0_8_;
  return auVar12;
}

