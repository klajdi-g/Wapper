// rea decompile_all
// name: FUN_1000921dc
// address: 0x1000921dc
// body: available
// range: 0x1000921dc-0x100092343 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_1000921dc(String *param_1,undefined8 param_2,char *param_3,void *param_4)

{
  void *pvVar1;
  String SVar2;
  char *pcVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  
  pvVar1 = param_1->bridgeObject;
  SVar2 = *param_1;
  _swift_bridgeObjectRetain();
  SVar5.bridgeObject = (void *)0xe100000000000000;
  SVar5.str = (char *)0x7c;
  SVar6.bridgeObject = param_4;
  SVar6.str = param_3;
  Swift::String::append(SVar5,SVar6);
  SVar5 = param_1[1];
  _swift_bridgeObjectRetain(pvVar1);
  SVar7.bridgeObject = param_4;
  SVar7.str = param_3;
  Swift::String::append(SVar5,SVar7);
  _swift_bridgeObjectRelease(pvVar1);
  _swift_bridgeObjectRetain(pvVar1);
  SVar4.bridgeObject = (void *)0xe100000000000000;
  SVar4.str = (char *)0x23;
  SVar8.bridgeObject = param_4;
  SVar8.str = param_3;
  Swift::String::append(SVar4,SVar8);
  _swift_bridgeObjectRelease(pvVar1);
  SVar5 = Swift::CustomStringConvertible::get_description();
  _swift_bridgeObjectRetain(pvVar1);
  SVar9.bridgeObject = param_4;
  SVar9.str = param_3;
  Swift::String::append(SVar5,SVar9);
  _swift_bridgeObjectRelease(pvVar1);
  _swift_bridgeObjectRelease(SVar5.bridgeObject);
  SVar10.bridgeObject = param_4;
  SVar10.str = param_3;
  Swift::String::append(SVar2,SVar10);
  _swift_bridgeObjectRelease(pvVar1);
  pcVar3 = (char *)0x3a6c6562616c;
  FUN_100091638(0x3a6c6562616c,0xe600000000000000);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = param_1[2].str;
    FUN_100091c28(pcVar3,0x1e0);
    if (pcVar3 != (char *)0x0) {
      FUN_1000913ac(pcVar3,0x3a6c6562616c,0xe600000000000000);
    }
  }
  _swift_bridgeObjectRelease(0xe600000000000000);
  return pcVar3;
}

