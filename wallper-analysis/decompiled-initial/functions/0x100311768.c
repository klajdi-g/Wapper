// rea decompile_all
// name: FUN_100311768
// address: 0x100311768
// body: available
// range: 0x100311768-0x10031197f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100311768(MainActor *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  State SVar3;
  TaskPriority TVar4;
  MainActor *this;
  MainActor *pMVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  State local_1a0;
  undefined8 uStack_198;
  Task local_78;
  undefined8 local_70;
  undefined *puStack_68;
  
  puVar2 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = *(undefined **)(param_1 + 0xd8);
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  local_1a0.unknown = puVar2;
  uStack_198 = uVar1;
  local_70 = uVar1;
  puStack_68 = puVar2;
  FUN_1000087e4(&puStack_68,&local_78,&DAT_10055bd58,&DAT_100430ac0);
  FUN_1000087e4(&local_70,&local_78,&DAT_10055bd60,&DAT_100430ac8);
  SVar3.unknown = &DAT_10055bd68;
  FUN_100002f94(&DAT_10055bd68,&DAT_100430ad0);
  SwiftUI::State::get_wrappedValue(SVar3);
  if (local_78.unknown != (undefined *)0x0) {
    Swift::Task::cancel(local_78);
    _swift_release(local_78.unknown);
  }
  TVar4 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar4.unknown + -8) + 0x38))
            ((long)&local_1a0 - extraout_x8,1,1,TVar4.unknown);
  this = Swift::MainActor::typeMetadataAccessor();
  puVar7 = PTR_typeMetadataAccessor_1005246d8;
  pMVar5 = param_1;
  FUN_1003181f4(param_1,&local_1a0);
  pMVar5 = Swift::MainActor::get_shared(this,pMVar5);
  puVar6 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar7,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  puVar7 = &DAT_10053a440;
  _swift_allocObject(&DAT_10053a440,0x141,7);
  *(MainActor **)(puVar7 + 0x10) = pMVar5;
  *(undefined8 **)(puVar7 + 0x18) = puVar6;
  _memcpy(puVar7 + 0x20,param_1,0x121);
  puVar8 = (undefined *)0x0;
  FUN_1001b1e74(0,0,(long)&local_1a0 - extraout_x8,&DAT_100430ae0,puVar7);
  local_1a0.unknown = puVar2;
  uStack_198 = uVar1;
  local_78.unknown = puVar8;
  SwiftUI::State::set_wrappedValue(&local_1a0,&local_78,SVar3.unknown);
  FUN_10002a29c(&puStack_68,&DAT_10055bd58,&DAT_100430ac0);
  FUN_10002a29c(&local_70,&DAT_10055bd60,&DAT_100430ac8);
  return;
}

