// rea decompile_all
// name: FUN_1003f0b3c
// address: 0x1003f0b3c
// body: available
// range: 0x1003f0b3c-0x1003f0d8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003f0b3c(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  ID IVar3;
  URL UVar4;
  long lVar5;
  NSKeyValueObservingOptions NVar6;
  NSKeyValueObservation *pNVar7;
  long unaff_x20;
  undefined8 uVar8;
  
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(unaff_x20 + _TtCV7Wallper13VideoLoopView11Coordinator::hostView,0);
  lVar5 = _TtCV7Wallper13VideoLoopView11Coordinator::player;
  puVar2 = &_OBJC_CLASS___AVQueuePlayer;
  _objc_allocWithZone();
  IVar3 = objc_stub::init((ID)puVar2);
  *(ID *)(unaff_x20 + lVar5) = IVar3;
  *(undefined8 *)(unaff_x20 + _TtCV7Wallper13VideoLoopView11Coordinator::looper) = 0;
  lVar5 = _TtCV7Wallper13VideoLoopView11Coordinator::currentURL;
  UVar4 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar4.unknown + -8) + 0x38))(unaff_x20 + lVar5,1,1,UVar4.unknown);
  *(undefined8 *)(unaff_x20 + _TtCV7Wallper13VideoLoopView11Coordinator::silencer) = 0;
  *(undefined8 *)(unaff_x20 + _TtCV7Wallper13VideoLoopView11Coordinator::timeControlObs) = 0;
  *(undefined8 *)(unaff_x20 + _TtCV7Wallper13VideoLoopView11Coordinator::statusObs) = 0;
  *(undefined8 *)(unaff_x20 + _TtCV7Wallper13VideoLoopView11Coordinator::keepUpObs) = 0;
  *(undefined8 *)(unaff_x20 + _TtCV7Wallper13VideoLoopView11Coordinator::readyForDisplayObs) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtCV7Wallper13VideoLoopView11Coordinator::onFirstFrame);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(unaff_x20 + _TtCV7Wallper13VideoLoopView11Coordinator::showsSpinner) = 1;
  *(undefined1 *)(unaff_x20 + _TtCV7Wallper13VideoLoopView11Coordinator::autoplay) = 1;
  IVar3 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffa0,"init");
  lVar5 = _TtCV7Wallper13VideoLoopView11Coordinator::player;
  objc_stub::setAutomaticallyWaitsToMinimizeStalling_
            (*(ID *)(IVar3 + _TtCV7Wallper13VideoLoopView11Coordinator::player),0);
  uVar8 = *(undefined8 *)(IVar3 + lVar5);
  lVar5 = 0;
  FUN_1002906f8();
  _swift_allocObject();
  _swift_unknownObjectWeakInit(lVar5 + 0x18,0);
  puVar2 = PTR___swiftEmptyArrayStorage_100524190;
  *(undefined8 *)(lVar5 + 0x20) = 0;
  *(undefined **)(lVar5 + 0x28) = puVar2;
  _swift_unknownObjectWeakAssign(lVar5 + 0x18,uVar8);
  *(undefined1 *)(lVar5 + 0x10) = 1;
  NVar6.unknown = &DAT_100436a48;
  _swift_getKeyPath();
  puVar2 = &DAT_10053e330;
  _swift_allocObject(&DAT_10053e330,0x18,7);
  _swift_weakInit(puVar2 + 0x10,lVar5);
  _swift_retain(lVar5);
  pNVar7 = (extension_Foundation)::Foundation::_KeyValueCodingAndObserving::_observe(NVar6);
  _swift_release(NVar6.unknown);
  _swift_release(puVar2);
  *(NSKeyValueObservation **)(lVar5 + 0x20) = pNVar7;
  _swift_release(lVar5);
  uVar8 = *(undefined8 *)(IVar3 + _TtCV7Wallper13VideoLoopView11Coordinator::silencer);
  *(long *)(IVar3 + _TtCV7Wallper13VideoLoopView11Coordinator::silencer) = lVar5;
  _swift_release(uVar8);
  return IVar3;
}

