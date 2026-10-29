// rea decompile_all
// name: FUN_1001ebf14
// address: 0x1001ebf14
// body: available
// range: 0x1001ebf14-0x1001ec05b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001ebf14(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long extraout_x8;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  puVar1 = &DAT_100556a40;
  FUN_100002f94(&DAT_100556a40,&DAT_10042abc0);
  lVar5 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar5 + 0x10))(auStack_70 + -extraout_x8,param_1,puVar1);
  _swift_beginAccess(param_2 + 0x78,auStack_68,0x21,0);
  uVar4 = *(ulong *)(param_2 + 0x78);
  uVar2 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(param_2 + 0x78) = uVar4;
  uVar3 = uVar4;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    FUN_1001c4b8c(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
    *(ulong *)(param_2 + 0x78) = uVar3;
  }
  uVar2 = *(ulong *)(uVar3 + 0x10);
  uVar4 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    FUN_1001c4b8c(uVar4,uVar2 + 1,1,uVar3);
  }
  *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
  (**(code **)(lVar5 + 0x20))
            (uVar4 + ((ulong)*(byte *)(lVar5 + 0x50) + 0x20 &
                     ((ulong)*(byte *)(lVar5 + 0x50) ^ 0xffffffffffffffff)) +
             *(long *)(lVar5 + 0x48) * uVar2,auStack_70 + -extraout_x8,puVar1);
  *(ulong *)(param_2 + 0x78) = uVar4;
  _swift_endAccess(auStack_68);
  return;
}

