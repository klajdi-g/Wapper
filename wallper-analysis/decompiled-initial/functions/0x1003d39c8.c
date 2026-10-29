// rea decompile_all
// name: FUN_1003d39c8
// address: 0x1003d39c8
// body: available
// range: 0x1003d39c8-0x1003d3c4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003d39c8(void)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  TaskPriority TVar5;
  MainActor *pMVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  ID self;
  long extraout_x8;
  ulong uVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  
  lVar3 = 0;
  FUN_1003e4bc8();
  lVar12 = *(long *)(lVar3 + -8);
  lVar10 = *(long *)(lVar12 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar4 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)(&stack0xffffffffffffffa0 + -(lVar10 + 0xfU & 0xfffffffffffffff0)) - extraout_x8;
  FUN_1003d020c();
  lVar3 = *(long *)(unaff_x20 + *(int *)(lVar3 + 0x30));
  if (((ulong)puVar4 & 1) == 0) {
    if (lVar3 == 0) goto LAB_1003d3c08;
    _swift_retain(lVar3);
    FUN_100269f50();
    puVar4 = &UNK_100436708;
    puVar8 = &UNK_10053dff0;
  }
  else {
    if (lVar3 == 0) {
LAB_1003d3c08:
      FUN_100279594(0);
      FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
      SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1003d3c4c);
      (*pcVar2)();
    }
    _swift_retain(lVar3);
    FUN_100269618();
    puVar4 = &DAT_100436718;
    puVar8 = &DAT_10053e018;
  }
  _swift_release(lVar3);
  TVar5 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar5.unknown + -8) + 0x38))(lVar11,1,1,TVar5.unknown);
  FUN_100029504();
  pMVar6 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_1005246d8;
  pMVar6 = Swift::MainActor::get_shared(pMVar6,pMVar6);
  puVar7 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  uVar9 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar13 = uVar9 + 0x20 & (uVar9 ^ 0xffffffffffffffff);
  _swift_allocObject(puVar8,uVar13 + lVar10,uVar9 | 7);
  *(MainActor **)(puVar8 + 0x10) = pMVar6;
  *(undefined8 **)(puVar8 + 0x18) = puVar7;
  FUN_100007e64(&stack0xffffffffffffffa0 + -(lVar10 + 0xfU & 0xfffffffffffffff0),puVar8 + uVar13,
                FUN_1003e4bc8);
  FUN_1001b1e74(0,0,lVar11,puVar4,puVar8);
  _swift_release();
  self = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  if (DAT_100557bb8 != -1) {
    _swift_once(&DAT_100557bb8,FUN_100256014);
  }
  NSNotificationCenter::postNotificationName_object_(self,DAT_100577d58,0);
  return 0;
}

