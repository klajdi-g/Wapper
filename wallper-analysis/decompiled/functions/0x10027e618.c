// rea decompile_all
// name: FUN_10027e618
// address: 0x10027e618
// body: available
// range: 0x10027e618-0x10027e7ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10027e618(undefined8 param_1,long param_2,ID param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  URLRequest UVar4;
  undefined *puVar5;
  undefined *puVar6;
  URLRequest UVar7;
  NSURLRequest *pNVar8;
  ID self;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined8 local_70;
  ID local_68;
  
  local_70 = param_4;
  local_68 = param_3;
  UVar4 = Foundation::URLRequest::typeMetadataAccessor();
  lVar14 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar14 + 0x40));
  puVar12 = (undefined *)((long)&local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar5 = &DAT_100558bf8;
  FUN_100002f94(&DAT_100558bf8,&DAT_10042d268);
  lVar10 = *(long *)(puVar5 + -8);
  lVar13 = *(long *)(lVar10 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)(lVar13 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar10 + 0x10))((long)puVar12 - extraout_x8_00,param_1,puVar5);
  uVar9 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar11 = uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff);
  puVar6 = &DAT_100536200;
  _swift_allocObject(&DAT_100536200,uVar11 + lVar13,uVar9 | 7);
  (**(code **)(lVar10 + 0x20))(puVar6 + uVar11,(long)puVar12 - extraout_x8_00,puVar5);
  puVar1 = (undefined8 *)
           (param_2 +
           _TtC7WallperP33_4537C798EE20D91316D9ABA5C600337924DownloadProgressDelegate::onComplete);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = thunk_FUN_10027f68c;
  puVar1[1] = puVar6;
  FUN_10002f6dc(uVar2,uVar3);
  UVar7.unknown = puVar12;
  (**(code **)(lVar14 + 0x10))(puVar12,local_70,UVar4.unknown);
  pNVar8 = Foundation::URLRequest::_bridgeToObjectiveC(UVar7);
  (**(code **)(lVar14 + 8))(puVar12,UVar4.unknown);
  self = objc_stub::downloadTaskWithRequest_(local_68,pNVar8);
  objc_stub::resume(self);
  return 0;
}

