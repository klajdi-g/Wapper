// rea decompile_all
// name: FUN_100124374
// address: 0x100124374
// body: available
// range: 0x100124374-0x1001246b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100124374(undefined8 param_1,char param_2,char *param_3,char *param_4,void *param_5)

{
  double *pdVar1;
  char *pcVar2;
  void *pvVar3;
  Published *pPVar4;
  Published *pPVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  Published *pPVar10;
  long lVar11;
  Published **ppPVar12;
  ulong uVar13;
  char *pcVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  code *pcVar15;
  undefined8 unaff_x20;
  long lVar16;
  long lVar17;
  bool bVar18;
  long lVar19;
  double dVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  double local_a0;
  Published *local_90;
  ulong uStack_88;
  
  puVar7 = &DAT_100551e50;
  pcVar14 = param_4;
  FUN_100002f94(&DAT_100551e50,&DAT_100429e60);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar7 + -8) + 0x40));
  dVar20 = (double)((long)&local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_a0 = dVar20;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = (long)dVar20 - extraout_x12;
  lVar8 = 0;
  FUN_100126a5c();
  lVar19 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar19 + 0x40));
  lVar16 = lVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_90 = (Published *)0x0;
  uStack_88 = 0xe000000000000000;
  pcVar2 = (char *)0x6b636f6c;
  if (param_2 != '\x01') {
    pcVar2 = (char *)0x64616f6c6e776f64;
  }
  pvVar3 = (void *)0xe400000000000000;
  if (param_2 != '\x01') {
    pvVar3 = (void *)0xe800000000000000;
  }
  SVar21.bridgeObject = pvVar3;
  SVar21.str = pcVar2;
  SVar24.bridgeObject = param_5;
  SVar24.str = pcVar14;
  Swift::String::append(SVar21,SVar24);
  _swift_bridgeObjectRelease(pvVar3);
  SVar22.bridgeObject = (void *)0xe100000000000000;
  SVar22.str = (char *)0x3a;
  SVar25.bridgeObject = param_5;
  SVar25.str = pcVar14;
  Swift::String::append(SVar22,SVar25);
  SVar23.bridgeObject = param_4;
  SVar23.str = param_3;
  SVar26.bridgeObject = param_5;
  SVar26.str = pcVar14;
  Swift::String::append(SVar23,SVar26);
  uVar6 = uStack_88;
  pPVar4 = local_90;
  puVar7 = &DAT_100426930;
  _swift_getKeyPath(&DAT_100426930);
  puVar9 = &DAT_100426958;
  _swift_getKeyPath(&DAT_100426958);
  Combine::Published::_get_subscript(&local_90);
  _swift_release(puVar7);
  _swift_release(puVar9);
  pPVar5 = local_90;
  if (local_90[2].unknown == (undefined *)0x0) {
    bVar18 = true;
  }
  else {
    _swift_bridgeObjectRetain(local_90);
    pPVar10 = pPVar4;
    uVar13 = uVar6;
    FUN_10000464c(pPVar4);
    bVar18 = (uVar13 & 1) == 0;
    if (!bVar18) {
      FUN_10010b814(pPVar5[7].unknown + *(long *)(lVar19 + 0x48) * (long)pPVar10,lVar17);
    }
    _swift_bridgeObjectRelease(pPVar5);
  }
  pcVar15 = *(code **)(lVar19 + 0x38);
  (*pcVar15)(lVar17,bVar18,1,lVar8);
  _swift_bridgeObjectRelease(pPVar5);
  lVar11 = lVar17;
  (**(code **)(lVar19 + 0x30))(lVar17,1,lVar8);
  if ((int)lVar11 == 1) {
    _swift_bridgeObjectRelease(uVar6);
    FUN_10002a29c(lVar17,&DAT_100551e50,&DAT_100429e60);
  }
  else {
    FUN_10010b858(lVar17,lVar16);
    dVar20 = (double)NEON_fminnm(param_1,0x3ff0000000000000);
    if (dVar20 < 0.0) {
      dVar20 = 0.0;
    }
    pdVar1 = (double *)(lVar16 + *(int *)(lVar8 + 0x24));
    if ((*(char *)(pdVar1 + 1) == '\x01') || (*pdVar1 != dVar20)) {
      *pdVar1 = dVar20;
      dVar20 = local_a0;
      *(undefined1 *)(pdVar1 + 1) = 0;
      FUN_10010b814(lVar16,local_a0);
      (*pcVar15)(dVar20,0,1,lVar8);
      puVar7 = &DAT_100426930;
      _swift_getKeyPath(&DAT_100426930);
      puVar9 = &DAT_100426958;
      _swift_getKeyPath(&DAT_100426958);
      ppPVar12 = &local_90;
      Combine::Published::_modify_subscript(pPVar5,ppPVar12,unaff_x20,puVar7,puVar9);
      FUN_100123160(dVar20,pPVar4,uVar6);
      (*(code *)ppPVar12)(&local_90,0);
      _swift_release(puVar7);
      _swift_release(puVar9);
      FUN_10010c26c(lVar16);
    }
    else {
      FUN_10010c26c(lVar16);
      _swift_bridgeObjectRelease(uVar6);
    }
  }
  return;
}

