// rea decompile_all
// name: FUN_1003df41c
// address: 0x1003df41c
// body: available
// range: 0x1003df41c-0x1003df653 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003df5cc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003df41c(long param_1,long param_2,long param_3,long *param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  NSComparisonResult NVar7;
  long extraout_x8;
  long extraout_x12;
  long extraout_x13;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long local_c8 [4];
  long local_a8;
  long lStack_a0;
  long local_98;
  long local_90;
  undefined1 *local_88;
  undefined8 local_80;
  long lStack_78;
  undefined8 local_70;
  long lStack_68;
  
  lVar5 = 0;
  FUN_10040211c();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  local_88 = &stack0xffffffffffffff30 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = (long)(&stack0xffffffffffffff30 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           extraout_x13;
  if (param_3 != param_2) {
    local_90 = *param_4;
    local_c8[0] = *(long *)(extraout_x12 + 0x48);
    lVar11 = local_90 + local_c8[0] * (param_3 + -1);
    local_98 = -local_c8[0];
    param_1 = param_1 - param_3;
    lVar8 = local_90 + local_c8[0] * param_3;
    local_c8[1] = param_2;
    local_c8[2] = lVar8;
    local_c8[3] = param_1;
    local_a8 = lVar11;
    lStack_a0 = param_3;
LAB_1003df534:
    do {
      lVar6 = lVar11;
      FUN_100029504(lVar11,lVar12,FUN_10040211c);
      puVar1 = (undefined8 *)(lVar8 + *(int *)(lVar5 + 0x1c));
      lVar9 = puVar1[1];
      if (lVar9 == 0) {
        local_70 = 0;
        lVar10 = -0x2000000000000000;
      }
      else {
        local_70 = *puVar1;
        lVar10 = lVar9;
      }
      lStack_68 = lVar10;
      puVar1 = (undefined8 *)(lVar12 + *(int *)(lVar5 + 0x1c));
      lVar13 = puVar1[1];
      if (lVar13 == 0) {
        local_80 = 0;
        lVar13 = 0;
        lVar14 = -0x2000000000000000;
      }
      else {
        local_80 = *puVar1;
        lVar14 = lVar13;
      }
      lStack_78 = lVar14;
      FUN_100026df4();
      _swift_bridgeObjectRetain(lVar9);
      _swift_bridgeObjectRetain(lVar13);
      NVar7 = (extension_Foundation)::Swift::StringProtocol::_localizedCaseInsensitiveCompare
                        (lVar6,PTR___type_metadata_for_Swift_String_100523a98,
                         PTR___type_metadata_for_Swift_String_100523a98,lVar6,lVar6);
      _swift_bridgeObjectRelease(lVar10);
      _swift_bridgeObjectRelease(lVar14);
      FUN_100029548(lVar12,FUN_10040211c);
      puVar2 = local_88;
      if (NVar7.unknown == (undefined *)0xffffffffffffffff) {
        if (local_90 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1003df654);
          (*pcVar3)();
        }
        FUN_100007e64(lVar8,local_88,FUN_10040211c);
        _swift_arrayInitWithTakeFrontToBack(lVar8,lVar11,1,lVar5);
        FUN_100007e64(puVar2,lVar11,FUN_10040211c);
        lVar11 = lVar11 + local_98;
        lVar8 = lVar8 + local_98;
        bVar4 = param_1 != -1;
        param_1 = param_1 + 1;
        if (bVar4) goto LAB_1003df534;
      }
      lStack_a0 = lStack_a0 + 1;
      lVar11 = local_a8 + local_c8[0];
      param_1 = local_c8[3] + -1;
      lVar8 = local_c8[2] + local_c8[0];
      local_c8[2] = lVar8;
      local_c8[3] = param_1;
      local_a8 = lVar11;
    } while (lStack_a0 != local_c8[1]);
  }
  return;
}

