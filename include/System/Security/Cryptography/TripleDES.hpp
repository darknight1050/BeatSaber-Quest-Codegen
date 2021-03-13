// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.SymmetricAlgorithm
#include "System/Security/Cryptography/SymmetricAlgorithm.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: KeySizes
  class KeySizes;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.TripleDES
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: C963AC
  class TripleDES : public System::Security::Cryptography::SymmetricAlgorithm {
    public:
    // Creating value type constructor for type: TripleDES
    TripleDES() noexcept {}
    // Get static field: static private System.Security.Cryptography.KeySizes[] s_legalBlockSizes
    static ::Array<System::Security::Cryptography::KeySizes*>* _get_s_legalBlockSizes();
    // Set static field: static private System.Security.Cryptography.KeySizes[] s_legalBlockSizes
    static void _set_s_legalBlockSizes(::Array<System::Security::Cryptography::KeySizes*>* value);
    // Get static field: static private System.Security.Cryptography.KeySizes[] s_legalKeySizes
    static ::Array<System::Security::Cryptography::KeySizes*>* _get_s_legalKeySizes();
    // Set static field: static private System.Security.Cryptography.KeySizes[] s_legalKeySizes
    static void _set_s_legalKeySizes(::Array<System::Security::Cryptography::KeySizes*>* value);
    // static public System.Security.Cryptography.TripleDES Create()
    // Offset: 0x196EC00
    static System::Security::Cryptography::TripleDES* Create();
    // static public System.Boolean IsWeakKey(System.Byte[] rgbKey)
    // Offset: 0x196E8FC
    static bool IsWeakKey(::Array<uint8_t>* rgbKey);
    // static private System.Boolean EqualBytes(System.Byte[] rgbKey, System.Int32 start1, System.Int32 start2, System.Int32 count)
    // Offset: 0x196EDC4
    static bool EqualBytes(::Array<uint8_t>* rgbKey, int start1, int start2, int count);
    // static private System.Boolean IsLegalKeySize(System.Byte[] rgbKey)
    // Offset: 0x196ECC8
    static bool IsLegalKeySize(::Array<uint8_t>* rgbKey);
    // static private System.Void .cctor()
    // Offset: 0x196EFA8
    static void _cctor();
    // protected System.Void .ctor()
    // Offset: 0x196E784
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TripleDES* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::TripleDES::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TripleDES*, creationType>()));
    }
    // public override System.Byte[] get_Key()
    // Offset: 0x196E828
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Byte[] SymmetricAlgorithm::get_Key_NEW()
    ::Array<uint8_t>* get_Key();
    // public override System.Void set_Key(System.Byte[] value)
    // Offset: 0x196EA50
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::set_Key_NEW(System.Byte[] value)
    void set_Key(::Array<uint8_t>* value);
  }; // System.Security.Cryptography.TripleDES
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::TripleDES*, "System.Security.Cryptography", "TripleDES");
