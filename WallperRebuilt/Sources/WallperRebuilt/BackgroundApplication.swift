import AppKit

@MainActor
final class BackgroundApplication: NSApplication {
    override func terminate(_ sender: Any?) {
        // AppKit can reject terminate before consulting its delegate when a
        // sheet is open. Handle background-only quits first so Dock Quit also
        // releases the library/preview in that state. Actual termination still
        // goes through AppKit, including system logout and shutdown requests.
        if let lifecycle = delegate as? ApplicationDelegate {
            if lifecycle.applicationShouldTerminate(self) == .terminateCancel { return }
            lifecycle.closeLibrary()
        }
        super.terminate(sender)
    }
}
