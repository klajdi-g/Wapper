// rea decompile_all
// name: FUN_10013fa6c
// address: 0x10013fa6c
// body: available
// range: 0x10013fa6c-0x10013fc5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

bool FUN_10013fa6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  bool bVar2;
  undefined8 uVar3;
  NSObject **ppNVar4;
  NSObject **ppNVar5;
  NSObject *local_128;
  NSObject *local_120 [4];
  undefined1 auStack_100 [32];
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [24];
  long local_68;
  undefined1 auStack_60 [24];
  long local_48;
  
  FUN_10013fc5c(param_1,auStack_80);
  FUN_10013fc5c(param_2,auStack_60);
  if (local_68 == 0) {
    if (local_48 == 0) {
      FUN_10002a29c(auStack_80,&DAT_10054d428,&DAT_100420300);
      return true;
    }
LAB_10013fbc4:
    FUN_10002a29c(auStack_80,&DAT_100554800,&DAT_100427948);
    return false;
  }
  FUN_10013fc5c(auStack_80,auStack_a0);
  if (local_48 == 0) {
    FUN_100043f24(auStack_a0);
    goto LAB_10013fbc4;
  }
  FUN_100007d88(auStack_a0,auStack_c0);
  FUN_100007d88(auStack_60,auStack_e0);
  FUN_1000280d4(auStack_c0,auStack_100);
  uVar3 = 0;
  FUN_100044230(0,&DAT_100554808,&PTR__OBJC_CLASS___NSObject_10053fb40);
  puVar1 = PTR___type_metadata_for_Any_100524178;
  ppNVar4 = local_120;
  _swift_dynamicCast(ppNVar4,auStack_100,PTR___type_metadata_for_Any_100524178 + 8,uVar3,6);
  FUN_1000280d4(auStack_e0,local_120);
  ppNVar5 = &local_128;
  _swift_dynamicCast(ppNVar5,local_120,puVar1 + 8,uVar3,6);
  if ((int)ppNVar5 == 0) {
    local_128 = (NSObject *)0x0;
  }
  if (((int)ppNVar4 == 0) || (local_120[0] == (NSObject *)0x0)) {
    FUN_100043f24(auStack_e0);
    FUN_100043f24(auStack_c0);
    if (local_128 == (NSObject *)0x0) {
      bVar2 = true;
      goto LAB_10013fc28;
    }
  }
  else {
    if (local_128 != (NSObject *)0x0) {
      bVar2 = (extension_ObjectiveC)::__C::NSObject::___infix(local_120[0],local_128);
      FUN_100043f24(auStack_e0);
      FUN_100043f24(auStack_c0);
      goto LAB_10013fc28;
    }
    FUN_100043f24(auStack_e0);
    FUN_100043f24(auStack_c0);
  }
  bVar2 = false;
LAB_10013fc28:
  FUN_10002a29c(auStack_80,&DAT_10054d428,&DAT_100420300);
  return bVar2;
}

