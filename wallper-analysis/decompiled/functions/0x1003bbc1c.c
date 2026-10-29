// rea decompile_all
// name: FUN_1003bbc1c
// address: 0x1003bbc1c
// body: available
// range: 0x1003bbc1c-0x1003bbcfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003bbc1c(Hasher param_1)

{
  long lVar1;
  Hasher HVar2;
  long extraout_x8;
  String *unaff_x20;
  char *pcVar3;
  long lVar4;
  
  lVar1 = 0;
  FUN_10040211c();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar4 + 0x40));
  HVar2.unknown = unaff_x20->str;
  pcVar3 = unaff_x20[1].str;
  Swift::String::hash(param_1,*unaff_x20);
  Swift::Hasher::_combine(*(__uint64 *)(pcVar3 + 0x10),HVar2);
  lVar1 = *(long *)(pcVar3 + 0x10);
  if (lVar1 != 0) {
    pcVar3 = pcVar3 + ((ulong)*(byte *)(lVar4 + 0x50) + 0x20 &
                      ((ulong)*(byte *)(lVar4 + 0x50) ^ 0xffffffffffffffff));
    lVar4 = *(long *)(lVar4 + 0x48);
    do {
      FUN_100029504(pcVar3,&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                    FUN_10040211c);
      FUN_100407554(param_1.unknown);
      FUN_100029548(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                    FUN_10040211c);
      pcVar3 = pcVar3 + lVar4;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return;
}

