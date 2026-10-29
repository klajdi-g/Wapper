// rea decompile_all
// name: FUN_1000e4618
// address: 0x1000e4618
// body: available
// range: 0x1000e4618-0x1000e4a1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000e4754 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000e4618(undefined8 *param_1,Alignment param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  code *pcVar3;
  Alignment AVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *unaff_x20;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long local_108 [23];
  
  AVar4 = SwiftUI::Alignment::get_center(param_2);
  *param_1 = AVar4.unknown;
  param_1[1] = param_3;
  puVar5 = &DAT_100551cb8;
  FUN_100002f94(&DAT_100551cb8,&DAT_100423b28);
  FUN_1000e4a20((long)param_1 + (long)*(int *)(puVar5 + 0x2c));
  puVar5 = &DAT_10052a6b8;
  _swift_allocObject(&DAT_10052a6b8,200,7);
  uVar8 = unaff_x20[0x10];
  uVar10 = unaff_x20[0x13];
  uVar9 = unaff_x20[0x12];
  *(undefined8 *)(puVar5 + 0x98) = unaff_x20[0x11];
  *(undefined8 *)(puVar5 + 0x90) = uVar8;
  *(undefined8 *)(puVar5 + 0xa8) = uVar10;
  *(undefined8 *)(puVar5 + 0xa0) = uVar9;
  uVar8 = unaff_x20[0x14];
  *(undefined8 *)(puVar5 + 0xb8) = unaff_x20[0x15];
  *(undefined8 *)(puVar5 + 0xb0) = uVar8;
  *(undefined8 *)(puVar5 + 0xc0) = unaff_x20[0x16];
  uVar8 = unaff_x20[8];
  uVar10 = unaff_x20[0xb];
  uVar9 = unaff_x20[10];
  *(undefined8 *)(puVar5 + 0x58) = unaff_x20[9];
  *(undefined8 *)(puVar5 + 0x50) = uVar8;
  *(undefined8 *)(puVar5 + 0x68) = uVar10;
  *(undefined8 *)(puVar5 + 0x60) = uVar9;
  uVar8 = unaff_x20[0xc];
  uVar10 = unaff_x20[0xf];
  uVar9 = unaff_x20[0xe];
  *(undefined8 *)(puVar5 + 0x78) = unaff_x20[0xd];
  *(undefined8 *)(puVar5 + 0x70) = uVar8;
  *(undefined8 *)(puVar5 + 0x88) = uVar10;
  *(undefined8 *)(puVar5 + 0x80) = uVar9;
  uVar8 = *unaff_x20;
  uVar10 = unaff_x20[3];
  uVar9 = unaff_x20[2];
  *(undefined8 *)(puVar5 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar5 + 0x10) = uVar8;
  *(undefined8 *)(puVar5 + 0x28) = uVar10;
  *(undefined8 *)(puVar5 + 0x20) = uVar9;
  uVar8 = unaff_x20[4];
  uVar10 = unaff_x20[7];
  uVar9 = unaff_x20[6];
  *(undefined8 *)(puVar5 + 0x38) = unaff_x20[5];
  *(undefined8 *)(puVar5 + 0x30) = uVar8;
  *(undefined8 *)(puVar5 + 0x48) = uVar10;
  *(undefined8 *)(puVar5 + 0x40) = uVar9;
  puVar6 = &DAT_100551cc0;
  FUN_100002f94(&DAT_100551cc0,&DAT_100423b30);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar6 + 0x24));
  *puVar1 = FUN_1000f80bc;
  puVar1[1] = puVar5;
  puVar1[2] = 0;
  puVar1[3] = 0;
  FUN_1000f80c4();
  NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  if (DAT_10055b028 != -1) {
    _swift_once(&DAT_10055b028,FUN_1002f5898);
  }
  puVar5 = &DAT_100551cc8;
  FUN_100002f94(&DAT_100551cc8,&DAT_100423b38);
  (extension_Foundation)::__C::NSNotificationCenter::_publisher
            ((long)param_1 + (long)*(int *)(puVar5 + 0x34),puVar5,0);
  puVar6 = &DAT_10052a6e0;
  _swift_allocObject(&DAT_10052a6e0,200,7);
  uVar10 = unaff_x20[0xc];
  uVar9 = unaff_x20[0xf];
  uVar8 = unaff_x20[0xe];
  *(undefined8 *)(puVar6 + 0x78) = unaff_x20[0xd];
  *(undefined8 *)(puVar6 + 0x70) = uVar10;
  *(undefined8 *)(puVar6 + 0x88) = uVar9;
  *(undefined8 *)(puVar6 + 0x80) = uVar8;
  uVar10 = unaff_x20[8];
  uVar9 = unaff_x20[0xb];
  uVar8 = unaff_x20[10];
  *(undefined8 *)(puVar6 + 0x58) = unaff_x20[9];
  *(undefined8 *)(puVar6 + 0x50) = uVar10;
  *(undefined8 *)(puVar6 + 0x68) = uVar9;
  *(undefined8 *)(puVar6 + 0x60) = uVar8;
  *(undefined8 *)(puVar6 + 0xc0) = unaff_x20[0x16];
  uVar8 = unaff_x20[0x12];
  uVar10 = unaff_x20[0x15];
  uVar9 = unaff_x20[0x14];
  *(undefined8 *)(puVar6 + 0xa8) = unaff_x20[0x13];
  *(undefined8 *)(puVar6 + 0xa0) = uVar8;
  *(undefined8 *)(puVar6 + 0xb8) = uVar10;
  *(undefined8 *)(puVar6 + 0xb0) = uVar9;
  uVar8 = unaff_x20[0x10];
  *(undefined8 *)(puVar6 + 0x98) = unaff_x20[0x11];
  *(undefined8 *)(puVar6 + 0x90) = uVar8;
  uVar8 = *unaff_x20;
  uVar10 = unaff_x20[3];
  uVar9 = unaff_x20[2];
  *(undefined8 *)(puVar6 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar6 + 0x10) = uVar8;
  *(undefined8 *)(puVar6 + 0x28) = uVar10;
  *(undefined8 *)(puVar6 + 0x20) = uVar9;
  uVar8 = unaff_x20[4];
  uVar10 = unaff_x20[7];
  uVar9 = unaff_x20[6];
  *(undefined8 *)(puVar6 + 0x38) = unaff_x20[5];
  *(undefined8 *)(puVar6 + 0x30) = uVar8;
  *(undefined8 *)(puVar6 + 0x48) = uVar10;
  *(undefined8 *)(puVar6 + 0x40) = uVar9;
  iVar2 = *(int *)(puVar5 + 0x38);
  *(undefined8 *)((long)param_1 + (long)iVar2) = FUN_1000f80f8;
  ((undefined8 *)((long)param_1 + (long)iVar2))[1] = puVar6;
  lVar7 = unaff_x20[2];
  if (lVar7 != 0) {
    puVar5 = &DAT_100423b40;
    _swift_getKeyPath(&DAT_100423b40);
    puVar6 = &DAT_100423b68;
    _swift_getKeyPath(&DAT_100423b68);
    FUN_1000f80c4();
    _swift_retain(lVar7);
    Combine::Published::_get_subscript(local_108);
    _swift_release(puVar5);
    _swift_release(puVar6);
    _swift_release(lVar7);
    uVar8 = *(undefined8 *)(local_108[0] + 0x10);
    _swift_bridgeObjectRelease();
    puVar5 = &DAT_10052a708;
    _swift_allocObject(&DAT_10052a708,200,7);
    uVar9 = unaff_x20[0x10];
    uVar11 = unaff_x20[0x13];
    uVar10 = unaff_x20[0x12];
    *(undefined8 *)(puVar5 + 0x98) = unaff_x20[0x11];
    *(undefined8 *)(puVar5 + 0x90) = uVar9;
    *(undefined8 *)(puVar5 + 0xa8) = uVar11;
    *(undefined8 *)(puVar5 + 0xa0) = uVar10;
    uVar9 = unaff_x20[0x14];
    *(undefined8 *)(puVar5 + 0xb8) = unaff_x20[0x15];
    *(undefined8 *)(puVar5 + 0xb0) = uVar9;
    *(undefined8 *)(puVar5 + 0xc0) = unaff_x20[0x16];
    uVar9 = unaff_x20[8];
    uVar11 = unaff_x20[0xb];
    uVar10 = unaff_x20[10];
    *(undefined8 *)(puVar5 + 0x58) = unaff_x20[9];
    *(undefined8 *)(puVar5 + 0x50) = uVar9;
    *(undefined8 *)(puVar5 + 0x68) = uVar11;
    *(undefined8 *)(puVar5 + 0x60) = uVar10;
    uVar9 = unaff_x20[0xc];
    uVar11 = unaff_x20[0xf];
    uVar10 = unaff_x20[0xe];
    *(undefined8 *)(puVar5 + 0x78) = unaff_x20[0xd];
    *(undefined8 *)(puVar5 + 0x70) = uVar9;
    *(undefined8 *)(puVar5 + 0x88) = uVar11;
    *(undefined8 *)(puVar5 + 0x80) = uVar10;
    uVar9 = *unaff_x20;
    uVar11 = unaff_x20[3];
    uVar10 = unaff_x20[2];
    *(undefined8 *)(puVar5 + 0x18) = unaff_x20[1];
    *(undefined8 *)(puVar5 + 0x10) = uVar9;
    *(undefined8 *)(puVar5 + 0x28) = uVar11;
    *(undefined8 *)(puVar5 + 0x20) = uVar10;
    uVar9 = unaff_x20[4];
    uVar11 = unaff_x20[7];
    uVar10 = unaff_x20[6];
    *(undefined8 *)(puVar5 + 0x38) = unaff_x20[5];
    *(undefined8 *)(puVar5 + 0x30) = uVar9;
    *(undefined8 *)(puVar5 + 0x48) = uVar11;
    *(undefined8 *)(puVar5 + 0x40) = uVar10;
    puVar6 = &DAT_100551cd0;
    FUN_100002f94(&DAT_100551cd0,&DAT_100423b88);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar6 + 0x24));
    *puVar1 = uVar8;
    puVar1[1] = thunk_FUN_1000f80f8;
    puVar1[2] = puVar5;
    FUN_1000f80c4();
    NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
    if (DAT_100557bb8 != -1) {
      _swift_once(&DAT_100557bb8,FUN_100256014);
    }
    puVar5 = &DAT_100551cd8;
    FUN_100002f94(&DAT_100551cd8,&DAT_100423b90);
    (extension_Foundation)::__C::NSNotificationCenter::_publisher
              ((long)param_1 + (long)*(int *)(puVar5 + 0x34),puVar5,0);
    puVar6 = &DAT_10052a730;
    _swift_allocObject(&DAT_10052a730,200,7);
    uVar8 = unaff_x20[0x10];
    uVar10 = unaff_x20[0x13];
    uVar9 = unaff_x20[0x12];
    *(undefined8 *)(puVar6 + 0x98) = unaff_x20[0x11];
    *(undefined8 *)(puVar6 + 0x90) = uVar8;
    *(undefined8 *)(puVar6 + 0xa8) = uVar10;
    *(undefined8 *)(puVar6 + 0xa0) = uVar9;
    uVar8 = unaff_x20[0x14];
    *(undefined8 *)(puVar6 + 0xb8) = unaff_x20[0x15];
    *(undefined8 *)(puVar6 + 0xb0) = uVar8;
    *(undefined8 *)(puVar6 + 0xc0) = unaff_x20[0x16];
    uVar8 = unaff_x20[8];
    uVar10 = unaff_x20[0xb];
    uVar9 = unaff_x20[10];
    *(undefined8 *)(puVar6 + 0x58) = unaff_x20[9];
    *(undefined8 *)(puVar6 + 0x50) = uVar8;
    *(undefined8 *)(puVar6 + 0x68) = uVar10;
    *(undefined8 *)(puVar6 + 0x60) = uVar9;
    uVar8 = unaff_x20[0xc];
    uVar10 = unaff_x20[0xf];
    uVar9 = unaff_x20[0xe];
    *(undefined8 *)(puVar6 + 0x78) = unaff_x20[0xd];
    *(undefined8 *)(puVar6 + 0x70) = uVar8;
    *(undefined8 *)(puVar6 + 0x88) = uVar10;
    *(undefined8 *)(puVar6 + 0x80) = uVar9;
    uVar8 = *unaff_x20;
    uVar10 = unaff_x20[3];
    uVar9 = unaff_x20[2];
    *(undefined8 *)(puVar6 + 0x18) = unaff_x20[1];
    *(undefined8 *)(puVar6 + 0x10) = uVar8;
    *(undefined8 *)(puVar6 + 0x28) = uVar10;
    *(undefined8 *)(puVar6 + 0x20) = uVar9;
    uVar8 = unaff_x20[4];
    uVar10 = unaff_x20[7];
    uVar9 = unaff_x20[6];
    *(undefined8 *)(puVar6 + 0x38) = unaff_x20[5];
    *(undefined8 *)(puVar6 + 0x30) = uVar8;
    *(undefined8 *)(puVar6 + 0x48) = uVar10;
    *(undefined8 *)(puVar6 + 0x40) = uVar9;
    iVar2 = *(int *)(puVar5 + 0x38);
    *(undefined8 *)((long)param_1 + (long)iVar2) = FUN_1000f8120;
    ((undefined8 *)((long)param_1 + (long)iVar2))[1] = puVar6;
    FUN_1000f80c4();
    return;
  }
  FUN_1000f80c4();
  FUN_100279594(0);
  FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1000e4a20);
  (*pcVar3)();
}

