// rea decompile_all
// name: FUN_1002e3844
// address: 0x1002e3844
// body: available
// range: 0x1002e3844-0x1002e3b1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002e3844(void)

{
  Binding BVar1;
  ID self;
  NSString *pNVar2;
  MainActor *this;
  MainActor *pMVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  MainActor *unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_e8;
  Binding local_e0;
  undefined8 uStack_d8;
  
  local_e0.unknown = (undefined *)0x65766974616e;
  uStack_d8 = 0xe600000000000000;
  pMVar3 = unaff_x20;
  SwiftUI::AppStorage::set_wrappedValue
            ((AppStorage *)unaff_x20,&local_e0,*(undefined8 *)(unaff_x20 + 0x10),
             PTR___type_metadata_for_Swift_String_100523a98);
  local_e0.unknown._0_1_ = 1;
  SwiftUI::AppStorage::set_wrappedValue
            ((AppStorage *)PTR___type_metadata_for_Swift_Bool_100523b70,&local_e0,
             *(undefined8 *)(pMVar3 + 0x18),PTR___type_metadata_for_Swift_Bool_100523b70);
  local_e0.unknown._0_1_ = 1;
  SwiftUI::AppStorage::set_wrappedValue();
  local_e0.unknown._0_1_ = 0;
  SwiftUI::AppStorage::set_wrappedValue();
  local_e0.unknown._0_1_ = 0;
  SwiftUI::AppStorage::set_wrappedValue();
  local_e0.unknown._0_1_ = 1;
  SwiftUI::AppStorage::set_wrappedValue();
  local_e0.unknown = (undefined *)0x14;
  SwiftUI::AppStorage::set_wrappedValue();
  local_e0.unknown._0_1_ = 1;
  SwiftUI::AppStorage::set_wrappedValue();
  local_e0.unknown = (undefined *)0x0;
  SwiftUI::AppStorage::set_wrappedValue();
  local_e0.unknown = (undefined *)0x3fe999999999999a;
  SwiftUI::AppStorage::set_wrappedValue();
  self = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  NSUserDefaults::removeObjectForKey_(self,pNVar2);
  this = Swift::MainActor::typeMetadataAccessor();
  puVar5 = PTR_typeMetadataAccessor_1005246d8;
  pMVar3 = unaff_x20;
  FUN_1002e9be0();
  pMVar3 = Swift::MainActor::get_shared(this,pMVar3);
  puVar4 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar5,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  puVar5 = &DAT_100538fc0;
  _swift_allocObject(&DAT_100538fc0,0xc0,7);
  *(MainActor **)(puVar5 + 0x10) = pMVar3;
  *(undefined8 **)(puVar5 + 0x18) = puVar4;
  uVar6 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x70);
  *(undefined8 *)(puVar5 + 0x88) = *(undefined8 *)(unaff_x20 + 0x68);
  *(undefined8 *)(puVar5 + 0x80) = uVar6;
  *(undefined8 *)(puVar5 + 0x98) = uVar8;
  *(undefined8 *)(puVar5 + 0x90) = uVar7;
  uVar6 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x90);
  *(undefined8 *)(puVar5 + 0xa8) = *(undefined8 *)(unaff_x20 + 0x88);
  *(undefined8 *)(puVar5 + 0xa0) = uVar6;
  *(undefined8 *)(puVar5 + 0xb8) = uVar8;
  *(undefined8 *)(puVar5 + 0xb0) = uVar7;
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(puVar5 + 0x48) = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(puVar5 + 0x40) = uVar6;
  *(undefined8 *)(puVar5 + 0x58) = uVar8;
  *(undefined8 *)(puVar5 + 0x50) = uVar7;
  uVar6 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined8 *)(puVar5 + 0x68) = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined8 *)(puVar5 + 0x60) = uVar6;
  *(undefined8 *)(puVar5 + 0x78) = uVar8;
  *(undefined8 *)(puVar5 + 0x70) = uVar7;
  uVar6 = *(undefined8 *)unaff_x20;
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(puVar5 + 0x28) = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(puVar5 + 0x20) = uVar6;
  *(undefined8 *)(puVar5 + 0x38) = uVar8;
  *(undefined8 *)(puVar5 + 0x30) = uVar7;
  pMVar3 = unaff_x20;
  FUN_1002e9be0();
  pMVar3 = Swift::MainActor::get_shared(this,pMVar3);
  puVar5 = &DAT_100538fe8;
  _swift_allocObject(&DAT_100538fe8,0xc0,7);
  *(MainActor **)(puVar5 + 0x10) = pMVar3;
  *(undefined8 **)(puVar5 + 0x18) = puVar4;
  uVar6 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x70);
  *(undefined8 *)(puVar5 + 0x88) = *(undefined8 *)(unaff_x20 + 0x68);
  *(undefined8 *)(puVar5 + 0x80) = uVar6;
  *(undefined8 *)(puVar5 + 0x98) = uVar8;
  *(undefined8 *)(puVar5 + 0x90) = uVar7;
  uVar6 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x90);
  *(undefined8 *)(puVar5 + 0xa8) = *(undefined8 *)(unaff_x20 + 0x88);
  *(undefined8 *)(puVar5 + 0xa0) = uVar6;
  *(undefined8 *)(puVar5 + 0xb8) = uVar8;
  *(undefined8 *)(puVar5 + 0xb0) = uVar7;
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(puVar5 + 0x48) = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(puVar5 + 0x40) = uVar6;
  *(undefined8 *)(puVar5 + 0x58) = uVar8;
  *(undefined8 *)(puVar5 + 0x50) = uVar7;
  uVar6 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined8 *)(puVar5 + 0x68) = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined8 *)(puVar5 + 0x60) = uVar6;
  *(undefined8 *)(puVar5 + 0x78) = uVar8;
  *(undefined8 *)(puVar5 + 0x70) = uVar7;
  uVar6 = *(undefined8 *)unaff_x20;
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(puVar5 + 0x28) = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(puVar5 + 0x20) = uVar6;
  *(undefined8 *)(puVar5 + 0x38) = uVar8;
  *(undefined8 *)(puVar5 + 0x30) = uVar7;
  SwiftUI::Binding::init();
  uVar6 = uStack_d8;
  BVar1.unknown = local_e0.unknown;
  local_e8 = 0x3ff0000000000000;
  puVar5 = &DAT_10055ac60;
  FUN_100002f94(&DAT_10055ac60,&DAT_10042f450);
  SwiftUI::Binding::set_wrappedValue(&local_e0,&local_e8,puVar5);
  _swift_release(uVar6);
  _swift_release(BVar1.unknown);
  return;
}

