// rea decompile_all
// name: FUN_100199040
// address: 0x100199040
// body: available
// range: 0x100199040-0x1001991d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100199040(undefined8 param_1,MainActor *param_2,long param_3,undefined8 param_4)

{
  Notification NVar1;
  undefined *puVar2;
  TaskPriority TVar3;
  MainActor *this;
  MainActor *pMVar4;
  undefined8 *puVar5;
  long extraout_x8;
  ulong uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  local_68 = param_4;
  NVar1 = Foundation::Notification::typeMetadataAccessor();
  lVar10 = *(long *)(NVar1.unknown + -8);
  lVar9 = *(long *)(lVar10 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar8 = auStack_70 + -(lVar9 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar3.unknown + -8) + 0x38))((long)puVar8 - extraout_x8,1,1,TVar3.unknown);
  (**(code **)(lVar10 + 0x10))(puVar8,param_1,NVar1.unknown);
  this = Swift::MainActor::typeMetadataAccessor();
  puVar2 = PTR_typeMetadataAccessor_1005246d8;
  pMVar4 = param_2;
  _swift_retain();
  pMVar4 = Swift::MainActor::get_shared(this,pMVar4);
  puVar5 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar2,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  uVar6 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar7 = uVar6 + 0x28 & (uVar6 ^ 0xffffffffffffffff);
  _swift_allocObject(param_3,uVar7 + lVar9,uVar6 | 7);
  *(MainActor **)(param_3 + 0x10) = pMVar4;
  *(undefined8 **)(param_3 + 0x18) = puVar5;
  *(MainActor **)(param_3 + 0x20) = param_2;
  (**(code **)(lVar10 + 0x20))(param_3 + uVar7,puVar8,NVar1.unknown);
  FUN_1001b2110(0,0,(long)puVar8 - extraout_x8,local_68,param_3);
  _swift_release();
  return;
}

