// rea decompile_all
// name: FUN_10025ae40
// address: 0x10025ae40
// body: available
// range: 0x10025ae40-0x10025b153 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010025b04c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10025ae40(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  Published PVar5;
  SchedulerOptions SVar6;
  undefined *puVar7;
  undefined *puVar8;
  AnyCancellable *this;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar9;
  long lVar10;
  long local_a0;
  long local_98;
  ID local_90 [3];
  undefined1 auStack_78 [24];
  
  puVar2 = &DAT_1005610e0;
  FUN_100002f94(&DAT_1005610e0,&DAT_10042b5d0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)&local_a0 - extraout_x8;
  puVar2 = &DAT_100557e70;
  FUN_100002f94(&DAT_100557e70,&DAT_100436e50);
  local_a0 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100557e78;
  FUN_100002f94(&DAT_100557e78,&DAT_10042c160);
  local_98 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_98 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = _TtC7Wallper13WindowManager::licenseCancellables;
  lVar9 = (lVar10 - extraout_x8_00) - extraout_x8_01;
  _swift_beginAccess(unaff_x20 + _TtC7Wallper13WindowManager::licenseCancellables,auStack_78,1,0);
  uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined **)(unaff_x20 + lVar1) = PTR___swiftEmptySetSingleton_1005241a0;
  _swift_bridgeObjectRelease(uVar4);
  _swift_beginAccess(param_1 + _TtC7Wallper14LicenseManager::_isBanned,local_90,0x21,0);
  PVar5.unknown = &DAT_100557e80;
  FUN_100002f94(&DAT_100557e80,&DAT_10041cf60);
  Combine::Published::_get_projectedValue(PVar5);
  _swift_endAccess(local_90);
  local_90[0] = NSRunLoop::mainRunLoop((ID)&_OBJC_CLASS___NSRunLoop);
  SVar6 = SchedulerOptions::_typeMetadataAccessor();
  (**(code **)(*(long *)(SVar6.unknown + -8) + 0x38))(lVar10,1,1,SVar6.unknown);
  uVar4 = 0;
  FUN_100044230(0,&DAT_100557578,&PTR__OBJC_CLASS___NSRunLoop_10053f9d8);
  puVar7 = &DAT_100557e90;
  FUN_1000087a0(&DAT_100557e90,&DAT_100557e70,&DAT_100436e50,
                PTR__Combine__Publisher_>Combine__Publisher_1005214c8);
  puVar8 = puVar7;
  FUN_10022a350();
  (extension_Combine)::Combine::Publisher::_receive(lVar9,puVar8,lVar10,puVar2,uVar4,puVar7,puVar8);
  FUN_10002a29c(lVar10,&DAT_1005610e0,&DAT_10042b5d0);
  (**(code **)(local_a0 + 8))(lVar10 - extraout_x8_00,puVar2);
  puVar2 = &DAT_100535910;
  _swift_allocObject(&DAT_100535910,0x18,7);
  _swift_unknownObjectWeakInit(puVar2 + 0x10);
  FUN_1000087a0(&DAT_100557ea0,&DAT_100557e78,&DAT_10042c160,
                PTR_Combine__Combine__Publishers__ReceiveOn<undefined,undefined>_>Combine__Publisher_1005213f8
               );
  this = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(puVar2);
  (**(code **)(local_98 + 8))(lVar9,puVar3);
  _swift_beginAccess(unaff_x20 + lVar1,local_90,0x21,0);
  Combine::AnyCancellable::store(this,(undefined *)(unaff_x20 + lVar1));
  _swift_endAccess(local_90);
  _swift_release(this);
  return;
}

