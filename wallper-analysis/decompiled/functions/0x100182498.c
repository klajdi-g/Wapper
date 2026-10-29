// rea decompile_all
// name: FUN_100182498
// address: 0x100182498
// body: available
// range: 0x100182498-0x1001826db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100182498(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  NSArray *pNVar6;
  NSString *pNVar7;
  ulong uVar8;
  undefined *puVar9;
  long unaff_x20;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar2 = *(long *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::dominantColorTuples);
  lVar10 = *(long *)(lVar2 + 0x10);
  puVar9 = PTR___swiftEmptyArrayStorage_100524190;
  if (lVar10 != 0) {
    _swift_bridgeObjectRetain();
    puVar11 = (undefined8 *)(lVar2 + 0x30);
    puVar9 = PTR___swiftEmptyArrayStorage_100524190;
    do {
      uVar14 = puVar11[-1];
      uVar13 = puVar11[-2];
      uVar15 = *puVar11;
      puVar3 = &DAT_10054aac0;
      FUN_100002f94(&DAT_10054aac0,&DAT_10042a890);
      _swift_initStackObject();
      *(undefined8 *)(puVar3 + 0x18) = 6;
      *(undefined8 *)(puVar3 + 0x10) = 3;
      *(undefined8 *)(puVar3 + 0x28) = uVar14;
      *(undefined8 *)(puVar3 + 0x20) = uVar13;
      *(undefined8 *)(puVar3 + 0x30) = uVar15;
      lVar12 = *(long *)(puVar9 + 0x10);
      if (SCARRY8(lVar12,3)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1001826d4);
        (*pcVar1)();
      }
      puVar4 = puVar9;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((int)puVar4 == 0) || (uVar8 = *(ulong *)(puVar9 + 0x18) >> 1, (long)uVar8 < lVar12 + 3))
      {
        FUN_1001c4470();
        uVar8 = *(ulong *)(puVar4 + 0x18) >> 1;
        puVar9 = puVar4;
      }
      lVar12 = *(long *)(puVar9 + 0x10);
      if (uVar8 - lVar12 < 3) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1001826d8);
        (*pcVar1)();
      }
      uVar14 = *(undefined8 *)(puVar3 + 0x28);
      uVar13 = *(undefined8 *)(puVar3 + 0x20);
      *(undefined8 *)(puVar9 + lVar12 * 8 + 0x30) = *(undefined8 *)(puVar3 + 0x30);
      *(undefined8 *)(puVar9 + lVar12 * 8 + 0x28) = uVar14;
      *(undefined8 *)(puVar9 + lVar12 * 8 + 0x20) = uVar13;
      _swift_release(puVar3);
      if (SCARRY8(*(long *)(puVar9 + 0x10),3)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1001826dc);
        (*pcVar1)();
      }
      puVar11 = puVar11 + 3;
      *(long *)(puVar9 + 0x10) = *(long *)(puVar9 + 0x10) + 3;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    _swift_bridgeObjectRelease(lVar2);
  }
  IVar5 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  pNVar6 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(puVar9);
  pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  NSUserDefaults::setObject_forKey_(IVar5,pNVar6,pNVar7);
  IVar5 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  NSUserDefaults::setBool_forKey_(IVar5,1,pNVar7);
  return 0;
}

