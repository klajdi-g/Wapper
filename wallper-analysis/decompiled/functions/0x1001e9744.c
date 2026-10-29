// rea decompile_all
// name: FUN_1001e9744
// address: 0x1001e9744
// body: available
// range: 0x1001e9744-0x1001e9b7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001e9744(long param_1,long param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  bool bVar2;
  URL UVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 uVar8;
  long lVar9;
  long extraout_x12;
  long lVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  long lVar15;
  long local_b0;
  long local_a8;
  undefined1 auStack_78 [24];
  
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar15 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar15 + 0x40));
  lVar14 = (long)&local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_10054ea38;
  local_b0 = lVar14;
  FUN_100002f94(&DAT_10054ea38,&DAT_100426270);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = lVar14 - extraout_x8_00;
  puVar5 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar9 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_a8 = lVar9;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar9 = lVar9 - extraout_x12;
  _swift_beginAccess(param_1 + _TtC7Wallper14PreviewManager::inFlightIDs,auStack_78,0x21,0);
  uVar7 = param_3;
  FUN_100227384(param_2,param_3);
  _swift_endAccess(auStack_78);
  _swift_bridgeObjectRelease(uVar7);
  (**(code **)(lVar15 + 0x38))(lVar9,1,1,UVar3.unknown);
  lVar11 = (long)*(int *)(puVar4 + 0x30);
  FUN_100077938(param_4,lVar14);
  FUN_100077938(lVar9,lVar14 + lVar11);
  pcVar13 = *(code **)(lVar15 + 0x30);
  lVar10 = lVar14;
  (*pcVar13)(lVar14,1,UVar3.unknown);
  lVar12 = local_a8;
  if ((int)lVar10 == 1) {
    FUN_10002a29c(lVar9,&DAT_100553d90,&DAT_10041bf10);
    lVar11 = lVar14 + lVar11;
    (*pcVar13)(lVar11,1,UVar3.unknown);
    if ((int)lVar11 == 1) {
      FUN_10002a29c(lVar14,&DAT_100553d90,&DAT_10041bf10);
LAB_1001e9a90:
      lVar11 = _TtC7Wallper14PreviewManager::failedIDs;
      _swift_beginAccess(param_1 + _TtC7Wallper14PreviewManager::failedIDs,auStack_78,0x20,0);
      lVar12 = *(long *)(param_1 + lVar11);
      if (*(long *)(lVar12 + 0x10) == 0) {
        lVar10 = 0;
      }
      else {
        _swift_bridgeObjectRetain(lVar12);
        lVar10 = param_2;
        uVar7 = param_3;
        FUN_10000464c();
        if ((uVar7 & 1) == 0) {
          lVar10 = 0;
        }
        else {
          lVar10 = *(long *)(*(long *)(lVar12 + 0x38) + lVar10 * 8);
        }
        _swift_bridgeObjectRelease(lVar12);
      }
      _swift_endAccess(auStack_78);
      if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x1001e9b7c);
        (*pcVar13)();
      }
      _swift_beginAccess(param_1 + lVar11,auStack_78,0x21,0);
      uVar6 = *(undefined8 *)(param_1 + lVar11);
      _swift_isUniquelyReferenced_nonNull_native(uVar6);
      uVar8 = *(undefined8 *)(param_1 + lVar11);
      *(undefined8 *)(param_1 + lVar11) = 0x8000000000000000;
      FUN_1003402f4(lVar10 + 1,param_2,param_3,uVar6);
      *(undefined8 *)(param_1 + lVar11) = uVar8;
      goto LAB_1001e9b4c;
    }
LAB_1001e9998:
    FUN_10002a29c(lVar14,&DAT_10054ea38,&DAT_100426270);
  }
  else {
    FUN_100077938(lVar14,local_a8);
    lVar10 = lVar14 + lVar11;
    (*pcVar13)(lVar10,1,UVar3.unknown);
    lVar1 = local_b0;
    if ((int)lVar10 == 1) {
      FUN_10002a29c(lVar9,&DAT_100553d90,&DAT_10041bf10);
      (**(code **)(lVar15 + 8))(lVar12,UVar3.unknown);
      goto LAB_1001e9998;
    }
    (**(code **)(lVar15 + 0x20))(local_b0,lVar14 + lVar11,UVar3.unknown);
    puVar4 = &DAT_100553da0;
    FUN_100047f94(&DAT_100553da0,0xff,PTR_typeMetadataAccessor_100520a18,
                  PTR_Foundation__Foundation__URL_>Swift__Equatable_100520a38);
    bVar2 = Swift::Equatable::___infix(lVar12,lVar1,UVar3.unknown,puVar4);
    pcVar13 = *(code **)(lVar15 + 8);
    (*pcVar13)(lVar1,UVar3.unknown);
    FUN_10002a29c(lVar9,&DAT_100553d90,&DAT_10041bf10);
    (*pcVar13)(lVar12,UVar3.unknown);
    FUN_10002a29c(lVar14,&DAT_100553d90,&DAT_10041bf10);
    if (bVar2) goto LAB_1001e9a90;
  }
  _swift_beginAccess(param_1 + _TtC7Wallper14PreviewManager::failedIDs,auStack_78,0x21,0);
  FUN_10027ea68(param_2,param_3);
LAB_1001e9b4c:
  _swift_endAccess(auStack_78);
  return;
}

