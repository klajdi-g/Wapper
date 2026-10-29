// rea decompile_all
// name: FUN_100004d7c
// address: 0x100004d7c
// body: available
// range: 0x100004d7c-0x100004ea3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_100004d7c(undefined8 param_1,ulong param_2,code *param_3,undefined8 param_4,undefined8 param_5)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  ulong uVar4;
  long unaff_x20;
  code *pcVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined8 local_80;
  code *local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  lVar2 = 0;
  local_80 = param_1;
  local_78 = param_3;
  local_70 = param_4;
  local_68 = param_5;
  (*param_3)();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)&local_80 - extraout_x8;
  uVar4 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar4 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    uVar8 = 0;
  }
  else {
    lVar6 = *(long *)(lVar9 + 0x48);
    pcVar5 = *(code **)(lVar9 + 0x10);
    do {
      (*pcVar5)(lVar7,*(long *)(unaff_x20 + 0x30) + lVar6 * param_2,lVar2);
      uVar3 = local_70;
      FUN_1000036d0(local_70,local_78,local_68);
      bVar1 = Swift::Equatable::___infix(lVar7,local_80,lVar2,uVar3);
      uVar8 = (ulong)bVar1;
      (**(code **)(lVar9 + 8))(lVar7,lVar2);
      if (bVar1) break;
      param_2 = param_2 + 1 & ~uVar4;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  }
  auVar10._8_8_ = uVar8;
  auVar10._0_8_ = param_2;
  return auVar10;
}

