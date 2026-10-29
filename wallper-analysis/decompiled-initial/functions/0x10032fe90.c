// rea decompile_all
// name: FUN_10032fe90
// address: 0x10032fe90
// body: available
// range: 0x10032fe90-0x10032ffc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10032fe90(MainActor *param_1)

{
  undefined *puVar1;
  TaskPriority TVar2;
  MainActor *this;
  MainActor *pMVar3;
  undefined8 *puVar4;
  long extraout_x8;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_f0 [192];
  
  puVar1 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  TVar2 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar2.unknown + -8) + 0x38))(auStack_f0 + -extraout_x8,1,1,TVar2.unknown);
  this = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_1005246d8;
  pMVar3 = param_1;
  FUN_100336150(param_1,auStack_f0);
  pMVar3 = Swift::MainActor::get_shared(this,pMVar3);
  puVar4 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  puVar1 = &DAT_10053b030;
  _swift_allocObject(&DAT_10053b030,0xe0,7);
  *(MainActor **)(puVar1 + 0x10) = pMVar3;
  *(undefined8 **)(puVar1 + 0x18) = puVar4;
  uVar5 = *(undefined8 *)(param_1 + 0x80);
  uVar7 = *(undefined8 *)(param_1 + 0x98);
  uVar6 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(puVar1 + 0xa8) = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(puVar1 + 0xa0) = uVar5;
  *(undefined8 *)(puVar1 + 0xb8) = uVar7;
  *(undefined8 *)(puVar1 + 0xb0) = uVar6;
  uVar5 = *(undefined8 *)(param_1 + 0xa0);
  uVar7 = *(undefined8 *)(param_1 + 0xb8);
  uVar6 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(puVar1 + 200) = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(puVar1 + 0xc0) = uVar5;
  *(undefined8 *)(puVar1 + 0xd8) = uVar7;
  *(undefined8 *)(puVar1 + 0xd0) = uVar6;
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  uVar7 = *(undefined8 *)(param_1 + 0x58);
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(puVar1 + 0x68) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(puVar1 + 0x60) = uVar5;
  *(undefined8 *)(puVar1 + 0x78) = uVar7;
  *(undefined8 *)(puVar1 + 0x70) = uVar6;
  uVar5 = *(undefined8 *)(param_1 + 0x60);
  uVar7 = *(undefined8 *)(param_1 + 0x78);
  uVar6 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(puVar1 + 0x88) = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(puVar1 + 0x80) = uVar5;
  *(undefined8 *)(puVar1 + 0x98) = uVar7;
  *(undefined8 *)(puVar1 + 0x90) = uVar6;
  uVar5 = *(undefined8 *)param_1;
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(puVar1 + 0x28) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(puVar1 + 0x20) = uVar5;
  *(undefined8 *)(puVar1 + 0x38) = uVar7;
  *(undefined8 *)(puVar1 + 0x30) = uVar6;
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(puVar1 + 0x48) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(puVar1 + 0x40) = uVar5;
  *(undefined8 *)(puVar1 + 0x58) = uVar7;
  *(undefined8 *)(puVar1 + 0x50) = uVar6;
  FUN_1001b1e74(0,0,auStack_f0 + -extraout_x8,&DAT_100431b38,puVar1);
  _swift_release();
  return;
}

