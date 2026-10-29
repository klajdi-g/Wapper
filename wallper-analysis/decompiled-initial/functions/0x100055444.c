// rea decompile_all
// name: FUN_100055444
// address: 0x100055444
// body: available
// range: 0x100055444-0x1000556db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100055444(long param_1)

{
  int iVar1;
  undefined1 uVar2;
  long lVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  State SVar8;
  Animation AVar9;
  long extraout_x8;
  void *unaff_x20;
  undefined8 uVar10;
  long lVar11;
  undefined auStack_1f0 [8];
  long local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined1 local_80;
  undefined1 local_70;
  
  puVar5 = &DAT_10054d928;
  local_1e8 = param_1;
  FUN_100002f94(&DAT_10054d928,&DAT_10041e5e0);
  lVar11 = *(long *)(puVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  AVar9.unknown = auStack_1f0 + -extraout_x8;
  uVar10 = *(undefined8 *)((long)unaff_x20 + 0xb8);
  puVar6 = &DAT_10041e260;
  _swift_getKeyPath(&DAT_10041e260);
  puVar7 = &DAT_10041e288;
  _swift_getKeyPath(&DAT_10041e288);
  Combine::Published::_get_subscript(&local_1e0,uVar10,puVar6,puVar7);
  _swift_release(puVar6);
  _swift_release(puVar7);
  cVar4 = (char)local_1e0;
  if ((char)local_1e0 == '\x01') {
    puVar6 = &DAT_10041e620;
    _swift_getKeyPath(&DAT_10041e620);
    puVar7 = &DAT_10041e648;
    _swift_getKeyPath(&DAT_10041e648);
    Combine::Published::_get_subscript(&local_1e0,uVar10,puVar6,puVar7);
    _swift_release(puVar6);
    _swift_release(puVar7);
    uVar2 = (char)local_1e0;
  }
  else {
    uStack_1d8 = *(undefined8 *)((long)unaff_x20 + 0xf8);
    local_1e0 = *(undefined8 *)((long)unaff_x20 + 0xf0);
    SVar8.unknown = &DAT_10054ab50;
    FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
    SwiftUI::State::get_wrappedValue(SVar8);
    uVar2 = local_80;
  }
  puVar6 = &DAT_100526eb8;
  _swift_allocObject(&DAT_100526eb8,0x170,7);
  puVar6[0x10] = cVar4;
  _memcpy(puVar6 + 0x18,unaff_x20,0x158);
  local_70 = uVar2;
  FUN_100058a6c();
  FUN_100002f94(&DAT_10054d930,&DAT_10041e5e8);
  FUN_1000372f4(&DAT_10054d938,&DAT_10054d930,&DAT_10041e5e8,FUN_100059d0c);
  SwiftUI::Button::_init();
  FUN_1000087a0(&DAT_10054d9a0,&DAT_10054d928,&DAT_10041e5e0,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
  FUN_100037164();
  lVar3 = local_1e8;
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle(local_1e8);
  (**(code **)(lVar11 + 8))(AVar9.unknown,puVar5);
  AVar9 = SwiftUI::Animation::easeInOut(0.18,AVar9);
  puVar5 = &DAT_10054d820;
  FUN_100002f94(&DAT_10054d820,&DAT_10041e498);
  iVar1 = *(int *)(puVar5 + 0x24);
  *(undefined8 *)(lVar3 + iVar1) = AVar9.unknown;
  *(undefined1 *)((undefined8 *)(lVar3 + iVar1) + 1) = uVar2;
  return;
}

