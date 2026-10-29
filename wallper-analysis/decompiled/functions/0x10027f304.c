// rea decompile_all
// name: FUN_10027f304
// address: 0x10027f304
// body: available
// range: 0x10027f304-0x10027f577 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


String FUN_10027f304(char *param_1,void *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  void *pvVar4;
  String SVar5;
  String separator;
  long local_90;
  long lStack_88;
  undefined8 *local_80;
  ulong uStack_78;
  undefined8 local_60;
  undefined8 uStack_58;
  
  SVar5.bridgeObject = param_2;
  SVar5.str = param_1;
  local_60 = 0x3f;
  uStack_58 = 0xe100000000000000;
  local_80 = &local_60;
  _swift_bridgeObjectRetain(param_2);
  lVar3 = 0x7fffffffffffffff;
  FUN_1001b49f4(0x7fffffffffffffff,1,FUN_100138104,&local_90,param_1,param_2);
  if (*(long *)(lVar3 + 0x10) == 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRetain(param_2);
  }
  else {
    SVar5 = *(String *)(lVar3 + 0x20);
    uVar2 = *(undefined8 *)(lVar3 + 0x38);
    _swift_bridgeObjectRetain_n(uVar2,2);
    _swift_bridgeObjectRelease(lVar3);
    SVar5 = Swift::String::__fromSubstring(SVar5);
    _swift_bridgeObjectRelease_n(uVar2,2);
  }
  pvVar4 = SVar5.bridgeObject;
  local_60 = 0x23;
  uStack_58 = 0xe100000000000000;
  local_80 = &local_60;
  _swift_bridgeObjectRetain(pvVar4);
  lVar3 = 0x7fffffffffffffff;
  FUN_1001b49f4(0x7fffffffffffffff,1,FUN_100138d2c,&local_90,SVar5.str,pvVar4);
  if (*(long *)(lVar3 + 0x10) == 0) {
    _swift_bridgeObjectRelease();
  }
  else {
    SVar5 = *(String *)(lVar3 + 0x20);
    uVar2 = *(undefined8 *)(lVar3 + 0x38);
    _swift_bridgeObjectRetain_n(uVar2,2);
    _swift_bridgeObjectRelease(lVar3);
    SVar5 = Swift::String::__fromSubstring(SVar5);
    _swift_bridgeObjectRelease(pvVar4);
    _swift_bridgeObjectRelease_n(uVar2,2);
  }
  pvVar4 = SVar5.bridgeObject;
  local_60 = 0x2e;
  uStack_58 = 0xe100000000000000;
  local_80 = &local_60;
  _swift_bridgeObjectRetain(pvVar4);
  lVar3 = 0x7fffffffffffffff;
  FUN_1001b49f4(0x7fffffffffffffff,1,FUN_100138d2c,&local_90,SVar5.str,pvVar4);
  if (*(ulong *)(lVar3 + 0x10) < 2) {
    _swift_bridgeObjectRelease();
  }
  else {
    _swift_bridgeObjectRelease(pvVar4);
    lVar1 = 0;
    if (*(long *)(lVar3 + 0x10) != 0) {
      lVar1 = *(long *)(lVar3 + 0x10) + -1;
    }
    lStack_88 = lVar3 + 0x20;
    uStack_78 = lVar1 << 1 | 1;
    local_80 = (undefined8 *)0x0;
    local_90 = lVar3;
    FUN_100002f94(&DAT_100558c10,&DAT_10042d280);
    FUN_1000087a0(&DAT_100558c18,&DAT_100558c10,&DAT_10042d280,
                  PTR_Swift__Swift__ArraySlice<undefined>_>Swift__Sequence_100523cc0);
    FUN_10027f6d4();
    separator.bridgeObject = (void *)0xe100000000000000;
    separator.str = (char *)0x2e;
    SVar5 = (extension_Swift)::Swift::Sequence::_joined(separator);
    _swift_unknownObjectRelease(lVar3);
  }
  return SVar5;
}

