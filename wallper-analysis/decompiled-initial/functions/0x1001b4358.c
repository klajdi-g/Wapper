// rea decompile_all
// name: FUN_1001b4358
// address: 0x1001b4358
// body: available
// range: 0x1001b4358-0x1001b460b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001b4358(byte param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  UUID UVar5;
  Published *pPVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  PassthroughSubject *pPVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_70;
  byte local_61;
  
  lVar2 = 0;
  FUN_1001b7b68();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar8 = (long)&uStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_10054a9c8;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  lVar10 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar9 = lVar10 - extraout_x12;
  puVar3 = &DAT_10042a740;
  _swift_getKeyPath(&DAT_10042a740);
  puVar4 = &DAT_10042a768;
  _swift_getKeyPath(&DAT_10042a768);
  Combine::Published::_get_subscript(&local_61);
  _swift_release(puVar3);
  _swift_release(puVar4);
  if ((param_1 & 1) != local_61) {
    FUN_1001b6d00(param_1 & 1);
    if ((param_1 & 1) != 0) {
      UVar5 = Foundation::UUID::typeMetadataAccessor();
      (**(code **)(*(long *)(UVar5.unknown + -8) + 0x38))(lVar9,1,1,UVar5.unknown);
      pPVar6 = (Published *)&DAT_10042a670;
      _swift_getKeyPath(&DAT_10042a670);
      _swift_getKeyPath(&DAT_10042a698);
      FUN_1000087e4(lVar9,lVar10,&DAT_10054a9c8,&DAT_10041bbe0);
      _swift_retain();
      Combine::Published::_set_subscript(pPVar6,lVar10);
      FUN_1001b69c4();
      FUN_10002a29c(lVar9,&DAT_10054a9c8,&DAT_10041bbe0);
    }
    FUN_1001c0830(0,1);
    pPVar7 = *(PassthroughSubject **)(unaff_x20 + _TtC7Wallper15PlaylistManager::activationChanged);
    puVar3 = &DAT_10042a670;
    _swift_getKeyPath(&DAT_10042a670);
    puVar4 = &DAT_10042a698;
    _swift_getKeyPath(&DAT_10042a698);
    Combine::Published::_get_subscript(lVar8);
    _swift_release(puVar3);
    _swift_release(puVar4);
    puVar1 = (undefined8 *)(lVar8 + *(int *)(lVar2 + 0x14));
    *puVar1 = 0;
    puVar1[1] = 0;
    Combine::PassthroughSubject::send(pPVar7,lVar8);
    FUN_100029548(lVar8,FUN_1001b7b68);
    FUN_100002f94(&DAT_10054ac18,&DAT_10041beb0);
    FUN_1000087a0(&DAT_100556858,&DAT_10054ac18,&DAT_10041beb0,
                  PTR__Combine__protocol_conformance_descriptor_for_Combine_PassthroughSubject<A,B>___Combine_Subject_in_Combine_>Combine__Subject_100521460
                 );
    (extension_Combine)::Combine::Subject::_send();
  }
  return;
}

