// rea decompile_all
// name: FUN_1001a39cc
// address: 0x1001a39cc
// body: available
// range: 0x1001a39cc-0x1001a3a97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001a39cc(long param_1,undefined8 param_2,char *param_3,void *param_4)

{
  undefined8 *puVar1;
  char *pcVar2;
  void *pvVar3;
  undefined8 uVar4;
  String SVar5;
  String SVar6;
  undefined1 auStack_58 [24];
  
  pcVar2 = (char *)0x0;
  pvVar3 = (void *)0x0;
  _swift_beginAccess(param_1 + 0x10,auStack_58);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    puVar1 = (undefined8 *)(param_1 + _TtC7Wallper17NowPlayingManager::lockscreenKey);
    uVar4 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    _swift_release();
    _swift_bridgeObjectRelease(uVar4);
  }
  SVar5.bridgeObject = param_4;
  SVar5.str = param_3;
  SVar6.bridgeObject = pvVar3;
  SVar6.str = pcVar2;
  Swift::String::append(SVar5,SVar6);
  FUN_100124e14(0x4000000000000000,0x3a6b636f6c,0xe500000000000000,1);
  _swift_bridgeObjectRelease(0xe500000000000000);
  return;
}

