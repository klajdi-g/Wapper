// rea decompile_all
// name: FUN_10021815c
// address: 0x10021815c
// body: available
// range: 0x10021815c-0x10021830b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_10021815c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  Date DVar3;
  ulong uVar4;
  ulong uVar5;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *puVar6;
  long unaff_x20;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_80;
  undefined8 auStack_78 [3];
  
  puVar2 = &DAT_100556908;
  FUN_100002f94(&DAT_100556908,&DAT_10042a888);
  lVar8 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = (undefined8 *)((long)&uStack_80 + -extraout_x8);
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar9 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar9 + 0x40));
  _swift_bridgeObjectRetain(param_2);
  Foundation::Date::init();
  iVar1 = *(int *)(puVar2 + 0x30);
  *puVar6 = param_1;
  *(undefined8 *)((long)auStack_78 + -extraout_x8) = param_2;
  (**(code **)(lVar9 + 0x20))
            ((long)puVar6 + (long)iVar1,(long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0),
             DVar3.unknown);
  lVar9 = _TtC7Wallper19ShuffleQueueManager::ownApplies;
  _swift_beginAccess(unaff_x20 + _TtC7Wallper19ShuffleQueueManager::ownApplies,auStack_78,0x21,0);
  uVar7 = *(ulong *)(unaff_x20 + lVar9);
  uVar4 = uVar7;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(unaff_x20 + lVar9) = uVar7;
  uVar5 = uVar7;
  if ((uVar4 & 1) == 0) {
    uVar5 = 0;
    FUN_1001c4d2c(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
    *(ulong *)(unaff_x20 + lVar9) = uVar5;
  }
  uVar4 = *(ulong *)(uVar5 + 0x10);
  uVar7 = uVar5;
  if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar4) {
    uVar7 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
    FUN_1001c4d2c(uVar7,uVar4 + 1,1,uVar5);
  }
  *(ulong *)(uVar7 + 0x10) = uVar4 + 1;
  FUN_100007e1c(puVar6,uVar7 + ((ulong)*(byte *)(lVar8 + 0x50) + 0x20 &
                               ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff)) +
                       *(long *)(lVar8 + 0x48) * uVar4,&DAT_100556908,&DAT_10042a888);
  *(ulong *)(unaff_x20 + lVar9) = uVar7;
  _swift_endAccess(auStack_78);
  return;
}

