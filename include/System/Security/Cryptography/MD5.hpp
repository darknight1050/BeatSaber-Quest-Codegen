// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.HashAlgorithm
#include "System/Security/Cryptography/HashAlgorithm.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x25
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.MD5
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: C961F4
  class MD5 : public System::Security::Cryptography::HashAlgorithm {
    public:
    // Creating value type constructor for type: MD5
    MD5() noexcept {}
    // static public System.Security.Cryptography.MD5 Create()
    // Offset: 0x17DE728
    static System::Security::Cryptography::MD5* Create();
    // protected System.Void .ctor()
    // Offset: 0x17DE6FC
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MD5* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::MD5::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MD5*, creationType>()));
    }
  }; // System.Security.Cryptography.MD5
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::MD5*, "System.Security.Cryptography", "MD5");
