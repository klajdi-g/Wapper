// rea decompile_all
// name: FUN_10000b768
// address: 0x10000b768
// body: available
// range: 0x10000b768-0x10000bcdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010000ba50 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10000b768(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  char cVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  LocalizedStringKey LVar13;
  long lVar14;
  long extraout_x8;
  long lVar15;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  void *unaff_x20;
  long lVar16;
  long lVar17;
  code *pcVar18;
  code *pcVar19;
  String stringLiteral;
  undefined8 auStack_1f0 [2];
  undefined1 auStack_1e0 [8];
  undefined *local_1d8;
  long local_1d0;
  undefined *local_1c8;
  long local_1c0;
  undefined *local_1b8;
  long local_1b0;
  undefined1 *local_1a8;
  long local_1a0;
  long local_198;
  long local_190;
  long local_188;
  undefined *local_180;
  undefined *local_70;
  
  puVar7 = &DAT_10054b518;
  local_1b0 = param_1;
  FUN_100002f94(&DAT_10054b518,&DAT_10042e600);
  local_1d8 = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar7 + -8) + 0x40));
  local_1a8 = auStack_1e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar15 = (long)(auStack_1e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  local_1d0 = lVar15;
  local_1b8 = (undefined *)SwiftUI::Divider::typeMetadataAccessor();
  local_188 = *(long *)(local_1b8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_188 + 0x40));
  lVar15 = lVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_1c0 = lVar15;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar15 = lVar15 - extraout_x12_00;
  puVar7 = &DAT_10054b520;
  local_1a0 = lVar15;
  FUN_100002f94(&DAT_10054b520,&DAT_10041c8f0);
  local_198 = *(long *)(puVar7 + -8);
  local_1c8 = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_198 + 0x40));
  lVar15 = lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_190 = lVar15;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar15 = lVar15 - extraout_x12_01;
  lVar17 = 0;
  local_70 = PTR___swiftEmptyArrayStorage_100524190;
  do {
    cVar3 = (&DAT_100557540)[lVar17];
    if (cVar3 != '\0') {
      puVar7 = local_70;
      _swift_isUniquelyReferenced_nonNull_native();
      local_180 = local_70;
      if (((ulong)puVar7 & 1) == 0) {
        FUN_1001c5c88(0,*(long *)(local_70 + 0x10) + 1,1);
      }
      uVar2 = *(ulong *)(local_180 + 0x10);
      if (*(ulong *)(local_180 + 0x18) >> 1 <= uVar2) {
        FUN_1001c5c88(1 < *(ulong *)(local_180 + 0x18),uVar2 + 1,1);
      }
      *(ulong *)(local_180 + 0x10) = uVar2 + 1;
      local_180[uVar2 + 0x20] = cVar3;
      local_70 = local_180;
    }
    lVar17 = lVar17 + 1;
  } while (lVar17 != 6);
  puVar7 = &DAT_100525a50;
  _swift_allocObject(&DAT_100525a50,0x120,7);
  _memcpy(puVar7 + 0x10,unaff_x20,0x110);
  FUN_100027a7c();
  puVar8 = &DAT_10054b528;
  FUN_100002f94(&DAT_10054b528,&DAT_10042b340);
  puVar9 = &DAT_10054b530;
  FUN_100002f94(&DAT_10054b530,&DAT_10041c900);
  puVar10 = &DAT_10054b538;
  FUN_1000087a0(&DAT_10054b538,&DAT_10054b528,&DAT_10042b340,
                PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100523b60);
  puVar11 = &DAT_10054b540;
  FUN_1000087a0(&DAT_10054b540,&DAT_10054b530,&DAT_10041c900,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
  puVar12 = puVar11;
  FUN_10002a794();
  *(undefined **)(lVar15 + -0x10) = puVar12;
  (extension_SwiftUI)::SwiftUI::ForEach::_init
            (lVar15,puVar12,FUN_10002a78c,puVar7,puVar8,PTR___type_metadata_for_Swift_Int_100523bd8,
             puVar9,puVar10,puVar11);
  lVar5 = local_1a0;
  SwiftUI::Divider::init();
  stringLiteral.bridgeObject = (void *)0xe300000000000000;
  stringLiteral.str = (char *)0x66664f;
  LVar13 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  puVar7 = &DAT_100525a78;
  _swift_allocObject(&DAT_100525a78,0x120,7);
  _memcpy(puVar7 + 0x10,unaff_x20,0x110);
  FUN_100027a7c();
  lVar17 = local_1d0;
  (extension_SwiftUI)::SwiftUI::Button::_init(LVar13);
  lVar16 = *(long *)((long)unaff_x20 + 0x28);
  if (lVar16 != 0) {
    lVar14 = lVar16;
    _swift_retain();
    FUN_1002159e0();
    _swift_release(lVar16);
    puVar7 = &DAT_10041bc30;
    _swift_getKeyPath();
    puVar8 = &DAT_100525aa0;
    _swift_allocObject(&DAT_100525aa0,0x11,7);
    lVar6 = local_190;
    puVar9 = local_1c8;
    puVar8[0x10] = ((byte)lVar14 ^ 0xff) & 1;
    puVar1 = (undefined8 *)(lVar17 + *(int *)(local_1d8 + 0x24));
    *puVar1 = puVar7;
    puVar1[1] = thunk_FUN_100026d68;
    puVar1[2] = puVar8;
    pcVar18 = *(code **)(local_198 + 0x10);
    (*pcVar18)(local_190,lVar15,local_1c8);
    puVar8 = local_1b8;
    lVar16 = local_1c0;
    pcVar19 = *(code **)(local_188 + 0x10);
    local_1d8 = (undefined *)lVar15;
    (*pcVar19)(local_1c0,lVar5,local_1b8);
    puVar4 = local_1a8;
    FUN_1000087e4(lVar17,local_1a8,&DAT_10054b518,&DAT_10042e600);
    lVar15 = local_1b0;
    (*pcVar18)(local_1b0,lVar6,puVar9);
    puVar7 = &DAT_10054b550;
    FUN_100002f94(&DAT_10054b550,&DAT_10041c908);
    (*pcVar19)(lVar15 + *(int *)(puVar7 + 0x30),lVar16,puVar8);
    FUN_1000087e4(puVar4,lVar15 + *(int *)(puVar7 + 0x40),&DAT_10054b518,&DAT_10042e600);
    FUN_10002a29c(lVar17,&DAT_10054b518,&DAT_10042e600);
    pcVar18 = *(code **)(local_188 + 8);
    (*pcVar18)(local_1a0,puVar8);
    pcVar19 = *(code **)(local_198 + 8);
    (*pcVar19)(local_1d8,puVar9);
    FUN_10002a29c(puVar4,&DAT_10054b518,&DAT_10042e600);
    (*pcVar18)(lVar16,puVar8);
    (*pcVar19)(local_190,puVar9);
    return;
  }
  FUN_100226ac0(0);
  FUN_1000036d0(&DAT_10054aa48,FUN_100226ac0,&TargetProtocolConformanceDescriptor_10042b420);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar18 = (code *)SoftwareBreakpoint(1,0x10000bcdc);
  (*pcVar18)();
}

