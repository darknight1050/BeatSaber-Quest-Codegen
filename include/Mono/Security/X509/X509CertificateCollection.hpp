// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.CollectionBase
#include "System/Collections/CollectionBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security::X509
namespace Mono::Security::X509 {
  // Forward declaring type: X509Certificate
  class X509Certificate;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: Mono.Security.X509
namespace Mono::Security::X509 {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.X509.X509CertificateCollection
  // [DefaultMemberAttribute] Offset: D86658
  class X509CertificateCollection : public System::Collections::CollectionBase {
    public:
    // Nested type: Mono::Security::X509::X509CertificateCollection::X509CertificateEnumerator
    class X509CertificateEnumerator;
    // Creating value type constructor for type: X509CertificateCollection
    X509CertificateCollection() noexcept {}
    // public Mono.Security.X509.X509Certificate get_Item(System.Int32 index)
    // Offset: 0x238DFC0
    Mono::Security::X509::X509Certificate* get_Item(int index);
    // public System.Int32 Add(Mono.Security.X509.X509Certificate value)
    // Offset: 0x238E070
    int Add(Mono::Security::X509::X509Certificate* value);
    // public Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator GetEnumerator()
    // Offset: 0x238E120
    Mono::Security::X509::X509CertificateCollection::X509CertificateEnumerator* GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x238E24C
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public System.Void .ctor()
    // Offset: 0x238DFB8
    // Implemented from: System.Collections.CollectionBase
    // Base method: System.Void CollectionBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509CertificateCollection* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::X509::X509CertificateCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509CertificateCollection*, creationType>()));
    }
    // public override System.Int32 GetHashCode()
    // Offset: 0x238E278
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // Mono.Security.X509.X509CertificateCollection
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::X509::X509CertificateCollection*, "Mono.Security.X509", "X509CertificateCollection");
