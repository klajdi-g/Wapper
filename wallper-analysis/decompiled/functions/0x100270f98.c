// rea decompile_all
// name: FUN_100270f98
// address: 0x100270f98
// body: available
// range: 0x100270f98-0x1002713eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100270f98(void)

{
  URL UVar1;
  URL UVar2;
  undefined *puVar3;
  URL UVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  undefined8 extraout_x13;
  undefined8 extraout_x14;
  undefined8 extraout_x15;
  undefined8 *unaff_x20;
  long lVar8;
  code *pcVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined1 *puVar15;
  long lVar16;
  code *pcVar17;
  ulong uVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  undefined1 auStack_c0 [8];
  
  uVar13 = *unaff_x20;
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar8 = *(long *)(UVar1.unknown + -8);
  lVar11 = *(long *)(lVar8 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar5 = auStack_c0 + -(lVar11 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  (*(code *)PTR____chkstk_darwin_100521118)();
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar6 = puVar5 + ((-extraout_x12_00 - extraout_x12) - extraout_x12_01);
  (*(code *)PTR____chkstk_darwin_100521118)();
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar15 = puVar6 + (-extraout_x12_03 - extraout_x12_02);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar16 = (long)puVar15 - extraout_x12_04;
  (*(code *)PTR____chkstk_darwin_100521118)();
  if ((*(byte *)((long)unaff_x20 + _TtC7Wallper17VideoLibraryStore::isLoadingRemote) & 1) == 0) {
    *(undefined1 *)((long)unaff_x20 + _TtC7Wallper17VideoLibraryStore::isLoadingRemote) = 1;
    if (DAT_100559108 != -1) {
      _swift_once(&DAT_100559108,FUN_10028f180);
    }
    UVar2 = UVar1;
    FUN_100099338(UVar1.unknown,&DAT_100577d98);
    pcVar9 = *(code **)(lVar8 + 0x10);
    UVar4 = UVar1;
    (*pcVar9)(puVar15,UVar2.unknown);
    SVar19.bridgeObject = (void *)0xe600000000000000;
    SVar19.str = (char *)0x736f65646976;
    Foundation::URL::appendingPathComponent(SVar19,UVar4);
    pcVar17 = *(code **)(lVar8 + 8);
    (*pcVar17)(puVar15,UVar1.unknown);
    SVar20.bridgeObject = (void *)0xe800000000000000;
    SVar20.str = (char *)0x6c6169636966666f;
    Foundation::URL::appendingPathComponent(SVar20,UVar4);
    (*pcVar17)(lVar16,UVar1.unknown);
    UVar4 = UVar1;
    (*pcVar9)(extraout_x13,UVar2.unknown);
    SVar21.bridgeObject = (void *)0xe600000000000000;
    SVar21.str = (char *)0x736f65646976;
    Foundation::URL::appendingPathComponent(SVar21,UVar4);
    (*pcVar17)(extraout_x13,UVar1.unknown);
    SVar22.bridgeObject = (void *)0xee00646574617265;
    SVar22.str = (char *)0x6e65672d72657375;
    Foundation::URL::appendingPathComponent(SVar22,UVar4);
    (*pcVar17)(puVar15,UVar1.unknown);
    SVar23.bridgeObject = (void *)0xed00006f65646976;
    SVar23.str = (char *)0x2d7265706c6c6177;
    Foundation::URL::appendingPathComponent(SVar23,UVar4);
    SVar24.bridgeObject = (void *)0xe800000000000000;
    SVar24.str = (char *)0x7377656976657270;
    Foundation::URL::appendingPathComponent(SVar24,UVar4);
    SVar25.bridgeObject = (void *)0x80000001004e2fe0;
    SVar25.str = (char *)0xd000000000000016;
    Foundation::URL::appendingPathComponent(SVar25,UVar4);
    (*pcVar9)(extraout_x15,puVar15,UVar1.unknown);
    (*pcVar9)(extraout_x14,extraout_x13,UVar1.unknown);
    (*pcVar9)(puVar5,puVar6,UVar1.unknown);
    uVar7 = (ulong)*(byte *)(lVar8 + 0x50);
    uVar10 = uVar7 + 0x18 & (uVar7 ^ 0xffffffffffffffff);
    uVar18 = lVar11 + uVar7 + uVar10 & (uVar7 ^ 0xffffffffffffffff);
    uVar14 = lVar11 + uVar7 + uVar18 & (uVar7 ^ 0xffffffffffffffff);
    uVar12 = lVar11 + uVar14 + 7 & 0xfffffffffffffff8;
    puVar3 = &DAT_100536228;
    _swift_allocObject(&DAT_100536228,uVar12 + 8,uVar7 | 7);
    *(undefined8 **)(puVar3 + 0x10) = unaff_x20;
    pcVar9 = *(code **)(lVar8 + 0x20);
    (*pcVar9)(puVar3 + uVar10,extraout_x15,UVar1.unknown);
    (*pcVar9)(puVar3 + uVar18,extraout_x14,UVar1.unknown);
    (*pcVar9)(puVar3 + uVar14,puVar5,UVar1.unknown);
    *(undefined8 *)(puVar3 + uVar12) = uVar13;
    _swift_retain(unaff_x20);
    FUN_100280554(lVar16 - extraout_x12_05,lVar16,FUN_10027f834,puVar3);
    _swift_release(puVar3);
    (*pcVar17)(puVar6,UVar1.unknown);
    (*pcVar17)(extraout_x13,UVar1.unknown);
    (*pcVar17)(puVar15,UVar1.unknown);
    (*pcVar17)(lVar16,UVar1.unknown);
    (*pcVar17)(lVar16 - extraout_x12_05,UVar1.unknown);
  }
  return;
}

