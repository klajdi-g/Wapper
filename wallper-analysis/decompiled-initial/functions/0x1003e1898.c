// rea decompile_all
// name: FUN_1003e1898
// address: 0x1003e1898
// body: available
// range: 0x1003e1898-0x1003e1e03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003e1d0c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined8 FUN_1003e1898(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  NSComparisonResult NVar4;
  ulong uVar5;
  long extraout_x8;
  long extraout_x12;
  long extraout_x13;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 *puVar13;
  long lVar14;
  undefined1 auStack_d0 [8];
  ulong local_c8 [2];
  ulong local_70;
  ulong local_68;
  ulong local_58;
  
  lVar2 = 0;
  FUN_10040211c();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar13 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar11 = (long)puVar13 - extraout_x13;
  lVar10 = *(long *)(extraout_x12 + 0x48);
  if (lVar10 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003e1dfc);
    (*pcVar1)();
  }
  if ((param_2 - param_1 == -0x8000000000000000) && (lVar10 == -1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003e1e00);
    (*pcVar1)();
  }
  if ((param_3 - param_2 == -0x8000000000000000) && (lVar10 == -1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003e1e04);
    (*pcVar1)();
  }
  lVar9 = 0;
  if (lVar10 != 0) {
    lVar9 = (long)(param_2 - param_1) / lVar10;
  }
  lVar6 = 0;
  if (lVar10 != 0) {
    lVar6 = (long)(param_3 - param_2) / lVar10;
  }
  local_58 = param_1;
  local_68 = param_4;
  if (lVar9 < lVar6) {
    lVar6 = lVar9 * lVar10;
    if ((param_4 < param_1) || (param_1 + lVar6 <= param_4)) {
      _swift_arrayInitWithTakeFrontToBack(param_4,param_1,lVar9,lVar2);
    }
    else if (param_4 != param_1) {
      _swift_arrayInitWithTakeBackToFront(param_4,param_1,lVar9,lVar2);
    }
    uVar7 = param_4 + lVar6;
    local_70 = uVar7;
    if (0 < lVar6 && param_2 < param_3) {
      do {
        uVar3 = param_4;
        FUN_100029504(param_4,lVar11,FUN_10040211c);
        lVar6 = *(long *)(param_2 + (long)*(int *)(lVar2 + 0x1c) + 8);
        lVar9 = lVar6;
        if (lVar6 == 0) {
          lVar9 = -0x2000000000000000;
        }
        lVar12 = *(long *)(lVar11 + *(int *)(lVar2 + 0x1c) + 8);
        lVar14 = lVar12;
        if (lVar12 == 0) {
          lVar12 = 0;
          lVar14 = -0x2000000000000000;
        }
        FUN_100026df4();
        _swift_bridgeObjectRetain(lVar6);
        _swift_bridgeObjectRetain(lVar12);
        NVar4 = (extension_Foundation)::Swift::StringProtocol::_localizedCaseInsensitiveCompare
                          (uVar3,PTR___type_metadata_for_Swift_String_100523a98,
                           PTR___type_metadata_for_Swift_String_100523a98,uVar3,uVar3);
        _swift_bridgeObjectRelease(lVar9);
        _swift_bridgeObjectRelease(lVar14);
        FUN_100029548(lVar11,FUN_10040211c);
        if (NVar4.unknown == (undefined *)0xffffffffffffffff) {
          uVar8 = param_2 + lVar10;
          uVar3 = param_4;
          if ((param_1 < param_2) || (uVar8 <= param_1)) {
            _swift_arrayInitWithTakeFrontToBack(param_1,param_2,1,lVar2);
            uVar5 = local_68;
          }
          else {
            uVar5 = local_68;
            if (param_1 != param_2) {
              _swift_arrayInitWithTakeBackToFront(param_1,param_2,1,lVar2);
              uVar5 = local_68;
            }
          }
        }
        else {
          uVar3 = param_4 + lVar10;
          uVar8 = param_2;
          uVar5 = uVar3;
          if ((param_1 < param_4) || (uVar3 <= param_1)) {
            _swift_arrayInitWithTakeFrontToBack(param_1,param_4,1,lVar2);
          }
          else if (param_1 != param_4) {
            _swift_arrayInitWithTakeBackToFront(param_1,param_4,1,lVar2);
          }
        }
        local_68 = uVar5;
        param_1 = param_1 + lVar10;
        local_58 = param_1;
      } while ((uVar3 < uVar7) &&
              (param_2 = uVar8, param_4 = uVar3, local_58 = param_1, uVar8 < param_3));
    }
  }
  else {
    lVar11 = lVar6 * lVar10;
    if ((param_4 < param_2) || (param_2 + lVar11 <= param_4)) {
      _swift_arrayInitWithTakeFrontToBack(param_4,param_2,lVar6,lVar2);
    }
    else if (param_4 != param_2) {
      _swift_arrayInitWithTakeBackToFront(param_4,param_2,lVar6,lVar2);
    }
    uVar7 = param_4 + lVar11;
    local_70 = uVar7;
    local_58 = param_2;
    if (0 < lVar11 && param_1 < param_2) {
      lVar10 = -lVar10;
      local_58 = param_2;
      local_c8[0] = param_1;
      do {
        uVar3 = local_58 + lVar10;
        uVar8 = param_3;
        local_c8[1] = local_58;
        while( true ) {
          uVar5 = uVar3;
          FUN_100029504(uVar3,puVar13,FUN_10040211c);
          lVar9 = *(long *)(uVar7 + lVar10 + *(int *)(lVar2 + 0x1c) + 8);
          lVar11 = lVar9;
          if (lVar9 == 0) {
            lVar11 = -0x2000000000000000;
          }
          lVar14 = *(long *)(puVar13 + (long)*(int *)(lVar2 + 0x1c) + 8);
          lVar6 = lVar14;
          if (lVar14 == 0) {
            lVar14 = 0;
            lVar6 = -0x2000000000000000;
          }
          param_3 = uVar8 + lVar10;
          FUN_100026df4();
          _swift_bridgeObjectRetain(lVar9);
          _swift_bridgeObjectRetain(lVar14);
          NVar4 = (extension_Foundation)::Swift::StringProtocol::_localizedCaseInsensitiveCompare
                            (uVar5,PTR___type_metadata_for_Swift_String_100523a98,
                             PTR___type_metadata_for_Swift_String_100523a98,uVar5,uVar5);
          _swift_bridgeObjectRelease(lVar11);
          _swift_bridgeObjectRelease(lVar6);
          FUN_100029548(puVar13,FUN_10040211c);
          uVar5 = local_c8[0];
          if (NVar4.unknown == (undefined *)0xffffffffffffffff) break;
          uVar5 = uVar7 + lVar10;
          local_70 = uVar5;
          if ((uVar8 < uVar7) || (uVar7 <= param_3)) {
            _swift_arrayInitWithTakeFrontToBack(param_3,uVar5,1,lVar2);
          }
          else if (uVar8 != uVar7) {
            _swift_arrayInitWithTakeBackToFront(param_3,uVar5,1,lVar2);
          }
          uVar7 = uVar5;
          uVar8 = param_3;
          if (uVar5 <= param_4) goto LAB_1003e1bdc;
        }
        if ((uVar8 < local_c8[1]) || (local_c8[1] <= param_3)) {
          _swift_arrayInitWithTakeFrontToBack(param_3,uVar3,1,lVar2);
        }
        else if (uVar8 != local_c8[1]) {
          _swift_arrayInitWithTakeBackToFront(param_3,uVar3,1,lVar2);
        }
        local_58 = uVar3;
      } while ((param_4 < uVar7) && (uVar5 < uVar3));
    }
  }
LAB_1003e1bdc:
  FUN_1002650d8(&local_58,&local_68,&local_70);
  return 1;
}

