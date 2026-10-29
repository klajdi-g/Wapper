// rea decompile_all
// name: FUN_1003bba18
// address: 0x1003bba18
// body: available
// range: 0x1003bba18-0x1003bbb0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003bba18(Hasher param_1,void *param_2,long param_3)

{
  long lVar1;
  Hasher HVar2;
  long extraout_x8;
  undefined *puVar3;
  undefined *puVar4;
  String SVar5;
  undefined auStack_90 [8];
  undefined1 auStack_88 [72];
  
  lVar1 = 0;
  FUN_10040211c();
  lVar1 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar1 + 0x40));
  puVar3 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  Swift::Hasher::init(0);
  SVar5.bridgeObject = param_2;
  SVar5.str = param_1.unknown;
  Swift::String::hash((Hasher)auStack_88,SVar5);
  puVar4 = *(undefined **)(param_3 + 0x10);
  HVar2.unknown = puVar4;
  Swift::Hasher::_combine((__uint64)puVar4,param_1);
  if (puVar4 != (undefined *)0x0) {
    param_3 = param_3 + ((ulong)*(byte *)(lVar1 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar1 + 0x50) ^ 0xffffffffffffffff));
    lVar1 = *(long *)(lVar1 + 0x48);
    do {
      FUN_100029504(param_3,puVar3,FUN_10040211c);
      FUN_100407554(auStack_88);
      HVar2.unknown = puVar3;
      FUN_100029548(puVar3,FUN_10040211c);
      param_3 = param_3 + lVar1;
      puVar4 = puVar4 + -1;
    } while (puVar4 != (undefined *)0x0);
  }
  Swift::Hasher::_finalize(HVar2);
  return;
}

