// rea decompile_all
// name: FUN_1001d85e4
// address: 0x1001d85e4
// body: available
// range: 0x1001d85e4-0x1001d89af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001d87f8 to 0x100414a50 _swift_storeEnumTagMultiPayload (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001d85e4(char *param_1,long param_2)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  char *pcVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  UUID UVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long lVar14;
  long unaff_x20;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  UUID UVar18;
  UUID UVar19;
  undefined *puVar20;
  undefined *puVar21;
  long lVar22;
  long local_80;
  char *local_78;
  long local_70;
  undefined *local_68;
  
  lVar7 = 0;
  FUN_100266c2c();
  lVar22 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar22 + 0x40));
  lVar15 = (long)&local_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar7 = lVar15 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  UVar18.unknown = (undefined *)(lVar7 - extraout_x12_00);
  puVar21 = &DAT_10054a9c8;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar21 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar21 = UVar18.unknown + -extraout_x8_00;
  local_68 = (undefined *)Foundation::UUID::typeMetadataAccessor();
  lVar14 = *(long *)(local_68 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar14 + 0x40));
  UVar19.unknown = puVar21 + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0;
  FUN_10025ee04();
  bVar2 = *(byte *)(unaff_x20 + *(int *)(lVar8 + 0x1c));
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      uVar9 = 0;
      FUN_1001d537c(0);
      uVar12 = 3;
    }
    else {
      cVar1 = '\0';
      if (*(char *)(param_2 + 0x10) != '\x02') {
        cVar1 = *(char *)(param_2 + 0x10);
      }
      *param_1 = cVar1;
      uVar9 = 0;
      FUN_1001d537c(0);
      uVar12 = 0;
    }
  }
  else {
    if (bVar2 == 2) {
      lVar10 = 0;
      local_70 = lVar15;
      FUN_100266c40();
      FUN_1001da820(param_2 + *(int *)(lVar10 + 0x18),puVar21);
      puVar20 = local_68;
      puVar11 = puVar21;
      (**(code **)(lVar14 + 0x30))(puVar21,1,local_68);
      if ((int)puVar11 == 1) {
        FUN_10002a29c(puVar21,&DAT_10054a9c8,&DAT_10041bbe0);
        UVar19.unknown = puVar21;
LAB_1001d88e8:
        FUN_10025f510();
        lVar8 = local_70;
        if (*(long *)(UVar19.unknown + 0x10) == 0) {
          _swift_bridgeObjectRelease();
          uVar9 = 0;
          FUN_1001d537c(0);
          uVar12 = 3;
        }
        else {
          FUN_100029504(UVar19.unknown +
                        ((ulong)*(byte *)(lVar22 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar22 + 0x50) ^ 0xffffffffffffffff)),local_70,
                        FUN_100266c2c);
          _swift_bridgeObjectRelease(UVar19.unknown);
          FUN_100007e64(lVar8,lVar7,FUN_100266c2c);
          (**(code **)(lVar14 + 0x10))(param_1,lVar7,puVar20);
          FUN_100029548(lVar7,FUN_100266c2c);
          uVar9 = 0;
          FUN_1001d537c(0);
          uVar12 = 1;
        }
        _swift_storeEnumTagMultiPayload(param_1,uVar9,uVar12);
      }
      else {
        local_80 = lVar7;
        local_78 = param_1;
        (**(code **)(lVar14 + 0x20))(UVar19.unknown,puVar21,puVar20);
        uVar16 = 0;
        lVar7 = *(long *)(unaff_x20 + *(int *)(lVar8 + 0x34));
        uVar17 = *(ulong *)(lVar7 + 0x10);
        do {
          puVar20 = local_68;
          if (uVar17 == uVar16) {
            (**(code **)(lVar14 + 8))(UVar19.unknown,local_68);
            param_1 = local_78;
            lVar7 = local_80;
            goto LAB_1001d88e8;
          }
          if (*(ulong *)(lVar7 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1001d89b0);
            (*pcVar5)();
          }
          UVar13.unknown = FUN_100266c2c;
          FUN_100029504(lVar7 + ((ulong)*(byte *)(lVar22 + 0x50) + 0x20 &
                                ((ulong)*(byte *)(lVar22 + 0x50) ^ 0xffffffffffffffff)) +
                        *(long *)(lVar22 + 0x48) * uVar16,UVar18.unknown);
          uVar16 = uVar16 + 1;
          bVar6 = Foundation::UUID::___infix(UVar18,UVar19,UVar13);
          FUN_100029548(UVar18.unknown,FUN_100266c2c);
          puVar21 = local_68;
          pcVar4 = local_78;
        } while (!bVar6);
        (**(code **)(lVar14 + 0x10))(local_78,UVar19.unknown,local_68);
        uVar9 = 0;
        FUN_1001d537c(0);
        _swift_storeEnumTagMultiPayload(pcVar4,uVar9,1);
        (**(code **)(lVar14 + 8))(UVar19.unknown,puVar21);
      }
      return;
    }
    lVar7 = 0;
    FUN_100266c40();
    cVar3 = *(char *)(param_2 + *(int *)(lVar7 + 0x1c));
    cVar1 = '\0';
    if (cVar3 != '\x02') {
      cVar1 = cVar3;
    }
    *param_1 = cVar1;
    uVar9 = 0;
    FUN_1001d537c(0);
    uVar12 = 2;
  }
  _swift_storeEnumTagMultiPayload(param_1,uVar9,uVar12);
  return;
}

