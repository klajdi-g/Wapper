// rea decompile_all
// name: FUN_10000cc90
// address: 0x10000cc90
// body: available
// range: 0x10000cc90-0x10000cf3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_10000cc90(undefined8 param_1,_StringGuts param_2,undefined8 param_3,void *param_4)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  char *pcVar3;
  char *pcVar5;
  long unaff_x20;
  undefined8 uVar6;
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
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  char local_80;
  undefined7 uStack_7f;
  void *pvStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  void *pvVar4;
  
  local_70 = 0;
  uStack_68 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x11,param_2);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x68);
  puVar2 = &DAT_10041c618;
  _swift_getKeyPath(&DAT_10041c618);
  pcVar3 = "";
  _swift_getKeyPath();
  pcVar5 = pcVar3;
  Combine::Published::_get_subscript(&local_80,uVar6,puVar2);
  _swift_release(puVar2);
  _swift_release(pcVar3);
  pcVar3 = (char *)0x65757274;
  if (local_80 == '\0') {
    pcVar3 = (char *)0x65736c6166;
  }
  pvVar4 = (void *)0xe400000000000000;
  if (local_80 == '\0') {
    pvVar4 = (void *)0xe500000000000000;
  }
  SVar7.bridgeObject = pvVar4;
  SVar7.str = pcVar3;
  SVar18.bridgeObject = param_4;
  SVar18.str = pcVar5;
  Swift::String::append(SVar7,SVar18);
  _swift_bridgeObjectRelease(pvVar4);
  SVar8.bridgeObject = (void *)0xe100000000000000;
  SVar8.str = (char *)0x7c;
  SVar19.bridgeObject = param_4;
  SVar19.str = pcVar5;
  Swift::String::append(SVar8,SVar19);
  puVar2 = &DAT_10041c460;
  _swift_getKeyPath(&DAT_10041c460);
  pcVar3 = &DAT_10041c488;
  _swift_getKeyPath();
  pcVar5 = pcVar3;
  Combine::Published::_get_subscript(&local_80,uVar6,puVar2);
  _swift_release(puVar2);
  _swift_release(pcVar3);
  pcVar3 = (char *)0x65757274;
  if (local_80 == '\0') {
    pcVar3 = (char *)0x65736c6166;
  }
  pvVar4 = (void *)0xe400000000000000;
  if (local_80 == '\0') {
    pvVar4 = (void *)0xe500000000000000;
  }
  SVar9.bridgeObject = pvVar4;
  SVar9.str = pcVar3;
  SVar20.bridgeObject = param_4;
  SVar20.str = pcVar5;
  Swift::String::append(SVar9,SVar20);
  _swift_bridgeObjectRelease(pvVar4);
  SVar10.bridgeObject = (void *)0xe100000000000000;
  SVar10.str = (char *)0x7c;
  SVar21.bridgeObject = param_4;
  SVar21.str = pcVar5;
  Swift::String::append(SVar10,SVar21);
  puVar2 = &DAT_10041c4c8;
  _swift_getKeyPath(&DAT_10041c4c8);
  pcVar3 = &DAT_10041c4f0;
  _swift_getKeyPath();
  pcVar5 = pcVar3;
  Combine::Published::_get_subscript(&local_80,uVar6,puVar2);
  _swift_release(puVar2);
  _swift_release(pcVar3);
  pcVar3 = (char *)0x0;
  if (pvStack_78 != (void *)0x0) {
    pcVar3 = (char *)CONCAT71(uStack_7f,local_80);
  }
  pvVar4 = (void *)0xe000000000000000;
  if (pvStack_78 != (void *)0x0) {
    pvVar4 = pvStack_78;
  }
  SVar11.bridgeObject = pvVar4;
  SVar11.str = pcVar3;
  SVar22.bridgeObject = param_4;
  SVar22.str = pcVar5;
  Swift::String::append(SVar11,SVar22);
  _swift_bridgeObjectRelease(pvVar4);
  SVar12.bridgeObject = (void *)0xe100000000000000;
  SVar12.str = (char *)0x7c;
  SVar23.bridgeObject = param_4;
  SVar23.str = pcVar5;
  Swift::String::append(SVar12,SVar23);
  puVar2 = &DAT_10041c510;
  _swift_getKeyPath(&DAT_10041c510);
  pcVar3 = &DAT_10041c538;
  _swift_getKeyPath();
  pcVar5 = pcVar3;
  Combine::Published::_get_subscript(&local_80,uVar6,puVar2);
  _swift_release(puVar2);
  _swift_release(pcVar3);
  pcVar3 = (char *)0x0;
  if (pvStack_78 != (void *)0x0) {
    pcVar3 = (char *)CONCAT71(uStack_7f,local_80);
  }
  pvVar4 = (void *)0xe000000000000000;
  if (pvStack_78 != (void *)0x0) {
    pvVar4 = pvStack_78;
  }
  SVar13.bridgeObject = pvVar4;
  SVar13.str = pcVar3;
  SVar24.bridgeObject = param_4;
  SVar24.str = pcVar5;
  Swift::String::append(SVar13,SVar24);
  _swift_bridgeObjectRelease(pvVar4);
  SVar14.bridgeObject = (void *)0xe100000000000000;
  SVar14.str = (char *)0x7c;
  pvVar4 = (void *)0xe100000000000000;
  pcVar3 = (char *)0x7c;
  SVar25.bridgeObject = param_4;
  SVar25.str = pcVar5;
  Swift::String::append(SVar14,SVar25);
  FUN_10000cf3c();
  SVar15.bridgeObject = pvVar4;
  SVar15.str = pcVar3;
  SVar26.bridgeObject = param_4;
  SVar26.str = pcVar5;
  Swift::String::append(SVar15,SVar26);
  _swift_bridgeObjectRelease(pvVar4);
  SVar16.bridgeObject = (void *)0xe100000000000000;
  SVar16.str = (char *)0x7c;
  pvVar4 = (void *)0xe100000000000000;
  pcVar3 = (char *)0x7c;
  SVar27.bridgeObject = param_4;
  SVar27.str = pcVar5;
  Swift::String::append(SVar16,SVar27);
  FUN_10000d660();
  SVar17.bridgeObject = pvVar4;
  SVar17.str = pcVar3;
  SVar28.bridgeObject = param_4;
  SVar28.str = pcVar5;
  Swift::String::append(SVar17,SVar28);
  _swift_bridgeObjectRelease(pvVar4);
  auVar1._8_8_ = uStack_68;
  auVar1._0_8_ = local_70;
  return auVar1;
}

