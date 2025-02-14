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
  // Forward declaring type: FadeInOutController
  class FadeInOutController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: FadeOutInstantly
  class FadeOutInstantly : public UnityEngine::MonoBehaviour {
    public:
    // [InjectAttribute] Offset: 0xE00A78
    // private FadeInOutController _fadeInOut
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::FadeInOutController* fadeInOut;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FadeInOutController*) == 0x8);
    // Creating value type constructor for type: FadeOutInstantly
    FadeOutInstantly(GlobalNamespace::FadeInOutController* fadeInOut_ = {}) noexcept : fadeInOut{fadeInOut_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x2345130
    void Start();
    // public System.Void .ctor()
    // Offset: 0x234514C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FadeOutInstantly* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FadeOutInstantly::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FadeOutInstantly*, creationType>()));
    }
  }; // FadeOutInstantly
  #pragma pack(pop)
  static check_size<sizeof(FadeOutInstantly), 24 + sizeof(GlobalNamespace::FadeInOutController*)> __GlobalNamespace_FadeOutInstantlySizeCheck;
  static_assert(sizeof(FadeOutInstantly) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FadeOutInstantly*, "", "FadeOutInstantly");
