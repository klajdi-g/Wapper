// rea decompile_all
// name: FUN_100161e0c
// address: 0x100161e0c
// body: available
// range: 0x100161e0c-0x1001622c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100162254) */
/* WARNING: Removing unreachable block (ram,0x0001001621b0) */

long FUN_100161e0c(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  NSDataReadingOptions contentsOf;
  SHA256 SVar1;
  URL UVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *pcVar5;
  URL UVar6;
  Data DVar7;
  JSONDecoder *pJVar8;
  Data DVar9;
  void *pvVar10;
  undefined8 uVar11;
  URL UVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar13;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar14;
  long lVar15;
  long lVar16;
  String SVar17;
  String SVar18;
  undefined *local_b0;
  long local_a8;
  undefined *puStack_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  NSDataReadingOptions local_78;
  undefined *local_68;
  
  local_b0 = param_1;
  SVar1 = CryptoKit::SHA256::typeMetadataAccessor();
  local_98 = *(long *)(SVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_98 + 0x40));
  lVar15 = (long)&local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puStack_a0 = (undefined *)CryptoKit::SHA256Digest::typeMetadataAccessor();
  local_a8 = *(long *)(puStack_a0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_a8 + 0x40));
  lVar16 = lVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  UVar2 = Foundation::URL::typeMetadataAccessor();
  local_80 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_80 + 0x40));
  lVar13 = lVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_90 = lVar13;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = lVar13 - extraout_x12;
  local_88 = lVar13;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_78.unknown = (undefined *)(lVar13 - extraout_x12_00);
  puVar3 = &DAT_100549eb0;
  FUN_100002f94(&DAT_100549eb0,&DAT_100426be0);
  _swift_allocObject();
  *(undefined8 *)(puVar3 + 0x18) = 6;
  *(undefined8 *)(puVar3 + 0x10) = 3;
  *(undefined **)(puVar3 + 0x20) = local_b0;
  *(undefined8 *)(puVar3 + 0x28) = param_2;
  *(undefined8 *)(puVar3 + 0x30) = param_3;
  *(undefined8 *)(puVar3 + 0x38) = param_4;
  *(undefined8 *)(puVar3 + 0x40) = param_5;
  *(undefined8 *)(puVar3 + 0x48) = param_6;
  local_68 = puVar3;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_6);
  puVar4 = &DAT_100553858;
  FUN_100002f94(&DAT_100553858,&DAT_100429e10);
  local_b0 = puVar4;
  FUN_1000087a0(&DAT_1005546b8,&DAT_100553858,&DAT_100429e10,
                PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100523b48);
  SVar17.bridgeObject = (void *)0xe100000000000000;
  SVar17.str = (char *)0x7c;
  SVar17 = (extension_Swift)::Swift::BidirectionalCollection::_joined(SVar17);
  _swift_release(puVar3);
  SVar18 = Swift::String::lowercased(SVar17);
  _swift_bridgeObjectRelease(SVar17.bridgeObject);
  FUN_100284930(SVar18.str,SVar18.bridgeObject);
  pvVar10 = SVar18.bridgeObject;
  pcVar5 = SVar18.str;
  FUN_1000036d0(&DAT_1005552d0,PTR_typeMetadataAccessor_100521940,
                PTR_CryptoKit__CryptoKit__SHA256_>CryptoKit__HashFunction_100521938);
  CryptoKit::HashFunction::init();
  FUN_10011a30c(pcVar5,pvVar10);
  FUN_100161b9c(pcVar5,pvVar10,lVar15);
  FUN_100093624(pcVar5,pvVar10);
  CryptoKit::HashFunction::_finalize();
  FUN_100093624(pcVar5,pvVar10);
  (**(code **)(local_98 + 8))(lVar15,SVar1.unknown);
  lVar13 = lVar16;
  FUN_10015983c();
  (**(code **)(local_a8 + 8))(lVar16,puStack_a0);
  local_68 = (undefined *)lVar13;
  SVar17 = (extension_Swift)::Swift::BidirectionalCollection::_joined
                     ((String)(ZEXT816(0xe000000000000000) << 0x40));
  _swift_bridgeObjectRelease(lVar13);
  if (DAT_1005552d8 != -1) {
    _swift_once(&DAT_1005552d8,FUN_1001600e0);
  }
  UVar6 = UVar2;
  FUN_100099338(UVar2.unknown,&DAT_100577c80);
  lVar16 = local_80;
  lVar13 = local_90;
  UVar12 = UVar2;
  (**(code **)(local_80 + 0x10))(local_90,UVar6.unknown);
  lVar15 = local_88;
  Foundation::URL::appendingPathComponent(SVar17,UVar12);
  _swift_bridgeObjectRelease(SVar17.bridgeObject);
  pcVar14 = *(code **)(lVar16 + 8);
  (*pcVar14)(lVar13,UVar2.unknown);
  contentsOf.unknown = local_78.unknown;
  SVar18.bridgeObject = (void *)0xe400000000000000;
  SVar18.str = (char *)0x6e6f736a;
  Foundation::URL::appendingPathExtension(SVar18,UVar12);
  (*pcVar14)(lVar15,UVar2.unknown);
  uVar11 = 0;
  DVar7 = Foundation::Data::_init(contentsOf);
  (*pcVar14)(contentsOf.unknown,UVar2.unknown);
  pJVar8 = Foundation::JSONDecoder::typeMetadataAccessor();
  _swift_allocObject(pJVar8,*(undefined4 *)(pJVar8 + 0x30),*(undefined2 *)(pJVar8 + 0x34));
  pJVar8 = Foundation::JSONDecoder::init(pJVar8);
  DVar9.unknown = &DAT_100555160;
  FUN_100002f94(&DAT_100555160,&DAT_100428c78);
  FUN_100163504(&DAT_1005552e0,FUN_1001622c8,
                PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100523b58);
  Foundation::JSONDecoder::_decode(pJVar8,DVar9);
  FUN_100093624(DVar7.unknown,uVar11);
  _swift_release(pJVar8);
  return (long)local_68;
}

