// rea decompile_all
// name: FUN_1003e1e04
// address: 0x1003e1e04
// body: available
// range: 0x1003e1e04-0x1003e27bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003e26cc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined8 FUN_1003e1e04(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  NSComparisonResult NVar6;
  ulong uVar7;
  long extraout_x8;
  long lVar8;
  undefined1 *puVar9;
  long extraout_x12;
  long extraout_x13;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined1 auStack_d0 [8];
  ulong local_c8;
  ulong local_70;
  ulong local_68;
  ulong local_58;
  
  lVar4 = 0;
  FUN_10040211c();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar9 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar8 = (long)puVar9 - extraout_x13;
  lVar14 = *(long *)(extraout_x12 + 0x48);
  if (lVar14 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1003e27b4);
    (*pcVar3)();
  }
  if ((param_2 - param_1 == -0x8000000000000000) && (lVar14 == -1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1003e27b8);
    (*pcVar3)();
  }
  if ((param_3 - param_2 == -0x8000000000000000) && (lVar14 == -1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1003e27bc);
    (*pcVar3)();
  }
  lVar2 = 0;
  if (lVar14 != 0) {
    lVar2 = (long)(param_2 - param_1) / lVar14;
  }
  lVar11 = 0;
  if (lVar14 != 0) {
    lVar11 = (long)(param_3 - param_2) / lVar14;
  }
  local_68 = param_4;
  local_58 = param_1;
  if (lVar2 < lVar11) {
    lVar11 = lVar2 * lVar14;
    if ((param_4 < param_1) || (param_1 + lVar11 <= param_4)) {
      _swift_arrayInitWithTakeFrontToBack(param_4,param_1,lVar2,lVar4);
    }
    else if (param_4 != param_1) {
      _swift_arrayInitWithTakeBackToFront(param_4,param_1,lVar2,lVar4);
    }
    uVar10 = param_4 + lVar11;
    local_70 = uVar10;
    if (0 < lVar11 && param_2 < param_3) {
      do {
        uVar5 = param_4;
        FUN_100029504(param_4,lVar8,FUN_10040211c);
        uVar13 = 0xe600000000000000;
        uVar12 = param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(param_2 + (long)*(int *)(lVar4 + 0x24))) {
        case 0:
          break;
        case 1:
          uVar13 = 0xe800000000000000;
        case 0x10:
          break;
        case 2:
          uVar13 = 0xe500000000000000;
        case 0x11:
          break;
        case 3:
          uVar13 = 0xe400000000000000;
        case 0x12:
          break;
        case 4:
        case 0x13:
          break;
        case 5:
          uVar13 = 0xe500000000000000;
        case 0x14:
          break;
        case 6:
          uVar13 = 0xe500000000000000;
        case 0x15:
          break;
        case 7:
          uVar13 = 0xe500000000000000;
        case 0x16:
          break;
        case 8:
        case 0x17:
          break;
        case 9:
        case 0x18:
          uVar13 = 0xea00000000007473;
          break;
        case 10:
          uVar13 = 0xe700000000000000;
        case 0x19:
          break;
        case 0xb:
        case 0x1a:
          break;
        case 0xc:
          uVar13 = 0xe800000000000000;
        case 0x1b:
          break;
        case 0xd:
          uVar13 = 0xe500000000000000;
        case 0x1c:
          break;
        case 0xe:
          uVar13 = 0xe000000000000000;
        case 0x1d:
          break;
        case 0xf:
          goto switchD_1003e1fd0_caseD_f;
        }
        uVar12 = 0xe600000000000000;
switchD_1003e1fd0_caseD_f:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(lVar8 + *(int *)(lVar4 + 0x24))) {
        case 1:
          uVar12 = 0xe800000000000000;
          break;
        case 2:
          uVar12 = 0xe500000000000000;
          break;
        case 3:
          uVar12 = 0xe400000000000000;
          break;
        case 4:
          break;
        case 5:
          uVar12 = 0xe500000000000000;
          break;
        case 6:
          uVar12 = 0xe500000000000000;
          break;
        case 7:
          uVar12 = 0xe500000000000000;
          break;
        case 8:
          break;
        case 9:
          uVar12 = 0xea00000000007473;
          break;
        case 10:
          uVar12 = 0xe700000000000000;
          break;
        case 0xb:
          break;
        case 0xc:
          uVar12 = 0xe800000000000000;
          break;
        case 0xd:
          uVar12 = 0xe500000000000000;
          break;
        case 0xe:
          uVar12 = 0xe000000000000000;
        }
        FUN_100026df4();
        NVar6 = (extension_Foundation)::Swift::StringProtocol::_localizedCaseInsensitiveCompare
                          (uVar5,PTR___type_metadata_for_Swift_String_100523a98,
                           PTR___type_metadata_for_Swift_String_100523a98,uVar5,uVar5);
        _swift_bridgeObjectRelease(uVar13);
        _swift_bridgeObjectRelease(uVar12);
        FUN_100029548(lVar8,FUN_10040211c);
        if (NVar6.unknown == (undefined *)0xffffffffffffffff) {
          uVar12 = param_2 + lVar14;
          uVar5 = param_4;
          if ((param_1 < param_2) || (uVar12 <= param_1)) {
            _swift_arrayInitWithTakeFrontToBack(param_1,param_2,1,lVar4);
            uVar1 = local_68;
          }
          else {
            uVar1 = local_68;
            if (param_1 != param_2) {
              _swift_arrayInitWithTakeBackToFront(param_1,param_2,1,lVar4);
              uVar1 = local_68;
            }
          }
        }
        else {
          uVar5 = param_4 + lVar14;
          uVar12 = param_2;
          uVar1 = uVar5;
          if ((param_1 < param_4) || (uVar5 <= param_1)) {
            _swift_arrayInitWithTakeFrontToBack(param_1,param_4,1,lVar4);
          }
          else if (param_1 != param_4) {
            _swift_arrayInitWithTakeBackToFront(param_1,param_4,1,lVar4);
          }
        }
        local_68 = uVar1;
        param_1 = param_1 + lVar14;
        local_58 = param_1;
      } while ((uVar5 < uVar10) &&
              (param_2 = uVar12, param_4 = uVar5, local_58 = param_1, uVar12 < param_3));
    }
  }
  else {
    lVar8 = lVar11 * lVar14;
    if ((param_4 < param_2) || (param_2 + lVar8 <= param_4)) {
      _swift_arrayInitWithTakeFrontToBack(param_4,param_2,lVar11,lVar4);
    }
    else if (param_4 != param_2) {
      _swift_arrayInitWithTakeBackToFront(param_4,param_2,lVar11,lVar4);
    }
    uVar10 = param_4 + lVar8;
    local_70 = uVar10;
    local_58 = param_2;
    if (0 < lVar8 && param_1 < param_2) {
      lVar14 = -lVar14;
LAB_1003e23c8:
      uVar5 = param_2 + lVar14;
      uVar12 = param_3;
      local_c8 = param_2;
      local_58 = param_2;
      do {
        uVar1 = uVar10 + lVar14;
        uVar7 = uVar5;
        FUN_100029504(uVar5,puVar9,FUN_10040211c);
        uVar13 = 0xe600000000000000;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(uVar10 + lVar14 + *(int *)(lVar4 + 0x24))) {
        case 1:
        case 0x1f:
          uVar13 = 0xe800000000000000;
        case 0x10:
        case 0x2e:
          break;
        case 2:
        case 0x20:
          uVar13 = 0xe500000000000000;
        case 0x11:
        case 0x2f:
          break;
        case 3:
        case 0x21:
          uVar13 = 0xe400000000000000;
        case 0x12:
        case 0x30:
          break;
        case 4:
        case 0x22:
        case 0x13:
        case 0x31:
          break;
        case 5:
        case 0x23:
          uVar13 = 0xe500000000000000;
        case 0x14:
        case 0x32:
          break;
        case 6:
        case 0x24:
          uVar13 = 0xe500000000000000;
        case 0x15:
        case 0x33:
          break;
        case 7:
        case 0x25:
          uVar13 = 0xe500000000000000;
        case 0x16:
        case 0x34:
          break;
        case 8:
        case 0x26:
        case 0x17:
        case 0x35:
          break;
        case 9:
        case 0x27:
        case 0x18:
        case 0x36:
          uVar13 = 0xea00000000007473;
          break;
        case 10:
        case 0x28:
          uVar13 = 0xe700000000000000;
        case 0x19:
        case 0x37:
          break;
        case 0xb:
        case 0x29:
        case 0x1a:
        case 0x38:
          break;
        case 0xc:
        case 0x2a:
          uVar13 = 0xe800000000000000;
        case 0x1b:
        case 0x39:
          break;
        case 0xd:
        case 0x2b:
          uVar13 = 0xe500000000000000;
        case 0x1c:
        case 0x3a:
          break;
        case 0xe:
        case 0x2c:
          uVar13 = 0xe000000000000000;
        case 0x1d:
        case 0x3b:
          break;
        case 0xf:
        case 0x2d:
          goto switchD_1003e244c_caseD_f;
        }
        param_2 = 0xe600000000000000;
switchD_1003e244c_caseD_f:
switchD_1003e258c_caseD_10:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(puVar9[*(int *)(lVar4 + 0x24)]) {
        case 1:
        case 0x1f:
          param_2 = 0xe800000000000000;
        case 0x1d:
          break;
        case 2:
        case 0x20:
          param_2 = 0xe500000000000000;
        case 0x12:
          break;
        case 3:
        case 0x21:
          param_2 = 0xe400000000000000;
        case 0x16:
          break;
        case 4:
        case 0x22:
        case 0x1b:
          break;
        case 5:
        case 0x23:
          param_2 = 0xe500000000000000;
        case 0x1c:
          break;
        case 6:
        case 0x24:
          param_2 = 0xe500000000000000;
        case 0x19:
          break;
        case 7:
        case 0x25:
          param_2 = 0xe500000000000000;
        case 0x14:
          break;
        case 8:
        case 0x26:
        case 0xf:
          break;
        case 9:
        case 0x27:
          param_2 = 0x7473;
        case 0x11:
          param_2 = param_2 & 0xffffffffffff | 0xea00000000000000;
          break;
        case 10:
        case 0x28:
          param_2 = 0xe700000000000000;
        case 0x17:
          break;
        case 0xb:
        case 0x29:
        case 0x13:
          break;
        case 0xc:
        case 0x2a:
          param_2 = 0xe800000000000000;
        case 0x18:
          break;
        case 0xd:
        case 0x2b:
          param_2 = 0xe500000000000000;
        case 0x15:
          break;
        case 0xe:
        case 0x2c:
        case 0x1a:
          param_2 = 0xe000000000000000;
          break;
        case 0x10:
          goto switchD_1003e258c_caseD_10;
        }
        param_3 = uVar12 + lVar14;
        FUN_100026df4();
        NVar6 = (extension_Foundation)::Swift::StringProtocol::_localizedCaseInsensitiveCompare
                          (uVar7,PTR___type_metadata_for_Swift_String_100523a98,
                           PTR___type_metadata_for_Swift_String_100523a98,uVar7,uVar7);
        _swift_bridgeObjectRelease(uVar13);
        _swift_bridgeObjectRelease(param_2);
        FUN_100029548(puVar9,FUN_10040211c);
        if (NVar6.unknown == (undefined *)0xffffffffffffffff) goto LAB_1003e2738;
        local_70 = uVar1;
        if ((uVar12 < uVar10) || (uVar10 <= param_3)) {
          _swift_arrayInitWithTakeFrontToBack(param_3,uVar1,1,lVar4);
        }
        else if (uVar12 != uVar10) {
          _swift_arrayInitWithTakeBackToFront(param_3,uVar1,1,lVar4);
        }
        uVar10 = uVar1;
        uVar12 = param_3;
        if (uVar1 <= param_4) break;
      } while( true );
    }
  }
LAB_1003e2370:
  FUN_1002650d8(&local_58,&local_68,&local_70);
  return 1;
LAB_1003e2738:
  if ((uVar12 < local_c8) || (local_c8 <= param_3)) {
    _swift_arrayInitWithTakeFrontToBack(param_3,uVar5,1,lVar4);
  }
  else if (uVar12 != local_c8) {
    _swift_arrayInitWithTakeBackToFront(param_3,uVar5,1,lVar4);
  }
  local_58 = uVar5;
  if ((uVar10 <= param_4) || (param_2 = uVar5, uVar5 <= param_1)) goto LAB_1003e2370;
  goto LAB_1003e23c8;
}

