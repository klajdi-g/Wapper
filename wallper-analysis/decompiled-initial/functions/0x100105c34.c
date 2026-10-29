// rea decompile_all
// name: FUN_100105c34
// address: 0x100105c34
// body: available
// range: 0x100105c34-0x100105d6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100105cec */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100105c34(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  EnvironmentObject<undefined> EVar4;
  long lVar5;
  State<undefined> SVar6;
  undefined *puVar7;
  uint7 uStack_5f;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long local_40;
  long lStack_38;
  
  FUN_10002f154();
  FUN_100279594(0);
  puVar3 = &DAT_100553dd0;
  FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
  EVar4 = SwiftUI::EnvironmentObject::init();
  lVar5 = 0;
  FUN_10011c000();
  *(undefined8 *)(param_1 + *(int *)(lVar5 + 0x14)) = 0x3ffc71c71c71c71c;
  *(undefined1 *)(param_1 + *(int *)(lVar5 + 0x18)) = 1;
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar5 + 0x1c));
  *puVar1 = EVar4.unknown;
  puVar1[1] = puVar3;
  puVar7 = PTR___type_metadata_for_Swift_Bool_100523b70;
  SwiftUI::State::init
            (param_1 + *(int *)(lVar5 + 0x20),lVar5,PTR___type_metadata_for_Swift_Bool_100523b70);
  SVar6 = SwiftUI::State::init(param_1 + *(int *)(lVar5 + 0x24),lVar5,puVar7);
  SwiftUI::Alignment::get_center((Alignment)SVar6.unknown);
  SwiftUI::_FrameLayout::_init((Alignment)0x4071800000000000);
  puVar7 = &DAT_100552d38;
  FUN_100002f94(&DAT_100552d38,&DAT_1004255c0);
  plVar2 = (long *)(param_1 + *(int *)(puVar7 + 0x24));
  plVar2[1] = lStack_58;
  *plVar2 = (ulong)uStack_5f << 8;
  plVar2[3] = lStack_48;
  plVar2[2] = lStack_50;
  plVar2[5] = lStack_38;
  plVar2[4] = local_40;
  return;
}

