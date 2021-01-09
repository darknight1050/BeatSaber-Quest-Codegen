// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  // Autogenerated type: EnvironmentTypeSO
  // [] Offset: FFFFFFFF
  class EnvironmentTypeSO : public UnityEngine::ScriptableObject {
    public:
    // private System.String _typeNameLocalizationKey
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* typeNameLocalizationKey;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: EnvironmentTypeSO
    EnvironmentTypeSO(::Il2CppString* typeNameLocalizationKey_ = {}) noexcept : typeNameLocalizationKey{typeNameLocalizationKey_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.String get_typeNameLocalizationKey()
    // Offset: 0x1A0ED18
    ::Il2CppString* get_typeNameLocalizationKey();
    // public System.Void .ctor()
    // Offset: 0x1A0ED20
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnvironmentTypeSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EnvironmentTypeSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnvironmentTypeSO*, creationType>()));
    }
  }; // EnvironmentTypeSO
  static check_size<sizeof(EnvironmentTypeSO), 24 + sizeof(::Il2CppString*)> __GlobalNamespace_EnvironmentTypeSOSizeCheck;
  static_assert(sizeof(EnvironmentTypeSO) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnvironmentTypeSO*, "", "EnvironmentTypeSO");
#pragma pack(pop)
