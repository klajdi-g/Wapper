// rea decompile_all
// name: FUN_1002d9760
// address: 0x1002d9760
// body: available
// range: 0x1002d9760-0x1002d9937 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002d9760(undefined8 *param_1,long *param_2,undefined8 param_3,StringInterpolation param_4)

{
  long lVar1;
  code *pcVar2;
  StringInterpolation SVar3;
  undefined *puVar4;
  undefined *puVar5;
  LocalizedStringKey LVar6;
  Text TVar7;
  undefined8 uVar8;
  byte bVar9;
  long extraout_x8;
  long lVar10;
  String SVar11;
  String SVar12;
  undefined8 uStack_80;
  undefined2 auStack_78 [4];
  undefined8 local_70;
  long local_68;
  undefined8 local_58;
  
  SVar3 = SwiftUI::LocalizedStringKey::StringInterpolation::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(SVar3.unknown + -8) + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  SwiftUI::LocalizedStringKey::StringInterpolation::init(0x2e,1);
  SVar11.bridgeObject = (void *)0xef206f7420707520;
  SVar11.str = (char *)0x6e6f20736b726f57;
  SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral(SVar11,param_4);
  lVar10 = *param_2;
  if (lVar10 != 0) {
    puVar4 = &DAT_10042eed8;
    _swift_getKeyPath(&DAT_10042eed8);
    puVar5 = &DAT_10042ef00;
    _swift_getKeyPath(&DAT_10042ef00);
    _swift_retain(lVar10);
    Combine::Published::_get_subscript(&local_70);
    _swift_release(lVar10);
    _swift_release(puVar4);
    _swift_release(puVar5);
    local_70 = 3;
    if (local_68 != 0) {
      local_70 = local_58;
    }
    _swift_bridgeObjectRelease();
    SVar3.unknown = (undefined *)0xe400000000000000;
    puVar4 = PTR___type_metadata_for_Swift_Int_100523bd8;
    SwiftUI::LocalizedStringKey::StringInterpolation::_appendInterpolation
              (&local_70,0x646c6c25,0xe400000000000000,PTR___type_metadata_for_Swift_Int_100523bd8,
               PTR___protocol_witness_table_for_Swift_Int___SwiftUI__FormatSpecifiable_in_SwiftUI_100523800
              );
    uVar8 = 0x80000001004e4c80;
    SVar12.bridgeObject = (void *)0x80000001004e4c80;
    SVar12.str = (char *)0xd00000000000001f;
    SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral(SVar12,SVar3);
    bVar9 = (byte)SVar3.unknown;
    LVar6 = SwiftUI::LocalizedStringKey::init((undefined *)((long)&local_70 + lVar1));
    *(undefined2 *)((long)auStack_78 + lVar1) = 0x100;
    *(undefined8 *)((long)&uStack_80 + lVar1) = 0;
    bVar9 = bVar9 & 1;
    TVar7 = SwiftUI::Text::_init(LVar6);
    *param_1 = TVar7.unknown;
    param_1[1] = uVar8;
    *(byte *)(param_1 + 2) = bVar9;
    param_1[3] = puVar4;
    return;
  }
  FUN_10014e37c(0);
  FUN_1000036d0(&DAT_100553148,FUN_10014e37c,&TargetProtocolConformanceDescriptor_100427f04);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1002d9938);
  (*pcVar2)();
}

