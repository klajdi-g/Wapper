// rea decompile_all
// name: FUN_1002713ec
// address: 0x1002713ec
// body: available
// range: 0x1002713ec-0x1002715ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_1002713ec(undefined8 param_1,undefined8 param_2,char param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  void *aBlock;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined *puStack_68;
  code *local_60;
  undefined *local_58;
  
  if (param_3 == '\x01') {
    uVar3 = param_1;
    _CFRunLoopGetMain();
    lVar5 = *(long *)PTR__kCFRunLoopCommonModes_1005215c8;
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1002715fc);
      (*pcVar1)();
    }
    puVar4 = &DAT_100536390;
    _swift_allocObject(&DAT_100536390,0x20,7);
    *(undefined8 *)(puVar4 + 0x10) = param_1;
    *(undefined8 *)(puVar4 + 0x18) = param_4;
    local_60 = FUN_100280fb0;
    local_80 = PTR___NSConcreteStackBlock_100521110;
    local_78 = 0x42000000;
    local_70 = FUN_1000c7e7c;
    puStack_68 = &DAT_1005363a8;
    local_58 = puVar4;
    aBlock = __Block_copy(&local_80);
    puVar4 = local_58;
    _swift_retain(param_4);
    FUN_100280fb8(param_1,param_2,1);
    _swift_release(puVar4);
  }
  else {
    FUN_100271600(param_1,param_2);
    FUN_100280fec(param_1,param_5,param_6);
    FUN_100280fec(param_2,param_7,param_6);
    uVar2 = param_2;
    FUN_100282948();
    uVar3 = uVar2;
    _CFRunLoopGetMain();
    lVar5 = *(long *)PTR__kCFRunLoopCommonModes_1005215c8;
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100271600);
      (*pcVar1)();
    }
    puVar4 = &DAT_1005363e0;
    _swift_allocObject(&DAT_1005363e0,0x38,7);
    *(undefined8 *)(puVar4 + 0x10) = param_4;
    *(undefined8 *)(puVar4 + 0x18) = param_1;
    *(undefined8 *)(puVar4 + 0x20) = param_2;
    *(undefined8 *)(puVar4 + 0x28) = uVar2;
    *(undefined8 *)(puVar4 + 0x30) = param_8;
    local_60 = FUN_100282ea0;
    local_80 = PTR___NSConcreteStackBlock_100521110;
    local_78 = 0x42000000;
    local_70 = FUN_1000c7e7c;
    puStack_68 = &DAT_1005363f8;
    local_58 = puVar4;
    aBlock = __Block_copy(&local_80);
    puVar4 = local_58;
    _swift_retain(param_4);
    _swift_release(puVar4);
  }
  _CFRunLoopPerformBlock(uVar3,lVar5,aBlock);
  __Block_release(aBlock);
  _CFRunLoopWakeUp(uVar3);
  return 0;
}

