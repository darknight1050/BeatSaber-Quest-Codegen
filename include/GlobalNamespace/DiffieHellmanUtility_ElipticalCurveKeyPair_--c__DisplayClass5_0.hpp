// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: DiffieHellmanUtility/ElipticalCurveKeyPair
#include "GlobalNamespace/DiffieHellmanUtility_ElipticalCurveKeyPair.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: DiffieHellmanUtility/ElipticalCurveKeyPair/<>c__DisplayClass5_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D05800
  class DiffieHellmanUtility::ElipticalCurveKeyPair::$$c__DisplayClass5_0 : public ::Il2CppObject {
    public:
    // public DiffieHellmanUtility/ElipticalCurveKeyPair <>4__this
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::DiffieHellmanUtility::ElipticalCurveKeyPair* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::DiffieHellmanUtility::ElipticalCurveKeyPair*) == 0x8);
    // public System.Byte[] clientPublicKey
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* clientPublicKey;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass5_0
    $$c__DisplayClass5_0(GlobalNamespace::DiffieHellmanUtility::ElipticalCurveKeyPair* $$4__this_ = {}, ::Array<uint8_t>* clientPublicKey_ = {}) noexcept : $$4__this{$$4__this_}, clientPublicKey{clientPublicKey_} {}
    // System.Byte[] <GetPreMasterSecretAsync>b__0()
    // Offset: 0x1210F40
    ::Array<uint8_t>* $GetPreMasterSecretAsync$b__0();
    // public System.Void .ctor()
    // Offset: 0x1210EC0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DiffieHellmanUtility::ElipticalCurveKeyPair::$$c__DisplayClass5_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DiffieHellmanUtility::ElipticalCurveKeyPair::$$c__DisplayClass5_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DiffieHellmanUtility::ElipticalCurveKeyPair::$$c__DisplayClass5_0*, creationType>()));
    }
  }; // DiffieHellmanUtility/ElipticalCurveKeyPair/<>c__DisplayClass5_0
  #pragma pack(pop)
  static check_size<sizeof(DiffieHellmanUtility::ElipticalCurveKeyPair::$$c__DisplayClass5_0), 24 + sizeof(::Array<uint8_t>*)> __GlobalNamespace_DiffieHellmanUtility_ElipticalCurveKeyPair_$$c__DisplayClass5_0SizeCheck;
  static_assert(sizeof(DiffieHellmanUtility::ElipticalCurveKeyPair::$$c__DisplayClass5_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DiffieHellmanUtility::ElipticalCurveKeyPair::$$c__DisplayClass5_0*, "", "DiffieHellmanUtility/ElipticalCurveKeyPair/<>c__DisplayClass5_0");
