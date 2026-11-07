# Native selected-catalog checks

SmokeTest owner: inside the existing `do` block, add:

```swift
checks += try await runNativeCatalogTests(root: temporaryRoot.appendingPathComponent("catalog"))
```

`NativeCatalogTests.swift` is automatically compiled into the executable target. Its 32 checks use an isolated library and URLProtocol fixtures; they do not require a live endpoint or alter the user's library. The helper deletes its supplied test root when finished; supply a dedicated child directory.

Keep legacy approval assertions scoped to items where `!library.isSelectedCatalogItem($0)`. Selected records use the transport contract, not fabricated publication approvals. Keep the existing policy-validation, import, and Aurora retirement tests.

Standalone execution, from the repository root (set `scratch` to a separate build directory):

```sh
swift build --package-path WallperRebuilt --scratch-path "$scratch" -c debug
bin=$(swift build --package-path WallperRebuilt --scratch-path "$scratch" -c debug --show-bin-path)
swiftc -parse-as-library WallperRebuilt/Sources/WallperRebuilt/Models.swift WallperRebuilt/Sources/WallperRebuilt/LibraryStore.swift WallperRebuilt/Sources/WallperRebuilt/NativeCatalogTests.swift tools/native-catalog-test-main.swift -o "$scratch/native-catalog-tests"
"$scratch/native-catalog-tests" "$bin/WallperRebuilt_WallperRebuilt.bundle" "$scratch"
python3 tools/test-selected-native-catalog.py
```

The Python check verifies all 353 records against the current server builder, exact selection/order, original source URLs, and reproducible bundled generation. Native refresh requires the exact bundled selected ID set; the server's separate workshop catalog may contain imports, but `/native-catalog.json` must remain the selected collection.

These checks cover catalog/offline/transport handling. Actual preview rendering and download/apply playback remain part of the UI/playback smoke checks and deployed-endpoint integration.
