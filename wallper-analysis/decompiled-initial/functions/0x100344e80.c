// rea decompile_all
// name: FUN_100344e80
// address: 0x100344e80
// body: available
// range: 0x100344e80-0x100345087 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100344e80(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong local_70;
  undefined *local_68;
  
  lVar3 = 0;
  FUN_10040211c();
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)&local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (param_1 == 0) {
    FUN_100279594(0);
    FUN_10034551c();
    SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100345088);
    (*pcVar2)();
  }
  puVar4 = &DAT_100432948;
  _swift_getKeyPath(&DAT_100432948);
  puVar5 = &DAT_100432970;
  _swift_getKeyPath(&DAT_100432970);
  _swift_retain(param_1);
  Combine::Published::_get_subscript(&local_68);
  _swift_release(puVar4);
  _swift_release(puVar5);
  _swift_release(param_1);
  puVar4 = local_68;
  local_70 = *(ulong *)(local_68 + 0x10);
  puVar5 = PTR___swiftEmptyArrayStorage_100524190;
  if (local_70 != 0) {
    uVar9 = 0;
    do {
      if (*(ulong *)(puVar4 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100345060);
        (*pcVar2)();
      }
      uVar10 = (ulong)*(byte *)(lVar8 + 0x50) + 0x20 &
               ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff);
      lVar11 = *(long *)(lVar8 + 0x48);
      FUN_10002f154(puVar4 + lVar11 * uVar9 + uVar10,lVar7);
      if (((*(byte *)(lVar7 + *(int *)(lVar3 + 0x40)) & 1) == 0) &&
         (*(char *)(lVar7 + *(int *)(lVar3 + 0x48)) != '\x01')) {
        FUN_10002f1dc(lVar7);
      }
      else {
        puVar6 = puVar5;
        _swift_isUniquelyReferenced_nonNull_native();
        local_68 = puVar5;
        if (((ulong)puVar6 & 1) == 0) {
          FUN_1001c5c4c(0,*(long *)(puVar5 + 0x10) + 1,1);
        }
        uVar1 = *(ulong *)(local_68 + 0x10);
        if (*(ulong *)(local_68 + 0x18) >> 1 <= uVar1) {
          FUN_1001c5c4c(1 < *(ulong *)(local_68 + 0x18),uVar1 + 1,1);
        }
        puVar5 = local_68;
        *(ulong *)(local_68 + 0x10) = uVar1 + 1;
        FUN_10002f198(lVar7,local_68 + uVar1 * lVar11 + uVar10);
      }
      uVar9 = uVar9 + 1;
    } while (local_70 != uVar9);
  }
  _swift_bridgeObjectRelease(puVar4);
  return puVar5;
}

