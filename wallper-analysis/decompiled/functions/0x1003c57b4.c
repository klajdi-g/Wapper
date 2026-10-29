// rea decompile_all
// name: FUN_1003c57b4
// address: 0x1003c57b4
// body: available
// range: 0x1003c57b4-0x1003c59ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003c57b4(VerticalAlignment param_1,undefined8 param_2,undefined8 param_3)

{
  VerticalAlignment VVar1;
  Color CVar2;
  void *extraout_x8;
  undefined1 auStack_2440 [1312];
  undefined1 auStack_1f20 [1312];
  undefined8 local_1a00;
  undefined1 local_19f8;
  undefined8 local_19f0;
  undefined1 local_19e8;
  undefined8 local_19e0;
  undefined8 uStack_19d8;
  undefined1 auStack_19d0 [1288];
  undefined1 auStack_14c8 [1288];
  undefined *local_fc0;
  undefined8 local_fb8;
  undefined1 local_fb0;
  undefined1 auStack_faf [1295];
  undefined *local_aa0;
  undefined8 local_a98;
  undefined1 local_a90;
  undefined1 auStack_a8f [1295];
  undefined1 auStack_580 [1312];
  
  (*(code *)PTR____chkstk_darwin_100521118)();
  VVar1 = SwiftUI::VerticalAlignment::get_center(param_1);
  FUN_1003c5a00(auStack_580,param_1.unknown,param_2,param_3);
  _memcpy(auStack_19d0,auStack_580,0x508);
  _memcpy(auStack_14c8,auStack_580,0x508);
  FUN_1000087e4(auStack_19d0,&local_aa0,&DAT_100560598,&DAT_100436048);
  FUN_10002a29c(auStack_14c8,&DAT_100560598,&DAT_100436048);
  _memcpy((void *)((ulong)auStack_1f20 | 7),auStack_19d0,0x508);
  local_fb8 = 0x4038000000000000;
  local_fb0 = 0;
  local_fc0 = VVar1.unknown;
  _memcpy(auStack_faf,auStack_1f20,0x50f);
  local_a98 = 0x4038000000000000;
  local_a90 = 0;
  local_aa0 = VVar1.unknown;
  _memcpy(auStack_a8f,auStack_1f20,0x50f);
  FUN_1000087e4(&local_fc0,auStack_580,&DAT_1005605a0,&DAT_100436050);
  CVar2.unknown = (undefined *)&local_aa0;
  FUN_10002a29c(CVar2.unknown,&DAT_1005605a0,&DAT_100436050);
  CVar2 = SwiftUI::Color::get_clear(CVar2);
  SwiftUI::Alignment::get_center((Alignment)CVar2.unknown);
  SwiftUI::_FrameLayout::_init((Alignment)0x4051000000000000);
  _memcpy(auStack_1f20,&local_fc0,0x520);
  _memcpy(auStack_580,&local_fc0,0x520);
  _memcpy(extraout_x8,&local_fc0,0x520);
  *(undefined **)((long)extraout_x8 + 0x520) = CVar2.unknown;
  *(undefined8 *)((long)extraout_x8 + 0x528) = local_1a00;
  *(undefined1 *)((long)extraout_x8 + 0x530) = local_19f8;
  *(undefined8 *)((long)extraout_x8 + 0x538) = local_19f0;
  *(undefined1 *)((long)extraout_x8 + 0x540) = local_19e8;
  *(undefined8 *)((long)extraout_x8 + 0x550) = uStack_19d8;
  *(undefined8 *)((long)extraout_x8 + 0x548) = local_19e0;
  FUN_1000087e4(auStack_580,auStack_2440,&DAT_1005605a0,&DAT_100436050);
  FUN_10002a29c(auStack_1f20,&DAT_1005605a0,&DAT_100436050);
  return;
}

