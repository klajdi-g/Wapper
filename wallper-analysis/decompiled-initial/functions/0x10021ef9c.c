// rea decompile_all
// name: FUN_10021ef9c
// address: 0x10021ef9c
// body: available
// range: 0x10021ef9c-0x10021f34b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10021ef9c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  byte bVar7;
  ID IVar8;
  NSString *pNVar9;
  long lVar10;
  CharacterSet CVar11;
  CharacterSet in;
  CharacterSet CVar12;
  TaskPriority TVar13;
  TaskPriority TVar14;
  ulong uVar15;
  undefined *puVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  void *pvVar20;
  undefined *puVar21;
  ulong uVar22;
  long unaff_x22;
  undefined8 uVar23;
  String SVar24;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x160));
  FUN_100217d50();
  bVar7 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  if ((bVar7 & 1) != 0) {
    IVar8 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
    pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    IVar8 = NSUserDefaults::boolForKey_(IVar8,pNVar9);
    if ((int)IVar8 != 0) {
      IVar8 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
      pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      IVar8 = NSUserDefaults::boolForKey_(IVar8,pNVar9);
      if ((int)IVar8 != 0) {
        lVar19 = *(long *)(unaff_x22 + 0x140);
        lVar10 = 0;
        FUN_10040211c();
        puVar1 = (undefined8 *)(lVar19 + *(int *)(lVar10 + 0x3c));
        puVar21 = (undefined *)puVar1[1];
        if (puVar21 == (undefined *)0x0) {
          SVar24 = (String)(ZEXT816(0xe000000000000000) << 0x40);
        }
        else {
          *(undefined8 *)(unaff_x22 + 0x100) = *puVar1;
          *(undefined **)(unaff_x22 + 0x108) = puVar21;
          CVar11 = Foundation::CharacterSet::typeMetadataAccessor();
          lVar10 = *(long *)(CVar11.unknown + -8);
          in.unknown = (undefined *)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
          _swift_task_alloc();
          CVar12.unknown = puVar21;
          _swift_bridgeObjectRetain();
          Foundation::CharacterSet::get_whitespacesAndNewlines(CVar12);
          SVar24 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
          (**(code **)(lVar10 + 8))(in.unknown,CVar11.unknown);
          _swift_bridgeObjectRelease(puVar21);
          _swift_task_dealloc(in.unknown);
        }
        pvVar20 = SVar24.bridgeObject;
        uVar15 = (ulong)SVar24.str & 0xffffffffffff;
        if (((ulong)pvVar20 & 0x2000000000000000) != 0) {
          uVar15 = (ulong)pvVar20 >> 0x38 & 0xf;
        }
        if (uVar15 == 0) {
          _swift_bridgeObjectRelease(pvVar20);
          SVar24.bridgeObject = (void *)0x80000001004e1db0;
          SVar24.str = (char *)0xd000000000000014;
        }
        uVar2 = *(undefined8 *)(unaff_x22 + 0x1a0);
        uVar4 = *(undefined8 *)(unaff_x22 + 0x1a8);
        lVar10 = *(long *)(unaff_x22 + 400);
        uVar5 = *(undefined8 *)(unaff_x22 + 0x198);
        uVar3 = *(undefined8 *)(unaff_x22 + 0x180);
        lVar19 = *(long *)(unaff_x22 + 0x188);
        uVar6 = *(undefined1 *)(unaff_x22 + 0x1c1);
        uVar23 = *(undefined8 *)(unaff_x22 + 0x150);
        puVar21 = &DAT_100561090;
        FUN_100002f94(&DAT_100561090,&DAT_10041c870);
        TVar13.unknown =
             (undefined *)(*(long *)(*(long *)(puVar21 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
        _swift_task_alloc();
        Swift::TaskPriority::get_utility(TVar13);
        TVar14 = Swift::TaskPriority::typeMetadataAccessor();
        (**(code **)(*(long *)(TVar14.unknown + -8) + 0x38))(TVar13.unknown,0,1,TVar14.unknown);
        puVar21 = &DAT_1005333a8;
        _swift_allocObject(&DAT_1005333a8,0x18,7);
        _swift_weakInit(puVar21 + 0x10,uVar23);
        uVar15 = lVar10 + 0xfU & 0xfffffffffffffff0;
        _swift_task_alloc(uVar15);
        (**(code **)(lVar19 + 0x10))();
        uVar17 = (ulong)*(byte *)(lVar19 + 0x50);
        uVar22 = uVar17 + 0x39 & (uVar17 ^ 0xffffffffffffffff);
        uVar18 = lVar10 + uVar22 + 7 & 0xfffffffffffffff8;
        puVar16 = &DAT_100533448;
        _swift_allocObject(&DAT_100533448,uVar18 + 0x10,uVar17 | 7);
        *(undefined8 *)(puVar16 + 0x10) = 0;
        *(undefined8 *)(puVar16 + 0x18) = 0;
        *(undefined **)(puVar16 + 0x20) = puVar21;
        *(undefined8 *)(puVar16 + 0x28) = uVar4;
        *(undefined8 *)(puVar16 + 0x30) = uVar2;
        puVar16[0x38] = uVar6;
        (**(code **)(lVar19 + 0x20))(puVar16 + uVar22,uVar15,uVar3);
        *(String *)(puVar16 + uVar18) = SVar24;
        _swift_task_dealloc(uVar15);
        FUN_100176d50(0,0,TVar13.unknown,&DAT_10042b6a8,puVar16);
        _swift_release();
        FUN_10002a29c(TVar13.unknown,&DAT_100561090,&DAT_10041c870);
        (**(code **)(lVar19 + 8))(uVar5,uVar3);
        _swift_task_dealloc(TVar13.unknown);
        goto LAB_10021f158;
      }
    }
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1a0);
  (**(code **)(*(long *)(unaff_x22 + 0x188) + 8))
            (*(undefined8 *)(unaff_x22 + 0x198),*(undefined8 *)(unaff_x22 + 0x180));
  _swift_bridgeObjectRelease(uVar2);
LAB_10021f158:
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x198));
                    /* WARNING: Could not recover jumptable at 0x00010021f180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

