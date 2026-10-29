// rea decompile_all
// name: thunk_FUN_1001070dc
// address: 0x10010b8ac
// body: available
// range: 0x10010b8ac-0x10010b8af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_1001070dc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,char *param_4,
                        void *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  _swift_bridgeObjectRetain();
  SVar4.bridgeObject = (void *)0xe100000000000000;
  SVar4.str = (char *)0x23;
  SVar5.bridgeObject = param_5;
  SVar5.str = param_4;
  Swift::String::append(SVar4,SVar5);
  FUN_100126a5c();
  Foundation::UUID::typeMetadataAccessor();
  pcVar3 = PTR_Foundation__Foundation__UUID_>Swift__CustomStringConvertible_100520c08;
  FUN_1000036d0(&DAT_100552e30,PTR_typeMetadataAccessor_100520bd8);
  SVar4 = Swift::CustomStringConvertible::get_description();
  SVar6.bridgeObject = param_5;
  SVar6.str = pcVar3;
  Swift::String::append(SVar4,SVar6);
  _swift_bridgeObjectRelease(SVar4.bridgeObject);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}

