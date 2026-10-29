// rea decompile_all
// name: FUN_100051cfc
// address: 0x100051cfc
// body: available
// range: 0x100051cfc-0x10005212f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100052074 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100051cfc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  LocalizedStringKey LVar6;
  AnyTransition AVar7;
  undefined8 uVar8;
  long extraout_x8;
  long lVar9;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  void *unaff_x20;
  long lVar10;
  String stringLiteral;
  undefined1 auStack_250 [8];
  undefined *local_248;
  long local_240;
  long local_238;
  undefined *puStack_230;
  long local_228;
  undefined *local_220;
  undefined1 *local_218;
  long local_210;
  long local_208;
  undefined *puStack_200;
  undefined1 local_1f8 [360];
  undefined *local_90;
  undefined *puStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  puStack_200 = (undefined *)SwiftUI::OpacityTransition::typeMetadataAccessor();
  local_208 = *(long *)(puStack_200 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_208 + 0x40));
  local_218 = auStack_250 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar9 = (long)(auStack_250 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  puVar2 = &DAT_10054da80;
  local_210 = lVar9;
  FUN_100002f94(&DAT_10054da80,&DAT_10041e868);
  local_228 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_228 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar9 = lVar9 - extraout_x8_00;
  puVar3 = &DAT_10054da88;
  FUN_100002f94(&DAT_10054da88,&DAT_10041e870);
  local_238 = *(long *)(puVar3 + -8);
  puStack_230 = puVar3;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_238 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar10 = lVar9 - extraout_x8_01;
  puVar3 = &DAT_10054da90;
  puVar5 = &DAT_10041e878;
  FUN_100002f94();
  local_220 = puVar3;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_10004a154();
  if (((ulong)puVar3 & 1) != 0) {
    FUN_100052130();
    if (puVar5 != (undefined *)0x0) {
      puVar4 = &DAT_100526f58;
      local_248 = puVar2;
      _swift_allocObject(&DAT_100526f58,0x168,7);
      local_240 = param_1;
      _memcpy(puVar4 + 0x10,unaff_x20,0x158);
      local_90 = puVar3;
      puStack_88 = puVar5;
      local_80 = param_4;
      uStack_78 = param_5;
      FUN_100058a6c();
      FUN_100002f94(&DAT_10054daa0,&DAT_10041e888);
      FUN_10005a5f8();
      SwiftUI::Button::_init();
      _swift_bridgeObjectRelease(param_5);
      _swift_bridgeObjectRelease(puVar5);
      local_1f8[0] = 0;
      puVar2 = &DAT_10054daf0;
      FUN_1000087a0(&DAT_10054daf0,&DAT_10054da80,&DAT_10041e868,
                    PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
      puVar5 = puVar2;
      FUN_100003038();
      puVar3 = local_248;
      (extension_SwiftUI)::SwiftUI::View::_buttonStyle
                (lVar10,local_1f8,local_248,&DAT_100525378,puVar2,puVar5);
      (**(code **)(local_228 + 8))(lVar9,puVar3);
      FUN_10034e014(lVar10 - extraout_x8_02);
      (**(code **)(local_238 + 8))(lVar10,puStack_230);
      uVar8 = 0x80000001004dc370;
      stringLiteral.bridgeObject = (void *)0x80000001004dc370;
      stringLiteral.str = (char *)0xd000000000000011;
      LVar6 = SwiftUI::LocalizedStringKey::init(stringLiteral);
      FUN_1000372f4(&DAT_10054daf8,&DAT_10054da90,&DAT_10041e878,FUN_10005a838);
      lVar9 = local_240;
      (extension_SwiftUI)::SwiftUI::View::_help(LVar6);
      _swift_bridgeObjectRelease(puVar2);
      _swift_bridgeObjectRelease(uVar8);
      FUN_10002a29c(lVar10 - extraout_x8_02,&DAT_10054da90,&DAT_10041e878);
      lVar10 = local_210;
      SwiftUI::OpacityTransition::init();
      puVar3 = puStack_200;
      lVar1 = local_208;
      (**(code **)(local_208 + 0x10))(local_218,lVar10,puStack_200);
      puVar2 = &DAT_10054ae80;
      FUN_1000036d0(&DAT_10054ae80,PTR_typeMetadataAccessor_1005225d8,
                    PTR_SwiftUI__SwiftUI__OpacityTransition_>SwiftUI__Transition_1005225c8);
      AVar7 = SwiftUI::AnyTransition::_init(puVar2,puVar3,puVar2);
      (**(code **)(lVar1 + 8))(lVar10,puVar3);
      puVar2 = &DAT_10054da98;
      FUN_100002f94(&DAT_10054da98,&DAT_10041e880);
      *(undefined **)(lVar9 + *(int *)(puVar2 + 0x24)) = AVar7.unknown;
      (**(code **)(*(long *)(puVar2 + -8) + 0x38))(lVar9,0,1,puVar2);
      return;
    }
  }
  puVar2 = &DAT_10054da98;
  FUN_100002f94(&DAT_10054da98,&DAT_10041e880);
                    /* WARNING: Could not recover jumptable at 0x00010005212c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar2 + -8) + 0x38))(param_1,1,1,puVar2);
  return;
}

