// rea decompile_all
// name: FUN_1000076ec
// address: 0x1000076ec
// body: available
// range: 0x1000076ec-0x100007883 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1000076ec(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  code *pcVar5;
  undefined *puVar6;
  _DictionaryStorage *this;
  undefined *puVar7;
  ulong uVar8;
  URL UVar9;
  long extraout_x8;
  ulong uVar10;
  ulong uVar11;
  undefined *capacity;
  long lVar12;
  long alStack_70 [2];
  
  puVar6 = &DAT_10054a578;
  FUN_100002f94(&DAT_10054a578,&DAT_10041b590);
  lVar12 = *(long *)(puVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar11 = (long)alStack_70 - extraout_x8;
  capacity = *(undefined **)(param_1 + 0x10);
  puVar7 = PTR___swiftEmptyDictionarySingleton_100524198;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_10054a580;
    FUN_100002f94(&DAT_10054a580,&DAT_10041b598);
    puVar7 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    iVar4 = *(int *)(puVar6 + 0x30);
    param_1 = param_1 + ((ulong)*(byte *)(lVar12 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar12 + 0x50) ^ 0xffffffffffffffff));
    alStack_70[1] = *(long *)(lVar12 + 0x48);
    _swift_retain();
    do {
      uVar10 = uVar11;
      FUN_1000087e4(param_1,uVar11,&DAT_10054a578,&DAT_10041b590);
      uVar8 = uVar11;
      FUN_1000048c0();
      if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100007880);
        (*pcVar5)();
      }
      uVar2 = *(undefined8 *)(uVar11 + (long)iVar4);
      uVar3 = ((undefined8 *)(uVar11 + (long)iVar4))[1];
      uVar10 = uVar8 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar7 + uVar10 + 0x40) = *(ulong *)(puVar7 + uVar10 + 0x40) | 1L << (uVar8 & 0x3f)
      ;
      lVar12 = *(long *)(puVar7 + 0x30);
      UVar9 = Foundation::URL::typeMetadataAccessor();
      (**(code **)(*(long *)(UVar9.unknown + -8) + 0x20))
                (lVar12 + *(long *)(*(long *)(UVar9.unknown + -8) + 0x48) * uVar8,uVar11,
                 UVar9.unknown);
      puVar1 = (undefined8 *)(*(long *)(puVar7 + 0x38) + uVar8 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      if (SCARRY8(*(long *)(puVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100007884);
        (*pcVar5)();
      }
      *(long *)(puVar7 + 0x10) = *(long *)(puVar7 + 0x10) + 1;
      param_1 = param_1 + alStack_70[1];
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar7);
  }
  return puVar7;
}

