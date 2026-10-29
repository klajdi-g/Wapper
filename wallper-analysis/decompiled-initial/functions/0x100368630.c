// rea decompile_all
// name: FUN_100368630
// address: 0x100368630
// body: available
// range: 0x100368630-0x100368953 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100368630(undefined8 param_1,long param_2,long param_3)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 local_110;
  undefined8 uStack_108;
  long local_100;
  long local_f8;
  undefined *local_e0;
  long lStack_d8;
  undefined1 auStack_c8 [104];
  
  puVar2 = &DAT_100550ec0;
  puVar7 = &DAT_100422eb0;
  FUN_100002f94();
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  FUN_1001d537c();
  lVar8 = *(long *)(lVar3 + -8);
  lVar4 = lVar3;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar8 + 0x40));
  lVar9 = ((long)&local_110 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_10026ac6c();
  lVar5 = 0;
  FUN_10025ee04();
  if (*(char *)(param_2 + *(int *)(lVar5 + 0x1c)) == '\0') {
    lVar5 = 0;
    FUN_100386f18();
    lVar5 = *(long *)(unaff_x20 + *(int *)(lVar5 + 0x14));
    if (lVar5 == 0) goto LAB_100368910;
    _swift_storeEnumTagMultiPayload(lVar9,lVar3,3);
    _swift_retain(lVar5);
    FUN_1001bf2d0(lVar4,puVar7);
    _swift_bridgeObjectRelease(puVar7);
    _swift_release(lVar5);
    FUN_100029548(lVar9,FUN_1001d537c);
  }
  else {
    lVar5 = 0;
    local_100 = (long)&local_110 - extraout_x8;
    FUN_1001d59ac();
    uVar10 = *(ulong *)(param_3 + *(int *)(lVar5 + 0x24));
    puVar2 = &DAT_100549eb0;
    local_f8 = param_3;
    FUN_100002f94(&DAT_100549eb0,&DAT_100426be0);
    puVar6 = puVar2;
    _swift_initStackObject();
    uStack_108 = 2;
    local_110 = 1;
    *(undefined8 *)(puVar6 + 0x18) = 2;
    *(undefined8 *)(puVar6 + 0x10) = 1;
    *(long *)(puVar6 + 0x20) = lVar4;
    *(undefined **)(puVar6 + 0x28) = puVar7;
    FUN_1001d998c(uVar10,puVar6);
    _swift_setDeallocating(puVar6);
    _swift_bridgeObjectRetain(puVar7);
    FUN_100043c00(puVar6 + 0x20);
    lVar5 = 0;
    FUN_100386f18();
    lVar5 = *(long *)(unaff_x20 + *(int *)(lVar5 + 0x14));
    if ((uVar10 & 1) == 0) {
      if (lVar5 == 0) goto LAB_100368910;
      _swift_retain(lVar5);
      FUN_1001b6858(lVar4,puVar7,local_f8);
      _swift_bridgeObjectRelease(puVar7);
      _swift_release(lVar5);
    }
    else {
      if (lVar5 == 0) {
LAB_100368910:
        FUN_1001b7378(0);
        FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
        SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100368954);
        (*pcVar1)();
      }
      _swift_initStackObject(puVar2,auStack_c8);
      lVar9 = local_100;
      *(undefined8 *)(puVar2 + 0x18) = uStack_108;
      *(undefined8 *)(puVar2 + 0x10) = local_110;
      *(long *)(puVar2 + 0x20) = lVar4;
      *(undefined **)(puVar2 + 0x28) = puVar7;
      FUN_100029504(local_f8,local_100,FUN_1001d537c);
      (**(code **)(lVar8 + 0x38))(lVar9,0,1,lVar3);
      _swift_retain(lVar5);
      puVar7 = puVar2;
      FUN_10020c98c();
      lStack_d8 = lVar9;
      local_e0 = puVar7;
      FUN_1001b9fc0();
      _swift_bridgeObjectRelease(puVar7);
      _swift_setDeallocating(puVar2);
      FUN_100043c00(puVar2 + 0x20);
      _swift_release(lVar5);
      FUN_10002a29c(lVar9,&DAT_100550ec0,&DAT_100422eb0);
    }
  }
  return;
}

