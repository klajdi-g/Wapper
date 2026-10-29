// rea decompile_all
// name: FUN_1003dfb20
// address: 0x1003dfb20
// body: available
// range: 0x1003dfb20-0x1003dfda3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003dfd08 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003dfb20(long param_1,long param_2,long param_3,long *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  NSComparisonResult NVar8;
  long extraout_x8;
  long lVar9;
  long extraout_x12;
  long extraout_x13;
  long extraout_x13_00;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
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
  
  lVar6 = 0;
  FUN_10040211c();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  local_88 = &stack0xffffffffffffff30 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar15 = (undefined8 *)
            (&stack0xffffffffffffff30 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0) + -extraout_x13);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar16 = (undefined8 *)((long)puVar15 - extraout_x13_00);
  if (param_3 != param_2) {
    local_90 = *param_4;
    local_c8[0] = *(long *)(extraout_x12 + 0x48);
    lVar9 = local_90 + local_c8[0] * (param_3 + -1);
    local_98 = -local_c8[0];
    param_1 = param_1 - param_3;
    lVar12 = local_90 + local_c8[0] * param_3;
    local_c8[1] = param_2;
    local_c8[2] = lVar12;
    local_c8[3] = param_1;
    local_a8 = lVar9;
    lStack_a0 = param_3;
LAB_1003dfc58:
    do {
      FUN_100029504(lVar12,puVar16,FUN_10040211c);
      lVar7 = lVar9;
      FUN_100029504(lVar9,puVar15,FUN_10040211c);
      iVar2 = *(int *)(lVar6 + 0x3c);
      puVar1 = (undefined8 *)((long)puVar16 + (long)iVar2);
      lVar11 = puVar1[1];
      if (lVar11 == 0) {
        uVar13 = *puVar16;
        lVar10 = puVar16[1];
        lVar7 = lVar10;
        _swift_bridgeObjectRetain(lVar10);
      }
      else {
        uVar13 = *puVar1;
        lVar10 = lVar11;
      }
      local_70 = uVar13;
      lStack_68 = lVar10;
      puVar1 = (undefined8 *)((long)puVar15 + (long)iVar2);
      lVar14 = puVar1[1];
      if (lVar14 == 0) {
        local_80 = *puVar15;
        lVar17 = puVar15[1];
        lVar7 = lVar17;
        lStack_78 = lVar17;
        _swift_bridgeObjectRetain(lVar17);
      }
      else {
        local_80 = *puVar1;
        lVar17 = lVar14;
        lStack_78 = lVar14;
      }
      FUN_100026df4();
      _swift_bridgeObjectRetain(lVar11);
      _swift_bridgeObjectRetain(lVar14);
      NVar8 = (extension_Foundation)::Swift::StringProtocol::_localizedCaseInsensitiveCompare
                        (lVar7,PTR___type_metadata_for_Swift_String_100523a98,
                         PTR___type_metadata_for_Swift_String_100523a98,lVar7,lVar7);
      _swift_bridgeObjectRelease(lVar10);
      _swift_bridgeObjectRelease(lVar17);
      FUN_100029548(puVar15,FUN_10040211c);
      FUN_100029548(puVar16,FUN_10040211c);
      puVar3 = local_88;
      if (NVar8.unknown == (undefined *)0xffffffffffffffff) {
        if (local_90 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1003dfda4);
          (*pcVar4)();
        }
        FUN_100007e64(lVar12,local_88,FUN_10040211c);
        _swift_arrayInitWithTakeFrontToBack(lVar12,lVar9,1,lVar6);
        FUN_100007e64(puVar3,lVar9,FUN_10040211c);
        lVar9 = lVar9 + local_98;
        lVar12 = lVar12 + local_98;
        bVar5 = param_1 != -1;
        param_1 = param_1 + 1;
        if (bVar5) goto LAB_1003dfc58;
      }
      lStack_a0 = lStack_a0 + 1;
      lVar9 = local_a8 + local_c8[0];
      param_1 = local_c8[3] + -1;
      lVar12 = local_c8[2] + local_c8[0];
      local_c8[2] = lVar12;
      local_c8[3] = param_1;
      local_a8 = lVar9;
    } while (lStack_a0 != local_c8[1]);
  }
  return;
}

