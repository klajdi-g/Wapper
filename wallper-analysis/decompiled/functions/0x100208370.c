// rea decompile_all
// name: FUN_100208370
// address: 0x100208370
// body: available
// range: 0x100208370-0x10020930f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100208370(ulong *param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5,undefined *param_6,undefined *param_7)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 *puVar4;
  _StringGuts *p_Var5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  _StringGuts _Var9;
  undefined *puVar10;
  _StringGuts _Var11;
  ulong uVar12;
  undefined *puVar13;
  _StringGuts _Var14;
  long unaff_x20;
  long lVar15;
  undefined8 uVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  _StringGuts local_b0;
  _StringGuts _Stack_a8;
  undefined *local_98;
  undefined *local_90;
  undefined1 auStack_88 [40];
  
  puVar6 = PTR___type_metadata_for_Any_100524178;
  uVar21 = *param_1;
  uVar19 = *(ulong *)(uVar21 + 0x10);
  if (uVar19 != 0) {
    uVar20 = 0;
    plVar17 = (long *)(uVar21 + 0x20);
    do {
      if (*(ulong *)(uVar21 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100209164);
        (*pcVar2)();
      }
      lVar15 = *plVar17;
      if (*(long *)(lVar15 + 0x10) != 0) {
        _swift_bridgeObjectRetain(lVar15);
        puVar4 = &DAT_00006469;
        uVar18 = 0;
        FUN_10000464c(&DAT_00006469);
        if ((uVar18 & 1) != 0) {
          FUN_1000280d4(*(long *)(lVar15 + 0x38) + (long)puVar4 * 0x20,auStack_88);
          p_Var5 = &local_b0;
          _swift_dynamicCast(p_Var5,auStack_88,puVar6 + 8,
                             PTR___type_metadata_for_Swift_String_100523a98,6);
          _Var14.unknown = _Stack_a8.unknown;
          if (((ulong)p_Var5 & 1) != 0) {
            if ((local_b0.unknown == *(undefined **)(unaff_x20 + 0x28)) &&
               (_Stack_a8.unknown == *(undefined **)(unaff_x20 + 0x30))) {
              _swift_bridgeObjectRelease(lVar15);
              _swift_bridgeObjectRelease(_Stack_a8.unknown);
            }
            else {
              bVar3 = Swift::_stringCompareWithSmolCheck
                                (local_b0,_Stack_a8,
                                 (_StringComparisonResult)(__int8)*(undefined **)(unaff_x20 + 0x28))
              ;
              _swift_bridgeObjectRelease(lVar15);
              _swift_bridgeObjectRelease(_Var14.unknown);
              if (!bVar3) goto LAB_1002083d0;
            }
            puVar10 = PTR___type_metadata_for_Swift_String_100523a98;
            if (*(ulong *)(uVar21 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1002092a4);
              (*pcVar2)();
            }
            puVar13 = (undefined *)*plVar17;
            local_b0.unknown = (undefined *)0x7265706c6c6157;
            _Stack_a8.unknown = (undefined *)0xe700000000000000;
            local_98 = PTR___type_metadata_for_Swift_String_100523a98;
            FUN_100007d88(&local_b0,auStack_88);
            puVar8 = puVar13;
            _swift_bridgeObjectRetain(puVar13);
            _swift_isUniquelyReferenced_nonNull_native();
            local_b0.unknown = puVar13;
            FUN_100340514(auStack_88,0xd000000000000010,0x80000001004e1510,puVar8);
            _Var14.unknown = local_b0.unknown;
            local_b0.unknown = (undefined *)0x7265706c6c6157;
            _Stack_a8.unknown = (undefined *)0xe700000000000000;
            local_98 = puVar10;
            FUN_100007d88(&local_b0,auStack_88);
            _Var11.unknown = _Var14.unknown;
            _swift_isUniquelyReferenced_nonNull_native(_Var14.unknown);
            local_b0.unknown = _Var14.unknown;
            FUN_100340514(auStack_88,0xd000000000000017,0x80000001004e16f0,_Var11.unknown);
            _Var14.unknown = local_b0.unknown;
            local_98 = puVar10;
            local_90 = local_b0.unknown;
            local_b0.unknown = param_4;
            _Stack_a8.unknown = (undefined *)param_5;
            FUN_100007d88(&local_b0,auStack_88);
            _swift_bridgeObjectRetain(param_5);
            _Var11.unknown = _Var14.unknown;
            _swift_isUniquelyReferenced_nonNull_native(_Var14.unknown);
            local_b0.unknown = _Var14.unknown;
            FUN_100340514(auStack_88,0x4977656976657270,0xec0000006567616d,_Var11.unknown);
            _Var14.unknown = local_b0.unknown;
            puVar10 = PTR___type_metadata_for_Swift_Int_100523bd8;
            if (*(long *)(local_b0.unknown + 0x10) == 0) {
              local_b0.unknown = (undefined *)0x0;
            }
            else {
              _swift_bridgeObjectRetain(local_b0.unknown);
              lVar15 = 0x6572726566657270;
              uVar19 = 0;
              FUN_10000464c(0x6572726566657270);
              if ((uVar19 & 1) == 0) {
                _swift_bridgeObjectRelease(_Var14.unknown);
              }
              else {
                FUN_1000280d4(*(long *)(_Var14.unknown + 0x38) + lVar15 * 0x20,auStack_88);
                _swift_bridgeObjectRelease(_Var14.unknown);
                p_Var5 = &local_b0;
                _swift_dynamicCast(p_Var5,auStack_88,puVar6 + 8,
                                   PTR___type_metadata_for_Swift_Int_100523bd8,6);
                if (((ulong)p_Var5 & 1) != 0) goto LAB_100208a50;
              }
              local_b0.unknown = (undefined *)0x0;
            }
LAB_100208a50:
            lVar15 = 0x6765746163627573;
            local_98 = puVar10;
            FUN_100007d88(&local_b0,auStack_88);
            _Var11.unknown = _Var14.unknown;
            _swift_isUniquelyReferenced_nonNull_native(_Var14.unknown);
            local_b0.unknown = _Var14.unknown;
            FUN_100340514(auStack_88,0x6572726566657270,0xee00726564724f64,_Var11.unknown);
            _Var14.unknown = local_b0.unknown;
            local_98 = PTR___type_metadata_for_Swift_String_100523a98;
            local_b0.unknown = param_6;
            _Stack_a8.unknown = param_7;
            FUN_100007d88(&local_b0,auStack_88);
            _swift_bridgeObjectRetain(param_7);
            _Var11.unknown = _Var14.unknown;
            _swift_isUniquelyReferenced_nonNull_native(_Var14.unknown);
            local_b0.unknown = _Var14.unknown;
            FUN_100340514(auStack_88,0xd000000000000015,0x80000001004e1710,_Var11.unknown);
            _Var14.unknown = local_b0.unknown;
            local_90 = local_b0.unknown;
            _Var11.unknown = PTR___swiftEmptyArrayStorage_100524190;
            if (*(long *)(local_b0.unknown + 0x10) != 0) {
              _swift_bridgeObjectRetain(local_b0.unknown);
              uVar19 = 0xed0000736569726f;
              FUN_10000464c(0x6765746163627573);
              if ((uVar19 & 1) == 0) {
                _swift_bridgeObjectRelease(_Var14.unknown);
                _Var11.unknown = PTR___swiftEmptyArrayStorage_100524190;
              }
              else {
                FUN_1000280d4(*(long *)(_Var14.unknown + 0x38) + lVar15 * 0x20,auStack_88);
                _swift_bridgeObjectRelease(_Var14.unknown);
                puVar10 = &DAT_10054f988;
                FUN_100002f94(&DAT_10054f988,&DAT_100428ac0);
                p_Var5 = &local_b0;
                _swift_dynamicCast(p_Var5,auStack_88,puVar6 + 8,puVar10,6);
                _Var14.unknown = local_b0.unknown;
                _Var11.unknown = PTR___swiftEmptyArrayStorage_100524190;
                if (((ulong)p_Var5 & 1) != 0) {
                  _swift_bridgeObjectRetain(local_b0.unknown);
                  _Var11.unknown = _Var14.unknown;
                }
              }
            }
            uVar19 = *(ulong *)(_Var11.unknown + 0x10);
            if (uVar19 == 0) goto LAB_100208c84;
            uVar18 = 0;
            plVar17 = (long *)(_Var11.unknown + 0x20);
            goto LAB_100208bd8;
          }
        }
        _swift_bridgeObjectRelease(lVar15);
      }
LAB_1002083d0:
      uVar20 = uVar20 + 1;
      plVar17 = plVar17 + 1;
    } while (uVar19 != uVar20);
  }
  puVar8 = PTR___type_metadata_for_Swift_String_100523a98;
  puVar6 = &DAT_10054c048;
  FUN_100002f94(&DAT_10054c048,&DAT_10041d7b0);
  puVar13 = puVar6;
  _swift_allocObject();
  *(undefined8 *)(puVar13 + 0x18) = 0xc;
  *(undefined8 *)(puVar13 + 0x10) = 6;
  *(undefined1 **)(puVar13 + 0x20) = &DAT_00006469;
  uVar16 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(puVar13 + 0x28) = 0xe200000000000000;
  *(undefined8 *)(puVar13 + 0x30) = uVar16;
  *(undefined8 *)(puVar13 + 0x38) = uVar1;
  *(undefined **)(puVar13 + 0x48) = puVar8;
  *(undefined8 *)(puVar13 + 0x50) = 0xd000000000000010;
  *(undefined8 *)(puVar13 + 0x58) = 0x80000001004e1510;
  *(undefined8 *)(puVar13 + 0x60) = 0x7265706c6c6157;
  *(undefined8 *)(puVar13 + 0x68) = 0xe700000000000000;
  *(undefined **)(puVar13 + 0x78) = puVar8;
  *(undefined8 *)(puVar13 + 0x80) = 0xd000000000000017;
  *(undefined8 *)(puVar13 + 0x88) = 0x80000001004e16f0;
  *(undefined8 *)(puVar13 + 0x90) = 0x7265706c6c6157;
  *(undefined8 *)(puVar13 + 0x98) = 0xe700000000000000;
  *(undefined **)(puVar13 + 0xa8) = puVar8;
  *(undefined8 *)(puVar13 + 0xb0) = 0x4977656976657270;
  *(undefined8 *)(puVar13 + 0xb8) = 0xec0000006567616d;
  *(undefined **)(puVar13 + 0xc0) = param_4;
  *(undefined8 *)(puVar13 + 200) = param_5;
  *(undefined **)(puVar13 + 0xd8) = puVar8;
  *(undefined8 *)(puVar13 + 0xe0) = 0x6572726566657270;
  puVar10 = PTR___type_metadata_for_Swift_Int_100523bd8;
  *(undefined8 *)(puVar13 + 0xe8) = 0xee00726564724f64;
  *(undefined8 *)(puVar13 + 0xf0) = 0;
  *(undefined **)(puVar13 + 0x108) = puVar10;
  *(undefined8 *)(puVar13 + 0x110) = 0xd000000000000015;
  *(undefined **)(puVar13 + 0x138) = puVar8;
  *(undefined8 *)(puVar13 + 0x118) = 0x80000001004e1710;
  *(undefined **)(puVar13 + 0x120) = param_6;
  *(undefined **)(puVar13 + 0x128) = param_7;
  _swift_bridgeObjectRetain(param_5);
  _swift_bridgeObjectRetain(param_7);
  _swift_bridgeObjectRetain(uVar1);
  puVar7 = puVar13;
  FUN_100005b10();
  _swift_setDeallocating(puVar13);
  puVar10 = &DAT_10054a1c0;
  FUN_100002f94(&DAT_10054a1c0,&DAT_10041a250);
  _swift_arrayDestroy(puVar13 + 0x20,6,puVar10);
  _swift_deallocClassInstance(puVar13,0x20,7);
  _swift_allocObject(puVar6,0x170,7);
  *(undefined8 *)(puVar6 + 0x18) = 0xe;
  *(undefined8 *)(puVar6 + 0x10) = 7;
  *(undefined1 **)(puVar6 + 0x20) = &DAT_00006469;
  uVar16 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(puVar6 + 0x28) = 0xe200000000000000;
  *(undefined8 *)(puVar6 + 0x30) = uVar16;
  *(undefined8 *)(puVar6 + 0x38) = uVar1;
  *(undefined **)(puVar6 + 0x48) = puVar8;
  *(undefined8 *)(puVar6 + 0x50) = 0xd000000000000010;
  *(undefined8 *)(puVar6 + 0x58) = 0x80000001004e1510;
  *(undefined8 *)(puVar6 + 0x60) = 0x7265706c6c6157;
  *(undefined8 *)(puVar6 + 0x68) = 0xe700000000000000;
  *(undefined **)(puVar6 + 0x78) = puVar8;
  *(undefined8 *)(puVar6 + 0x80) = 0xd000000000000017;
  *(undefined8 *)(puVar6 + 0x88) = 0x80000001004e16f0;
  *(undefined8 *)(puVar6 + 0x90) = 0x7265706c6c6157;
  *(undefined8 *)(puVar6 + 0x98) = 0xe700000000000000;
  *(undefined **)(puVar6 + 0xa8) = puVar8;
  *(undefined8 *)(puVar6 + 0xb0) = 0x4977656976657270;
  *(undefined8 *)(puVar6 + 0xb8) = 0xec0000006567616d;
  *(undefined **)(puVar6 + 0xc0) = param_4;
  *(undefined8 *)(puVar6 + 200) = param_5;
  *(undefined **)(puVar6 + 0xd8) = puVar8;
  *(undefined8 *)(puVar6 + 0xe0) = 0x6572726566657270;
  *(undefined8 *)(puVar6 + 0xe8) = 0xee00726564724f64;
  *(undefined8 *)(puVar6 + 0xf0) = 0;
  *(undefined **)(puVar6 + 0x108) = PTR___type_metadata_for_Swift_Int_100523bd8;
  *(undefined8 *)(puVar6 + 0x110) = 0xd000000000000015;
  *(undefined8 *)(puVar6 + 0x118) = 0x80000001004e1710;
  *(undefined **)(puVar6 + 0x120) = param_6;
  *(undefined **)(puVar6 + 0x128) = param_7;
  *(undefined **)(puVar6 + 0x138) = puVar8;
  *(undefined8 *)(puVar6 + 0x140) = 0x6765746163627573;
  *(undefined8 *)(puVar6 + 0x148) = 0xed0000736569726f;
  puVar8 = &DAT_100554fe8;
  FUN_100002f94(&DAT_100554fe8,&DAT_100428ab8);
  _swift_allocObject();
  *(undefined8 *)(puVar8 + 0x18) = 2;
  *(undefined8 *)(puVar8 + 0x10) = 1;
  *(undefined **)(puVar8 + 0x20) = puVar7;
  puVar13 = &DAT_10054f988;
  FUN_100002f94(&DAT_10054f988,&DAT_100428ac0);
  *(undefined **)(puVar6 + 0x168) = puVar13;
  *(undefined **)(puVar6 + 0x150) = puVar8;
  _swift_bridgeObjectRetain(param_5);
  _swift_bridgeObjectRetain(param_7);
  _swift_bridgeObjectRetain(uVar1);
  puVar8 = puVar6;
  FUN_100005b10();
  _swift_setDeallocating(puVar6);
  _swift_arrayDestroy(puVar6 + 0x20,7,puVar10);
  _swift_deallocClassInstance(puVar6,0x20,7);
  uVar19 = uVar21;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar20 = uVar21;
  if ((uVar19 & 1) == 0) {
    uVar20 = 0;
    FUN_1001c4338(0,*(long *)(uVar21 + 0x10) + 1,1,uVar21);
  }
  uVar21 = *(ulong *)(uVar20 + 0x10);
  uVar19 = uVar20;
  if (*(ulong *)(uVar20 + 0x18) >> 1 <= uVar21) {
    uVar19 = (ulong)(1 < *(ulong *)(uVar20 + 0x18));
    FUN_1001c4338(uVar19,uVar21 + 1,1,uVar20);
  }
  *(ulong *)(uVar19 + 0x10) = uVar21 + 1;
  *(undefined **)(uVar19 + uVar21 * 8 + 0x20) = puVar8;
  *param_1 = uVar19;
  return;
