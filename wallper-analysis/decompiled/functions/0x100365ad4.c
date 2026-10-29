// rea decompile_all
// name: FUN_100365ad4
// address: 0x100365ad4
// body: available
// range: 0x100365ad4-0x100365c8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100365ad4(undefined8 param_1,undefined1 *param_2,MainActor *param_3)

{
  undefined1 uVar1;
  long lVar2;
  MainActor *pMVar3;
  MainActor *pMVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined1 local_80;
  Binding<bool> local_78;
  
  lVar2 = 0;
  local_98 = param_1;
  FUN_100386f18();
  lVar9 = *(long *)(lVar2 + -8);
  lVar2 = *(long *)(lVar9 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar8 = auStack_a0 + -(lVar2 + 0xfU & 0xfffffffffffffff0);
  uVar1 = *param_2;
  FUN_100029504(param_3,puVar8);
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar6 = PTR_typeMetadataAccessor_1005246d8;
  pMVar4 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar5 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar6,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  uVar10 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar7 = uVar10 + 0x20 & (uVar10 ^ 0xffffffffffffffff);
  lVar2 = uVar7 + lVar2;
  puVar6 = &DAT_10053c0c0;
  _swift_allocObject(&DAT_10053c0c0,lVar2 + 1,uVar10 | 7);
  *(MainActor **)(puVar6 + 0x10) = pMVar4;
  *(undefined8 **)(puVar6 + 0x18) = puVar5;
  FUN_100007e64(puVar8,puVar6 + uVar7,FUN_100386f18);
  puVar6[lVar2] = uVar1;
  FUN_100029504(param_3,puVar8,FUN_100386f18);
  pMVar3 = Swift::MainActor::get_shared(pMVar3,param_3);
  puVar6 = &DAT_10053c0e8;
  _swift_allocObject(&DAT_10053c0e8,lVar2 + 1,uVar10 | 7);
  *(MainActor **)(puVar6 + 0x10) = pMVar3;
  *(undefined8 **)(puVar6 + 0x18) = puVar5;
  FUN_100007e64(puVar8,puVar6 + uVar7,FUN_100386f18);
  puVar6[lVar2] = uVar1;
  SwiftUI::Binding::init();
  local_80 = uVar1;
  SwiftUI::Toggle::_init(local_78);
  return;
}

