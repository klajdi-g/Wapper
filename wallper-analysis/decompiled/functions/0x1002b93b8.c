// rea decompile_all
// name: FUN_1002b93b8
// address: 0x1002b93b8
// body: available
// range: 0x1002b93b8-0x1002b9703 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002b93b8(long *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  State SVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 auStack_90 [8];
  long local_88;
  long local_80;
  char local_71;
  undefined1 local_70;
  undefined7 uStack_6f;
  long local_68;
  
  puVar3 = &DAT_10055a3c0;
  FUN_100002f94(&DAT_10055a3c0,&DAT_10042e1a8);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_90 + -extraout_x8;
  puVar3 = &DAT_10055a3e0;
  FUN_100002f94(&DAT_10055a3e0,&DAT_10042e230);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)puVar10 - extraout_x8_00;
  puVar4 = &DAT_10055a3a0;
  FUN_100002f94(&DAT_10055a3a0,&DAT_10042e198);
  local_80 = *(long *)(puVar4 + -8);
  puVar5 = puVar4;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_80 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_88 = lVar9 - extraout_x8_01;
  FUN_1002b8b68();
  if (((ulong)puVar5 & 1) == 0) {
    local_70 = (undefined1)param_1[6];
    local_68 = param_1[7];
    SVar6.unknown = &DAT_10054ab50;
    FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
    SwiftUI::State::get_wrappedValue(SVar6);
    if (local_71 != '\x01') goto LAB_1002b9568;
  }
  lVar8 = *param_1;
  if (lVar8 == 0) {
    FUN_10013b98c(0);
    FUN_1000036d0(&DAT_100553150,FUN_10013b98c,&TargetProtocolConformanceDescriptor_1004274b8);
    SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1002b9704);
    (*pcVar2)();
  }
  puVar5 = &DAT_10042e238;
  _swift_getKeyPath(&DAT_10042e238);
  puVar7 = &DAT_10042e260;
  _swift_getKeyPath(&DAT_10042e260);
  _swift_retain(lVar8);
  Combine::Published::_get_subscript(&local_70);
  _swift_release(puVar5);
  _swift_release(puVar7);
  _swift_release(lVar8);
  lVar8 = *(long *)(CONCAT71(uStack_6f,local_70) + 0x10);
  _swift_bridgeObjectRelease();
  if (lVar8 == 0) {
    FUN_100002f94(&DAT_10055a3b0,&DAT_10042e1a0);
    FUN_1000087a0(&DAT_10055a3a8,&DAT_10055a3b0,&DAT_10042e1a0,
                  PTR_SwiftUI__SwiftUI__HStack<undefined>_>SwiftUI__View_1005233f8);
    lVar8 = local_88;
    (extension_SwiftUI)::SwiftUI::Section::_init();
    lVar1 = local_80;
    (**(code **)(local_80 + 0x10))(lVar9,lVar8,puVar4);
    _swift_storeEnumTagMultiPayload(lVar9,puVar3,0);
    FUN_1002c05dc();
    FUN_1002c0678();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar9);
    (**(code **)(lVar1 + 8))(lVar8,puVar4);
    return;
  }
LAB_1002b9568:
  FUN_1002b98d4(puVar10,param_1);
  FUN_1000087e4(puVar10,lVar9,&DAT_10055a3c0,&DAT_10042e1a8);
  _swift_storeEnumTagMultiPayload(lVar9,puVar3,1);
  FUN_1002c05dc();
  FUN_1002c0678();
  (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar9);
  FUN_10002a29c(puVar10,&DAT_10055a3c0,&DAT_10042e1a8);
  return;
}

