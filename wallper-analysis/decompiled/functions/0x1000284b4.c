// rea decompile_all
// name: FUN_1000284b4
// address: 0x1000284b4
// body: available
// range: 0x1000284b4-0x1000285cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000284b4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 *local_70;
  undefined *puStack_68;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  
  if (DAT_10054ad68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10054ac88;
  FUN_100002fe4(&DAT_10054ac88,&DAT_10041bfa0);
  puVar2 = &DAT_10054ac78;
  FUN_100002fe4(&DAT_10054ac78,&DAT_10041bf90);
  puVar3 = &DAT_10054ac60;
  FUN_100002fe4(&DAT_10054ac60,&DAT_10041bf78);
  puVar4 = puVar3;
  FUN_100028164();
  puVar5 = &DAT_10054ad60;
  FUN_1000087a0(&DAT_10054ad60,&DAT_10054ac60,&DAT_10041bf78,
                PTR_SwiftUI__SwiftUI__GestureStateGesture<undefined,undefined>_>SwiftUI__Gesture_100521b18
               );
  ppuVar6 = &local_60;
  local_60 = puVar2;
  puStack_58 = puVar3;
  local_50 = puVar4;
  puStack_48 = puVar5;
  _swift_getOpaqueTypeConformance2
            (ppuVar6,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_gesture<A_where_A1:_SwiftUI_Gesture>(_:_A1,including:_SwiftUI_GestureMask)__>_some>>_1005230d8
             ,1);
  puVar2 = &DAT_10054aa18;
  FUN_1000087a0(&DAT_10054aa18,&DAT_10054aa20,&DAT_10041bcb0,
                PTR_SwiftUI__SwiftUI___AnimationModifier<undefined>_>SwiftUI__ViewModifier_1005226a8
               );
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
  local_70 = ppuVar6;
  puStack_68 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
             puVar1,&local_70);
  DAT_10054ad68 = puVar3;
  return;
}

