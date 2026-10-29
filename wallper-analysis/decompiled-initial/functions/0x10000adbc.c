// rea decompile_all
// name: FUN_10000adbc
// address: 0x10000adbc
// body: available
// range: 0x10000adbc-0x10000b213 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10000adbc(void)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  URL UVar5;
  undefined *puVar6;
  undefined *puVar7;
  char *pcVar8;
  TaskPriority TVar9;
  MainActor *this;
  MainActor *pMVar10;
  undefined8 *puVar11;
  ID self;
  void *pvVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  MainActor *unaff_x20;
  String *pSVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  String SVar18;
  String local_180 [17];
  undefined1 local_69 [9];
  
  puVar17 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar17 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = (long)local_180 - extraout_x8;
  puVar17 = &DAT_10054ac40;
  FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar17 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = lVar14 - extraout_x8_00;
  lVar3 = 0;
  FUN_10040211c();
  lVar16 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar16 + 0x40));
  pSVar13 = (String *)(lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  FUN_10000c224(lVar15);
  lVar4 = lVar15;
  (**(code **)(lVar16 + 0x30))(lVar15,1,lVar3);
  if ((int)lVar4 == 1) {
    FUN_10002a29c(lVar15,&DAT_10054ac40,&DAT_10041ce70);
  }
  else {
    FUN_100007e64(lVar15,pSVar13,FUN_10040211c);
    puVar17 = *(undefined **)(unaff_x20 + 0x18);
    if (puVar17 == (undefined *)0x0) {
      FUN_100279594(0);
      FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
      SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10000b214);
      (*pcVar2)();
    }
    UVar5.unknown = puVar17;
    _swift_retain_n(puVar17,3);
    SVar18 = Foundation::URL::get_lastPathComponent(UVar5);
    pvVar12 = SVar18.bridgeObject;
    uVar1 = (ulong)SVar18.str & 0xffffffffffff;
    if (((ulong)pvVar12 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)pvVar12 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) {
      _swift_bridgeObjectRelease(pvVar12);
      SVar18 = *pSVar13;
      _swift_bridgeObjectRetain(pSVar13->bridgeObject);
    }
    pcVar8 = SVar18.str;
    puVar6 = &DAT_10041bec0;
    _swift_getKeyPath(&DAT_10041bec0);
    puVar7 = &DAT_10041bee8;
    _swift_getKeyPath(&DAT_10041bee8);
    Combine::Published::_get_subscript(local_180,puVar17,puVar6,puVar7);
    _swift_release(puVar6);
    _swift_release(puVar7);
    FUN_1002165a4(pcVar8,SVar18.bridgeObject,local_180[0].str);
    _swift_release_n(puVar17,2);
    _swift_bridgeObjectRelease(local_180[0].str);
    pMVar10 = unaff_x20;
    if (((ulong)pcVar8 & 1) == 0) {
      FUN_100269f50(pSVar13);
      _swift_release(puVar17);
      local_180[0].bridgeObject = *(void **)(unaff_x20 + 0xa0);
      local_180[0].str = *(char **)(unaff_x20 + 0x98);
      local_69[0] = 1;
      puVar17 = &DAT_10054ab50;
      FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
      SwiftUI::State::set_wrappedValue((State *)local_180,local_69,puVar17);
      TVar9 = Swift::TaskPriority::typeMetadataAccessor();
      (**(code **)(*(long *)(TVar9.unknown + -8) + 0x38))(lVar14,1,1,TVar9.unknown);
      this = Swift::MainActor::typeMetadataAccessor();
      FUN_100027a7c();
      puVar17 = &UNK_10041c880;
      puVar6 = &UNK_1005259d8;
    }
    else {
      FUN_100269618();
      _swift_release(puVar17);
      local_180[0].bridgeObject = *(void **)(unaff_x20 + 0xa0);
      local_180[0].str = *(char **)(unaff_x20 + 0x98);
      local_69[0] = 0;
      puVar17 = &DAT_10054ab50;
      FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
      SwiftUI::State::set_wrappedValue((State *)local_180,local_69,puVar17);
      TVar9 = Swift::TaskPriority::typeMetadataAccessor();
      (**(code **)(*(long *)(TVar9.unknown + -8) + 0x38))(lVar14,1,1,TVar9.unknown);
      this = Swift::MainActor::typeMetadataAccessor();
      FUN_100027a7c();
      puVar17 = &DAT_10041c890;
      puVar6 = &DAT_100525a00;
    }
    pMVar10 = Swift::MainActor::get_shared(this,pMVar10);
    puVar11 = &DAT_100558b80;
    FUN_1000036d0(&DAT_100558b80,PTR_typeMetadataAccessor_1005246d8,
                  PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
    _swift_allocObject(puVar6,0x140,7);
    *(MainActor **)(puVar6 + 0x10) = pMVar10;
    *(undefined8 **)(puVar6 + 0x18) = puVar11;
    _memcpy(puVar6 + 0x20,unaff_x20,0x110);
    *(String *)(puVar6 + 0x130) = SVar18;
    FUN_1001b1e74(0,0,lVar14,puVar17,puVar6);
    _swift_release();
    self = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
    if (DAT_100557bb8 != -1) {
      _swift_once(&DAT_100557bb8,FUN_100256014);
    }
    NSNotificationCenter::postNotificationName_object_(self,DAT_100577d58,0);
    FUN_100029548(pSVar13,FUN_10040211c);
  }
  return;
}

