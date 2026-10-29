// rea decompile_all
// name: FUN_1001f0f48
// address: 0x1001f0f48
// body: available
// range: 0x1001f0f48-0x1001f1147 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1001f0f48(undefined *param_1)

{
  undefined *puVar1;
  long lVar2;
  URL UVar3;
  char *pcVar4;
  undefined1 *puVar5;
  void *pvVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  String SVar13;
  String SVar14;
  undefined1 auVar15 [16];
  
  lVar8 = -0x16ffffffffffff8e;
  lVar9 = 0x657061706c6c6157;
  puVar1 = &DAT_10054ac40;
  FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = &stack0xffffffffffffffa0 + -extraout_x8;
  lVar2 = 0;
  FUN_10040211c();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar12 + 0x40));
  lVar11 = (long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if (param_1 == (undefined *)0x0) goto LAB_1001f1120;
  UVar3.unknown = param_1;
  _swift_retain();
  SVar13 = Foundation::URL::get_lastPathComponent(UVar3);
  pvVar6 = SVar13.bridgeObject;
  SVar14 = SVar13;
  FUN_1002748c4();
  pcVar4 = SVar14.str;
  _swift_bridgeObjectRelease(SVar14.bridgeObject);
  if (*(long *)(pcVar4 + 0x10) == 0) {
LAB_1001f1078:
    uVar7 = 1;
  }
  else {
    _swift_bridgeObjectRetain(pcVar4);
    FUN_10000464c(SVar13.str);
    if (((ulong)SVar13.bridgeObject & 1) == 0) {
      _swift_bridgeObjectRelease(pcVar4);
      goto LAB_1001f1078;
    }
    FUN_100029504(*(long *)(pcVar4 + 0x38) + *(long *)(lVar12 + 0x48) * (long)SVar13.str,puVar10,
                  FUN_10040211c);
    _swift_bridgeObjectRelease(pcVar4);
    uVar7 = 0;
  }
  (**(code **)(lVar12 + 0x38))(puVar10,uVar7,1,lVar2);
  _swift_bridgeObjectRelease(pvVar6);
  _swift_bridgeObjectRelease(pcVar4);
  puVar5 = puVar10;
  (**(code **)(lVar12 + 0x30))(puVar10,1,lVar2);
  if ((int)puVar5 == 1) {
    FUN_10002a29c(puVar10,&DAT_10054ac40,&DAT_10041ce70);
    _swift_release(param_1);
  }
  else {
    lVar8 = lVar11;
    FUN_100007e64(puVar10,lVar11,FUN_10040211c);
    lVar9 = lVar11;
    FUN_10026a7c8(lVar11);
    _swift_release(param_1);
    FUN_100029548(lVar11,FUN_10040211c);
  }
LAB_1001f1120:
  auVar15._8_8_ = lVar8;
  auVar15._0_8_ = lVar9;
  return auVar15;
}

