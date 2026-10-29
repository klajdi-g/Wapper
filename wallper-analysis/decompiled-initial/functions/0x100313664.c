// rea decompile_all
// name: FUN_100313664
// address: 0x100313664
// body: available
// range: 0x100313664-0x100313997 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100313664(long *param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,long param_8,ulong param_9)

{
  code *pcVar1;
  State SVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  __ContiguousArrayStorageBase *p_Var6;
  Set _all;
  EdgeInsets EVar7;
  Set _all_00;
  long lVar8;
  ulong uVar9;
  Set unaff_x20;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_248 [72];
  undefined8 local_200;
  code *pcStack_1f8;
  undefined *local_1f0;
  undefined1 local_1e8;
  long local_1e0;
  long lStack_1d8;
  long local_1d0;
  long lStack_1c8;
  undefined1 local_1c0;
  long local_d0;
  code *pcStack_c8;
  undefined *local_c0;
  undefined1 local_b8;
  undefined7 uStack_b7;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  undefined1 local_90;
  
  pcStack_1f8 = *(code **)(unaff_x20.unknown + 0xc0);
  local_200 = *(undefined8 *)(unaff_x20.unknown + 0xb8);
  SVar2.unknown = &DAT_10055bd70;
  FUN_100002f94(&DAT_10055bd70,&DAT_100430af0);
  SwiftUI::State::get_wrappedValue(SVar2);
  puVar10 = (undefined *)(*(long *)(local_d0 + 0x10) + 1U >> 1);
  puVar3 = puVar10;
  lVar11 = local_d0;
  FUN_1001b5954(puVar10,local_d0);
  if ((param_9 & 1) == 0) {
    _swift_bridgeObjectRetain(local_d0);
LAB_1003136f4:
    puVar4 = puVar3;
    FUN_10031b558(puVar3,lVar11);
    lVar8 = param_8;
    uVar9 = param_9;
LAB_100313790:
    _swift_unknownObjectRelease(puVar3);
    puVar5 = puVar4;
  }
  else {
    lVar8 = param_8;
    uVar9 = param_9;
    p_Var6 = Swift::__ContiguousArrayStorageBase::typeMetadataAccessor();
    _swift_unknownObjectRetain_n(puVar3,2);
    _swift_bridgeObjectRetain(local_d0);
    puVar5 = puVar3;
    _swift_dynamicCastClass(puVar3,p_Var6);
    if (puVar5 == (undefined *)0x0) {
      _swift_unknownObjectRelease(puVar3);
      puVar5 = PTR___swiftEmptyArrayStorage_100524190;
    }
    lVar12 = *(long *)(puVar5 + 0x10);
    _swift_release();
    if (SBORROW8(param_9 >> 1,param_8)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100313978);
      (*pcVar1)();
    }
    if (lVar12 != (param_9 >> 1) - param_8) {
      _swift_unknownObjectRelease();
      goto LAB_1003136f4;
    }
    puVar5 = puVar3;
    _swift_dynamicCastClass(puVar3,p_Var6);
    _swift_unknownObjectRelease(puVar3);
    puVar4 = PTR___swiftEmptyArrayStorage_100524190;
    if (puVar5 == (undefined *)0x0) goto LAB_100313790;
  }
  FUN_1002a7638(puVar10,local_d0);
  if ((uVar9 & 1) == 0) {
LAB_1003137ac:
    puVar4 = puVar10;
    FUN_10031b558();
  }
  else {
    p_Var6 = Swift::__ContiguousArrayStorageBase::typeMetadataAccessor();
    puVar3 = puVar10;
    _swift_unknownObjectRetain_n(puVar10,2);
    _swift_dynamicCastClass();
    if (puVar3 == (undefined *)0x0) {
      _swift_unknownObjectRelease(puVar10);
      puVar3 = PTR___swiftEmptyArrayStorage_100524190;
    }
    lVar11 = *(long *)(puVar3 + 0x10);
    _swift_release();
    if (SBORROW8(uVar9 >> 1,lVar8)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10031397c);
      (*pcVar1)();
    }
    if (lVar11 != (uVar9 >> 1) - lVar8) {
      _swift_unknownObjectRelease();
      goto LAB_1003137ac;
    }
    puVar3 = puVar10;
    _swift_dynamicCastClass(puVar10,p_Var6);
    _swift_unknownObjectRelease(puVar10);
    puVar4 = PTR___swiftEmptyArrayStorage_100524190;
    if (puVar3 != (undefined *)0x0) goto LAB_100313844;
  }
  _swift_unknownObjectRelease(puVar10);
  puVar3 = puVar4;
LAB_100313844:
  puVar10 = &DAT_10053a670;
  _swift_allocObject(&DAT_10053a670,0x148,7);
  *(undefined **)(puVar10 + 0x10) = puVar5;
  _memcpy(puVar10 + 0x18,unaff_x20.unknown,0x121);
  *(undefined **)(puVar10 + 0x140) = puVar3;
  FUN_1003181f4();
  _all = SwiftUI::Edge::Set::get_horizontal(unaff_x20);
  lVar13 = 0x4050000000000000;
  EVar7 = SwiftUI::EdgeInsets::init(_all.unknown);
  lVar11 = param_3;
  lVar8 = param_4;
  lVar12 = param_5;
  _all_00 = SwiftUI::Edge::Set::get_vertical(EVar7.unknown);
  local_d0 = 0x4020000000000000;
  pcStack_c8 = FUN_10031cb48;
  local_90 = 0;
  lVar14 = 0x4030000000000000;
  local_c0 = puVar10;
  local_b8 = (char)_all.unknown;
  local_b0 = lVar13;
  lStack_a8 = param_3;
  local_a0 = param_4;
  lStack_98 = param_5;
  SwiftUI::EdgeInsets::init((CGFloat)_all_00.unknown);
  *(char *)(param_1 + 9) = (char)_all_00.unknown;
  param_1[10] = lVar14;
  param_1[0xb] = lVar11;
  param_1[0xc] = lVar8;
  param_1[0xd] = lVar12;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[5] = lStack_a8;
  param_1[4] = local_b0;
  param_1[7] = lStack_98;
  param_1[6] = local_a0;
  *(undefined1 *)(param_1 + 8) = local_90;
  param_1[1] = (long)pcStack_c8;
  *param_1 = local_d0;
  param_1[3] = CONCAT71(uStack_b7,local_b8);
  param_1[2] = (long)local_c0;
  local_200 = 0x4020000000000000;
  pcStack_1f8 = FUN_10031cb48;
  local_1c0 = 0;
  local_1f0 = puVar10;
  local_1e8 = (char)_all.unknown;
  local_1e0 = lVar13;
  lStack_1d8 = param_3;
  local_1d0 = param_4;
  lStack_1c8 = param_5;
  FUN_1000087e4(&local_d0,auStack_248,&DAT_10055c0c0,&DAT_100430df0);
  FUN_10002a29c(&local_200,&DAT_10055c0c0,&DAT_100430df0);
  return;
}

