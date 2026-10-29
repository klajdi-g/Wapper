// rea decompile_all
// name: FUN_1003213cc
// address: 0x1003213cc
// body: available
// range: 0x1003213cc-0x10032173b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1003213cc(undefined *param_1)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x12;
  long *unaff_x20;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *local_80;
  ulong local_78;
  long local_70;
  undefined *local_68;
  
  lVar3 = 0;
  FUN_10040211c();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar9 + 0x40));
  lVar7 = (long)&local_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = lVar7 - extraout_x12;
  lVar8 = *unaff_x20;
  if (lVar8 == 0) {
    FUN_100279594(0);
    FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
    SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10032173c);
    (*pcVar2)();
  }
  puVar4 = &DAT_1004312c0;
  _swift_getKeyPath(&DAT_1004312c0);
  puVar5 = &DAT_1004312e8;
  _swift_getKeyPath(&DAT_1004312e8);
  _swift_retain(lVar8);
  Combine::Published::_get_subscript(&local_68);
  _swift_release(puVar4);
  _swift_release(puVar5);
  _swift_release(lVar8);
  if (((ulong)local_68 & 1) == 0) {
    _swift_bridgeObjectRetain(param_1);
  }
  else {
    lVar8 = *(long *)(param_1 + 0x10);
    puVar4 = PTR___swiftEmptyArrayStorage_100524190;
    local_80 = param_1;
    local_70 = lVar9;
    if (lVar8 != 0) {
      uVar6 = (ulong)*(byte *)(lVar9 + 0x50) + 0x20 &
              ((ulong)*(byte *)(lVar9 + 0x50) ^ 0xffffffffffffffff);
      lVar9 = *(long *)(lVar9 + 0x48);
      param_1 = param_1 + uVar6;
      puVar4 = PTR___swiftEmptyArrayStorage_100524190;
      local_78 = uVar6;
      do {
        FUN_10002f154(param_1,lVar10);
        if (((*(byte *)(lVar10 + *(int *)(lVar3 + 0x40)) & 1) == 0) &&
           ((*(byte *)(lVar10 + *(int *)(lVar3 + 0x48)) & 1) == 0)) {
          puVar5 = puVar4;
          _swift_isUniquelyReferenced_nonNull_native();
          local_68 = puVar4;
          if (((ulong)puVar5 & 1) == 0) {
            FUN_1001c5c4c(0,*(long *)(puVar4 + 0x10) + 1,1);
            uVar6 = local_78;
          }
          uVar11 = *(ulong *)(local_68 + 0x10);
          if (*(ulong *)(local_68 + 0x18) >> 1 <= uVar11) {
            FUN_1001c5c4c(1 < *(ulong *)(local_68 + 0x18),uVar11 + 1,1);
            uVar6 = local_78;
          }
          puVar4 = local_68;
          *(ulong *)(local_68 + 0x10) = uVar11 + 1;
          FUN_10002f198(lVar10,local_68 + uVar11 * lVar9 + uVar6);
        }
        else {
          FUN_10002f1dc(lVar10);
        }
        param_1 = param_1 + lVar9;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    param_1 = puVar4;
    uVar6 = *(ulong *)(param_1 + 0x10);
    if (uVar6 == 0) {
      _swift_release(param_1);
      param_1 = local_80;
      _swift_bridgeObjectRetain(local_80);
    }
    else {
      uVar11 = 0;
      puVar4 = PTR___swiftEmptyArrayStorage_100524190;
      lVar8 = local_70;
      do {
        if (*(ulong *)(param_1 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1003216f8);
          (*pcVar2)();
        }
        uVar12 = (ulong)*(byte *)(lVar8 + 0x50) + 0x20 &
                 ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff);
        lVar9 = *(long *)(lVar8 + 0x48);
        FUN_10002f154(param_1 + lVar9 * uVar11 + uVar12,lVar7);
        if ((*(char *)(lVar7 + *(int *)(lVar3 + 0x24)) == '\b') &&
           (99 < *(long *)(lVar7 + *(int *)(lVar3 + 0x20)))) {
          puVar5 = puVar4;
          _swift_isUniquelyReferenced_nonNull_native();
          local_68 = puVar4;
          if (((ulong)puVar5 & 1) == 0) {
            FUN_1001c5c4c(0,*(long *)(puVar4 + 0x10) + 1,1);
          }
          uVar1 = *(ulong *)(local_68 + 0x10);
          if (*(ulong *)(local_68 + 0x18) >> 1 <= uVar1) {
            FUN_1001c5c4c(1 < *(ulong *)(local_68 + 0x18),uVar1 + 1,1);
          }
          puVar4 = local_68;
          *(ulong *)(local_68 + 0x10) = uVar1 + 1;
          FUN_10002f198(lVar7,local_68 + uVar1 * lVar9 + uVar12);
          lVar8 = local_70;
        }
        else {
          FUN_10002f1dc(lVar7);
        }
        uVar11 = uVar11 + 1;
      } while (uVar6 != uVar11);
      if (*(long *)(puVar4 + 0x10) == 0) {
        _swift_release(puVar4);
      }
      else {
        _swift_release(param_1);
        param_1 = puVar4;
      }
    }
  }
  return param_1;
}

