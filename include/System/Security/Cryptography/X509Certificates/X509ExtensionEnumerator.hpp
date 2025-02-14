// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
}
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Extension
  class X509Extension;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator
  class X509ExtensionEnumerator : public ::Il2CppObject/*, public System::Collections::IEnumerator*/ {
    public:
    // private System.Collections.IEnumerator enumerator
    // Size: 0x8
    // Offset: 0x10
    System::Collections::IEnumerator* enumerator;
    // Field size check
    static_assert(sizeof(System::Collections::IEnumerator*) == 0x8);
    // Creating value type constructor for type: X509ExtensionEnumerator
    X509ExtensionEnumerator(System::Collections::IEnumerator* enumerator_ = {}) noexcept : enumerator{enumerator_} {}
    // Creating interface conversion operator: operator System::Collections::IEnumerator
    operator System::Collections::IEnumerator() noexcept {
      return *reinterpret_cast<System::Collections::IEnumerator*>(this);
    }
    // Creating conversion operator: operator System::Collections::IEnumerator*
    constexpr operator System::Collections::IEnumerator*() const noexcept {
      return enumerator;
    }
    // System.Void .ctor(System.Collections.ArrayList list)
    // Offset: 0x183A118
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509ExtensionEnumerator* New_ctor(System::Collections::ArrayList* list) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X509ExtensionEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509ExtensionEnumerator*, creationType>(list)));
    }
    // public System.Security.Cryptography.X509Certificates.X509Extension get_Current()
    // Offset: 0x1838190
    System::Security::Cryptography::X509Certificates::X509Extension* get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x183A228
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Boolean MoveNext()
    // Offset: 0x1838284
    bool MoveNext();
    // public System.Void Reset()
    // Offset: 0x183A2DC
    void Reset();
  }; // System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator
  #pragma pack(pop)
  static check_size<sizeof(X509ExtensionEnumerator), 16 + sizeof(System::Collections::IEnumerator*)> __System_Security_Cryptography_X509Certificates_X509ExtensionEnumeratorSizeCheck;
  static_assert(sizeof(X509ExtensionEnumerator) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509ExtensionEnumerator*, "System.Security.Cryptography.X509Certificates", "X509ExtensionEnumerator");
