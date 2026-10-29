// rea decompile_all
// name: FUN_100268ef4
// address: 0x100268ef4
// body: available
// range: 0x100268ef4-0x1002690db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100268ef4(void)

{
  char *pcVar1;
  ulong uVar2;
  UTType UVar3;
  UTType UVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined1 *puVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  String filenameExtension;
  undefined1 auStack_70 [8];
  long local_68;
  
  puVar8 = &DAT_100558878;
  FUN_100002f94(&DAT_100558878,&DAT_10042d0a0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_70 + -extraout_x8;
  UVar3 = UniformTypeIdentifiers::UTType::typeMetadataAccessor();
  lVar12 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar12 + 0x40));
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = (long)(puVar9 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  puVar13 = &DAT_100558bb8;
  lVar14 = 3;
  puVar8 = PTR___swiftEmptyArrayStorage_100524190;
  local_68 = lVar10;
  do {
    pcVar1 = (char *)puVar13[-1];
    puVar6 = (undefined *)*puVar13;
    UVar4.unknown = puVar6;
    _swift_bridgeObjectRetain();
    UniformTypeIdentifiers::UTType::get_movie(UVar4);
    filenameExtension.bridgeObject = puVar6;
    filenameExtension.str = pcVar1;
    UniformTypeIdentifiers::UTType::_init
              (filenameExtension,(UTType)(puVar9 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)));
    puVar5 = puVar9;
    (**(code **)(lVar12 + 0x30))(puVar9,1,UVar3.unknown);
    if ((int)puVar5 == 1) {
      FUN_1002695d0(puVar9);
    }
    else {
      pcVar11 = *(code **)(lVar12 + 0x20);
      (*pcVar11)(lVar10,puVar9,UVar3.unknown);
      puVar6 = puVar8;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar7 = puVar8;
      if (((ulong)puVar6 & 1) == 0) {
        puVar7 = (undefined *)0x0;
        FUN_1001c4774(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
      }
      uVar2 = *(ulong *)(puVar7 + 0x10);
      puVar8 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar2) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
        FUN_1001c4774(puVar8,uVar2 + 1,1,puVar7);
      }
      lVar10 = local_68;
      *(ulong *)(puVar8 + 0x10) = uVar2 + 1;
      (*pcVar11)(puVar8 + *(long *)(lVar12 + 0x48) * uVar2 +
                          ((ulong)*(byte *)(lVar12 + 0x50) + 0x20 &
                          ((ulong)*(byte *)(lVar12 + 0x50) ^ 0xffffffffffffffff)),local_68,
                 UVar3.unknown);
    }
    puVar13 = puVar13 + 2;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  return puVar8;
}

