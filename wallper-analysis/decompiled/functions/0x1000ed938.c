// rea decompile_all
// name: FUN_1000ed938
// address: 0x1000ed938
// body: available
// range: 0x1000ed938-0x1000ed9d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000ed938(char *param_1,long param_2)

{
  State *pSVar1;
  long lVar2;
  State SVar3;
  byte local_41;
  undefined1 local_40 [8];
  undefined *local_38;
  
  if (*param_1 == '\x01') {
    lVar2 = 0;
    FUN_1000f834c();
    pSVar1 = (State *)(param_2 + *(int *)(lVar2 + 0x34));
    local_40[0] = *(undefined1 *)&pSVar1->unknown;
    local_38 = pSVar1[1].unknown;
    SVar3.unknown = &DAT_10054ab50;
    FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
    SwiftUI::State::get_wrappedValue(SVar3);
    if ((local_41 & 1) == 0) {
      local_40[0] = 1;
      SwiftUI::State::set_wrappedValue(pSVar1,local_40,SVar3.unknown);
    }
  }
  return;
}

