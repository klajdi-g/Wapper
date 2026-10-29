// rea decompile_all
// name: FUN_10015983c
// address: 0x10015983c
// body: available
// range: 0x10015983c-0x100159b7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10015983c(undefined8 param_1)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  code *pcVar4;
  SHA256Digest SVar5;
  ulong uVar6;
  undefined *puVar7;
  long extraout_x8;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  String SVar11;
  char *local_a0;
  long local_70;
  ulong local_68;
  
  SVar5 = CryptoKit::SHA256Digest::typeMetadataAccessor();
  lVar9 = *(long *)(SVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(undefined8 *)(lVar9 + 0x40),SVar5.unknown,PTR_typeMetadataAccessor_1005218f8);
  FUN_1000036d0(&DAT_1005552f0);
  uVar6 = Swift::Sequence::get_underestimatedCount();
  puVar3 = PTR___swiftEmptyArrayStorage_100524190;
  FUN_1001c5bc4(0,uVar6 & ((long)uVar6 >> 0x3f ^ 0xffffffffffffffffU),0);
  (**(code **)(lVar9 + 0x10))
            ((long)&local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1,SVar5.unknown);
  Swift::Sequence::_makeIterator();
  if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100159b7c);
    (*pcVar4)();
  }
  uVar10 = local_68;
  if (uVar6 != 0) {
    uVar8 = *(ulong *)(local_70 + 0x10);
    do {
      if (uVar8 == uVar10) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100159b6c);
        (*pcVar4)();
      }
      if ((long)local_68 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100159b70);
        (*pcVar4)();
      }
      if (*(ulong *)(local_70 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100159b74);
        (*pcVar4)();
      }
      uVar2 = *(undefined1 *)(local_70 + 0x20 + uVar10);
      puVar7 = &DAT_10054b500;
      FUN_100002f94(&DAT_10054b500,&DAT_100434890);
      _swift_allocObject();
      *(undefined8 *)(puVar7 + 0x18) = 2;
      *(undefined8 *)(puVar7 + 0x10) = 1;
      *(undefined **)(puVar7 + 0x38) = PTR___type_metadata_for_Swift_UInt8_100524090;
      *(undefined **)(puVar7 + 0x40) =
           PTR___protocol_witness_table_for_Swift_UInt8___Swift_CVarArg_in_Swift_100524098;
      puVar7[0x20] = uVar2;
      SVar11 = (extension_Foundation)::Swift::String::_init();
      uVar1 = *(ulong *)(puVar3 + 0x10);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar1) {
        local_a0 = SVar11.str;
        FUN_1001c5bc4(1 < *(ulong *)(puVar3 + 0x18),uVar1 + 1,1);
        SVar11.bridgeObject = SVar11.bridgeObject;
        SVar11.str = local_a0;
      }
      *(ulong *)(puVar3 + 0x10) = uVar1 + 1;
      *(String *)(puVar3 + uVar1 * 0x10 + 0x20) = SVar11;
      uVar10 = uVar10 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar6 = *(ulong *)(local_70 + 0x10);
  if (uVar10 != uVar6) {
    do {
      if (uVar6 <= uVar10) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100159b78);
        (*pcVar4)();
      }
      uVar8 = uVar10 + 1;
      uVar2 = *(undefined1 *)(local_70 + 0x20 + uVar10);
      puVar7 = &DAT_10054b500;
      FUN_100002f94(&DAT_10054b500,&DAT_100434890);
      _swift_allocObject();
      *(undefined8 *)(puVar7 + 0x18) = 2;
      *(undefined8 *)(puVar7 + 0x10) = 1;
      *(undefined **)(puVar7 + 0x38) = PTR___type_metadata_for_Swift_UInt8_100524090;
      *(undefined **)(puVar7 + 0x40) =
           PTR___protocol_witness_table_for_Swift_UInt8___Swift_CVarArg_in_Swift_100524098;
      puVar7[0x20] = uVar2;
      SVar11 = (extension_Foundation)::Swift::String::_init();
      uVar6 = *(ulong *)(puVar3 + 0x10);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar6) {
        FUN_1001c5bc4(1 < *(ulong *)(puVar3 + 0x18),uVar6 + 1,1);
      }
      *(ulong *)(puVar3 + 0x10) = uVar6 + 1;
      *(String *)(puVar3 + uVar6 * 0x10 + 0x20) = SVar11;
      uVar6 = *(ulong *)(local_70 + 0x10);
      uVar10 = uVar8;
    } while (uVar8 != uVar6);
  }
  _swift_bridgeObjectRelease(local_70);
  return puVar3;
}

