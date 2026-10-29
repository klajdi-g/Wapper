// rea decompile_all
// name: FUN_1002c22bc
// address: 0x1002c22bc
// body: available
// range: 0x1002c22bc-0x1002c23db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1002c22bc(undefined8 param_1,undefined8 param_2)

{
  _StringObject _Var1;
  ulong uVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  UnsafeBufferPointer<__int8> UVar6;
  undefined **ppuVar7;
  undefined1 auVar8 [16];
  undefined *local_58;
  ulong uStack_50;
  
  _swift_bridgeObjectRetain(param_2);
  lVar3 = 0x7fffffffffffffff;
  FUN_100032718(0x7fffffffffffffff,1,param_1,param_2);
  if (*(long *)(lVar3 + 0x10) != 0) {
    ppuVar5 = *(undefined ***)(lVar3 + 0x20);
    ppuVar7 = *(undefined ***)(lVar3 + 0x28);
    _Var1.unknown = *(undefined **)(lVar3 + 0x30);
    uVar2 = *(ulong *)(lVar3 + 0x38);
    _swift_bridgeObjectRetain(uVar2);
    _swift_bridgeObjectRelease(lVar3);
    if (((ulong)ppuVar7 ^ (ulong)ppuVar5) >> 0xe != 0) {
      if ((uVar2 >> 0x3c & 1) == 0) {
        if ((uVar2 >> 0x3d & 1) == 0) {
          if (((ulong)_Var1.unknown >> 0x3c & 1) == 0) {
            UVar6 = Swift::_StringObject::get_sharedUTF8(_Var1);
          }
          else {
            UVar6.unknown = (undefined *)((uVar2 & 0xfffffffffffffff) + 0x20);
          }
        }
        else {
          uStack_50 = uVar2 & 0xffffffffffffff;
          UVar6.unknown = (undefined *)&local_58;
          local_58 = _Var1.unknown;
        }
        ppuVar4 = ppuVar5;
        FUN_10029c130(UVar6.unknown,ppuVar5,ppuVar7,_Var1.unknown,uVar2);
        ppuVar5 = (undefined **)UVar6.unknown;
        ppuVar7 = ppuVar4;
      }
      else {
        FUN_10029b6a4(ppuVar5,ppuVar7,_Var1.unknown,uVar2,10);
      }
      _swift_bridgeObjectRelease(uVar2);
      ppuVar4 = (undefined **)0x0;
      if (((uint)ppuVar7 & 0xff) != 1) {
        ppuVar4 = ppuVar5;
      }
      goto LAB_1002c2394;
    }
  }
  _swift_bridgeObjectRelease();
  ppuVar7 = (undefined **)0x1;
  ppuVar4 = (undefined **)0x0;
LAB_1002c2394:
  auVar8._8_8_ = ppuVar7;
  auVar8._0_8_ = ppuVar4;
  return auVar8;
}

