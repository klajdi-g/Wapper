// rea decompile_all
// name: FUN_10002bdf8
// address: 0x10002bdf8
// body: available
// range: 0x10002bdf8-0x10002bf07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010002bee4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10002bdf8(undefined8 *param_1,VerticalAlignment param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  code *pcVar4;
  VerticalAlignment VVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  lVar2 = unaff_x20[1];
  VVar5 = SwiftUI::VerticalAlignment::get_center(param_2);
  *param_1 = VVar5.unknown;
  param_1[1] = 0x4018000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  if (-1 < lVar1) {
    puVar6 = &DAT_10054b780;
    FUN_100002f94(&DAT_10054b780,&DAT_10041ccf0);
    iVar3 = *(int *)(puVar6 + 0x2c);
    puVar6 = &DAT_10041cd00;
    _swift_getKeyPath(&DAT_10041cd00);
    puVar7 = &DAT_100526018;
    _swift_allocObject(&DAT_100526018,0x20,7);
    *(long *)(puVar7 + 0x10) = lVar1;
    *(long *)(puVar7 + 0x18) = lVar2;
    puVar8 = &DAT_10054b788;
    FUN_100002f94(&DAT_10054b788,&DAT_100422290);
    puVar9 = &DAT_10054b790;
    FUN_100002f94(&DAT_10054b790,&DAT_10041cd18);
    puVar10 = puVar9;
    FUN_10002bf20();
    FUN_10002bfd8();
    (extension_SwiftUI)::SwiftUI::ForEach::_init
              ((long)param_1 + (long)iVar3,puVar10,puVar6,FUN_10002bf18,puVar7,puVar8,puVar9,puVar10
               ,PTR___protocol_witness_table_for_Swift_Int___Swift_Hashable_in_Swift_100523be0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10002bf08);
  (*pcVar4)();
}

