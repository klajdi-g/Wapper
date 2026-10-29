// rea decompile_all
// name: FUN_100073be0
// address: 0x100073be0
// body: available
// range: 0x100073be0-0x100073d4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100073d30 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100073be0(undefined8 *param_1,HorizontalAlignment param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  HorizontalAlignment HVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  HVar4 = SwiftUI::HorizontalAlignment::get_leading(param_2);
  *param_1 = HVar4.unknown;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar5 = &DAT_10054e828;
  FUN_100002f94(&DAT_10054e828,&DAT_10041fad8);
  iVar3 = *(int *)(puVar5 + 0x2c);
  uVar6 = uVar1;
  FUN_10007094c(uVar1,uVar2);
  FUN_100265910();
  _swift_bridgeObjectRelease(uVar6);
  puVar5 = &DAT_10041fae0;
  _swift_getKeyPath(&DAT_10041fae0);
  puVar7 = &DAT_100527988;
  _swift_allocObject(&DAT_100527988,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar1;
  *(undefined8 *)(puVar7 + 0x18) = uVar2;
  puVar8 = &DAT_1005279b0;
  _swift_allocObject(&DAT_1005279b0,0x20,7);
  *(code **)(puVar8 + 0x10) = FUN_100074894;
  *(undefined **)(puVar8 + 0x18) = puVar7;
  _swift_bridgeObjectRetain(uVar2);
  puVar7 = &DAT_10054e830;
  FUN_100002f94(&DAT_10054e830,&DAT_10041fb00);
  puVar9 = &DAT_10054e838;
  FUN_100002f94(&DAT_10054e838,&DAT_10041fb08);
  puVar10 = &DAT_10054e840;
  FUN_1000087a0(&DAT_10054e840,&DAT_10054e830,&DAT_10041fb00,
                PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100523b60);
  FUN_100074900();
  (extension_SwiftUI)::SwiftUI::ForEach::_init
            ((long)param_1 + (long)iVar3,puVar10,puVar5,FUN_1000748d0,puVar8,puVar7,puVar9,puVar10,
             PTR___protocol_witness_table_for_Swift_Int___Swift_Hashable_in_Swift_100523be0);
  return;
}

