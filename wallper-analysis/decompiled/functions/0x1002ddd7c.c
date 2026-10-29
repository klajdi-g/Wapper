// rea decompile_all
// name: FUN_1002ddd7c
// address: 0x1002ddd7c
// body: available
// range: 0x1002ddd7c-0x1002ddf3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002ddd7c(undefined8 *param_1,undefined8 *param_2)

{
  MainActor *this;
  MainActor *pMVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  MainActor *pMVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  Binding<bool> local_d0 [2];
  undefined8 *local_c0;
  undefined8 *puStack_b8;
  undefined8 local_80;
  MainActor *pMStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  pMVar6 = (MainActor *)param_1[1];
  uVar4 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  uStack_58 = param_1[5];
  local_60 = param_1[4];
  local_80 = uVar4;
  pMStack_78 = pMVar6;
  this = Swift::MainActor::typeMetadataAccessor();
  puVar3 = PTR_typeMetadataAccessor_1005246d8;
  FUN_1002e141c(param_2,local_d0);
  pMVar1 = pMVar6;
  _swift_bridgeObjectRetain();
  pMVar1 = Swift::MainActor::get_shared(this,pMVar1);
  puVar2 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar3,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  puVar3 = &DAT_100538de0;
  _swift_allocObject(&DAT_100538de0,0x80,7);
  *(MainActor **)(puVar3 + 0x10) = pMVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  uVar5 = param_2[4];
  uVar8 = param_2[7];
  uVar7 = param_2[6];
  *(undefined8 *)(puVar3 + 0x48) = param_2[5];
  *(undefined8 *)(puVar3 + 0x40) = uVar5;
  *(undefined8 *)(puVar3 + 0x58) = uVar8;
  *(undefined8 *)(puVar3 + 0x50) = uVar7;
  uVar5 = param_2[8];
  *(undefined8 *)(puVar3 + 0x68) = param_2[9];
  *(undefined8 *)(puVar3 + 0x60) = uVar5;
  uVar8 = *param_2;
  uVar7 = param_2[3];
  uVar5 = param_2[2];
  *(undefined8 *)(puVar3 + 0x28) = param_2[1];
  *(undefined8 *)(puVar3 + 0x20) = uVar8;
  *(undefined8 *)(puVar3 + 0x38) = uVar7;
  *(undefined8 *)(puVar3 + 0x30) = uVar5;
  *(undefined8 *)(puVar3 + 0x70) = uVar4;
  *(MainActor **)(puVar3 + 0x78) = pMVar6;
  FUN_1002e141c(param_2,local_d0);
  pMVar1 = pMVar6;
  _swift_bridgeObjectRetain();
  pMVar1 = Swift::MainActor::get_shared(this,pMVar1);
  puVar3 = &DAT_100538e08;
  _swift_allocObject(&DAT_100538e08,0x80,7);
  *(MainActor **)(puVar3 + 0x10) = pMVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  uVar5 = param_2[4];
  uVar8 = param_2[7];
  uVar7 = param_2[6];
  *(undefined8 *)(puVar3 + 0x48) = param_2[5];
  *(undefined8 *)(puVar3 + 0x40) = uVar5;
  *(undefined8 *)(puVar3 + 0x58) = uVar8;
  *(undefined8 *)(puVar3 + 0x50) = uVar7;
  uVar5 = param_2[8];
  *(undefined8 *)(puVar3 + 0x68) = param_2[9];
  *(undefined8 *)(puVar3 + 0x60) = uVar5;
  uVar8 = *param_2;
  uVar7 = param_2[3];
  uVar5 = param_2[2];
  *(undefined8 *)(puVar3 + 0x28) = param_2[1];
  *(undefined8 *)(puVar3 + 0x20) = uVar8;
  *(undefined8 *)(puVar3 + 0x38) = uVar7;
  *(undefined8 *)(puVar3 + 0x30) = uVar5;
  *(undefined8 *)(puVar3 + 0x70) = uVar4;
  *(MainActor **)(puVar3 + 0x78) = pMVar6;
  SwiftUI::Binding::init();
  puStack_b8 = &local_80;
  local_c0 = param_2;
  FUN_100002f94(&DAT_10055ab90,&DAT_10042f2e8);
  FUN_1000087a0(&DAT_10055ab98,&DAT_10055ab90,&DAT_10042f2e8,
                PTR_SwiftUI__SwiftUI__HStack<undefined>_>SwiftUI__View_1005233f8);
  SwiftUI::Toggle::_init(local_d0[0]);
  return;
}

