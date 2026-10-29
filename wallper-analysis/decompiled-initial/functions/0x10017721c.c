// rea decompile_all
// name: FUN_10017721c
// address: 0x10017721c
// body: available
// range: 0x10017721c-0x10017748b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10017721c(char *param_1,void *param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  __uint8 _Var1;
  undefined *puVar2;
  TaskPriority TVar3;
  undefined1 *puVar4;
  TaskPriority TVar5;
  UnownedSerialExecutor UVar6;
  ContiguousArray<__int8> CVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long extraout_x8;
  undefined1 *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  String SVar14;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  undefined8 *puStack_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined *local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined *local_60;
  long lStack_58;
  
  puVar2 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_b0 + -extraout_x8;
  FUN_1000087e4(param_3,puVar10,&DAT_100561090,&DAT_10041c870);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  lVar13 = *(long *)(TVar3.unknown + -8);
  puVar4 = puVar10;
  (**(code **)(lVar13 + 0x30))(puVar10,1,TVar3.unknown);
  TVar5.unknown = param_5;
  _swift_retain();
  if ((int)puVar4 == 1) {
    FUN_10002a29c(puVar10,&DAT_100561090,&DAT_10041c870);
    uVar11 = 0x1000;
  }
  else {
    _Var1 = Swift::TaskPriority::get_rawValue(TVar5);
    (**(code **)(lVar13 + 8))(puVar10,TVar3.unknown);
    uVar11 = (ulong)_Var1 | 0x1000;
  }
  lVar13 = *(long *)(param_5 + 0x10);
  lVar12 = *(long *)(param_5 + 0x18);
  _swift_unknownObjectRetain(lVar13);
  _swift_release(param_5);
  if (lVar13 == 0) {
    UVar6.unknown = (undefined *)0x0;
    lVar12 = 0;
  }
  else {
    _swift_getObjectType(lVar13);
    UVar6 = Swift::Actor::get_unownedExecutor();
    _swift_unknownObjectRelease(lVar13);
  }
  if (param_2 == (void *)0x0) {
    puVar2 = &DAT_1005313e0;
    _swift_allocObject(&DAT_1005313e0,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(undefined **)(puVar2 + 0x18) = param_5;
    puVar8 = &DAT_10054f770;
    FUN_100002f94(&DAT_10054f770,&DAT_10042a510);
    if (lVar12 == 0 && UVar6.unknown == (undefined *)0x0) {
      puVar9 = (undefined8 *)0x0;
    }
    else {
      local_70 = 0;
      uStack_68 = 0;
      puVar9 = &local_70;
      local_60 = UVar6.unknown;
      lStack_58 = lVar12;
    }
    _swift_task_create(uVar11,puVar9,puVar8,&DAT_10042a508,puVar2);
  }
  else {
    SVar14.bridgeObject = param_2;
    SVar14.str = param_1;
    CVar7 = Swift::String::get_utf8CString(SVar14);
    puVar2 = &DAT_100531408;
    _swift_allocObject(&DAT_100531408,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(undefined **)(puVar2 + 0x18) = param_5;
    _swift_retain(param_5);
    puVar8 = &DAT_10054f770;
    FUN_100002f94(&DAT_10054f770,&DAT_10042a510);
    puStack_a0 = (undefined8 *)0x0;
    if (lVar12 != 0 || UVar6.unknown != (undefined *)0x0) {
      local_90 = 0;
      uStack_88 = 0;
      puStack_a0 = &local_90;
      local_80 = UVar6.unknown;
      lStack_78 = lVar12;
    }
    local_a8 = 7;
    local_98 = CVar7.unknown + 0x20;
    _swift_task_create(uVar11,&local_a8,puVar8,&DAT_10042a518,puVar2);
    _swift_release(param_5);
    _swift_release(CVar7.unknown);
  }
  return;
}

