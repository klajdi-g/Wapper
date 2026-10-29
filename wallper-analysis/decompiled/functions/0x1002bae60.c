// rea decompile_all
// name: FUN_1002bae60
// address: 0x1002bae60
// body: available
// range: 0x1002bae60-0x1002baf63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002bae60(undefined8 *param_1,long param_2,undefined8 param_3,StringInterpolation param_4,
                  undefined8 param_5)

{
  long lVar1;
  StringInterpolation SVar2;
  long lVar3;
  LocalizedStringKey LVar4;
  Text TVar5;
  undefined8 uVar6;
  byte bVar7;
  long extraout_x8;
  String SVar8;
  String SVar9;
  undefined8 uStack_40;
  undefined2 auStack_38 [4];
  
  SVar2 = SwiftUI::LocalizedStringKey::StringInterpolation::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(SVar2.unknown + -8) + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  SwiftUI::LocalizedStringKey::StringInterpolation::init(0x67,1);
  SVar8.bridgeObject = (void *)0x80000001004e3ee0;
  SVar8.str = (char *)0x1000000000000023;
  SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral(SVar8,param_4);
  lVar3 = 0;
  FUN_100400294();
  SwiftUI::LocalizedStringKey::StringInterpolation::appendInterpolation
            (*(String *)(param_2 + *(int *)(lVar3 + 0x34)),param_4);
  uVar6 = 0x80000001004e3f10;
  SVar9.bridgeObject = (void *)0x80000001004e3f10;
  SVar9.str = (char *)0x1000000000000044;
  SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral(SVar9,param_4);
  bVar7 = (byte)param_4.unknown;
  LVar4 = SwiftUI::LocalizedStringKey::init((StringInterpolation)(&stack0xffffffffffffffd0 + lVar1))
  ;
  *(undefined2 *)((long)auStack_38 + lVar1) = 0x100;
  *(undefined8 *)((long)&uStack_40 + lVar1) = 0;
  bVar7 = bVar7 & 1;
  TVar5 = SwiftUI::Text::_init(LVar4);
  *param_1 = TVar5.unknown;
  param_1[1] = uVar6;
  *(byte *)(param_1 + 2) = bVar7;
  param_1[3] = param_5;
  return;
}

