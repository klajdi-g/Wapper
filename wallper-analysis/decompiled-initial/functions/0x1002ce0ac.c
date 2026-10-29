// rea decompile_all
// name: FUN_1002ce0ac
// address: 0x1002ce0ac
// body: available
// range: 0x1002ce0ac-0x1002ce1bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1002ce0ac(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  ID self;
  undefined *puVar1;
  void *aBlock;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_150 [224];
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined *puStack_58;
  code *local_50;
  undefined *local_48;
  
  self = UNUserNotificationCenter::currentNotificationCenter
                   ((ID)&_OBJC_CLASS___UNUserNotificationCenter);
  puVar1 = &DAT_1005383f0;
  _swift_allocObject(&DAT_1005383f0,0xf0,7);
  uVar2 = param_3[0x14];
  uVar4 = param_3[0x17];
  uVar3 = param_3[0x16];
  *(undefined8 *)(puVar1 + 0xb8) = param_3[0x15];
  *(undefined8 *)(puVar1 + 0xb0) = uVar2;
  *(undefined8 *)(puVar1 + 200) = uVar4;
  *(undefined8 *)(puVar1 + 0xc0) = uVar3;
  uVar2 = param_3[0x18];
  uVar4 = param_3[0x1b];
  uVar3 = param_3[0x1a];
  *(undefined8 *)(puVar1 + 0xd8) = param_3[0x19];
  *(undefined8 *)(puVar1 + 0xd0) = uVar2;
  *(undefined8 *)(puVar1 + 0xe8) = uVar4;
  *(undefined8 *)(puVar1 + 0xe0) = uVar3;
  uVar2 = param_3[0xc];
  uVar4 = param_3[0xf];
  uVar3 = param_3[0xe];
  *(undefined8 *)(puVar1 + 0x78) = param_3[0xd];
  *(undefined8 *)(puVar1 + 0x70) = uVar2;
  *(undefined8 *)(puVar1 + 0x88) = uVar4;
  *(undefined8 *)(puVar1 + 0x80) = uVar3;
  uVar2 = param_3[0x10];
  uVar4 = param_3[0x13];
  uVar3 = param_3[0x12];
  *(undefined8 *)(puVar1 + 0x98) = param_3[0x11];
  *(undefined8 *)(puVar1 + 0x90) = uVar2;
  *(undefined8 *)(puVar1 + 0xa8) = uVar4;
  *(undefined8 *)(puVar1 + 0xa0) = uVar3;
  uVar2 = param_3[4];
  uVar4 = param_3[7];
  uVar3 = param_3[6];
  *(undefined8 *)(puVar1 + 0x38) = param_3[5];
  *(undefined8 *)(puVar1 + 0x30) = uVar2;
  *(undefined8 *)(puVar1 + 0x48) = uVar4;
  *(undefined8 *)(puVar1 + 0x40) = uVar3;
  uVar2 = param_3[8];
  uVar4 = param_3[0xb];
  uVar3 = param_3[10];
  *(undefined8 *)(puVar1 + 0x58) = param_3[9];
  *(undefined8 *)(puVar1 + 0x50) = uVar2;
  *(undefined8 *)(puVar1 + 0x68) = uVar4;
  *(undefined8 *)(puVar1 + 0x60) = uVar3;
  uVar2 = *param_3;
  uVar4 = param_3[3];
  uVar3 = param_3[2];
  *(undefined8 *)(puVar1 + 0x18) = param_3[1];
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  *(undefined8 *)(puVar1 + 0x28) = uVar4;
  *(undefined8 *)(puVar1 + 0x20) = uVar3;
  local_50 = FUN_1002d6698;
  local_70 = PTR___NSConcreteStackBlock_100521110;
  local_68 = 0x42000000;
  local_60 = FUN_10016802c;
  puStack_58 = &DAT_100538408;
  local_48 = puVar1;
  aBlock = __Block_copy(&local_70);
  puVar1 = local_48;
  FUN_1002d6478(param_3,auStack_150);
  _swift_release(puVar1);
  UNUserNotificationCenter::getNotificationSettingsWithCompletionHandler_(self,aBlock);
  __Block_release(aBlock);
  return 0;
}

