// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.Asn1Encodable
#include "Org/BouncyCastle/Asn1/Asn1Encodable.hpp"
// Including type: Org.BouncyCastle.Asn1.IAsn1Choice
#include "Org/BouncyCastle/Asn1/IAsn1Choice.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1TaggedObject
  class Asn1TaggedObject;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.X509.DistributionPointName
  class DistributionPointName : public Org::BouncyCastle::Asn1::Asn1Encodable/*, public Org::BouncyCastle::Asn1::IAsn1Choice*/ {
    public:
    // readonly Org.BouncyCastle.Asn1.Asn1Encodable name
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Asn1::Asn1Encodable* name;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::Asn1Encodable*) == 0x8);
    // readonly System.Int32 type
    // Size: 0x4
    // Offset: 0x18
    int type;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: DistributionPointName
    DistributionPointName(Org::BouncyCastle::Asn1::Asn1Encodable* name_ = {}, int type_ = {}) noexcept : name{name_}, type{type_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Asn1::IAsn1Choice
    operator Org::BouncyCastle::Asn1::IAsn1Choice() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Asn1::IAsn1Choice*>(this);
    }
    // static public Org.BouncyCastle.Asn1.X509.DistributionPointName GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject obj, System.Boolean explicitly)
    // Offset: 0x19ED770
    static Org::BouncyCastle::Asn1::X509::DistributionPointName* GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);
    // static public Org.BouncyCastle.Asn1.X509.DistributionPointName GetInstance(System.Object obj)
    // Offset: 0x19EDB98
    static Org::BouncyCastle::Asn1::X509::DistributionPointName* GetInstance(::Il2CppObject* obj);
    // public System.Void .ctor(Org.BouncyCastle.Asn1.Asn1TaggedObject obj)
    // Offset: 0x19EDD18
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DistributionPointName* New_ctor(Org::BouncyCastle::Asn1::Asn1TaggedObject* obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::X509::DistributionPointName::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DistributionPointName*, creationType>(obj)));
    }
    // private System.Void appendObject(System.Text.StringBuilder buf, System.String sep, System.String name, System.String val)
    // Offset: 0x19EDF24
    void appendObject(System::Text::StringBuilder* buf, ::Il2CppString* sep, ::Il2CppString* name, ::Il2CppString* val);
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x19EDD74
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
    // public override System.String ToString()
    // Offset: 0x19EDDF0
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // Org.BouncyCastle.Asn1.X509.DistributionPointName
  #pragma pack(pop)
  static check_size<sizeof(DistributionPointName), 24 + sizeof(int)> __Org_BouncyCastle_Asn1_X509_DistributionPointNameSizeCheck;
  static_assert(sizeof(DistributionPointName) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::DistributionPointName*, "Org.BouncyCastle.Asn1.X509", "DistributionPointName");
