// rea decompile_all
// name: FUN_100334a10
// address: 0x100334a10
// body: available
// range: 0x100334a10-0x100334d13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100334a10(void)

{
  undefined *puVar1;
  CharacterSet CVar2;
  CharacterSet CVar3;
  State SVar4;
  __int64 _Var5;
  TaskPriority TVar6;
  MainActor *this;
  MainActor *pMVar7;
  undefined8 *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  MainActor *unaff_x20;
  long lVar9;
  CharacterSet in;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  String SVar14;
  undefined8 auStack_170 [4];
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  puVar1 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)&local_150 - extraout_x8;
  CVar2 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar10 = *(long *)(CVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar10 + 0x40));
  in.unknown = (undefined *)(lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  uStack_148 = *(undefined8 *)(unaff_x20 + 0x48);
  local_150 = *(undefined8 *)(unaff_x20 + 0x40);
  local_140 = *(undefined8 *)(unaff_x20 + 0x50);
  CVar3.unknown = &DAT_10054dd08;
  FUN_100002f94(&DAT_10054dd08,&DAT_10041ea50);
  SVar4.unknown = CVar3.unknown;
  SwiftUI::State::get_wrappedValue((State)CVar3.unknown);
  uVar11 = uStack_70;
  local_150 = local_78;
  uStack_148 = uStack_70;
  local_78 = 0x2d;
  uStack_70 = 0xe100000000000000;
  local_88 = 0;
  uStack_80 = 0xe000000000000000;
  FUN_100026df4();
  *(undefined **)(in.unknown + -0x10) = SVar4.unknown;
  *(undefined **)(in.unknown + -8) = SVar4.unknown;
  *(undefined **)(in.unknown + -0x20) = PTR___type_metadata_for_Swift_String_100523a98;
  *(undefined **)(in.unknown + -0x18) = SVar4.unknown;
  SVar14 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                     (&local_78,&local_88,0,0,0,1,PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98);
  _swift_bridgeObjectRelease(uVar11);
  _Var5 = Swift::String::get_count(SVar14);
  _swift_bridgeObjectRelease(SVar14.bridgeObject);
  if (_Var5 == 0x10) {
    uStack_148 = *(undefined8 *)(unaff_x20 + 0x48);
    local_150 = *(undefined8 *)(unaff_x20 + 0x40);
    local_140 = *(undefined8 *)(unaff_x20 + 0x50);
    SwiftUI::State::get_wrappedValue((State)CVar3.unknown);
    uVar11 = uStack_70;
    local_150 = local_78;
    uStack_148 = uStack_70;
    Foundation::CharacterSet::get_whitespacesAndNewlines(CVar3);
    SVar14 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
    (**(code **)(lVar10 + 8))(in.unknown,CVar2.unknown);
    _swift_bridgeObjectRelease(uVar11);
    TVar6 = Swift::TaskPriority::typeMetadataAccessor();
    (**(code **)(*(long *)(TVar6.unknown + -8) + 0x38))(lVar9,1,1,TVar6.unknown);
    this = Swift::MainActor::typeMetadataAccessor();
    puVar1 = PTR_typeMetadataAccessor_1005246d8;
    pMVar7 = unaff_x20;
    FUN_100336150();
    pMVar7 = Swift::MainActor::get_shared(this,pMVar7);
    puVar8 = &DAT_100558b80;
    FUN_1000036d0(&DAT_100558b80,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
    puVar1 = &DAT_10053b148;
    _swift_allocObject(&DAT_10053b148,0xf0,7);
    *(MainActor **)(puVar1 + 0x10) = pMVar7;
    *(undefined8 **)(puVar1 + 0x18) = puVar8;
    uVar11 = *(undefined8 *)(unaff_x20 + 0x80);
    uVar13 = *(undefined8 *)(unaff_x20 + 0x98);
    uVar12 = *(undefined8 *)(unaff_x20 + 0x90);
    *(undefined8 *)(puVar1 + 0xa8) = *(undefined8 *)(unaff_x20 + 0x88);
    *(undefined8 *)(puVar1 + 0xa0) = uVar11;
    *(undefined8 *)(puVar1 + 0xb8) = uVar13;
    *(undefined8 *)(puVar1 + 0xb0) = uVar12;
    uVar11 = *(undefined8 *)(unaff_x20 + 0xa0);
    uVar13 = *(undefined8 *)(unaff_x20 + 0xb8);
    uVar12 = *(undefined8 *)(unaff_x20 + 0xb0);
    *(undefined8 *)(puVar1 + 200) = *(undefined8 *)(unaff_x20 + 0xa8);
    *(undefined8 *)(puVar1 + 0xc0) = uVar11;
    *(undefined8 *)(puVar1 + 0xd8) = uVar13;
    *(undefined8 *)(puVar1 + 0xd0) = uVar12;
    uVar11 = *(undefined8 *)(unaff_x20 + 0x40);
    uVar13 = *(undefined8 *)(unaff_x20 + 0x58);
    uVar12 = *(undefined8 *)(unaff_x20 + 0x50);
    *(undefined8 *)(puVar1 + 0x68) = *(undefined8 *)(unaff_x20 + 0x48);
    *(undefined8 *)(puVar1 + 0x60) = uVar11;
    *(undefined8 *)(puVar1 + 0x78) = uVar13;
    *(undefined8 *)(puVar1 + 0x70) = uVar12;
    uVar11 = *(undefined8 *)(unaff_x20 + 0x60);
    uVar13 = *(undefined8 *)(unaff_x20 + 0x78);
    uVar12 = *(undefined8 *)(unaff_x20 + 0x70);
    *(undefined8 *)(puVar1 + 0x88) = *(undefined8 *)(unaff_x20 + 0x68);
    *(undefined8 *)(puVar1 + 0x80) = uVar11;
    *(undefined8 *)(puVar1 + 0x98) = uVar13;
    *(undefined8 *)(puVar1 + 0x90) = uVar12;
    uVar11 = *(undefined8 *)unaff_x20;
    uVar13 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar12 = *(undefined8 *)(unaff_x20 + 0x10);
    *(undefined8 *)(puVar1 + 0x28) = *(undefined8 *)(unaff_x20 + 8);
    *(undefined8 *)(puVar1 + 0x20) = uVar11;
    *(undefined8 *)(puVar1 + 0x38) = uVar13;
    *(undefined8 *)(puVar1 + 0x30) = uVar12;
    uVar11 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar13 = *(undefined8 *)(unaff_x20 + 0x38);
    uVar12 = *(undefined8 *)(unaff_x20 + 0x30);
    *(undefined8 *)(puVar1 + 0x48) = *(undefined8 *)(unaff_x20 + 0x28);
    *(undefined8 *)(puVar1 + 0x40) = uVar11;
    *(undefined8 *)(puVar1 + 0x58) = uVar13;
    *(undefined8 *)(puVar1 + 0x50) = uVar12;
    *(String *)(puVar1 + 0xe0) = SVar14;
    FUN_1001b1e74(0,0,lVar9,&DAT_100431fd8,puVar1);
    _swift_release();
  }
  else {
    FUN_10032da84(1,0xd000000000000021,0x80000001004e64f0);
    FUN_100335414();
  }
  return;
}

