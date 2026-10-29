// rea decompile_all
// name: FUN_10035dc54
// address: 0x10035dc54
// body: available
// range: 0x10035dc54-0x10035df8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10035dc54(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_80 [8];
  undefined *local_78;
  undefined *local_70;
  undefined8 local_68;
  
  puVar2 = &DAT_10055ddd8;
  local_68 = param_1;
  FUN_100002f94(&DAT_10055ddd8,&DAT_100433628);
  local_70 = puVar2;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_80 + -extraout_x8;
  puVar2 = &DAT_10055de40;
  FUN_100002f94(&DAT_10055de40,&DAT_100433700);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)puVar9 - extraout_x8_00;
  puVar3 = &DAT_10055de08;
  FUN_100002f94(&DAT_10055de08,&DAT_100433640);
  local_78 = puVar3;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar7 - extraout_x8_01;
  puVar3 = &DAT_10054ac38;
  FUN_100002f94(&DAT_10054ac38,&DAT_10041e8e0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = lVar10 - extraout_x8_02;
  lVar4 = 0;
  FUN_10025ee04();
  lVar8 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar8 + 0x40));
  lVar11 = lVar6 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  FUN_100386f18();
  lVar5 = *(long *)(param_2 + *(int *)(lVar5 + 0x14));
  if (lVar5 != 0) {
    _swift_retain(lVar5);
    FUN_1001b6e74(lVar6,param_2);
    _swift_release(lVar5);
    lVar5 = lVar6;
    (**(code **)(lVar8 + 0x30))(lVar6,1,lVar4);
    if ((int)lVar5 == 1) {
      FUN_10002a29c(lVar6,&DAT_10054ac38,&DAT_10041e8e0);
      FUN_10035e954(lVar10);
      FUN_1000087e4(lVar10,lVar7,&DAT_10055de08,&DAT_100433640);
      _swift_storeEnumTagMultiPayload(lVar7,puVar2,1);
      FUN_1003871d4();
      FUN_10038728c();
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar7);
      FUN_10002a29c(lVar10,&DAT_10055de08,&DAT_100433640);
    }
    else {
      FUN_100007e64(lVar6,lVar11,FUN_10025ee04);
      FUN_10035df90(puVar9,lVar11);
      FUN_1000087e4(puVar9,lVar7,&DAT_10055ddd8,&DAT_100433628);
      _swift_storeEnumTagMultiPayload(lVar7,puVar2,0);
      FUN_1003871d4();
      FUN_10038728c();
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar7);
      FUN_10002a29c(puVar9,&DAT_10055ddd8,&DAT_100433628);
      FUN_100029548(lVar11,FUN_10025ee04);
    }
    return;
  }
  FUN_1001b7378(0);
  FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10035df90);
  (*pcVar1)();
}

