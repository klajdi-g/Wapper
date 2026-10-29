// rea decompile_all
// name: FUN_1000874e4
// address: 0x1000874e4
// body: available
// range: 0x1000874e4-0x1000876df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000874e4(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  State SVar4;
  long extraout_x8;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined *local_c0;
  code *local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulong local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  
  lVar2 = 0;
  FUN_10007b2b8();
  lVar6 = *(long *)(lVar2 + -8);
  lVar2 = *(long *)(lVar6 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  if ((*(char *)(param_2 + *(int *)(extraout_x8 + 0x14)) == '\x01') &&
     ((*(byte *)(param_2 + *(int *)(extraout_x8 + 0x1c)) & 1) == 0)) {
    puVar1 = (undefined8 *)(param_2 + *(int *)(extraout_x8 + 0x24));
    uStack_78 = puVar1[1];
    local_80 = *puVar1;
    SVar4.unknown = &DAT_10054eed8;
    FUN_100002f94(&DAT_10054eed8,&DAT_1004249f0);
    SwiftUI::State::get_wrappedValue(SVar4);
    puVar1 = (undefined8 *)(param_2 + *(int *)(extraout_x8 + 0x28));
    uStack_78 = puVar1[1];
    local_80 = *puVar1;
    SwiftUI::State::get_wrappedValue(SVar4);
    local_98 = (ulong)*(byte *)(param_2 + *(int *)(extraout_x8 + 0x18));
    local_b0 = local_c0;
    uStack_a0 = 0x4040a66666666666;
    local_a8 = 0x3fd5c28f5c28f5c3;
    uStack_90 = 0x3feccccccccccccd;
    local_88 = 0;
  }
  else {
    FUN_100029504();
    uVar5 = (ulong)*(byte *)(lVar6 + 0x50);
    uVar7 = uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff);
    puVar3 = &DAT_100528130;
    _swift_allocObject(&DAT_100528130,uVar7 + lVar2,uVar5 | 7);
    FUN_100007e64((long)&local_c0 - (lVar2 + 0xfU & 0xfffffffffffffff0),puVar3 + uVar7,FUN_10007b2b8
                 );
    local_b8 = FUN_10009397c;
    uStack_a0 = 0;
    local_a8 = 0;
    uStack_90 = 0;
    local_98 = 0;
    local_88 = 1;
    local_b0 = puVar3;
  }
  FUN_100002f94(&DAT_10054eee0,&DAT_100420360);
  FUN_1000886bc();
  FUN_1000087a0(&DAT_10054eee8,&DAT_10054eee0,&DAT_100420360,
                PTR_SwiftUI__SwiftUI__GeometryReader<undefined>_>SwiftUI__View_100522098);
  (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init
            ((Storage)((char)&stack0xfffffffffffffff0 + 0x58));
  param_1[1] = uStack_78;
  *param_1 = local_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  param_1[5] = uStack_58;
  param_1[4] = local_60;
  *(undefined1 *)(param_1 + 6) = local_50;
  return;
}

