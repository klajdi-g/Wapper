// rea decompile_all
// name: FUN_1001bf2d0
// address: 0x1001bf2d0
// body: available
// range: 0x1001bf2d0-0x1001bf57b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001bf2d0(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 *unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 auStack_90 [16];
  undefined *local_80;
  ulong uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_d0 = *unaff_x20;
  puVar1 = &DAT_100550ec0;
  FUN_100002f94(&DAT_100550ec0,&DAT_100422eb0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)&local_d0 - extraout_x8;
  puVar1 = &DAT_10054ac38;
  FUN_100002f94(&DAT_10054ac38,&DAT_10041e8e0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar7 - extraout_x8_00;
  lVar2 = 0;
  FUN_10025ee04();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar8 + 0x40));
  lVar9 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_c8 = param_3;
  FUN_1001b6e74(lVar10,param_3);
  lVar5 = lVar10;
  (**(code **)(lVar8 + 0x30))(lVar10,1,lVar2);
  if ((int)lVar5 == 1) {
    puVar1 = &DAT_10054ac38;
    puVar6 = &DAT_10041e8e0;
    lVar7 = lVar10;
  }
  else {
    FUN_100007e64(lVar10,lVar9,FUN_10025ee04);
    uVar3 = param_4;
    FUN_1001d89b0(param_4);
    uVar4 = param_1;
    FUN_10026abd8(param_1,param_2,uVar3);
    _swift_bridgeObjectRelease(uVar3);
    if ((uVar4 & 1) == 0) {
      uStack_68 = local_d0;
      local_80 = (undefined *)param_4;
      uStack_78 = param_1;
      local_70 = param_2;
      FUN_1001b9fc0(local_c8,thunk_FUN_1000ce1a8,auStack_90);
      FUN_100029548(lVar9,FUN_10025ee04);
      return;
    }
    puVar1 = &DAT_100549eb0;
    FUN_100002f94(&DAT_100549eb0,&DAT_100426be0);
    _swift_initStackObject();
    *(undefined8 *)(puVar1 + 0x18) = 2;
    *(undefined8 *)(puVar1 + 0x10) = 1;
    *(ulong *)(puVar1 + 0x20) = param_1;
    *(undefined8 *)(puVar1 + 0x28) = param_2;
    FUN_100029504(param_4,lVar7,FUN_1001d537c);
    lVar5 = 0;
    FUN_1001d537c();
    (**(code **)(*(long *)(lVar5 + -8) + 0x38))(lVar7,0,1,lVar5);
    _swift_bridgeObjectRetain(param_2);
    puVar6 = puVar1;
    FUN_10020c98c();
    local_80 = puVar6;
    uStack_78 = lVar7;
    FUN_1001b9fc0(local_c8,FUN_1000ce1b4,auStack_90);
    _swift_bridgeObjectRelease(puVar6);
    _swift_setDeallocating(puVar1);
    FUN_100043c00(puVar1 + 0x20);
    FUN_100029548(lVar9,FUN_10025ee04);
    puVar1 = &DAT_100550ec0;
    puVar6 = &DAT_100422eb0;
  }
  FUN_10002a29c(lVar7,puVar1,puVar6);
  return;
}

