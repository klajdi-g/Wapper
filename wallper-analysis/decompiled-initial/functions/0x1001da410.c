// rea decompile_all
// name: FUN_1001da410
// address: 0x1001da410
// body: available
// range: 0x1001da410-0x1001da6f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_1001da410(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  UUID UVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  UUID UVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar9;
  code *pcVar10;
  long lVar11;
  UUID UVar12;
  long lVar13;
  char *pcVar14;
  char *pcVar15;
  char acStack_80 [8];
  UUID local_78;
  long local_70;
  undefined *puStack_68;
  
  puStack_68 = (undefined *)Foundation::UUID::typeMetadataAccessor();
  local_70 = *(long *)(puStack_68 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_70 + 0x40));
  local_78.unknown = acStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  UVar12.unknown = acStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0) + -extraout_x12;
  lVar5 = 0;
  FUN_1001d537c();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  pcVar14 = UVar12.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = (long)pcVar14 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100521118)();
  pcVar15 = (char *)(lVar13 - extraout_x12_01);
  puVar6 = &DAT_100556c20;
  FUN_100002f94(&DAT_100556c20,&DAT_10042ada0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)pcVar15 - extraout_x8_01;
  lVar11 = (long)*(int *)(puVar6 + 0x30);
  FUN_100029504(param_1,lVar9,FUN_1001d537c);
  FUN_100029504(param_2,lVar9 + lVar11,FUN_1001d537c);
  lVar7 = lVar9;
  _swift_getEnumCaseMultiPayload(lVar9,lVar5);
  iVar4 = (int)lVar7;
  if (iVar4 < 2) {
    if (iVar4 == 0) {
      FUN_100029504(lVar9,pcVar15,FUN_1001d537c);
      lVar7 = lVar9 + lVar11;
      _swift_getEnumCaseMultiPayload(lVar7,lVar5);
      if ((int)lVar7 != 0) goto LAB_1001da6b8;
      cVar1 = *pcVar15;
LAB_1001da5e0:
      bVar3 = cVar1 == *(char *)(lVar9 + lVar11);
    }
    else {
      FUN_100029504(lVar9,lVar13,FUN_1001d537c);
      lVar7 = lVar9 + lVar11;
      _swift_getEnumCaseMultiPayload(lVar7,lVar5);
      puVar6 = puStack_68;
      lVar5 = local_70;
      if ((int)lVar7 != 1) {
        (**(code **)(local_70 + 8))(lVar13,puStack_68);
        goto LAB_1001da6b8;
      }
      pcVar10 = *(code **)(local_70 + 0x20);
      (*pcVar10)(UVar12.unknown,lVar13,puStack_68);
      UVar2.unknown = local_78.unknown;
      UVar8.unknown = puVar6;
      (*pcVar10)(local_78.unknown,lVar9 + lVar11);
      bVar3 = Foundation::UUID::___infix(UVar12,UVar2,UVar8);
      pcVar10 = *(code **)(lVar5 + 8);
      (*pcVar10)(UVar2.unknown,puVar6);
      (*pcVar10)(UVar12.unknown,puVar6);
    }
    FUN_100029548(lVar9,FUN_1001d537c);
  }
  else {
    if (iVar4 == 2) {
      FUN_100029504(lVar9,pcVar14,FUN_1001d537c);
      lVar7 = lVar9 + lVar11;
      _swift_getEnumCaseMultiPayload(lVar7,lVar5);
      if ((int)lVar7 == 2) {
        cVar1 = *pcVar14;
        goto LAB_1001da5e0;
      }
    }
    else {
      lVar11 = lVar9 + lVar11;
      _swift_getEnumCaseMultiPayload(lVar11,lVar5);
      if ((int)lVar11 == 3) {
        FUN_100029548(lVar9,FUN_1001d537c);
        return true;
      }
    }
LAB_1001da6b8:
    FUN_10002a29c(lVar9,&DAT_100556c20,&DAT_10042ada0);
    bVar3 = false;
  }
  return bVar3;
}

