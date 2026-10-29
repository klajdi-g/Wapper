// rea decompile_all
// name: FUN_10000d898
// address: 0x10000d898
// body: available
// range: 0x10000d898-0x10000da2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


String FUN_10000d898(void)

{
  ulong uVar1;
  byte bVar2;
  CharacterSet CVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  void *pvVar8;
  long extraout_x8;
  long extraout_x8_00;
  CharacterSet CVar9;
  CharacterSet in;
  long lVar10;
  long lVar11;
  String SVar12;
  undefined *local_50;
  code *pcStack_48;
  
  CVar3 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar11 = *(long *)(CVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar11 + 0x40));
  in.unknown = (undefined *)((long)&local_50 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar4 = &DAT_10054ac40;
  FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)in.unknown - extraout_x8_00;
  FUN_10000c224(lVar10);
  lVar5 = 0;
  FUN_10040211c();
  lVar6 = lVar10;
  (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar10,1,lVar5);
  if ((int)lVar6 == 1) {
    FUN_10002a29c(lVar10,&DAT_10054ac40,&DAT_10041ce70);
  }
  else {
    bVar2 = *(byte *)(lVar10 + *(int *)(lVar5 + 0x24));
    CVar9.unknown = (undefined *)(ulong)bVar2;
    pcVar7 = FUN_10040211c;
    FUN_100029548(lVar10);
    if (bVar2 != 0xe) {
      FUN_100402278();
      local_50 = CVar9.unknown;
      pcStack_48 = pcVar7;
      Foundation::CharacterSet::get_whitespacesAndNewlines(CVar9);
      FUN_100026df4();
      SVar12 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
      pvVar8 = SVar12.bridgeObject;
      (**(code **)(lVar11 + 8))(in.unknown,CVar3.unknown);
      _swift_bridgeObjectRelease(pcVar7);
      uVar1 = (ulong)SVar12.str & 0xffffffffffff;
      if (((ulong)pvVar8 & 0x2000000000000000) != 0) {
        uVar1 = (ulong)pvVar8 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) {
        return SVar12;
      }
      _swift_bridgeObjectRelease(pvVar8);
    }
  }
  return (String)ZEXT816(0);
}

