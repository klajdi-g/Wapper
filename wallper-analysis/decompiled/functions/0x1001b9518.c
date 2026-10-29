// rea decompile_all
// name: FUN_1001b9518
// address: 0x1001b9518
// body: available
// range: 0x1001b9518-0x1001b9927 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001b9518(undefined8 param_1)

{
  undefined1 *puVar1;
  bool bVar2;
  UUID UVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar8;
  long extraout_x12;
  long extraout_x12_00;
  long lVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_80 [8];
  undefined1 *local_78;
  
  UVar3 = Foundation::UUID::typeMetadataAccessor();
  lVar11 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar11 + 0x40));
  puVar4 = &DAT_10054a9c0;
  local_78 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_100002f94(&DAT_10054a9c0,&DAT_100422d20);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  puVar5 = &DAT_10054a9c8;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar8 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = lVar8 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = lVar13 - extraout_x12_00;
  FUN_1001bb830();
  FUN_1001bbef0();
  (**(code **)(lVar11 + 0x10))(lVar12,param_1,UVar3.unknown);
  (**(code **)(lVar11 + 0x38))(lVar12,0,1,UVar3.unknown);
  puVar5 = &DAT_10042a670;
  _swift_getKeyPath(&DAT_10042a670);
  puVar6 = &DAT_10042a698;
  _swift_getKeyPath(&DAT_10042a698);
  Combine::Published::_get_subscript(lVar13);
  _swift_release(puVar5);
  _swift_release(puVar6);
  lVar14 = (long)*(int *)(puVar4 + 0x30);
  FUN_1000087e4(lVar12,lVar9,&DAT_10054a9c8,&DAT_10041bbe0);
  FUN_1000087e4(lVar13,lVar9 + lVar14,&DAT_10054a9c8,&DAT_10041bbe0);
  pcVar10 = *(code **)(lVar11 + 0x30);
  lVar7 = lVar9;
  (*pcVar10)(lVar9,1,UVar3.unknown);
  if ((int)lVar7 == 1) {
    FUN_10002a29c(lVar13,&DAT_10054a9c8,&DAT_10041bbe0);
    FUN_10002a29c(lVar12,&DAT_10054a9c8,&DAT_10041bbe0);
    lVar14 = lVar9 + lVar14;
    (*pcVar10)(lVar14,1,UVar3.unknown);
    if ((int)lVar14 != 1) {
LAB_1001b97e4:
      FUN_10002a29c(lVar9,&DAT_10054a9c0,&DAT_100422d20);
      return;
    }
    FUN_10002a29c(lVar9,&DAT_10054a9c8,&DAT_10041bbe0);
  }
  else {
    FUN_1000087e4(lVar9,lVar8,&DAT_10054a9c8,&DAT_10041bbe0);
    lVar7 = lVar9 + lVar14;
    (*pcVar10)(lVar7,1,UVar3.unknown);
    puVar1 = local_78;
    if ((int)lVar7 == 1) {
      FUN_10002a29c(lVar13,&DAT_10054a9c8,&DAT_10041bbe0);
      FUN_10002a29c(lVar12,&DAT_10054a9c8,&DAT_10041bbe0);
      (**(code **)(lVar11 + 8))(lVar8,UVar3.unknown);
      goto LAB_1001b97e4;
    }
    (**(code **)(lVar11 + 0x20))(local_78,lVar9 + lVar14,UVar3.unknown);
    puVar4 = &DAT_10054a130;
    FUN_1000036d0(&DAT_10054a130,PTR_typeMetadataAccessor_100520bd8,
                  PTR_Foundation__Foundation__UUID_>Swift__Equatable_100520bf8);
    bVar2 = Swift::Equatable::___infix(lVar8,puVar1,UVar3.unknown,puVar4);
    pcVar10 = *(code **)(lVar11 + 8);
    (*pcVar10)(puVar1,UVar3.unknown);
    FUN_10002a29c(lVar13,&DAT_10054a9c8,&DAT_10041bbe0);
    FUN_10002a29c(lVar12,&DAT_10054a9c8,&DAT_10041bbe0);
    (*pcVar10)(lVar8,UVar3.unknown);
    FUN_10002a29c(lVar9,&DAT_10054a9c8,&DAT_10041bbe0);
    if (!bVar2) {
      return;
    }
  }
  FUN_100002f94(&DAT_10054ac18,&DAT_10041beb0);
  FUN_1000087a0(&DAT_100556858,&DAT_10054ac18,&DAT_10041beb0,
                PTR__Combine__protocol_conformance_descriptor_for_Combine_PassthroughSubject<A,B>___Combine_Subject_in_Combine_>Combine__Subject_100521460
               );
  (extension_Combine)::Combine::Subject::_send();
  return;
}

