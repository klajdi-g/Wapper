// rea decompile_all
// name: FUN_1001236ac
// address: 0x1001236ac
// body: available
// range: 0x1001236ac-0x10012374f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1001236ac(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  char *pcVar2;
  undefined1 (*unaff_x20) [16];
  String SVar3;
  String SVar4;
  String SVar5;
  
  auVar1 = *unaff_x20;
  _swift_bridgeObjectRetain();
  SVar3.bridgeObject = (void *)0xe100000000000000;
  SVar3.str = (char *)0x23;
  SVar4.bridgeObject = param_4;
  SVar4.str = param_3;
  Swift::String::append(SVar3,SVar4);
  FUN_100126a5c();
  Foundation::UUID::typeMetadataAccessor();
  pcVar2 = PTR_Foundation__Foundation__UUID_>Swift__CustomStringConvertible_100520c08;
  FUN_1000036d0(&DAT_100552e30,PTR_typeMetadataAccessor_100520bd8);
  SVar3 = Swift::CustomStringConvertible::get_description();
  SVar5.bridgeObject = param_4;
  SVar5.str = pcVar2;
  Swift::String::append(SVar3,SVar5);
  _swift_bridgeObjectRelease(SVar3.bridgeObject);
  return auVar1;
}

