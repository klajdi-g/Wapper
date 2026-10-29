// rea decompile_all
// name: FUN_1003bc998
// address: 0x1003bc998
// body: available
// range: 0x1003bc998-0x1003bcb8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001003bcb80) */

undefined8 **** FUN_1003bc998(void)

{
  ulong uVar1;
  char cVar2;
  int iVar3;
  code *pcVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  long extraout_x8;
  long extraout_x12;
  char *pcVar11;
  long unaff_x20;
  undefined8 ****ppppuVar12;
  long lVar13;
  long lVar14;
  char acStack_90 [8];
  undefined8 ***local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  lVar5 = 0;
  FUN_10040211c();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  pcVar11 = acStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar13 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x10);
  puVar7 = PTR___swiftEmptyArrayStorage_100524190;
  if (lVar13 != 0) {
    iVar3 = *(int *)(lVar5 + 0x24);
    lVar5 = *(long *)(unaff_x20 + 0x10) +
            ((ulong)*(byte *)(extraout_x12 + 0x50) + 0x20 &
            ((ulong)*(byte *)(extraout_x12 + 0x50) ^ 0xffffffffffffffff));
    lVar14 = *(long *)(extraout_x12 + 0x48);
    do {
      FUN_100029504(lVar5,pcVar11,FUN_10040211c);
      cVar2 = pcVar11[iVar3];
      FUN_100029548(pcVar11,FUN_10040211c);
      if (cVar2 != '\x0e') {
        puVar6 = puVar7;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar8 = puVar7;
        if (((ulong)puVar6 & 1) == 0) {
          puVar8 = (undefined *)0x0;
          FUN_1001c5864(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
        }
        uVar1 = *(ulong *)(puVar8 + 0x10);
        puVar7 = puVar8;
        if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
          puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
          FUN_1001c5864(puVar7,uVar1 + 1,1,puVar8);
        }
        *(ulong *)(puVar7 + 0x10) = uVar1 + 1;
        puVar7[uVar1 + 0x20] = cVar2;
      }
      lVar5 = lVar5 + lVar14;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  puVar6 = puVar7;
  FUN_10020cb30();
  _swift_bridgeObjectRelease(puVar7);
  ppppuVar12 = *(undefined8 *****)(puVar6 + 0x10);
  if (ppppuVar12 == (undefined8 ****)0x0) {
    _swift_bridgeObjectRelease(puVar6);
    ppppuVar9 = (undefined8 ****)PTR___swiftEmptyArrayStorage_100524190;
  }
  else {
    ppppuVar9 = ppppuVar12;
    FUN_1001c5af8(ppppuVar12,0);
    ppppuVar10 = &local_88;
    FUN_1001ab0e0(ppppuVar10,ppppuVar9 + 4,ppppuVar12,puVar6);
    FUN_10002f6ec(local_88,uStack_80,local_78,uStack_70,local_68);
    if (ppppuVar10 != ppppuVar12) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1003bcb28);
      (*pcVar4)();
    }
  }
  local_88 = ppppuVar9;
  _swift_retain(ppppuVar9);
  FUN_1003bb91c(&local_88);
  _swift_release(ppppuVar9);
  return (undefined8 ****)local_88;
}