LAB_100208bd8:
  do {
    if (*(ulong *)(_Var11.unknown + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100209260);
      (*pcVar2)();
    }
    lVar15 = *plVar17;
    if (*(long *)(lVar15 + 0x10) != 0) {
      _swift_bridgeObjectRetain(lVar15);
      puVar4 = &DAT_00006469;
      uVar12 = 0;
      FUN_10000464c(&DAT_00006469);
      if ((uVar12 & 1) != 0) {
        FUN_1000280d4(*(long *)(lVar15 + 0x38) + (long)puVar4 * 0x20,auStack_88);
        p_Var5 = &local_b0;
        _swift_dynamicCast(p_Var5,auStack_88,puVar6 + 8,
                           PTR___type_metadata_for_Swift_String_100523a98,6);
        _Var14.unknown = _Stack_a8.unknown;
        if (((ulong)p_Var5 & 1) != 0) {
          if ((local_b0.unknown == *(undefined **)(unaff_x20 + 0x38)) &&
             (_Stack_a8.unknown == *(undefined **)(unaff_x20 + 0x40))) {
            _swift_bridgeObjectRelease(_Var11.unknown);
            _swift_bridgeObjectRelease(lVar15);
          }
          else {
            bVar3 = Swift::_stringCompareWithSmolCheck
                              (local_b0,_Stack_a8,
                               (_StringComparisonResult)(__int8)*(undefined **)(unaff_x20 + 0x38));
            _swift_bridgeObjectRelease(lVar15);
            _swift_bridgeObjectRelease(_Var14.unknown);
            _Var14.unknown = _Var11.unknown;
            if (!bVar3) goto LAB_100208bc8;
          }
          _swift_bridgeObjectRelease(_Var14.unknown);
          puVar10 = PTR___type_metadata_for_Swift_String_100523a98;
          if (*(ulong *)(_Var11.unknown + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1002092fc);
            (*pcVar2)();
          }
          puVar13 = (undefined *)*plVar17;
          local_b0.unknown = (undefined *)0x7265706c6c6157;
          _Stack_a8.unknown = (undefined *)0xe700000000000000;
          local_98 = PTR___type_metadata_for_Swift_String_100523a98;
          FUN_100007d88(&local_b0,auStack_88);
          puVar8 = puVar13;
          _swift_bridgeObjectRetain(puVar13);
          _swift_isUniquelyReferenced_nonNull_native();
          local_b0.unknown = puVar13;
          FUN_100340514(auStack_88,0xd000000000000010,0x80000001004e1510,puVar8);
          _Var14.unknown = local_b0.unknown;
          local_b0.unknown = (undefined *)0x7265706c6c6157;
          _Stack_a8.unknown = (undefined *)0xe700000000000000;
          local_98 = puVar10;
          FUN_100007d88(&local_b0,auStack_88);
          _Var9.unknown = _Var14.unknown;
          _swift_isUniquelyReferenced_nonNull_native(_Var14.unknown);
          local_b0.unknown = _Var14.unknown;
          FUN_100340514(auStack_88,0xd000000000000017,0x80000001004e16f0,_Var9.unknown);
          _Var14.unknown = local_b0.unknown;
          local_98 = puVar10;
          local_b0.unknown = param_4;
          _Stack_a8.unknown = (undefined *)param_5;
          FUN_100007d88(&local_b0,auStack_88);
          _swift_bridgeObjectRetain(param_5);
          _Var9.unknown = _Var14.unknown;
          _swift_isUniquelyReferenced_nonNull_native(_Var14.unknown);
          local_b0.unknown = _Var14.unknown;
          FUN_100340514(auStack_88,0x4977656976657270,0xec0000006567616d,_Var9.unknown);
          _Var14.unknown = local_b0.unknown;
          if (*(long *)(local_b0.unknown + 0x10) == 0) {
            local_b0.unknown = (undefined *)0x0;
          }
          else {
            _swift_bridgeObjectRetain(local_b0.unknown);
            lVar15 = 0x6572726566657270;
            uVar19 = 0;
            FUN_10000464c(0x6572726566657270);
            if ((uVar19 & 1) == 0) {
              _swift_bridgeObjectRelease(_Var14.unknown);
            }
            else {
              FUN_1000280d4(*(long *)(_Var14.unknown + 0x38) + lVar15 * 0x20,auStack_88);
              _swift_bridgeObjectRelease(_Var14.unknown);
              p_Var5 = &local_b0;
              _swift_dynamicCast(p_Var5,auStack_88,puVar6 + 8,
                                 PTR___type_metadata_for_Swift_Int_100523bd8,6);
              if (((ulong)p_Var5 & 1) != 0) goto LAB_100209174;
            }
            local_b0.unknown = (undefined *)0x0;
          }
LAB_100209174:
          local_98 = PTR___type_metadata_for_Swift_Int_100523bd8;
          FUN_100007d88(&local_b0,auStack_88);
          _Var9.unknown = _Var14.unknown;
          _swift_isUniquelyReferenced_nonNull_native(_Var14.unknown);
          local_b0.unknown = _Var14.unknown;
          FUN_100340514(auStack_88,0x6572726566657270,0xee00726564724f64,_Var9.unknown);
          _Var14.unknown = local_b0.unknown;
          local_98 = PTR___type_metadata_for_Swift_String_100523a98;
          local_b0.unknown = param_6;
          _Stack_a8.unknown = param_7;
          FUN_100007d88(&local_b0,auStack_88);
          _swift_bridgeObjectRetain(param_7);
          _Var9.unknown = _Var14.unknown;
          _swift_isUniquelyReferenced_nonNull_native(_Var14.unknown);
          local_b0.unknown = _Var14.unknown;
          FUN_100340514(auStack_88,0xd000000000000015,0x80000001004e1710,_Var9.unknown);
          _Var14.unknown = local_b0.unknown;
          _swift_bridgeObjectRetain(local_b0.unknown);
          puVar6 = _Var11.unknown;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((ulong)puVar6 & 1) == 0) {
            FUN_100287224();
          }
          if (*(ulong *)(_Var11.unknown + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100209310);
            (*pcVar2)();
          }
          uVar16 = *(undefined8 *)(_Var11.unknown + uVar18 * 8 + 0x20);
          *(undefined **)(_Var11.unknown + uVar18 * 8 + 0x20) = _Var14.unknown;
          _swift_bridgeObjectRelease(_Var14.unknown);
          _swift_bridgeObjectRelease(uVar16);
          goto LAB_100208e48;
        }
      }
      _swift_bridgeObjectRelease(lVar15);
    }
