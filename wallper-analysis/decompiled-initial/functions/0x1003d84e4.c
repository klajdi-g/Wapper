// rea decompile_all
// name: FUN_1003d84e4
// address: 0x1003d84e4
// body: available
// range: 0x1003d84e4-0x1003d874b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003d84e4(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  State SVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  long *plVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 local_50;
  undefined7 uStack_4f;
  undefined8 uStack_48;
  
  pcVar4 = (code *)&local_70;
  lVar5 = 0;
  FUN_1003e4bc8();
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x28));
  pcVar11 = (code *)*puVar1;
  if (pcVar11 == (code *)0x0) {
    if (DAT_100557fe0 != -1) {
      _swift_once(&DAT_100557fe0,FUN_10025cd74);
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x48));
    uStack_68 = puVar1[1];
    local_70 = *puVar1;
    local_60 = puVar1[2];
    SVar6.unknown = &DAT_10054dd08;
    FUN_100002f94(&DAT_10054dd08,&DAT_10041ea50);
    SwiftUI::State::get_wrappedValue(SVar6);
    FUN_10025d8e0(CONCAT71(uStack_4f,local_50),uStack_48,*param_1,param_1[1]);
    _swift_bridgeObjectRelease(uStack_48);
  }
  else {
    uVar12 = puVar1[1];
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x48));
    uStack_68 = puVar1[1];
    local_70 = *puVar1;
    local_60 = puVar1[2];
    _swift_retain(uVar12);
    SVar6.unknown = &DAT_10054dd08;
    FUN_100002f94(&DAT_10054dd08,&DAT_10041ea50);
    SwiftUI::State::get_wrappedValue(SVar6);
    (*pcVar11)(param_1,CONCAT71(uStack_4f,local_50),uStack_48);
    _swift_bridgeObjectRelease(uStack_48);
    FUN_10002f6dc(pcVar11,uVar12);
  }
  plVar9 = *(long **)((long)param_1 + (long)*(int *)(lVar5 + 0x30));
  if (plVar9 != (long *)0x0) {
    puVar7 = &DAT_100436790;
    _swift_getKeyPath(&DAT_100436790);
    puVar8 = &DAT_1004367b8;
    _swift_getKeyPath(&DAT_1004367b8);
    _swift_retain(plVar9);
    plVar10 = plVar9;
    Combine::Published::_modify_subscript();
    *plVar9 = *plVar9 + 1;
    (*pcVar4)(&local_70,0);
    _swift_release(puVar7);
    _swift_release(puVar8);
    lVar3 = _TtC7Wallper17VideoLibraryStore::titleCache;
    _swift_beginAccess((long)plVar10 + _TtC7Wallper17VideoLibraryStore::titleCache,&local_70,1,0);
    uVar12 = *(undefined8 *)((long)plVar10 + lVar3);
    *(undefined **)((long)plVar10 + lVar3) = PTR___swiftEmptyDictionarySingleton_100524198;
    _swift_release(plVar10);
    _swift_bridgeObjectRelease(uVar12);
    iVar2 = *(int *)(lVar5 + 0x44);
    local_50 = 0;
    puVar7 = &DAT_10054ab50;
    FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
    SwiftUI::State::set_wrappedValue((State *)((long)param_1 + (long)iVar2),&local_50,puVar7);
    return;
  }
  FUN_100279594(0);
  FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1003d874c);
  (*pcVar4)();
}

