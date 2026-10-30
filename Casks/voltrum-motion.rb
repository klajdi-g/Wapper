# Generated from verified artifact bytes; publish the release before installing.
cask "voltrum-motion" do
  version "0.3.1"
  sha256 "8d07284f46ce04e269a64ae020aafbfe18a732d63f2d57c1068942693c5a6f12"

  url "https://github.com/klajdi-g/Wapper/releases/download/motion-v0.3.1-preview/Voltrum-Motion-0.3.1-preview-universal.dmg"
  name "Voltrum Motion"
  desc "Offline live wallpapers and local video imports"
  homepage "https://motion.voltrum.co"

  depends_on macos: :sonoma
  app "Voltrum Motion.app"

  caveats <<~EOS
    This preview is ad-hoc signed and is not Apple notarized.
    macOS may block opening it. No Gatekeeper settings are changed.
  EOS
end
