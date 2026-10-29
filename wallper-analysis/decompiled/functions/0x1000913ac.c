// rea decompile_all
// name: FUN_1000913ac
// address: 0x1000913ac
// body: available
// range: 0x1000913ac-0x100091637 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000913ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long local_90 [3];
  undefined1 auStack_78 [24];
  
  if (DAT_10054ed30 != -1) {
    _swift_once(&DAT_10054ed30,FUN_1000787bc);
  }
  _swift_beginAccess(&DAT_10054ed38,auStack_78,0x21,0);
  _swift_bridgeObjectRetain(param_3);
  lVar2 = DAT_10054ed38;
  _swift_isUniquelyReferenced_nonNull_native(DAT_10054ed38);
  local_90[0] = DAT_10054ed38;
  DAT_10054ed38 = 0x8000000000000000;
  FUN_100340cbc(param_1,param_2,param_3,lVar2);
  _swift_bridgeObjectRelease(param_3);
  DAT_10054ed38 = local_90[0];
  _swift_endAccess(auStack_78);
  FUN_1000911d0(param_2,param_3);
  while( true ) {
    if (DAT_10054ed40 != -1) {
      _swift_once(&DAT_10054ed40,FUN_1000787d0);
    }
    _swift_beginAccess(&DAT_10054ed48,auStack_78,0,0);
    lVar2 = DAT_10054ed48;
    uVar4 = *(ulong *)(DAT_10054ed48 + 0x10);
    if (uVar4 < 0xd) break;
    _swift_beginAccess(&DAT_10054ed48,local_90,0x21,0);
    lVar3 = *(long *)(lVar2 + 0x20);
    uVar1 = *(ulong *)(lVar2 + 0x28);
    _swift_bridgeObjectRetain(uVar1);
    lVar5 = lVar2;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((int)lVar5 == 0) || (*(ulong *)(lVar2 + 0x18) >> 1 < uVar4 - 1)) {
      DAT_10054ed48 = lVar2;
      FUN_1001c432c();
      lVar2 = lVar5;
    }
    DAT_10054ed48 = lVar2;
    FUN_100043c00(lVar2 + 0x20);
    lVar5 = *(long *)(lVar2 + 0x10);
    _memmove((void *)(lVar2 + 0x20),(void *)(lVar2 + 0x30),lVar5 * 0x10 - 0x10);
    *(long *)(lVar2 + 0x10) = lVar5 + -1;
    DAT_10054ed48 = lVar2;
    _swift_endAccess(local_90);
    _swift_beginAccess(&DAT_10054ed38,local_90,0x21,0);
    lVar2 = DAT_10054ed38;
    _swift_bridgeObjectRetain(DAT_10054ed38);
    uVar4 = uVar1;
    FUN_10000464c();
    _swift_bridgeObjectRelease(lVar2);
    if ((uVar4 & 1) != 0) {
      lVar5 = DAT_10054ed38;
      _swift_isUniquelyReferenced_nonNull_native();
      lVar2 = DAT_10054ed38;
      DAT_10054ed38 = 0x8000000000000000;
      if ((int)lVar5 == 0) {
        FUN_1001cc810();
      }
      _swift_bridgeObjectRelease(*(undefined8 *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x10 + 8));
      thunk_FUN_1001d1dc4(lVar3,lVar2);
      DAT_10054ed38 = lVar2;
    }
    _swift_endAccess(local_90);
    _swift_bridgeObjectRelease(uVar1);
  }
  return;
}

