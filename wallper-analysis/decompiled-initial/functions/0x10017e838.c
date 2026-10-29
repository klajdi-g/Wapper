// rea decompile_all
// name: FUN_10017e838
// address: 0x10017e838
// body: available
// range: 0x10017e838-0x10017eb67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10017e838(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  Published *pPVar2;
  Published *pPVar3;
  undefined *puVar4;
  ulong uVar5;
  TaskPriority TVar6;
  TaskPriority TVar7;
  long extraout_x8;
  undefined8 unaff_x20;
  undefined1 *puVar8;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  puVar1 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_90 + -extraout_x8;
  pPVar3 = (Published *)&DAT_10042a160;
  pPVar2 = pPVar3;
  _swift_getKeyPath(&DAT_10042a160);
  puVar1 = &DAT_10042a188;
  _swift_getKeyPath(&DAT_10042a188);
  Combine::Published::_get_subscript(&local_78);
  _swift_release(pPVar2);
  _swift_release(puVar1);
  _swift_bridgeObjectRetain(param_2);
  FUN_1001ac634(local_78,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  _swift_getKeyPath(&DAT_10042a160);
  _swift_getKeyPath(&DAT_10042a188);
  local_78._0_1_ = (char)local_78;
  _swift_retain();
  Combine::Published::_set_subscript(pPVar3,&local_78);
  FUN_10017d790();
  if ((param_3 & 1) != 0) {
    pPVar3 = (Published *)&DAT_10042a160;
    pPVar2 = pPVar3;
    _swift_getKeyPath(&DAT_10042a160);
    puVar1 = &DAT_10042a188;
    _swift_getKeyPath(&DAT_10042a188);
    _swift_bridgeObjectRetain(param_2);
    Combine::Published::_get_subscript(&local_80);
    _swift_release(pPVar2);
    _swift_release(puVar1);
    FUN_1001ca054(&local_78,param_1,param_2);
    _swift_getKeyPath(&DAT_10042a160);
    _swift_getKeyPath(&DAT_10042a188);
    local_88 = local_80;
    _swift_retain();
    Combine::Published::_set_subscript(pPVar3,&local_88);
    FUN_10017d790();
    _swift_bridgeObjectRelease(local_70);
    puVar1 = &DAT_100429b50;
    _swift_getKeyPath(&DAT_100429b50);
    puVar4 = &DAT_100429b78;
    _swift_getKeyPath(&DAT_100429b78);
    Combine::Published::_get_subscript(&local_78);
    _swift_release(puVar1);
    _swift_release(puVar4);
    if ((char)local_78 == '\x01') {
      uVar5 = 0x73754d656c707061;
      FUN_10017e6a4(0x73754d656c707061,0xea00000000006369);
      TVar6.unknown = (undefined *)0x796669746f7073;
      FUN_10017e6a4(0x796669746f7073,0xe700000000000000);
      if (((uVar5 & 1) != 0) || (((ulong)TVar6.unknown & 1) != 0)) {
        Swift::TaskPriority::get_userInitiated(TVar6);
        TVar7 = Swift::TaskPriority::typeMetadataAccessor();
        (**(code **)(*(long *)(TVar7.unknown + -8) + 0x38))(puVar8,0,1,TVar7.unknown);
        puVar1 = &DAT_1005313b8;
        _swift_allocObject(&DAT_1005313b8,0x30,7);
        *(undefined8 *)(puVar1 + 0x10) = 0;
        *(undefined8 *)(puVar1 + 0x18) = 0;
        puVar1[0x20] = (byte)uVar5 & 1;
        puVar1[0x21] = (byte)TVar6.unknown & 1;
        *(undefined8 *)(puVar1 + 0x28) = unaff_x20;
        _swift_retain();
        FUN_100176d50(0,0,puVar8,&DAT_10042a4f8,puVar1);
        _swift_release();
        FUN_10002a29c(puVar8,&DAT_100561090,&DAT_10041c870);
      }
    }
  }
  return;
}

