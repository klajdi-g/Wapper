// rea decompile_all
// name: FUN_1001d9a10
// address: 0x1001d9a10
// body: available
// range: 0x1001d9a10-0x1001d9e1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_1001d9a10(long param_1,long param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  bool bVar6;
  UUID UVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined7 extraout_var;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar12;
  long extraout_x12;
  long extraout_x13;
  code *pcVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  char acStack_a0 [8];
  char *local_98;
  char acStack_90 [4];
  uint local_8c;
  long local_88;
  undefined *local_80;
  undefined *local_78;
  long local_70;
  long local_68;
  
  UVar7 = Foundation::UUID::typeMetadataAccessor();
  local_70 = *(long *)(UVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_70 + 0x40));
  puVar8 = &DAT_10054a9c8;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar18 = (long)(acStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  puVar8 = &DAT_10054a9c0;
  FUN_100002f94(&DAT_10054a9c0,&DAT_100422d20);
  local_78 = puVar8;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = lVar18 - extraout_x8_01;
  lVar9 = 0;
  FUN_100266c40();
  local_68 = lVar9;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  puVar16 = (undefined8 *)(lVar14 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar17 = (undefined8 *)((long)puVar16 - extraout_x13);
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 == *(long *)(param_2 + 0x10)) {
    if ((lVar9 == 0) || (param_1 == param_2)) {
      bVar6 = true;
    }
    else {
      uVar12 = (ulong)*(byte *)(extraout_x12 + 0x50) + 0x20 &
               ((ulong)*(byte *)(extraout_x12 + 0x50) ^ 0xffffffffffffffff);
      param_1 = param_1 + uVar12;
      param_2 = param_2 + uVar12;
      local_88 = *(long *)(extraout_x12 + 0x48);
      local_98 = acStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
      local_80 = UVar7.unknown;
      do {
        lVar9 = lVar9 + -1;
        FUN_100029504(param_1,puVar17,FUN_100266c40);
        FUN_100029504(param_2,puVar16,FUN_100266c40);
        if (((undefined *)*puVar17 != (undefined *)*puVar16 ||
             (undefined *)puVar17[1] != (undefined *)puVar16[1]) &&
           (bVar6 = Swift::_stringCompareWithSmolCheck
                              ((undefined *)*puVar17,(undefined *)puVar17[1],
                               (_StringComparisonResult)(__int8)(undefined *)*puVar16), !bVar6)) {
LAB_1001d9dd8:
          FUN_100029548(puVar16,FUN_100266c40);
          FUN_100029548(puVar17,FUN_100266c40);
          goto LAB_1001d9df8;
        }
        if (*(char *)(puVar17 + 2) != '\x02') {
          if (*(char *)(puVar17 + 2) == *(char *)(puVar16 + 2)) goto LAB_1001d9bf4;
          goto LAB_1001d9dd8;
        }
        if (*(char *)(puVar16 + 2) != '\x02') goto LAB_1001d9dd8;
LAB_1001d9bf4:
        iVar3 = *(int *)(local_68 + 0x18);
        lVar15 = (long)*(int *)(local_78 + 0x30);
        FUN_1001da820((long)puVar17 + (long)iVar3,lVar14);
        FUN_1001da820((long)puVar16 + (long)iVar3,lVar14 + lVar15);
        puVar8 = local_80;
        pcVar13 = *(code **)(local_70 + 0x30);
        lVar10 = lVar14;
        (*pcVar13)(lVar14,1,local_80);
        if ((int)lVar10 != 1) {
          FUN_1001da820(lVar14,lVar18);
          lVar10 = lVar14 + lVar15;
          (*pcVar13)(lVar10,1,puVar8);
          lVar5 = local_70;
          pcVar4 = local_98;
          if ((int)lVar10 == 1) {
            (**(code **)(local_70 + 8))(lVar18,puVar8);
            goto LAB_1001d9dc0;
          }
          (**(code **)(local_70 + 0x20))(local_98,lVar14 + lVar15,puVar8);
          puVar11 = &DAT_10054a130;
          FUN_1000036d0(&DAT_10054a130,PTR_typeMetadataAccessor_100520bd8,
                        PTR_Foundation__Foundation__UUID_>Swift__Equatable_100520bf8);
          bVar6 = Swift::Equatable::___infix(lVar18,pcVar4,puVar8,puVar11);
          local_8c = (uint)CONCAT71(extraout_var,bVar6);
          pcVar13 = *(code **)(lVar5 + 8);
          (*pcVar13)(pcVar4,puVar8);
          (*pcVar13)(lVar18,puVar8);
          FUN_10002a29c(lVar14,&DAT_10054a9c8,&DAT_10041bbe0);
          if ((local_8c & 1) != 0) goto LAB_1001d9d3c;
          goto LAB_1001d9dd8;
        }
        lVar15 = lVar14 + lVar15;
        (*pcVar13)(lVar15,1,puVar8);
        if ((int)lVar15 != 1) {
LAB_1001d9dc0:
          FUN_10002a29c(lVar14,&DAT_10054a9c0,&DAT_100422d20);
          goto LAB_1001d9dd8;
        }
        FUN_10002a29c(lVar14,&DAT_10054a9c8,&DAT_10041bbe0);
LAB_1001d9d3c:
        cVar1 = *(char *)((long)puVar17 + (long)*(int *)(local_68 + 0x1c));
        cVar2 = *(char *)((long)puVar16 + (long)*(int *)(local_68 + 0x1c));
        bVar6 = cVar2 == '\x02';
        if (cVar1 != '\x02') {
          if (cVar2 == '\x02') goto LAB_1001d9dd8;
          bVar6 = cVar1 == cVar2;
        }
        FUN_100029548(puVar16,FUN_100266c40);
        FUN_100029548(puVar17,FUN_100266c40);
        if (bVar6 == false) {
          return false;
        }
        param_2 = param_2 + local_88;
        param_1 = param_1 + local_88;
      } while (lVar9 != 0);
    }
  }
  else {
LAB_1001d9df8:
    bVar6 = false;
  }
  return bVar6;
}

