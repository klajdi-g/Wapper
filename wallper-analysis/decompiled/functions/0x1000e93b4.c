// rea decompile_all
// name: FUN_1000e93b4
// address: 0x1000e93b4
// body: available
// range: 0x1000e93b4-0x1000e9807 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000e93b4(void)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  State SVar5;
  TaskPriority TVar6;
  MainActor *this;
  MainActor *pMVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  ID self;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 uVar10;
  long lVar11;
  MainActor *unaff_x20;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  State local_140;
  undefined8 uStack_138;
  char local_88 [8];
  undefined *local_80;
  undefined8 uStack_78;
  undefined8 local_68;
  
  puVar2 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)&local_140 - extraout_x8;
  puVar2 = &DAT_10054ac40;
  FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = lVar12 - extraout_x8_00;
  lVar3 = 0;
  FUN_10040211c();
  lVar14 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar14 + 0x40));
  lVar11 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  FUN_1000e3728(lVar13);
  lVar4 = lVar13;
  (**(code **)(lVar14 + 0x30))(lVar13,1,lVar3);
  if ((int)lVar4 == 1) {
    FUN_10002a29c(lVar13,&DAT_10054ac40,&DAT_10041ce70);
  }
  else {
    lVar4 = lVar11;
    FUN_100007e64(lVar13,lVar11,FUN_10040211c);
    FUN_1000e3868();
    uStack_78 = *(undefined8 *)(unaff_x20 + 0x90);
    local_80 = *(undefined **)(unaff_x20 + 0x88);
    uStack_138 = *(undefined8 *)(unaff_x20 + 0x90);
    local_140.unknown = *(undefined **)(unaff_x20 + 0x88);
    local_68 = uStack_78;
    FUN_1000087e4(&local_68,local_88,&DAT_10054b608,&DAT_10041c9a0);
    SVar5.unknown = &DAT_10054ab50;
    FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
    SwiftUI::State::get_wrappedValue(SVar5);
    lVar3 = *(long *)(unaff_x20 + 0x10);
    pMVar7 = unaff_x20;
    if (local_88[0] == '\x01') {
      if (lVar3 == 0) {
LAB_1000e97c4:
        FUN_100279594(0);
        FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
        SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1000e9808);
        (*pcVar1)();
      }
      _swift_retain(lVar3);
      FUN_100269618(lVar11);
      _swift_release(lVar3);
      uStack_138 = uStack_78;
      local_140.unknown = local_80;
      local_88[0] = '\0';
      SwiftUI::State::set_wrappedValue(&local_140,local_88,SVar5.unknown);
      FUN_10002a29c(&local_80,&DAT_10054ab50,&DAT_10041d0f0);
      TVar6 = Swift::TaskPriority::typeMetadataAccessor();
      (**(code **)(*(long *)(TVar6.unknown + -8) + 0x38))(lVar12,1,1,TVar6.unknown);
      this = Swift::MainActor::typeMetadataAccessor();
      FUN_1000f80c4();
      puVar2 = &DAT_100423d70;
      puVar9 = &DAT_10052aa00;
    }
    else {
      if (lVar3 == 0) goto LAB_1000e97c4;
      _swift_retain(lVar3);
      FUN_100269f50(lVar11);
      _swift_release(lVar3);
      uStack_138 = uStack_78;
      local_140.unknown = local_80;
      local_88[0] = '\x01';
      SwiftUI::State::set_wrappedValue(&local_140,local_88,SVar5.unknown);
      FUN_10002a29c(&local_80,&DAT_10054ab50,&DAT_10041d0f0);
      TVar6 = Swift::TaskPriority::typeMetadataAccessor();
      (**(code **)(*(long *)(TVar6.unknown + -8) + 0x38))(lVar12,1,1,TVar6.unknown);
      this = Swift::MainActor::typeMetadataAccessor();
      FUN_1000f80c4();
      puVar2 = &UNK_100423d60;
      puVar9 = &UNK_10052a9d8;
    }
    pMVar7 = Swift::MainActor::get_shared(this,pMVar7);
    puVar8 = &DAT_100558b80;
    FUN_1000036d0(&DAT_100558b80,PTR_typeMetadataAccessor_1005246d8,
                  PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
    _swift_allocObject(puVar9,0xe8,7);
    *(MainActor **)(puVar9 + 0x10) = pMVar7;
    *(undefined8 **)(puVar9 + 0x18) = puVar8;
    uVar10 = *(undefined8 *)(unaff_x20 + 0x80);
    uVar16 = *(undefined8 *)(unaff_x20 + 0x98);
    uVar15 = *(undefined8 *)(unaff_x20 + 0x90);
    *(undefined8 *)(puVar9 + 0xa8) = *(undefined8 *)(unaff_x20 + 0x88);
    *(undefined8 *)(puVar9 + 0xa0) = uVar10;
    *(undefined8 *)(puVar9 + 0xb8) = uVar16;
    *(undefined8 *)(puVar9 + 0xb0) = uVar15;
    uVar10 = *(undefined8 *)(unaff_x20 + 0xa0);
    *(undefined8 *)(puVar9 + 200) = *(undefined8 *)(unaff_x20 + 0xa8);
    *(undefined8 *)(puVar9 + 0xc0) = uVar10;
    uVar10 = *(undefined8 *)(unaff_x20 + 0xb0);
    uVar15 = *(undefined8 *)(unaff_x20 + 0x40);
    uVar17 = *(undefined8 *)(unaff_x20 + 0x58);
    uVar16 = *(undefined8 *)(unaff_x20 + 0x50);
    *(undefined8 *)(puVar9 + 0x68) = *(undefined8 *)(unaff_x20 + 0x48);
    *(undefined8 *)(puVar9 + 0x60) = uVar15;
    *(undefined8 *)(puVar9 + 0x78) = uVar17;
    *(undefined8 *)(puVar9 + 0x70) = uVar16;
    uVar15 = *(undefined8 *)(unaff_x20 + 0x60);
    uVar17 = *(undefined8 *)(unaff_x20 + 0x78);
    uVar16 = *(undefined8 *)(unaff_x20 + 0x70);
    *(undefined8 *)(puVar9 + 0x88) = *(undefined8 *)(unaff_x20 + 0x68);
    *(undefined8 *)(puVar9 + 0x80) = uVar15;
    *(undefined8 *)(puVar9 + 0x98) = uVar17;
    *(undefined8 *)(puVar9 + 0x90) = uVar16;
    uVar15 = *(undefined8 *)unaff_x20;
    uVar17 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar16 = *(undefined8 *)(unaff_x20 + 0x10);
    *(undefined8 *)(puVar9 + 0x28) = *(undefined8 *)(unaff_x20 + 8);
    *(undefined8 *)(puVar9 + 0x20) = uVar15;
    *(undefined8 *)(puVar9 + 0x38) = uVar17;
    *(undefined8 *)(puVar9 + 0x30) = uVar16;
    uVar15 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar17 = *(undefined8 *)(unaff_x20 + 0x38);
    uVar16 = *(undefined8 *)(unaff_x20 + 0x30);
    *(undefined8 *)(puVar9 + 0x48) = *(undefined8 *)(unaff_x20 + 0x28);
    *(undefined8 *)(puVar9 + 0x40) = uVar15;
    *(undefined8 *)(puVar9 + 0x58) = uVar17;
    *(undefined8 *)(puVar9 + 0x50) = uVar16;
    *(undefined8 *)(puVar9 + 0xd0) = uVar10;
    *(long *)(puVar9 + 0xd8) = lVar13;
    *(long *)(puVar9 + 0xe0) = lVar4;
    FUN_1001b1e74(0,0,lVar12,puVar2,puVar9);
    _swift_release();
    self = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
    if (DAT_100557bb8 != -1) {
      _swift_once(&DAT_100557bb8,FUN_100256014);
    }
    NSNotificationCenter::postNotificationName_object_(self,DAT_100577d58,0);
    FUN_100029548(lVar11,FUN_10040211c);
  }
  return;
}

