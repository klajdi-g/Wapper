// rea decompile_all
// name: FUN_100002e88
// address: 0x100002e88
// body: available
// range: 0x100002e88-0x100002f0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100002e88(undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  
  uVar4 = param_1[1];
  uVar8 = param_1[1];
  uVar7 = *param_1;
  uVar6 = param_1[3];
  uVar5 = param_1[2];
  uVar3 = param_1[3];
  iVar1 = 1;
  FUN_1004107b8(1,0xf,1,0);
  puVar2 = 
  PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_popover<A_where_A1:_SwiftUI_View>(isPresented:_SwiftUI_Binding<Swift_Bool>,attachmentAnchor:_SwiftUI_PopoverAttachmentAnchor,arrowEdge:_SwiftUI_Edge,content:_()__>_A1)__>_some>>_100523108
  ;
  uStack_38 = uVar8;
  local_28 = uVar6;
  if (iVar1 != 0) {
    puVar2 = 
    PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_popoverCore<A_where_A1:_SwiftUI_View>(isPresented:_SwiftUI_Binding<Swift_Bool>,attachmentAnchor:_SwiftUI_PopoverAttachmentAnchor,arrowEdges:_SwiftUI_Edge_Set_,isDetachable:_Swift_Bool,content:_()__>_A1)__>_some>>_100522ef8
    ;
    uStack_38 = uVar4;
    local_28 = uVar3;
  }
  local_40 = uVar7;
  local_30 = uVar5;
  _swift_getOpaqueTypeMetadata2(0,&local_40,puVar2,0);
  return;
}

