// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.X509Certificates.X509CertificateCollection
#include "System/Security/Cryptography/X509Certificates/X509CertificateCollection.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate2
  class X509Certificate2;
  // Forward declaring type: X509FindType
  struct X509FindType;
  // Forward declaring type: X509Certificate2Enumerator
  class X509Certificate2Enumerator;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x18
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509Certificate2Collection
  // [] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: D45554
  class X509Certificate2Collection : public System::Security::Cryptography::X509Certificates::X509CertificateCollection {
    public:
    // Creating value type constructor for type: X509Certificate2Collection
    X509Certificate2Collection() noexcept {}
    // Get static field: static private System.String[] newline_split
    static ::Array<::Il2CppString*>* _get_newline_split();
    // Set static field: static private System.String[] newline_split
    static void _set_newline_split(::Array<::Il2CppString*>* value);
    // public System.Void .ctor(System.Security.Cryptography.X509Certificates.X509Certificate2Collection certificates)
    // Offset: 0x145F804
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Certificate2Collection* New_ctor(System::Security::Cryptography::X509Certificates::X509Certificate2Collection* certificates) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X509Certificate2Collection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Certificate2Collection*, creationType>(certificates)));
    }
    // public System.Security.Cryptography.X509Certificates.X509Certificate2 get_Item(System.Int32 index)
    // Offset: 0x145F8E4
    System::Security::Cryptography::X509Certificates::X509Certificate2* get_Item(int index);
    // public System.Int32 Add(System.Security.Cryptography.X509Certificates.X509Certificate2 certificate)
    // Offset: 0x145FA18
    int Add(System::Security::Cryptography::X509Certificates::X509Certificate2* certificate);
    // public System.Void AddRange(System.Security.Cryptography.X509Certificates.X509Certificate2Collection certificates)
    // Offset: 0x145F834
    void AddRange(System::Security::Cryptography::X509Certificates::X509Certificate2Collection* certificates);
    // public System.Boolean Contains(System.Security.Cryptography.X509Certificates.X509Certificate2 certificate)
    // Offset: 0x145FAC8
    bool Contains(System::Security::Cryptography::X509Certificates::X509Certificate2* certificate);
    // public System.Security.Cryptography.X509Certificates.X509Certificate2Collection Find(System.Security.Cryptography.X509Certificates.X509FindType findType, System.Object findValue, System.Boolean validOnly)
    // Offset: 0x145FE04
    System::Security::Cryptography::X509Certificates::X509Certificate2Collection* Find(System::Security::Cryptography::X509Certificates::X509FindType findType, ::Il2CppObject* findValue, bool validOnly);
    // public System.Security.Cryptography.X509Certificates.X509Certificate2Enumerator GetEnumerator()
    // Offset: 0x1461274
    System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator* GetEnumerator();
    // static private System.Void .cctor()
    // Offset: 0x14613A8
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x145F7F4
    // Implemented from: System.Security.Cryptography.X509Certificates.X509CertificateCollection
    // Base method: System.Void X509CertificateCollection::.ctor()
    // Base method: System.Void CollectionBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Certificate2Collection* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X509Certificate2Collection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Certificate2Collection*, creationType>()));
    }
  }; // System.Security.Cryptography.X509Certificates.X509Certificate2Collection
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509Certificate2Collection*, "System.Security.Cryptography.X509Certificates", "X509Certificate2Collection");
#pragma pack(pop)
