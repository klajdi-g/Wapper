// rea decompile_all
// name: _TtC7Wallper21VideoWallpaperManager::.cxx_destruct
// address: 0x100255c0c
// body: available
// range: 0x100255c0c-0x100255db3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100255db0 to 0x10041478c _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

void _TtC7Wallper21VideoWallpaperManager::_cxx_destruct(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  
  _swift_release(*(undefined8 *)(param_1 + playback));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + wantsPlaying));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + holds));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + globalHolds));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + players));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + windows));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + loopers));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + silencers));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + playerObservers));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + looperObservers));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + failureRebuilds));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + stallRebuilds));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + watchdogRetryCount));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + watchdogLastRetryTime));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + watchdogResetWorkItem));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + shownPlayers));
  uVar1 = *(undefined8 *)(param_1 + transitions);
  _swift_bridgeObjectRelease(((undefined8 *)(param_1 + transitions))[1]);
  _swift_bridgeObjectRelease(uVar1);
  _swift_release(*(undefined8 *)(param_1 + musicThemeHolder));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + playbackStateKey + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + forcedRebuildScreens));
  _swift_release(*(undefined8 *)(param_1 + savePlaybackWorkItem));
  _swift_release(*(undefined8 *)(param_1 + settingsDebounceWorkItem));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + appliedWallpaperURL));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + adaptedWallpaperURLs));
  return;
}

