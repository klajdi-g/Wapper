// rea decompile_all
// name: FUN_1002b4fc8
// address: 0x1002b4fc8
// body: available
// range: 0x1002b4fc8-0x1002b5117 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002b50fc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1002b4fc8(void)

{
  long lVar1;
  SymmetricKey SVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined *local_90;
  undefined8 uStack_88;
  undefined *local_78;
  undefined *local_70;
  long local_60;
  undefined8 uStack_58;
  
  ppuVar6 = &local_90;
  SVar2 = CryptoKit::SymmetricKey::typeMetadataAccessor();
  FUN_1000a1ff8(SVar2.unknown,&DAT_10055a160);
  FUN_100099338(SVar2.unknown,&DAT_10055a160);
  puVar3 = &DAT_100553fb8;
  FUN_100002f94(&DAT_100553fb8,&DAT_100426d70);
  _swift_initStaticObject();
  _swift_initStaticObject(puVar3,&DAT_10055a1d0);
  FUN_1002b4df0();
  puVar4 = &DAT_100559028;
  FUN_100002f94(&DAT_100559028,&BYTE_10042d7f8);
  puVar5 = &DAT_100559030;
  local_78 = puVar4;
  FUN_1000087a0(&DAT_100559030,&DAT_100559028,&BYTE_10042d7f8,
                PTR__Foundation__Swift__Array<undefined>_>Foundation__ContiguousBytes_100520e50);
  local_90 = puVar3;
  local_70 = puVar5;
  FUN_100007bd0(&local_90,puVar4);
  lVar1 = (long)*ppuVar6 + 0x20;
  lVar7 = *(long *)((long)*ppuVar6 + 0x10);
  _swift_bridgeObjectRetain(puVar3);
  FUN_100287b18(&local_60,lVar1,lVar1 + lVar7);
  FUN_100043f24(&local_90);
  _swift_bridgeObjectRelease(puVar3);
  uStack_88 = uStack_58;
  local_90 = (undefined *)local_60;
  CryptoKit::SymmetricKey::_init
            (SVar2.unknown,ppuVar6,PTR___type_metadata_for_Foundation_Data_100520ae0,
             PTR___protocol_witness_table_for_Foundation_Data___Foundation_ContiguousBytes_in_Foundation_100520ad0
            );
  return;
}

