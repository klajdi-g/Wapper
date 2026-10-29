// rea decompile_all
// name: FUN_10005f8c8
// address: 0x10005f8c8
// body: available
// range: 0x10005f8c8-0x10005fc3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10005f8c8(void)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  UUID UVar5;
  undefined *puVar6;
  State SVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined auStack_b0 [8];
  long local_a8;
  undefined *puStack_a0;
  ulong local_98;
  UUID local_90;
  long local_88;
  UUID local_80;
  long local_78;
  undefined *local_70;
  undefined *local_68;
  
  lVar3 = 0;
  FUN_10025ee04();
  local_88 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_88 + 0x40));
  puVar4 = &DAT_10054a9c8;
  local_90.unknown = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  UVar5 = Foundation::UUID::typeMetadataAccessor();
  lVar11 = *(long *)(UVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar11 + 0x40));
  local_80.unknown = (undefined *)(lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  lVar3 = *(long *)(unaff_x20 + 0x40);
  if (lVar3 == 0) {
    FUN_1001b7378(0);
    FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
    SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10005fc40);
    (*pcVar1)();
  }
  puVar4 = &DAT_10041f0d8;
  _swift_getKeyPath(&DAT_10041f0d8);
  puVar6 = &DAT_10041f100;
  _swift_getKeyPath(&DAT_10041f100);
  _swift_retain(lVar3);
  Combine::Published::_get_subscript(&local_68);
  _swift_release(puVar4);
  _swift_release(puVar6);
  _swift_release(lVar3);
  puVar4 = local_68;
  FUN_10006866c();
  SVar7.unknown = &DAT_10054dd90;
  FUN_100002f94(&DAT_10054dd90,&DAT_10041ec00);
  SwiftUI::State::get_wrappedValue(SVar7);
  lVar3 = lVar10;
  (**(code **)(lVar11 + 0x30))(lVar10,1,UVar5.unknown);
  if ((int)lVar3 == 1) {
    FUN_10002a29c(lVar10,&DAT_10054a9c8,&DAT_10041bbe0);
  }
  else {
    local_a8 = lVar11;
    puStack_a0 = UVar5.unknown;
    (**(code **)(lVar11 + 0x20))(local_80.unknown,lVar10,UVar5.unknown);
    if (*(ulong *)(puVar4 + 0x10) != 0) {
      uVar12 = 0;
      lVar3 = 1;
      local_98 = *(ulong *)(puVar4 + 0x10);
      do {
        UVar5.unknown = local_90.unknown;
        if (*(ulong *)(puVar4 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10005fbf4);
          (*pcVar1)();
        }
        uVar9 = (ulong)*(byte *)(local_88 + 0x50) + 0x20 &
                ((ulong)*(byte *)(local_88 + 0x50) ^ 0xffffffffffffffff);
        puVar6 = puVar4 + uVar9;
        lVar10 = *(long *)(local_88 + 0x48);
        pcVar1 = FUN_10025ee04;
        local_78 = lVar3;
        FUN_100029504(puVar6 + lVar10 * uVar12,local_90.unknown);
        bVar2 = Foundation::UUID::___infix(UVar5,local_80,(UUID)pcVar1);
        FUN_100029548(UVar5.unknown,FUN_10025ee04);
        if (bVar2) {
          puVar8 = &DAT_10054e220;
          FUN_100002f94(&DAT_10054e220,&DAT_10041f120);
          _swift_allocObject();
          *(undefined8 *)(puVar8 + 0x18) = 2;
          *(undefined8 *)(puVar8 + 0x10) = 1;
          FUN_100029504(puVar6 + lVar10 * uVar12,puVar8 + uVar9,FUN_10025ee04);
          if (*(ulong *)(puVar4 + 0x10) < uVar12) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10005fbf8);
            (*pcVar1)();
          }
          local_70 = puVar8;
          _swift_bridgeObjectRetain(puVar4);
          FUN_10012f3dc();
          if (*(ulong *)(puVar4 + 0x10) < local_98) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10005fbfc);
            (*pcVar1)();
          }
          local_68 = local_70;
          FUN_10012f3dc(puVar4,puVar6,uVar12 + 1,local_98 << 1 | 1);
          puVar4 = local_68;
          break;
        }
        uVar12 = uVar12 + 1;
        lVar3 = local_78 + 2;
      } while (local_98 != uVar12);
    }
    (**(code **)(local_a8 + 8))(local_80.unknown,puStack_a0);
  }
  return puVar4;
}

