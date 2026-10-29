// rea decompile_all
// name: FUN_10030f54c
// address: 0x10030f54c
// body: available
// range: 0x10030f54c-0x10030fb43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010030fae8) */

void FUN_10030f54c(undefined *param_1)

{
  CharacterSet in;
  char cVar1;
  code *pcVar2;
  CharacterSet CVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  State SVar7;
  undefined *puVar8;
  State SVar9;
  void *pvVar10;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar11;
  long extraout_x12;
  long lVar12;
  long *unaff_x20;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  String SVar20;
  String SVar21;
  CharacterSet local_e0;
  long local_d8;
  undefined *local_d0;
  undefined1 auStack_a8 [8];
  undefined *local_a0 [2];
  undefined *local_90;
  undefined8 uStack_88;
  State local_80;
  long lStack_78;
  long local_70;
  long local_68;
  
  CVar3 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar14 = *(long *)(CVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar14 + 0x40));
  puVar8 = (undefined *)((long)&local_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar4 = 0;
  FUN_10040211c();
  lVar12 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar12 + 0x40));
  uVar11 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar19 = uVar11 - extraout_x12;
  SVar9.unknown = param_1;
  local_d0 = CVar3.unknown;
  if (param_1 == (undefined *)0x0) {
    lVar13 = *unaff_x20;
    if (lVar13 == 0) {
      FUN_100279594(0);
      FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
      SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10030fb44);
      (*pcVar2)();
    }
    puVar5 = &DAT_100430a60;
    _swift_getKeyPath(&DAT_100430a60);
    puVar6 = &DAT_100430a88;
    _swift_getKeyPath(&DAT_100430a88);
    _swift_retain(lVar13);
    Combine::Published::_get_subscript(&local_80);
    _swift_release(puVar5);
    _swift_release(puVar6);
    _swift_release(lVar13);
    SVar9.unknown = local_80.unknown;
  }
  lStack_78 = unaff_x20[6];
  local_80.unknown = (undefined *)unaff_x20[5];
  _swift_bridgeObjectRetain(param_1);
  SVar7.unknown = &DAT_10055bd08;
  FUN_100002f94(&DAT_10055bd08,&DAT_100435de0);
  SwiftUI::State::get_wrappedValue(SVar7);
  cVar1 = (char)local_90;
  SVar7.unknown = SVar9.unknown;
  local_e0.unknown = puVar8;
  local_d8 = lVar14;
  if ((char)local_90 != '\x0e') {
    uVar16 = *(ulong *)(SVar9.unknown + 0x10);
    SVar7.unknown = PTR___swiftEmptyArrayStorage_100524190;
    if (uVar16 != 0) {
      uVar17 = 0;
      do {
        if (*(ulong *)(SVar9.unknown + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10030fae8);
          (*pcVar2)();
        }
        uVar15 = (ulong)*(byte *)(lVar12 + 0x50) + 0x20 &
                 ((ulong)*(byte *)(lVar12 + 0x50) ^ 0xffffffffffffffff);
        lVar14 = *(long *)(lVar12 + 0x48);
        FUN_100029504(SVar9.unknown + lVar14 * uVar17 + uVar15,lVar19,FUN_10040211c);
        if (*(char *)(lVar19 + *(int *)(lVar4 + 0x24)) == cVar1) {
          puVar8 = SVar7.unknown;
          _swift_isUniquelyReferenced_nonNull_native();
          local_80.unknown = SVar7.unknown;
          if (((ulong)puVar8 & 1) == 0) {
            FUN_1001c5c4c(0,*(long *)(SVar7.unknown + 0x10) + 1,1);
          }
          uVar18 = *(ulong *)(local_80.unknown + 0x10);
          if (*(ulong *)(local_80.unknown + 0x18) >> 1 <= uVar18) {
            FUN_1001c5c4c(1 < *(ulong *)(local_80.unknown + 0x18),uVar18 + 1,1);
          }
          SVar7.unknown = local_80.unknown;
          *(ulong *)(local_80.unknown + 0x10) = uVar18 + 1;
          FUN_100007e64(lVar19,local_80.unknown + uVar18 * lVar14 + uVar15,FUN_10040211c);
        }
        else {
          FUN_10002f1dc(lVar19);
        }
        uVar17 = uVar17 + 1;
      } while (uVar16 != uVar17);
    }
    _swift_bridgeObjectRelease(SVar9.unknown);
  }
  lStack_78 = unaff_x20[3];
  local_80.unknown = (undefined *)unaff_x20[2];
  local_70 = unaff_x20[4];
  CVar3.unknown = &DAT_10054dd08;
  FUN_100002f94(&DAT_10054dd08,&DAT_10041ea50);
  SwiftUI::State::get_wrappedValue((State)CVar3.unknown);
  in.unknown = local_e0.unknown;
  local_80.unknown = local_90;
  lStack_78 = uStack_88;
  Foundation::CharacterSet::get_whitespacesAndNewlines(CVar3);
  FUN_100026df4();
  SVar20 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
  (**(code **)(local_d8 + 8))(in.unknown,local_d0);
  _swift_bridgeObjectRelease(uStack_88);
  SVar21 = Swift::String::lowercased(SVar20);
  pvVar10 = SVar21.bridgeObject;
  _swift_bridgeObjectRelease(SVar20.bridgeObject);
  uVar16 = (ulong)SVar21.str & 0xffffffffffff;
  if (((ulong)pvVar10 & 0x2000000000000000) != 0) {
    uVar16 = (ulong)pvVar10 >> 0x38 & 0xf;
  }
  if (uVar16 == 0) {
    _swift_bridgeObjectRelease(pvVar10);
  }
  else {
    uVar16 = *(ulong *)(SVar7.unknown + 0x10);
    SVar9.unknown = PTR___swiftEmptyArrayStorage_100524190;
    if (uVar16 != 0) {
      uVar17 = 0;
      do {
        if (*(ulong *)(SVar7.unknown + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10030fae4);
          (*pcVar2)();
        }
        uVar18 = (ulong)*(byte *)(lVar12 + 0x50) + 0x20 &
                 ((ulong)*(byte *)(lVar12 + 0x50) ^ 0xffffffffffffffff);
        lVar4 = *(long *)(lVar12 + 0x48);
        FUN_100029504(SVar7.unknown + lVar4 * uVar17 + uVar18,uVar11,FUN_10040211c);
        uVar15 = uVar11;
        FUN_10030fb44(uVar11,SVar21.str,pvVar10,unaff_x20);
        if ((uVar15 & 1) == 0) {
          FUN_10002f1dc(uVar11);
        }
        else {
          puVar8 = SVar9.unknown;
          _swift_isUniquelyReferenced_nonNull_native();
          local_80.unknown = SVar9.unknown;
          if (((ulong)puVar8 & 1) == 0) {
            FUN_1001c5c4c(0,*(long *)(SVar9.unknown + 0x10) + 1,1);
          }
          uVar15 = *(ulong *)(local_80.unknown + 0x10);
          if (*(ulong *)(local_80.unknown + 0x18) >> 1 <= uVar15) {
            FUN_1001c5c4c(1 < *(ulong *)(local_80.unknown + 0x18),uVar15 + 1,1);
          }
          SVar9.unknown = local_80.unknown;
          *(ulong *)(local_80.unknown + 0x10) = uVar15 + 1;
          FUN_100007e64(uVar11,local_80.unknown + uVar15 * lVar4 + uVar18,FUN_10040211c);
        }
        uVar17 = uVar17 + 1;
      } while (uVar16 != uVar17);
    }
    _swift_bridgeObjectRelease(SVar7.unknown);
    _swift_bridgeObjectRelease(pvVar10);
    SVar7.unknown = SVar9.unknown;
  }
  lStack_78 = unaff_x20[0x12];
  local_80.unknown = (undefined *)unaff_x20[0x11];
  SVar9.unknown = &DAT_10055bd38;
  FUN_100002f94(&DAT_10055bd38,&DAT_100430a50);
  SwiftUI::State::get_wrappedValue(SVar9);
  puVar8 = SVar7.unknown;
  FUN_100402858(SVar7.unknown,(ulong)local_90 & 0xff);
  lStack_78 = unaff_x20[0x10];
  local_80.unknown = (undefined *)unaff_x20[0xf];
  SVar9.unknown = &DAT_10055bd28;
  FUN_100002f94(&DAT_10055bd28,&DAT_100430a48);
  SwiftUI::State::get_wrappedValue(SVar9);
  puVar5 = puVar8;
  FUN_10040c6c0(puVar8,(ulong)local_90 & 0xff);
  _swift_bridgeObjectRelease(puVar8);
  local_90 = (undefined *)unaff_x20[0x15];
  lStack_78 = unaff_x20[0x16];
  local_a0[0] = puVar5;
  local_80.unknown = local_90;
  local_68 = lStack_78;
  FUN_1000087e4(&local_90,auStack_a8,&DAT_100558960,&DAT_10042b290);
  FUN_1000087e4(&local_68,auStack_a8,&DAT_10055bd48,&DAT_100430ab0);
  puVar8 = &DAT_10055bd50;
  FUN_100002f94(&DAT_10055bd50,&DAT_100430ab8);
  SwiftUI::State::set_wrappedValue(&local_80,local_a0,puVar8);
  _swift_bridgeObjectRelease(SVar7.unknown);
  FUN_10002a29c(&local_90,&DAT_100558960,&DAT_10042b290);
  FUN_10002a29c(&local_68,&DAT_10055bd48,&DAT_100430ab0);
  return;
}

