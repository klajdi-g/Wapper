// rea decompile_all
// name: FUN_10008a970
// address: 0x10008a970
// body: available
// range: 0x10008a970-0x10008ab17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10008a970(undefined8 *param_1,double param_2,double param_3,undefined8 param_4,long param_5
                  )

{
  byte bVar1;
  GeometryProxy GVar2;
  CGSize CVar3;
  Alignment AVar4;
  undefined *puVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  char local_81;
  
  GVar2.unknown = (undefined *)0x0;
  FUN_100097a30();
  bVar1 = *(byte *)(param_5 + *(int *)(GVar2.unknown + 0x18));
  CVar3 = SwiftUI::GeometryProxy::get_size(GVar2);
  dVar10 = *(double *)(param_5 + *(int *)(GVar2.unknown + 0x14));
  SwiftUI::GeometryProxy::get_size((GeometryProxy)CVar3.unknown);
  AVar4.unknown = &DAT_10054ab50;
  puVar5 = &DAT_10041d0f0;
  FUN_100002f94();
  SwiftUI::State::get_wrappedValue((State)AVar4.unknown);
  if (*(char *)(param_5 + *(int *)(GVar2.unknown + 0x1c)) == '\x02') {
    uVar7 = 1;
  }
  else {
    dVar9 = param_2 * 0.5 - dVar10 * 11.450000000000003;
    dVar6 = 23.400000000000002;
    if (local_81 == '\0') {
      dVar6 = 0.0;
    }
    dVar8 = param_3 * 0.5 + dVar10 * -5.0;
    AVar4 = SwiftUI::Alignment::get_center(AVar4);
    *param_1 = AVar4.unknown;
    param_1[1] = puVar5;
    puVar5 = &DAT_10054f378;
    FUN_100002f94(&DAT_10054f378,&DAT_1004208d0);
    FUN_10008ab18((long)param_1 + (long)*(int *)(puVar5 + 0x2c),dVar9 + dVar10 * dVar6,dVar8,dVar9,
                  dVar8,dVar10 * 11.450000000000003 + dVar9,param_5,bVar1 ^ 1);
    uVar7 = 0;
  }
  puVar5 = &DAT_10054f380;
  FUN_100002f94(&DAT_10054f380,&DAT_1004208d8);
  (**(code **)(*(long *)(puVar5 + -8) + 0x38))(param_1,uVar7,1,puVar5);
  return;
}