LAB_100208bc8:
    uVar18 = uVar18 + 1;
    plVar17 = plVar17 + 1;
  } while (uVar19 != uVar18);
LAB_100208c84:
  _swift_bridgeObjectRelease(_Var11.unknown);
  puVar6 = &DAT_10054c048;
  FUN_100002f94(&DAT_10054c048,&DAT_10041d7b0);
  _swift_allocObject();
  *(undefined8 *)(puVar6 + 0x18) = 0xc;
  *(undefined8 *)(puVar6 + 0x10) = 6;
  *(undefined1 **)(puVar6 + 0x20) = &DAT_00006469;
  uVar16 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(puVar6 + 0x28) = 0xe200000000000000;
  *(undefined8 *)(puVar6 + 0x30) = uVar16;
  *(undefined8 *)(puVar6 + 0x38) = uVar1;
  puVar10 = PTR___type_metadata_for_Swift_String_100523a98;
  *(undefined **)(puVar6 + 0x48) = PTR___type_metadata_for_Swift_String_100523a98;
  *(undefined8 *)(puVar6 + 0x50) = 0xd000000000000010;
  *(undefined8 *)(puVar6 + 0x58) = 0x80000001004e1510;
  *(undefined8 *)(puVar6 + 0x60) = param_2;
  *(undefined8 *)(puVar6 + 0x68) = param_3;
  *(undefined **)(puVar6 + 0x78) = puVar10;
  *(undefined8 *)(puVar6 + 0x80) = 0xd000000000000017;
  *(undefined8 *)(puVar6 + 0x88) = 0x80000001004e16f0;
  *(undefined8 *)(puVar6 + 0x90) = param_2;
  *(undefined8 *)(puVar6 + 0x98) = param_3;
  *(undefined **)(puVar6 + 0xa8) = puVar10;
  *(undefined8 *)(puVar6 + 0xb0) = 0x4977656976657270;
  *(undefined8 *)(puVar6 + 0xb8) = 0xec0000006567616d;
  *(undefined **)(puVar6 + 0xc0) = param_4;
  *(undefined8 *)(puVar6 + 200) = param_5;
  *(undefined **)(puVar6 + 0xd8) = puVar10;
  *(undefined8 *)(puVar6 + 0xe0) = 0x6572726566657270;
  *(undefined8 *)(puVar6 + 0xe8) = 0xee00726564724f64;
  *(undefined8 *)(puVar6 + 0xf0) = 0;
  *(undefined **)(puVar6 + 0x108) = PTR___type_metadata_for_Swift_Int_100523bd8;
  *(undefined8 *)(puVar6 + 0x110) = 0xd000000000000015;
  *(undefined **)(puVar6 + 0x138) = puVar10;
  *(undefined8 *)(puVar6 + 0x118) = 0x80000001004e1710;
  *(undefined **)(puVar6 + 0x120) = param_6;
  *(undefined **)(puVar6 + 0x128) = param_7;
  _swift_bridgeObjectRetain_n(param_3,2);
  _swift_bridgeObjectRetain(param_5);
  _swift_bridgeObjectRetain(param_7);
  _swift_bridgeObjectRetain(uVar1);
  puVar8 = puVar6;
  FUN_100005b10();
  _swift_setDeallocating(puVar6);
  puVar10 = &DAT_10054a1c0;
  FUN_100002f94(&DAT_10054a1c0,&DAT_10041a250);
  _swift_arrayDestroy(puVar6 + 0x20,6,puVar10);
  _swift_deallocClassInstance(puVar6,0x20,7);
  puVar6 = _Var11.unknown;
  _swift_isUniquelyReferenced_nonNull_native();
  puVar10 = _Var11.unknown;
  if (((ulong)puVar6 & 1) == 0) {
    puVar10 = (undefined *)0x0;
    FUN_1001c4338(0,*(long *)(_Var11.unknown + 0x10) + 1,1,_Var11.unknown);
  }
  uVar19 = *(ulong *)(puVar10 + 0x10);
  _Var11.unknown = puVar10;
  if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar19) {
    _Var11.unknown = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
    FUN_1001c4338(_Var11.unknown,uVar19 + 1,1,puVar10);
  }
  *(ulong *)(_Var11.unknown + 0x10) = uVar19 + 1;
  *(undefined **)(_Var11.unknown + uVar19 * 8 + 0x20) = puVar8;
