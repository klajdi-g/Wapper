// rea decompile_all
// name: FUN_10009f7ec
// address: 0x10009f7ec
// body: available
// range: 0x10009f7ec-0x10009fd6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10009f7ec(void)

{
  Date DVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  TaskPriority TVar6;
  MainActor *pMVar7;
  undefined8 *puVar8;
  Date DVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar11;
  code *pcVar12;
  undefined1 *puVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  double dVar19;
  undefined1 auStack_d0 [8];
  undefined1 *local_c8;
  Date local_c0;
  long local_b8;
  long local_b0;
  undefined *local_a8;
  undefined1 auStack_a0 [48];
  
  puVar2 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar13 = auStack_d0 + -extraout_x8;
  local_a8 = (undefined *)Foundation::Date::typeMetadataAccessor();
  local_b0 = *(long *)(local_a8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_b0 + 0x40));
  local_c0.unknown = puVar13 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = (long)(puVar13 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lVar3 = 0;
  local_b8 = lVar10;
  FUN_10009e280();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar11 + 0x40));
  lVar10 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_10054c060;
  FUN_100002f94(&DAT_10054c060,&DAT_10041d7d8);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = lVar10 - extraout_x8_02;
  puVar4 = &DAT_10054c040;
  FUN_100002f94(&DAT_10054c040,&DAT_100420500);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  uVar16 = lVar15 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = uVar16 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = lVar18 - extraout_x12_01;
  if ((DAT_10054f948 & 1) != 0) {
    return;
  }
  local_c8 = puVar13;
  FUN_10009ee80(lVar17);
  (**(code **)(lVar11 + 0x38))(lVar18,1,1,lVar3);
  lVar14 = (long)*(int *)(puVar2 + 0x30);
  FUN_1000087e4(lVar17,lVar15,&DAT_10054c040,&DAT_100420500);
  FUN_1000087e4(lVar18,lVar15 + lVar14,&DAT_10054c040,&DAT_100420500);
  pcVar12 = *(code **)(lVar11 + 0x30);
  lVar11 = lVar15;
  (*pcVar12)(lVar15,1,lVar3);
  if ((int)lVar11 == 1) {
    FUN_10002a29c(lVar18,&DAT_10054c040,&DAT_100420500);
    FUN_10002a29c(lVar17,&DAT_10054c040,&DAT_100420500);
    lVar14 = lVar15 + lVar14;
    (*pcVar12)(lVar14,1,lVar3);
    if ((int)lVar14 != 1) {
LAB_10009fae4:
      FUN_10002a29c(lVar15,&DAT_10054c060,&DAT_10041d7d8);
      return;
    }
    FUN_10002a29c(lVar15,&DAT_10054c040,&DAT_100420500);
  }
  else {
    FUN_1000087e4(lVar15,uVar16,&DAT_10054c040,&DAT_100420500);
    lVar11 = lVar15 + lVar14;
    (*pcVar12)(lVar11,1,lVar3);
    if ((int)lVar11 == 1) {
      FUN_10002a29c(lVar18,&DAT_10054c040,&DAT_100420500);
      FUN_10002a29c(lVar17,&DAT_10054c040,&DAT_100420500);
      FUN_100029548(uVar16,FUN_10009e280);
      goto LAB_10009fae4;
    }
    FUN_100043db0(lVar15 + lVar14,lVar10);
    uVar5 = uVar16;
    FUN_1000a19c8(uVar16,lVar10);
    FUN_100029548(lVar10,FUN_10009e280);
    FUN_10002a29c(lVar18,&DAT_10054c040,&DAT_100420500);
    FUN_10002a29c(lVar17,&DAT_10054c040,&DAT_100420500);
    FUN_100029548(uVar16,FUN_10009e280);
    FUN_10002a29c(lVar15,&DAT_10054c040,&DAT_100420500);
    if ((uVar5 & 1) == 0) {
      return;
    }
  }
  puVar13 = local_c8;
  FUN_1000a1e68();
  lVar11 = local_b8;
  lVar10 = DAT_10054f858;
  lVar3 = DAT_10054f848;
  if ((DAT_10054f858 == 0) || (DAT_10054f848 == 0)) {
    Foundation::Date::init();
    if (DAT_10054f950 != -1) {
      _swift_once(&DAT_10054f950,FUN_1000a0070);
    }
    puVar2 = local_a8;
    puVar4 = local_a8;
    FUN_100099338(local_a8,&DAT_10054f958);
    _swift_beginAccess();
    lVar15 = local_b0;
    DVar1.unknown = local_c0.unknown;
    DVar9.unknown = puVar4;
    (**(code **)(local_b0 + 0x10))(local_c0.unknown,puVar4,puVar2);
    dVar19 = Foundation::Date::timeIntervalSince(DVar1,DVar9);
    pcVar12 = *(code **)(lVar15 + 8);
    (*pcVar12)(DVar1.unknown,puVar2);
    (*pcVar12)(lVar11,puVar2);
    lVar11 = local_b8;
    if (60.0 < dVar19) {
      Foundation::Date::init();
      _swift_beginAccess(puVar4,auStack_a0,0x21,0);
      (**(code **)(local_b0 + 0x28))(puVar4,lVar11,local_a8);
      _swift_endAccess(auStack_a0);
      DAT_10054f948 = 1;
      TVar6 = Swift::TaskPriority::typeMetadataAccessor();
      (**(code **)(*(long *)(TVar6.unknown + -8) + 0x38))(puVar13,1,1,TVar6.unknown);
      pMVar7 = Swift::MainActor::typeMetadataAccessor();
      puVar2 = PTR_typeMetadataAccessor_1005246d8;
      pMVar7 = Swift::MainActor::get_shared(pMVar7,pMVar7);
      puVar8 = &DAT_100558b80;
      FUN_1000036d0(&DAT_100558b80,puVar2,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
      puVar2 = &DAT_100528918;
      _swift_allocObject(&DAT_100528918,0x22,7);
      *(MainActor **)(puVar2 + 0x10) = pMVar7;
      *(undefined8 **)(puVar2 + 0x18) = puVar8;
      puVar2[0x20] = lVar10 == 0;
      puVar2[0x21] = lVar3 == 0;
      FUN_1001b1e74(0,0,puVar13,&DAT_100420e18,puVar2);
      _swift_release();
    }
  }
  return;
}

