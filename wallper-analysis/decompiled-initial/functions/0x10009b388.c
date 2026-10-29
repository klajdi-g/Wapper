// rea decompile_all
// name: FUN_10009b388
// address: 0x10009b388
// body: available
// range: 0x10009b388-0x10009b5b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10009b5a4 to 0x100413514 /usr/lib/swift/libswift_Concurrency.dylib::(extension_Swift)::Swift::Task::$get_value (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_10009b388(void)

{
  int iVar1;
  long lVar2;
  TaskPriority TVar3;
  TaskPriority TVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  ID self;
  long unaff_x22;
  long lVar10;
  long lVar11;
  long lVar12;
  
  self = *(ID *)(unaff_x22 + 0x40);
  lVar8 = *(long *)(unaff_x22 + 0x28);
  lVar2 = 0;
  FUN_10009a6f8();
  *(long *)(unaff_x22 + 0x68) = lVar2;
  if ((*(byte *)(lVar8 + *(int *)(lVar2 + 0x18)) & 1) == 0) {
    plVar7 = *(long **)(unaff_x22 + 0x30);
    lVar8 = *(long *)(unaff_x22 + 0x38);
    lVar10 = *plVar7;
    *(long *)(unaff_x22 + 0x70) = lVar10;
    if (lVar8 != 0) {
      lVar11 = plVar7[3];
      lVar12 = plVar7[4];
      _swift_bridgeObjectRetain(lVar8);
      FUN_10009be30(lVar10,lVar8);
      if (lVar10 == 0) {
        TVar3.unknown = (undefined *)objc_stub::CGImageForProposedRect_context_hints_(self,0,0,0);
        *(undefined **)(unaff_x22 + 0x78) = TVar3.unknown;
        if (TVar3.unknown != (undefined *)0x0) {
          uVar9 = *(undefined8 *)(unaff_x22 + 0x48);
          Swift::TaskPriority::get_userInitiated(TVar3);
          TVar4 = Swift::TaskPriority::typeMetadataAccessor();
          (**(code **)(*(long *)(TVar4.unknown + -8) + 0x38))(uVar9,0,1,TVar4.unknown);
          puVar5 = &DAT_100528788;
          _swift_allocObject(&DAT_100528788,0x38,7);
          *(undefined8 *)(puVar5 + 0x10) = 0;
          *(undefined8 *)(puVar5 + 0x18) = 0;
          *(undefined **)(puVar5 + 0x20) = TVar3.unknown;
          *(long *)(puVar5 + 0x28) = lVar11;
          *(long *)(puVar5 + 0x30) = lVar12;
          uVar6 = 0;
          FUN_10017721c(0,0,uVar9,&DAT_100420c18,puVar5);
          *(undefined8 *)(unaff_x22 + 0x80) = uVar6;
          FUN_10002a29c(uVar9,&DAT_100561090,&DAT_10041c870);
          plVar7 = (long *)(ulong)*(uint *)(PTR__get_value_100524738 + 4);
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0x88) = plVar7;
          FUN_100002f94(&DAT_10054f770,&DAT_10042a510);
          *plVar7 = unaff_x22;
          plVar7[1] = (long)FUN_10009b5b4;
          (extension_Swift)::Swift::Task::_get_value((undefined *)(unaff_x22 + 0x10));
          return;
        }
        _swift_release(*(undefined8 *)(unaff_x22 + 0x50));
      }
      else {
        lVar11 = *(long *)(unaff_x22 + 0x28);
        _swift_release(*(undefined8 *)(unaff_x22 + 0x50));
        iVar1 = *(int *)(lVar2 + 0x20);
        *(long *)(unaff_x22 + 0x20) = lVar10;
        puVar5 = &DAT_10054eed8;
        FUN_100002f94(&DAT_10054eed8,&DAT_1004249f0);
        SwiftUI::State::set_wrappedValue((State *)(lVar11 + iVar1),unaff_x22 + 0x20,puVar5);
      }
      _swift_bridgeObjectRelease(lVar8);
      goto LAB_10009b45c;
    }
  }
  _swift_release(*(undefined8 *)(unaff_x22 + 0x50));
LAB_10009b45c:
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010009b480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

