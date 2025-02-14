// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
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
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.AsymmetricAlgorithm
  // [ComVisibleAttribute] Offset: D7D764
  class AsymmetricAlgorithm : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // protected System.Int32 KeySizeValue
    // Size: 0x4
    // Offset: 0x10
    int KeySizeValue;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: KeySizeValue and: LegalKeySizesValue
    char __padding0[0x4] = {};
    // protected System.Security.Cryptography.KeySizes[] LegalKeySizesValue
    // Size: 0x8
    // Offset: 0x18
    ::Array<System::Security::Cryptography::KeySizes*>* LegalKeySizesValue;
    // Field size check
    static_assert(sizeof(::Array<System::Security::Cryptography::KeySizes*>*) == 0x8);
    // Creating value type constructor for type: AsymmetricAlgorithm
    AsymmetricAlgorithm(int KeySizeValue_ = {}, ::Array<System::Security::Cryptography::KeySizes*>* LegalKeySizesValue_ = {}) noexcept : KeySizeValue{KeySizeValue_}, LegalKeySizesValue{LegalKeySizesValue_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // public System.Void Dispose()
    // Offset: 0x1949EAC
    void Dispose();
    // public System.Void Clear()
    // Offset: 0x1949EB0
    void Clear();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1949F2C
    void Dispose(bool disposing);
    // public System.Int32 get_KeySize()
    // Offset: 0x1949F30
    int get_KeySize();
    // public System.Void set_KeySize(System.Int32 value)
    // Offset: 0x1949F38
    void set_KeySize(int value);
    // public System.Void FromXmlString(System.String xmlString)
    // Offset: 0x194A084
    void FromXmlString(::Il2CppString* xmlString);
    // public System.String ToXmlString(System.Boolean includePrivateParameters)
    // Offset: 0x194A0E4
    ::Il2CppString* ToXmlString(bool includePrivateParameters);
    // protected System.Void .ctor()
    // Offset: 0x1949EA4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AsymmetricAlgorithm* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::AsymmetricAlgorithm::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AsymmetricAlgorithm*, creationType>()));
    }
  }; // System.Security.Cryptography.AsymmetricAlgorithm
  #pragma pack(pop)
  static check_size<sizeof(AsymmetricAlgorithm), 24 + sizeof(::Array<System::Security::Cryptography::KeySizes*>*)> __System_Security_Cryptography_AsymmetricAlgorithmSizeCheck;
  static_assert(sizeof(AsymmetricAlgorithm) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::AsymmetricAlgorithm*, "System.Security.Cryptography", "AsymmetricAlgorithm");
