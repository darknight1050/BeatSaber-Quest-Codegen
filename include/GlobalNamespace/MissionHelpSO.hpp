// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: MissionHelpSO
  class MissionHelpSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // private System.String _missionHelpId
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* missionHelpId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: MissionHelpSO
    MissionHelpSO(::Il2CppString* missionHelpId_ = {}) noexcept : missionHelpId{missionHelpId_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.String get_missionHelpId()
    // Offset: 0x104F57C
    ::Il2CppString* get_missionHelpId();
    // public System.Void .ctor()
    // Offset: 0x104F584
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionHelpSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MissionHelpSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionHelpSO*, creationType>()));
    }
  }; // MissionHelpSO
  #pragma pack(pop)
  static check_size<sizeof(MissionHelpSO), 24 + sizeof(::Il2CppString*)> __GlobalNamespace_MissionHelpSOSizeCheck;
  static_assert(sizeof(MissionHelpSO) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionHelpSO*, "", "MissionHelpSO");
