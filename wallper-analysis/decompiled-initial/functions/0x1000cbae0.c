// rea decompile_all
// name: FUN_1000cbae0
// address: 0x1000cbae0
// body: available
// range: 0x1000cbae0-0x1000cbdef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000cbae0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  MainActor *pMVar5;
  MainActor *pMVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  long extraout_x12;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auStack_110 [8];
  ulong local_108;
  undefined8 local_100;
  undefined1 *local_f8;
  undefined8 local_f0;
  long local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined1 auStack_d0 [16];
  undefined8 *local_c0;
  undefined8 uStack_b8;
  Binding<bool> local_a8;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar4 = 0;
  local_100 = param_2;
  local_f0 = param_4;
  local_d8 = param_1;
  FUN_10025ee04();
  local_e8 = *(long *)(lVar4 + -8);
  local_e0 = *(long *)(local_e8 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar4 = 0;
  local_f8 = auStack_110 + -(extraout_x12 + 0xfU & 0xfffffffffffffff0);
  FUN_1001d59ac();
  lVar9 = *(long *)(lVar4 + -8);
  lVar4 = *(long *)(lVar9 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = (long)(auStack_110 + -(extraout_x12 + 0xfU & 0xfffffffffffffff0)) -
           (lVar4 + 0xfU & 0xfffffffffffffff0);
  FUN_100029504(param_2,lVar12);
  uStack_78 = param_3[1];
  uStack_80 = *param_3;
  uStack_88 = param_3[4];
  local_90 = param_3[3];
  pMVar5 = Swift::MainActor::typeMetadataAccessor();
  puVar8 = PTR_typeMetadataAccessor_1005246d8;
  FUN_100043d74(&uStack_80,auStack_d0);
  pMVar6 = (MainActor *)&local_90;
  FUN_1000087e4(pMVar6,auStack_d0,&DAT_1005511f8,&DAT_100422ea0);
  pMVar6 = Swift::MainActor::get_shared(pMVar5,pMVar6);
  puVar7 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar8,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  uVar10 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar11 = uVar10 + 0x20 & (uVar10 ^ 0xffffffffffffffff);
  local_108 = uVar10 | 7;
  uVar13 = lVar4 + uVar11 + 7 & 0xfffffffffffffff8;
  puVar8 = &DAT_100529990;
  _swift_allocObject(&DAT_100529990,uVar13 + 0x28);
  *(MainActor **)(puVar8 + 0x10) = pMVar6;
  *(undefined8 **)(puVar8 + 0x18) = puVar7;
  FUN_100007e64(lVar12,puVar8 + uVar11,FUN_1001d59ac);
  uVar2 = local_100;
  puVar1 = (undefined8 *)(puVar8 + uVar13);
  uVar14 = *param_3;
  uVar16 = param_3[3];
  uVar15 = param_3[2];
  puVar1[1] = param_3[1];
  *puVar1 = uVar14;
  puVar1[3] = uVar16;
  puVar1[2] = uVar15;
  puVar1[4] = param_3[4];
  FUN_100029504(local_100,lVar12,FUN_1001d59ac);
  puVar3 = local_f8;
  FUN_100029504(local_f0,local_f8,FUN_10025ee04);
  FUN_100043d74(&uStack_80,auStack_d0);
  pMVar6 = (MainActor *)&local_90;
  FUN_1000087e4(pMVar6,auStack_d0,&DAT_1005511f8,&DAT_100422ea0);
  pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar6);
  uVar13 = uVar10 + 0x48 & (uVar10 ^ 0xffffffffffffffff);
  uVar10 = (ulong)*(byte *)(local_e8 + 0x50);
  uVar11 = uVar13 + lVar4 + uVar10 & (uVar10 ^ 0xffffffffffffffff);
  puVar8 = &DAT_1005299b8;
  _swift_allocObject(&DAT_1005299b8,uVar11 + local_e0,local_108 | uVar10);
  *(MainActor **)(puVar8 + 0x10) = pMVar5;
  *(undefined8 **)(puVar8 + 0x18) = puVar7;
  uVar14 = *param_3;
  uVar16 = param_3[3];
  uVar15 = param_3[2];
  *(undefined8 *)(puVar8 + 0x28) = param_3[1];
  *(undefined8 *)(puVar8 + 0x20) = uVar14;
  *(undefined8 *)(puVar8 + 0x38) = uVar16;
  *(undefined8 *)(puVar8 + 0x30) = uVar15;
  *(undefined8 *)(puVar8 + 0x40) = param_3[4];
  FUN_100007e64(lVar12,puVar8 + uVar13,FUN_1001d59ac);
  FUN_100007e64(puVar3,puVar8 + uVar11,FUN_10025ee04);
  SwiftUI::Binding::init();
  uStack_b8 = uVar2;
  local_c0 = param_3;
  FUN_100002f94(&DAT_10054b570,&DAT_100433140);
  FUN_1000087a0(&DAT_10054b568,&DAT_10054b570,&DAT_100433140,
                PTR_SwiftUI__SwiftUI__Label<undefined,undefined>_>SwiftUI__View_100523358);
  SwiftUI::Toggle::_init(local_a8);
  return;
}

