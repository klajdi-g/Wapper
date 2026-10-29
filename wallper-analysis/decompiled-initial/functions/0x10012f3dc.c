// rea decompile_all
// name: FUN_10012f3dc
// address: 0x10012f3dc
// body: available
// range: 0x10012f3dc-0x10012f81b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10012f3dc(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar9;
  long lVar10;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 extraout_x13;
  long lVar11;
  ulong *unaff_x20;
  long lVar12;
  ulong uVar13;
  undefined1 *puVar14;
  ulong uVar15;
  long lVar16;
  undefined1 auStack_c0 [8];
  code *local_b8;
  long local_b0;
  ulong local_a8;
  code *local_a0;
  ulong local_98;
  ulong local_90;
  undefined8 local_88;
  undefined1 *local_80;
  long local_78;
  long local_70;
  undefined8 local_68;
  
  lVar3 = 0;
  local_70 = param_2;
  FUN_10025ee04();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar11 + 0x40));
  puVar14 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_10054ac38;
  FUN_100002f94(&DAT_10054ac38,&DAT_10041e8e0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar10 = (long)puVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_78 = lVar10;
  (*(code *)PTR____chkstk_darwin_100521118)();
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar16 = (lVar10 - extraout_x12) - extraout_x12_00;
  param_4 = param_4 >> 1;
  lVar10 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10012f5d0);
    (*pcVar1)();
  }
  uVar15 = *unaff_x20;
  lVar12 = *(long *)(uVar15 + 0x10);
  local_80 = puVar14;
  local_68 = param_1;
  if (SCARRY8(lVar12,lVar10)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10012f5d4);
    (*pcVar1)();
  }
  uVar5 = uVar15;
  local_88 = extraout_x13;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)uVar5 == 0) || (uVar9 = *(ulong *)(uVar15 + 0x18) >> 1, (long)uVar9 < lVar12 + lVar10))
  {
    FUN_1001c45ec();
    uVar9 = *(ulong *)(uVar5 + 0x18) >> 1;
    uVar15 = uVar5;
  }
  lVar12 = uVar9 - *(long *)(uVar15 + 0x10);
  uVar5 = param_4;
  if (param_3 == param_4) {
    if (0 < lVar10) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10012f5d8);
      (*pcVar1)();
    }
    lVar10 = 0;
    uVar5 = param_3;
  }
  else {
    if (lVar12 < lVar10) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10012f64c);
      (*pcVar1)();
    }
    _swift_arrayInitWithCopy
              (uVar15 + ((ulong)*(byte *)(lVar11 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff)) +
               *(long *)(lVar11 + 0x48) * *(long *)(uVar15 + 0x10),
               local_70 + *(long *)(lVar11 + 0x48) * param_3,lVar10,lVar3);
    if (0 < lVar10) {
      if (SCARRY8(*(long *)(uVar15 + 0x10),lVar10)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10012f818);
        (*pcVar1)();
      }
      *(long *)(uVar15 + 0x10) = *(long *)(uVar15 + 0x10) + lVar10;
    }
  }
  if (lVar10 == lVar12) {
    uVar9 = *(ulong *)(uVar15 + 0x10);
    local_b8 = *(code **)(lVar11 + 0x38);
    (*local_b8)(lVar16,1,1,lVar3);
    uVar8 = local_88;
    FUN_10013270c(lVar16,local_88);
    local_a0 = *(code **)(lVar11 + 0x30);
    (*local_a0)(uVar8,1,lVar3);
    iVar2 = (int)uVar8;
    uVar8 = local_88;
    while (iVar2 != 1) {
      FUN_10013275c(uVar8);
      uVar13 = *(ulong *)(uVar15 + 0x18) >> 1;
      uVar7 = uVar15;
      local_90 = uVar5;
      if ((long)uVar13 < (long)(uVar9 + 1)) {
        uVar7 = (ulong)(1 < *(ulong *)(uVar15 + 0x18));
        FUN_1001c45ec(uVar7,uVar9 + 1,1,uVar15);
        uVar13 = *(ulong *)(uVar7 + 0x18) >> 1;
      }
      lVar10 = local_78;
      local_98 = (ulong)*(byte *)(lVar11 + 0x50);
      FUN_10013270c(lVar16,local_78);
      (*local_a0)(lVar10,1,lVar3);
      lVar12 = local_78;
      uVar5 = local_90;
      if ((int)lVar10 != 1) {
        local_b0 = uVar7 + (local_98 + 0x20 & (local_98 ^ 0xffffffffffffffff));
        local_a8 = uVar9;
        if ((long)uVar9 <= (long)uVar13) {
          local_a8 = uVar13;
        }
        do {
          puVar14 = local_80;
          local_90 = uVar5;
          FUN_1001327a4(lVar12,local_80);
          uVar15 = local_a8;
          if (local_a8 == uVar9) {
            FUN_10012e230(puVar14);
            uVar5 = local_90;
            goto LAB_10012f664;
          }
          FUN_10013275c(lVar16);
          lVar10 = *(long *)(lVar11 + 0x48);
          local_98 = uVar9;
          FUN_1001327a4(puVar14,local_b0 + lVar10 * uVar9);
          uVar15 = local_90;
          if (local_90 == param_4) {
            uVar8 = 1;
            uVar5 = param_4;
          }
          else {
            if (((long)local_90 < (long)param_3) || ((long)param_4 <= (long)local_90)) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10012f81c);
              (*pcVar1)();
            }
            FUN_1001326c8(local_70 + lVar10 * local_90,lVar16);
            uVar8 = 0;
            uVar5 = uVar15 + 1;
          }
          uVar9 = local_98;
          (*local_b8)(lVar16,uVar8,1,lVar3);
          lVar12 = local_78;
          FUN_10013270c(lVar16,local_78);
          lVar10 = lVar12;
          (*local_a0)(lVar12,1,lVar3);
          uVar9 = uVar9 + 1;
        } while ((int)lVar10 != 1);
      }
      FUN_10013275c(lVar12);
      uVar15 = uVar9;
LAB_10012f664:
      uVar8 = local_88;
      *(ulong *)(uVar7 + 0x10) = uVar15;
      FUN_10013270c(lVar16,local_88);
      uVar6 = uVar8;
      (*local_a0)(uVar8,1,lVar3);
      uVar9 = uVar15;
      uVar15 = uVar7;
      iVar2 = (int)uVar6;
    }
    FUN_10013275c(lVar16);
    _swift_unknownObjectRelease(local_68);
    FUN_10013275c(uVar8);
  }
  else {
    _swift_unknownObjectRelease(local_68);
  }
  *unaff_x20 = uVar15;
  return;
}

