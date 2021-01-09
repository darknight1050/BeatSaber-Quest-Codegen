// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  // Autogenerated type: RandomValueToShader
  // [] Offset: FFFFFFFF
  class RandomValueToShader : public GlobalNamespace::PersistentScriptableObject {
    public:
    // private System.Int32 _lastFrameNum
    // Size: 0x4
    // Offset: 0x18
    int lastFrameNum;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: RandomValueToShader
    RandomValueToShader(int lastFrameNum_ = {}) noexcept : lastFrameNum{lastFrameNum_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDA4D40
    // Get static field: static private readonly System.Int32 _randomValueID
    static int _get__randomValueID();
    // Set static field: static private readonly System.Int32 _randomValueID
    static void _set__randomValueID(int value);
    // public System.Void SetRandomValueToShaders()
    // Offset: 0x1878218
    void SetRandomValueToShaders();
    // public System.Void .ctor()
    // Offset: 0x18812A4
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RandomValueToShader* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RandomValueToShader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RandomValueToShader*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x18812B4
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // RandomValueToShader
  static check_size<sizeof(RandomValueToShader), 24 + sizeof(int)> __GlobalNamespace_RandomValueToShaderSizeCheck;
  static_assert(sizeof(RandomValueToShader) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RandomValueToShader*, "", "RandomValueToShader");
#pragma pack(pop)
