// rea decompile_all
// name: FUN_1000d98b0
// address: 0x1000d98b0
// body: available
// range: 0x1000d98b0-0x1000d9c0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001000d9ba8) */

undefined * FUN_1000d98b0(void)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  CharacterSet CVar4;
  undefined *puVar5;
  undefined *puVar6;
  CharacterSet CVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  void *pvVar11;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar12;
  long *unaff_x20;
  long lVar13;
  undefined1 *puVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  String SVar18;
  undefined1 auStack_c0 [8];
  void *local_b8;
  char *local_a0;
  undefined *local_90;
  undefined8 uStack_88;
  undefined *local_80;
  long lStack_78;
  long local_70;
  void *pvVar10;
  
  lVar3 = 0;
  FUN_10040211c();
  lVar17 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar17 + 0x40));
  puVar14 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  CVar4 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar3 = *(long *)(CVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar3 + 0x40));
  lVar13 = *unaff_x20;
  if (lVar13 == 0) {
    FUN_100279594(0);
    FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
    SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1000d9c10);
    (*pcVar2)();
  }
  puVar5 = &DAT_100423658;
  _swift_getKeyPath(&DAT_100423658);
  puVar6 = &DAT_100423680;
  _swift_getKeyPath(&DAT_100423680);
  _swift_retain(lVar13);
  Combine::Published::_get_subscript(&local_80);
  _swift_release(puVar5);
  _swift_release(puVar6);
  _swift_release(lVar13);
  puVar5 = local_80;
  lStack_78 = unaff_x20[6];
  local_80 = (undefined *)unaff_x20[5];
  local_70 = unaff_x20[7];
  CVar7.unknown = &DAT_10054dd08;
  FUN_100002f94(&DAT_10054dd08,&DAT_10041ea50);
  SwiftUI::State::get_wrappedValue((State)CVar7.unknown);
  local_80 = local_90;
  Foundation::CharacterSet::get_whitespacesAndNewlines(CVar7);
  FUN_100026df4();
  SVar18 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters
                     ((CharacterSet)(puVar14 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)));
  pvVar10 = SVar18.bridgeObject;
  (**(code **)(lVar3 + 8))(puVar14 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0),CVar4.unknown);
  _swift_bridgeObjectRelease(uStack_88);
  uVar12 = (ulong)SVar18.str & 0xffffffffffff;
  if (((ulong)pvVar10 & 0x2000000000000000) != 0) {
    uVar12 = (ulong)pvVar10 >> 0x38 & 0xf;
  }
  if (uVar12 == 0) {
    _swift_bridgeObjectRelease(pvVar10);
  }
  else {
    SVar18 = Swift::String::lowercased(SVar18);
    pvVar11 = SVar18.bridgeObject;
    _swift_bridgeObjectRelease(pvVar10);
    uVar12 = *(ulong *)(puVar5 + 0x10);
    puVar6 = PTR___swiftEmptyArrayStorage_100524190;
    if (uVar12 != 0) {
      uVar16 = 0;
      local_b8 = pvVar11;
      do {
        pvVar11 = SVar18.bridgeObject;
        local_a0 = SVar18.str;
        if (*(ulong *)(puVar5 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1000d9ba8);
          (*pcVar2)();
        }
        uVar15 = (ulong)*(byte *)(lVar17 + 0x50) + 0x20 &
                 ((ulong)*(byte *)(lVar17 + 0x50) ^ 0xffffffffffffffff);
        lVar3 = *(long *)(lVar17 + 0x48);
        FUN_100029504(puVar5 + lVar3 * uVar16 + uVar15,puVar14,FUN_10040211c);
        puVar8 = puVar14;
        FUN_1000d9c10(puVar14,unaff_x20,local_a0,pvVar11);
        if (((ulong)puVar8 & 1) == 0) {
          FUN_100029548(puVar14,FUN_10040211c);
        }
        else {
          puVar9 = puVar6;
          _swift_isUniquelyReferenced_nonNull_native();
          local_80 = puVar6;
          if (((ulong)puVar9 & 1) == 0) {
            FUN_1001c5c4c(0,*(long *)(puVar6 + 0x10) + 1,1);
          }
          uVar1 = *(ulong *)(local_80 + 0x10);
          if (*(ulong *)(local_80 + 0x18) >> 1 <= uVar1) {
            FUN_1001c5c4c(1 < *(ulong *)(local_80 + 0x18),uVar1 + 1,1);
          }
          puVar6 = local_80;
          *(ulong *)(local_80 + 0x10) = uVar1 + 1;
          FUN_100007e64(puVar14,local_80 + uVar1 * lVar3 + uVar15,FUN_10040211c);
          pvVar11 = local_b8;
        }
        SVar18.bridgeObject = pvVar11;
        SVar18.str = local_a0;
        uVar16 = uVar16 + 1;
      } while (uVar12 != uVar16);
    }
    _swift_bridgeObjectRelease(pvVar11);
    _swift_bridgeObjectRelease(puVar5);
    puVar5 = puVar6;
  }
  return puVar5;
}

