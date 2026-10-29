// rea decompile_all
// name: FUN_100164718
// address: 0x100164718
// body: available
// range: 0x100164718-0x100164883 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100164718(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  Date DVar5;
  Date DVar6;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7Wallper21MediaRemoteController::snapshot);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[6] = 0;
  *(undefined1 *)(puVar1 + 7) = 1;
  puVar1[8] = 0;
  *(undefined1 *)(puVar1 + 9) = 1;
  lVar4 = 0;
  FUN_1001698e0();
  iVar3 = *(int *)(lVar4 + 0x24);
  DVar5 = Foundation::Date::typeMetadataAccessor();
  DVar6.unknown = (undefined *)((long)puVar1 + (long)iVar3);
  (**(code **)(*(long *)(DVar5.unknown + -8) + 0x38))(DVar6.unknown,1,1,DVar5.unknown);
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x28)) = 0;
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x2c));
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x30)) = 2;
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x34));
  puVar2[1] = 0xf000000000000000;
  *puVar2 = 0;
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x38));
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x3c));
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  puVar1 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x40));
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar2 = (undefined8 *)(unaff_x20 + _TtC7Wallper21MediaRemoteController::lastEmittedSignature);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(unaff_x20 + _TtC7Wallper21MediaRemoteController::process) = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _TtC7Wallper21MediaRemoteController::stdoutBuffer);
  puVar2[1] = 0xc000000000000000;
  *puVar2 = 0;
  *(undefined1 *)(unaff_x20 + _TtC7Wallper21MediaRemoteController::isRunning) = 0;
  *(undefined8 *)(unaff_x20 + _TtC7Wallper21MediaRemoteController::restartDelay) =
       0x4000000000000000;
  Foundation::Date::get_distantPast(DVar6);
  *(undefined8 *)(unaff_x20 + _TtC7Wallper21MediaRemoteController::sendCommand) = 0;
  *(undefined8 *)(unaff_x20 + _TtC7Wallper21MediaRemoteController::setElapsedTime) = 0;
  FUN_100164884();
  return;
}

