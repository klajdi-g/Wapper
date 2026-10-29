// rea decompile_all
// name: FUN_10025dd44
// address: 0x10025dd44
// body: available
// range: 0x10025dd44-0x10025e08b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010025e044) */
/* WARNING: Removing unreachable block (ram,0x00010025dfa8) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010025dfa0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10025dd44(long param_1,ulong param_2,undefined8 param_3,uint param_4,undefined8 param_5,
                  long param_6)

{
  undefined8 *puVar1;
  long lVar2;
  URL to;
  undefined *puVar3;
  JSONEncoder *pJVar4;
  undefined *puVar5;
  URL UVar6;
  Data DVar7;
  ulong uVar8;
  long extraout_x8;
  long extraout_x12;
  uint uVar9;
  long unaff_x20;
  long lVar10;
  undefined8 uVar11;
  code *pcVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long local_c0;
  long local_b8;
  URL local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long local_90;
  undefined8 local_80;
  undefined8 local_78 [3];
  
  local_98 = param_3;
  local_a8 = (undefined *)Foundation::URL::typeMetadataAccessor();
  local_b8 = *(long *)(local_a8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_b8 + 0x40));
  lVar10 = (long)&local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_c0 = lVar10;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar2 = _TtC7Wallper15LocalMediaStore::metadata;
  local_b0.unknown = (undefined *)(lVar10 - extraout_x12);
  _swift_beginAccess(unaff_x20 + _TtC7Wallper15LocalMediaStore::metadata,local_78,0x20,0);
  lVar10 = *(long *)(unaff_x20 + lVar2);
  local_a0 = param_5;
  local_90 = param_1;
  if (*(long *)(lVar10 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar10);
    uVar8 = param_2;
    FUN_10000464c();
    if ((uVar8 & 1) != 0) {
      puVar1 = (undefined8 *)(*(long *)(lVar10 + 0x38) + param_1 * 0x20);
      uVar15 = *puVar1;
      uVar9 = (uint)*(byte *)(puVar1 + 1);
      uVar14 = puVar1[2];
      lVar13 = puVar1[3];
      _swift_bridgeObjectRetain(lVar13);
      _swift_endAccess(local_78);
      _swift_bridgeObjectRelease(lVar10);
      goto LAB_10025de78;
    }
    _swift_bridgeObjectRelease(lVar10);
  }
  _swift_endAccess(local_78);
  uVar14 = 0;
  lVar13 = 0;
  uVar15 = 0;
  uVar9 = 1;
LAB_10025de78:
  if ((param_4 & 0xff) != 1) {
    uVar15 = local_98;
    uVar9 = param_4;
  }
  if (param_6 != 0) {
    _swift_bridgeObjectRelease(lVar13);
    lVar13 = param_6;
    uVar14 = local_a0;
  }
  _swift_beginAccess(unaff_x20 + lVar2,local_78,0x21,0);
  _swift_bridgeObjectRetain(lVar13);
  uVar11 = *(undefined8 *)(unaff_x20 + lVar2);
  _swift_bridgeObjectRetain(param_6);
  _swift_bridgeObjectRetain(param_2);
  _swift_isUniquelyReferenced_nonNull_native(uVar11);
  local_80 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined8 *)(unaff_x20 + lVar2) = 0x8000000000000000;
  FUN_100341120(uVar15,uVar9,uVar14,lVar13,local_90,param_2,uVar11);
  _swift_bridgeObjectRelease(param_2);
  *(undefined8 *)(unaff_x20 + lVar2) = local_80;
  _swift_endAccess(local_78);
  pJVar4 = Foundation::JSONEncoder::typeMetadataAccessor();
  _swift_allocObject(pJVar4,*(undefined4 *)(pJVar4 + 0x30),*(undefined2 *)(pJVar4 + 0x34));
  pJVar4 = Foundation::JSONEncoder::init(pJVar4);
  uVar15 = *(undefined8 *)(unaff_x20 + lVar2);
  local_78[0] = uVar15;
  _swift_bridgeObjectRetain(uVar15);
  puVar5 = &DAT_100557fc0;
  FUN_100002f94(&DAT_100557fc0,&DAT_10042c280);
  UVar6.unknown = &DAT_100558000;
  FUN_10025e618(&DAT_100558000,FUN_10025e694,
                PTR___protocol_witness_table_for_Swift_String___Swift_Encodable_in_Swift_100523aa0,
                PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Encodable_100523988);
  DVar7 = Foundation::JSONEncoder::_encode(pJVar4,UVar6.unknown,puVar5);
  _swift_release(pJVar4);
  _swift_bridgeObjectRelease(uVar15);
  lVar2 = local_c0;
  FUN_10025d120(local_c0);
  to.unknown = local_b0.unknown;
  Foundation::URL::appendingPathComponent
            (*(String *)(unaff_x20 + _TtC7Wallper15LocalMediaStore::metadataFileName),UVar6);
  puVar3 = local_a8;
  pcVar12 = *(code **)(local_b8 + 8);
  (*pcVar12)(lVar2,local_a8);
  Foundation::Data::_write(to,(NSDataWritingOptions)0x0,DVar7);
  FUN_100093624(DVar7.unknown,puVar5);
  _swift_bridgeObjectRelease(lVar13);
  (*pcVar12)(to.unknown,puVar3);
  return;
}

