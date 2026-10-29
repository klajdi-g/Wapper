// rea decompile_all
// name: FUN_100045038
// address: 0x100045038
// body: available
// range: 0x100045038-0x100045257 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100045134 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100045038(undefined8 *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_150 [128];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  uStack_88 = unaff_x20[9];
  local_90 = unaff_x20[8];
  uStack_78 = unaff_x20[0xb];
  uStack_80 = unaff_x20[10];
  local_70 = unaff_x20[0xc];
  uStack_68 = (undefined1)unaff_x20[0xd];
  uStack_5f = *(undefined8 *)((long)unaff_x20 + 0x71);
  uStack_67 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x69);
  uStack_60 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x69) >> 0x38);
  uStack_c8 = unaff_x20[1];
  local_d0 = *unaff_x20;
  uStack_b8 = unaff_x20[3];
  uStack_c0 = unaff_x20[2];
  uStack_a8 = unaff_x20[5];
  local_b0 = unaff_x20[4];
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  puVar4 = &DAT_1005269c0;
  _swift_allocObject(&DAT_1005269c0,0x89,7);
  uVar7 = unaff_x20[8];
  uVar9 = unaff_x20[0xb];
  uVar8 = unaff_x20[10];
  *(undefined8 *)(puVar4 + 0x58) = unaff_x20[9];
  *(undefined8 *)(puVar4 + 0x50) = uVar7;
  *(undefined8 *)(puVar4 + 0x68) = uVar9;
  *(undefined8 *)(puVar4 + 0x60) = uVar8;
  uVar7 = unaff_x20[0xc];
  *(undefined8 *)(puVar4 + 0x78) = unaff_x20[0xd];
  *(undefined8 *)(puVar4 + 0x70) = uVar7;
  uVar7 = *(undefined8 *)((long)unaff_x20 + 0x69);
  *(undefined8 *)(puVar4 + 0x81) = *(undefined8 *)((long)unaff_x20 + 0x71);
  *(undefined8 *)(puVar4 + 0x79) = uVar7;
  uVar7 = *unaff_x20;
  uVar9 = unaff_x20[3];
  uVar8 = unaff_x20[2];
  *(undefined8 *)(puVar4 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar4 + 0x10) = uVar7;
  *(undefined8 *)(puVar4 + 0x28) = uVar9;
  *(undefined8 *)(puVar4 + 0x20) = uVar8;
  uVar7 = unaff_x20[4];
  uVar9 = unaff_x20[7];
  uVar8 = unaff_x20[6];
  *(undefined8 *)(puVar4 + 0x38) = unaff_x20[5];
  *(undefined8 *)(puVar4 + 0x30) = uVar7;
  *(undefined8 *)(puVar4 + 0x48) = uVar9;
  *(undefined8 *)(puVar4 + 0x40) = uVar8;
  FUN_100047eec(&local_d0,auStack_150);
  NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  if (DAT_100559bc0 != -1) {
    _swift_once(&DAT_100559bc0,FUN_1002995b0);
  }
  puVar5 = &DAT_10054d418;
  FUN_100002f94(&DAT_10054d418,&DAT_10041dd50);
  (extension_Foundation)::__C::NSNotificationCenter::_publisher
            ((long)param_1 + (long)*(int *)(puVar5 + 0x34),puVar5,0);
  puVar6 = &DAT_1005269e8;
  _swift_allocObject(&DAT_1005269e8,0x89,7);
  *(undefined8 *)(puVar6 + 0x58) = uStack_88;
  *(undefined8 *)(puVar6 + 0x50) = local_90;
  *(undefined8 *)(puVar6 + 0x68) = uStack_78;
  *(undefined8 *)(puVar6 + 0x60) = uStack_80;
  *(ulong *)(puVar6 + 0x78) = CONCAT71(uStack_67,uStack_68);
  *(undefined8 *)(puVar6 + 0x70) = local_70;
  *(undefined8 *)(puVar6 + 0x81) = uStack_5f;
  *(ulong *)(puVar6 + 0x79) = CONCAT17(uStack_60,uStack_67);
  *(undefined8 *)(puVar6 + 0x18) = uStack_c8;
  *(undefined8 *)(puVar6 + 0x10) = local_d0;
  *(undefined8 *)(puVar6 + 0x28) = uStack_b8;
  *(undefined8 *)(puVar6 + 0x20) = uStack_c0;
  *(undefined8 *)(puVar6 + 0x38) = uStack_a8;
  *(undefined8 *)(puVar6 + 0x30) = local_b0;
  *(undefined8 *)(puVar6 + 0x48) = uStack_98;
  *(undefined8 *)(puVar6 + 0x40) = uStack_a0;
  *param_1 = FUN_100047ee4;
  param_1[1] = puVar4;
  iVar2 = *(int *)(puVar5 + 0x38);
  *(undefined8 *)((long)param_1 + (long)iVar2) = FUN_100047f20;
  ((undefined8 *)((long)param_1 + (long)iVar2))[1] = puVar6;
  uVar3 = uStack_5f._7_1_;
  puVar4 = &DAT_100526a10;
  _swift_allocObject(&DAT_100526a10,0x89,7);
  *(undefined8 *)(puVar4 + 0x58) = uStack_88;
  *(undefined8 *)(puVar4 + 0x50) = local_90;
  *(undefined8 *)(puVar4 + 0x68) = uStack_78;
  *(undefined8 *)(puVar4 + 0x60) = uStack_80;
  *(ulong *)(puVar4 + 0x78) = CONCAT71(uStack_67,uStack_68);
  *(undefined8 *)(puVar4 + 0x70) = local_70;
  *(undefined8 *)(puVar4 + 0x81) = uStack_5f;
  *(ulong *)(puVar4 + 0x79) = CONCAT17(uStack_60,uStack_67);
  *(undefined8 *)(puVar4 + 0x18) = uStack_c8;
  *(undefined8 *)(puVar4 + 0x10) = local_d0;
  *(undefined8 *)(puVar4 + 0x28) = uStack_b8;
  *(undefined8 *)(puVar4 + 0x20) = uStack_c0;
  *(undefined8 *)(puVar4 + 0x38) = uStack_a8;
  *(undefined8 *)(puVar4 + 0x30) = local_b0;
  *(undefined8 *)(puVar4 + 0x48) = uStack_98;
  *(undefined8 *)(puVar4 + 0x40) = uStack_a0;
  puVar5 = &DAT_10054d420;
  FUN_100002f94(&DAT_10054d420,&DAT_10041dd58);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(puVar5 + 0x24));
  *puVar1 = uVar3;
  *(code **)(puVar1 + 8) = FUN_100047f84;
  *(undefined **)(puVar1 + 0x10) = puVar4;
  FUN_100047eec(&local_d0,auStack_150);
  FUN_100047eec(&local_d0,auStack_150);
  return;
}

