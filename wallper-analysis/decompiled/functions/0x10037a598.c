// rea decompile_all
// name: FUN_10037a598
// address: 0x10037a598
// body: available
// range: 0x10037a598-0x10037a7cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10037a598(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong local_80;
  long local_78;
  long local_70;
  long local_68;
  
  lVar3 = 0;
  FUN_10040211c();
  local_68 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_68 + 0x40));
  lVar10 = (long)&local_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_70 = lVar10;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = lVar10 - extraout_x12;
  FUN_10025f200();
  uVar11 = *(ulong *)(lVar3 + 0x10);
  puVar7 = PTR___swiftEmptyArrayStorage_100524190;
  if (uVar11 != 0) {
    uVar14 = 0;
    puVar9 = (ulong *)(lVar3 + 0x28);
    local_80 = uVar11;
    local_78 = lVar3;
    do {
      if (*(ulong *)(lVar3 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10037a7cc);
        (*pcVar2)();
      }
      uVar12 = *puVar9;
      lVar4 = 0;
      FUN_100387a1c();
      lVar4 = *(long *)(unaff_x20 + *(int *)(lVar4 + 0x14));
      if (*(long *)(lVar4 + 0x10) != 0) {
        uVar13 = puVar9[-1];
        _swift_bridgeObjectRetain(uVar12);
        _swift_bridgeObjectRetain(lVar4);
        uVar8 = uVar12;
        FUN_10000464c(uVar13);
        lVar1 = local_70;
        if ((uVar8 & 1) == 0) {
          _swift_bridgeObjectRelease(lVar4);
          _swift_bridgeObjectRelease(uVar12);
        }
        else {
          lVar3 = *(long *)(local_68 + 0x48);
          FUN_100029504(*(long *)(lVar4 + 0x38) + lVar3 * uVar13,local_70,FUN_10040211c);
          _swift_bridgeObjectRelease(lVar4);
          _swift_bridgeObjectRelease(uVar12);
          FUN_100007e64(lVar1,lVar10,FUN_10040211c);
          puVar5 = puVar7;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar6 = puVar7;
          if (((ulong)puVar5 & 1) == 0) {
            puVar6 = (undefined *)0x0;
            FUN_1001c4344(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
          }
          uVar12 = *(ulong *)(puVar6 + 0x10);
          puVar7 = puVar6;
          if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar12) {
            puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
            FUN_1001c4344(puVar7,uVar12 + 1,1,puVar6);
          }
          uVar11 = local_80;
          *(ulong *)(puVar7 + 0x10) = uVar12 + 1;
          FUN_100007e64(lVar10,puVar7 + uVar12 * lVar3 +
                                        ((ulong)*(byte *)(local_68 + 0x50) + 0x20 &
                                        ((ulong)*(byte *)(local_68 + 0x50) ^ 0xffffffffffffffff)),
                        FUN_10040211c);
          lVar3 = local_78;
        }
      }
      uVar14 = uVar14 + 1;
      puVar9 = puVar9 + 2;
    } while (uVar11 != uVar14);
  }
  _swift_bridgeObjectRelease(lVar3);
  return puVar7;
}

