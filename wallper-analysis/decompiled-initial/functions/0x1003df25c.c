// rea decompile_all
// name: FUN_1003df25c
// address: 0x1003df25c
// body: available
// range: 0x1003df25c-0x1003df41b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003df25c(long param_1,long param_2,long param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  long extraout_x8;
  undefined1 *puVar7;
  long extraout_x12;
  long extraout_x13;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long local_98 [4];
  long local_78;
  long lStack_70;
  long local_68;
  
  lVar6 = 0;
  FUN_10040211c();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  puVar7 = &stack0xffffffffffffff60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar9 = (long)puVar7 - extraout_x13;
  if (param_3 != param_2) {
    local_68 = *param_4;
    local_98[0] = *(long *)(extraout_x12 + 0x48);
    lVar11 = local_68 + local_98[0] * (param_3 + -1);
    lVar8 = -local_98[0];
    param_1 = param_1 - param_3;
    lVar10 = local_68 + local_98[0] * param_3;
    local_98[1] = param_2;
    local_98[2] = lVar10;
    local_98[3] = param_1;
    local_78 = lVar11;
    lStack_70 = param_3;
LAB_1003df374:
    do {
      FUN_100029504(lVar11,lVar9,FUN_10040211c);
      plVar1 = (long *)(lVar10 + *(int *)(lVar6 + 0x30));
      lVar2 = 0;
      if ((char)plVar1[1] != '\x01') {
        lVar2 = *plVar1;
      }
      plVar1 = (long *)(lVar9 + *(int *)(lVar6 + 0x30));
      lVar3 = 0;
      if ((char)plVar1[1] != '\x01') {
        lVar3 = *plVar1;
      }
      FUN_100029548(lVar9,FUN_10040211c);
      if (lVar2 < lVar3) {
        if (local_68 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1003df41c);
          (*pcVar4)();
        }
        FUN_100007e64(lVar10,puVar7,FUN_10040211c);
        _swift_arrayInitWithTakeFrontToBack(lVar10,lVar11,1,lVar6);
        FUN_100007e64(puVar7,lVar11,FUN_10040211c);
        lVar11 = lVar11 + lVar8;
        lVar10 = lVar10 + lVar8;
        bVar5 = param_1 != -1;
        param_1 = param_1 + 1;
        if (bVar5) goto LAB_1003df374;
      }
      lStack_70 = lStack_70 + 1;
      lVar11 = local_78 + local_98[0];
      param_1 = local_98[3] + -1;
      lVar10 = local_98[2] + local_98[0];
      local_98[2] = lVar10;
      local_98[3] = param_1;
      local_78 = lVar11;
    } while (lStack_70 != local_98[1]);
  }
  return;
}

