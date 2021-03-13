// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorSO
  class ColorSO;
  // Forward declaring type: LightWithIdManager
  class LightWithIdManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: OneTimeLightColorEffect
  // [] Offset: FFFFFFFF
  class OneTimeLightColorEffect : public UnityEngine::MonoBehaviour {
    public:
    // private ColorSO _color
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::ColorSO* color;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSO*) == 0x8);
    // private System.Single _alpha
    // Size: 0x4
    // Offset: 0x20
    float alpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _lightsId
    // Size: 0x4
    // Offset: 0x24
    int lightsId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [InjectAttribute] Offset: 0xD2402C
    // private LightWithIdManager _lightWithIdManager
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::LightWithIdManager* lightWithIdManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LightWithIdManager*) == 0x8);
    // Creating value type constructor for type: OneTimeLightColorEffect
    OneTimeLightColorEffect(GlobalNamespace::ColorSO* color_ = {}, float alpha_ = {}, int lightsId_ = {}, GlobalNamespace::LightWithIdManager* lightWithIdManager_ = {}) noexcept : color{color_}, alpha{alpha_}, lightsId{lightsId_}, lightWithIdManager{lightWithIdManager_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Update()
    // Offset: 0x10DC950
    void Update();
    // public System.Void .ctor()
    // Offset: 0x10DC9C0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OneTimeLightColorEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OneTimeLightColorEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OneTimeLightColorEffect*, creationType>()));
    }
  }; // OneTimeLightColorEffect
  #pragma pack(pop)
  static check_size<sizeof(OneTimeLightColorEffect), 40 + sizeof(GlobalNamespace::LightWithIdManager*)> __GlobalNamespace_OneTimeLightColorEffectSizeCheck;
  static_assert(sizeof(OneTimeLightColorEffect) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OneTimeLightColorEffect*, "", "OneTimeLightColorEffect");
