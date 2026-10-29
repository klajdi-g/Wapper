// rea decompile_all
// name: FUN_1000e9d24
// address: 0x1000e9d24
// body: available
// range: 0x1000e9d24-0x1000ea253 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000e9d24(void)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  State SVar5;
  ulong uVar6;
  TaskPriority TVar7;
  MainActor *this;
  MainActor *pMVar8;
  undefined8 *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long extraout_x12_00;
  MainActor *unaff_x20;
  code *pcVar11;
  undefined **ppuVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puStack_160;
  long local_158;
  long local_150;
  State local_140;
  undefined8 uStack_138;
  byte local_88 [8];
  undefined *local_80;
  undefined8 uStack_78;
  undefined8 local_70 [2];
  
  puVar1 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  local_158 = (long)&puStack_160 - extraout_x8;
  FUN_10040211c();
  lVar13 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar13 + 0x40));
  lVar10 = ((long)&puStack_160 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar1 = &DAT_10054b6b8;
  local_150 = lVar10;
  FUN_100002f94(&DAT_10054b6b8,&DAT_10041ca50);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  ppuVar12 = (undefined **)(lVar10 - extraout_x8_01);
  puVar3 = &DAT_10054ac40;
  FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  uVar14 = (long)ppuVar12 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar16 = uVar14 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar15 = lVar16 - extraout_x12_00;
  FUN_1000e3728(lVar15);
  (**(code **)(lVar13 + 0x38))(lVar16,1,1,lVar2);
  lVar10 = (long)*(int *)(puVar1 + 0x30);
  FUN_1000087e4(lVar15,ppuVar12,&DAT_10054ac40,&DAT_10041ce70);
  FUN_1000087e4(lVar16,(long)ppuVar12 + lVar10,&DAT_10054ac40,&DAT_10041ce70);
  pcVar11 = *(code **)(lVar13 + 0x30);
  ppuVar4 = ppuVar12;
  (*pcVar11)(ppuVar12,1,lVar2);
  if ((int)ppuVar4 == 1) {
    FUN_10002a29c(lVar16,&DAT_10054ac40,&DAT_10041ce70);
    FUN_10002a29c(lVar15,&DAT_10054ac40,&DAT_10041ce70);
    lVar10 = (long)ppuVar12 + lVar10;
    (*pcVar11)(lVar10,1,lVar2);
    if ((int)lVar10 == 1) {
      puVar1 = &DAT_10054ac40;
      puVar3 = &DAT_10041ce70;
      goto LAB_1000ea084;
    }
LAB_1000e9fcc:
    FUN_10002a29c(ppuVar12,&DAT_10054b6b8,&DAT_10041ca50);
  }
  else {
    FUN_1000087e4(ppuVar12,uVar14,&DAT_10054ac40,&DAT_10041ce70);
    lVar13 = (long)ppuVar12 + lVar10;
    (*pcVar11)(lVar13,1,lVar2);
    lVar2 = local_150;
    if ((int)lVar13 == 1) {
      FUN_10002a29c(lVar16,&DAT_10054ac40,&DAT_10041ce70);
      FUN_10002a29c(lVar15,&DAT_10054ac40,&DAT_10041ce70);
      FUN_100029548(uVar14,FUN_10040211c);
      goto LAB_1000e9fcc;
    }
    FUN_100007e64((long)ppuVar12 + lVar10,local_150,FUN_10040211c);
    uVar6 = uVar14;
    FUN_10040a7a0(uVar14,lVar2);
    FUN_100029548(lVar2,FUN_10040211c);
    FUN_10002a29c(lVar16,&DAT_10054ac40,&DAT_10041ce70);
    FUN_10002a29c(lVar15,&DAT_10054ac40,&DAT_10041ce70);
    FUN_100029548(uVar14,FUN_10040211c);
    FUN_10002a29c(ppuVar12,&DAT_10054ac40,&DAT_10041ce70);
    if ((uVar6 & 1) != 0) {
      return;
    }
  }
  uStack_78 = *(undefined8 *)(unaff_x20 + 0xa0);
  local_80 = *(undefined **)(unaff_x20 + 0x98);
  uStack_138 = *(undefined8 *)(unaff_x20 + 0xa0);
  local_140.unknown = *(undefined **)(unaff_x20 + 0x98);
  local_70[0] = uStack_78;
  FUN_1000087e4(local_70,local_88,&DAT_10054b608,&DAT_10041c9a0);
  SVar5.unknown = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar5);
  if ((local_88[0] & 1) == 0) {
    uStack_138 = *(undefined8 *)(unaff_x20 + 0xb0);
    local_140.unknown = *(undefined **)(unaff_x20 + 0xa8);
    SwiftUI::State::get_wrappedValue(SVar5);
    if ((local_88[0] & 1) == 0) {
      uStack_138 = uStack_78;
      local_140.unknown = local_80;
      local_88[0] = 1;
      SwiftUI::State::set_wrappedValue(&local_140,local_88,SVar5.unknown);
      FUN_10002a29c(&local_80,&DAT_10054ab50,&DAT_10041d0f0);
      TVar7 = Swift::TaskPriority::typeMetadataAccessor();
      lVar10 = local_158;
      (**(code **)(*(long *)(TVar7.unknown + -8) + 0x38))(local_158,1,1,TVar7.unknown);
      this = Swift::MainActor::typeMetadataAccessor();
      puVar1 = PTR_typeMetadataAccessor_1005246d8;
      pMVar8 = unaff_x20;
      FUN_1000f80c4(unaff_x20,&local_140);
      pMVar8 = Swift::MainActor::get_shared(this,pMVar8);
      puVar9 = &DAT_100558b80;
      FUN_1000036d0(&DAT_100558b80,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
      puVar1 = &DAT_10052a9b0;
      _swift_allocObject(&DAT_10052a9b0,0xd8,7);
      *(MainActor **)(puVar1 + 0x10) = pMVar8;
      *(undefined8 **)(puVar1 + 0x18) = puVar9;
      uVar17 = *(undefined8 *)(unaff_x20 + 0x80);
      uVar19 = *(undefined8 *)(unaff_x20 + 0x98);
      uVar18 = *(undefined8 *)(unaff_x20 + 0x90);
      *(undefined8 *)(puVar1 + 0xa8) = *(undefined8 *)(unaff_x20 + 0x88);
      *(undefined8 *)(puVar1 + 0xa0) = uVar17;
      *(undefined8 *)(puVar1 + 0xb8) = uVar19;
      *(undefined8 *)(puVar1 + 0xb0) = uVar18;
      uVar17 = *(undefined8 *)(unaff_x20 + 0xa0);
      *(undefined8 *)(puVar1 + 200) = *(undefined8 *)(unaff_x20 + 0xa8);
      *(undefined8 *)(puVar1 + 0xc0) = uVar17;
      *(undefined8 *)(puVar1 + 0xd0) = *(undefined8 *)(unaff_x20 + 0xb0);
      uVar17 = *(undefined8 *)(unaff_x20 + 0x40);
      uVar19 = *(undefined8 *)(unaff_x20 + 0x58);
      uVar18 = *(undefined8 *)(unaff_x20 + 0x50);
      *(undefined8 *)(puVar1 + 0x68) = *(undefined8 *)(unaff_x20 + 0x48);
      *(undefined8 *)(puVar1 + 0x60) = uVar17;
      *(undefined8 *)(puVar1 + 0x78) = uVar19;
      *(undefined8 *)(puVar1 + 0x70) = uVar18;
      uVar17 = *(undefined8 *)(unaff_x20 + 0x60);
      uVar19 = *(undefined8 *)(unaff_x20 + 0x78);
      uVar18 = *(undefined8 *)(unaff_x20 + 0x70);
      *(undefined8 *)(puVar1 + 0x88) = *(undefined8 *)(unaff_x20 + 0x68);
      *(undefined8 *)(puVar1 + 0x80) = uVar17;
      *(undefined8 *)(puVar1 + 0x98) = uVar19;
      *(undefined8 *)(puVar1 + 0x90) = uVar18;
      uVar17 = *(undefined8 *)unaff_x20;
      uVar19 = *(undefined8 *)(unaff_x20 + 0x18);
      uVar18 = *(undefined8 *)(unaff_x20 + 0x10);
      *(undefined8 *)(puVar1 + 0x28) = *(undefined8 *)(unaff_x20 + 8);
      *(undefined8 *)(puVar1 + 0x20) = uVar17;
      *(undefined8 *)(puVar1 + 0x38) = uVar19;
      *(undefined8 *)(puVar1 + 0x30) = uVar18;
      uVar17 = *(undefined8 *)(unaff_x20 + 0x20);
      uVar19 = *(undefined8 *)(unaff_x20 + 0x38);
      uVar18 = *(undefined8 *)(unaff_x20 + 0x30);
      *(undefined8 *)(puVar1 + 0x48) = *(undefined8 *)(unaff_x20 + 0x28);
      *(undefined8 *)(puVar1 + 0x40) = uVar17;
      *(undefined8 *)(puVar1 + 0x58) = uVar19;
      *(undefined8 *)(puVar1 + 0x50) = uVar18;
      FUN_1001b1e74(0,0,lVar10,&DAT_100423d50,puVar1);
      _swift_release();
      return;
    }
  }
  puVar1 = &DAT_10054ab50;
  puVar3 = &DAT_10041d0f0;
  ppuVar12 = &local_80;
LAB_1000ea084:
  FUN_10002a29c(ppuVar12,puVar1,puVar3);
  return;
}

