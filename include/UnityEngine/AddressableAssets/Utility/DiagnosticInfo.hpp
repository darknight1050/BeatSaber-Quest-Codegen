// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ResourceManagement.ResourceManager
#include "UnityEngine/ResourceManagement/ResourceManager.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ResourceManagement::Diagnostics
namespace UnityEngine::ResourceManagement::Diagnostics {
  // Forward declaring type: DiagnosticEvent
  struct DiagnosticEvent;
}
// Completed forward declares
// Type namespace: UnityEngine.AddressableAssets.Utility
namespace UnityEngine::AddressableAssets::Utility {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AddressableAssets.Utility.DiagnosticInfo
  class DiagnosticInfo : public ::Il2CppObject {
    public:
    // public System.String DisplayName
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* DisplayName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Int32 ObjectId
    // Size: 0x4
    // Offset: 0x18
    int ObjectId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: ObjectId and: Dependencies
    char __padding1[0x4] = {};
    // public System.Int32[] Dependencies
    // Size: 0x8
    // Offset: 0x20
    ::Array<int>* Dependencies;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // Creating value type constructor for type: DiagnosticInfo
    DiagnosticInfo(::Il2CppString* DisplayName_ = {}, int ObjectId_ = {}, ::Array<int>* Dependencies_ = {}) noexcept : DisplayName{DisplayName_}, ObjectId{ObjectId_}, Dependencies{Dependencies_} {}
    // public UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent CreateEvent(System.String category, UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventType eventType, System.Int32 frame, System.Int32 val)
    // Offset: 0x23A1258
    UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent CreateEvent(::Il2CppString* category, UnityEngine::ResourceManagement::ResourceManager::DiagnosticEventType eventType, int frame, int val);
    // public System.Void .ctor()
    // Offset: 0x23A12A0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DiagnosticInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AddressableAssets::Utility::DiagnosticInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DiagnosticInfo*, creationType>()));
    }
  }; // UnityEngine.AddressableAssets.Utility.DiagnosticInfo
  #pragma pack(pop)
  static check_size<sizeof(DiagnosticInfo), 32 + sizeof(::Array<int>*)> __UnityEngine_AddressableAssets_Utility_DiagnosticInfoSizeCheck;
  static_assert(sizeof(DiagnosticInfo) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::Utility::DiagnosticInfo*, "UnityEngine.AddressableAssets.Utility", "DiagnosticInfo");
