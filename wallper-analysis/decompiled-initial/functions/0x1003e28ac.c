// rea decompile_all
// name: FUN_1003e28ac
// address: 0x1003e28ac
// body: available
// range: 0x1003e28ac-0x1003e2eb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003e2dc0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined8 FUN_1003e28ac(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  NSComparisonResult NVar7;
  long extraout_x8;
  undefined1 *puVar8;
  long lVar9;
  long extraout_x12;
  long extraout_x13;
  long extraout_x13_00;
  long extraout_x13_01;
  long extraout_x14;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined1 auStack_e0 [8];
  ulong local_d8 [2];
  ulong local_70;
  ulong local_68;
  ulong local_58;
  
  lVar5 = 0;
  FUN_10040211c();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar12 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_e0 + lVar12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar9 = (long)puVar8 - extraout_x13;
  (*(code *)PTR____chkstk_darwin_100521118)();
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = (lVar9 - extraout_x13_00) - extraout_x13_01;
  lVar16 = *(long *)(extraout_x12 + 0x48);
  if (lVar16 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1003e2eb0);
    (*pcVar4)();
  }
  if ((param_2 - param_1 == -0x8000000000000000) && (lVar16 == -1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1003e2eb4);
    (*pcVar4)();
  }
  if ((param_3 - param_2 == -0x8000000000000000) && (lVar16 == -1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1003e2eb8);
    (*pcVar4)();
  }
  lVar2 = 0;
  if (lVar16 != 0) {
    lVar2 = (long)(param_2 - param_1) / lVar16;
  }
  lVar3 = 0;
  if (lVar16 != 0) {
    lVar3 = (long)(param_3 - param_2) / lVar16;
  }
  local_58 = param_1;
  local_68 = param_4;
  if (lVar2 < lVar3) {
    lVar12 = lVar2 * lVar16;
    if ((param_4 < param_1) || (param_1 + lVar12 <= param_4)) {
      _swift_arrayInitWithTakeFrontToBack(param_4,param_1,lVar2,lVar5);
    }
    else if (param_4 != param_1) {
      _swift_arrayInitWithTakeBackToFront(param_4,param_1,lVar2,lVar5);
    }
    uVar17 = param_4 + lVar12;
    local_70 = uVar17;
    if (0 < lVar12 && param_2 < param_3) {
      do {
        FUN_100029504(param_2,lVar10,FUN_10040211c);
        uVar6 = param_4;
        FUN_100029504(param_4,extraout_x14,FUN_10040211c);
        iVar1 = *(int *)(lVar5 + 0x3c);
        uVar13 = *(ulong *)(lVar10 + iVar1 + 8);
        uVar20 = uVar13;
        if (uVar13 == 0) {
          uVar20 = *(ulong *)(lVar10 + 8);
          uVar6 = uVar20;
          _swift_bridgeObjectRetain(uVar20);
        }
        uVar18 = *(ulong *)(extraout_x14 + iVar1 + 8);
        uVar15 = uVar18;
        if (uVar18 == 0) {
          uVar15 = *(ulong *)(extraout_x14 + 8);
          uVar6 = uVar15;
          _swift_bridgeObjectRetain(uVar15);
        }
        FUN_100026df4();
        _swift_bridgeObjectRetain(uVar13);
        _swift_bridgeObjectRetain(uVar18);
        NVar7 = (extension_Foundation)::Swift::StringProtocol::_localizedCaseInsensitiveCompare
                          (uVar6,PTR___type_metadata_for_Swift_String_100523a98,
                           PTR___type_metadata_for_Swift_String_100523a98,uVar6,uVar6);
        _swift_bridgeObjectRelease(uVar20);
        _swift_bridgeObjectRelease(uVar15);
        FUN_100029548(extraout_x14,FUN_10040211c);
        FUN_100029548(lVar10,FUN_10040211c);
        if (NVar7.unknown == (undefined *)0xffffffffffffffff) {
          uVar6 = param_2 + lVar16;
          uVar20 = param_4;
          if ((param_1 < param_2) || (uVar6 <= param_1)) {
            _swift_arrayInitWithTakeFrontToBack(param_1,param_2,1,lVar5);
            uVar13 = local_68;
          }
          else {
            uVar13 = local_68;
            if (param_1 != param_2) {
              _swift_arrayInitWithTakeBackToFront(param_1,param_2,1,lVar5);
              uVar13 = local_68;
            }
          }
        }
        else {
          uVar20 = param_4 + lVar16;
          uVar6 = param_2;
          uVar13 = uVar20;
          if ((param_1 < param_4) || (uVar20 <= param_1)) {
            _swift_arrayInitWithTakeFrontToBack(param_1,param_4,1,lVar5);
          }
          else if (param_1 != param_4) {
            _swift_arrayInitWithTakeBackToFront(param_1,param_4,1,lVar5);
          }
        }
        local_68 = uVar13;
        param_1 = param_1 + lVar16;
        local_58 = param_1;
      } while ((uVar20 < uVar17) &&
              (param_2 = uVar6, param_4 = uVar20, local_58 = param_1, uVar6 < param_3));
    }
  }
  else {
    lVar10 = lVar3 * lVar16;
    if ((param_4 < param_2) || (param_2 + lVar10 <= param_4)) {
      _swift_arrayInitWithTakeFrontToBack(param_4,param_2,lVar3,lVar5);
    }
    else if (param_4 != param_2) {
      _swift_arrayInitWithTakeBackToFront(param_4,param_2,lVar3,lVar5);
    }
    uVar17 = param_4 + lVar10;
    local_70 = uVar17;
    local_58 = param_2;
    if (0 < lVar10 && param_1 < param_2) {
      lVar16 = -lVar16;
      local_58 = param_2;
      local_d8[0] = param_1;
      do {
        uVar20 = local_58 + lVar16;
        uVar6 = param_3;
        local_d8[1] = local_58;
        while( true ) {
          uVar13 = uVar17 + lVar16;
          FUN_100029504(uVar13,lVar9,FUN_10040211c);
          uVar18 = uVar20;
          FUN_100029504(uVar20,puVar8,FUN_10040211c);
          iVar1 = *(int *)(lVar5 + 0x3c);
          uVar14 = *(ulong *)(lVar9 + iVar1 + 8);
          uVar15 = uVar14;
          if (uVar14 == 0) {
            uVar15 = *(ulong *)(lVar9 + 8);
            uVar18 = uVar15;
            _swift_bridgeObjectRetain(uVar15);
          }
          uVar11 = *(ulong *)(puVar8 + (long)iVar1 + 8);
          uVar19 = uVar11;
          if (uVar11 == 0) {
            uVar19 = *(ulong *)((long)local_d8 + lVar12);
            uVar18 = uVar19;
            _swift_bridgeObjectRetain(uVar19);
          }
          param_3 = uVar6 + lVar16;
          FUN_100026df4();
          _swift_bridgeObjectRetain(uVar14);
          _swift_bridgeObjectRetain(uVar11);
          NVar7 = (extension_Foundation)::Swift::StringProtocol::_localizedCaseInsensitiveCompare
                            (uVar18,PTR___type_metadata_for_Swift_String_100523a98,
                             PTR___type_metadata_for_Swift_String_100523a98,uVar18,uVar18);
          _swift_bridgeObjectRelease(uVar15);
          _swift_bridgeObjectRelease(uVar19);
          FUN_100029548(puVar8,FUN_10040211c);
          FUN_100029548(lVar9,FUN_10040211c);
          uVar15 = local_d8[0];
          if (NVar7.unknown == (undefined *)0xffffffffffffffff) break;
          local_70 = uVar13;
          if ((uVar6 < uVar17) || (uVar17 <= param_3)) {
            _swift_arrayInitWithTakeFrontToBack(param_3,uVar13,1,lVar5);
          }
          else if (uVar6 != uVar17) {
            _swift_arrayInitWithTakeBackToFront(param_3,uVar13,1,lVar5);
          }
          uVar17 = uVar13;
          uVar6 = param_3;
          if (uVar13 <= param_4) goto LAB_1003e2c60;
        }
        if ((uVar6 < local_d8[1]) || (local_d8[1] <= param_3)) {
          _swift_arrayInitWithTakeFrontToBack(param_3,uVar20,1,lVar5);
        }
        else if (uVar6 != local_d8[1]) {
          _swift_arrayInitWithTakeBackToFront(param_3,uVar20,1,lVar5);
        }
        local_58 = uVar20;
      } while ((param_4 < uVar17) && (uVar15 < uVar20));
    }
  }
LAB_1003e2c60:
  FUN_1002650d8(&local_58,&local_68,&local_70);
  return 1;
}

