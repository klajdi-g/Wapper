// rea decompile_all
// name: FUN_10008fb9c
// address: 0x10008fb9c
// body: available
// range: 0x10008fb9c-0x10008fd2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10008fb9c(undefined8 *param_1,double param_2,double param_3,undefined8 param_4,
                  GeometryProxy param_5)

{
  undefined8 *puVar1;
  GeometryProxy GVar2;
  CGSize CVar3;
  Alignment AVar4;
  undefined *puVar5;
  code *UNRECOVERED_JUMPTABLE;
  double dVar6;
  undefined8 uVar7;
  Alignment width;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  GVar2.unknown = (undefined *)0x0;
  puVar5 = param_5.unknown;
  FUN_100097b38();
  uVar7 = *(undefined8 *)(param_5.unknown + *(int *)(GVar2.unknown + 0x14));
  CVar3 = SwiftUI::GeometryProxy::get_size(GVar2);
  if (param_5.unknown[*(int *)(GVar2.unknown + 0x1c)] == '\x02') {
    puVar5 = &DAT_10054f308;
    FUN_100002f94(&DAT_10054f308,&DAT_100420818);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(puVar5 + -8) + 0x38);
    uVar7 = 1;
  }
  else {
    dVar6 = param_3;
    if (param_2 <= param_3) {
      dVar6 = param_2;
    }
    width.unknown = (undefined *)(param_2 * 0.11);
    AVar4 = SwiftUI::Alignment::get_leading(CVar3.unknown);
    *param_1 = AVar4.unknown;
    param_1[1] = puVar5;
    puVar5 = &DAT_10054f300;
    FUN_100002f94(&DAT_10054f300,&DAT_100420810);
    FUN_10008fd30((long)param_1 + (long)*(int *)(puVar5 + 0x2c),width.unknown,param_3 * 0.5,
                  (dVar6 / 100.0) * 118.0,uVar7,param_5.unknown,param_4);
    CVar3 = SwiftUI::GeometryProxy::get_size(param_5);
    CVar3 = SwiftUI::GeometryProxy::get_size(CVar3.unknown);
    SwiftUI::Alignment::get_leading((Alignment)CVar3.unknown);
    SwiftUI::_FrameLayout::_init(width);
    puVar5 = &DAT_10054f308;
    FUN_100002f94(&DAT_10054f308,&DAT_100420818);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar5 + 0x24));
    puVar1[1] = uStack_78;
    *puVar1 = local_80;
    puVar1[3] = uStack_68;
    puVar1[2] = uStack_70;
    puVar1[5] = uStack_58;
    puVar1[4] = local_60;
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(puVar5 + -8) + 0x38);
    uVar7 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010008fd2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar7,1,puVar5);
  return;
}

