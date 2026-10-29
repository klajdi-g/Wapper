// rea decompile_all
// name: FUN_10033c984
// address: 0x10033c984
// body: available
// range: 0x10033c984-0x10033cb77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010033caf4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10033c984(byte *param_1,byte *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  bool bVar5;
  RoundedCornerStyle RVar6;
  undefined *puVar7;
  undefined *puVar8;
  StateObject SVar9;
  long lVar10;
  RoundedRectangle RVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined8 uVar14;
  undefined8 uVar15;
  char local_b0;
  undefined7 uStack_af;
  undefined8 uStack_a8;
  undefined1 local_51;
  
  bVar3 = *param_2;
  uVar12 = param_3[1];
  puVar7 = &DAT_1004322c0;
  _swift_getKeyPath(&DAT_1004322c0);
  puVar8 = &DAT_1004322e8;
  _swift_getKeyPath(&DAT_1004322e8);
  Combine::Published::_get_subscript(&local_b0,uVar12,puVar7,puVar8);
  _swift_release(puVar7);
  _swift_release(puVar8);
  if (local_b0 == '\x01') {
    SwiftUI::AppStorage::get_wrappedValue((undefined *)param_3[2]);
    uVar12 = CONCAT71(uStack_af,local_b0);
    FUN_100078414(uVar12,uStack_a8);
    uVar1 = 0;
    if (((uint)uVar12 & 0xff) != 0xc) {
      uVar1 = (uint)uVar12;
    }
    bVar5 = (uint)bVar3 == (uVar1 & 0xff);
  }
  else {
    bVar5 = false;
  }
  SVar9.unknown = (undefined *)param_3[3];
  FUN_1000447d4(0);
  FUN_1000036d0(&DAT_10054d408,FUN_1000447d4,&TargetProtocolConformanceDescriptor_10041dc44);
  SwiftUI::StateObject::get_wrappedValue(SVar9);
  puVar7 = &DAT_10053b4c0;
  _swift_allocObject(&DAT_10053b4c0,0x69,7);
  uVar12 = param_3[4];
  uVar15 = param_3[7];
  uVar14 = param_3[6];
  *(undefined8 *)(puVar7 + 0x38) = param_3[5];
  *(undefined8 *)(puVar7 + 0x30) = uVar12;
  *(undefined8 *)(puVar7 + 0x48) = uVar15;
  *(undefined8 *)(puVar7 + 0x40) = uVar14;
  uVar12 = param_3[8];
  *(undefined8 *)(puVar7 + 0x58) = param_3[9];
  *(undefined8 *)(puVar7 + 0x50) = uVar12;
  *(undefined8 *)(puVar7 + 0x60) = param_3[10];
  uVar12 = *param_3;
  uVar15 = param_3[3];
  uVar14 = param_3[2];
  *(undefined8 *)(puVar7 + 0x18) = param_3[1];
  *(undefined8 *)(puVar7 + 0x10) = uVar12;
  *(undefined8 *)(puVar7 + 0x28) = uVar15;
  *(undefined8 *)(puVar7 + 0x20) = uVar14;
  puVar7[0x68] = bVar3;
  *param_1 = bVar3;
  param_1[1] = bVar5;
  *(undefined **)(param_1 + 8) = SVar9.unknown;
  *(code **)(param_1 + 0x10) = FUN_100341d34;
  *(undefined **)(param_1 + 0x18) = puVar7;
  local_51 = 0;
  FUN_10033f170(param_3,&local_b0);
  SwiftUI::State::init(param_1 + 0x20,puVar7,PTR___type_metadata_for_Swift_Bool_100523b70);
  puVar7 = &DAT_100432330;
  _swift_getKeyPath();
  *(undefined **)(param_1 + 0x30) = puVar7;
  param_1[0x38] = 0;
  lVar10 = 0;
  FUN_100341c48();
  param_1 = param_1 + *(int *)(lVar10 + 0x28);
  RVar11 = SwiftUI::RoundedRectangle::typeMetadataAccessor();
  iVar4 = *(int *)(RVar11.unknown + 0x14);
  uVar2 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100522678
  ;
  RVar6 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
  lVar10 = CONCAT71((int7)((ulong)RVar11.unknown >> 8),RVar6.value);
  (**(code **)(*(long *)(lVar10 + -8) + 0x68))(param_1 + iVar4,uVar2,lVar10);
  auVar13 = NEON_fmov(0x4034000000000000,8);
  *(long *)(param_1 + 8) = auVar13._8_8_;
  *(long *)param_1 = auVar13._0_8_;
  return;
}

