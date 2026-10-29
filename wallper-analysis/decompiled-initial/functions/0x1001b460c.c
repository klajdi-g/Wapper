// rea decompile_all
// name: FUN_1001b460c
// address: 0x1001b460c
// body: available
// range: 0x1001b460c-0x1001b49f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_1001b460c(void)

{
  long lVar1;
  bool bVar2;
  UUID UVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  long local_70;
  byte local_61;
  
  UVar3 = Foundation::UUID::typeMetadataAccessor();
  lVar9 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = (long)&local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_10054a9c0;
  local_70 = lVar8;
  FUN_100002f94(&DAT_10054a9c0,&DAT_100422d20);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = lVar8 - extraout_x8_00;
  puVar5 = &DAT_10054a9c8;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar10 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = lVar10 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar11 = lVar12 - extraout_x12_00;
  puVar5 = &DAT_10042a740;
  _swift_getKeyPath(&DAT_10042a740);
  puVar6 = &DAT_10042a768;
  _swift_getKeyPath(&DAT_10042a768);
  Combine::Published::_get_subscript(&local_61);
  _swift_release(puVar5);
  _swift_release(puVar6);
  if ((local_61 & 1) == 0) {
    puVar5 = &DAT_10042a670;
    _swift_getKeyPath(&DAT_10042a670);
    puVar6 = &DAT_10042a698;
    _swift_getKeyPath(&DAT_10042a698);
    Combine::Published::_get_subscript(lVar11);
    _swift_release(puVar5);
    _swift_release(puVar6);
    (**(code **)(lVar9 + 0x38))(lVar12,1,1,UVar3.unknown);
    lVar14 = (long)*(int *)(puVar4 + 0x30);
    FUN_1000087e4(lVar11,lVar8,&DAT_10054a9c8,&DAT_10041bbe0);
    FUN_1000087e4(lVar12,lVar8 + lVar14,&DAT_10054a9c8,&DAT_10041bbe0);
    pcVar13 = *(code **)(lVar9 + 0x30);
    lVar7 = lVar8;
    (*pcVar13)(lVar8,1,UVar3.unknown);
    if ((int)lVar7 == 1) {
      FUN_10002a29c(lVar12,&DAT_10054a9c8,&DAT_10041bbe0);
      FUN_10002a29c(lVar11,&DAT_10054a9c8,&DAT_10041bbe0);
      lVar14 = lVar8 + lVar14;
      (*pcVar13)(lVar14,1,UVar3.unknown);
      if ((int)lVar14 == 1) {
        FUN_10002a29c(lVar8,&DAT_10054a9c8,&DAT_10041bbe0);
        return true;
      }
    }
    else {
      FUN_1000087e4(lVar8,lVar10,&DAT_10054a9c8,&DAT_10041bbe0);
      lVar7 = lVar8 + lVar14;
      (*pcVar13)(lVar7,1,UVar3.unknown);
      lVar1 = local_70;
      if ((int)lVar7 != 1) {
        (**(code **)(lVar9 + 0x20))(local_70,lVar8 + lVar14,UVar3.unknown);
        puVar4 = &DAT_10054a130;
        FUN_1000036d0(&DAT_10054a130,PTR_typeMetadataAccessor_100520bd8,
                      PTR_Foundation__Foundation__UUID_>Swift__Equatable_100520bf8);
        bVar2 = Swift::Equatable::___infix(lVar10,lVar1,UVar3.unknown,puVar4);
        pcVar13 = *(code **)(lVar9 + 8);
        (*pcVar13)(lVar1,UVar3.unknown);
        FUN_10002a29c(lVar12,&DAT_10054a9c8,&DAT_10041bbe0);
        FUN_10002a29c(lVar11,&DAT_10054a9c8,&DAT_10041bbe0);
        (*pcVar13)(lVar10,UVar3.unknown);
        FUN_10002a29c(lVar8,&DAT_10054a9c8,&DAT_10041bbe0);
        return bVar2;
      }
      FUN_10002a29c(lVar12,&DAT_10054a9c8,&DAT_10041bbe0);
      FUN_10002a29c(lVar11,&DAT_10054a9c8,&DAT_10041bbe0);
      (**(code **)(lVar9 + 8))(lVar10,UVar3.unknown);
    }
    FUN_10002a29c(lVar8,&DAT_10054a9c0,&DAT_100422d20);
  }
  return false;
}

