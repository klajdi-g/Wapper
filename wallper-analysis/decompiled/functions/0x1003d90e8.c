// rea decompile_all
// name: FUN_1003d90e8
// address: 0x1003d90e8
// body: available
// range: 0x1003d90e8-0x1003d92c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003d91dc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003d90e8(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  URL UVar6;
  undefined *puVar7;
  Color CVar8;
  AnyView AVar9;
  undefined *puVar10;
  long extraout_x8;
  long unaff_x20;
  undefined *puVar11;
  undefined auStack_70 [8];
  undefined *local_68;
  
  puVar4 = &DAT_100553d90;
  puVar10 = &DAT_10041bf10;
  FUN_100002f94();
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = auStack_70 + -extraout_x8;
  FUN_1003d8f68();
  lVar5 = 0;
  FUN_10040211c();
  iVar2 = *(int *)(lVar5 + 0x14);
  UVar6 = Foundation::URL::typeMetadataAccessor();
  lVar5 = *(long *)(UVar6.unknown + -8);
  (**(code **)(lVar5 + 0x10))(puVar11,unaff_x20 + iVar2,UVar6.unknown);
  (**(code **)(lVar5 + 0x38))(puVar11,0,1,UVar6.unknown);
  lVar5 = 0;
  FUN_100113f00();
  iVar2 = *(int *)(lVar5 + 0x24);
  local_68 = (undefined *)0x0;
  puVar7 = &DAT_10054bd30;
  FUN_100002f94(&DAT_10054bd30,&DAT_10041d460);
  SwiftUI::State::init((long)param_1 + (long)iVar2,puVar7,puVar7);
  local_68 = (undefined *)CONCAT71(local_68._1_7_,1);
  SwiftUI::State::init
            ((long)param_1 + (long)*(int *)(lVar5 + 0x28),puVar7,
             PTR___type_metadata_for_Swift_Bool_100523b70);
  puVar3 = PTR___type_metadata_for_Swift_Int_100523bd8;
  local_68 = (undefined *)0x0;
  SwiftUI::State::init
            ((long)param_1 + (long)*(int *)(lVar5 + 0x2c),puVar7,
             PTR___type_metadata_for_Swift_Int_100523bd8);
  local_68 = (undefined *)0x0;
  SwiftUI::State::init((long)param_1 + (long)*(int *)(lVar5 + 0x30),puVar7,puVar3);
  *param_1 = puVar4;
  param_1[1] = puVar10;
  CVar8.unknown = puVar11;
  FUN_1000087e4(puVar11,(long)param_1 + (long)*(int *)(lVar5 + 0x14),&DAT_100553d90,&DAT_10041bf10);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar5 + 0x18)) = 1;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x1c));
  *puVar1 = 0x140;
  *(undefined1 *)(puVar1 + 1) = 0;
  local_68 = (undefined *)SwiftUI::Color::get_black(CVar8);
  AVar9 = SwiftUI::AnyView::_init
                    (local_68,PTR___type_metadata_for_SwiftUI_Color_100523288,
                     PTR___protocol_witness_table_for_SwiftUI_Color___SwiftUI_View_in_SwiftUI_100523278
                    );
  FUN_10002a29c(puVar11,&DAT_100553d90,&DAT_10041bf10);
  *(undefined **)((long)param_1 + (long)*(int *)(lVar5 + 0x20)) = AVar9.unknown;
  return;
}

