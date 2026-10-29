// rea decompile_all
// name: FUN_1000a40e0
// address: 0x1000a40e0
// body: available
// range: 0x1000a40e0-0x1000a4213 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000a40e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  Date DVar2;
  Context CVar3;
  GeometryProxy GVar4;
  long extraout_x8;
  char cVar5;
  long lVar6;
  undefined *local_70;
  undefined8 uStack_68;
  
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar6 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar6 + 0x40));
  GVar4.unknown = (undefined *)((long)&local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  CVar3.unknown = &DAT_10054eed0;
  FUN_100002f94(&DAT_10054eed0,&DAT_1004211b0);
  SwiftUI::TimelineView::Context::get_date(CVar3);
  FUN_10009f5dc(param_1,GVar4.unknown);
  (**(code **)(lVar6 + 8))(GVar4.unknown,DVar2.unknown);
  cVar5 = *(char *)(param_5 + 0x58);
  if (*(char *)(param_5 + 0x58) == '\f') {
    SwiftUI::AppStorage::get_wrappedValue((AppStorage)*(undefined **)(param_5 + 0x40));
    FUN_100078414(local_70,uStack_68);
    GVar4.unknown = local_70;
    cVar5 = '\0';
    if (((uint)local_70 & 0xff) != 0xc) {
      cVar5 = (char)local_70;
    }
  }
  SwiftUI::GeometryProxy::get_size(GVar4);
  lVar6 = 0;
  FUN_1000aff7c();
  *(char *)(param_1 + *(int *)(lVar6 + 0x14)) = cVar5;
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar6 + 0x18));
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined2 *)(param_1 + *(int *)(lVar6 + 0x1c)) = 0x101;
  *(undefined1 *)(param_1 + *(int *)(lVar6 + 0x20)) = 0;
  return;
}

