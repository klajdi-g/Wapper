// rea decompile_all
// name: FUN_1002b5118
// address: 0x1002b5118
// body: available
// range: 0x1002b5118-0x1002b523f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002b5144 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

String FUN_1002b5118(undefined8 param_1)

{
  _ArrayBuffer<undefined> _Var1;
  _ArrayBuffer<undefined> _Var2;
  undefined *puVar3;
  undefined8 uVar4;
  String SVar5;
  
  _Var1 = Swift::Array<undefined>::_allocateBufferUninitialized
                    (param_1,PTR___type_metadata_for_Swift_UInt8_100524090);
  *(undefined8 *)(_Var1.unknown + 0x10) = 0x10;
  *(undefined8 *)(_Var1.unknown + 0x28) = 0;
  *(undefined8 *)(_Var1.unknown + 0x20) = 0;
  uVar4 = 0x10;
  _SecRandomCopyBytes(*(undefined8 *)PTR__kSecRandomDefault_100521af8,0x10);
  _Var2 = _Var1;
  _swift_bridgeObjectRetain();
  FUN_100288368();
  _swift_bridgeObjectRelease(_Var1.unknown);
  puVar3 = _Var2.unknown;
  FUN_1002b4ab0(_Var2.unknown,uVar4);
  FUN_100002f94(&DAT_100553858,&DAT_100429e10);
  FUN_1000087a0(&DAT_1005546b8,&DAT_100553858,&DAT_100429e10,
                PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100523b48);
  SVar5 = (extension_Swift)::Swift::BidirectionalCollection::_joined
                    ((String)(ZEXT816(0xe000000000000000) << 0x40));
  FUN_100093624(_Var2.unknown,uVar4);
  _swift_bridgeObjectRelease(_Var1.unknown);
  _swift_bridgeObjectRelease(puVar3);
  return SVar5;
}

