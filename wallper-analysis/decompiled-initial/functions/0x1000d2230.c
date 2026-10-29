// rea decompile_all
// name: FUN_1000d2230
// address: 0x1000d2230
// body: available
// range: 0x1000d2230-0x1000d2387 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000d2230(void)

{
  long lVar1;
  State SVar2;
  long *unaff_x20;
  long local_80;
  char local_78;
  State local_70;
  long lStack_68;
  long local_60;
  long local_50;
  long lStack_48;
  long local_40;
  long local_38;
  
  lStack_48 = unaff_x20[0xe];
  local_50 = unaff_x20[0xd];
  SVar2.unknown = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar2);
  if ((char)local_70.unknown == '\x01') {
    FUN_1000d37d0(0);
  }
  lStack_48 = unaff_x20[0xb];
  local_50 = unaff_x20[10];
  local_40 = unaff_x20[0xc];
  lStack_68 = unaff_x20[0xb];
  local_70.unknown = (undefined *)unaff_x20[10];
  local_60 = unaff_x20[0xc];
  local_38 = local_40;
  FUN_1000087e4(&local_38,&local_80,&DAT_100551458,&DAT_100423120);
  SVar2.unknown = &DAT_100551460;
  FUN_100002f94(&DAT_100551460,&DAT_100423128);
  SwiftUI::State::get_wrappedValue(SVar2);
  lVar1 = local_80;
  if (local_78 == '\x01') {
    FUN_10002a29c(&local_50,&DAT_100551460,&DAT_100423128);
  }
  else {
    lStack_68 = unaff_x20[0xb];
    local_70.unknown = (undefined *)unaff_x20[10];
    local_60 = unaff_x20[0xc];
    local_80 = 0;
    local_78 = 1;
    SwiftUI::State::set_wrappedValue(&local_70,&local_80,SVar2.unknown);
    FUN_10002a29c(&local_50,&DAT_100551460,&DAT_100423128);
    if (lVar1 != *unaff_x20) {
      (*(code *)unaff_x20[6])(lVar1);
    }
  }
  return;
}

