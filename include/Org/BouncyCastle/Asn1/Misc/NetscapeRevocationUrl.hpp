// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.DerIA5String
#include "Org/BouncyCastle/Asn1/DerIA5String.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Asn1.Misc
namespace Org::BouncyCastle::Asn1::Misc {
  // Size: 0x18
  // Autogenerated type: Org.BouncyCastle.Asn1.Misc.NetscapeRevocationUrl
  // [] Offset: FFFFFFFF
  class NetscapeRevocationUrl : public Org::BouncyCastle::Asn1::DerIA5String {
    public:
    // Creating value type constructor for type: NetscapeRevocationUrl
    NetscapeRevocationUrl() noexcept {}
    // public System.Void .ctor(Org.BouncyCastle.Asn1.DerIA5String str)
    // Offset: 0x13F6800
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetscapeRevocationUrl* New_ctor(Org::BouncyCastle::Asn1::DerIA5String* str) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::Misc::NetscapeRevocationUrl::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetscapeRevocationUrl*, creationType>(str)));
    }
    // public override System.String ToString()
    // Offset: 0x13F6844
    // Implemented from: Org.BouncyCastle.Asn1.DerStringBase
    // Base method: System.String DerStringBase::ToString()
    ::Il2CppString* ToString();
  }; // Org.BouncyCastle.Asn1.Misc.NetscapeRevocationUrl
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Misc::NetscapeRevocationUrl*, "Org.BouncyCastle.Asn1.Misc", "NetscapeRevocationUrl");
#pragma pack(pop)
