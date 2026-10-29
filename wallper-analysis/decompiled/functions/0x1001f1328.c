// rea decompile_all
// name: FUN_1001f1328
// address: 0x1001f1328
// body: available
// range: 0x1001f1328-0x1001f15af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001f1590 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001f1328(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  byte bVar6;
  undefined *puVar7;
  ulong uVar8;
  TaskPriority TVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  code *pcVar14;
  undefined *puVar15;
  long unaff_x22;
  ulong uVar16;
  undefined8 uVar17;
  ulong uVar18;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x58));
  if (DAT_100557360 != -1) {
    _swift_once(&DAT_100557360,FUN_1001f067c);
  }
  lVar5 = DAT_100577d18;
  bVar6 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  if ((bVar6 & 1) != 0) {
    objc_stub::lock(*(ID *)(lVar5 + 0x28));
    lVar1 = *(long *)(lVar5 + 0x38) + 1;
    if (SCARRY8(*(long *)(lVar5 + 0x38),1)) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x1001f15b0);
      (*pcVar14)();
    }
    pcVar14 = *(code **)(unaff_x22 + 0x50);
    lVar2 = *(long *)(unaff_x22 + 0x30);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x20);
    lVar3 = *(long *)(unaff_x22 + 0x28);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x10);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x18);
    *(long *)(lVar5 + 0x38) = lVar1;
    puVar15 = *(undefined **)(lVar5 + 0x30);
    puVar7 = &DAT_100561090;
    FUN_100002f94(&DAT_100561090,&DAT_10041c870);
    uVar8 = *(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    TVar9.unknown = puVar15;
    _swift_retain();
    Swift::TaskPriority::get_utility(TVar9);
    TVar9 = Swift::TaskPriority::typeMetadataAccessor();
    (**(code **)(*(long *)(TVar9.unknown + -8) + 0x38))(uVar8,0,1,TVar9.unknown);
    puVar7 = &DAT_100532778;
    _swift_allocObject(&DAT_100532778,0x18,7);
    _swift_weakInit(puVar7 + 0x10,lVar5);
    uVar10 = lVar2 + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc(uVar10);
    (**(code **)(lVar3 + 0x10))();
    uVar13 = (ulong)*(byte *)(lVar3 + 0x50);
    uVar18 = uVar13 + 0x30 & (uVar13 ^ 0xffffffffffffffff);
    uVar16 = lVar2 + uVar18 + 7 & 0xfffffffffffffff8;
    puVar11 = &DAT_100533150;
    _swift_allocObject(&DAT_100533150,uVar16 + 0x28,uVar13 | 7);
    *(undefined8 *)(puVar11 + 0x10) = 0;
    *(undefined8 *)(puVar11 + 0x18) = 0;
    *(undefined **)(puVar11 + 0x20) = puVar15;
    *(undefined **)(puVar11 + 0x28) = puVar7;
    (*pcVar14)(puVar11 + uVar18,uVar10,uVar12);
    *(undefined8 *)(puVar11 + uVar16) = uVar17;
    *(undefined8 *)((long)(puVar11 + uVar16) + 8) = uVar4;
    *(long *)(puVar11 + uVar16 + 0x10) = lVar1;
    *(undefined8 *)(puVar11 + uVar16 + 0x18) = 0;
    *(undefined8 *)((long)(puVar11 + uVar16 + 0x18) + 8) = 0;
    _swift_task_dealloc(uVar10);
    _swift_retain(puVar15);
    _swift_bridgeObjectRetain(uVar4);
    uVar12 = 0;
    FUN_100176d50(0,0,uVar8,&DAT_10042b210,puVar11);
    FUN_10002a29c(uVar8,&DAT_100561090,&DAT_10041c870);
    _swift_task_dealloc(uVar8);
    uVar17 = *(undefined8 *)(lVar5 + 0x30);
    *(undefined8 *)(lVar5 + 0x30) = uVar12;
    _swift_retain(uVar12);
    _swift_release(uVar17);
    objc_stub::unlock(*(ID *)(lVar5 + 0x28));
    _swift_release(uVar12);
    _swift_release(puVar15);
  }
  _swift_task_switch(FUN_1001f15b0,0,0);
  return;
}

