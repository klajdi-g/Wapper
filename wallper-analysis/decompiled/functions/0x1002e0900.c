// rea decompile_all
// name: FUN_1002e0900
// address: 0x1002e0900
// body: available
// range: 0x1002e0900-0x1002e0ca3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_1002e0900(long param_1,ID param_2)

{
  _HashTable _Var1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined *puVar9;
  code *pcVar10;
  URL UVar11;
  Bucket BVar12;
  NSString *pNVar13;
  URL UVar14;
  ID IVar15;
  long lVar16;
  long extraout_x8;
  undefined1 *puVar17;
  long lVar18;
  ulong uVar19;
  ulong *puVar20;
  long extraout_x12;
  undefined *puVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  String SVar25;
  
  UVar11 = Foundation::URL::typeMetadataAccessor();
  lVar16 = *(long *)(UVar11.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar16 + 0x40));
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar9 = PTR___swiftEmptyArrayStorage_100524190;
  puVar17 = &stack0xffffffffffffff20 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0) + -extraout_x12;
  lVar23 = *(long *)(param_1 + 0x10);
  if (lVar23 != 0) {
    FUN_1001c5fac(0,lVar23,0);
    _Var1.unknown = (undefined *)(param_1 + 0x40);
    BVar12 = Swift::_HashTable::get_startBucket(_Var1);
    lVar18 = 0;
    iVar8 = *(int *)(param_1 + 0x24);
    do {
      if ((ulong)BVar12.unknown >> ((ulong)*(byte *)(param_1 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x1002e0c90);
        (*pcVar10)();
      }
      uVar24 = (ulong)BVar12.unknown >> 6;
      uVar19 = 1L << ((ulong)BVar12.unknown & 0x3f);
      if ((*(ulong *)(_Var1.unknown + uVar24 * 8) & uVar19) == 0) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x1002e0c94);
        (*pcVar10)();
      }
      if (iVar8 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x1002e0c98);
        (*pcVar10)();
      }
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x30) + (long)BVar12.unknown * 0x10);
      uVar3 = *puVar2;
      uVar6 = puVar2[1];
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x38) + (long)BVar12.unknown * 0x10);
      uVar4 = *puVar2;
      uVar7 = puVar2[1];
      _swift_bridgeObjectRetain_n(uVar6,2);
      _swift_bridgeObjectRetain_n(uVar7,2);
      pNVar13 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      UVar14.unknown =
           (undefined *)objc_stub::URLForApplicationWithBundleIdentifier_(param_2,pNVar13);
      IVar15 = 0;
      if (UVar14.unknown != (undefined *)0x0) {
        Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar14);
        UVar14.unknown = puVar17;
        (**(code **)(lVar16 + 0x20))
                  (puVar17,&stack0xffffffffffffff20 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                   UVar11.unknown);
        SVar25 = Foundation::URL::get_path(UVar14);
        pNVar13 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        _swift_bridgeObjectRelease(SVar25.bridgeObject);
        IVar15 = objc_stub::iconForFile_(param_2,pNVar13);
        (**(code **)(lVar16 + 8))(puVar17,UVar11.unknown);
      }
      _swift_bridgeObjectRelease(uVar7);
      _swift_bridgeObjectRelease(uVar6);
      uVar5 = *(ulong *)(puVar9 + 0x10);
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar5) {
        FUN_1001c5fac(1 < *(ulong *)(puVar9 + 0x18),uVar5 + 1,1);
      }
      *(ulong *)(puVar9 + 0x10) = uVar5 + 1;
      *(undefined8 *)(puVar9 + uVar5 * 0x28 + 0x20) = uVar3;
      *(undefined8 *)(puVar9 + uVar5 * 0x28 + 0x28) = uVar6;
      *(undefined8 *)(puVar9 + uVar5 * 0x28 + 0x30) = uVar4;
      *(undefined8 *)(puVar9 + uVar5 * 0x28 + 0x38) = uVar7;
      *(ID *)(puVar9 + uVar5 * 0x28 + 0x40) = IVar15;
      puVar21 = (undefined *)(1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f));
      if (puVar21 <= BVar12.unknown) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x1002e0c9c);
        (*pcVar10)();
      }
      if ((*(ulong *)(_Var1.unknown + uVar24 * 8) & uVar19) == 0) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x1002e0ca0);
        (*pcVar10)();
      }
      if (iVar8 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x1002e0ca4);
        (*pcVar10)();
      }
      uVar19 = *(ulong *)(_Var1.unknown + uVar24 * 8) & -2L << ((ulong)BVar12.unknown & 0x3f);
      if (uVar19 == 0) {
        lVar22 = uVar24 << 6;
        puVar20 = (ulong *)(param_1 + 0x48 + uVar24 * 8);
        do {
          uVar24 = uVar24 + 1;
          if ((ulong)(puVar21 + 0x3f) >> 6 <= uVar24) {
            FUN_1001b0e68(BVar12.unknown,iVar8,0);
            goto LAB_1002e0a0c;
          }
          uVar19 = *puVar20;
          lVar22 = lVar22 + 0x40;
          puVar20 = puVar20 + 1;
        } while (uVar19 == 0);
        FUN_1001b0e68(BVar12.unknown,iVar8,0);
        uVar24 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
        uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
        uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
        uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
        puVar21 = (undefined *)(LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) + lVar22);
      }
      else {
        uVar24 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
        uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
        uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
        uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
        puVar21 = (undefined *)
                  (LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) |
                  (ulong)BVar12.unknown & 0x7fffffffffffffc0);
      }
LAB_1002e0a0c:
      lVar18 = lVar18 + 1;
      BVar12.unknown = puVar21;
    } while (lVar18 != lVar23);
  }
  return puVar9;
}

