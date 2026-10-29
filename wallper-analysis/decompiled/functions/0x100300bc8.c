// rea decompile_all
// name: FUN_100300bc8
// address: 0x100300bc8
// body: available
// range: 0x100300bc8-0x100300d73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100300bc8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  int iVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  State SVar8;
  ulong uVar9;
  long unaff_x20;
  long lVar10;
  State local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined *local_60;
  undefined8 uStack_58;
  
  lVar10 = *(long *)(unaff_x20 + 0x10);
  if (lVar10 != 0) {
    lVar6 = 0;
    FUN_1003009dc();
    iVar4 = *(int *)(lVar6 + 0x1c);
    _swift_retain(lVar10);
    lVar7 = unaff_x20 + iVar4;
    FUN_10026a7c8(lVar7);
    _swift_release(lVar10);
    puVar1 = (undefined8 *)(unaff_x20 + *(int *)(lVar6 + 0x28));
    puVar2 = (undefined *)*puVar1;
    uVar3 = puVar1[1];
    SVar8.unknown = &DAT_10055b708;
    local_60 = puVar2;
    uStack_58 = uVar3;
    FUN_100002f94(&DAT_10055b708,&DAT_100430100);
    SwiftUI::State::get_wrappedValue(SVar8);
    uVar9 = unaff_x20 + iVar4;
    FUN_1002ab9c0(uVar9,lVar7,param_2,local_78.unknown);
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(local_78.unknown);
    if ((uVar9 & 1) != 0) {
      if (DAT_1005570b0 != -1) {
        _swift_once(&DAT_1005570b0,FUN_1001edbe8);
      }
      FUN_1001ee720();
      local_60 = puVar2;
      uStack_58 = uVar3;
      _swift_retain(uVar3);
      _swift_bridgeObjectRetain(puVar2);
      SwiftUI::State::get_wrappedValue(SVar8);
      _swift_bridgeObjectRelease(local_68);
      local_68 = PTR___swiftEmptySetSingleton_1005241a0;
      local_78.unknown = puVar2;
      local_70 = uVar3;
      SwiftUI::State::set_wrappedValue(&local_78,&local_68,SVar8.unknown);
      _swift_release(uVar3);
      _swift_bridgeObjectRelease(puVar2);
    }
    return;
  }
  FUN_100279594(0);
  FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x100300d74);
  (*pcVar5)();
}

