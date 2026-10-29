// rea decompile_all
// name: FUN_10000be90
// address: 0x10000be90
// body: available
// range: 0x10000be90-0x10000c15f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010000bfe8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10000be90(long param_1,undefined *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  Text TVar9;
  undefined *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined *local_70 [2];
  
  puVar4 = &DAT_10054b578;
  FUN_100002f94(&DAT_10054b578,&DAT_10041c920);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = -extraout_x8;
  puVar12 = (undefined8 *)((long)local_70 + lVar1);
  puVar5 = &DAT_10054b570;
  puVar10 = &DAT_100433140;
  FUN_100002f94();
  lVar14 = *(long *)(puVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)puVar12 - extraout_x8_00;
  uVar11 = *(ulong *)(param_1 + 0x28);
  if (uVar11 == 0) {
    FUN_100226ac0(0);
    FUN_1000036d0(&DAT_10054aa48,FUN_100226ac0,&TargetProtocolConformanceDescriptor_10042b420);
    SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10000c160);
    (*pcVar2)();
  }
  uVar6 = uVar11;
  _swift_retain();
  FUN_1002159e0();
  if ((uVar6 & 1) == 0) {
    _swift_release(uVar11);
  }
  else {
    puVar7 = &DAT_10041c828;
    _swift_getKeyPath();
    puVar8 = &DAT_10041c850;
    _swift_getKeyPath(&DAT_10041c850);
    puVar10 = puVar7;
    Combine::Published::_get_subscript(local_70,uVar11,puVar7,puVar8);
    _swift_release(puVar7);
    _swift_release(puVar8);
    _swift_release(uVar11);
    if ((uint)(byte)local_70[0] == ((uint)param_2 & 0xff)) {
      FUN_100215cec();
      local_70[0] = param_2;
      local_70[1] = puVar10;
      FUN_100026df4();
      (extension_SwiftUI)::SwiftUI::Label::_init
                (lVar13,param_2,0x72616d6b63656863,0xe90000000000006b,
                 PTR___type_metadata_for_Swift_String_100523a98,param_2);
      (**(code **)(lVar14 + 0x10))(puVar12,lVar13,puVar5);
      _swift_storeEnumTagMultiPayload(puVar12,puVar4,0);
      FUN_1000087a0(&DAT_10054b568,&DAT_10054b570,&DAT_100433140,
                    PTR_SwiftUI__SwiftUI__Label<undefined,undefined>_>SwiftUI__View_100523358);
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar12);
      (**(code **)(lVar14 + 8))(lVar13,puVar5);
      return;
    }
  }
  FUN_100215cec();
  local_70[0] = param_2;
  local_70[1] = puVar10;
  FUN_100026df4();
  uVar3 = SUB81(param_2,0);
  puVar5 = PTR___type_metadata_for_Swift_String_100523a98;
  TVar9 = SwiftUI::Text::_init();
  *puVar12 = TVar9.unknown;
  *(undefined **)((long)local_70 + lVar1 + 8) = puVar5;
  (&stack0xffffffffffffffa0)[lVar1] = uVar3;
  *(undefined8 *)(&stack0xffffffffffffffa8 + lVar1) = param_4;
  _swift_storeEnumTagMultiPayload(puVar12,puVar4,1);
  FUN_1000087a0(&DAT_10054b568,&DAT_10054b570,&DAT_100433140,
                PTR_SwiftUI__SwiftUI__Label<undefined,undefined>_>SwiftUI__View_100523358);
  (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar12);
  return;
}

