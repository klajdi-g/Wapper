// rea decompile_all
// name: FUN_10015c480
// address: 0x10015c480
// body: available
// range: 0x10015c480-0x10015c647 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10015c480(undefined8 param_1,char param_2)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined8 uVar3;
  void *pvVar4;
  String SVar5;
  undefined1 uVar6;
  long lVar7;
  char *pcVar8;
  void *pvVar9;
  long unaff_x20;
  undefined8 uVar10;
  long lVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  undefined8 local_68;
  long lStack_60;
  
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7Wallper13LyricsManager::duration);
  *puVar1 = param_1;
  *(char *)(puVar1 + 1) = param_2;
  if (param_2 != '\x01') {
    puVar1 = (undefined8 *)(unaff_x20 + _TtC7Wallper13LyricsManager::track);
    lVar11 = puVar1[1];
    if (lVar11 != 0) {
      pcVar2 = ((String *)(puVar1 + 4))->str;
      uVar3 = puVar1[5];
      SVar5 = *(String *)(puVar1 + 4);
      pcVar8 = ((String *)(puVar1 + 2))->str;
      pvVar4 = (void *)puVar1[3];
      SVar13 = *(String *)(puVar1 + 2);
      uVar10 = *puVar1;
      local_68 = uVar10;
      lStack_60 = lVar11;
      _swift_bridgeObjectRetain(lVar11);
      pvVar9 = pvVar4;
      FUN_100163f7c(uVar10,lVar11,pcVar8,pvVar4,pcVar2,uVar3);
      SVar12.bridgeObject = (void *)0xe100000000000000;
      SVar12.str = (char *)0x7c;
      SVar14.bridgeObject = pvVar9;
      SVar14.str = pcVar8;
      Swift::String::append(SVar12,SVar14);
      lVar7 = lStack_60;
      _swift_bridgeObjectRetain(lStack_60);
      SVar15.bridgeObject = pvVar9;
      SVar15.str = pcVar8;
      Swift::String::append(SVar13,SVar15);
      _swift_bridgeObjectRelease(lVar7);
      lVar7 = lStack_60;
      _swift_bridgeObjectRetain(lStack_60);
      SVar13.bridgeObject = (void *)0xe100000000000000;
      SVar13.str = (char *)0x7c;
      SVar16.bridgeObject = pvVar9;
      SVar16.str = pcVar8;
      Swift::String::append(SVar13,SVar16);
      _swift_bridgeObjectRelease(lVar7);
      lVar7 = lStack_60;
      _swift_bridgeObjectRetain(lStack_60);
      SVar17.bridgeObject = pvVar9;
      SVar17.str = pcVar8;
      Swift::String::append(SVar5,SVar17);
      _swift_bridgeObjectRelease(uVar3);
      _swift_bridgeObjectRelease(pvVar4);
      _swift_bridgeObjectRelease(lVar11);
      _swift_bridgeObjectRelease(lVar7);
      lVar11 = lStack_60;
      uVar3 = local_68;
      _swift_beginAccess(unaff_x20 + _TtC7Wallper13LyricsManager::unavailable,&local_68,0x21,0);
      lVar7 = lVar11;
      FUN_100227384(uVar3);
      _swift_endAccess(&local_68);
      _swift_bridgeObjectRelease(lVar11);
      if (lVar7 == 0) {
        if (*(char *)(unaff_x20 + _TtC7Wallper13LyricsManager::provisional) != '\x01') {
          return;
        }
        uVar6 = 1;
      }
      else {
        _swift_bridgeObjectRelease(lVar7);
        uVar6 = *(undefined1 *)(unaff_x20 + _TtC7Wallper13LyricsManager::provisional);
      }
      FUN_10015c704(0,uVar6);
    }
  }
  return;
}

