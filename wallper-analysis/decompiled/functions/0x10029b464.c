// rea decompile_all
// name: FUN_10029b464
// address: 0x10029b464
// body: available
// range: 0x10029b464-0x10029b623 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10029b464(void)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  void *aBlock;
  void *pvVar6;
  String SVar7;
  String SVar8;
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined *puStack_68;
  code *local_60;
  undefined *local_58;
  
  if ((DAT_100559bd8 & 1) == 0) {
    uVar2 = *(ulong *)PTR__NSApp_1005212d0;
    _object_getClass();
    if (uVar2 != 0) {
      _swift_getObjCClassMetadata();
      _swift_getObjCClassFromMetadata();
      _NSStringFromClass();
      while( true ) {
        SVar7 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        SVar8.bridgeObject = (void *)0xef5f676e69796669;
        SVar8.str = (char *)0x746f4e4f564b534e;
        bVar1 = Swift::String::hasPrefix(SVar8,SVar7);
        _swift_bridgeObjectRelease(SVar7.bridgeObject);
        if ((!bVar1) || (uVar3 = uVar2, _class_getSuperclass(), uVar3 == 0)) break;
        _swift_getObjCClassMetadata();
        _swift_getObjCClassFromMetadata();
        _NSStringFromClass();
        uVar2 = uVar3;
      }
      uVar3 = uVar2;
      _class_getInstanceMethod(uVar2,"terminate:");
      if (uVar3 != 0) {
        uVar4 = uVar3;
        _method_getImplementation();
        puVar5 = &DAT_100537628;
        _swift_allocObject(&DAT_100537628,0x20,7);
        *(ulong *)(puVar5 + 0x10) = uVar4;
        *(char **)(puVar5 + 0x18) = "terminate:";
        local_60 = FUN_10029b634;
        local_80 = PTR___NSConcreteStackBlock_100521110;
        local_78 = 0x42000000;
        local_70 = FUN_10029b3d4;
        puStack_68 = &DAT_100537640;
        local_58 = puVar5;
        aBlock = __Block_copy(&local_80);
        _swift_release(local_58);
        pvVar6 = aBlock;
        _imp_implementationWithBlock(aBlock);
        uVar4 = uVar3;
        _method_getTypeEncoding(uVar3);
        _class_addMethod(uVar2,"terminate:",pvVar6,uVar4);
        if ((uVar2 & 1) == 0) {
          _method_setImplementation(uVar3,pvVar6);
        }
        DAT_100559bd8 = 1;
        __Block_release(aBlock);
      }
    }
  }
  return;
}

