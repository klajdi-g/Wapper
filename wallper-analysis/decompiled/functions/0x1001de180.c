// rea decompile_all
// name: FUN_1001de180
// address: 0x1001de180
// body: available
// range: 0x1001de180-0x1001de2c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001de180(void)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  undefined8 *puVar7;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [32];
  
  puVar3 = &DAT_10042ae68;
  _swift_getKeyPath(&DAT_10042ae68);
  puVar4 = &DAT_10042ae90;
  _swift_getKeyPath(&DAT_10042ae90);
  pcVar5 = (code *)auStack_60;
  puVar7 = unaff_x20;
  Combine::Published::_modify_subscript();
  _swift_bridgeObjectRelease(*unaff_x20);
  puVar1 = PTR___swiftEmptyDictionarySingleton_100524198;
  *unaff_x20 = PTR___swiftEmptyDictionarySingleton_100524198;
  (*pcVar5)(auStack_60,0);
  _swift_release(puVar3);
  _swift_release(puVar4);
  lVar2 = _TtC7Wallper14PreviewManager::validatedIDs;
  _swift_beginAccess((long)puVar7 + _TtC7Wallper14PreviewManager::validatedIDs,auStack_60,1,0);
  puVar3 = PTR___swiftEmptySetSingleton_1005241a0;
  uVar6 = *(undefined8 *)((long)puVar7 + lVar2);
  *(undefined **)((long)puVar7 + lVar2) = PTR___swiftEmptySetSingleton_1005241a0;
  _swift_bridgeObjectRelease(uVar6);
  lVar2 = _TtC7Wallper14PreviewManager::failedIDs;
  _swift_beginAccess((long)puVar7 + _TtC7Wallper14PreviewManager::failedIDs,auStack_78,1,0);
  uVar6 = *(undefined8 *)((long)puVar7 + lVar2);
  *(undefined **)((long)puVar7 + lVar2) = puVar1;
  _swift_bridgeObjectRelease(uVar6);
  lVar2 = _TtC7Wallper14PreviewManager::transparentIDs;
  _swift_beginAccess((long)puVar7 + _TtC7Wallper14PreviewManager::transparentIDs,auStack_90,1,0);
  uVar6 = *(undefined8 *)((long)puVar7 + lVar2);
  *(undefined **)((long)puVar7 + lVar2) = puVar3;
  _swift_bridgeObjectRelease(uVar6);
  lVar2 = _TtC7Wallper14PreviewManager::transparentRetryCount;
  _swift_beginAccess((long)puVar7 + _TtC7Wallper14PreviewManager::transparentRetryCount,auStack_a8,1
                     ,0);
  uVar6 = *(undefined8 *)((long)puVar7 + lVar2);
  *(undefined **)((long)puVar7 + lVar2) = puVar1;
  _swift_bridgeObjectRelease(uVar6);
  return;
}

