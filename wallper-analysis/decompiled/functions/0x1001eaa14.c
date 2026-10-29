// rea decompile_all
// name: FUN_1001eaa14
// address: 0x1001eaa14
// body: available
// range: 0x1001eaa14-0x1001eacd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001eaba4 to 0x1001e48fc FUN_1001e48fc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1001eacd0 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001eaa14(void)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined *puVar6;
  MainActor *pMVar7;
  undefined8 *puVar8;
  UnownedSerialExecutor UVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined8 uVar12;
  code *pcVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  
  _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x160));
  *(undefined8 *)(unaff_x22 + 0x178) = 0;
  uVar10 = *(undefined8 *)(unaff_x22 + 0xe0);
  lVar3 = *(long *)(unaff_x22 + 200);
  lVar4 = *(long *)(unaff_x22 + 0xd0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xb0);
  lVar1 = *(long *)(unaff_x22 + 0xb8);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xa8);
  (**(code **)(lVar1 + 0x38))(uVar10,1,1,uVar11);
  lVar16 = (long)*(int *)(lVar3 + 0x30);
  FUN_100077938(uVar12,lVar4);
  FUN_100077938(uVar10,lVar4 + lVar16);
  pcVar13 = *(code **)(lVar1 + 0x30);
  lVar3 = lVar4;
  (*pcVar13)(lVar4,1,uVar11);
  if ((int)lVar3 == 1) {
    uVar11 = *(undefined8 *)(unaff_x22 + 0xb0);
    FUN_10002a29c(*(undefined8 *)(unaff_x22 + 0xe0),&DAT_100553d90,&DAT_10041bf10);
    lVar4 = lVar4 + lVar16;
    (*pcVar13)(lVar4,1,uVar11);
    if ((int)lVar4 == 1) {
      FUN_10002a29c(*(undefined8 *)(unaff_x22 + 0xd0),&DAT_100553d90,&DAT_10041bf10);
LAB_1001eac54:
      pMVar7 = Swift::MainActor::typeMetadataAccessor();
      puVar6 = PTR_typeMetadataAccessor_1005246d8;
      pMVar7 = Swift::MainActor::get_shared(pMVar7,pMVar7);
      *(MainActor **)(unaff_x22 + 0x188) = pMVar7;
      puVar8 = &DAT_100558b80;
      FUN_100047f94(&DAT_100558b80,0xff,puVar6,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
      UVar9 = Swift::Actor::get_unownedExecutor();
      _swift_task_switch(FUN_1001ea98c,UVar9.unknown,puVar8);
      return;
    }
  }
  else {
    uVar11 = *(undefined8 *)(unaff_x22 + 0xb0);
    FUN_100077938(*(undefined8 *)(unaff_x22 + 0xd0),*(undefined8 *)(unaff_x22 + 0xd8));
    lVar3 = lVar4 + lVar16;
    (*pcVar13)(lVar3,1,uVar11);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar10 = *(undefined8 *)(unaff_x22 + 0xe0);
    if ((int)lVar3 != 1) {
      uVar14 = *(undefined8 *)(unaff_x22 + 0xd0);
      lVar3 = *(long *)(unaff_x22 + 0xb8);
      uVar12 = *(undefined8 *)(unaff_x22 + 0xc0);
      uVar15 = *(undefined8 *)(unaff_x22 + 0xb0);
      (**(code **)(lVar3 + 0x20))(uVar12,lVar4 + lVar16,uVar15);
      puVar6 = &DAT_100553da0;
      FUN_100047f94(&DAT_100553da0,0xff,PTR_typeMetadataAccessor_100520a18,
                    PTR_Foundation__Foundation__URL_>Swift__Equatable_100520a38);
      bVar2 = Swift::Equatable::___infix(uVar11,uVar12,uVar15,puVar6);
      pcVar13 = *(code **)(lVar3 + 8);
      (*pcVar13)(uVar12,uVar15);
      FUN_10002a29c(uVar10,&DAT_100553d90,&DAT_10041bf10);
      (*pcVar13)(uVar11,uVar15);
      FUN_10002a29c(uVar14,&DAT_100553d90,&DAT_10041bf10);
      if (bVar2) goto LAB_1001eac54;
      goto LAB_1001eab5c;
    }
    uVar12 = *(undefined8 *)(unaff_x22 + 0xb0);
    lVar4 = *(long *)(unaff_x22 + 0xb8);
    FUN_10002a29c(uVar10,&DAT_100553d90,&DAT_10041bf10);
    (**(code **)(lVar4 + 8))(uVar11,uVar12);
  }
  FUN_10002a29c(*(undefined8 *)(unaff_x22 + 0xd0),&DAT_10054ea38,&DAT_100426270);
LAB_1001eab5c:
  plVar5 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x180) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1001ea8b8;
  FUN_1001e48fc(*(undefined8 *)(unaff_x22 + 0x98),*(undefined8 *)(unaff_x22 + 0xa0),
                *(undefined8 *)(unaff_x22 + 0x90),*(undefined8 *)(unaff_x22 + 0xa8));
  return;
}

