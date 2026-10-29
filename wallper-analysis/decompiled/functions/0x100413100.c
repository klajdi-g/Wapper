// rea decompile_all
// name: /System/Library/Frameworks/CryptoKit.framework/Versions/A/CryptoKit::CryptoKit::HMAC::$authenticationCode
// address: 0x100413100
// body: available
// range: 0x100413100-0x10041310b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* static CryptoKit.HMAC.authenticationCode<A where A1: Foundation.DataProtocol>(for: A1, using:
   CryptoKit.SymmetricKey) -> CryptoKit.HashedAuthenticationCode<A> */

HashedAuthenticationCode<undefined>
CryptoKit::HMAC::_authenticationCode(HashedAuthenticationCode<undefined> param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100413108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__authenticationCode_100521930)();
  return (HashedAuthenticationCode<undefined>)param_1.unknown;
}

