// rea decompile_all
// name: FUN_1001a422c
// address: 0x1001a422c
// body: available
// range: 0x1001a422c-0x1001a4cfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001a4ce8 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001001a4b90) */

void FUN_1001a422c(URL param_1,double param_2,double param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  URL UVar3;
  NSColor *this;
  Color CVar4;
  NSColor *pNVar5;
  ID IVar6;
  undefined *puVar7;
  NSDictionary *pNVar8;
  Data DVar9;
  URL UVar10;
  ulong uVar11;
  undefined8 extraout_x1;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined1 *puVar17;
  ulong uVar18;
  long extraout_x8;
  undefined8 *puVar19;
  ulong uVar20;
  undefined1 *puVar21;
  long extraout_x12;
  long extraout_x13;
  undefined8 extraout_x14;
  double dVar22;
  long lVar23;
  long lVar24;
  double *pdVar25;
  code *UNRECOVERED_JUMPTABLE;
  long lVar26;
  undefined *puVar27;
  double *pdVar28;
  double *pdVar29;
  double *pdVar30;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  undefined8 extraout_d0_01;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  String SVar44;
  String SVar45;
  undefined8 local_d0;
  long local_c8;
  long local_c0;
  URL local_b8;
  undefined *local_b0;
  ulong local_a8;
  ulong local_a0;
  undefined *local_90;
  long local_88;
  
  local_88 = *(long *)PTR____stack_chk_guard_100521138;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(UVar3.unknown + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_100521118)();
  if (param_2 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1001a4cb8);
    (*UNRECOVERED_JUMPTABLE)();
  }
  if (9.223372036854776e+18 <= param_2) {
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1001a4cbc);
    (*UNRECOVERED_JUMPTABLE)();
  }
  if ((0x7fefffffffffffff < (ulong)ABS(param_2)) || (0x7fefffffffffffff < (ulong)ABS(param_3))) {
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1001a4cc0);
    (*UNRECOVERED_JUMPTABLE)();
  }
  if (param_3 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1001a4cc4);
    (*UNRECOVERED_JUMPTABLE)();
  }
  if (9.223372036854776e+18 <= param_3) {
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1001a4cc8);
    (*UNRECOVERED_JUMPTABLE)();
  }
  if (*(long *)(param_4 + 0x10) == 0x10) {
    local_a8 = (ulong)param_2;
    local_a0 = (ulong)param_3;
    local_90 = PTR___swiftEmptyArrayStorage_100524190;
    local_d0 = extraout_x14;
    local_c8 = (long)&local_d0 + (-extraout_x12 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
    local_c0 = extraout_x13;
    local_b8.unknown = param_1.unknown;
    local_b0 = UVar3.unknown;
    FUN_1001c5ebc(0,0x10,0);
    puVar7 = local_90;
    this = (NSColor *)0x0;
    FUN_100044230(0,&DAT_100552aa8,&PTR__OBJC_CLASS___NSColor_10053f9d0);
    lVar23 = 0;
    do {
      puVar27 = *(undefined **)(param_4 + 0x20 + lVar23);
      CVar4.unknown = puVar27;
      _swift_retain_n(puVar27,2);
      pNVar5 = (extension_SwiftUI)::__C::NSColor::__allocating_init(this,CVar4);
      IVar6 = NSColorSpace::sRGBColorSpace((ID)&_OBJC_CLASS___NSColorSpace);
      pNVar5 = (NSColor *)objc_stub::colorUsingColorSpace_((ID)pNVar5,IVar6);
      if (pNVar5 == (NSColor *)0x0) {
        CVar4.unknown = puVar27;
        _swift_retain();
        pNVar5 = (extension_SwiftUI)::__C::NSColor::__allocating_init(this,CVar4);
      }
      objc_stub::redComponent((ID)pNVar5);
      objc_stub::greenComponent((ID)pNVar5);
      objc_stub::blueComponent((ID)pNVar5);
      _swift_release(puVar27);
      uVar20 = 0;
      uVar2 = *(ulong *)(puVar7 + 0x10);
      local_90 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar2) {
        uVar20 = (ulong)(1 < *(ulong *)(puVar7 + 0x18));
        FUN_1001c5ebc(uVar20,uVar2 + 1,1);
      }
      puVar7 = local_90;
      uVar11 = local_a8;
      *(ulong *)(local_90 + 0x10) = uVar2 + 1;
      puVar19 = (undefined8 *)(local_90 + uVar2 * 0x18 + 0x20);
      *puVar19 = extraout_d0;
      puVar19[1] = extraout_d0_00;
      puVar19[2] = extraout_d0_01;
      lVar23 = lVar23 + 8;
    } while (lVar23 != 0x80);
    if (local_a8 + 0xe000000000000000 >> 0x3e < 3) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1001a4cd8);
      (*UNRECOVERED_JUMPTABLE)();
    }
    lVar26 = local_a8 * 4;
    _CGColorSpaceCreateDeviceRGB();
    uVar2 = local_a0;
    lVar23 = 0;
    _CGBitmapContextCreate(0,uVar11,local_a0,8,lVar26,uVar20,1);
    if (lVar23 == 0) {
      _swift_bridgeObjectRelease(puVar7);
    }
    else {
      lVar15 = lVar23;
      _CGBitmapContextGetData();
      if (lVar15 == 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1001a4cf0);
        (*UNRECOVERED_JUMPTABLE)();
      }
      if (SUB168(SEXT816((long)local_a8) * SEXT816((long)uVar2),8) !=
          (long)(local_a8 * uVar2) >> 0x3f) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1001a4cdc);
        (*UNRECOVERED_JUMPTABLE)();
      }
      if (local_a8 * uVar2 + 0xe000000000000000 >> 0x3e < 3) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1001a4ce0);
        (*UNRECOVERED_JUMPTABLE)();
      }
      if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1001a4ce4);
        (*UNRECOVERED_JUMPTABLE)();
      }
      if (uVar2 != 0) {
        if ((long)local_a8 < 0) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1001a4ce8);
          (*UNRECOVERED_JUMPTABLE)();
        }
        uVar20 = 0;
        puVar21 = (undefined1 *)(lVar15 + 3);
        dVar22 = 255.0;
        uVar11 = 0xe000000000000000;
        do {
          dVar31 = ((double)uVar20 / (double)(uVar2 - 1)) * 3.0;
          dVar32 = (double)(long)dVar31;
          if (0x7fefffffffffffff < (ulong)ABS(dVar32)) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1001a4ca8);
            (*UNRECOVERED_JUMPTABLE)();
          }
          if (dVar32 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1001a4cac);
            (*UNRECOVERED_JUMPTABLE)();
          }
          if (9.223372036854776e+18 <= dVar32) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1001a4cb0);
            (*UNRECOVERED_JUMPTABLE)();
          }
          lVar14 = (long)dVar32;
          lVar15 = lVar14 + 1;
          if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1001a4cb4);
            (*UNRECOVERED_JUMPTABLE)();
          }
          if (2 < lVar15) {
            lVar15 = 3;
          }
          if (local_a8 != 0) {
            if (lVar14 + 0xe000000000000000U >> 0x3e < 3) {
                    /* WARNING: Does not return */
              UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1001a4ccc);
              (*UNRECOVERED_JUMPTABLE)();
            }
            if (lVar15 + 0xe000000000000000U >> 0x3e < 3) {
                    /* WARNING: Does not return */
              UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1001a4cd0);
              (*UNRECOVERED_JUMPTABLE)();
            }
            if (SUB168(SEXT816((long)uVar20) * SEXT816((long)local_a8),8) !=
                (long)(uVar20 * local_a8) >> 0x3f) {
                    /* WARNING: Does not return */
              UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1001a4cd4);
              (*UNRECOVERED_JUMPTABLE)();
            }
            uVar13 = 0;
            dVar31 = dVar31 - (double)lVar14;
            lVar14 = lVar14 * 4;
            lVar15 = lVar15 * 4;
            dVar32 = 1.0 - dVar31;
            uVar16 = *(ulong *)(puVar7 + 0x10);
            puVar17 = puVar21;
            uVar18 = uVar11;
            do {
              dVar33 = ((double)uVar13 / (double)(long)(local_a8 - 1)) * 3.0;
              dVar34 = (double)(long)dVar33;
              if (0x7fefffffffffffff < (ulong)ABS(dVar34)) {
                    /* WARNING: Does not return */
                UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1001a4c50);
                (*UNRECOVERED_JUMPTABLE)();
              }
              if (dVar34 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
                UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1001a4c54);
                (*UNRECOVERED_JUMPTABLE)();
              }
              if (9.223372036854776e+18 <= dVar34) {
                    /* WARNING: Does not return */
                UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1001a4c58);
                (*UNRECOVERED_JUMPTABLE)();
              }
              lVar24 = (long)dVar34;
              lVar1 = lVar24 + 1;
              if (SCARRY8(lVar24,1)) {
                    /* WARNING: Does not return */
                UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1001a4c5c);
                (*UNRECOVERED_JUMPTABLE)();
              }
              if (2 < lVar1) {
                lVar1 = 3;
              }
              if (SCARRY8(lVar14,lVar24)) {
                    /* WARNING: Does not return */
                UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1001a4c60);
                (*UNRECOVERED_JUMPTABLE)();
              }
              if (uVar16 <= (ulong)(lVar14 + lVar24)) {
                    /* WARNING: Does not return */
                UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1001a4c64);
                (*UNRECOVERED_JUMPTABLE)();
              }
              if (SCARRY8(lVar14,lVar1)) {
                    /* WARNING: Does not return */
                UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1001a4c68);
                (*UNRECOVERED_JUMPTABLE)();
              }
              if (uVar16 <= (ulong)(lVar14 + lVar1)) {
                    /* WARNING: Does not return */
                UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1001a4c6c);
                (*UNRECOVERED_JUMPTABLE)();
              }
              if (SCARRY8(lVar15,lVar24)) {
                    /* WARNING: Does not return */
                UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1001a4c70);
                (*UNRECOVERED_JUMPTABLE)();
              }
              if (uVar16 <= (ulong)(lVar15 + lVar24)) {
                    /* WARNING: Does not return */
                UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1001a4c74);
                (*UNRECOVERED_JUMPTABLE)();
              }
              if (SCARRY8(lVar15,lVar1)) {
                    /* WARNING: Does not return */
                UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1001a4c78);
                (*UNRECOVERED_JUMPTABLE)();
              }
              if (uVar16 <= (ulong)(lVar15 + lVar1)) {
                    /* WARNING: Does not return */
                UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1001a4c7c);
                (*UNRECOVERED_JUMPTABLE)();
              }
              if (uVar18 >> 0x3e < 3) {
                    /* WARNING: Does not return */
                UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1001a4c80);
                (*UNRECOVERED_JUMPTABLE)();
              }
              dVar33 = dVar33 - (double)lVar24;
              pdVar25 = (double *)(puVar7 + (lVar14 + lVar24) * 0x18 + 0x20);
              pdVar28 = (double *)(puVar7 + (lVar14 + lVar1) * 0x18 + 0x20);
              pdVar29 = (double *)(puVar7 + (lVar15 + lVar24) * 0x18 + 0x20);
              pdVar30 = (double *)(puVar7 + (lVar15 + lVar1) * 0x18 + 0x20);
              dVar35 = 1.0 - dVar33;
              dVar36 = (dVar32 * (dVar35 * *pdVar25 + dVar33 * *pdVar28) +
                       dVar31 * (dVar35 * *pdVar29 + dVar33 * *pdVar30)) * 255.0;
              dVar34 = dVar22;
              if (dVar36 <= 255.0) {
                dVar34 = dVar36;
              }
              dVar40 = 0.0;
              if (0.0 < dVar36) {
                dVar40 = dVar34;
              }
              if (0x7fefffffffffffff < (ulong)ABS(dVar40)) {
                    /* WARNING: Does not return */
                UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1001a4c84);
                (*UNRECOVERED_JUMPTABLE)();
              }
              if (dVar40 <= -1.0) {
                    /* WARNING: Does not return */
                UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1001a4c88);
                (*UNRECOVERED_JUMPTABLE)();
              }
              if (256.0 <= dVar40) {
                    /* WARNING: Does not return */
                UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1001a4c8c);
                (*UNRECOVERED_JUMPTABLE)();
              }
              dVar34 = pdVar25[1];
              dVar36 = pdVar25[2];
              dVar41 = pdVar28[1];
              dVar38 = pdVar28[2];
              dVar42 = pdVar29[1];
              dVar37 = pdVar29[2];
              dVar43 = pdVar30[1];
              dVar39 = pdVar30[2];
              puVar17[-3] = (char)(int)dVar40;
              dVar40 = (dVar32 * (dVar35 * dVar34 + dVar33 * dVar41) +
                       dVar31 * (dVar35 * dVar42 + dVar33 * dVar43)) * 255.0;
              dVar34 = dVar22;
              if (dVar40 <= 255.0) {
                dVar34 = dVar40;
              }
              dVar41 = 0.0;
              if (0.0 < dVar40) {
                dVar41 = dVar34;
              }
              if (0x7fefffffffffffff < (ulong)ABS(dVar41)) {
                    /* WARNING: Does not return */
                UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1001a4c90);
                (*UNRECOVERED_JUMPTABLE)();
              }
              if (dVar41 <= -1.0) {
                    /* WARNING: Does not return */
                UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1001a4c94);
                (*UNRECOVERED_JUMPTABLE)();
              }
              if (256.0 <= dVar41) {
                    /* WARNING: Does not return */
                UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1001a4c98);
                (*UNRECOVERED_JUMPTABLE)();
              }
              puVar17[-2] = (char)(int)dVar41;
              dVar34 = (dVar32 * (dVar35 * dVar36 + dVar33 * dVar38) +
                       dVar31 * (dVar35 * dVar37 + dVar33 * dVar39)) * 255.0;
              dVar33 = dVar22;
              if (dVar34 <= 255.0) {
                dVar33 = dVar34;
              }
              dVar35 = 0.0;
              if (0.0 < dVar34) {
                dVar35 = dVar33;
              }
              if (0x7fefffffffffffff < (ulong)ABS(dVar35)) {
                    /* WARNING: Does not return */
                UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1001a4c9c);
                (*UNRECOVERED_JUMPTABLE)();
              }
              if (dVar35 <= -1.0) {
                    /* WARNING: Does not return */
                UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1001a4ca0);
                (*UNRECOVERED_JUMPTABLE)();
              }
              if (256.0 <= dVar35) {
                    /* WARNING: Does not return */
                UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1001a4ca4);
                (*UNRECOVERED_JUMPTABLE)();
              }
              uVar13 = uVar13 + 1;
              puVar17[-1] = (char)(int)dVar35;
              *puVar17 = 0xff;
              uVar18 = uVar18 + 1;
              puVar17 = puVar17 + 4;
            } while (local_a8 != uVar13);
          }
          uVar20 = uVar20 + 1;
          uVar11 = uVar11 + local_a8;
          puVar21 = puVar21 + lVar26;
        } while (uVar20 != local_a0);
      }
      _swift_bridgeObjectRelease(puVar7);
      _CGBitmapContextCreateImage();
      if (lVar23 != 0) {
        puVar7 = &_OBJC_CLASS___NSBitmapImageRep;
        _objc_allocWithZone();
        IVar6 = objc_stub::initWithCGImage_((ID)puVar7,lVar23);
        puVar7 = PTR___swiftEmptyArrayStorage_100524190;
        FUN_100006b0c(PTR___swiftEmptyArrayStorage_100524190);
        FUN_10000807c(0);
        FUN_1000036d0(&DAT_10054a5f0,FUN_10000807c,&TargetProtocolConformanceDescriptor_10041b450);
        pNVar8 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
        _swift_bridgeObjectRelease(puVar7);
        DVar9.unknown = (undefined *)objc_stub::representationUsingType_properties_(IVar6,4,pNVar8);
        if (DVar9.unknown != (undefined *)0x0) {
          uVar12 = extraout_x1;
          DVar9 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar9);
          IVar6 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
          UVar3.unknown = (undefined *)0x1;
          IVar6 = NSFileManager::URLsForDirectory_inDomains_(IVar6,0xe);
          puVar7 = local_b0;
          (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
          lVar23 = local_c0;
          if (*(long *)(IVar6 + 0x10) == 0) {
            _swift_bridgeObjectRelease(IVar6);
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1001a4cfc);
            (*UNRECOVERED_JUMPTABLE)();
          }
          (**(code **)(local_c0 + 0x10))
                    (local_d0,IVar6 + ((ulong)*(byte *)(local_c0 + 0x50) + 0x20 &
                                      ((ulong)*(byte *)(local_c0 + 0x50) ^ 0xffffffffffffffff)),
                     puVar7);
          _swift_bridgeObjectRelease(IVar6);
          lVar26 = local_c8;
          SVar44.bridgeObject = (void *)0xe700000000000000;
          SVar44.str = (char *)0x7265706c6c6157;
          Foundation::URL::appendingPathComponent(SVar44,true,UVar3);
          UNRECOVERED_JUMPTABLE = *(code **)(lVar23 + 8);
          (*UNRECOVERED_JUMPTABLE)(local_d0,puVar7);
          UVar3.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
          UVar10.unknown = Foundation::URL::_bridgeToObjectiveC(UVar3);
          local_90 = (undefined *)0x0;
          IVar6 = NSFileManager::createDirectoryAtURL_withIntermediateDirectories_attributes_error_
                            ((ID)UVar3.unknown,UVar10.unknown,1,0,&local_90);
          if ((int)IVar6 == 0) {
            puVar7 = local_90;
            Foundation::__convertNSErrorToError();
            _swift_willThrow(0);
            _swift_errorRelease(puVar7);
          }
          UVar3.unknown = local_b8.unknown;
          SVar45.bridgeObject = (void *)0x80000001004e0500;
          SVar45.str = (char *)0xd00000000000001a;
          Foundation::URL::appendingPathComponent(SVar45,UVar10);
          Foundation::Data::_write(UVar3,(NSDataWritingOptions)0x1,DVar9);
          puVar7 = local_b0;
          (*UNRECOVERED_JUMPTABLE)(lVar26,local_b0);
          FUN_100093624(DVar9.unknown,uVar12);
          (**(code **)(local_c0 + 0x38))(local_b8.unknown,0,1,puVar7);
          if (*(long *)PTR____stack_chk_guard_100521138 == local_88) {
            return;
          }
          goto LAB_1001a4ce8;
        }
      }
    }
    UNRECOVERED_JUMPTABLE = *(code **)(local_c0 + 0x38);
    param_1.unknown = local_b8.unknown;
    if (*(long *)PTR____stack_chk_guard_100521138 == local_88) {
LAB_1001a4af0:
                    /* WARNING: Could not recover jumptable at 0x0001001a4b1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1.unknown,1,1);
      return;
    }
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(extraout_x13 + 0x38);
    if (*(long *)PTR____stack_chk_guard_100521138 == local_88) goto LAB_1001a4af0;
  }
LAB_1001a4ce8:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

