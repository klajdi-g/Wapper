// rea decompile_all
// name: FUN_10032121c
// address: 0x10032121c
// body: available
// range: 0x10032121c-0x1003212d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10032121c(ID *param_1)

{
  undefined8 *puVar1;
  class_t *pcVar2;
  class_t *pcVar3;
  undefined8 uVar4;
  ID IVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  objc_super local_40;
  
  pcVar2 = (class_t *)0x0;
  FUN_100321178();
  pcVar3 = pcVar2;
  _objc_allocWithZone();
  _swift_unknownObjectWeakInit
            ((long)&pcVar3->isa +
             _TtCV7WallperP33_10B5BC8A445113D7DE69555D7FD5BD6820ScrollOffsetObserver11Coordinator::
             scrollView,0);
  _swift_unknownObjectWeakInit
            ((long)&pcVar3->isa +
             _TtCV7WallperP33_10B5BC8A445113D7DE69555D7FD5BD6820ScrollOffsetObserver11Coordinator::
             contentView,0);
  *(undefined8 *)
   ((long)&pcVar3->isa +
   _TtCV7WallperP33_10B5BC8A445113D7DE69555D7FD5BD6820ScrollOffsetObserver11Coordinator::observer) =
       0;
  *(undefined8 *)
   ((long)&pcVar3->isa +
   _TtCV7WallperP33_10B5BC8A445113D7DE69555D7FD5BD6820ScrollOffsetObserver11Coordinator::
   lastReportedOffset) = 0xbff0000000000000;
  uVar4 = unaff_x20[1];
  uVar6 = *unaff_x20;
  puVar1 = (undefined8 *)
           ((long)&pcVar3->isa +
           _TtCV7WallperP33_10B5BC8A445113D7DE69555D7FD5BD6820ScrollOffsetObserver11Coordinator::
           onChange);
  puVar1[1] = unaff_x20[1];
  *puVar1 = uVar6;
  local_40.receiver = (ID)pcVar3;
  local_40.super_class = pcVar2;
  _swift_retain(uVar4);
  IVar5 = _objc_msgSendSuper2(&local_40,"init");
  *param_1 = IVar5;
  return;
}

