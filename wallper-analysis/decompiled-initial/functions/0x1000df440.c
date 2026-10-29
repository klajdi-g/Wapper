// rea decompile_all
// name: FUN_1000df440
// address: 0x1000df440
// body: available
// range: 0x1000df440-0x1000df647 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1000df440(long *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  NSString *pNVar7;
  undefined *puVar8;
  VerticalAlignment VVar9;
  undefined1 auStack_f0 [72];
  undefined *local_a8;
  long lStack_a0;
  undefined1 local_98;
  uint7 uStack_97;
  undefined *puStack_90;
  long lStack_88;
  undefined1 uStack_80;
  long local_78;
  long lStack_70;
  undefined1 local_68;
  
  lVar5 = 0;
  FUN_1000e12c4();
  lVar5 = *(long *)(param_2 + *(int *)(lVar5 + 0x1c));
  if (lVar5 != 0) {
    _swift_retain(lVar5);
    lVar6 = param_2;
    FUN_10026a7c8();
    _swift_release(lVar5);
    pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    puVar8 = (undefined *)
             NSFont::fontWithName_size_((ID)&_OBJC_CLASS___NSFont,0x4030000000000000,pNVar7);
    VVar9.unknown = (undefined *)0x0;
    if (puVar8 == (undefined *)0x0) {
      VVar9.unknown =
           (undefined *)NSFont::systemFontOfSize_(&_OBJC_CLASS___NSFont,0x4030000000000000);
      puVar8 = VVar9.unknown;
    }
    VVar9 = SwiftUI::VerticalAlignment::get_center(VVar9);
    FUN_1000df648(&local_a8,param_2);
    lStack_70 = lStack_88;
    puVar3 = puStack_90;
    lVar2 = lStack_a0;
    puVar1 = local_a8;
    lVar5 = CONCAT71(uStack_97,local_98);
    lStack_a0 = 0x4010000000000000;
    local_98 = 0;
    puStack_90 = local_a8;
    lStack_88 = lVar2;
    local_78 = (long)puVar3;
    param_1[4] = 0x4034000000000000;
    param_1[3] = 0x4028000000000000;
    param_1[6] = 0x404e000000000000;
    param_1[5] = 0x3ff0000000000000;
    param_1[8] = 0x4010000000000000;
    param_1[7] = (long)VVar9.unknown;
    param_1[10] = (long)local_a8;
    param_1[9] = (ulong)uStack_97 << 8;
    local_68 = uStack_80;
    *param_1 = lVar6;
    param_1[1] = param_3;
    param_1[2] = (long)puVar8;
    *(undefined1 *)(param_1 + 0xf) = uStack_80;
    param_1[0xc] = lVar5;
    param_1[0xb] = lVar2;
    param_1[0xe] = lStack_70;
    param_1[0xd] = (long)puVar3;
    local_a8 = VVar9.unknown;
    _swift_bridgeObjectRetain(param_3);
    FUN_1000087e4(&local_a8,auStack_f0,&DAT_100551ab8,&DAT_1004239b0);
    FUN_100069568(puVar1,lVar2,lVar5,puVar3);
    _swift_bridgeObjectRelease(param_3);
    return;
  }
  FUN_100279594(0);
  FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1000df648);
  (*pcVar4)();
}

