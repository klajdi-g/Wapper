// rea decompile_all
// name: FUN_1002cb09c
// address: 0x1002cb09c
// body: available
// range: 0x1002cb09c-0x1002cb1fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002cb09c(long param_1)

{
  byte bVar1;
  long lVar2;
  char *pcVar3;
  void *pvVar4;
  String stringLiteral;
  
  lVar2 = 0;
  FUN_100170d98();
  bVar1 = *(byte *)(param_1 + *(int *)(lVar2 + 0x28));
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      pcVar3 = (char *)0x20676e6968746f4e;
      pvVar4 = (void *)0xeb00000000746573;
    }
    else {
      pcVar3 = (char *)0x676e6979616c50;
      pvVar4 = (void *)0xe700000000000000;
    }
  }
  else if (bVar1 == 2) {
    bVar1 = *(byte *)(param_1 + *(int *)(lVar2 + 0x2c));
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        pcVar3 = (char *)0x100000000000001a;
        pvVar4 = (void *)0x80000001004e4170;
        goto LAB_1002cb1d4;
      }
      pcVar3 = s_Paused_Mac_is_busy_1004e4150;
    }
    else {
      if (bVar1 != 2) {
        if (bVar1 == 3) {
          pcVar3 = (char *)0x1000000000000019;
          pvVar4 = (void *)0x80000001004e4110;
        }
        else if (*(char *)(param_1 + *(int *)(lVar2 + 0x30)) == '\x01') {
          pcVar3 = (char *)0x6220646573756150;
          pvVar4 = (void *)0xed0000756f792079;
        }
        else {
          pcVar3 = (char *)0x646573756150;
          pvVar4 = (void *)0xe600000000000000;
        }
        goto LAB_1002cb1d4;
      }
      pcVar3 = s_Paused_low_battery_1004e4170;
    }
    pvVar4 = (void *)((ulong)(pcVar3 + -0x20) | 0x8000000000000000);
    pcVar3 = (char *)0x1000000000000016;
  }
  else {
    pcVar3 = (char *)0x66664f;
    pvVar4 = (void *)0xe300000000000000;
  }
LAB_1002cb1d4:
  stringLiteral.bridgeObject = pvVar4;
  stringLiteral.str = pcVar3;
  SwiftUI::LocalizedStringKey::init(stringLiteral);
  return;
}

