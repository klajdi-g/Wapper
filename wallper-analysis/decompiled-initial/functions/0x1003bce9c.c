// rea decompile_all
// name: FUN_1003bce9c
// address: 0x1003bce9c
// body: available
// range: 0x1003bce9c-0x1003bd107 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1003bce9c(undefined8 param_1)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  State SVar5;
  undefined *puVar6;
  long extraout_x8;
  ulong uVar7;
  long unaff_x20;
  ulong uVar8;
  undefined *puVar9;
  char *pcVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  char acStack_a0 [8];
  char local_71;
  
  lVar3 = 0;
  FUN_10040211c();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar12 + 0x40));
  pcVar10 = acStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar9 = *(undefined **)(unaff_x20 + 0x10);
  if ((*(char *)(unaff_x20 + 0x18) == '\x01') && (0x19 < *(ulong *)(puVar9 + 0x10))) {
    puVar4 = puVar9;
    _swift_bridgeObjectRetain();
    FUN_10031b430();
    _swift_bridgeObjectRelease(puVar9);
    puVar9 = puVar4;
  }
  else {
    _swift_bridgeObjectRetain(puVar9);
  }
  SVar5.unknown = &DAT_10055bd08;
  FUN_100002f94(&DAT_10055bd08,&DAT_100435de0);
  SwiftUI::State::get_wrappedValue(SVar5);
  puVar4 = PTR___swiftEmptyArrayStorage_100524190;
  if (local_71 != '\x0e') {
    uVar8 = *(ulong *)(puVar9 + 0x10);
    if (uVar8 != 0) {
      uVar7 = 0;
      do {
        if (*(ulong *)(puVar9 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1003bd108);
          (*pcVar2)();
        }
        uVar13 = (ulong)*(byte *)(lVar12 + 0x50) + 0x20 &
                 ((ulong)*(byte *)(lVar12 + 0x50) ^ 0xffffffffffffffff);
        lVar11 = *(long *)(lVar12 + 0x48);
        FUN_100029504(puVar9 + lVar11 * uVar7 + uVar13,pcVar10,FUN_10040211c);
        if (pcVar10[*(int *)(lVar3 + 0x24)] == local_71) {
          puVar6 = puVar4;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((ulong)puVar6 & 1) == 0) {
            FUN_1001c5c4c(0,*(long *)(puVar4 + 0x10) + 1,1);
          }
          uVar1 = *(ulong *)(puVar4 + 0x10);
          if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
            FUN_1001c5c4c(1 < *(ulong *)(puVar4 + 0x18),uVar1 + 1,1);
          }
          *(ulong *)(puVar4 + 0x10) = uVar1 + 1;
          FUN_100007e64(pcVar10,puVar4 + uVar1 * lVar11 + uVar13,FUN_10040211c);
        }
        else {
          FUN_100029548(pcVar10,FUN_10040211c);
        }
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
    }
    _swift_bridgeObjectRelease(puVar9);
    puVar9 = puVar4;
  }
  puVar4 = puVar9;
  FUN_1003bd108(puVar9,param_1);
  _swift_bridgeObjectRelease(puVar9);
  return puVar4;
}

