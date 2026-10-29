// rea decompile_all
// name: FUN_10025c490
// address: 0x10025c490
// body: available
// range: 0x10025c490-0x10025c853 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_10025c490(Notification param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  NSObject **ppNVar6;
  ID IVar7;
  undefined8 *puVar8;
  Task TVar9;
  undefined *puVar10;
  long unaff_x20;
  undefined1 auStack_a8 [24];
  NSObject *local_90 [3];
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long local_58;
  
  Foundation::Notification::_get_object(param_1);
  if (local_58 == 0) {
    FUN_10002a29c(&local_70,&DAT_10054d428,&DAT_100420300);
  }
  else {
    uVar5 = 0;
    FUN_100044230(0,&DAT_100557d50,&PTR__OBJC_CLASS___NSWindow_10053fb00);
    ppNVar6 = local_90;
    _swift_dynamicCast(ppNVar6,&local_70,PTR___type_metadata_for_Any_100524178 + 8,uVar5,6);
    lVar1 = _TtC7Wallper13WindowManager::mainWindow;
    if (((ulong)ppNVar6 & 1) != 0) {
      if (*(NSObject **)(unaff_x20 + _TtC7Wallper13WindowManager::mainWindow) != (NSObject *)0x0) {
        bVar4 = (extension_ObjectiveC)::__C::NSObject::___infix
                          (local_90[0],
                           *(NSObject **)(unaff_x20 + _TtC7Wallper13WindowManager::mainWindow));
        if (bVar4) {
          IVar7 = objc_stub::attachedSheet((ID)local_90[0]);
          if (IVar7 != 0) {
            objc_stub::endSheet_((ID)local_90[0],IVar7);
          }
          FUN_10012f230(0);
          _swift_initStaticObject();
          FUN_100128098();
          FUN_100129f84(0);
          _swift_initStaticObject();
          FUN_100128098();
          FUN_1001292fc(0);
          _swift_initStaticObject();
          FUN_100128098();
          FUN_10012ea08(0);
          _swift_initStaticObject();
          FUN_100128098();
          FUN_1001280f4(0);
          _swift_initStaticObject();
          FUN_100128098();
          FUN_10012db48(0);
          _swift_initStaticObject();
          FUN_100128098();
          objc_stub::orderOut_((ID)local_90[0],0);
          objc_stub::setContentView_((ID)local_90[0],0);
          objc_stub::setDelegate_((ID)local_90[0],0);
          *(undefined8 *)(unaff_x20 + lVar1) = 0;
          lVar2 = _TtC7Wallper13WindowManager::clickMonitor;
          _swift_beginAccess(unaff_x20 + _TtC7Wallper13WindowManager::clickMonitor,auStack_a8,0,0);
          FUN_10013fc5c(unaff_x20 + lVar2,local_90);
          if (local_78 == 0) {
            FUN_10002a29c(local_90,&DAT_10054d428,&DAT_100420300);
          }
          else {
            FUN_100007d88(local_90,&local_70);
            puVar8 = &local_70;
            FUN_100007bd0(puVar8,local_58);
            Swift::__bridgeAnythingToObjectiveC();
            NSEvent::removeMonitor_((ID)&_OBJC_CLASS___NSEvent,puVar8);
            _swift_unknownObjectRelease(puVar8);
            FUN_100043f24(&local_70);
          }
          uStack_68 = 0;
          local_70 = 0;
          local_58 = 0;
          uStack_60 = 0;
          _swift_beginAccess(unaff_x20 + lVar2,local_90,0x21,0);
          FUN_1000d4f50(&local_70,unaff_x20 + lVar2);
          _swift_endAccess(local_90);
          puVar10 = DAT_10055a068;
          if (DAT_10055a068 == (undefined *)0x0) {
            puVar10 = (undefined *)0x0;
          }
          else {
            TVar9.unknown = DAT_10055a068;
            _swift_retain();
            Swift::Task::cancel(TVar9);
            _swift_release(puVar10);
            puVar10 = DAT_10055a068;
          }
          DAT_10055a068 = (undefined *)0x0;
          _swift_release(puVar10);
          if (DAT_1005528e0 != -1) {
            _swift_once(&DAT_1005528e0,FUN_1000fe734);
          }
          objc_stub::removeAllObjects(*(ID *)(DAT_100577c20 + 0x10));
          IVar7 = NSURLCache::sharedURLCache((ID)&_OBJC_CLASS___NSURLCache);
          NSURLCache::removeAllCachedResponses(IVar7);
        }
        if (*(long *)(unaff_x20 + lVar1) != 0) {
          return;
        }
      }
      if (*(ID *)PTR__NSApp_1005212d0 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10025c854);
        (*pcVar3)();
      }
      objc_stub::setActivationPolicy_(*(ID *)PTR__NSApp_1005212d0,1);
    }
  }
  return;
}

