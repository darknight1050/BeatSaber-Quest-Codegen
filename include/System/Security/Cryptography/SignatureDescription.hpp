// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.SignatureDescription
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: C96384
  class SignatureDescription : public ::Il2CppObject {
    public:
    // private System.String _strKey
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* strKey;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _strDigest
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* strDigest;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _strFormatter
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* strFormatter;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _strDeformatter
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* strDeformatter;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: SignatureDescription
    SignatureDescription(::Il2CppString* strKey_ = {}, ::Il2CppString* strDigest_ = {}, ::Il2CppString* strFormatter_ = {}, ::Il2CppString* strDeformatter_ = {}) noexcept : strKey{strKey_}, strDigest{strDigest_}, strFormatter{strFormatter_}, strDeformatter{strDeformatter_} {}
    // public System.Void set_KeyAlgorithm(System.String value)
    // Offset: 0x196D610
    void set_KeyAlgorithm(::Il2CppString* value);
    // public System.Void set_DigestAlgorithm(System.String value)
    // Offset: 0x196D618
    void set_DigestAlgorithm(::Il2CppString* value);
    // public System.Void set_FormatterAlgorithm(System.String value)
    // Offset: 0x196D620
    void set_FormatterAlgorithm(::Il2CppString* value);
    // public System.Void set_DeformatterAlgorithm(System.String value)
    // Offset: 0x196D628
    void set_DeformatterAlgorithm(::Il2CppString* value);
    // public System.Void .ctor()
    // Offset: 0x1964CC8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SignatureDescription* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::SignatureDescription::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SignatureDescription*, creationType>()));
    }
  }; // System.Security.Cryptography.SignatureDescription
  #pragma pack(pop)
  static check_size<sizeof(SignatureDescription), 40 + sizeof(::Il2CppString*)> __System_Security_Cryptography_SignatureDescriptionSizeCheck;
  static_assert(sizeof(SignatureDescription) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::SignatureDescription*, "System.Security.Cryptography", "SignatureDescription");
