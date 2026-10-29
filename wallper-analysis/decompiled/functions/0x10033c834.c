// rea decompile_all
// name: FUN_10033c834
// address: 0x10033c834
// body: available
// range: 0x10033c834-0x10033c983 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010033c964 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10033c834(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_b0 [88];
  undefined *local_58;
  
  puVar1 = &DAT_10054ebb0;
  FUN_100002f94(&DAT_10054ebb0,&DAT_10041ffa8);
  _swift_initStaticObject();
  puVar2 = &DAT_10053b498;
  local_58 = puVar1;
  _swift_allocObject(&DAT_10053b498,0x68,7);
  uVar3 = param_2[4];
  uVar7 = param_2[7];
  uVar6 = param_2[6];
  *(undefined8 *)(puVar2 + 0x38) = param_2[5];
  *(undefined8 *)(puVar2 + 0x30) = uVar3;
  *(undefined8 *)(puVar2 + 0x48) = uVar7;
  *(undefined8 *)(puVar2 + 0x40) = uVar6;
  uVar3 = param_2[8];
  *(undefined8 *)(puVar2 + 0x58) = param_2[9];
  *(undefined8 *)(puVar2 + 0x50) = uVar3;
  *(undefined8 *)(puVar2 + 0x60) = param_2[10];
  uVar3 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  *(undefined8 *)(puVar2 + 0x18) = param_2[1];
  *(undefined8 *)(puVar2 + 0x10) = uVar3;
  *(undefined8 *)(puVar2 + 0x28) = uVar7;
  *(undefined8 *)(puVar2 + 0x20) = uVar6;
  FUN_10033f170(param_2,auStack_b0);
  puVar1 = &DAT_10054eba0;
  FUN_100002f94(&DAT_10054eba0,&BYTE_10041fe90);
  uVar3 = 0;
  FUN_100341c48(0);
  puVar4 = &DAT_10055ce70;
  FUN_1000087a0(&DAT_10055ce70,&DAT_10054eba0,&BYTE_10041fe90,
                PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100523b60);
  puVar5 = &DAT_10055ce28;
  FUN_1000036d0(&DAT_10055ce28,FUN_100341c48,&TargetProtocolConformanceDescriptor_100432598);
  FUN_100341c88();
  (extension_SwiftUI)::SwiftUI::ForEach::_init
            (param_1,puVar5,FUN_100341c80,puVar2,puVar1,
             PTR___type_metadata_for_Swift_String_100523a98,uVar3,puVar4,puVar5);
  return;
}

