// rea decompile_all
// name: FUN_100316e30
// address: 0x100316e30
// body: available
// range: 0x100316e30-0x100316f93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100316f70 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100316e30(undefined8 param_1,void *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_190 [296];
  undefined *local_68;
  
  puVar1 = &DAT_10055c0a0;
  FUN_100002f94(&DAT_10055c0a0,&DAT_100430dc8);
  _swift_initStaticObject();
  puVar2 = &DAT_100430dd0;
  local_68 = puVar1;
  _swift_getKeyPath(&DAT_100430dd0);
  puVar1 = &DAT_10053a620;
  _swift_allocObject(&DAT_10053a620,0x131,7);
  _memcpy(puVar1 + 0x10,param_2,0x121);
  FUN_1003181f4(param_2,auStack_190);
  puVar3 = &DAT_10055c0a8;
  FUN_100002f94(&DAT_10055c0a8,&DAT_100430de8);
  puVar4 = &DAT_10055bf50;
  FUN_100002f94(&DAT_10055bf50,&DAT_100430d00);
  puVar5 = &DAT_10055c0b0;
  FUN_1000087a0(&DAT_10055c0b0,&DAT_10055c0a8,&DAT_100430de8,
                PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100523b60);
  puVar6 = puVar5;
  FUN_10031c9b4();
  FUN_1000087a0(&DAT_10055bf48,&DAT_10055bf50,&DAT_100430d00,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
  (extension_SwiftUI)::SwiftUI::ForEach::_init
            (param_1,puVar6,puVar2,FUN_10031c984,puVar1,puVar3,puVar4,puVar5,puVar6);
  return;
}

