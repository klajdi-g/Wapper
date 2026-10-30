# Generated from verified artifact bytes; publish the release before installing.
cask "voltrum-motion" do
  version "0.3.0"
  sha256 "eb2e2929f1fbf33cd493930b0eb5aba1cea6baf82fb831e87e3998291d797792"

  url "https://github.com/klajdi-g/Wapper/releases/download/motion-v0.3.0-preview/Voltrum-Motion-0.3.0-preview-universal.dmg"
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
