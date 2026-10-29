// rea decompile_all
// name: FUN_1003222b4
// address: 0x1003222b4
// body: available
// range: 0x1003222b4-0x100322757 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010032274c) */

void FUN_1003222b4(undefined *param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  State SVar3;
  undefined *puVar4;
  State SVar5;
  undefined *puVar6;
  long extraout_x8;
  long *unaff_x20;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined *puVar11;
  long lStack_b0;
  undefined *local_98;
  State local_90;
  long lStack_88;
  undefined *local_80;
  long lStack_78;
  long local_68;
  
  lVar2 = 0;
  FUN_10040211c();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar9 + 0x40));
  lVar7 = (long)&lStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar11 = *(undefined **)(param_1 + 0x10);
  if ((puVar11 != (undefined *)0x0) && ((param_2 & 1) != 0)) {
    lStack_78 = unaff_x20[0x1c];
    local_80 = (undefined *)unaff_x20[0x1b];
    lStack_88 = unaff_x20[0x1c];
    local_90.unknown = (undefined *)unaff_x20[0x1b];
    local_68 = lStack_78;
    FUN_1000087e4(&local_68,&local_98,&DAT_10054d690,&DAT_10041e1d0);
    SVar3.unknown = &DAT_10054ba40;
    FUN_100002f94(&DAT_10054ba40,&DAT_100423be0);
    SwiftUI::State::get_wrappedValue(SVar3);
    if (puVar11 == local_98) {
      FUN_10002a29c(&local_80,&DAT_10054ba40,&DAT_100423be0);
    }
    else {
      lStack_88 = lStack_78;
      local_90.unknown = local_80;
      local_98 = puVar11;
      SwiftUI::State::set_wrappedValue(&local_90,&local_98,SVar3.unknown);
      FUN_10002a29c(&local_80,&DAT_10054ba40,&DAT_100423be0);
      uVar10 = (ulong)*(byte *)(lVar9 + 0x50) + 0x20 &
               ((ulong)*(byte *)(lVar9 + 0x50) ^ 0xffffffffffffffff);
      lVar9 = *(long *)(lVar9 + 0x48);
      puVar6 = param_1 + uVar10;
      SVar3.unknown = PTR___swiftEmptyArrayStorage_100524190;
      do {
        FUN_10002f154(puVar6,lVar7);
        if ((*(char *)(lVar7 + *(int *)(lVar2 + 0x24)) == '\b') &&
           (99 < *(long *)(lVar7 + *(int *)(lVar2 + 0x20)))) {
          puVar4 = SVar3.unknown;
          _swift_isUniquelyReferenced_nonNull_native();
          local_90.unknown = SVar3.unknown;
          if (((ulong)puVar4 & 1) == 0) {
            FUN_1001c5c4c(0,*(long *)(SVar3.unknown + 0x10) + 1,1);
          }
          uVar8 = *(ulong *)(local_90.unknown + 0x10);
          if (*(ulong *)(local_90.unknown + 0x18) >> 1 <= uVar8) {
            FUN_1001c5c4c(1 < *(ulong *)(local_90.unknown + 0x18),uVar8 + 1,1);
          }
          SVar3.unknown = local_90.unknown;
          *(ulong *)(local_90.unknown + 0x10) = uVar8 + 1;
          FUN_10002f198(lVar7,local_90.unknown + uVar8 * lVar9 + uVar10);
        }
        else {
          FUN_10002f1dc(lVar7);
        }
        puVar6 = puVar6 + lVar9;
        puVar11 = puVar11 + -1;
      } while (puVar11 != (undefined *)0x0);
      if (*(long *)(SVar3.unknown + 0x10) == 0) {
        _swift_release(SVar3.unknown);
        _swift_bridgeObjectRetain(param_1);
        SVar3.unknown = param_1;
      }
      local_90.unknown = SVar3.unknown;
      FUN_1003288d0();
      SVar3.unknown = local_90.unknown;
      uVar8 = *(ulong *)(local_90.unknown + 0x10);
      _swift_retain(local_90.unknown);
      SVar5.unknown = SVar3.unknown;
      if (0xc < uVar8) {
        FUN_10031b430(SVar3.unknown,SVar3.unknown + uVar10,0,0x19);
        _swift_release(SVar3.unknown);
      }
      lStack_88 = unaff_x20[0xe];
      local_90.unknown = (undefined *)unaff_x20[0xd];
      puVar11 = &DAT_10055bd50;
      local_98 = SVar5.unknown;
      FUN_100002f94(&DAT_10055bd50,&DAT_100430ab8);
      SwiftUI::State::set_wrappedValue(&local_90,&local_98,puVar11);
      if (0x18 < uVar8) {
        uVar8 = 0x19;
      }
      if (*(ulong *)(SVar3.unknown + 0x10) < uVar8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100322704);
        (*pcVar1)();
      }
      SVar5.unknown = SVar3.unknown;
      if (*(ulong *)(SVar3.unknown + 0x10) != uVar8) {
        FUN_10031b430(SVar3.unknown,SVar3.unknown + uVar10,0,uVar8 << 1 | 1);
        _swift_release(SVar3.unknown);
      }
      lStack_88 = unaff_x20[0x12];
      local_90.unknown = (undefined *)unaff_x20[0x11];
      local_98 = SVar5.unknown;
      SwiftUI::State::set_wrappedValue(&local_90,&local_98,puVar11);
      lVar2 = *unaff_x20;
      if (lVar2 == 0) {
        FUN_100279594(0);
        FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
        SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10032274c);
        (*pcVar1)();
      }
      puVar6 = &DAT_100431270;
      _swift_getKeyPath(&DAT_100431270);
      puVar4 = &DAT_100431298;
      _swift_getKeyPath(&DAT_100431298);
      _swift_retain(lVar2);
      Combine::Published::_get_subscript(&local_90);
      _swift_release(puVar6);
      _swift_release(puVar4);
      _swift_release(lVar2);
      SVar3.unknown = local_90.unknown;
      _swift_bridgeObjectRetain(local_90.unknown);
      FUN_100320a38(&local_90);
      _swift_bridgeObjectRelease(SVar3.unknown);
      SVar3.unknown = local_90.unknown;
      uVar8 = *(ulong *)(local_90.unknown + 0x10);
      _swift_retain(local_90.unknown);
      SVar5.unknown = SVar3.unknown;
      if (0xc < uVar8) {
        FUN_10031b430(SVar3.unknown,SVar3.unknown + uVar10,0,0x19);
        _swift_release(SVar3.unknown);
      }
      lStack_88 = unaff_x20[0x10];
      local_90.unknown = (undefined *)unaff_x20[0xf];
      local_98 = SVar5.unknown;
      SwiftUI::State::set_wrappedValue(&local_90,&local_98,puVar11);
      if (0x18 < uVar8) {
        uVar8 = 0x19;
      }
      if (*(ulong *)(SVar3.unknown + 0x10) < uVar8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100322708);
        (*pcVar1)();
      }
      SVar5.unknown = SVar3.unknown;
      if (*(ulong *)(SVar3.unknown + 0x10) != uVar8) {
        FUN_10031b430(SVar3.unknown,SVar3.unknown + uVar10,0,uVar8 << 1 | 1);
        _swift_release(SVar3.unknown);
      }
      lStack_88 = unaff_x20[0x14];
      local_90.unknown = (undefined *)unaff_x20[0x13];
      local_98 = SVar5.unknown;
      SwiftUI::State::set_wrappedValue(&local_90,&local_98,puVar11);
    }
  }
  return;
}

