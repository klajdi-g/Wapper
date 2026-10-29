// rea decompile_all
// name: FUN_10004462c
// address: 0x10004462c
// body: available
// range: 0x10004462c-0x10004476f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10004462c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ObservableObjectPublisher *this;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [24];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _swift_beginAccess(unaff_x20 + 0x58,auStack_98,0,0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x20 + 0x40) = *(undefined8 *)(unaff_x20 + 0x58);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  _CFAbsoluteTimeGetCurrent();
  *(undefined8 *)(unaff_x20 + 0x48) = param_1;
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_68 = param_2[3];
  local_70 = param_2[2];
  uStack_78 = param_2[4];
  local_80 = param_2[5];
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x18) = uStack_58;
  *(undefined8 *)(unaff_x20 + 0x10) = uStack_60;
  *(undefined8 *)(unaff_x20 + 0x28) = uStack_68;
  *(undefined8 *)(unaff_x20 + 0x20) = local_70;
  uVar5 = param_2[4];
  *(undefined8 *)(unaff_x20 + 0x38) = param_2[5];
  *(undefined8 *)(unaff_x20 + 0x30) = uVar5;
  FUN_100043d74(&uStack_60,auStack_a8);
  FUN_100043d74(&local_70,auStack_a8);
  FUN_1000087e4(&uStack_78,auStack_a8,&DAT_10054c050,&DAT_10041dca0);
  FUN_1000087e4(&local_80,auStack_a8,&DAT_10054c058,&DAT_10041d7d0);
  _swift_bridgeObjectRelease(uVar4);
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(uVar2);
  _swift_bridgeObjectRelease(uVar3);
  FUN_100047f94(&DAT_10054d408);
  this = (extension_Combine)::Combine::ObservableObject::_get_objectWillChange();
  Combine::ObservableObjectPublisher::send(this);
  _swift_release(this);
  return;
}

