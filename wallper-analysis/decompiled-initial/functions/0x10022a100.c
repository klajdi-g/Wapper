// rea decompile_all
// name: FUN_10022a100
// address: 0x10022a100
// body: available
// range: 0x10022a100-0x10022a34f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10022a100(undefined8 param_1,long param_2,undefined8 param_3,void *param_4)

{
  uint uVar1;
  undefined *puVar2;
  URL UVar3;
  long lVar4;
  ulong uVar5;
  URL UVar6;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar7;
  char *pcVar8;
  long lVar9;
  void *pvVar10;
  long lVar11;
  String SVar12;
  undefined1 auVar13 [16];
  String SVar14;
  undefined8 local_50;
  long lStack_48;
  
  puVar2 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)&local_50 - extraout_x8;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar11 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar11 + 0x40));
  uVar7 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if (param_2 != 0) {
    _swift_bridgeObjectRetain(param_2);
    Foundation::URL::_init();
    lVar4 = lVar9;
    (**(code **)(lVar11 + 0x30))(lVar9,1,UVar3.unknown);
    if ((int)lVar4 == 1) {
      FUN_10002a29c(lVar9,&DAT_100553d90,&DAT_10041bf10);
    }
    else {
      UVar6 = UVar3;
      (**(code **)(lVar11 + 0x20))(uVar7,lVar9);
      uVar5 = uVar7;
      FUN_10004306c();
      uVar1 = (uint)uVar5 & 0xff;
      if (uVar1 != 7) {
        pcVar8 = (char *)0x746e656964617267;
        _swift_bridgeObjectRelease(param_2);
        local_50 = 0x7463617265746e69;
        lStack_48 = -0x13ffffffd29a8997;
        if (uVar1 < 3) {
          if ((uVar5 & 0xff) == 0) {
            pvVar10 = (void *)0xef61726f7275612d;
          }
          else if (uVar1 == 1) {
            pvVar10 = (void *)0xef7465736e75732d;
          }
          else {
            pvVar10 = (void *)0xee006e6165636f2d;
          }
        }
        else if (uVar1 < 5) {
          if (uVar1 == 3) {
            pvVar10 = (void *)0xed00006e6f656e2d;
          }
          else {
            pvVar10 = (void *)0xee007265626d652d;
          }
        }
        else if (uVar1 == 5) {
          pvVar10 = (void *)0xef747365726f662d;
        }
        else {
          pvVar10 = (void *)0x80000001004dbf90;
          pcVar8 = (char *)0xd000000000000011;
        }
        SVar12.bridgeObject = pvVar10;
        SVar12.str = pcVar8;
        SVar14.bridgeObject = param_4;
        SVar14.str = UVar6.unknown;
        Swift::String::append(SVar12,SVar14);
        _swift_bridgeObjectRelease(pvVar10);
        param_2 = lStack_48;
        param_1 = local_50;
      }
      (**(code **)(lVar11 + 8))(uVar7,UVar3.unknown);
    }
  }
  auVar13._8_8_ = param_2;
  auVar13._0_8_ = param_1;
  return auVar13;
}

