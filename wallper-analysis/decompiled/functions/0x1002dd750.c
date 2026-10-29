// rea decompile_all
// name: FUN_1002dd750
// address: 0x1002dd750
// body: available
// range: 0x1002dd750-0x1002ddd7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002dd9d4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1002dd750(long param_1,MainActor *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  Binding<bool> isOn;
  undefined *puVar5;
  undefined *puVar6;
  State SVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  MainActor *this;
  MainActor *pMVar12;
  undefined8 *puVar13;
  long extraout_x8;
  long lVar14;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  code *pcVar15;
  code *pcVar16;
  code *pcVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 auStack_140 [2];
  undefined *local_130;
  long local_128;
  undefined *local_120;
  long local_118;
  long local_110;
  long local_108;
  undefined *local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  undefined *local_d8;
  long local_d0;
  long local_c8;
  Binding<bool> local_c0;
  undefined8 uStack_b8;
  MainActor *local_b0;
  
  puVar5 = &DAT_10055ab68;
  local_f8 = param_1;
  FUN_100002f94(&DAT_10055ab68,&DAT_10042f2a8);
  local_108 = *(long *)(puVar5 + -8);
  local_100 = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_108 + 0x40));
  lVar14 = (long)&local_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_110 = lVar14;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = lVar14 - extraout_x12;
  puVar5 = &DAT_10055ab70;
  local_d0 = lVar14;
  FUN_100002f94(&DAT_10055ab70,&DAT_10042f2b0);
  local_c8 = *(long *)(puVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_c8 + 0x40));
  lVar14 = lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_118 = lVar14;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = lVar14 - extraout_x12_00;
  puVar6 = &DAT_10055ab78;
  local_f0 = lVar14;
  FUN_100002f94(&DAT_10055ab78,&DAT_10042f2b8);
  local_e8 = *(long *)(puVar6 + -8);
  local_d8 = puVar6;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_e8 + 0x40));
  lVar14 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_e0 = lVar14;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = lVar14 - extraout_x12_01;
  uStack_b8 = *(undefined8 *)(param_2 + 0x28);
  local_c0.unknown = *(undefined **)(param_2 + 0x20);
  SVar7.unknown = &DAT_10055ab18;
  FUN_100002f94(&DAT_10055ab18,&DAT_10042f178);
  SwiftUI::State::get_wrappedValue(SVar7);
  puVar6 = &DAT_10042f2c0;
  _swift_getKeyPath(&DAT_10042f2c0);
  puVar8 = &DAT_100538cf0;
  _swift_allocObject(&DAT_100538cf0,0x60,7);
  uVar18 = *(undefined8 *)(param_2 + 0x20);
  uVar20 = *(undefined8 *)(param_2 + 0x38);
  uVar19 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(puVar8 + 0x38) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(puVar8 + 0x30) = uVar18;
  *(undefined8 *)(puVar8 + 0x48) = uVar20;
  *(undefined8 *)(puVar8 + 0x40) = uVar19;
  uVar18 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(puVar8 + 0x58) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(puVar8 + 0x50) = uVar18;
  uVar20 = *(undefined8 *)param_2;
  uVar19 = *(undefined8 *)(param_2 + 0x18);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(puVar8 + 0x18) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(puVar8 + 0x10) = uVar20;
  *(undefined8 *)(puVar8 + 0x28) = uVar19;
  *(undefined8 *)(puVar8 + 0x20) = uVar18;
  FUN_1002e141c(param_2,&local_c0);
  puVar9 = &DAT_10055aad0;
  FUN_100002f94(&DAT_10055aad0,&DAT_10042f070);
  puVar10 = &DAT_10055ab80;
  FUN_1000087a0(&DAT_10055ab80,&DAT_10055aad0,&DAT_10042f070,
                PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100523b60);
  puVar11 = &DAT_10055ab88;
  FUN_1000087a0(&DAT_10055ab88,&DAT_10055ab70,&DAT_10042f2b0,
                PTR_SwiftUI__SwiftUI__Toggle<undefined>_>SwiftUI__View_1005234a0);
  local_120 = puVar11;
  *(undefined **)(lVar14 + -0x10) = puVar11;
  local_128 = lVar14;
  (extension_SwiftUI)::SwiftUI::ForEach::_init
            (lVar14,puVar11,puVar6,FUN_1002e16ac,puVar8,puVar9,puVar5,puVar10,
             PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100523aa8);
  this = Swift::MainActor::typeMetadataAccessor();
  puVar6 = PTR_typeMetadataAccessor_1005246d8;
  pMVar12 = param_2;
  FUN_1002e141c(param_2,&local_c0);
  pMVar12 = Swift::MainActor::get_shared(this,pMVar12);
  puVar13 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar6,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  puVar6 = &DAT_100538d18;
  _swift_allocObject(&DAT_100538d18,0x80,7);
  *(MainActor **)(puVar6 + 0x10) = pMVar12;
  *(undefined8 **)(puVar6 + 0x18) = puVar13;
  uVar18 = *(undefined8 *)(param_2 + 0x20);
  uVar20 = *(undefined8 *)(param_2 + 0x38);
  uVar19 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(puVar6 + 0x48) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(puVar6 + 0x40) = uVar18;
  *(undefined8 *)(puVar6 + 0x58) = uVar20;
  *(undefined8 *)(puVar6 + 0x50) = uVar19;
  uVar18 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(puVar6 + 0x68) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(puVar6 + 0x60) = uVar18;
  uVar20 = *(undefined8 *)param_2;
  uVar19 = *(undefined8 *)(param_2 + 0x18);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(puVar6 + 0x28) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(puVar6 + 0x20) = uVar20;
  *(undefined8 *)(puVar6 + 0x38) = uVar19;
  *(undefined8 *)(puVar6 + 0x30) = uVar18;
  *(undefined8 *)(puVar6 + 0x70) = 0x726573776f7262;
  *(undefined8 *)(puVar6 + 0x78) = 0xe700000000000000;
  pMVar12 = param_2;
  FUN_1002e141c(param_2,&local_c0);
  pMVar12 = Swift::MainActor::get_shared(this,pMVar12);
  puVar6 = &DAT_100538d40;
  _swift_allocObject(&DAT_100538d40,0x80,7);
  *(MainActor **)(puVar6 + 0x10) = pMVar12;
  *(undefined8 **)(puVar6 + 0x18) = puVar13;
  uVar18 = *(undefined8 *)(param_2 + 0x20);
  uVar20 = *(undefined8 *)(param_2 + 0x38);
  uVar19 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(puVar6 + 0x48) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(puVar6 + 0x40) = uVar18;
  *(undefined8 *)(puVar6 + 0x58) = uVar20;
  *(undefined8 *)(puVar6 + 0x50) = uVar19;
  uVar18 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(puVar6 + 0x68) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(puVar6 + 0x60) = uVar18;
  uVar20 = *(undefined8 *)param_2;
  uVar19 = *(undefined8 *)(param_2 + 0x18);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(puVar6 + 0x28) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(puVar6 + 0x20) = uVar20;
  *(undefined8 *)(puVar6 + 0x38) = uVar19;
  *(undefined8 *)(puVar6 + 0x30) = uVar18;
  *(undefined8 *)(puVar6 + 0x70) = 0x726573776f7262;
  *(undefined8 *)(puVar6 + 0x78) = 0xe700000000000000;
  SwiftUI::Binding::init();
  isOn.unknown = local_c0.unknown;
  local_b0 = param_2;
  FUN_100002f94(&DAT_10055ab90,&DAT_10042f2e8);
  FUN_1000087a0(&DAT_10055ab98,&DAT_10055ab90,&DAT_10042f2e8,
                PTR_SwiftUI__SwiftUI__HStack<undefined>_>SwiftUI__View_1005233f8);
  SwiftUI::Toggle::_init(isOn);
  uStack_b8 = *(undefined8 *)(param_2 + 0x38);
  local_c0.unknown = *(undefined **)(param_2 + 0x30);
  SVar7.unknown = &DAT_10055ab28;
  FUN_100002f94(&DAT_10055ab28,&DAT_10042f1d0);
  SwiftUI::State::get_wrappedValue(SVar7);
  puVar6 = &DAT_100538d68;
  _swift_allocObject(&DAT_100538d68,0x60,7);
  uVar18 = *(undefined8 *)(param_2 + 0x20);
  uVar20 = *(undefined8 *)(param_2 + 0x38);
  uVar19 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(puVar6 + 0x38) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(puVar6 + 0x30) = uVar18;
  *(undefined8 *)(puVar6 + 0x48) = uVar20;
  *(undefined8 *)(puVar6 + 0x40) = uVar19;
  uVar18 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(puVar6 + 0x58) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(puVar6 + 0x50) = uVar18;
  uVar20 = *(undefined8 *)param_2;
  uVar19 = *(undefined8 *)(param_2 + 0x18);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(puVar6 + 0x18) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(puVar6 + 0x10) = uVar20;
  *(undefined8 *)(puVar6 + 0x28) = uVar19;
  *(undefined8 *)(puVar6 + 0x20) = uVar18;
  FUN_1002e141c(param_2,&local_c0);
  puVar8 = &DAT_10055aad8;
  FUN_100002f94(&DAT_10055aad8,&DAT_10042f078);
  puVar9 = &DAT_10055aba0;
  FUN_1000087a0(&DAT_10055aba0,&DAT_10055aad8,&DAT_10042f078,
                PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100523b60);
  puVar10 = puVar9;
  FUN_1002e1754();
  *(undefined **)(lVar14 + -0x10) = puVar10;
  lVar3 = local_d0;
  local_130 = puVar5;
  (extension_SwiftUI)::SwiftUI::ForEach::_init
            (local_d0,puVar10,FUN_1002e174c,puVar6,puVar8,
             PTR___type_metadata_for_Swift_String_100523a98,puVar5,puVar9,local_120);
  puVar6 = local_d8;
  lVar4 = local_e0;
  pcVar15 = *(code **)(local_e8 + 0x10);
  (*pcVar15)(local_e0,lVar14,local_d8);
  lVar14 = local_118;
  pcVar17 = *(code **)(local_c8 + 0x10);
  (*pcVar17)(local_118,local_f0,puVar5);
  puVar8 = local_100;
  lVar2 = local_108;
  lVar1 = local_110;
  pcVar16 = *(code **)(local_108 + 0x10);
  (*pcVar16)(local_110,lVar3,local_100);
  lVar3 = local_f8;
  (*pcVar15)(local_f8,lVar4,puVar6);
  puVar5 = &DAT_10055abb0;
  FUN_100002f94(&DAT_10055abb0,&DAT_10042f2f0);
  puVar6 = local_130;
  (*pcVar17)(lVar3 + *(int *)(puVar5 + 0x30),lVar14,local_130);
  (*pcVar16)(lVar3 + *(int *)(puVar5 + 0x40),lVar1,puVar8);
  pcVar15 = *(code **)(lVar2 + 8);
  (*pcVar15)(local_d0,puVar8);
  pcVar16 = *(code **)(local_c8 + 8);
  (*pcVar16)(local_f0,puVar6);
  puVar5 = local_d8;
  pcVar17 = *(code **)(local_e8 + 8);
  (*pcVar17)(local_128,local_d8);
  (*pcVar15)(lVar1,puVar8);
  (*pcVar16)(lVar14,puVar6);
  (*pcVar17)(local_e0,puVar5);
  return;
}

