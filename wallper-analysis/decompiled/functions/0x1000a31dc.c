// rea decompile_all
// name: FUN_1000a31dc
// address: 0x1000a31dc
// body: available
// range: 0x1000a31dc-0x1000a352b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000a31dc(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  code *pcVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong local_70;
  ulong local_68;
  
  uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar5 = &DAT_1004211c0;
  _swift_getKeyPath(&DAT_1004211c0);
  puVar6 = &DAT_1004211e8;
  _swift_getKeyPath(&DAT_1004211e8);
  Combine::Published::_get_subscript(&local_70,uVar10,puVar5,puVar6);
  _swift_release(puVar5);
  _swift_release(puVar6);
  uVar4 = local_68;
  uVar3 = local_70;
  if (local_68 != 0) {
    uVar1 = local_70 & 0xffffffffffff;
    if ((local_68 & 0x2000000000000000) != 0) {
      uVar1 = local_68 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      puVar5 = &DAT_100421208;
      _swift_getKeyPath(&DAT_100421208);
      puVar6 = &DAT_100421230;
      _swift_getKeyPath(&DAT_100421230);
      Combine::Published::_get_subscript(&local_70,uVar10,puVar5,puVar6);
      _swift_release(puVar5);
      _swift_release(puVar6);
      uVar1 = 0;
      if (local_68 != 0) {
        uVar1 = local_70;
      }
      uVar2 = 0xe000000000000000;
      if (local_68 != 0) {
        uVar2 = local_68;
      }
      puVar5 = &DAT_100421250;
      _swift_getKeyPath(&DAT_100421250);
      puVar6 = &DAT_100421278;
      _swift_getKeyPath(&DAT_100421278);
      Combine::Published::_get_subscript(&local_70,uVar10,puVar5,puVar6);
      _swift_release(puVar5);
      _swift_release(puVar6);
      puVar5 = &DAT_100421298;
      _swift_getKeyPath(&DAT_100421298);
      puVar6 = &DAT_1004212c0;
      _swift_getKeyPath(&DAT_1004212c0);
      Combine::Published::_get_subscript(param_1 + 5,uVar10,puVar5,puVar6);
      _swift_release(puVar5);
      _swift_release(puVar6);
      uVar9 = *(undefined8 *)(unaff_x20 + 0x28);
      puVar5 = &DAT_1004212e0;
      _swift_getKeyPath(&DAT_1004212e0);
      puVar6 = &DAT_100421308;
      _swift_getKeyPath(&DAT_100421308);
      Combine::Published::_get_subscript(param_1 + 6,uVar9,puVar5,puVar6);
      _swift_release(puVar5);
      _swift_release(puVar6);
      puVar5 = &DAT_100421328;
      _swift_getKeyPath(&DAT_100421328);
      puVar6 = &DAT_100421350;
      _swift_getKeyPath(&DAT_100421350);
      Combine::Published::_get_subscript(param_1 + 7,uVar9,puVar5,puVar6);
      _swift_release(puVar5);
      _swift_release(puVar6);
      puVar5 = &DAT_100421370;
      _swift_getKeyPath(&DAT_100421370);
      puVar6 = &DAT_100421398;
      _swift_getKeyPath(&DAT_100421398);
      Combine::Published::_get_subscript(param_1 + 8,uVar9,puVar5,puVar6);
      _swift_release(puVar5);
      _swift_release(puVar6);
      puVar5 = &DAT_1004213b8;
      _swift_getKeyPath(&DAT_1004213b8);
      puVar6 = &DAT_1004213e0;
      _swift_getKeyPath(&DAT_1004213e0);
      lVar7 = 0;
      FUN_10009e280();
      Combine::Published::_get_subscript
                ((long)param_1 + (long)*(int *)(lVar7 + 0x2c),uVar10,puVar5,puVar6);
      _swift_release(puVar5);
      _swift_release(puVar6);
      puVar5 = &DAT_100421400;
      _swift_getKeyPath(&DAT_100421400);
      puVar6 = &DAT_100421428;
      _swift_getKeyPath(&DAT_100421428);
      Combine::Published::_get_subscript
                ((long)param_1 + (long)*(int *)(lVar7 + 0x30),uVar10,puVar5,puVar6);
      _swift_release(puVar5);
      _swift_release(puVar6);
      *param_1 = uVar3;
      param_1[1] = uVar4;
      param_1[2] = uVar1;
      param_1[3] = uVar2;
      param_1[4] = local_70;
      pcVar8 = *(code **)(*(long *)(lVar7 + -8) + 0x38);
      uVar10 = 0;
      goto LAB_1000a3508;
    }
    _swift_bridgeObjectRelease(local_68);
  }
  lVar7 = 0;
  FUN_10009e280();
  pcVar8 = *(code **)(*(long *)(lVar7 + -8) + 0x38);
  uVar10 = 1;
LAB_1000a3508:
  (*pcVar8)(param_1,uVar10,1,lVar7);
  return;
}

