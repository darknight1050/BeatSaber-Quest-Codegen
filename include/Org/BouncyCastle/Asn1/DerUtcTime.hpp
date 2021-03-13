// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.Asn1Object
#include "Org/BouncyCastle/Asn1/Asn1Object.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: DateTime
  struct DateTime;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerOutputStream
  class DerOutputStream;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.DerUtcTime
  // [] Offset: FFFFFFFF
  class DerUtcTime : public Org::BouncyCastle::Asn1::Asn1Object {
    public:
    // private readonly System.String time
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* time;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: DerUtcTime
    DerUtcTime(::Il2CppString* time_ = {}) noexcept : time{time_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return time;
    }
    // System.Void .ctor(System.Byte[] bytes)
    // Offset: 0x15417BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DerUtcTime* New_ctor(::Array<uint8_t>* bytes) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::DerUtcTime::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DerUtcTime*, creationType>(bytes)));
    }
    // public System.DateTime ToAdjustedDateTime()
    // Offset: 0x1551F04
    System::DateTime ToAdjustedDateTime();
    // private System.DateTime ParseDateString(System.String dateStr, System.String formatStr)
    // Offset: 0x1551FE4
    System::DateTime ParseDateString(::Il2CppString* dateStr, ::Il2CppString* formatStr);
    // public System.String get_TimeString()
    // Offset: 0x15520A8
    ::Il2CppString* get_TimeString();
    // public System.String get_AdjustedTimeString()
    // Offset: 0x1551F5C
    ::Il2CppString* get_AdjustedTimeString();
    // private System.Byte[] GetOctets()
    // Offset: 0x1552460
    ::Array<uint8_t>* GetOctets();
    // override System.Void Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    // Offset: 0x155246C
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Void Asn1Object::Encode_NEW(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    void Encode(Org::BouncyCastle::Asn1::DerOutputStream* derOut);
    // protected override System.Boolean Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    // Offset: 0x15524A8
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Boolean Asn1Object::Asn1Equals_NEW(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    bool Asn1Equals(Org::BouncyCastle::Asn1::Asn1Object* asn1Object);
    // protected override System.Int32 Asn1GetHashCode()
    // Offset: 0x155255C
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Int32 Asn1Object::Asn1GetHashCode_NEW()
    int Asn1GetHashCode();
    // public override System.String ToString()
    // Offset: 0x1552578
    // Implemented from: System.Object
    // Base method: System.String Object::ToString_NEW()
    ::Il2CppString* ToString();
  }; // Org.BouncyCastle.Asn1.DerUtcTime
  #pragma pack(pop)
  static check_size<sizeof(DerUtcTime), 16 + sizeof(::Il2CppString*)> __Org_BouncyCastle_Asn1_DerUtcTimeSizeCheck;
  static_assert(sizeof(DerUtcTime) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::DerUtcTime*, "Org.BouncyCastle.Asn1", "DerUtcTime");
