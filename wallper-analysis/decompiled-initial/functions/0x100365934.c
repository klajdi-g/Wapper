// rea decompile_all
// name: FUN_100365934
// address: 0x100365934
// body: available
// range: 0x100365934-0x100365ad3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100365ab0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100365934(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 auStack_70 [2];
  undefined1 auStack_60 [8];
  undefined *local_58;
  
  lVar1 = 0;
  FUN_100386f18();
  lVar10 = *(long *)(lVar1 + -8);
  lVar9 = *(long *)(lVar10 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar1 = -(lVar9 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100556a90;
  FUN_100002f94(&DAT_100556a90,&DAT_100433b60);
  _swift_initStaticObject();
  local_58 = puVar2;
  FUN_100029504(param_2,auStack_60 + lVar1,FUN_100386f18);
  uVar8 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar11 = uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff);
  puVar2 = &DAT_10053c098;
  _swift_allocObject(&DAT_10053c098,uVar11 + lVar9,uVar8 | 7);
  FUN_100007e64(auStack_60 + lVar1,puVar2 + uVar11,FUN_100386f18);
  puVar3 = &DAT_10054b528;
  FUN_100002f94(&DAT_10054b528,&DAT_10042b340);
  puVar4 = &DAT_10054b1e0;
  FUN_100002f94(&DAT_10054b1e0,&DAT_10041c400);
  puVar5 = &DAT_10054b538;
  FUN_1000087a0(&DAT_10054b538,&DAT_10054b528,&DAT_10042b340,
                PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100523b60);
  puVar6 = &DAT_10054b200;
  FUN_1000087a0(&DAT_10054b200,&DAT_10054b1e0,&DAT_10041c400,
                PTR_SwiftUI__SwiftUI__Toggle<undefined>_>SwiftUI__View_1005234a0);
  puVar7 = puVar6;
  FUN_10002a794();
  *(undefined **)((long)auStack_70 + lVar1) = puVar7;
  (extension_SwiftUI)::SwiftUI::ForEach::_init
            (param_1,puVar7,FUN_1003894f8,puVar2,puVar3,PTR___type_metadata_for_Swift_Int_100523bd8,
             puVar4,puVar5,puVar6);
  return;
}

