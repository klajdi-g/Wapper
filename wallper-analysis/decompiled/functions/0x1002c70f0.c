// rea decompile_all
// name: FUN_1002c70f0
// address: 0x1002c70f0
// body: available
// range: 0x1002c70f0-0x1002c72bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002c7240 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1002c70f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 local_68 [8];
  
  puVar2 = &DAT_10042e4d8;
  _swift_getKeyPath(&DAT_10042e4d8);
  puVar3 = &DAT_10042e500;
  _swift_getKeyPath(&DAT_10042e500);
  Combine::Published::_get_subscript(local_68,param_3,puVar2,puVar3);
  _swift_release(puVar2);
  _swift_release(puVar3);
  puVar2 = &DAT_10042e520;
  _swift_getKeyPath(&DAT_10042e520);
  puVar3 = &DAT_100537fb8;
  _swift_allocObject(&DAT_100537fb8,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_5;
  _swift_retain(param_4);
  _swift_retain(param_3);
  puVar4 = &DAT_10054b058;
  FUN_100002f94(&DAT_10054b058,&DAT_10041c288);
  puVar5 = &DAT_10055a540;
  FUN_100002f94(&DAT_10055a540,&DAT_10042e550);
  puVar6 = &DAT_10054b068;
  FUN_1000087a0(&DAT_10054b068,&DAT_10054b058,&DAT_10041c288,
                PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100523b60);
  FUN_1002ca6e4();
  (extension_SwiftUI)::SwiftUI::ForEach::_init
            (param_1,puVar6,puVar2,FUN_1002ca6d8,puVar3,puVar4,puVar5,puVar6,
             PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100523aa8);
  puVar2 = &DAT_100537fe0;
  _swift_allocObject(&DAT_100537fe0,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  puVar3 = &DAT_10055a570;
  FUN_100002f94(&DAT_10055a570,&DAT_10042e568);
  puVar1 = (undefined8 *)(param_1 + *(int *)(puVar3 + 0x24));
  *puVar1 = FUN_1002ca824;
  puVar1[1] = puVar2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  _swift_retain(param_3);
  _swift_retain(param_4);
  return;
}

