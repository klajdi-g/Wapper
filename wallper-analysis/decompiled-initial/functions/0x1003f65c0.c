// rea decompile_all
// name: FUN_1003f65c0
// address: 0x1003f65c0
// body: available
// range: 0x1003f65c0-0x1003f6bff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003f6be4 to 0x1003f6c7c FUN_1003f6c7c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003f65c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ID self;
  undefined *puVar10;
  long *plVar11;
  undefined8 uVar12;
  Alignment AVar13;
  long unaff_x22;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  if (DAT_100557eb0 != -1) {
    param_1 = &DAT_100557eb0;
    _swift_once(&DAT_100557eb0,FUN_10025a3bc);
  }
  lVar9 = DAT_100577d68;
  lVar17 = *(long *)(unaff_x22 + 0x80);
  uVar15 = *(undefined8 *)(lVar17 + _TtC7Wallper11AppDelegate::licenseManager);
  uVar16 = *(undefined8 *)(lVar17 + _TtC7Wallper11AppDelegate::videoLibrary);
  uVar19 = *(undefined8 *)(lVar17 + _TtC7Wallper11AppDelegate::deviceManager);
  FUN_1003f42cc();
  lVar2 = _TtC7Wallper13WindowManager::injectedLicenseManager;
  uVar14 = *(undefined8 *)(lVar17 + _TtC7Wallper11AppDelegate::previewManager);
  AVar13.unknown = *(undefined **)(lVar17 + _TtC7Wallper11AppDelegate::playlistManager);
  uVar12 = *(undefined8 *)(lVar9 + _TtC7Wallper13WindowManager::injectedLicenseManager);
  *(undefined8 *)(lVar9 + _TtC7Wallper13WindowManager::injectedLicenseManager) = uVar15;
  _swift_retain(uVar15);
  _swift_release(uVar12);
  lVar3 = _TtC7Wallper13WindowManager::injectedVideoLibrary;
  uVar12 = *(undefined8 *)(lVar9 + _TtC7Wallper13WindowManager::injectedVideoLibrary);
  *(undefined8 *)(lVar9 + _TtC7Wallper13WindowManager::injectedVideoLibrary) = uVar16;
  _swift_retain(uVar16);
  _swift_release(uVar12);
  lVar5 = _TtC7Wallper13WindowManager::injectedDeviceManager;
  uVar12 = *(undefined8 *)(lVar9 + _TtC7Wallper13WindowManager::injectedDeviceManager);
  *(undefined8 *)(lVar9 + _TtC7Wallper13WindowManager::injectedDeviceManager) = uVar19;
  _swift_retain(uVar19);
  _swift_release(uVar12);
  lVar6 = _TtC7Wallper13WindowManager::injectedShuffleManager;
  uVar12 = *(undefined8 *)(lVar9 + _TtC7Wallper13WindowManager::injectedShuffleManager);
  *(undefined8 **)(lVar9 + _TtC7Wallper13WindowManager::injectedShuffleManager) = param_1;
  _swift_retain(param_1);
  _swift_release(uVar12);
  lVar7 = _TtC7Wallper13WindowManager::injectedPreviewManager;
  uVar12 = *(undefined8 *)(lVar9 + _TtC7Wallper13WindowManager::injectedPreviewManager);
  *(undefined8 *)(lVar9 + _TtC7Wallper13WindowManager::injectedPreviewManager) = uVar14;
  _swift_retain(uVar14);
  _swift_release(uVar12);
  lVar8 = _TtC7Wallper13WindowManager::injectedPlaylistManager;
  uVar12 = *(undefined8 *)(lVar9 + _TtC7Wallper13WindowManager::injectedPlaylistManager);
  *(undefined **)(lVar9 + _TtC7Wallper13WindowManager::injectedPlaylistManager) = AVar13.unknown;
  _swift_retain(AVar13.unknown);
  _swift_release(uVar12);
  FUN_10025ae40(uVar15);
  _swift_release(param_1);
  *(byte *)(lVar9 + _TtC7Wallper13WindowManager::canOpenUI) =
       (*(byte *)(lVar9 + _TtC7Wallper13WindowManager::isBanned) ^ 0xff) & 1;
  if ((*(byte *)(lVar17 + _TtC7Wallper11AppDelegate::launchedFromLoginItem) & 1) == 0) {
    uVar18 = *(undefined8 *)
              (*(long *)(unaff_x22 + 0x80) +
              _TtC7Wallper11AppDelegate::___lazy_storage___shuffleManager);
    uVar12 = *(undefined8 *)(lVar9 + lVar2);
    *(undefined8 *)(lVar9 + lVar2) = uVar15;
    _swift_retain(uVar15);
    _swift_retain(uVar18);
    _swift_release(uVar12);
    uVar12 = *(undefined8 *)(lVar9 + lVar3);
    *(undefined8 *)(lVar9 + lVar3) = uVar16;
    _swift_retain();
    _swift_release(uVar12);
    uVar12 = *(undefined8 *)(lVar9 + lVar5);
    *(undefined8 *)(lVar9 + lVar5) = uVar19;
    _swift_retain(uVar19);
    _swift_release(uVar12);
    uVar12 = *(undefined8 *)(lVar9 + lVar6);
    *(undefined8 *)(lVar9 + lVar6) = uVar18;
    _swift_retain(uVar18);
    _swift_release(uVar12);
    uVar12 = *(undefined8 *)(lVar9 + lVar7);
    *(undefined8 *)(lVar9 + lVar7) = uVar14;
    _swift_retain(uVar14);
    _swift_release(uVar12);
    uVar12 = *(undefined8 *)(lVar9 + lVar8);
    *(undefined **)(lVar9 + lVar8) = AVar13.unknown;
    _swift_retain(AVar13.unknown);
    _swift_release(uVar12);
    FUN_10025ae40(uVar15);
    self = *(ID *)(lVar9 + _TtC7Wallper13WindowManager::mainWindow);
    if (self == 0) {
      lVar2 = *(long *)(unaff_x22 + 0x88);
      lVar3 = *(long *)(unaff_x22 + 0x90);
      FUN_1003a7efc(lVar3);
      uVar12 = 0;
      FUN_10014e37c();
      FUN_1000036d0(&DAT_100553148,FUN_10014e37c,&TargetProtocolConformanceDescriptor_100427f04);
      (extension_SwiftUI)::Combine::ObservableObject::_get_environmentStore();
      puVar10 = &DAT_100557e10;
      FUN_100002f94(&DAT_100557e10,&DAT_10042c148);
      iVar4 = *(int *)(puVar10 + 0x24);
      *(undefined8 *)(lVar3 + iVar4) = uVar12;
      ((undefined8 *)(lVar3 + iVar4))[1] = uVar15;
      uVar12 = 0;
      FUN_100279594();
      FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
      _swift_retain(uVar15);
      (extension_SwiftUI)::Combine::ObservableObject::_get_environmentStore();
      puVar10 = &DAT_100557e20;
      FUN_100002f94(&DAT_100557e20,&DAT_100436e00);
      iVar4 = *(int *)(puVar10 + 0x24);
      *(undefined8 *)(lVar3 + iVar4) = uVar12;
      ((undefined8 *)(lVar3 + iVar4))[1] = uVar16;
      uVar12 = 0;
      FUN_10013b98c();
      FUN_1000036d0(&DAT_100553150,FUN_10013b98c,&TargetProtocolConformanceDescriptor_1004274b8);
      _swift_retain(uVar16);
      (extension_SwiftUI)::Combine::ObservableObject::_get_environmentStore();
      puVar10 = &DAT_100557e30;
      FUN_100002f94(&DAT_100557e30,&DAT_10042c150);
      iVar4 = *(int *)(puVar10 + 0x24);
      *(undefined8 *)(lVar3 + iVar4) = uVar12;
      ((undefined8 *)(lVar3 + iVar4))[1] = uVar19;
      uVar12 = 0;
      FUN_100226ac0();
      FUN_1000036d0(&DAT_10054aa48,FUN_100226ac0,&TargetProtocolConformanceDescriptor_10042b420);
      _swift_retain(uVar19);
      (extension_SwiftUI)::Combine::ObservableObject::_get_environmentStore();
      puVar10 = &DAT_100557e40;
      FUN_100002f94(&DAT_100557e40,&DAT_100436e10);
      iVar4 = *(int *)(puVar10 + 0x24);
      *(undefined8 *)(lVar3 + iVar4) = uVar12;
      ((undefined8 *)(lVar3 + iVar4))[1] = uVar18;
      uVar12 = 0;
      FUN_1001eba34();
      FUN_1000036d0(&DAT_100553e00,FUN_1001eba34,&TargetProtocolConformanceDescriptor_10042add0);
      _swift_retain(uVar18);
      (extension_SwiftUI)::Combine::ObservableObject::_get_environmentStore();
      puVar10 = &DAT_100557e50;
      FUN_100002f94(&DAT_100557e50,&DAT_10042c158);
      iVar4 = *(int *)(puVar10 + 0x24);
      *(undefined8 *)(lVar3 + iVar4) = uVar12;
      ((undefined8 *)(lVar3 + iVar4))[1] = uVar14;
      uVar12 = 0;
      FUN_1001b7378();
      FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
      _swift_retain(uVar14);
      (extension_SwiftUI)::Combine::ObservableObject::_get_environmentStore();
      puVar10 = &DAT_100557e60;
      FUN_100002f94();
      iVar4 = *(int *)(puVar10 + 0x24);
      *(undefined8 *)(lVar3 + iVar4) = uVar12;
      ((undefined8 *)(lVar3 + iVar4))[1] = AVar13.unknown;
      _swift_retain();
      SwiftUI::Alignment::get_center(AVar13);
      SwiftUI::_FlexFrameLayout::_init((Alignment)0x4094500000000000);
      puVar1 = (undefined8 *)(lVar3 + *(int *)(lVar2 + 0x24));
      uVar14 = *(undefined8 *)(unaff_x22 + 0x18);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x10);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x20);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x38);
      uVar19 = *(undefined8 *)(unaff_x22 + 0x30);
      puVar1[3] = *(undefined8 *)(unaff_x22 + 0x28);
      puVar1[2] = uVar15;
      puVar1[5] = uVar20;
      puVar1[4] = uVar19;
      puVar1[1] = uVar14;
      *puVar1 = uVar12;
      uVar14 = *(undefined8 *)(unaff_x22 + 0x48);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x40);
      uVar19 = *(undefined8 *)(unaff_x22 + 0x58);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x50);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x60);
      uVar22 = *(undefined8 *)(unaff_x22 + 0x78);
      uVar21 = *(undefined8 *)(unaff_x22 + 0x70);
      puVar1[0xb] = *(undefined8 *)(unaff_x22 + 0x68);
      puVar1[10] = uVar20;
      puVar1[0xd] = uVar22;
      puVar1[0xc] = uVar21;
      puVar1[7] = uVar14;
      puVar1[6] = uVar12;
      puVar1[9] = uVar19;
      puVar1[8] = uVar15;
      FUN_1003f3b14(lVar3);
      FUN_1002a9d18(uVar16);
      _swift_release(uVar18);
      FUN_10002a29c(lVar3,&DAT_1005610a0,&DAT_100436df0);
    }
    else {
      FUN_10025a508();
      objc_stub::makeKeyAndOrderFront_(self,0);
      _swift_release(uVar18);
    }
  }
  plVar11 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb0) = plVar11;
  *plVar11 = unaff_x22;
  plVar11[1] = (long)FUN_1003f6c00;
  FUN_1003f6c7c();
  return;
}

