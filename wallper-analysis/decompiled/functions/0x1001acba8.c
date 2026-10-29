// rea decompile_all
// name: FUN_1001acba8
// address: 0x1001acba8
// body: available
// range: 0x1001acba8-0x1001acf73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001acf68 to 0x100413640 /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::__C::NSURLSession::$data (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1001acf70 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

tuple2_conflict1 FUN_1001acba8(void)

{
  String *pSVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  void *pvVar5;
  bool bVar6;
  undefined8 uVar7;
  Iterator IVar8;
  Data DVar9;
  void *pvVar10;
  ID IVar11;
  long *plVar12;
  _StringGuts _Var13;
  NSURLResponse *UNRECOVERED_JUMPTABLE;
  char *pcVar15;
  void *in_x3;
  long lVar16;
  code *pcVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  URL UVar20;
  long unaff_x22;
  void *pvVar21;
  undefined8 uVar22;
  char *pcVar23;
  long lVar24;
  code *pcVar25;
  Character CVar26;
  String SVar27;
  String SVar28;
  tuple2_conflict1 tVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  undefined *puVar14;
  
  lVar16 = *(long *)PTR____stack_chk_guard_100521138;
  uVar7 = *(undefined8 *)(unaff_x22 + 0xf0);
  lVar24 = *(long *)(unaff_x22 + 0xf8);
  uVar18 = *(undefined8 *)(unaff_x22 + 0xe8);
  Foundation::URL::_init();
  pcVar25 = *(code **)(lVar24 + 0x30);
  *(code **)(unaff_x22 + 0x118) = pcVar25;
  (*pcVar25)(uVar18,1,uVar7);
  if ((int)uVar18 == 1) {
    uVar7 = *(undefined8 *)(unaff_x22 + 0xe8);
LAB_1001acc24:
    FUN_10002a29c(uVar7,&DAT_100553d90,&DAT_10041bf10);
LAB_1001acd10:
    uVar7 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar18 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar22 = *(undefined8 *)(unaff_x22 + 0xd8);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x110));
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar19);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar18);
    _swift_task_dealloc(uVar22);
    UNRECOVERED_JUMPTABLE = *(NSURLResponse **)(unaff_x22 + 8);
    if (*(long *)PTR____stack_chk_guard_100521138 == lVar16) {
      DVar9.unknown = (undefined *)0x0;
                    /* WARNING: Could not recover jumptable at 0x0001001acd88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)UNRECOVERED_JUMPTABLE)(0);
      tVar29._ = UNRECOVERED_JUMPTABLE;
      tVar29._.unknown = DVar9.unknown;
      return tVar29;
    }
LAB_1001acf70:
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  UVar20.unknown = *(undefined **)(unaff_x22 + 0x110);
  pcVar15 = *(char **)(unaff_x22 + 0xf0);
  pcVar17 = *(code **)(*(long *)(unaff_x22 + 0xf8) + 0x20);
  *(code **)(unaff_x22 + 0x120) = pcVar17;
  (*pcVar17)(UVar20.unknown,*(undefined8 *)(unaff_x22 + 0xe8));
  Foundation::URL::get_pathComponents(UVar20);
  lVar24 = *(long *)(UVar20.unknown + 0x10);
joined_r0x0001001acc58:
  do {
    if (lVar24 == 0) {
      uVar18 = *(undefined8 *)(unaff_x22 + 0x110);
      uVar7 = *(undefined8 *)(unaff_x22 + 0xf0);
      lVar24 = *(long *)(unaff_x22 + 0xf8);
      _swift_bridgeObjectRelease(UVar20.unknown);
      (**(code **)(lVar24 + 8))(uVar18,uVar7);
      goto LAB_1001acd10;
    }
    if (*(long *)(UVar20.unknown + 0x10) < lVar24) {
                    /* WARNING: Does not return */
      pcVar25 = (code *)SoftwareBreakpoint(1,0x1001acf70);
      (*pcVar25)();
    }
    lVar24 = lVar24 + -1;
    pSVar1 = (String *)(UVar20.unknown + lVar24 * 0x10 + 0x20);
    puVar3 = pSVar1->bridgeObject;
    uVar2 = (ulong)pSVar1->str & 0xffffffffffff;
    if (((ulong)puVar3 & 0x2000000000000000) != 0) {
      uVar2 = (ulong)puVar3 >> 0x38 & 0xf;
    }
    _Var13.unknown = (undefined *)0x2;
    IVar8.unknown = puVar3;
    _swift_bridgeObjectRetain_n();
    do {
      Swift::String::Iterator::_next(IVar8);
      if (_Var13.unknown == (undefined *)0x0) {
        _swift_bridgeObjectRelease(puVar3);
        _swift_bridgeObjectRelease(puVar3);
        if (uVar2 == 0) goto joined_r0x0001001acc58;
        pvVar5 = pSVar1->bridgeObject;
        SVar27 = *pSVar1;
        if (*(ulong *)(UVar20.unknown + 0x10) < 2) {
          pvVar21 = (void *)0xe200000000000000;
          pcVar23 = (char *)0x7375;
          pvVar10 = pvVar5;
        }
        else {
          pcVar23 = *(char **)(UVar20.unknown + 0x30);
          pvVar21 = *(void **)(UVar20.unknown + 0x38);
          _swift_bridgeObjectRetain(pvVar5);
          pvVar10 = pvVar21;
        }
        uVar7 = *(undefined8 *)(unaff_x22 + 0xf0);
        uVar18 = *(undefined8 *)(unaff_x22 + 0xe0);
        _swift_bridgeObjectRetain(pvVar10);
        _swift_bridgeObjectRelease(UVar20.unknown);
        Swift::_StringGuts::grow(0x30,_Var13);
        _swift_bridgeObjectRelease(0xe000000000000000);
        SVar30.bridgeObject = in_x3;
        SVar30.str = pcVar15;
        Swift::String::append(SVar27,SVar30);
        SVar27.bridgeObject = (void *)0xe90000000000003d;
        SVar27.str = (char *)0x7972746e756f6326;
        SVar31.bridgeObject = in_x3;
        SVar31.str = pcVar15;
        Swift::String::append(SVar27,SVar31);
        SVar28.bridgeObject = pvVar21;
        SVar28.str = pcVar23;
        SVar32.bridgeObject = in_x3;
        SVar32.str = pcVar15;
        Swift::String::append(SVar28,SVar32);
        Foundation::URL::_init();
        _swift_bridgeObjectRelease(0x80000001004df990);
        (*pcVar25)(uVar18,1,uVar7);
        uVar7 = *(undefined8 *)(unaff_x22 + 0xe0);
        if ((int)uVar18 != 1) {
          (*pcVar17)(*(undefined8 *)(unaff_x22 + 0x108),uVar7);
          _swift_bridgeObjectRelease(pvVar5);
          _swift_bridgeObjectRelease(pvVar21);
          *(undefined **)(unaff_x22 + 0x128) = &_OBJC_CLASS___NSURLSession;
          IVar11 = NSURLSession::sharedSession((ID)&_OBJC_CLASS___NSURLSession);
          *(ID *)(unaff_x22 + 0x130) = IVar11;
          plVar12 = (long *)(ulong)*(uint *)(PTR__data_100520ea0 + 4);
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0x138) = plVar12;
          *plVar12 = unaff_x22;
          plVar12[1] = (long)FUN_1001acf74;
          if (*(long *)PTR____stack_chk_guard_100521138 == lVar16) {
            tVar29 = (extension_Foundation)::__C::NSURLSession::_data
                               ((URL)*(undefined **)(unaff_x22 + 0x108));
            return tVar29;
          }
          goto LAB_1001acf70;
        }
        (**(code **)(*(long *)(unaff_x22 + 0xf8) + 8))
                  (*(undefined8 *)(unaff_x22 + 0x110),*(undefined8 *)(unaff_x22 + 0xf0));
        _swift_bridgeObjectRelease(pvVar21);
        _swift_bridgeObjectRelease(pvVar5);
        goto LAB_1001acc24;
      }
      CVar26.bridgeObject = _Var13.unknown;
      CVar26.str = IVar8.unknown;
      puVar14 = _Var13.unknown;
      bVar6 = Swift::Character::get_isNumber(CVar26);
      _swift_bridgeObjectRelease();
      IVar8.unknown = _Var13.unknown;
      _Var13.unknown = puVar14;
    } while (bVar6);
    _swift_bridgeObjectRelease(puVar3);
    _swift_bridgeObjectRelease(puVar3);
  } while( true );
}

