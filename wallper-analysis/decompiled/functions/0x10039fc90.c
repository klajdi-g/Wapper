// rea decompile_all
// name: FUN_10039fc90
// address: 0x10039fc90
// body: available
// range: 0x10039fc90-0x1003a00cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10039fc90(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long extraout_x8;
  code *pcVar7;
  long lVar8;
  long extraout_x12;
  long extraout_x12_00;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined1 *puVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong *puVar17;
  undefined1 auStack_90 [8];
  undefined *local_88;
  undefined8 local_80;
  
  puVar2 = &DAT_10054ac40;
  FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  puVar12 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar8 = (long)puVar12 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar16 = lVar8 - extraout_x12_00;
  FUN_10025f200();
  uVar9 = *(ulong *)(puVar2 + 0x10);
  _swift_bridgeObjectRetain(param_3);
  if (uVar9 == 0) {
    uVar9 = 0;
  }
  else {
    uVar14 = 0;
    puVar17 = (ulong *)(puVar2 + 0x28);
    local_88 = puVar2;
    local_80 = param_1;
    do {
      uVar15 = *puVar17;
      if (*(long *)(param_3 + 0x10) == 0) {
        lVar3 = 0;
        FUN_10040211c();
        (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar16,1,1,lVar3);
      }
      else {
        uVar11 = puVar17[-1];
        _swift_bridgeObjectRetain(param_3);
        _swift_bridgeObjectRetain(uVar15);
        uVar5 = uVar15;
        FUN_10000464c(uVar11);
        bVar1 = (uVar5 & 1) == 0;
        if (bVar1) {
          _swift_bridgeObjectRelease(param_3);
          lVar3 = 0;
          FUN_10040211c();
          pcVar7 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
        }
        else {
          lVar10 = *(long *)(param_3 + 0x38);
          lVar3 = 0;
          FUN_10040211c();
          lVar13 = *(long *)(lVar3 + -8);
          FUN_100029504(lVar10 + *(long *)(lVar13 + 0x48) * uVar11,lVar16,FUN_10040211c);
          _swift_bridgeObjectRelease(param_3);
          pcVar7 = *(code **)(lVar13 + 0x38);
        }
        (*pcVar7)(lVar16,bVar1,1,lVar3);
        _swift_bridgeObjectRelease(uVar15);
        FUN_10040211c(0);
        lVar10 = lVar16;
        (**(code **)(*(long *)(lVar3 + -8) + 0x30))(lVar16,1,lVar3);
        if ((int)lVar10 != 1) {
          FUN_10002a29c(lVar16,&DAT_10054ac40,&DAT_10041ce70);
          puVar2 = local_88;
          uVar9 = uVar14;
          param_1 = local_80;
          break;
        }
      }
      FUN_10002a29c(lVar16,&DAT_10054ac40,&DAT_10041ce70);
      uVar14 = uVar14 + 1;
      puVar2 = local_88;
      param_1 = local_80;
      puVar17 = puVar17 + 2;
    } while (uVar9 != uVar14);
  }
  if (uVar9 == *(ulong *)(puVar2 + 0x10)) {
    lVar16 = 0;
    FUN_10040211c();
    pcVar7 = *(code **)(*(long *)(lVar16 + -8) + 0x38);
    uVar6 = 1;
  }
  else {
    if (*(ulong *)(puVar2 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1003a00cc);
      (*pcVar7)();
    }
    if (*(long *)(param_3 + 0x10) == 0) {
      lVar16 = 0;
      FUN_10040211c();
      (**(code **)(*(long *)(lVar16 + -8) + 0x38))(lVar8,1,1,lVar16);
    }
    else {
      lVar3 = *(long *)(puVar2 + uVar9 * 0x10 + 0x20);
      uVar9 = *(ulong *)(puVar2 + uVar9 * 0x10 + 0x28);
      _swift_bridgeObjectRetain(param_3);
      _swift_bridgeObjectRetain(uVar9);
      uVar14 = uVar9;
      FUN_10000464c(lVar3);
      bVar1 = (uVar14 & 1) == 0;
      if (bVar1) {
        _swift_bridgeObjectRelease(param_3);
        lVar16 = 0;
        FUN_10040211c();
        pcVar7 = *(code **)(*(long *)(lVar16 + -8) + 0x38);
      }
      else {
        lVar10 = *(long *)(param_3 + 0x38);
        lVar16 = 0;
        FUN_10040211c();
        lVar13 = *(long *)(lVar16 + -8);
        FUN_100029504(lVar10 + *(long *)(lVar13 + 0x48) * lVar3,lVar8,FUN_10040211c);
        _swift_bridgeObjectRelease(param_3);
        pcVar7 = *(code **)(lVar13 + 0x38);
      }
      (*pcVar7)(lVar8,bVar1,1,lVar16);
      _swift_bridgeObjectRelease(uVar9);
    }
    FUN_1000087e4(lVar8,puVar12,&DAT_10054ac40,&DAT_10041ce70);
    FUN_10040211c(0);
    lVar3 = *(long *)(lVar16 + -8);
    puVar4 = puVar12;
    (**(code **)(lVar3 + 0x30))(puVar12,1,lVar16);
    if ((int)puVar4 == 1) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1003a00d0);
      (*pcVar7)();
    }
    FUN_100007e64(puVar12,param_1,FUN_10040211c);
    FUN_10002a29c(lVar8,&DAT_10054ac40,&DAT_10041ce70);
    pcVar7 = *(code **)(lVar3 + 0x38);
    uVar6 = 0;
  }
  (*pcVar7)(param_1,uVar6,1,lVar16);
  _swift_bridgeObjectRelease(param_3);
  _swift_bridgeObjectRelease(puVar2);
  return;
}

