// rea decompile_all
// name: FUN_1001bb484
// address: 0x1001bb484
// body: available
// range: 0x1001bb484-0x1001bb82f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_1001bb484(char *param_1,undefined *param_2,undefined8 param_3,undefined *param_4)

{
  undefined8 *puVar1;
  _StringGuts _Var2;
  _StringGuts _Var3;
  char *pcVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  char *pcVar10;
  char *pcVar11;
  long extraout_x8;
  long extraout_x12;
  undefined8 unaff_x20;
  long lVar12;
  long lVar13;
  undefined1 *puVar14;
  ulong uVar15;
  ulong uVar16;
  String SVar17;
  String SVar18;
  undefined1 auVar19 [16];
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  ulong local_a8;
  undefined *local_a0;
  long local_98;
  long local_90;
  long local_88;
  char *local_80;
  long local_78;
  char *local_70;
  undefined *puStack_68;
  
  lVar7 = 0;
  local_80 = param_1;
  FUN_10025ee04();
  lVar13 = *(long *)(lVar7 + -8);
  local_88 = lVar7;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar13 + 0x40));
  puVar14 = &stack0xffffffffffffff50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar7 = (long)puVar14 - extraout_x12;
  puVar8 = &DAT_10042a610;
  _swift_getKeyPath(&DAT_10042a610);
  puVar9 = &DAT_10042a638;
  _swift_getKeyPath(&DAT_10042a638);
  Combine::Published::_get_subscript(&local_70);
  _swift_release(puVar8);
  _swift_release(puVar9);
  pcVar10 = local_70;
  uVar15 = 0;
  uVar16 = *(ulong *)(local_70 + 0x10);
  do {
    if (uVar16 == uVar15) {
      _swift_bridgeObjectRelease(pcVar10);
      _swift_bridgeObjectRetain(param_2);
      local_70 = local_80;
      puStack_68 = param_2;
LAB_1001bb804:
      auVar19._8_8_ = puStack_68;
      auVar19._0_8_ = local_70;
      return auVar19;
    }
    if (*(ulong *)(pcVar10 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1001bb830);
      (*pcVar5)();
    }
    local_a8 = (ulong)*(byte *)(lVar13 + 0x50) + 0x20 &
               ((ulong)*(byte *)(lVar13 + 0x50) ^ 0xffffffffffffffff);
    lVar12 = *(long *)(lVar13 + 0x48);
    FUN_100029504(pcVar10 + lVar12 * uVar15 + local_a8,lVar7,FUN_10025ee04);
    puVar1 = (undefined8 *)(lVar7 + *(int *)(local_88 + 0x14));
    _Var2.unknown = (undefined *)*puVar1;
    _Var3.unknown = (undefined *)puVar1[1];
    if (_Var2.unknown == local_80 && _Var3.unknown == param_2) {
      FUN_100029548(lVar7,FUN_10025ee04);
      goto LAB_1001bb608;
    }
    uVar15 = uVar15 + 1;
    param_4 = param_2;
    bVar6 = Swift::_stringCompareWithSmolCheck
                      (_Var2,_Var3,(_StringComparisonResult)(__int8)local_80);
    FUN_100029548(lVar7,FUN_10025ee04);
    if (bVar6) {
LAB_1001bb608:
      local_a0 = param_2;
      _swift_bridgeObjectRelease(pcVar10);
      local_90 = 2;
      do {
        pcVar10 = " @\x14";
        puVar8 = &DAT_10042a610;
        _swift_getKeyPath(&DAT_10042a610);
        _swift_getKeyPath();
        pcVar11 = pcVar10;
        Combine::Published::_get_subscript(&local_70,unaff_x20,puVar8);
        _swift_release(puVar8);
        _swift_release(pcVar10);
        pcVar4 = local_70;
        pcVar10 = local_70 + local_a8;
        local_98 = -*(long *)(local_70 + 0x10);
        uVar15 = 0xffffffffffffffff;
        do {
          if (local_98 + uVar15 == -1) {
            _swift_bridgeObjectRelease(pcVar4);
            local_70 = local_80;
            puStack_68 = local_a0;
            _swift_bridgeObjectRetain();
            SVar18.bridgeObject = (void *)0xe100000000000000;
            SVar18.str = (char *)0x20;
            SVar22.bridgeObject = param_4;
            SVar22.str = pcVar11;
            Swift::String::append(SVar18,SVar22);
            local_78 = local_90;
            SVar18 = Swift::CustomStringConvertible::get_description();
            SVar23.bridgeObject = param_4;
            SVar23.str = pcVar11;
            Swift::String::append(SVar18,SVar23);
            _swift_bridgeObjectRelease(SVar18.bridgeObject);
            goto LAB_1001bb804;
          }
          uVar15 = uVar15 + 1;
          if (*(ulong *)(pcVar4 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1001bb82c);
            (*pcVar5)();
          }
          pcVar5 = FUN_10025ee04;
          FUN_100029504(pcVar10,puVar14);
          _Var2.unknown = *(undefined **)(puVar14 + *(int *)(local_88 + 0x14));
          _Var3.unknown = *(undefined **)((long)(puVar14 + *(int *)(local_88 + 0x14)) + 8);
          local_70 = local_80;
          puStack_68 = local_a0;
          _swift_bridgeObjectRetain();
          SVar17.bridgeObject = (void *)0xe100000000000000;
          SVar17.str = (char *)0x20;
          SVar20.bridgeObject = param_4;
          SVar20.str = (char *)pcVar5;
          Swift::String::append(SVar17,SVar20);
          local_78 = local_90;
          SVar18 = Swift::CustomStringConvertible::get_description();
          SVar21.bridgeObject = param_4;
          SVar21.str = (char *)pcVar5;
          Swift::String::append(SVar18,SVar21);
          _swift_bridgeObjectRelease(SVar18.bridgeObject);
          puVar8 = puStack_68;
          if (_Var2.unknown == local_70 && _Var3.unknown == puStack_68) {
            _swift_bridgeObjectRelease(puStack_68);
            FUN_100029548(puVar14,FUN_10025ee04);
            break;
          }
          pcVar10 = pcVar10 + lVar12;
          pcVar11 = local_70;
          param_4 = puStack_68;
          bVar6 = Swift::_stringCompareWithSmolCheck
                            (_Var2,_Var3,(_StringComparisonResult)(__int8)local_70);
          _swift_bridgeObjectRelease(puVar8);
          FUN_100029548(puVar14,FUN_10025ee04);
        } while (!bVar6);
        _swift_bridgeObjectRelease(pcVar4);
        bVar6 = SCARRY8(local_90,1);
        local_90 = local_90 + 1;
        if (bVar6) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1001bb7a4);
          (*pcVar5)();
        }
      } while( true );
    }
  } while( true );
}

