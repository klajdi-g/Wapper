// rea decompile_all
// name: FUN_10001ef3c
// address: 0x10001ef3c
// body: available
// range: 0x10001ef3c-0x10001f3d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10001ef3c(void)

{
  undefined1 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  TargetProtocolConformanceDescriptor *pTVar6;
  uint uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar8;
  long extraout_x12;
  long extraout_x12_00;
  long lVar9;
  long *unaff_x20;
  long lVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_80 [8];
  undefined1 *local_78;
  long local_70;
  byte local_61;
  
  lVar2 = 0;
  FUN_10040211c();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar11 + 0x40));
  puVar3 = &DAT_10054b6b8;
  local_78 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_100002f94(&DAT_10054b6b8,&DAT_10041ca50);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  puVar4 = &DAT_10054ac40;
  FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar8 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_70 = lVar8;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar8 = lVar8 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = lVar8 - extraout_x12_00;
  lVar14 = *unaff_x20;
  if (lVar14 == 0) {
    FUN_1001b7378(0);
    pcVar12 = FUN_1001b7378;
    puVar3 = &DAT_100553df0;
    pTVar6 = &TargetProtocolConformanceDescriptor_10042a5d0;
LAB_10001f368:
    FUN_1000036d0(puVar3,pcVar12,pTVar6);
    SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x10001f384);
    (*pcVar12)();
  }
  puVar4 = &DAT_10041bb00;
  _swift_getKeyPath(&DAT_10041bb00);
  puVar5 = &DAT_10041bb28;
  _swift_getKeyPath(&DAT_10041bb28);
  _swift_retain_n(lVar14,2);
  Combine::Published::_get_subscript(&local_61);
  _swift_release(puVar4);
  _swift_release(puVar5);
  _swift_release(lVar14);
  if ((local_61 & 1) == 0) {
    lVar15 = unaff_x20[4];
    if (lVar15 == 0) {
      FUN_100226ac0(0);
      pcVar12 = FUN_100226ac0;
      puVar3 = &DAT_10054aa48;
      pTVar6 = &TargetProtocolConformanceDescriptor_10042b420;
      goto LAB_10001f368;
    }
    lVar10 = unaff_x20[2];
    if (lVar10 == 0) {
      FUN_100279594(0);
      FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
      _swift_retain(lVar15);
      SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x10001f3d4);
      (*pcVar12)();
    }
    _swift_retain(lVar15);
    _swift_retain(lVar10);
    FUN_1001b2798(lVar13,lVar15,lVar10);
    _swift_release(lVar14);
    _swift_release(lVar15);
    _swift_release(lVar10);
    (**(code **)(lVar11 + 0x38))(lVar8,1,1,lVar2);
    lVar14 = (long)*(int *)(puVar3 + 0x30);
    FUN_1000087e4(lVar13,lVar9,&DAT_10054ac40,&DAT_10041ce70);
    FUN_1000087e4(lVar8,lVar9 + lVar14,&DAT_10054ac40,&DAT_10041ce70);
    pcVar12 = *(code **)(lVar11 + 0x30);
    lVar15 = lVar9;
    (*pcVar12)(lVar9,1,lVar2);
    lVar11 = local_70;
    if ((int)lVar15 == 1) {
      FUN_10002a29c(lVar8,&DAT_10054ac40,&DAT_10041ce70);
      FUN_10002a29c(lVar13,&DAT_10054ac40,&DAT_10041ce70);
      lVar14 = lVar9 + lVar14;
      (*pcVar12)(lVar14,1,lVar2);
      if ((int)lVar14 == 1) {
        FUN_10002a29c(lVar9,&DAT_10054ac40,&DAT_10041ce70);
        goto LAB_10001f0c0;
      }
    }
    else {
      FUN_1000087e4(lVar9,local_70,&DAT_10054ac40,&DAT_10041ce70);
      lVar15 = lVar9 + lVar14;
      (*pcVar12)(lVar15,1,lVar2);
      puVar1 = local_78;
      if ((int)lVar15 != 1) {
        FUN_100007e64(lVar9 + lVar14,local_78,FUN_10040211c);
        lVar2 = lVar11;
        FUN_10040a7a0(lVar11,puVar1);
        FUN_100029548(puVar1,FUN_10040211c);
        FUN_10002a29c(lVar8,&DAT_10054ac40,&DAT_10041ce70);
        FUN_10002a29c(lVar13,&DAT_10054ac40,&DAT_10041ce70);
        FUN_100029548(lVar11,FUN_10040211c);
        FUN_10002a29c(lVar9,&DAT_10054ac40,&DAT_10041ce70);
        uVar7 = (uint)lVar2 ^ 1;
        goto LAB_10001f2f0;
      }
      FUN_10002a29c(lVar8,&DAT_10054ac40,&DAT_10041ce70);
      FUN_10002a29c(lVar13,&DAT_10054ac40,&DAT_10041ce70);
      FUN_100029548(lVar11,FUN_10040211c);
    }
    FUN_10002a29c(lVar9,&DAT_10054b6b8,&DAT_10041ca50);
    uVar7 = 1;
  }
  else {
    _swift_release(lVar14);
LAB_10001f0c0:
    uVar7 = 0;
  }
LAB_10001f2f0:
  return uVar7 & 1;
}

