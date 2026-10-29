// rea decompile_all
// name: FUN_1002ae668
// address: 0x1002ae668
// body: available
// range: 0x1002ae668-0x1002ae903 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002ae668(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  byte bVar4;
  undefined *puVar5;
  ulong uVar6;
  TaskPriority TVar7;
  URL UVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  long unaff_x22;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x100));
  if (DAT_100557360 != -1) {
    _swift_once(&DAT_100557360,FUN_1001f067c);
  }
  lVar2 = DAT_100577d18;
  bVar4 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  if ((bVar4 & 1) != 0) {
    objc_stub::lock(*(ID *)(lVar2 + 0x28));
    lVar1 = *(long *)(lVar2 + 0x38) + 1;
    if (SCARRY8(*(long *)(lVar2 + 0x38),1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1002ae904);
      (*pcVar3)();
    }
    uVar11 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar16 = *(undefined8 *)(unaff_x22 + 0xa0);
    *(long *)(lVar2 + 0x38) = lVar1;
    puVar13 = *(undefined **)(lVar2 + 0x30);
    puVar5 = &DAT_100561090;
    FUN_100002f94(&DAT_100561090,&DAT_10041c870);
    uVar6 = *(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    TVar7.unknown = puVar13;
    _swift_retain();
    Swift::TaskPriority::get_utility(TVar7);
    TVar7 = Swift::TaskPriority::typeMetadataAccessor();
    (**(code **)(*(long *)(TVar7.unknown + -8) + 0x38))(uVar6,0,1,TVar7.unknown);
    puVar5 = &DAT_100537ae8;
    _swift_allocObject(&DAT_100537ae8,0x18,7);
    _swift_weakInit(puVar5 + 0x10,lVar2);
    UVar8 = Foundation::URL::typeMetadataAccessor();
    lVar17 = *(long *)(UVar8.unknown + -8);
    lVar18 = *(long *)(lVar17 + 0x40);
    uVar9 = lVar18 + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc(uVar9);
    (**(code **)(lVar17 + 0x10))();
    uVar12 = (ulong)*(byte *)(lVar17 + 0x50);
    uVar15 = uVar12 + 0x30 & (uVar12 ^ 0xffffffffffffffff);
    uVar14 = lVar18 + uVar15 + 7 & 0xfffffffffffffff8;
    puVar10 = &DAT_100537b10;
    _swift_allocObject(&DAT_100537b10,uVar14 + 0x28,uVar12 | 7);
    *(undefined8 *)(puVar10 + 0x10) = 0;
    *(undefined8 *)(puVar10 + 0x18) = 0;
    *(undefined **)(puVar10 + 0x20) = puVar13;
    *(undefined **)(puVar10 + 0x28) = puVar5;
    (**(code **)(lVar17 + 0x20))(puVar10 + uVar15,uVar9,UVar8.unknown);
    *(undefined8 *)(puVar10 + uVar14) = uVar11;
    *(undefined8 *)((long)(puVar10 + uVar14) + 8) = uVar16;
    *(long *)(puVar10 + uVar14 + 0x10) = lVar1;
    *(undefined8 *)(puVar10 + uVar14 + 0x18) = 0;
    *(undefined8 *)((long)(puVar10 + uVar14 + 0x18) + 8) = 0;
    _swift_task_dealloc(uVar9);
    _swift_bridgeObjectRetain(uVar16);
    _swift_retain(puVar13);
    uVar11 = 0;
    FUN_100176d50(0,0,uVar6,&DAT_10042e030,puVar10);
    FUN_10002a29c(uVar6,&DAT_100561090,&DAT_10041c870);
    _swift_task_dealloc(uVar6);
    uVar16 = *(undefined8 *)(lVar2 + 0x30);
    *(undefined8 *)(lVar2 + 0x30) = uVar11;
    _swift_retain(uVar11);
    _swift_release(uVar16);
    objc_stub::unlock(*(ID *)(lVar2 + 0x28));
    _swift_release(uVar11);
    _swift_release(puVar13);
  }
                    /* WARNING: Could not recover jumptable at 0x0001002ae8e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

