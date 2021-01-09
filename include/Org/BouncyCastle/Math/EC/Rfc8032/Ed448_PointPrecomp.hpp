// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.Rfc8032.Ed448
#include "Org/BouncyCastle/Math/EC/Rfc8032/Ed448.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Math.EC.Rfc8032
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
  // Size: 0x20
  // Autogenerated type: Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointPrecomp
  // [] Offset: FFFFFFFF
  class Ed448::PointPrecomp : public ::Il2CppObject {
    public:
    // System.UInt32[] x
    // Size: 0x8
    // Offset: 0x10
    ::Array<uint>* x;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // System.UInt32[] y
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint>* y;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // Creating value type constructor for type: PointPrecomp
    PointPrecomp(::Array<uint>* x_ = {}, ::Array<uint>* y_ = {}) noexcept : x{x_}, y{y_} {}
    // public System.Void .ctor()
    // Offset: 0x1791870
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Ed448::PointPrecomp* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointPrecomp::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Ed448::PointPrecomp*, creationType>()));
    }
  }; // Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointPrecomp
  static check_size<sizeof(Ed448::PointPrecomp), 24 + sizeof(::Array<uint>*)> __Org_BouncyCastle_Math_EC_Rfc8032_Ed448_PointPrecompSizeCheck;
  static_assert(sizeof(Ed448::PointPrecomp) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointPrecomp*, "Org.BouncyCastle.Math.EC.Rfc8032", "Ed448/PointPrecomp");
#pragma pack(pop)