LAB_100208e48:
  puVar6 = &DAT_10054f988;
  FUN_100002f94(&DAT_10054f988,&DAT_100428ac0);
  local_b0.unknown = _Var11.unknown;
  local_98 = puVar6;
  if (puVar6 == (undefined *)0x0) {
    _swift_bridgeObjectRetain(_Var11.unknown);
    FUN_10002a29c(&local_b0,&DAT_10054d428,&DAT_100420300);
    FUN_10027eb2c(auStack_88,0x6765746163627573,0xed0000736569726f);
    FUN_10002a29c(auStack_88,&DAT_10054d428,&DAT_100420300);
  }
  else {
    FUN_100007d88(&local_b0,auStack_88);
    _swift_bridgeObjectRetain(_Var11.unknown);
    puVar6 = local_90;
    puVar10 = local_90;
    _swift_isUniquelyReferenced_nonNull_native(local_90);
    local_b0.unknown = puVar6;
    FUN_100340514(auStack_88,0x6765746163627573,0xed0000736569726f,puVar10);
    local_90 = local_b0.unknown;
  }
  puVar6 = local_90;
  _swift_bridgeObjectRetain(local_90);
  uVar19 = uVar21;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar19 & 1) == 0) {
    FUN_100287224();
  }
  if (uVar20 < *(ulong *)(uVar21 + 0x10)) {
    lVar15 = uVar21 + uVar20 * 8;
    uVar16 = *(undefined8 *)(lVar15 + 0x20);
    *(undefined **)(lVar15 + 0x20) = puVar6;
    _swift_bridgeObjectRelease(puVar6);
    _swift_bridgeObjectRelease(_Var11.unknown);
    _swift_bridgeObjectRelease(uVar16);
    *param_1 = uVar21;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1002092b8);
  (*pcVar2)();
}

