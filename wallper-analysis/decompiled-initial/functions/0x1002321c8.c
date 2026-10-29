// rea decompile_all
// name: FUN_1002321c8
// address: 0x1002321c8
// body: available
// range: 0x1002321c8-0x1002326b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002326b0 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1002321c8(void)

{
  URL UVar1;
  undefined8 *puVar2;
  long lVar3;
  NSURL *pNVar4;
  String *pSVar5;
  URL UVar6;
  ID IVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  long extraout_x8;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  String SVar14;
  String SVar15;
  undefined1 auStack_e0 [8];
  undefined *local_d8;
  ulong local_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  ulong local_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  long local_98;
  ulong local_90;
  String *local_88;
  URL local_80;
  long local_78;
  long local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100521138;
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar11 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar11 + 0x40));
  local_78 = 0;
  local_70 = 0;
  local_80.unknown = (undefined *)0x0;
  puVar2 = (undefined8 *)0x0;
  _SecCodeCopySelf(0,&local_70);
  if (((int)puVar2 == 0) && (puVar2 = (undefined8 *)0x0, local_70 != 0)) {
    lVar3 = local_70;
    _SecCodeCopyStaticCode(local_70,0,&local_78);
    if (((int)lVar3 == 0 && local_78 != 0) &&
       ((lVar3 = local_78, _SecCodeCopyDesignatedRequirement(local_78,0,&local_80), (int)lVar3 == 0
        && (local_80.unknown != (undefined *)0x0)))) {
      local_88 = (String *)0x0;
      local_d8 = local_80.unknown;
      pNVar4 = Foundation::URL::_bridgeToObjectiveC(local_80);
      _SecStaticCodeCreateWithPath(pNVar4,0,&local_88);
      if (((int)pNVar4 != 0) || (local_88 == (String *)0x0)) {
        puVar2 = (undefined8 *)0x0;
        FUN_100231e20();
        _swift_allocError(&DAT_100533dd8,puVar2,0,0);
        puVar2[1] = 0;
        *puVar2 = 3;
        *(undefined4 *)(puVar2 + 2) = 0;
        *(undefined1 *)((long)puVar2 + 0x14) = 5;
        _swift_willThrow();
        goto LAB_1002323ac;
      }
      local_90 = 0;
      pSVar5 = local_88;
      UVar6.unknown = local_d8;
      _SecStaticCodeCheckValidityWithErrors(local_88,0x19,local_d8,&local_90);
      if ((int)pSVar5 != 0) {
        if (local_90 == 0) {
          SVar14.bridgeObject = (void *)0xe700000000000000;
          SVar14.str = (char *)0x6e776f6e6b6e75;
        }
        else {
          local_b0 = local_90;
          FUN_100008004(0);
          FUN_1000036d0(&DAT_1005578a0,FUN_100008004,
                        PTR_Foundation____C__CFErrorRef_>Swift__Error_100520e70);
          SVar14 = (extension_Foundation)::Swift::Error::get_localizedDescription();
          pSVar5 = (String *)0x0;
        }
        FUN_100231e20();
        _swift_allocError(&DAT_100533dd8,pSVar5,0,0);
        *pSVar5 = SVar14;
        *(undefined4 *)&pSVar5[1].str = 0;
        *(undefined1 *)((long)&pSVar5[1].str + 4) = 3;
        _swift_willThrow();
        goto LAB_1002323ac;
      }
      SVar15.bridgeObject = (void *)0x80000001004e2280;
      SVar15.str = (char *)0xd000000000000013;
      Foundation::URL::appendingPathComponent(SVar15,UVar6);
      UVar6.unknown = &_OBJC_CLASS___NSDictionary;
      _objc_allocWithZone();
      pNVar4 = Foundation::URL::_bridgeToObjectiveC(UVar6);
      IVar7 = objc_stub::initWithContentsOfURL_((ID)UVar6.unknown,pNVar4);
      (**(code **)(lVar11 + 8))
                (auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar1.unknown);
      if (IVar7 == 0) {
        uStack_a8 = 0;
        local_b0 = 0;
        local_98 = 0;
        uStack_a0 = 0;
LAB_1002325e4:
        puVar8 = (ulong *)&DAT_10054d428;
        puVar9 = &local_b0;
        FUN_10002a29c(puVar9,&DAT_10054d428,&DAT_100420300);
LAB_1002325fc:
        uVar12 = 0xe100000000000000;
        uVar13 = 0x30;
      }
      else {
        local_b0 = 0xd00000000000001a;
        uStack_a8 = 0x80000001004dc810;
        puVar8 = &local_b0;
        Swift::__bridgeAnythingNonVerbatimToObjectiveC
                  (puVar8,PTR___type_metadata_for_Swift_String_100523a98);
        IVar7 = objc_stub::__swift_objectForKeyedSubscript_(IVar7,puVar8);
        _swift_unknownObjectRelease(puVar8);
        if (IVar7 == 0) {
          uStack_c8 = 0;
          local_d0 = 0;
          lStack_b8 = 0;
          uStack_c0 = 0;
        }
        else {
          Swift::__bridgeAnyObjectToAny();
          _swift_unknownObjectRelease(IVar7);
        }
        uStack_a8 = uStack_c8;
        local_b0 = local_d0;
        local_98 = lStack_b8;
        uStack_a0 = uStack_c0;
        if (lStack_b8 == 0) goto LAB_1002325e4;
        puVar9 = &local_d0;
        puVar8 = &local_b0;
        _swift_dynamicCast(puVar9,puVar8,PTR___type_metadata_for_Any_100524178 + 8,
                           PTR___type_metadata_for_Swift_String_100523a98,6);
        uVar12 = uStack_c8;
        uVar13 = local_d0;
        if (((ulong)puVar9 & 1) == 0) goto LAB_1002325fc;
      }
      FUN_10028f000();
      uVar10 = uVar13;
      FUN_100137a74(uVar13,uVar12,puVar9,puVar8);
      _swift_bridgeObjectRelease();
      if ((uVar10 & 1) == 0) {
        FUN_100231e20();
        _swift_allocError(&DAT_100533dd8,puVar8,0,0);
        *puVar8 = uVar13;
        puVar8[1] = uVar12;
        *(undefined4 *)(puVar8 + 2) = 0;
        *(undefined1 *)((long)puVar8 + 0x14) = 4;
        _swift_willThrow();
      }
      else {
        _swift_bridgeObjectRelease(uVar12);
      }
      goto LAB_1002323ac;
    }
    puVar2 = (undefined8 *)0x0;
  }
  FUN_100231e20();
  _swift_allocError(&DAT_100533dd8,puVar2,0,0);
  puVar2[1] = 0;
  *puVar2 = 2;
  *(undefined4 *)(puVar2 + 2) = 0;
  *(undefined1 *)((long)puVar2 + 0x14) = 5;
  _swift_willThrow();
LAB_1002323ac:
  if (*(long *)PTR____stack_chk_guard_100521138 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

