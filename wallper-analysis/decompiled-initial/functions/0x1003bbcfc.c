// rea decompile_all
// name: FUN_1003bbcfc
// address: 0x1003bbcfc
// body: available
// range: 0x1003bbcfc-0x1003bbdfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003bbcfc(__int64 param_1)

{
  String SVar1;
  long lVar2;
  Hasher HVar3;
  Hasher HVar4;
  long extraout_x8;
  undefined *puVar5;
  String *unaff_x20;
  long lVar6;
  char *pcVar7;
  undefined auStack_a0 [8];
  undefined1 auStack_98 [72];
  
  lVar2 = 0;
  FUN_10040211c();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar6 + 0x40));
  puVar5 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  HVar4.unknown = unaff_x20->str;
  SVar1 = *unaff_x20;
  pcVar7 = unaff_x20[1].str;
  Swift::Hasher::init(param_1);
  Swift::String::hash((Hasher)auStack_98,SVar1);
  HVar3.unknown = *(undefined **)(pcVar7 + 0x10);
  Swift::Hasher::_combine((__uint64)HVar3.unknown,HVar4);
  lVar2 = *(long *)(pcVar7 + 0x10);
  if (lVar2 != 0) {
    pcVar7 = pcVar7 + ((ulong)*(byte *)(lVar6 + 0x50) + 0x20 &
                      ((ulong)*(byte *)(lVar6 + 0x50) ^ 0xffffffffffffffff));
    lVar6 = *(long *)(lVar6 + 0x48);
    do {
      FUN_100029504(pcVar7,puVar5,FUN_10040211c);
      FUN_100407554(auStack_98);
      HVar3.unknown = puVar5;
      FUN_100029548(puVar5,FUN_10040211c);
      pcVar7 = pcVar7 + lVar6;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  Swift::Hasher::_finalize(HVar3);
  return;
}

