// rea decompile_all
// name: FUN_10033becc
// address: 0x10033becc
// body: available
// range: 0x10033becc-0x10033bfeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10033becc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [48];
  
  lVar4 = param_1[1];
  if (lVar4 == 0) {
    if (DAT_10054c0f8 != -1) {
      _swift_once(&DAT_10054c0f8,FUN_10003a8b0);
    }
    uVar2 = DAT_100577bd8;
    uVar1 = DAT_100577bd0;
    uVar5 = DAT_100577bc8;
    uVar7 = DAT_100577bc0;
    lVar4 = DAT_100577bb8;
    uVar6 = DAT_100577bb0;
    uStack_78 = DAT_100577bd8;
    local_80 = DAT_100577bd0;
    _swift_bridgeObjectRetain(DAT_100577bb8);
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRetain(uVar1);
    _swift_bridgeObjectRetain(uVar2);
  }
  else {
    uStack_78 = param_1[5];
    local_80 = param_1[4];
    uVar7 = param_1[2];
    uVar5 = param_1[3];
    uVar6 = *param_1;
  }
  lVar3 = 0;
  FUN_1000447d4();
  _swift_allocObject();
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  *(undefined8 *)(lVar3 + 0x50) = 0x3fe6666666666666;
  *(undefined8 *)(lVar3 + 0x10) = uVar6;
  *(long *)(lVar3 + 0x18) = lVar4;
  *(undefined8 *)(lVar3 + 0x20) = uVar7;
  *(undefined8 *)(lVar3 + 0x28) = uVar5;
  *(undefined8 *)(lVar3 + 0x38) = uStack_78;
  *(undefined8 *)(lVar3 + 0x30) = local_80;
  *(undefined8 *)(lVar3 + 0x58) = local_80;
  FUN_1000087e4(param_1,auStack_70,&DAT_100555b80,&DAT_1004299b0);
  _swift_bridgeObjectRetain(local_80);
  return lVar3;
}

