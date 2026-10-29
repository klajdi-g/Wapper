// rea decompile_all
// name: FUN_10026eac4
// address: 0x10026eac4
// body: available
// range: 0x10026eac4-0x10026ed27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10026eac4(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  URL UVar4;
  long extraout_x8;
  long lVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  String SVar12;
  undefined *local_a0;
  long local_98 [3];
  undefined *local_68;
  void *pvVar5;
  
  lVar2 = 0;
  FUN_10040211c();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar9 + 0x40));
  lVar6 = _TtC7Wallper17VideoLibraryStore::downloadedIDCache;
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar10 = (undefined8 *)((long)&local_a0 + lVar2);
  puVar7 = *(undefined **)(unaff_x20 + _TtC7Wallper17VideoLibraryStore::downloadedIDCache);
  if (puVar7 == (undefined *)0x0) {
    puVar7 = &DAT_10042d220;
    _swift_getKeyPath(&DAT_10042d220);
    puVar3 = &DAT_10042d248;
    _swift_getKeyPath(&DAT_10042d248);
    Combine::Published::_get_subscript(&local_68);
    _swift_release(puVar7);
    _swift_release(puVar3);
    puVar7 = local_68;
    lVar11 = *(long *)(local_68 + 0x10);
    if (lVar11 == 0) {
      _swift_bridgeObjectRelease(local_68);
      puVar3 = PTR___swiftEmptyArrayStorage_100524190;
    }
    else {
      local_98[0] = lVar6;
      local_68 = PTR___swiftEmptyArrayStorage_100524190;
      local_98[1] = param_1;
      local_98[2] = param_2;
      FUN_1001c5bc4(0,lVar11,0);
      local_a0 = puVar7;
      puVar7 = puVar7 + ((ulong)*(byte *)(lVar9 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar9 + 0x50) ^ 0xffffffffffffffff));
      lVar6 = *(long *)(lVar9 + 0x48);
      do {
        puVar3 = local_68;
        UVar4.unknown = puVar7;
        FUN_100029504(puVar7,puVar10,FUN_10040211c);
        SVar12 = Foundation::URL::get_lastPathComponent(UVar4);
        pvVar5 = SVar12.bridgeObject;
        uVar1 = (ulong)SVar12.str & 0xffffffffffff;
        if (((ulong)pvVar5 & 0x2000000000000000) != 0) {
          uVar1 = (ulong)pvVar5 >> 0x38 & 0xf;
        }
        if (uVar1 == 0) {
          _swift_bridgeObjectRelease(pvVar5);
          pvVar5 = *(void **)((long)local_98 + lVar2);
          SVar12.bridgeObject = pvVar5;
          SVar12.str = (char *)*puVar10;
          _swift_bridgeObjectRetain(pvVar5);
        }
        FUN_100029548(puVar10,FUN_10040211c);
        uVar1 = *(ulong *)(puVar3 + 0x10);
        local_68 = puVar3;
        if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar1) {
          FUN_1001c5bc4(1 < *(ulong *)(puVar3 + 0x18),uVar1 + 1,1);
        }
        puVar3 = local_68;
        *(ulong *)(local_68 + 0x10) = uVar1 + 1;
        *(String *)(local_68 + uVar1 * 0x10 + 0x20) = SVar12;
        puVar7 = puVar7 + lVar6;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      _swift_bridgeObjectRelease(local_a0);
      param_2 = local_98[2];
      param_1 = local_98[1];
      lVar6 = local_98[0];
    }
    puVar7 = puVar3;
    FUN_10020c98c();
    _swift_bridgeObjectRelease(puVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + lVar6);
    *(undefined **)(unaff_x20 + lVar6) = puVar7;
    _swift_bridgeObjectRetain(puVar7);
    _swift_bridgeObjectRelease(uVar8);
  }
  else {
    _swift_bridgeObjectRetain(puVar7);
  }
  FUN_1002165a4(param_1,param_2,puVar7);
  _swift_bridgeObjectRelease(puVar7);
  return (uint)param_1 & 1;
}

