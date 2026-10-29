// rea decompile_all
// name: FUN_1003fa61c
// address: 0x1003fa61c
// body: available
// range: 0x1003fa61c-0x1003fab0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003fa61c(void)

{
  undefined *puVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ID self;
  NSDictionary *pNVar6;
  undefined *local_90 [3];
  undefined *local_78;
  undefined1 auStack_70 [32];
  
  puVar3 = &DAT_10054c048;
  FUN_100002f94(&DAT_10054c048,&DAT_10041d7b0);
  _swift_allocObject();
  *(undefined8 *)(puVar3 + 0x20) = 0x4c6e4f7472617473;
  *(undefined8 *)(puVar3 + 0x18) = 0x24;
  *(undefined8 *)(puVar3 + 0x10) = 0x12;
  *(undefined8 *)(puVar3 + 0x28) = 0xec0000006e69676f;
  puVar1 = PTR___type_metadata_for_Swift_Bool_100523b70;
  puVar3[0x30] = 0;
  *(undefined **)(puVar3 + 0x48) = puVar1;
  *(undefined8 *)(puVar3 + 0x50) = 0xd000000000000012;
  *(undefined8 *)(puVar3 + 0x58) = 0x80000001004de4e0;
  puVar3[0x60] = 0;
  *(undefined **)(puVar3 + 0x78) = puVar1;
  *(undefined8 *)(puVar3 + 0x80) = 0xd000000000000011;
  *(undefined8 *)(puVar3 + 0x88) = 0x80000001004de500;
  puVar3[0x90] = 1;
  *(undefined **)(puVar3 + 0xa8) = puVar1;
  *(undefined8 *)(puVar3 + 0xb0) = 0xd000000000000013;
  puVar5 = PTR___type_metadata_for_Swift_Int_100523bd8;
  *(undefined8 *)(puVar3 + 0xb8) = 0x80000001004de520;
  *(undefined8 *)(puVar3 + 0xc0) = 0x14;
  *(undefined **)(puVar3 + 0xd8) = puVar5;
  *(undefined8 *)(puVar3 + 0xe0) = 0xd000000000000016;
  *(undefined8 *)(puVar3 + 0xe8) = 0x80000001004e41e0;
  puVar3[0xf0] = 0;
  *(undefined **)(puVar3 + 0x108) = puVar1;
  *(undefined8 *)(puVar3 + 0x110) = 0xd000000000000014;
  *(undefined8 *)(puVar3 + 0x118) = 0x80000001004dcf30;
  puVar3[0x120] = 0;
  *(undefined **)(puVar3 + 0x138) = puVar1;
  *(undefined8 *)(puVar3 + 0x140) = 0x726f466b63656863;
  *(undefined8 *)(puVar3 + 0x148) = 0xef73657461647055;
  puVar3[0x150] = 1;
  *(undefined **)(puVar3 + 0x168) = puVar1;
  *(undefined8 *)(puVar3 + 0x170) = 0x6e4f796669746f6e;
  *(undefined8 *)(puVar3 + 0x178) = 0xee00657461647055;
  puVar3[0x180] = 1;
  *(undefined **)(puVar3 + 0x198) = puVar1;
  *(undefined8 *)(puVar3 + 0x1a0) = 0xd000000000000012;
  puVar5 = PTR___type_metadata_for_Swift_String_100523a98;
  *(undefined8 *)(puVar3 + 0x1a8) = 0x80000001004de540;
  *(undefined8 *)(puVar3 + 0x1b0) = 0x65766974616e;
  *(undefined8 *)(puVar3 + 0x1b8) = 0xe600000000000000;
  *(undefined **)(puVar3 + 0x1c8) = puVar5;
  *(undefined8 *)(puVar3 + 0x1d0) = 0xd000000000000016;
  *(undefined8 *)(puVar3 + 0x1d8) = 0x80000001004de580;
  puVar3[0x1e0] = 1;
  *(undefined **)(puVar3 + 0x1f8) = puVar1;
  *(undefined8 *)(puVar3 + 0x200) = 0xd000000000000011;
  *(undefined8 *)(puVar3 + 0x208) = 0x80000001004de4c0;
  *(undefined **)(puVar3 + 0x228) = puVar1;
  puVar3[0x210] = 1;
  *(undefined8 *)(puVar3 + 0x230) = 0xd000000000000018;
  *(undefined8 *)(puVar3 + 0x238) = 0x80000001004de5a0;
  *(undefined **)(puVar3 + 600) = puVar1;
  puVar3[0x240] = 1;
  *(undefined8 *)(puVar3 + 0x260) = 0xd000000000000015;
  *(undefined8 *)(puVar3 + 0x268) = 0x80000001004de5c0;
  *(undefined **)(puVar3 + 0x288) = puVar1;
  puVar3[0x270] = 0;
  *(undefined8 *)(puVar3 + 0x290) = 0xd000000000000018;
  *(undefined8 *)(puVar3 + 0x298) = 0x80000001004dc560;
  *(undefined **)(puVar3 + 0x2b8) = puVar1;
  puVar3[0x2a0] = 1;
  *(undefined8 *)(puVar3 + 0x2c0) = 0x79614c636973756d;
  *(undefined8 *)(puVar3 + 0x2c8) = 0xeb0000000074756f;
  *(undefined **)(puVar3 + 0x2e8) = puVar5;
  *(undefined8 *)(puVar3 + 0x2d0) = 0x746e656964617267;
  *(undefined8 *)(puVar3 + 0x2d8) = 0xe800000000000000;
  *(undefined8 *)(puVar3 + 0x2f0) = 0x6c6f566f65646976;
  *(undefined8 *)(puVar3 + 0x2f8) = 0xeb00000000656d75;
  puVar5 = PTR___type_metadata_for_Swift_Double_100523b90;
  *(undefined **)(puVar3 + 0x318) = PTR___type_metadata_for_Swift_Double_100523b90;
  *(undefined8 *)(puVar3 + 0x300) = 0;
  *(undefined8 *)(puVar3 + 800) = 0xd000000000000016;
  *(undefined8 *)(puVar3 + 0x328) = 0x80000001004de560;
  *(undefined **)(puVar3 + 0x348) = puVar5;
  *(undefined8 *)(puVar3 + 0x330) = 0x3fe999999999999a;
  *(undefined8 *)(puVar3 + 0x350) = 0xd000000000000011;
  *(undefined8 *)(puVar3 + 0x358) = 0x80000001004e2810;
  *(undefined **)(puVar3 + 0x378) = puVar5;
  *(undefined8 *)(puVar3 + 0x360) = 0;
  puVar4 = puVar3;
  FUN_100005b10();
  _swift_setDeallocating(puVar3);
  puVar5 = &DAT_10054a1c0;
  FUN_100002f94(&DAT_10054a1c0,&DAT_10041a250);
  _swift_arrayDestroy(puVar3 + 0x20,0x12,puVar5);
  _swift_deallocClassInstance(puVar3,0x20,7);
  bVar2 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  if ((bVar2 & 1) == 0) {
    local_90[0] = (undefined *)((ulong)local_90[0]._1_7_ << 8);
    local_78 = puVar1;
    FUN_100007d88(local_90,auStack_70);
    puVar3 = puVar4;
    _swift_isUniquelyReferenced_nonNull_native(puVar4);
    local_90[0] = puVar4;
    FUN_100340514(auStack_70,0xd000000000000016,0x8000000100436e40,puVar3);
    puVar3 = local_90[0];
    local_90[0] = (undefined *)CONCAT71(local_90[0]._1_7_,1);
  }
  else {
    local_90[0] = (undefined *)CONCAT71(local_90[0]._1_7_,1);
    local_78 = puVar1;
    FUN_100007d88(local_90,auStack_70);
    puVar3 = puVar4;
    _swift_isUniquelyReferenced_nonNull_native(puVar4);
    local_90[0] = puVar4;
    FUN_100340514(auStack_70,0xd000000000000016,0x8000000100436e40,puVar3);
    puVar3 = local_90[0];
    local_90[0] = (undefined *)((ulong)local_90[0] & 0xffffffffffffff00);
  }
  local_78 = puVar1;
  FUN_100007d88(local_90,auStack_70);
  puVar5 = puVar3;
  _swift_isUniquelyReferenced_nonNull_native(puVar3);
  local_90[0] = puVar3;
  FUN_100340514(auStack_70,0x6e654d7470616461,0xec00000072614275,puVar5);
  puVar3 = local_90[0];
  self = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  pNVar6 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  NSUserDefaults::registerDefaults_(self,pNVar6);
  FUN_1003fa3e0(0);
  _swift_bridgeObjectRelease(puVar3);
  return;
}

