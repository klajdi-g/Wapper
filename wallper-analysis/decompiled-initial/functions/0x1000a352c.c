// rea decompile_all
// name: FUN_1000a352c
// address: 0x1000a352c
// body: available
// range: 0x1000a352c-0x1000a35ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000a352c(undefined8 *param_1,Alignment param_2,undefined *param_3)

{
  int iVar1;
  Alignment AVar2;
  undefined *puVar3;
  Animation AVar4;
  char cVar5;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar3 = param_3;
  AVar2 = SwiftUI::Alignment::get_center(param_2);
  *param_1 = AVar2.unknown;
  param_1[1] = puVar3;
  puVar3 = &DAT_10054fad8;
  FUN_100002f94(&DAT_10054fad8,&USHORT_1004210d0);
  AVar4.unknown = param_3;
  FUN_1000a3600((long)param_1 + (long)*(int *)(puVar3 + 0x2c),param_3,param_2.unknown);
  AVar4 = SwiftUI::Animation::easeInOut(0.4,AVar4);
  cVar5 = param_3[0x58];
  if (param_3[0x58] == '\f') {
                    /* WARNING: Load size is inaccurate */
    SwiftUI::AppStorage::get_wrappedValue((AppStorage)param_3[0x40]);
    FUN_100078414(local_40,uStack_38);
    cVar5 = '\0';
    if (((uint)local_40 & 0xff) != 0xc) {
      cVar5 = (char)local_40;
    }
  }
  puVar3 = &DAT_10054fae0;
  FUN_100002f94(&DAT_10054fae0,&USHORT_1004210d8);
  iVar1 = *(int *)(puVar3 + 0x24);
  *(undefined8 *)((long)param_1 + (long)iVar1) = AVar4.unknown;
  *(char *)((undefined8 *)((long)param_1 + (long)iVar1) + 1) = cVar5;
  return;
}

