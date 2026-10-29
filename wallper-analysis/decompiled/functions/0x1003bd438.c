// rea decompile_all
// name: FUN_1003bd438
// address: 0x1003bd438
// body: available
// range: 0x1003bd438-0x1003bd51f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003bd4e4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

bool FUN_1003bd438(long param_1,long param_2)

{
  long lVar1;
  NSComparisonResult NVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = 0;
  FUN_10040211c();
  lVar3 = *(long *)(param_1 + *(int *)(lVar1 + 0x1c) + 8);
  lVar4 = lVar3;
  if (lVar3 == 0) {
    lVar4 = -0x2000000000000000;
  }
  lVar6 = *(long *)(param_2 + *(int *)(lVar1 + 0x1c) + 8);
  lVar5 = lVar6;
  if (lVar6 == 0) {
    lVar5 = -0x2000000000000000;
  }
  FUN_100026df4();
  _swift_bridgeObjectRetain(lVar3);
  _swift_bridgeObjectRetain(lVar6);
  NVar2 = (extension_Foundation)::Swift::StringProtocol::_localizedCaseInsensitiveCompare
                    (lVar1,PTR___type_metadata_for_Swift_String_100523a98,
                     PTR___type_metadata_for_Swift_String_100523a98,lVar1,lVar1);
  _swift_bridgeObjectRelease(lVar4);
  _swift_bridgeObjectRelease(lVar5);
  return NVar2.unknown == (undefined *)0xffffffffffffffff;
}

