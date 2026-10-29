// rea decompile_all
// name: FUN_100088fc8
// address: 0x100088fc8
// body: available
// range: 0x100088fc8-0x1000890d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100088fc8(undefined8 *param_1,double param_2,double param_3,undefined8 param_4,long param_5
                  )

{
  GeometryProxy GVar1;
  CGSize CVar2;
  Alignment AVar3;
  undefined *puVar4;
  long lVar5;
  double dVar6;
  undefined8 uVar7;
  
  GVar1.unknown = (undefined *)0x0;
  lVar5 = param_5;
  FUN_10009835c();
  uVar7 = *(undefined8 *)(param_5 + *(int *)(GVar1.unknown + 0x14));
  CVar2 = SwiftUI::GeometryProxy::get_size(GVar1);
  if (*(char *)(param_5 + *(int *)(GVar1.unknown + 0x1c)) == '\x02') {
    uVar7 = 1;
  }
  else {
    dVar6 = param_3;
    if (param_2 <= param_3) {
      dVar6 = param_2;
    }
    AVar3 = SwiftUI::Alignment::get_center(CVar2.unknown);
    *param_1 = AVar3.unknown;
    param_1[1] = lVar5;
    puVar4 = &DAT_10054f2a0;
    FUN_100002f94(&DAT_10054f2a0,&DAT_100420768);
    FUN_1000890d8((long)param_1 + (long)*(int *)(puVar4 + 0x2c),param_2 * 0.5,
                  param_3 * 0.5 + (dVar6 / 100.0) * -4.0,(dVar6 / 100.0) * 56.0,uVar7,param_5);
    uVar7 = 0;
  }
  puVar4 = &DAT_10054f2a8;
  FUN_100002f94(&DAT_10054f2a8,&DAT_100420770);
                    /* WARNING: Could not recover jumptable at 0x0001000890d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar4 + -8) + 0x38))(param_1,uVar7,1,puVar4);
  return;
}

