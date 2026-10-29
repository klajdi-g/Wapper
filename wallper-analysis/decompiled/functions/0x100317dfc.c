// rea decompile_all
// name: FUN_100317dfc
// address: 0x100317dfc
// body: available
// range: 0x100317dfc-0x100317f43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100317f24 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100317dfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  void *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_180 [296];
  undefined8 local_58;
  
  puVar1 = &DAT_10053a580;
  local_58 = param_2;
  _swift_allocObject(&DAT_10053a580,0x141,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  _memcpy(puVar1 + 0x20,param_5,0x121);
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_2);
  FUN_1003181f4(param_5,auStack_180);
  puVar2 = &DAT_100558960;
  FUN_100002f94(&DAT_100558960,&DAT_10042b290);
  puVar3 = &DAT_10055bed0;
  FUN_100002f94(&DAT_10055bed0,&DAT_100430c70);
  puVar4 = &DAT_100552c58;
  FUN_1000087a0(&DAT_100552c58,&DAT_100558960,&DAT_10042b290,
                PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100523b60);
  puVar5 = puVar4;
  FUN_10031be10();
  FUN_1000036d0(&DAT_10055bef0,FUN_10040211c,&TargetProtocolConformanceDescriptor_1004370a0);
  (extension_SwiftUI)::SwiftUI::ForEach::_init
            (param_1,puVar5,FUN_10031bf74,puVar1,puVar2,
             PTR___type_metadata_for_Swift_String_100523a98,puVar3,puVar4,puVar5);
  return;
}

