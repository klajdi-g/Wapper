// rea decompile_all
// name: FUN_10033d76c
// address: 0x10033d76c
// body: available
// range: 0x10033d76c-0x10033d9f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10033d76c(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined *puVar6;
  Alignment AVar7;
  Animation AVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined8 uVar10;
  Animation AVar11;
  undefined1 local_60;
  undefined7 uStack_5f;
  undefined *puStack_58;
  
  uVar10 = *(undefined8 *)(unaff_x20 + 8);
  puVar6 = &DAT_100432368;
  _swift_getKeyPath();
  AVar7.unknown = &DAT_100432390;
  _swift_getKeyPath();
  puVar9 = puVar6;
  Combine::Published::_get_subscript(&local_60,uVar10,puVar6,AVar7.unknown);
  _swift_release(puVar6);
  _swift_release();
  AVar11.unknown = puStack_58;
  if (puStack_58 != (undefined *)0x0) {
    uVar2 = CONCAT71(uStack_5f,local_60) & 0xffffffffffff;
    if (((ulong)puStack_58 & 0x2000000000000000) != 0) {
      uVar2 = (ulong)puStack_58 >> 0x38 & 0xf;
    }
    if (uVar2 == 0) {
      AVar7.unknown = puStack_58;
      _swift_bridgeObjectRelease();
      AVar11.unknown = (undefined *)0x0;
    }
  }
  AVar7 = SwiftUI::Alignment::get_leading(AVar7);
  *param_1 = AVar7.unknown;
  param_1[1] = puVar9;
  puVar6 = &DAT_10055ce90;
  FUN_100002f94(&DAT_10055ce90,&DAT_1004323b0);
  FUN_10033d9f4((long)param_1 + (long)*(int *)(puVar6 + 0x2c));
  _swift_bridgeObjectRelease();
  AVar8 = SwiftUI::Animation::spring(0.45,1.0,0.0,AVar11);
  puVar6 = &DAT_100432368;
  _swift_getKeyPath(&DAT_100432368);
  puVar9 = &DAT_100432390;
  _swift_getKeyPath(&DAT_100432390);
  Combine::Published::_get_subscript(&local_60,uVar10,puVar6,puVar9);
  _swift_release(puVar6);
  _swift_release(puVar9);
  uVar4 = CONCAT71(uStack_5f,local_60);
  AVar11.unknown = &DAT_10055ce98;
  FUN_100002f94(&DAT_10055ce98,&DAT_1004323b8);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(AVar11.unknown + 0x24));
  *puVar1 = AVar8.unknown;
  puVar1[1] = uVar4;
  puVar1[2] = puStack_58;
  AVar8 = SwiftUI::Animation::spring(0.3,1.0,0.0,AVar11);
  puVar6 = &DAT_1004323c0;
  _swift_getKeyPath(&DAT_1004323c0);
  puVar9 = &DAT_1004323e8;
  _swift_getKeyPath(&DAT_1004323e8);
  Combine::Published::_get_subscript(&local_60,uVar10,puVar6,puVar9);
  _swift_release(puVar6);
  _swift_release(puVar9);
  uVar5 = local_60;
  AVar11.unknown = &DAT_10055cea0;
  FUN_100002f94(&DAT_10055cea0,&DAT_100432408);
  iVar3 = *(int *)(AVar11.unknown + 0x24);
  *(undefined8 *)((long)param_1 + (long)iVar3) = AVar8.unknown;
  *(undefined1 *)((undefined8 *)((long)param_1 + (long)iVar3) + 1) = uVar5;
  AVar11 = SwiftUI::Animation::spring(0.3,1.0,0.0,AVar11);
  puVar6 = &DAT_1004322c0;
  _swift_getKeyPath(&DAT_1004322c0);
  puVar9 = &DAT_1004322e8;
  _swift_getKeyPath(&DAT_1004322e8);
  Combine::Published::_get_subscript(&local_60,uVar10,puVar6,puVar9);
  _swift_release(puVar6);
  _swift_release(puVar9);
  puVar6 = &DAT_10055cea8;
  FUN_100002f94(&DAT_10055cea8,&DAT_100432410);
  iVar3 = *(int *)(puVar6 + 0x24);
  *(undefined8 *)((long)param_1 + (long)iVar3) = AVar11.unknown;
  *(undefined1 *)((undefined8 *)((long)param_1 + (long)iVar3) + 1) = local_60;
  return;
}

