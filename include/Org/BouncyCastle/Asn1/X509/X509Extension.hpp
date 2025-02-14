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
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1OctetString
  class Asn1OctetString;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.X509.X509Extension
  class X509Extension : public ::Il2CppObject {
    public:
    // System.Boolean critical
    // Size: 0x1
    // Offset: 0x10
    bool critical;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: critical and: value
    char __padding0[0x7] = {};
    // Org.BouncyCastle.Asn1.Asn1OctetString value
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Asn1::Asn1OctetString* value;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::Asn1OctetString*) == 0x8);
    // Creating value type constructor for type: X509Extension
    X509Extension(bool critical_ = {}, Org::BouncyCastle::Asn1::Asn1OctetString* value_ = {}) noexcept : critical{critical_}, value{value_} {}
    // public System.Void .ctor(System.Boolean critical, Org.BouncyCastle.Asn1.Asn1OctetString value)
    // Offset: 0x19F29C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Extension* New_ctor(bool critical, Org::BouncyCastle::Asn1::Asn1OctetString* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::X509::X509Extension::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Extension*, creationType>(critical, value)));
    }
    // public System.Boolean get_IsCritical()
    // Offset: 0x19F2A04
    bool get_IsCritical();
    // public Org.BouncyCastle.Asn1.Asn1OctetString get_Value()
    // Offset: 0x19F2A0C
    Org::BouncyCastle::Asn1::Asn1OctetString* get_Value();
    // static public Org.BouncyCastle.Asn1.Asn1Object ConvertValueToObject(Org.BouncyCastle.Asn1.X509.X509Extension ext)
    // Offset: 0x19EBB7C
    static Org::BouncyCastle::Asn1::Asn1Object* ConvertValueToObject(Org::BouncyCastle::Asn1::X509::X509Extension* ext);
    // public override System.Int32 GetHashCode()
    // Offset: 0x19F2A14
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x19F2A50
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
  }; // Org.BouncyCastle.Asn1.X509.X509Extension
  #pragma pack(pop)
  static check_size<sizeof(X509Extension), 24 + sizeof(Org::BouncyCastle::Asn1::Asn1OctetString*)> __Org_BouncyCastle_Asn1_X509_X509ExtensionSizeCheck;
  static_assert(sizeof(X509Extension) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::X509Extension*, "Org.BouncyCastle.Asn1.X509", "X509Extension");
