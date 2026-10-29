// rea decompile_all
// name: FUN_1001eacd4
// address: 0x1001eacd4
// body: available
// range: 0x1001eacd4-0x1001eae7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001eacd4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  URL UVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  long extraout_x8;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_70 [32];
  
  puVar1 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_70 + -extraout_x8;
  _swift_beginAccess(param_1 + _TtC7Wallper14PreviewManager::inFlightIDs,auStack_70,0x21,0);
  uVar5 = param_3;
  FUN_100227384(param_2,param_3);
  _swift_endAccess(auStack_70);
  _swift_bridgeObjectRelease(uVar5);
  _swift_beginAccess(param_1 + _TtC7Wallper14PreviewManager::failedIDs,auStack_70,0x21,0);
  FUN_10027ea68(param_2,param_3);
  _swift_endAccess(auStack_70);
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar7 = *(long *)(UVar2.unknown + -8);
  (**(code **)(lVar7 + 0x10))(puVar6,param_4,UVar2.unknown);
  (**(code **)(lVar7 + 0x38))(puVar6,0,1,UVar2.unknown);
  puVar1 = &DAT_10042ae68;
  _swift_getKeyPath(&DAT_10042ae68);
  puVar3 = &DAT_10042ae90;
  _swift_getKeyPath(&DAT_10042ae90);
  _swift_bridgeObjectRetain(param_3);
  pcVar4 = (code *)auStack_70;
  Combine::Published::_modify_subscript((Published *)UVar2.unknown,pcVar4,param_1,puVar1,puVar3);
  FUN_100122fac(puVar6,param_2,param_3);
  (*pcVar4)(auStack_70,0);
  _swift_release(puVar1);
  _swift_release(puVar3);
  return;
}

