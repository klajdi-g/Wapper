// rea decompile_all
// name: FUN_10019d480
// address: 0x10019d480
// body: available
// range: 0x10019d480-0x10019d7e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10019d480(long *param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  undefined8 *puVar1;
  void *pvVar2;
  uint uVar3;
  RGBColorSpace RVar4;
  undefined7 extraout_var;
  undefined *puVar5;
  char *pcVar6;
  undefined8 uVar7;
  Published *pPVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  Color CVar11;
  long *plVar12;
  ContiguousArray CVar13;
  char *pcVar14;
  long extraout_x8;
  code *pcVar15;
  double *pdVar16;
  long lVar17;
  long lVar18;
  ContiguousArray oldCount;
  long lVar19;
  double red;
  double green;
  double blue;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  long *local_b0;
  undefined *local_a0;
  undefined8 uStack_98;
  char *local_80;
  void *pvStack_78;
  
  RVar4 = SwiftUI::Color::RGBColorSpace::typeMetadataAccessor();
  lVar18 = *(long *)(CONCAT71(extraout_var,RVar4.value) + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar18 + 0x40));
  lVar17 = (long)&local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_a0 = (undefined *)0x0;
  uStack_98 = 0xe000000000000000;
  puVar5 = &DAT_100429d78;
  _swift_getKeyPath(&DAT_100429d78);
  pcVar6 = &DAT_100429da0;
  _swift_getKeyPath();
  pcVar14 = pcVar6;
  Combine::Published::_get_subscript(&local_80,param_1,puVar5);
  _swift_release(puVar5);
  _swift_release(pcVar6);
  pcVar6 = (char *)0x0;
  if (pvStack_78 != (void *)0x0) {
    pcVar6 = local_80;
  }
  pvVar2 = (void *)0xe000000000000000;
  if (pvStack_78 != (void *)0x0) {
    pvVar2 = pvStack_78;
  }
  SVar20.bridgeObject = pvVar2;
  SVar20.str = pcVar6;
  SVar23.bridgeObject = param_4;
  SVar23.str = pcVar14;
  Swift::String::append(SVar20,SVar23);
  _swift_bridgeObjectRelease(pvVar2);
  SVar21.bridgeObject = (void *)0xe100000000000000;
  SVar21.str = (char *)0x7c;
  SVar24.bridgeObject = param_4;
  SVar24.str = pcVar14;
  Swift::String::append(SVar21,SVar24);
  puVar5 = &DAT_100429dc0;
  _swift_getKeyPath(&DAT_100429dc0);
  pcVar6 = &DAT_100429de8;
  _swift_getKeyPath();
  pcVar14 = pcVar6;
  Combine::Published::_get_subscript(&local_80,param_1,puVar5);
  _swift_release(puVar5);
  _swift_release(pcVar6);
  pcVar6 = (char *)0x0;
  if (pvStack_78 != (void *)0x0) {
    pcVar6 = local_80;
  }
  pvVar2 = (void *)0xe000000000000000;
  if (pvStack_78 != (void *)0x0) {
    pvVar2 = pvStack_78;
  }
  SVar22.bridgeObject = pvVar2;
  SVar22.str = pcVar6;
  SVar25.bridgeObject = param_4;
  SVar25.str = pcVar14;
  Swift::String::append(SVar22,SVar25);
  _swift_bridgeObjectRelease(pvVar2);
  puVar1 = (undefined8 *)((long)param_1 + _TtC7Wallper17NowPlayingManager::artworkKey);
  uVar7 = puVar1[1];
  *puVar1 = local_a0;
  puVar1[1] = uStack_98;
  _swift_bridgeObjectRelease(uVar7);
  pPVar8 = (Published *)&DAT_100429f20;
  _swift_getKeyPath(&DAT_100429f20);
  puVar5 = &DAT_100429f48;
  _swift_getKeyPath(&DAT_100429f48);
  local_a0 = (undefined *)0x0;
  _swift_retain(param_1);
  Combine::Published::_set_subscript(pPVar8,&local_a0,param_1,pPVar8,puVar5);
  puVar5 = &DAT_100429f68;
  _swift_getKeyPath(&DAT_100429f68);
  puVar9 = &DAT_100429f90;
  _swift_getKeyPath(&DAT_100429f90);
  ppuVar10 = &local_a0;
  plVar12 = param_1;
  Combine::Published::_modify_subscript();
  if (!SCARRY8(*plVar12,1)) {
    *plVar12 = *plVar12 + 1;
    (*(code *)ppuVar10)(&local_a0,0);
    _swift_release(puVar5);
    _swift_release(puVar9);
    puVar5 = &DAT_10054c2a8;
    FUN_100002f94(&DAT_10054c2a8,&DAT_10041d858);
    CVar13.unknown = &DAT_100555ef8;
    _swift_initStaticObject();
    uVar7 = *(undefined8 *)((long)param_1 + _TtC7Wallper17NowPlayingManager::dominantColorTuples);
    *(undefined **)((long)param_1 + _TtC7Wallper17NowPlayingManager::dominantColorTuples) = puVar5;
    local_b0 = param_1;
    _swift_bridgeObjectRelease(uVar7);
    local_a0 = PTR___swiftEmptyArrayStorage_100524190;
    lVar19 = 0x10;
    Swift::ContiguousArray::_reserveCapacity(0x10,CVar13);
    uVar3 = *(uint *)
             PTR___enum_case_for_SwiftUI_Color_RGBColorSpace_sRGB_SwiftUI_Color_RGBColorSpace_Type___>_SwiftUI_Color_RGBColorSpace_1005231e0
    ;
    pcVar15 = *(code **)(lVar18 + 0x68);
    pdVar16 = (double *)(puVar5 + 0x30);
    do {
      red = pdVar16[-2];
      green = pdVar16[-1];
      blue = *pdVar16;
      CVar13.unknown = (undefined *)(ulong)uVar3;
      (*pcVar15)(lVar17,(undefined *)(ulong)uVar3,CONCAT71(extraout_var,RVar4.value));
      CVar11 = SwiftUI::Color::init((RGBColorSpace)(__int8)lVar17,red,green,blue,1.0);
      Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique
                ((ContiguousArray)CVar11.unknown);
                    /* WARNING: Load size is inaccurate */
      oldCount.unknown = local_a0[0x10];
      Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer
                ((__int64)oldCount.unknown,CVar13);
      Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity
                (oldCount.unknown,CVar11.unknown);
      Swift::ContiguousArray::__endMutation(oldCount);
      puVar5 = local_a0;
      lVar19 = lVar19 + -1;
      pdVar16 = pdVar16 + 3;
    } while (lVar19 != 0);
    pPVar8 = (Published *)&DAT_100429ce8;
    _swift_getKeyPath(&DAT_100429ce8);
    puVar9 = &DAT_100429d10;
    _swift_getKeyPath(&DAT_100429d10);
    plVar12 = local_b0;
    local_a0 = puVar5;
    _swift_retain(local_b0);
    Combine::Published::_set_subscript(pPVar8,&local_a0,plVar12,pPVar8,puVar9);
    FUN_1001790d4(1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar15 = (code *)SoftwareBreakpoint(1,0x10019d7e4);
  (*pcVar15)();
}

