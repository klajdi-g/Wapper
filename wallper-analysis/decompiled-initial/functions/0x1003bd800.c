// rea decompile_all
// name: FUN_1003bd800
// address: 0x1003bd800
// body: available
// range: 0x1003bd800-0x1003bd9bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003bd800(long param_1,ulong param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x12;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong local_70;
  undefined1 local_68;
  
  puVar3 = &DAT_10054ac40;
  FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  lVar6 = (long)&local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar7 = lVar6 - extraout_x12;
  lVar4 = 0;
  FUN_1003cff30(0,param_4,param_5);
  iVar1 = *(int *)(lVar4 + 0x80);
  local_68 = 0;
  puVar3 = &DAT_100560300;
  local_70 = param_2;
  FUN_100002f94(&DAT_100560300,&DAT_100435dd8);
  SwiftUI::State::set_wrappedValue((State *)(param_1 + iVar1),&local_70,puVar3);
  if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1003bd9bc);
    (*pcVar2)();
  }
  if (param_2 < *(ulong *)(param_3 + 0x10)) {
    lVar5 = 0;
    FUN_10040211c();
    lVar8 = *(long *)(lVar5 + -8);
    FUN_100029504(param_3 + ((ulong)*(byte *)(lVar8 + 0x50) + 0x20 &
                            ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff)) +
                  *(long *)(lVar8 + 0x48) * param_2,lVar7,FUN_10040211c);
    (**(code **)(lVar8 + 0x38))(lVar7,0,1,lVar5);
    iVar1 = *(int *)(lVar4 + 0x70);
    FUN_1000087e4(lVar7,lVar6,&DAT_10054ac40,&DAT_10041ce70);
    puVar3 = &DAT_1005602d0;
    FUN_100002f94(&DAT_1005602d0,&DAT_100435db8);
    SwiftUI::State::set_wrappedValue((State *)(param_1 + iVar1),lVar6,puVar3);
    FUN_10002a29c(lVar7,&DAT_10054ac40,&DAT_10041ce70);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1003bd9c0);
  (*pcVar2)();
}

