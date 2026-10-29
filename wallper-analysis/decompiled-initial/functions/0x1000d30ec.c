// rea decompile_all
// name: FUN_1000d30ec
// address: 0x1000d30ec
// body: available
// range: 0x1000d30ec-0x1000d332f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1000d30ec(long param_1,code *param_2)

{
  ulong uVar1;
  State SVar2;
  State SVar3;
  ulong uVar4;
  undefined *puVar5;
  Animation AVar6;
  ID self;
  long lVar7;
  ulong *unaff_x20;
  long lVar8;
  State local_a0;
  ulong uStack_98;
  ulong local_78;
  undefined8 local_70;
  ulong local_68;
  
  if ((unaff_x20[1] & 1) != 0) {
    uStack_98 = unaff_x20[0xe];
    local_a0.unknown = (undefined *)unaff_x20[0xd];
    SVar2.unknown = &DAT_10054ab50;
    FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
    SwiftUI::State::get_wrappedValue(SVar2);
    if ((local_78 & 1) == 0) {
      uStack_98 = unaff_x20[0xb];
      local_a0.unknown = (undefined *)unaff_x20[10];
      SVar3.unknown = &DAT_100551460;
      FUN_100002f94(&DAT_100551460,&DAT_100423128);
      SwiftUI::State::get_wrappedValue(SVar3);
      uVar4 = local_78;
      if ((char)local_70 == '\x01') {
        uVar4 = *unaff_x20;
      }
      uStack_98 = unaff_x20[0xb];
      local_a0.unknown = (undefined *)unaff_x20[10];
      lVar8 = 0x120;
      do {
        lVar7 = param_1;
        (*param_2)();
        local_68 = uVar4;
        SwiftUI::State::get_wrappedValue(SVar3);
        uVar1 = local_78;
        if ((char)local_70 == '\x01') {
          uVar1 = *unaff_x20;
        }
        if (uVar4 == uVar1) {
          return;
        }
        if ((uVar4 == *unaff_x20) || ((*(code *)unaff_x20[4])(uVar4), lVar7 == 0)) {
          uStack_98 = unaff_x20[0x18];
          local_a0.unknown = (undefined *)unaff_x20[0x17];
          local_78 = CONCAT71(local_78._1_7_,(byte)((ulong)param_1 >> 0x3f));
          SwiftUI::State::set_wrappedValue(&local_a0,&local_78,SVar2.unknown);
          uStack_98 = unaff_x20[0x13];
          local_a0.unknown = (undefined *)unaff_x20[0x12];
          local_78 = 0;
          local_70 = 0;
          puVar5 = &DAT_10054ab90;
          FUN_100002f94(&DAT_10054ab90,&DAT_10041bdb0);
          AVar6.unknown = (undefined *)&local_78;
          SwiftUI::State::set_wrappedValue(&local_a0,AVar6.unknown,puVar5);
          AVar6 = SwiftUI::Animation::spring(0.2,1.0,0.0,AVar6);
          SwiftUI::_withAnimation();
          _swift_release(AVar6.unknown);
          self = NSHapticFeedbackManager::defaultPerformer
                           ((ID)&_OBJC_CLASS___NSHapticFeedbackManager);
          NSHapticFeedbackManager::performFeedbackPattern_performanceTime_(self,1,1);
          _swift_unknownObjectRelease(self);
          return;
        }
        _swift_bridgeObjectRelease(lVar7);
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
  }
  return;
}

