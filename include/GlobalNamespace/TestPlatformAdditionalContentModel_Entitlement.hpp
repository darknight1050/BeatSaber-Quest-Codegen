// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TestPlatformAdditionalContentModel
#include "GlobalNamespace/TestPlatformAdditionalContentModel.hpp"
// Including type: AdditionalContentModel/EntitlementStatus
#include "GlobalNamespace/AdditionalContentModel.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: TestPlatformAdditionalContentModel/Entitlement
  // [] Offset: FFFFFFFF
  class TestPlatformAdditionalContentModel::Entitlement : public ::Il2CppObject {
    public:
    // public System.String id
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* id;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public AdditionalContentModel/EntitlementStatus status
    // Size: 0x4
    // Offset: 0x18
    GlobalNamespace::AdditionalContentModel::EntitlementStatus status;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AdditionalContentModel::EntitlementStatus) == 0x4);
    // Creating value type constructor for type: Entitlement
    Entitlement(::Il2CppString* id_ = {}, GlobalNamespace::AdditionalContentModel::EntitlementStatus status_ = {}) noexcept : id{id_}, status{status_} {}
    // public System.Void .ctor()
    // Offset: 0x101CAD4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestPlatformAdditionalContentModel::Entitlement* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TestPlatformAdditionalContentModel::Entitlement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestPlatformAdditionalContentModel::Entitlement*, creationType>()));
    }
  }; // TestPlatformAdditionalContentModel/Entitlement
  #pragma pack(pop)
  static check_size<sizeof(TestPlatformAdditionalContentModel::Entitlement), 24 + sizeof(GlobalNamespace::AdditionalContentModel::EntitlementStatus)> __GlobalNamespace_TestPlatformAdditionalContentModel_EntitlementSizeCheck;
  static_assert(sizeof(TestPlatformAdditionalContentModel::Entitlement) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TestPlatformAdditionalContentModel::Entitlement*, "", "TestPlatformAdditionalContentModel/Entitlement");
