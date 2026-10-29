// rea decompile_all
// name: thunk_FUN_100397b54
// address: 0x100397b50
// body: available
// range: 0x100397b50-0x100397b53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_100397b54(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  if (DAT_10055ed20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10055ed28;
  FUN_100002fe4(&DAT_10055ed28,&DAT_100434438);
  puVar5 = PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_1005234c0;
  puVar2 = &DAT_1005505f0;
  FUN_1000087a0(&DAT_1005505f0,&DAT_10054e2b8,&DAT_10041f1e0,
                PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_1005234c0);
  puVar3 = &DAT_10055e830;
  FUN_100002fe4(&DAT_10055e830,&DAT_100434050);
  puVar4 = &DAT_10055e850;
  FUN_1000087a0(&DAT_10055e850,&DAT_10055e830,&DAT_100434050,puVar5);
  puVar5 = puVar4;
  FUN_10038fe0c();
  puStack_58 = PTR___type_metadata_for_Swift_String_100523a98;
  ppuVar6 = &puStack_60;
  puStack_60 = puVar3;
  puStack_50 = puVar4;
  puStack_48 = puVar5;
  _swift_getOpaqueTypeConformance2
            (ppuVar6,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_dropDestination<A_where_A1:_CoreTransferable_Transferable>(for:_A1_Type,action:_([A1],__C_CGPoint)__>_Swift_Bool,isTargeted:_(Swift_Bool)__>______>_some>>_100522f90
             ,1);
  puVar3 = PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830;
  puStack_70 = puVar2;
  puStack_68 = ppuVar6;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830
             ,puVar1,&puStack_70);
  DAT_10055ed20 = puVar3;
  return;
}

