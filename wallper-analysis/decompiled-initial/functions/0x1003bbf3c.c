// rea decompile_all
// name: FUN_1003bbf3c
// address: 0x1003bbf3c
// body: available
// range: 0x1003bbf3c-0x1003bc04b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ID FUN_1003bbf3c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *self;
  ID IVar3;
  NSViewRepresentableContext NVar4;
  undefined8 uVar5;
  undefined1 *unaff_x20;
  undefined8 uVar6;
  long local_48;
  
  self = &_OBJC_CLASS___NSView;
  _objc_allocWithZone();
  IVar3 = objc_stub::init((ID)self);
  NVar4.unknown = &DAT_100560c40;
  FUN_100002f94(&DAT_100560c40,&DAT_1004368e0);
  SwiftUI::NSViewRepresentableContext::_get_coordinator(NVar4);
  uVar1 = *(undefined8 *)(local_48 + 0x10);
  uVar2 = *(undefined8 *)(local_48 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(local_48 + 0x18) = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(local_48 + 0x10) = uVar6;
  _swift_retain(uVar5);
  FUN_10002f6dc(uVar1,uVar2);
  uVar1 = *(undefined8 *)(local_48 + 0x20);
  uVar2 = *(undefined8 *)(local_48 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(local_48 + 0x28) = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(local_48 + 0x20) = uVar6;
  _swift_retain(uVar5);
  FUN_10002f6dc(uVar1,uVar2);
  uVar1 = *(undefined8 *)(local_48 + 0x30);
  uVar2 = *(undefined8 *)(local_48 + 0x38);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(local_48 + 0x38) = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(local_48 + 0x30) = uVar6;
  _swift_retain(uVar5);
  FUN_10002f6dc(uVar1,uVar2);
  uVar1 = *(undefined8 *)(local_48 + 0x40);
  uVar2 = *(undefined8 *)(local_48 + 0x48);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(local_48 + 0x48) = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(local_48 + 0x40) = uVar6;
  _swift_retain(uVar5);
  FUN_10002f6dc(uVar1,uVar2);
  *(undefined1 *)(local_48 + 0x50) = *unaff_x20;
  _swift_unknownObjectWeakAssign(local_48 + 0x58,IVar3);
  FUN_1003bc04c();
  _swift_release(local_48);
  return IVar3;
}

