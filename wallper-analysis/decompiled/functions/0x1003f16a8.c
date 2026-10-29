// rea decompile_all
// name: FUN_1003f16a8
// address: 0x1003f16a8
// body: available
// range: 0x1003f16a8-0x1003f19d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003f16a8(long param_1,undefined8 param_2,ID param_3,uint param_4)

{
  ID IVar1;
  bool bVar2;
  URL UVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  uint uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  undefined1 auStack_90 [12];
  uint local_84;
  ID local_80;
  undefined1 auStack_78 [24];
  
  local_84 = param_4;
  local_80 = param_3;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar8 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar8 + 0x40));
  puVar10 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_10054ea38;
  FUN_100002f94(&DAT_10054ea38,&DAT_100426270);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)puVar10 - extraout_x8_00;
  puVar5 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar11 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar6 = _TtCV7Wallper13VideoLoopView11Coordinator::currentURL;
  lVar12 = lVar11 - extraout_x12;
  _swift_beginAccess(param_1 + _TtCV7Wallper13VideoLoopView11Coordinator::currentURL,auStack_78,0,0)
  ;
  (**(code **)(lVar8 + 0x10))(lVar12,param_2,UVar3.unknown);
  (**(code **)(lVar8 + 0x38))(lVar12,0,1,UVar3.unknown);
  lVar13 = (long)*(int *)(puVar4 + 0x30);
  FUN_100077938(param_1 + lVar6,lVar9);
  FUN_100077938(lVar12,lVar9 + lVar13);
  pcVar14 = *(code **)(lVar8 + 0x30);
  lVar6 = lVar9;
  (*pcVar14)(lVar9,1,UVar3.unknown);
  if ((int)lVar6 == 1) {
    FUN_10002a29c(lVar12,&DAT_100553d90,&DAT_10041bf10);
    lVar13 = lVar9 + lVar13;
    (*pcVar14)(lVar13,1,UVar3.unknown);
    if ((int)lVar13 != 1) {
LAB_1003f18c4:
      FUN_10002a29c(lVar9,&DAT_10054ea38,&DAT_100426270);
      return;
    }
    puVar4 = &DAT_100553d90;
    uVar7 = 0x41bf10;
    FUN_10002a29c(lVar9,&DAT_100553d90);
  }
  else {
    FUN_100077938(lVar9,lVar11);
    lVar6 = lVar9 + lVar13;
    (*pcVar14)(lVar6,1,UVar3.unknown);
    if ((int)lVar6 == 1) {
      FUN_10002a29c(lVar12,&DAT_100553d90,&DAT_10041bf10);
      (**(code **)(lVar8 + 8))(lVar11,UVar3.unknown);
      goto LAB_1003f18c4;
    }
    (**(code **)(lVar8 + 0x20))(puVar10,lVar9 + lVar13,UVar3.unknown);
    puVar4 = &DAT_100553da0;
    FUN_1000036d0(&DAT_100553da0,PTR_typeMetadataAccessor_100520a18,
                  PTR_Foundation__Foundation__URL_>Swift__Equatable_100520a38);
    bVar2 = Swift::Equatable::___infix(lVar11,puVar10,UVar3.unknown,puVar4);
    pcVar14 = *(code **)(lVar8 + 8);
    (*pcVar14)(puVar10,UVar3.unknown);
    puVar4 = &DAT_100553d90;
    uVar7 = 0x41bf10;
    FUN_10002a29c(lVar12,&DAT_100553d90,&DAT_10041bf10);
    (*pcVar14)(lVar11,UVar3.unknown);
    FUN_10002a29c(lVar9,&DAT_100553d90);
    if (!bVar2) {
      return;
    }
  }
  FUN_1003f104c();
  IVar1 = local_80;
  if ((uVar7 & 0xff) != 1) {
    objc_stub::setPreferredMaximumResolution_(local_80,lVar9,puVar4);
  }
  FUN_1003f19d4(IVar1,local_84 & 1);
  return;
}

