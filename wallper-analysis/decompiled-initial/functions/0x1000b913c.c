// rea decompile_all
// name: FUN_1000b913c
// address: 0x1000b913c
// body: available
// range: 0x1000b913c-0x1000b940f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000b913c(void *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,HorizontalAlignment param_6)

{
  int iVar1;
  code *pcVar2;
  HorizontalAlignment HVar3;
  Set SVar4;
  CGFloat _all;
  State SVar5;
  long lVar6;
  undefined *puVar7;
  UUID UVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 auStack_e18 [472];
  undefined1 auStack_c40 [424];
  undefined1 auStack_a98 [400];
  undefined1 auStack_908 [400];
  undefined *local_778;
  undefined8 local_770;
  undefined1 local_768;
  undefined1 auStack_767 [407];
  undefined *local_5d0;
  undefined8 local_5c8;
  undefined1 local_5c0;
  undefined1 auStack_5bf [407];
  ulong local_428 [53];
  undefined1 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined1 local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80;
  
  HVar3 = SwiftUI::HorizontalAlignment::get_center(param_6);
  FUN_1000b9410(&local_250,param_6.unknown);
  _memcpy(auStack_a98,&local_250,0x189);
  _memcpy(auStack_908,&local_250,0x189);
  FUN_1000087e4(auStack_a98,local_428,&DAT_100550948,&DAT_100422378);
  FUN_10002a29c(auStack_908,&DAT_100550948,&DAT_100422378);
  SVar4.unknown = _memcpy((void *)((ulong)local_428 | 7),auStack_a98,0x189);
  SVar4 = SwiftUI::Edge::Set::get_bottom(SVar4);
  local_770 = 0x4010000000000000;
  local_768 = 0;
  local_778 = HVar3.unknown;
  _all.unknown = _memcpy(auStack_767,local_428,400);
  uVar12 = 0x4030000000000000;
  SwiftUI::EdgeInsets::init(_all);
  _memcpy(auStack_c40,&local_778,0x1a1);
  local_5c8 = 0x4010000000000000;
  local_5c0 = 0;
  local_5d0 = HVar3.unknown;
  _memcpy(auStack_5bf,local_428,400);
  FUN_1000087e4(&local_778,&local_250,&DAT_100550950,&DAT_100422380);
  FUN_10002a29c(&local_5d0,&DAT_100550950,&DAT_100422380);
  lVar11 = *(long *)(param_6.unknown + 0x58);
  uStack_248 = *(undefined8 *)(param_6.unknown + 0x18);
  local_250 = *(undefined8 *)(param_6.unknown + 0x10);
  SVar5.unknown = &DAT_10054ba40;
  FUN_100002f94(&DAT_10054ba40,&DAT_100423be0);
  SwiftUI::State::get_wrappedValue(SVar5);
  if ((long)local_428[0] < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1000b940c);
    (*pcVar2)();
  }
  if (local_428[0] < *(ulong *)(lVar11 + 0x10)) {
    lVar6 = 0;
    FUN_1000bc244();
    uVar10 = (ulong)*(byte *)(*(long *)(lVar6 + -8) + 0x50);
    lVar6 = *(long *)(*(long *)(lVar6 + -8) + 0x48);
    puVar7 = &DAT_100550958;
    FUN_100002f94(&DAT_100550958,&DAT_100422388);
    iVar1 = *(int *)(puVar7 + 0x34);
    UVar8 = Foundation::UUID::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar8.unknown + -8) + 0x10))
              ((long)param_1 + (long)iVar1,
               lVar11 + (uVar10 + 0x20 & (uVar10 ^ 0xffffffffffffffff)) + lVar6 * local_428[0],
               UVar8.unknown);
    _memcpy(local_428,auStack_c40,0x1a8);
    local_258 = 0;
    local_280 = (char)SVar4.unknown;
    local_278 = uVar12;
    local_270 = param_3;
    local_268 = param_4;
    local_260 = param_5;
    _memcpy(param_1,local_428,0x1d1);
    _memcpy(&local_250,auStack_c40,0x1a8);
    local_80 = 0;
    local_a8 = (char)SVar4.unknown;
    local_a0 = uVar12;
    local_98 = param_3;
    local_90 = param_4;
    local_88 = param_5;
    FUN_1000087e4(local_428,auStack_e18,&DAT_100550960,&DAT_100422390);
    puVar9 = &local_250;
    FUN_10002a29c(puVar9,&DAT_100550960,&DAT_100422390);
    FUN_1000b628c();
    puVar7 = &DAT_100550968;
    FUN_100002f94(&DAT_100550968,&DAT_100422398);
    *(undefined8 **)((long)param_1 + (long)*(int *)(puVar7 + 0x24)) = puVar9;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1000b9410);
  (*pcVar2)();
}

