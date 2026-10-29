// rea decompile_all
// name: FUN_1002c7ebc
// address: 0x1002c7ebc
// body: available
// range: 0x1002c7ebc-0x1002c829b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002c80c8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1002c7ebc(undefined8 param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  Design DVar3;
  long lVar4;
  URL UVar5;
  URL UVar6;
  undefined *puVar7;
  Image IVar8;
  Font FVar9;
  Color CVar10;
  Color CVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  String systemName;
  undefined *local_80;
  long local_78 [3];
  
  puVar12 = &DAT_10054a828;
  local_78[1] = param_1;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = (long)&local_80 - extraout_x8;
  puVar12 = &DAT_10055a608;
  FUN_100002f94(&DAT_10055a608,&DAT_10042e7a8);
  local_80 = puVar12;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar13 = (undefined8 *)(lVar15 - extraout_x8_00);
  lVar4 = 0;
  FUN_1002cb204();
  local_78[0] = lVar4;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar16 = (long)puVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar12 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = lVar16 - extraout_x8_02;
  UVar5 = Foundation::URL::typeMetadataAccessor();
  lVar14 = *(long *)(UVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar14 + 0x40));
  puVar12 = (undefined *)(lVar17 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  lVar4 = 0;
  FUN_100170d98();
  FUN_1000087e4(param_2 + *(int *)(lVar4 + 0x24),lVar17,&DAT_100553d90,&DAT_10041bf10);
  lVar4 = lVar17;
  (**(code **)(lVar14 + 0x30))(lVar17,1,UVar5.unknown);
  if ((int)lVar4 == 1) {
    FUN_10002a29c(lVar17,&DAT_100553d90,&DAT_10041bf10);
  }
  else {
    UVar6.unknown = puVar12;
    (**(code **)(lVar14 + 0x20))(puVar12,lVar17,UVar5.unknown);
    bVar2 = Foundation::URL::get_isFileURL(UVar6);
    if (bVar2) {
      (**(code **)(lVar14 + 0x10))(lVar16,puVar12,UVar5.unknown);
      iVar1 = *(int *)(local_78[0] + 0x14);
      local_78[2] = 0;
      puVar7 = &DAT_10054bd30;
      FUN_100002f94(&DAT_10054bd30,&DAT_10041d460);
      SwiftUI::State::init(lVar16 + iVar1,puVar7,puVar7);
      FUN_100029504(lVar16,puVar13,FUN_1002cb204);
      _swift_storeEnumTagMultiPayload(puVar13,local_80,0);
      FUN_100002f94(&DAT_1005522f0,&DAT_100424690);
      FUN_1000036d0(&DAT_10055a610,FUN_1002cb204,&TargetProtocolConformanceDescriptor_10042e820);
      FUN_1000fa8e4();
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar13);
      FUN_100029548(lVar16,FUN_1002cb204);
      (**(code **)(lVar14 + 8))(puVar12,UVar5.unknown);
      return;
    }
    (**(code **)(lVar14 + 8))(puVar12,UVar5.unknown);
  }
  systemName.bridgeObject = (void *)0xe700000000000000;
  systemName.str = (char *)0x79616c70736964;
  IVar8 = SwiftUI::Image::init(systemName);
  DVar3 = SwiftUI::Font::Design::typeMetadataAccessor();
  lVar4 = CONCAT71((int7)((ulong)IVar8.unknown >> 8),DVar3.value);
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar15,1,1,lVar4);
  FVar9 = SwiftUI::Font::_system((CGFloat)0x0,(Font)0x1);
  FUN_10002a29c(lVar15,&DAT_10054a828,&DAT_10041e3c0);
  CVar10.unknown = &DAT_10042e710;
  _swift_getKeyPath();
  CVar11 = SwiftUI::Color::get_secondary(CVar10);
  puVar12 = &DAT_10042e7b0;
  _swift_getKeyPath();
  *puVar13 = IVar8.unknown;
  puVar13[1] = CVar10.unknown;
  puVar13[2] = FVar9.unknown;
  puVar13[3] = puVar12;
  puVar13[4] = CVar11.unknown;
  _swift_storeEnumTagMultiPayload(puVar13,local_80,1);
  FUN_100002f94(&DAT_1005522f0,&DAT_100424690);
  FUN_1000036d0(&DAT_10055a610,FUN_1002cb204,&TargetProtocolConformanceDescriptor_10042e820);
  FUN_1000fa8e4();
  (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar13);
  return;
}

