// rea decompile_all
// name: FUN_10004a6cc
// address: 0x10004a6cc
// body: available
// range: 0x10004a6cc-0x10004ab23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10004a6cc(void)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  URL UVar5;
  State SVar6;
  TaskPriority TVar7;
  MainActor *this;
  MainActor *pMVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  ID self;
  void *pvVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  MainActor *unaff_x20;
  String *pSVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  String SVar17;
  String local_1e0 [21];
  char local_88 [8];
  char *local_80;
  void *pvStack_78;
  void *local_70 [2];
  
  puVar16 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar16 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)local_1e0 - extraout_x8;
  puVar16 = &DAT_10054ac40;
  FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar16 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = lVar13 - extraout_x8_00;
  lVar3 = 0;
  FUN_10040211c();
  lVar15 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar15 + 0x40));
  pSVar12 = (String *)(lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  FUN_100049bb4(lVar14);
  lVar4 = lVar14;
  (**(code **)(lVar15 + 0x30))(lVar14,1,lVar3);
  if ((int)lVar4 == 1) {
    FUN_10002a29c(lVar14,&DAT_10054ac40,&DAT_10041ce70);
  }
  else {
    FUN_100007e64(lVar14,pSVar12,FUN_10040211c);
    puVar16 = *(undefined **)(unaff_x20 + 0x60);
    if (puVar16 == (undefined *)0x0) {
      FUN_100279594(0);
      FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
      SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10004ab24);
      (*pcVar2)();
    }
    UVar5.unknown = puVar16;
    _swift_retain_n(puVar16,2);
    SVar17 = Foundation::URL::get_lastPathComponent(UVar5);
    pvVar11 = SVar17.bridgeObject;
    uVar1 = (ulong)SVar17.str & 0xffffffffffff;
    if (((ulong)pvVar11 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)pvVar11 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) {
      _swift_bridgeObjectRelease(pvVar11);
      SVar17 = *pSVar12;
      _swift_bridgeObjectRetain(pSVar12->bridgeObject);
    }
    pvStack_78 = *(void **)(unaff_x20 + 0x108);
    local_80 = *(char **)(unaff_x20 + 0x100);
    local_1e0[0].bridgeObject = *(void **)(unaff_x20 + 0x108);
    local_1e0[0].str = *(char **)(unaff_x20 + 0x100);
    local_70[0] = pvStack_78;
    FUN_1000087e4(local_70,local_88,&DAT_10054b608,&DAT_10041c9a0);
    SVar6.unknown = &DAT_10054ab50;
    FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
    SwiftUI::State::get_wrappedValue(SVar6);
    _swift_release(puVar16);
    pMVar8 = unaff_x20;
    if (local_88[0] == '\x01') {
      FUN_100269618();
      _swift_release(puVar16);
      local_1e0[0].bridgeObject = pvStack_78;
      local_1e0[0].str = local_80;
      local_88[0] = '\0';
      SwiftUI::State::set_wrappedValue((State *)local_1e0,local_88,SVar6.unknown);
      FUN_10002a29c(&local_80,&DAT_10054ab50,&DAT_10041d0f0);
      TVar7 = Swift::TaskPriority::typeMetadataAccessor();
      (**(code **)(*(long *)(TVar7.unknown + -8) + 0x38))(lVar13,1,1,TVar7.unknown);
      this = Swift::MainActor::typeMetadataAccessor();
      FUN_100058a6c();
      puVar16 = &DAT_10041e738;
      puVar10 = &DAT_100526f30;
    }
    else {
      FUN_100269f50(pSVar12);
      _swift_release(puVar16);
      local_1e0[0].bridgeObject = pvStack_78;
      local_1e0[0].str = local_80;
      local_88[0] = '\x01';
      SwiftUI::State::set_wrappedValue((State *)local_1e0,local_88,SVar6.unknown);
      FUN_10002a29c(&local_80,&DAT_10054ab50,&DAT_10041d0f0);
      TVar7 = Swift::TaskPriority::typeMetadataAccessor();
      (**(code **)(*(long *)(TVar7.unknown + -8) + 0x38))(lVar13,1,1,TVar7.unknown);
      this = Swift::MainActor::typeMetadataAccessor();
      FUN_100058a6c();
      puVar16 = &UNK_10041e728;
      puVar10 = &UNK_100526f08;
    }
    pMVar8 = Swift::MainActor::get_shared(this,pMVar8);
    puVar9 = &DAT_100558b80;
    FUN_1000036d0(&DAT_100558b80,PTR_typeMetadataAccessor_1005246d8,
                  PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
    _swift_allocObject(puVar10,0x188,7);
    *(MainActor **)(puVar10 + 0x10) = pMVar8;
    *(undefined8 **)(puVar10 + 0x18) = puVar9;
    _memcpy(puVar10 + 0x20,unaff_x20,0x158);
    *(String *)(puVar10 + 0x178) = SVar17;
    FUN_1001b1e74(0,0,lVar13,puVar16,puVar10);
    _swift_release();
    self = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
    if (DAT_100557bb8 != -1) {
      _swift_once(&DAT_100557bb8,FUN_100256014);
    }
    NSNotificationCenter::postNotificationName_object_(self,DAT_100577d58,0);
    FUN_100029548(pSVar12,FUN_10040211c);
  }
  return;
}

