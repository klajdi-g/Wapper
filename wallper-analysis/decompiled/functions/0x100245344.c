// rea decompile_all
// name: FUN_100245344
// address: 0x100245344
// body: available
// range: 0x100245344-0x100245853 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100245344(double param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  long param_6)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ID IVar8;
  NSString *pNVar9;
  undefined *puVar10;
  void *aBlock;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong *puVar18;
  long lVar19;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  code *local_80;
  undefined *local_78;
  
  lVar16 = _TtC7Wallper21VideoWallpaperManager::shownPlayers;
  lVar19 = *(long *)(param_2 + 0x10);
  if (lVar19 != 0) {
    puVar18 = (ulong *)(param_2 + 0x28);
    lVar14 = lVar19;
    do {
      uVar11 = puVar18[-1];
      uVar3 = *puVar18;
      _swift_beginAccess(param_3 + 0x10,&local_a0,0x20,0);
      lVar15 = *(long *)(param_3 + 0x10);
      lVar17 = *(long *)(lVar15 + 0x10);
      _swift_bridgeObjectRetain(uVar3);
      if (lVar17 == 0) {
LAB_1002454bc:
        _swift_endAccess(&local_a0);
      }
      else {
        _swift_bridgeObjectRetain(lVar15);
        uVar5 = uVar11;
        uVar12 = uVar3;
        FUN_10000464c();
        if ((uVar12 & 1) == 0) {
          _swift_bridgeObjectRelease(lVar15);
          goto LAB_1002454bc;
        }
        uVar6 = *(undefined8 *)(*(long *)(lVar15 + 0x38) + uVar5 * 8);
        _swift_endAccess(&local_a0);
        _swift_bridgeObjectRelease(lVar15);
        _swift_beginAccess(param_4 + lVar16,&local_a0,0x21,0);
        uVar7 = *(ulong *)(param_4 + lVar16);
        _swift_isUniquelyReferenced_nonNull_native();
        lVar17 = *(long *)(param_4 + lVar16);
        *(undefined8 *)(param_4 + lVar16) = 0x8000000000000000;
        uVar5 = uVar11;
        uVar12 = uVar3;
        FUN_10000464c();
        uVar13 = (ulong)~(uint)uVar12 & 1;
        lVar15 = *(long *)(lVar17 + 0x10) + uVar13;
        if (SCARRY8(*(long *)(lVar17 + 0x10),uVar13)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100245840);
          (*pcVar4)();
        }
        if (*(long *)(lVar17 + 0x18) < lVar15) {
          FUN_1001ce1dc(lVar15,uVar7);
          uVar5 = uVar11;
          uVar7 = uVar3;
          FUN_10000464c();
          if (((uint)uVar12 & 1) != ((uint)uVar7 & 1)) {
            Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100245854);
            (*pcVar4)();
          }
joined_r0x0001002454f4:
          if ((uVar12 & 1) != 0) goto LAB_1002454d4;
LAB_1002454f8:
          lVar15 = lVar17 + (uVar5 >> 6) * 8;
          *(ulong *)(lVar15 + 0x40) = *(ulong *)(lVar15 + 0x40) | 1L << (uVar5 & 0x3f);
          puVar1 = (ulong *)(*(long *)(lVar17 + 0x30) + uVar5 * 0x10);
          *puVar1 = uVar11;
          puVar1[1] = uVar3;
          *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar5 * 8) = uVar6;
          if (SCARRY8(*(long *)(lVar17 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100245844);
            (*pcVar4)();
          }
          *(long *)(lVar17 + 0x10) = *(long *)(lVar17 + 0x10) + 1;
          _swift_bridgeObjectRetain(uVar3);
        }
        else {
          if ((uVar7 & 1) == 0) {
            FUN_1001cb3f8();
            goto joined_r0x0001002454f4;
          }
          if ((uVar12 & 1) == 0) goto LAB_1002454f8;
LAB_1002454d4:
          *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar5 * 8) = uVar6;
        }
        *(long *)(param_4 + lVar16) = lVar17;
        _swift_endAccess(&local_a0);
      }
      IVar8 = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
      if (DAT_100557aa8 != -1) {
        _swift_once(&DAT_100557aa8,FUN_100255f78);
      }
      uVar6 = DAT_100577d40;
      puVar18 = puVar18 + 2;
      pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(uVar3);
      NSNotificationCenter::postNotificationName_object_(IVar8,uVar6,pNVar9);
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  CATransaction::begin((ID)&_OBJC_CLASS___CATransaction);
  CATransaction::setAnimationDuration_((ID)&_OBJC_CLASS___CATransaction,param_1);
  puVar2 = (undefined8 *)PTR__kCAMediaTimingFunctionEaseOut_100521aa8;
  if (2.0 <= param_1) {
    puVar2 = (undefined8 *)PTR__kCAMediaTimingFunctionEaseInEaseOut_100521aa0;
  }
  IVar8 = CAMediaTimingFunction::functionWithName_((ID)&_OBJC_CLASS___CAMediaTimingFunction,*puVar2)
  ;
  CATransaction::setAnimationTimingFunction_((ID)&_OBJC_CLASS___CATransaction,IVar8);
  puVar10 = &DAT_100534fa0;
  _swift_allocObject(&DAT_100534fa0,0x30,7);
  *(long *)(puVar10 + 0x10) = param_2;
  *(undefined8 *)(puVar10 + 0x18) = param_5;
  *(long *)(puVar10 + 0x20) = param_4;
  *(long *)(puVar10 + 0x28) = param_6;
  local_80 = FUN_100259bdc;
  local_a0 = PTR___NSConcreteStackBlock_100521110;
  local_98 = 0x42000000;
  local_90 = FUN_1000c7e7c;
  puStack_88 = &DAT_100534fb8;
  local_78 = puVar10;
  aBlock = __Block_copy(&local_a0);
  puVar10 = local_78;
  _swift_bridgeObjectRetain(param_2);
  _swift_retain(param_5);
  _swift_retain(param_6);
  _swift_release(puVar10);
  CATransaction::setCompletionBlock_((ID)&_OBJC_CLASS___CATransaction,aBlock);
  __Block_release(aBlock);
  if (lVar19 != 0) {
    puVar18 = (ulong *)(param_2 + 0x28);
    do {
      uVar11 = puVar18[-1];
      uVar3 = *puVar18;
      _swift_beginAccess(param_6 + 0x10,&local_a0,0x20,0);
      lVar16 = *(long *)(param_6 + 0x10);
      if (*(long *)(lVar16 + 0x10) == 0) {
LAB_100245738:
        _swift_endAccess(&local_a0);
      }
      else {
        _swift_bridgeObjectRetain(uVar3);
        _swift_bridgeObjectRetain(lVar16);
        uVar5 = uVar3;
        FUN_10000464c();
        if ((uVar5 & 1) == 0) {
          _swift_bridgeObjectRelease(lVar16);
          _swift_bridgeObjectRelease(uVar3);
          goto LAB_100245738;
        }
        IVar8 = *(ID *)(*(long *)(lVar16 + 0x38) + uVar11 * 8);
        _swift_endAccess(&local_a0);
        _swift_bridgeObjectRelease(lVar16);
        _swift_bridgeObjectRelease(uVar3);
        IVar8 = objc_stub::contentView(IVar8);
        if ((IVar8 != 0) && (IVar8 = objc_stub::layer(IVar8), IVar8 != 0)) {
          objc_stub::setOpacity_(IVar8,0x3f800000);
        }
      }
      puVar18 = puVar18 + 2;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
  }
  CATransaction::commit((ID)&_OBJC_CLASS___CATransaction);
  return;
}

