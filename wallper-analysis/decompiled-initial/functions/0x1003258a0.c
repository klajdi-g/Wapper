// rea decompile_all
// name: FUN_1003258a0
// address: 0x1003258a0
// body: available
// range: 0x1003258a0-0x100325bc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100325afc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003258a0(long param_1,long param_2,ulong param_3,long param_4,void *param_5)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  byte bVar5;
  undefined *puVar6;
  long lVar7;
  State SVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char *pcVar11;
  ObservedObject<undefined> OVar12;
  undefined *puVar13;
  char *pcVar14;
  long extraout_x8;
  ulong uVar15;
  long extraout_x12;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  String SVar19;
  String SVar20;
  State local_a0;
  undefined *local_98;
  long local_90;
  char local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar6 = &DAT_10055c858;
  FUN_100002f94(&DAT_10055c858,&DAT_100431808);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar16 = (long)&local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = lVar16 - extraout_x12;
  if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100325bc0);
    (*pcVar4)();
  }
  if (param_3 < *(ulong *)(param_2 + 0x10)) {
    lVar7 = 0;
    local_98 = puVar6;
    FUN_10040211c();
    uVar15 = (ulong)*(byte *)(*(long *)(lVar7 + -8) + 0x50);
    puVar18 = (undefined8 *)
              (param_2 + (uVar15 + 0x20 & (uVar15 ^ 0xffffffffffffffff)) +
              *(long *)(*(long *)(lVar7 + -8) + 0x48) * param_3);
    FUN_10002f154(puVar18,lVar17);
    uStack_68 = *(undefined8 *)(param_4 + 0x30);
    local_70 = *(undefined8 *)(param_4 + 0x28);
    uStack_78 = *(undefined8 *)(param_4 + 0x30);
    local_80 = *(undefined8 *)(param_4 + 0x28);
    SVar8.unknown = &DAT_10055c688;
    FUN_100002f94(&DAT_10055c688,&DAT_100431468);
    local_a0.unknown = SVar8.unknown;
    SwiftUI::State::get_wrappedValue(SVar8);
    uStack_78 = *(undefined8 *)(param_4 + 0x60);
    local_80 = *(undefined8 *)(param_4 + 0x58);
    SVar8.unknown = &DAT_10054ab50;
    FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
    SwiftUI::State::get_wrappedValue(SVar8);
    local_90 = param_1;
    if (local_88 == '\x01') {
      uVar9 = *(undefined8 *)(param_4 + 0x48);
      FUN_1003280cc(uVar9,*(undefined1 *)(param_4 + 0x50));
      bVar5 = (byte)uVar9;
    }
    else {
      bVar5 = 0;
    }
    lVar7 = 0;
    FUN_10032b194();
    puVar1 = (undefined8 *)(lVar17 + *(int *)(lVar7 + 0x14));
    uVar10 = 0;
    FUN_100327604();
    pcVar11 = &DAT_10055c860;
    FUN_1000036d0(&DAT_10055c860,FUN_100327604,&TargetProtocolConformanceDescriptor_100431198);
    uVar9 = uVar10;
    pcVar14 = pcVar11;
    OVar12 = SwiftUI::ObservedObject::init();
    *puVar1 = OVar12.unknown;
    puVar1[1] = uVar9;
    *(byte *)(lVar17 + *(int *)(lVar7 + 0x18)) = bVar5 & 1;
    local_80 = *puVar18;
    uVar9 = puVar18[1];
    uStack_78 = uVar9;
    _swift_bridgeObjectRetain_n(uVar9,2);
    SVar19.bridgeObject = (void *)0xe500000000000000;
    SVar19.str = (char *)0x6f7265685f;
    SVar20.bridgeObject = param_5;
    SVar20.str = pcVar14;
    Swift::String::append(SVar19,SVar20);
    _swift_bridgeObjectRelease(uVar9);
    uVar3 = uStack_78;
    uVar9 = local_80;
    puVar6 = &DAT_10055c868;
    FUN_100002f94(&DAT_10055c868,&DAT_100431810);
    iVar2 = *(int *)(puVar6 + 0x34);
    *(undefined8 *)(lVar17 + iVar2) = uVar9;
    ((undefined8 *)(lVar17 + iVar2))[1] = uVar3;
    FUN_10032488c();
    puVar13 = &DAT_10055c870;
    FUN_100002f94(&DAT_10055c870,&DAT_100431818);
    *(undefined **)(lVar17 + *(int *)(puVar13 + 0x24)) = puVar6;
    SVar8.unknown = local_a0.unknown;
    *(undefined8 *)(lVar17 + *(int *)(local_98 + 0x24)) = 0;
    uStack_78 = uStack_68;
    local_80 = local_70;
    SwiftUI::State::get_wrappedValue(SVar8);
    OVar12 = SwiftUI::ObservedObject::init(puVar13,uVar10,pcVar11);
    FUN_1000087e4(lVar17,lVar16,&DAT_10055c858,&DAT_100431808);
    lVar7 = local_90;
    FUN_1000087e4(lVar16,local_90,&DAT_10055c858,&DAT_100431808);
    puVar6 = &DAT_10055c878;
    FUN_100002f94(&DAT_10055c878,&DAT_100431820);
    puVar18 = (undefined8 *)(lVar7 + *(int *)(puVar6 + 0x30));
    *puVar18 = OVar12.unknown;
    puVar18[1] = uVar10;
    puVar18[2] = 0x3ff0000000000000;
    _swift_retain(uVar10);
    FUN_10002a29c(lVar17,&DAT_10055c858,&DAT_100431808);
    _swift_release(uVar10);
    FUN_10002a29c(lVar16,&DAT_10055c858,&DAT_100431808);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x100325bc4);
  (*pcVar4)();
}

