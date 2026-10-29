// rea decompile_all
// name: FUN_1000eb2a0
// address: 0x1000eb2a0
// body: available
// range: 0x1000eb2a0-0x1000eb747 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000eb2a0(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  char *pcVar7;
  long lVar8;
  char *pcVar9;
  void *in_x3;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined8 uVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  void *pvVar15;
  char *pcVar16;
  double dVar17;
  double dVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  double local_b0 [3];
  long local_98;
  char *local_90;
  void *pvStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  puVar6 = &DAT_10054ac40;
  FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  dVar17 = (double)((long)local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_b0[0] = dVar17;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = (long)dVar17 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = lVar12 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = lVar13 - extraout_x12_01;
  local_80 = 0x203a726f68747541;
  uStack_78 = 0xe800000000000000;
  FUN_1000e3728(lVar14);
  pcVar7 = (char *)0x0;
  FUN_10040211c();
  pcVar11 = *(code **)(*(long *)(pcVar7 + -8) + 0x30);
  lVar8 = lVar14;
  pcVar9 = pcVar7;
  (*pcVar11)(lVar14,1);
  if ((int)lVar8 == 1) {
    pcVar9 = &DAT_10041ce70;
    FUN_10002a29c(lVar14,&DAT_10054ac40);
LAB_1000eb3f8:
    pvVar15 = (void *)0xe700000000000000;
    pcVar16 = (char *)0x7265706c6c6157;
  }
  else {
    pcVar16 = *(char **)(lVar14 + *(int *)(pcVar7 + 0x1c));
    pvVar15 = (void *)((undefined8 *)(lVar14 + *(int *)(pcVar7 + 0x1c)))[1];
    _swift_bridgeObjectRetain(pvVar15);
    FUN_100029548(lVar14,FUN_10040211c);
    if (pvVar15 == (void *)0x0) goto LAB_1000eb3f8;
  }
  SVar22.bridgeObject = pvVar15;
  SVar22.str = pcVar16;
  SVar23.bridgeObject = in_x3;
  SVar23.str = pcVar9;
  Swift::String::append(SVar22,SVar23);
  _swift_bridgeObjectRelease();
  uVar4 = uStack_78;
  uVar2 = local_80;
  local_80 = 0x203a657a6953;
  uStack_78 = 0xe600000000000000;
  FUN_1000e8f58();
  local_b0[2] = (double)uVar4;
  if (((ulong)pvVar15 & 1) == 0) {
    local_90 = (char *)0x0;
    pvStack_88 = (void *)0xe000000000000000;
    FUN_1000e3728(lVar13);
    lVar8 = lVar13;
    pcVar9 = pcVar7;
    (*pcVar11)(lVar13,1);
    if ((int)lVar8 == 1) {
      pcVar9 = &DAT_10041ce70;
      FUN_10002a29c(lVar13,&DAT_10054ac40);
      dVar17 = 0.0;
    }
    else {
      dVar18 = *(double *)(lVar13 + *(int *)(pcVar7 + 0x38));
      cVar1 = *(char *)((double *)(lVar13 + *(int *)(pcVar7 + 0x38)) + 1);
      FUN_100029548(lVar13,FUN_10040211c);
      dVar17 = 0.0;
      if (cVar1 != '\x01') {
        dVar17 = dVar18;
      }
    }
    dVar17 = (double)(long)dVar17;
    if (0x7fefffffffffffff < (ulong)ABS(dVar17)) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x1000eb740);
      (*pcVar11)();
    }
    if (dVar17 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x1000eb744);
      (*pcVar11)();
    }
    if (9.223372036854776e+18 <= dVar17) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x1000eb748);
      (*pcVar11)();
    }
    local_98 = (long)dVar17;
    SVar22 = Swift::CustomStringConvertible::get_description();
    SVar24.bridgeObject = in_x3;
    SVar24.str = pcVar9;
    Swift::String::append(SVar22,SVar24);
    _swift_bridgeObjectRelease(SVar22.bridgeObject);
    SVar19.bridgeObject = (void *)0xe300000000000000;
    SVar19.str = (char *)0x626d20;
    SVar25.bridgeObject = in_x3;
    SVar25.str = pcVar9;
    Swift::String::append(SVar19,SVar25);
    pcVar16 = local_90;
    pvVar15 = pvStack_88;
  }
  else {
    pcVar16 = (char *)0x6174736e69657250;
    pvVar15 = (void *)0xec00000064656c6c;
  }
  local_b0[1] = (double)uVar2;
  SVar20.bridgeObject = pvVar15;
  SVar20.str = pcVar16;
  SVar26.bridgeObject = in_x3;
  SVar26.str = pcVar9;
  Swift::String::append(SVar20,SVar26);
  _swift_bridgeObjectRelease(pvVar15);
  uVar4 = uStack_78;
  uVar2 = local_80;
  local_80 = 0x6974756c6f736552;
  uStack_78 = 0xec000000203a6e6f;
  FUN_1000e3728(lVar12);
  lVar8 = lVar12;
  pcVar9 = pcVar7;
  (*pcVar11)(lVar12,1);
  if ((int)lVar8 == 1) {
    pcVar9 = &DAT_10041ce70;
    FUN_10002a29c(lVar12,&DAT_10054ac40);
  }
  else {
    pcVar16 = *(char **)(lVar12 + *(int *)(pcVar7 + 0x34));
    pvVar15 = (void *)((undefined8 *)(lVar12 + *(int *)(pcVar7 + 0x34)))[1];
    _swift_bridgeObjectRetain(pvVar15);
    FUN_100029548(lVar12,FUN_10040211c);
    if (pvVar15 != (void *)0x0) goto LAB_1000eb624;
  }
  pvVar15 = (void *)0xe900000000000030;
  pcVar16 = (char *)0x3631327830383433;
LAB_1000eb624:
  SVar21.bridgeObject = pvVar15;
  SVar21.str = pcVar16;
  SVar27.bridgeObject = in_x3;
  SVar27.str = pcVar9;
  Swift::String::append(SVar21,SVar27);
  _swift_bridgeObjectRelease();
  uVar5 = uStack_78;
  uVar3 = local_80;
  FUN_1000e8f58();
  dVar17 = local_b0[0];
  if (((ulong)pvVar15 & 1) == 0) {
    local_80 = 0x203a73656b694c;
    uStack_78 = 0xe700000000000000;
    FUN_1000e3728(local_b0[0]);
    dVar18 = dVar17;
    pcVar9 = pcVar7;
    (*pcVar11)(dVar17,1);
    if (SUB84(dVar18,0) == 1) {
      pcVar9 = &DAT_10041ce70;
      FUN_10002a29c(dVar17,&DAT_10054ac40);
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined8 *)((long)dVar17 + (long)*(int *)(pcVar7 + 0x20));
      FUN_100029548(dVar17,FUN_10040211c);
    }
    local_90 = (char *)uVar10;
    SVar22 = Swift::CustomStringConvertible::get_description();
    SVar28.bridgeObject = in_x3;
    SVar28.str = pcVar9;
    Swift::String::append(SVar22,SVar28);
    _swift_bridgeObjectRelease(SVar22.bridgeObject);
  }
  else {
    local_80 = 0;
    uStack_78 = 0;
  }
  *param_1 = local_b0[1];
  param_1[1] = local_b0[2];
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  param_1[4] = uVar3;
  param_1[5] = uVar5;
  param_1[6] = local_80;
  param_1[7] = uStack_78;
  return;
}

