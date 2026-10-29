// rea decompile_all
// name: FUN_1003abac8
// address: 0x1003abac8
// body: available
// range: 0x1003abac8-0x1003abd03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003abc38 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003abac8(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  OpacityTransition OVar2;
  undefined *puVar3;
  undefined *puVar4;
  AnyTransition AVar5;
  undefined *puVar6;
  long extraout_x8;
  code *pcVar7;
  long extraout_x12;
  long lVar8;
  Alignment AVar9;
  long lVar10;
  undefined1 auStack_60 [15];
  byte local_51;
  
  OVar2 = SwiftUI::OpacityTransition::typeMetadataAccessor();
  lVar10 = *(long *)(OVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar10 + 0x40));
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar8 = (long)(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  AVar9.unknown = (undefined *)*param_2;
  if (AVar9.unknown != (undefined *)0x0) {
    puVar3 = &DAT_100435028;
    _swift_getKeyPath();
    puVar4 = &DAT_100435050;
    _swift_getKeyPath(&DAT_100435050);
    _swift_retain(AVar9.unknown);
    puVar6 = puVar3;
    Combine::Published::_get_subscript(&local_51);
    _swift_release(puVar3);
    _swift_release(puVar4);
    _swift_release();
    bVar1 = (local_51 & 1) == 0;
    if (bVar1) {
      AVar9 = SwiftUI::Alignment::get_center(AVar9);
      *param_1 = AVar9.unknown;
      param_1[1] = puVar6;
      puVar3 = &DAT_10055f8d0;
      FUN_100002f94(&DAT_10055f8d0,&DAT_100435170);
      FUN_1003abd04((long)param_1 + (long)*(int *)(puVar3 + 0x2c));
      SwiftUI::OpacityTransition::init();
      (**(code **)(lVar10 + 0x10))
                (auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar8,OVar2.unknown);
      puVar3 = &DAT_10054ae80;
      FUN_1000036d0(&DAT_10054ae80,PTR_typeMetadataAccessor_1005225d8,
                    PTR_SwiftUI__SwiftUI__OpacityTransition_>SwiftUI__Transition_1005225c8);
      AVar5 = SwiftUI::AnyTransition::_init(puVar3,OVar2.unknown,puVar3);
      (**(code **)(lVar10 + 8))(lVar8,OVar2.unknown);
      puVar3 = &DAT_10055f8d8;
      FUN_100002f94(&DAT_10055f8d8,&DAT_100435178);
      *(undefined **)((long)param_1 + (long)*(int *)(puVar3 + 0x24)) = AVar5.unknown;
      puVar3 = &DAT_10055f8e0;
      FUN_100002f94(&DAT_10055f8e0,&DAT_100435180);
      *(undefined1 *)((long)param_1 + (long)*(int *)(puVar3 + 0x24)) = 0;
      pcVar7 = *(code **)(*(long *)(puVar3 + -8) + 0x38);
    }
    else {
      puVar3 = &DAT_10055f8e0;
      FUN_100002f94(&DAT_10055f8e0,&DAT_100435180);
      pcVar7 = *(code **)(*(long *)(puVar3 + -8) + 0x38);
    }
    (*pcVar7)(param_1,!bVar1,1,puVar3);
    return;
  }
  FUN_100279594(0);
  FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x1003abd04);
  (*pcVar7)();
}

