// rea decompile_all
// name: FUN_1002ea5f0
// address: 0x1002ea5f0
// body: available
// range: 0x1002ea5f0-0x1002ea7af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1002ea5f0(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  State SVar5;
  undefined *puVar6;
  long extraout_x8;
  long unaff_x20;
  undefined *puVar7;
  byte *pbVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  byte abStack_90 [8];
  ulong local_88;
  long lStack_80;
  long local_78;
  undefined *local_70;
  undefined8 uStack_68;
  
  lVar3 = 0;
  FUN_1002f58e8();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar9 + 0x40));
  pbVar8 = abStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  FUN_1002f58d4();
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(lVar4 + 0x34));
  local_70 = (undefined *)*puVar1;
  uStack_68 = puVar1[1];
  SVar5.unknown = &DAT_10055b220;
  FUN_100002f94(&DAT_10055b220,&DAT_10042fa78);
  SwiftUI::State::get_wrappedValue(SVar5);
  uVar10 = *(ulong *)(local_78 + 0x10);
  puVar7 = PTR___swiftEmptyArrayStorage_100524190;
  if (uVar10 != 0) {
    uVar11 = 0;
    local_88 = uVar10;
    lStack_80 = lVar3;
    do {
      if (*(ulong *)(local_78 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002ea7b0);
        (*pcVar2)();
      }
      uVar12 = (ulong)*(byte *)(lVar9 + 0x50) + 0x20 &
               ((ulong)*(byte *)(lVar9 + 0x50) ^ 0xffffffffffffffff);
      lVar4 = *(long *)(lVar9 + 0x48);
      FUN_100029504(local_78 + uVar12 + lVar4 * uVar11,pbVar8,FUN_1002f58e8);
      if ((pbVar8[*(int *)(lVar3 + 0x28)] & 1) == 0) {
        puVar6 = puVar7;
        _swift_isUniquelyReferenced_nonNull_native();
        local_70 = puVar7;
        if (((ulong)puVar6 & 1) == 0) {
          FUN_1001c5fc8(0,*(long *)(puVar7 + 0x10) + 1,1);
        }
        uVar10 = *(ulong *)(local_70 + 0x10);
        if (*(ulong *)(local_70 + 0x18) >> 1 <= uVar10) {
          FUN_1001c5fc8(1 < *(ulong *)(local_70 + 0x18),uVar10 + 1,1);
        }
        puVar7 = local_70;
        *(ulong *)(local_70 + 0x10) = uVar10 + 1;
        FUN_100007e64(pbVar8,local_70 + uVar10 * lVar4 + uVar12,FUN_1002f58e8);
        lVar3 = lStack_80;
        uVar10 = local_88;
      }
      else {
        FUN_100029548(pbVar8,FUN_1002f58e8);
      }
      uVar11 = uVar11 + 1;
    } while (uVar10 != uVar11);
  }
  _swift_bridgeObjectRelease(local_78);
  return puVar7;
}

